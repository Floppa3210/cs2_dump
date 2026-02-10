#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "dump_data.hpp"

//=============================================================================
// INTERFACE DUMPING (modularized)
//=============================================================================

ModuleInfo* FindModule(const std::string& name);
extern std::vector<ModuleInfo> g_Modules;

using InstantiateInterfaceFn = void* (*)();

class CInterfaceRegister {
public:
    InstantiateInterfaceFn fnCreate;
    const char* szName;
    CInterfaceRegister* pNext;
};

inline uintptr_t GetExportAddress(uintptr_t base, const char* exportName) {
    if (!IsSafeToRead((void*)base, sizeof(IMAGE_DOS_HEADER))) return 0;

    auto dosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(base);
    if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE) return 0;

    auto ntHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>(base + dosHeader->e_lfanew);
    if (!IsSafeToRead(ntHeaders, sizeof(IMAGE_NT_HEADERS))) return 0;
    if (ntHeaders->Signature != IMAGE_NT_SIGNATURE) return 0;

    auto exportDirRVA = ntHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;
    if (!exportDirRVA) return 0;

    auto exportDir = reinterpret_cast<PIMAGE_EXPORT_DIRECTORY>(base + exportDirRVA);
    if (!IsSafeToRead(exportDir, sizeof(IMAGE_EXPORT_DIRECTORY))) return 0;

    auto names = reinterpret_cast<DWORD*>(base + exportDir->AddressOfNames);
    auto ordinals = reinterpret_cast<WORD*>(base + exportDir->AddressOfNameOrdinals);
    auto functions = reinterpret_cast<DWORD*>(base + exportDir->AddressOfFunctions);

    for (DWORD i = 0; i < exportDir->NumberOfNames; ++i) {
        auto name = reinterpret_cast<const char*>(base + names[i]);
        if (IsSafeToRead(name, 1) && strcmp(name, exportName) == 0)
            return base + functions[ordinals[i]];
    }
    return 0;
}

inline void DumpInterfaces(const std::string& moduleName) {
    auto mod = FindModule(moduleName);
    if (!mod) return;

    uintptr_t createInterface = GetExportAddress(mod->base, "CreateInterface");
    if (!createInterface) return;

    // Find s_pInterfaceRegs pointer in CreateInterface
    for (int i = 0; i < 100; i++) {
        uint8_t* code = reinterpret_cast<uint8_t*>(createInterface + i);
        if (!IsSafeToRead(code, 7)) break;

        // Look for MOV reg, [rip+offset]
        if ((code[0] == 0x4C && code[1] == 0x8B && (code[2] & 0xC7) == 0x05) ||
            (code[0] == 0x48 && code[1] == 0x8B && (code[2] & 0xC7) == 0x0D)) {
            int32_t offset = 0;
            if (!ReadInt32(reinterpret_cast<uintptr_t>(code + 3), offset)) {
                continue;
            }
            uintptr_t regAddr = (uintptr_t)(code + 7 + offset);

            if (IsSafeToRead((void*)regAddr, 8)) {
                uintptr_t regHead = 0;
                if (!ReadPtr(regAddr, regHead)) {
                    continue;
                }
                CInterfaceRegister* pReg = reinterpret_cast<CInterfaceRegister*>(regHead);

                std::vector<FoundInterface> moduleInterfaces;
                std::set<std::string> seenNames;
                int iterCount = 0;

                while (pReg && IsSafeToRead(pReg, sizeof(CInterfaceRegister)) && iterCount < 1024) {
                    if (pReg->szName && IsSafeToRead(pReg->szName, 1)) {
                        std::string name = SafeReadCString(pReg->szName, 64);
                        if (!name.empty() && seenNames.insert(name).second) {
                            if (pReg->fnCreate) {
                                uintptr_t rva = reinterpret_cast<uintptr_t>(pReg->fnCreate) - mod->base;

                                FoundInterface iface;
                                iface.name = name;
                                iface.offset = rva;
                                moduleInterfaces.push_back(iface);
                            }
                        }
                    }
                    pReg = pReg->pNext;
                    ++iterCount;
                }

                if (!moduleInterfaces.empty()) {
                    g_Interfaces[moduleName] = moduleInterfaces;
                    g_Logger.Success("Interfaces", moduleName + ": " + std::to_string(moduleInterfaces.size()) + " interfaces");
                }
                break;
            }
        }
    }
}

inline std::vector<std::string> DiscoverCreateInterfaceModules() {
    std::vector<std::string> modules;
    modules.reserve(g_Modules.size());

    for (const auto& mod : g_Modules) {
        if (!mod.base || mod.size == 0) {
            continue;
        }
        if (GetExportAddress(mod.base, "CreateInterface")) {
            modules.push_back(mod.name);
        }
    }

    std::sort(modules.begin(), modules.end());
    modules.erase(std::unique(modules.begin(), modules.end()), modules.end());
    return modules;
}

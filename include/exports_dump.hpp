#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "dump_data.hpp"

//=============================================================================
// EXPORT DUMPING (modularized)
//=============================================================================

extern std::string g_OutputPath;
extern std::vector<ModuleInfo> g_Modules;

struct ModuleExport {
    std::string module;
    std::string name;
    uintptr_t rva;
};

extern std::vector<ModuleExport> g_ModuleExports;

inline void ScanExports() {
    g_ModuleExports.clear();

    for (const auto& mod : g_Modules) {
        if (!IsSafeToRead((void*)mod.base, sizeof(IMAGE_DOS_HEADER))) continue;

        auto dosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(mod.base);
        if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE) continue;

        auto ntHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>(mod.base + dosHeader->e_lfanew);
        if (!IsSafeToRead(ntHeaders, sizeof(IMAGE_NT_HEADERS))) continue;
        if (ntHeaders->Signature != IMAGE_NT_SIGNATURE) continue;

        auto exportDirRVA = ntHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;
        if (!exportDirRVA) continue;

        auto exportDir = reinterpret_cast<PIMAGE_EXPORT_DIRECTORY>(mod.base + exportDirRVA);
        if (!IsSafeToRead(exportDir, sizeof(IMAGE_EXPORT_DIRECTORY))) continue;

        auto names = reinterpret_cast<DWORD*>(mod.base + exportDir->AddressOfNames);
        auto ordinals = reinterpret_cast<WORD*>(mod.base + exportDir->AddressOfNameOrdinals);
        auto functions = reinterpret_cast<DWORD*>(mod.base + exportDir->AddressOfFunctions);

        const DWORD nameCount = exportDir->NumberOfNames;
        const DWORD funcCount = exportDir->NumberOfFunctions;
        const DWORD maxCount = 10000;

        DWORD limit = nameCount < maxCount ? nameCount : maxCount;
        for (DWORD i = 0; i < limit; ++i) {
            auto namePtr = reinterpret_cast<const char*>(mod.base + names[i]);
            if (!IsSafeToRead(namePtr, 1)) continue;

            std::string name = SafeReadCString(namePtr, 128);
            if (name.empty()) continue;

            WORD ord = ordinals[i];
            if (ord >= funcCount) continue;

            DWORD funcRva = functions[ord];

            ModuleExport exp;
            exp.module = mod.name;
            exp.name = name;
            exp.rva = funcRva;
            g_ModuleExports.push_back(exp);
        }
    }

    g_Logger.Success("Exports", "Found " + std::to_string(g_ModuleExports.size()) + " exports");
}

inline void WriteExportsJson() {
    std::ofstream out(g_OutputPath + "/exports.json");
    if (!out.is_open()) return;

    out << "{\n  \"exports\": [\n";
    for (size_t i = 0; i < g_ModuleExports.size(); i++) {
        const auto& exp = g_ModuleExports[i];
        out << "    {\"module\":\"" << JsonEscape(exp.module) << "\",\"name\":\"" << JsonEscape(exp.name)
            << "\",\"rva\":\"0x" << std::hex << exp.rva << std::dec << "\"}";
        out << (i < g_ModuleExports.size() - 1 ? "," : "") << "\n";
    }
    out << "  ]\n}\n";
    out.close();

    g_Logger.Success("Output", "exports.json written");
}

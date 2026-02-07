#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"

//=============================================================================
// VTABLE SCANNER - Find Virtual Function Tables (modularized)
//=============================================================================

extern std::vector<ModuleInfo> g_Modules;
extern std::string g_OutputPath;

struct VTable {
    std::string className;
    uintptr_t address;
    int functionCount;
    std::string module;
};

extern std::vector<VTable> g_VTables;

inline void ScanVTables() {
    g_Logger.Info("VTables", "Scanning for virtual function tables...");

    // VTables are found by looking for RTTI Complete Object Locator references
    // In x64, vtable[-1] points to RTTI COL

    for (auto& mod : g_Modules) {
        if (mod.name.find(".dll") == std::string::npos) continue;

        uint8_t* base = reinterpret_cast<uint8_t*>(mod.base);

        for (size_t offset = 0x1000; offset < mod.size - 0x100; offset += 8) {
            if (!IsSafeToRead(base + offset, 0x40)) continue;

            // Check for vtable pattern: sequence of function pointers
            uintptr_t ptr1 = 0;
            uintptr_t ptr2 = 0;
            uintptr_t ptr3 = 0;
            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset), ptr1)) continue;
            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset + 8), ptr2)) continue;
            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset + 16), ptr3)) continue;

            // All pointers should be in executable memory
            if (ptr1 < mod.base || ptr1 > mod.base + mod.size) continue;
            if (ptr2 < mod.base || ptr2 > mod.base + mod.size) continue;
            if (ptr3 < mod.base || ptr3 > mod.base + mod.size) continue;

            // Check previous qword for RTTI pointer
            if (offset >= 8) {
                uintptr_t rttiPtr = 0;
                if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset - 8), rttiPtr)) {
                    continue;
                }
                if (rttiPtr >= mod.base && rttiPtr < mod.base + mod.size) {
                    if (IsSafeToRead((void*)rttiPtr, 0x20)) {
                        // Try to extract class name from RTTI
                        int32_t signature = 0;
                        if (!ReadInt32(rttiPtr, signature)) {
                            continue;
                        }
                        if (signature == 0 || signature == 1) {
                            // Count function pointers
                            int funcCount = 0;
                            for (int i = 0; i < 200; i++) {
                                uintptr_t fptr = 0;
                                if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset + i * 8), fptr)) break;
                                if (fptr < mod.base || fptr > mod.base + mod.size) break;
                                funcCount++;
                            }

                            if (funcCount >= 3) {
                                VTable vt;
                                vt.address = mod.base + offset;
                                vt.functionCount = funcCount;
                                vt.module = mod.name;
                                vt.className = "VTable_" + std::to_string(offset);
                                g_VTables.push_back(vt);
                            }
                        }
                    }
                }
            }
        }
    }

    // Remove duplicate VTables by address
    std::sort(g_VTables.begin(), g_VTables.end(),
        [](const VTable& a, const VTable& b) { return a.address < b.address; });
    g_VTables.erase(std::unique(g_VTables.begin(), g_VTables.end(),
        [](const VTable& a, const VTable& b) { return a.address == b.address; }), g_VTables.end());

    g_Logger.Success("VTables", "Found " + std::to_string(g_VTables.size()) + " virtual tables");
}

inline void WriteVTablesJson() {
    std::ofstream out(g_OutputPath + "/vtables.json");
    if (!out.is_open()) return;

    out << "{\n  \"vtables\": [\n";
    for (size_t i = 0; i < g_VTables.size(); i++) {
        auto& vt = g_VTables[i];
        out << "    {\"class\":\"" << vt.className << "\",\"address\":\"0x" << std::hex << vt.address
            << std::dec << "\",\"functions\":" << vt.functionCount << ",\"module\":\"" << vt.module << "\"}";
        out << (i < g_VTables.size() - 1 ? "," : "") << "\n";
    }
    out << "  ]\n}\n";
    out.close();
    g_Logger.Success("Output", "vtables.json written (" + std::to_string(g_VTables.size()) + " vtables)");
}

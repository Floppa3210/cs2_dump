#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"

//=============================================================================
// RTTI SCANNER - Detect C++ classes via type_info (modularized)
//=============================================================================

extern std::vector<ModuleInfo> g_Modules;
extern std::string g_OutputPath;

struct RTTIClass {
    std::string name;
    uintptr_t vtable;
    std::string module;
};

extern std::vector<RTTIClass> g_RTTIClasses;

inline void ScanRTTI() {
    g_Logger.Info("RTTI", "Scanning for RTTI type_info...");

    // P0 MANDATORY: Hard limits to prevent freeze
    constexpr size_t MAX_SCAN_BYTES = 20 * 1024 * 1024;  // 20 MB max per module
    constexpr int MAX_RESULTS = 5000;  // 5000 classes max total
    constexpr int TIMEOUT_SECONDS = 5;  // 5 second watchdog

    auto startTime = std::chrono::steady_clock::now();
    int totalResults = 0;

    for (auto& mod : g_Modules) {
        // Watchdog check
        auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(
            std::chrono::steady_clock::now() - startTime);
        if (elapsed.count() >= TIMEOUT_SECONDS) {
            g_Logger.Warning("RTTI", "Watchdog timeout - stopping scan");
            break;
        }

        if (mod.name.find(".dll") == std::string::npos) continue;
        if (totalResults >= MAX_RESULTS) break;

        // RTTI type_info vtable pattern: ".?AV" prefix in type descriptor
        uintptr_t base = mod.base;
        size_t size = mod.size;

        // Limit scan size per module
        size_t scanSize = (size < MAX_SCAN_BYTES) ? size : MAX_SCAN_BYTES;

        if (!IsSafeToRead((void*)base, scanSize)) continue;

        uint8_t* data = reinterpret_cast<uint8_t*>(base);

        for (size_t i = 0; i < scanSize - 16 && totalResults < MAX_RESULTS; i++) {
            // Look for ".?AV" which marks RTTI class names
            if (data[i] == '.' && data[i + 1] == '?' && data[i + 2] == 'A' && data[i + 3] == 'V') {
                // Extract class name
                std::string name;
                for (size_t j = 4; j < 256 && data[i + j] != '@' && data[i + j] != 0; j++) {
                    char c = data[i + j];
                    if (c >= 32 && c < 127) name += c;
                    else break;
                }

                if (name.length() > 2 && name.length() < 128) {
                    RTTIClass cls;
                    cls.name = name;
                    cls.vtable = base + i;  // Note: This is type descriptor address, not vtable
                    cls.module = mod.name;
                    g_RTTIClasses.push_back(cls);
                    totalResults++;
                }
            }
        }

        if (scanSize < size) {
            g_Logger.Warning("RTTI", mod.name + ": Limited scan to " + std::to_string(scanSize / 1024 / 1024) + "MB");
        }
    }

    // Remove duplicates
    std::sort(g_RTTIClasses.begin(), g_RTTIClasses.end(),
        [](const RTTIClass& a, const RTTIClass& b) { return a.name < b.name; });
    g_RTTIClasses.erase(std::unique(g_RTTIClasses.begin(), g_RTTIClasses.end(),
        [](const RTTIClass& a, const RTTIClass& b) { return a.name == b.name; }), g_RTTIClasses.end());

    g_Logger.Success("RTTI", "Found " + std::to_string(g_RTTIClasses.size()) + " RTTI classes");
}

inline void WriteRTTIJson() {
    std::ofstream out(g_OutputPath + "/rtti/classes.json");
    if (!out.is_open()) return;

    out << "[\n";
    for (size_t i = 0; i < g_RTTIClasses.size(); i++) {
        auto& cls = g_RTTIClasses[i];
        out << "  {\"name\":\"" << cls.name << "\",\"module\":\"" << cls.module
            << "\",\"address\":\"0x" << std::hex << cls.vtable << "\"}";
        out << (i < g_RTTIClasses.size() - 1 ? "," : "") << "\n";
    }
    out << "]\n";
    out.close();
    g_Logger.Success("Output", "rtti/classes.json written (" + std::to_string(g_RTTIClasses.size()) + " classes)");
}

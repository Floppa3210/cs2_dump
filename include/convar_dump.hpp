#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"

//=============================================================================
// CONVAR SCANNER - Extract Console Variables (modularized)
//=============================================================================

extern std::vector<ModuleInfo> g_Modules;
extern std::string g_OutputPath;

struct ConVar {
    std::string name;
    std::string defaultValue;
    std::string description;
    std::string module;
    uintptr_t address;
};

extern std::vector<ConVar> g_ConVars;

inline void ScanConVars() {
    g_Logger.Info("ConVars", "Scanning for console variables...");

    // ConVars are typically found in tier0.dll or through the ConVar vtable
    // Pattern: ConVar name string followed by default value and description

    for (auto& mod : g_Modules) {
        if (mod.name.find("client") == std::string::npos &&
            mod.name.find("engine") == std::string::npos &&
            mod.name.find("server") == std::string::npos) continue;

        uint8_t* base = reinterpret_cast<uint8_t*>(mod.base);

        // Scan for ConVar-like structures
        // ConVar typically has: vtable ptr, name ptr, value, default value, flags, etc.
        for (size_t offset = 0; offset < mod.size - 0x100; offset += 8) {
            if (!IsSafeToRead(base + offset, 0x50)) continue;

            uintptr_t possibleVtable = 0;
            uintptr_t possibleName = 0;
            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset), possibleVtable)) continue;
            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset + 0x8), possibleName)) continue;

            // Validate vtable pointer
            if (possibleVtable < mod.base || possibleVtable > mod.base + mod.size) continue;
            if (possibleName < 0x10000) continue;

            // Try to read name
            std::string name = SafeReadCString(reinterpret_cast<const char*>(possibleName), 64);

            // ConVar names typically start with sv_, cl_, mp_, or other prefixes
            if (name.empty() || name.length() < 3) continue;
            if (name.find("_") == std::string::npos) continue;
            if (!isalpha(name[0])) continue;

            // Check for common prefixes (comprehensive list)
            bool hasPrefix = (
                name.substr(0, 3) == "sv_" || name.substr(0, 3) == "cl_" ||
                name.substr(0, 3) == "mp_" || name.substr(0, 4) == "net_" ||
                name.substr(0, 3) == "ui_" || name.substr(0, 4) == "bot_" ||
                name.substr(0, 5) == "spec_" || name.substr(0, 2) == "r_" ||
                name.substr(0, 4) == "snd_" || name.substr(0, 4) == "mat_" ||
                name.substr(0, 5) == "host_" || name.substr(0, 6) == "debug_" ||
                name.substr(0, 10) == "developer_" || name.substr(0, 4) == "fps_" ||
                name.substr(0, 7) == "engine_" || name.substr(0, 8) == "physics_" ||
                name.substr(0, 7) == "weapon_" || name.substr(0, 5) == "game_" ||
                name.substr(0, 4) == "hud_" || name.substr(0, 6) == "voice_" ||
                name.substr(0, 4) == "con_" || name.substr(0, 4) == "dsp_" ||
                name.substr(0, 4) == "joy_" || name.substr(0, 6) == "mouse_" ||
                name.substr(0, 5) == "sens_" || name.substr(0, 10) == "crosshair_" ||
                name.substr(0, 7) == "player_" || name.substr(0, 3) == "tv_" ||
                name.substr(0, 5) == "demo_" || name.substr(0, 7) == "replay_" ||
                name.substr(0, 6) == "steam_" || name.substr(0, 4) == "css_" ||
                name.substr(0, 5) == "rate_" || name.substr(0, 3) == "mm_"
            );

            if (hasPrefix && name.find(" ") == std::string::npos) {
                ConVar cv;
                cv.name = name;
                cv.module = mod.name;
                cv.address = mod.base + offset;

                // Try to read description at offset 0x28 or similar
                uintptr_t descPtr = 0;
                ReadPtr(reinterpret_cast<uintptr_t>(base + offset + 0x28), descPtr);
                if (descPtr > 0x10000) {
                    cv.description = SafeReadCString(reinterpret_cast<const char*>(descPtr), 256);
                }

                g_ConVars.push_back(cv);
            }
        }
    }

    // Remove duplicates
    std::sort(g_ConVars.begin(), g_ConVars.end(),
        [](const ConVar& a, const ConVar& b) { return a.name < b.name; });
    g_ConVars.erase(std::unique(g_ConVars.begin(), g_ConVars.end(),
        [](const ConVar& a, const ConVar& b) { return a.name == b.name; }), g_ConVars.end());

    g_Logger.Success("ConVars", "Found " + std::to_string(g_ConVars.size()) + " console variables");
}

inline void WriteConVarsJson() {
    std::ofstream out(g_OutputPath + "/convars.json");
    if (!out.is_open()) return;

    out << "{\n  \"convars\": [\n";
    for (size_t i = 0; i < g_ConVars.size(); i++) {
        auto& cv = g_ConVars[i];
        out << "    {\"name\":\"" << cv.name << "\",\"module\":\"" << cv.module
            << "\",\"address\":\"0x" << std::hex << cv.address << std::dec << "\"}";
        out << (i < g_ConVars.size() - 1 ? "," : "") << "\n";
    }
    out << "  ]\n}\n";
    out.close();
    g_Logger.Success("Output", "convars.json written (" + std::to_string(g_ConVars.size()) + " convars)");
}

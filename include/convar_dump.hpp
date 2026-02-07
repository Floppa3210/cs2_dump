#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "dump_data.hpp"

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
    g_ConVars.clear();

    constexpr size_t MAX_SCAN_BYTES_PER_MODULE = 64 * 1024 * 1024; // 64 MB
    constexpr int MAX_TOTAL_RESULTS = 12000;
    constexpr int MAX_SECONDS_TOTAL = 40;
    constexpr int MAX_SECONDS_PER_MODULE = 8;
    constexpr size_t STEP_BYTES = 16; // avoid over-dense 8-byte stepping
    constexpr bool kScanAllModules = false;

    auto isGameModule = [](const std::string& name) -> bool {
        static const std::set<std::string> kAllowed = {
            "cs2.exe",
            "client.dll",
            "engine2.dll",
            "server.dll",
            "tier0.dll",
            "vstdlib.dll"
        };
        return kAllowed.find(name) != kAllowed.end();
    };

    auto startTime = std::chrono::steady_clock::now();
    int modulesScanned = 0;

    // ConVars are typically found in tier0.dll or through the ConVar vtable
    // Pattern: ConVar name string followed by default value and description

    std::vector<const ModuleInfo*> orderedModules;
    orderedModules.reserve(g_Modules.size());
    for (const auto& mod : g_Modules) {
        if (isGameModule(mod.name)) orderedModules.push_back(&mod);
    }
    if (kScanAllModules) {
        for (const auto& mod : g_Modules) {
            if (!isGameModule(mod.name)) orderedModules.push_back(&mod);
        }
    }

    auto isPtrInGameModules = [&](uintptr_t ptr) -> bool {
        for (const auto& mod : g_Modules) {
            if (!isGameModule(mod.name)) continue;
            if (ptr >= mod.base && ptr < (mod.base + mod.size)) {
                return true;
            }
        }
        return false;
    };

    for (const auto* modPtr : orderedModules) {
        const auto& mod = *modPtr;
        const auto moduleStart = std::chrono::steady_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(
            std::chrono::steady_clock::now() - startTime);
        if (elapsed.count() >= MAX_SECONDS_TOTAL) {
            g_Logger.Warning("ConVars", "Global watchdog timeout reached, stopping ConVar scan");
            break;
        }
        if ((int)g_ConVars.size() >= MAX_TOTAL_RESULTS) {
            g_Logger.Warning("ConVars", "Reached max result cap, stopping ConVar scan");
            break;
        }

        if (!kScanAllModules && !isGameModule(mod.name)) continue;

        uint8_t* base = reinterpret_cast<uint8_t*>(mod.base);
        if (!base) continue;

        size_t scanLimit = mod.size;
        if (scanLimit > MAX_SCAN_BYTES_PER_MODULE) {
            scanLimit = MAX_SCAN_BYTES_PER_MODULE;
            g_Logger.Warning("ConVars", mod.name + ": Limited scan to 64MB");
        }

        // Scan for ConVar name strings directly
        // CS2 ConVars don't have traditional vtables - they use 160-byte structures
        if (scanLimit <= 0x100) continue;

        int foundInModule = 0;
        for (size_t offset = 0; offset <= (scanLimit - 0x20); offset += STEP_BYTES) {
            if ((offset & 0x7FFFF) == 0) {
                auto globalElapsed = std::chrono::duration_cast<std::chrono::seconds>(
                    std::chrono::steady_clock::now() - startTime);
                if (globalElapsed.count() >= MAX_SECONDS_TOTAL) {
                    g_Logger.Warning("ConVars", mod.name + ": watchdog timeout inside module");
                    break;
                }
                auto moduleElapsed = std::chrono::duration_cast<std::chrono::seconds>(
                    std::chrono::steady_clock::now() - moduleStart);
                if (moduleElapsed.count() >= MAX_SECONDS_PER_MODULE) {
                    g_Logger.Warning("ConVars", mod.name + ": per-module watchdog timeout");
                    break;
                }
            }

            if (!IsSafeToRead(base + offset, 0x60)) continue;

            // Try reading as a pointer to string (potential ConVar name)
            uintptr_t possibleName = 0;
            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset), possibleName)) continue;
            if (possibleName < 0x10000) continue;

            // Try to read name string
            std::string name = SafeReadCString(reinterpret_cast<const char*>(possibleName), 64);

            // ConVar names typically start with sv_, cl_, mp_, or other prefixes
            if (name.empty() || name.length() < 3 || name.length() > 64) continue;
            if (name.find("_") == std::string::npos) continue;
            if (!std::isalpha(static_cast<unsigned char>(name[0]))) continue;
            if (!std::all_of(name.begin(), name.end(), [](unsigned char c) {
                return std::isalnum(c) || c == '_' || c == '.';
            })) continue;

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
                // Verify this looks like a real ConVar by checking nearby structure
                // In CS2, ConVars are 160-byte structures. Try to find the structure start.
                bool validConVar = false;
                uintptr_t structAddrCandidate = 0;
                
                // Check if this could be within a ConVar structure
                // Try reading potential value/default value fields
                for (int backOffset = 0; backOffset <= 0x40; backOffset += 8) {
                    if (offset < (size_t)backOffset) continue;
                    
                    uintptr_t structAddr = reinterpret_cast<uintptr_t>(base + offset - backOffset);
                    if (!IsSafeToRead(reinterpret_cast<void*>(structAddr), 0xA0)) continue;
                    
                    // Look for reasonable values that indicate a ConVar
                    // Check various offsets for string pointers (default value, description)
                    uintptr_t field1 = 0, field2 = 0;
                    ReadPtr(structAddr + 0x10, field1);
                    ReadPtr(structAddr + 0x18, field2);
                    
                    // If we find additional string pointers nearby, likely a ConVar
                    if ((field1 > 0x10000 && field1 < 0x7FFF00000000) ||
                        (field2 > 0x10000 && field2 < 0x7FFF00000000)) {
                        validConVar = true;
                        structAddrCandidate = structAddr;
                        break;
                    }
                }
                
                // Also accept if we just found the name (relaxed validation)
                if (!validConVar) {
                    // Check if the string pointer itself looks valid
                    validConVar = isPtrInGameModules(possibleName) || (possibleName > 0x180000000);
                    structAddrCandidate = reinterpret_cast<uintptr_t>(base + offset);
                }

                if (validConVar) {
                    uintptr_t structAddr = structAddrCandidate ? structAddrCandidate
                        : reinterpret_cast<uintptr_t>(base + offset);
                    ConVar cv;
                    cv.name = name;
                    cv.module = mod.name;
                    cv.address = structAddr;

                    // Try to read description at nearby offsets
                    // In CS2 ConVar structure (160 bytes), description is usually at offset 0x30-0x40
                    uintptr_t descPtr = 0;
                    for (int descOffset = 0x28; descOffset <= 0x48; descOffset += 8) {
                        if (ReadPtr(structAddr + descOffset, descPtr) && descPtr > 0x10000) {
                            std::string desc = SafeReadCString(reinterpret_cast<const char*>(descPtr), 256);
                            if (!desc.empty() && desc.length() < 256) {
                                cv.description = desc;
                                break;
                            }
                        }
                    }
                    
                    // Try to read default value
                    uintptr_t defaultPtr = 0;
                    for (int valOffset = 0x10; valOffset <= 0x28; valOffset += 8) {
                        if (ReadPtr(structAddr + valOffset, defaultPtr) && defaultPtr > 0x10000) {
                            std::string val = SafeReadCString(reinterpret_cast<const char*>(defaultPtr), 64);
                            if (!val.empty() && val.length() < 64) {
                                cv.defaultValue = val;
                                break;
                            }
                        }
                    }

                    g_ConVars.push_back(cv);
                    foundInModule++;

                    if ((int)g_ConVars.size() >= MAX_TOTAL_RESULTS) {
                        break;
                    }
                }
            }
        }

        modulesScanned++;
        g_Logger.Info("ConVars", mod.name + ": candidates=" + std::to_string(foundInModule));
    }

    // Remove duplicates
    std::sort(g_ConVars.begin(), g_ConVars.end(),
        [](const ConVar& a, const ConVar& b) {
            if (a.module != b.module) return a.module < b.module;
            return a.name < b.name;
        });
    g_ConVars.erase(std::unique(g_ConVars.begin(), g_ConVars.end(),
        [](const ConVar& a, const ConVar& b) { return a.name == b.name && a.module == b.module; }), g_ConVars.end());

    g_Logger.Success("ConVars", "Found " + std::to_string(g_ConVars.size()) +
        " console variables across " + std::to_string(modulesScanned) + " modules");
}

inline void WriteConVarsJson() {
    std::filesystem::create_directories(g_OutputPath + "/convars");
    std::ofstream out(g_OutputPath + "/convars/convars.json");
    if (!out.is_open()) return;

    out << "{\n  \"convars\": [\n";
    for (size_t i = 0; i < g_ConVars.size(); i++) {
        auto& cv = g_ConVars[i];
        out << "    {\"name\":\"" << JsonEscape(cv.name) << "\",\"module\":\"" << JsonEscape(cv.module)
            << "\",\"address\":\"0x" << std::hex << cv.address << std::dec << "\"}";
        out << (i < g_ConVars.size() - 1 ? "," : "") << "\n";
    }
    out << "  ]\n}\n";
    out.close();
    g_Logger.Success("Output", "convars/convars.json written (" + std::to_string(g_ConVars.size()) + " convars)");
}

inline void WriteConVarsHpp() {
    std::filesystem::create_directories(g_OutputPath + "/convars");
    std::ofstream out(g_OutputPath + "/convars/convars.hpp");
    if (!out.is_open()) return;

    out << "// Auto-generated ConVar list\n";
    out << "#pragma once\n\n";
    out << "namespace cs2_dumper {\nnamespace convars {\n";
    for (const auto& cv : g_ConVars) {
        out << "constexpr const char* " << MakeCppIdentifier(cv.module + "_" + cv.name)
            << " = \"0x" << std::hex << cv.address << std::dec << "\";\n";
    }
    out << "} // namespace convars\n} // namespace cs2_dumper\n";
    g_Logger.Success("Output", "convars/convars.hpp written");
}

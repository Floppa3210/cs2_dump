#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "dump_data.hpp"
#include <unordered_set>
#include <cstring>

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

    constexpr size_t MAX_SCAN_BYTES_PER_MODULE = 48 * 1024 * 1024; // hard cap per module
    constexpr int MAX_TOTAL_RESULTS = 12000;
    constexpr int MAX_SECONDS_TOTAL = 36;
    constexpr int MAX_SECONDS_PER_MODULE = 7;
    constexpr size_t STEP_BYTES = 16;
    constexpr bool kScanAllModules = false;

    auto isGameModule = [](const std::string& name) -> bool {
        static const std::set<std::string> kAllowed = {
            "cs2.exe",
            "client.dll",
            "engine2.dll",
            "server.dll",
            "tier0.dll",
            "vstdlib.dll",
            "vstdlib_s64.dll",
            "inputsystem.dll"
        };
        return kAllowed.find(name) != kAllowed.end();
    };

    auto modulePriority = [](const std::string& name) -> int {
        if (name == "tier0.dll") return 0;
        if (name == "engine2.dll") return 1;
        if (name == "client.dll") return 2;
        if (name == "server.dll") return 3;
        if (name == "cs2.exe") return 4;
        return 5;
    };

    auto toLower = [](std::string value) -> std::string {
        std::transform(value.begin(), value.end(), value.begin(), [](unsigned char c) {
            return static_cast<char>(std::tolower(c));
        });
        return value;
    };

    auto startsWith = [](const std::string& value, const char* prefix) -> bool {
        const size_t len = std::strlen(prefix);
        return value.size() >= len && std::memcmp(value.data(), prefix, len) == 0;
    };

    auto isLikelyText = [](const std::string& value, size_t minLen, size_t maxLen) -> bool {
        if (value.size() < minLen || value.size() > maxLen) return false;
        int printable = 0;
        for (unsigned char c : value) {
            if ((c >= 32 && c <= 126) || c == '\t') {
                ++printable;
            }
        }
        return (printable * 100) / static_cast<int>(value.size()) >= 90;
    };

    auto tryReadLikelyString = [&](uintptr_t ptr, size_t maxLen, std::string& out) -> bool {
        out.clear();
        if (ptr < 0x10000) return false;
        out = SafeReadCString(reinterpret_cast<const char*>(ptr), maxLen);
        return isLikelyText(out, 1, maxLen);
    };

    auto isLikelyConVarName = [&](const std::string& rawName) -> bool {
        if (rawName.size() < 3 || rawName.size() > 64) return false;
        if (!std::isalpha(static_cast<unsigned char>(rawName[0]))) return false;
        if (rawName.find('_') == std::string::npos) return false;
        if (!std::all_of(rawName.begin(), rawName.end(), [](unsigned char c) {
            return std::isalnum(c) || c == '_' || c == '.';
        })) return false;

        const std::string name = toLower(rawName);
        static const char* kPrefixes[] = {
            "sv_", "cl_", "mp_", "net_", "ui_", "bot_", "spec_", "r_", "snd_", "mat_",
            "host_", "debug_", "developer_", "fps_", "engine_", "physics_", "weapon_",
            "game_", "hud_", "voice_", "con_", "dsp_", "joy_", "mouse_", "sens_",
            "crosshair_", "player_", "tv_", "demo_", "replay_", "steam_", "css_",
            "rate_", "mm_", "volume_", "cam_", "viewmodel_", "zoom_", "radar_"
        };
        for (const char* p : kPrefixes) {
            if (startsWith(name, p)) return true;
        }
        return false;
    };

    auto getSectionScanRanges = [&](const ModuleInfo& mod) -> std::vector<std::pair<uintptr_t, size_t>> {
        std::vector<std::pair<uintptr_t, size_t>> ranges;

        if (!IsSafeToRead(reinterpret_cast<void*>(mod.base), 0x1000)) {
            return ranges;
        }

        IMAGE_DOS_HEADER dos{};
        if (!SafeRead(mod.base, dos) || dos.e_magic != IMAGE_DOS_SIGNATURE) {
            return ranges;
        }

        const uintptr_t ntAddr = mod.base + static_cast<uintptr_t>(dos.e_lfanew);
        if (!IsSafeToRead(reinterpret_cast<void*>(ntAddr), 0x200)) {
            return ranges;
        }

#if defined(_WIN64)
        using NtHeadersT = IMAGE_NT_HEADERS64;
#else
        using NtHeadersT = IMAGE_NT_HEADERS32;
#endif
        NtHeadersT nt{};
        if (!SafeRead(ntAddr, nt) || nt.Signature != IMAGE_NT_SIGNATURE) {
            return ranges;
        }

        const uintptr_t sectionAddr = ntAddr + sizeof(uint32_t) + sizeof(IMAGE_FILE_HEADER) + nt.FileHeader.SizeOfOptionalHeader;
        const WORD sectionCount = nt.FileHeader.NumberOfSections;

        for (WORD i = 0; i < sectionCount; ++i) {
            IMAGE_SECTION_HEADER sec{};
            if (!SafeRead(sectionAddr + static_cast<uintptr_t>(i) * sizeof(IMAGE_SECTION_HEADER), sec)) {
                continue;
            }

            const DWORD ch = sec.Characteristics;
            const bool isExecutable = (ch & IMAGE_SCN_MEM_EXECUTE) != 0;
            const bool isDataLike = (ch & IMAGE_SCN_CNT_INITIALIZED_DATA) != 0 || (ch & IMAGE_SCN_MEM_WRITE) != 0;
            if (isExecutable || !isDataLike) {
                continue;
            }

            const size_t rawSize = static_cast<size_t>((std::max)(sec.SizeOfRawData, sec.Misc.VirtualSize));
            if (rawSize < 0x100) {
                continue;
            }

            uintptr_t start = mod.base + static_cast<uintptr_t>(sec.VirtualAddress);
            size_t size = rawSize;
            if (start < mod.base || start >= mod.base + mod.size) {
                continue;
            }
            if (start + size > mod.base + mod.size) {
                size = static_cast<size_t>((mod.base + mod.size) - start);
            }
            if (size >= 0x100 && IsSafeToRead(reinterpret_cast<void*>(start), std::min<size_t>(size, 0x1000))) {
                ranges.emplace_back(start, size);
            }
        }

        return ranges;
    };

    auto startTime = std::chrono::steady_clock::now();
    int modulesScanned = 0;
    bool stopAllScanning = false;

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
    std::stable_sort(orderedModules.begin(), orderedModules.end(),
        [&](const ModuleInfo* a, const ModuleInfo* b) {
            return modulePriority(a->name) < modulePriority(b->name);
        });

    auto isPtrInGameModules = [&](uintptr_t ptr) -> bool {
        for (const auto& mod : g_Modules) {
            if (!isGameModule(mod.name)) continue;
            if (ptr >= mod.base && ptr < (mod.base + mod.size)) {
                return true;
            }
        }
        return false;
    };

    std::unordered_set<std::string> seenNameModule;

    for (const auto* modPtr : orderedModules) {
        if (stopAllScanning) {
            break;
        }
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

        std::vector<std::pair<uintptr_t, size_t>> ranges = getSectionScanRanges(mod);
        if (ranges.empty()) {
            size_t fallbackSize = std::min<size_t>(mod.size, MAX_SCAN_BYTES_PER_MODULE);
            if (fallbackSize > 0x100) {
                ranges.emplace_back(mod.base, fallbackSize);
            }
        }
        if (ranges.empty()) {
            continue;
        }

        int foundInModule = 0;
        size_t bytesScannedInModule = 0;
        bool moduleTimedOut = false;
        bool globalTimedOut = false;
        for (const auto& [rangeStart, rangeSize] : ranges) {
            if (moduleTimedOut || globalTimedOut) {
                break;
            }
            if (rangeSize <= 0x20) {
                continue;
            }
            uint8_t* base = reinterpret_cast<uint8_t*>(rangeStart);
            if (!base) continue;

            const size_t scanLimit = std::min<size_t>(rangeSize, MAX_SCAN_BYTES_PER_MODULE);
            if (scanLimit <= 0x20) continue;

            for (size_t offset = 0; offset <= (scanLimit - 0x20); offset += STEP_BYTES) {
                auto globalElapsed = std::chrono::duration_cast<std::chrono::seconds>(
                    std::chrono::steady_clock::now() - startTime);
                if (globalElapsed.count() >= MAX_SECONDS_TOTAL) {
                    g_Logger.Warning("ConVars", mod.name + ": global watchdog timeout");
                    globalTimedOut = true;
                    break;
                }
                auto moduleElapsed = std::chrono::duration_cast<std::chrono::seconds>(
                    std::chrono::steady_clock::now() - moduleStart);
                if (moduleElapsed.count() >= MAX_SECONDS_PER_MODULE) {
                    g_Logger.Warning("ConVars", mod.name + ": per-module watchdog timeout");
                    moduleTimedOut = true;
                    break;
                }

                if (!IsSafeToRead(base + offset, 0x60)) continue;
                bytesScannedInModule += STEP_BYTES;

                uintptr_t possibleName = 0;
                if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset), possibleName)) continue;

                std::string name;
                if (!tryReadLikelyString(possibleName, 64, name)) continue;
                if (!isLikelyConVarName(name)) continue;

                const std::string key = mod.name + "::" + name;
                if (seenNameModule.find(key) != seenNameModule.end()) continue;

                int bestScore = -1;
                uintptr_t bestStruct = reinterpret_cast<uintptr_t>(base + offset);
                std::string bestDefault;
                std::string bestDescription;

                for (int backOffset = 0; backOffset <= 0x60; backOffset += 8) {
                    if (offset < static_cast<size_t>(backOffset)) continue;

                    const uintptr_t structAddr = reinterpret_cast<uintptr_t>(base + offset - backOffset);
                    if (!IsSafeToRead(reinterpret_cast<void*>(structAddr), 0x90)) continue;

                    int score = 0;
                    int textPtrCount = 0;
                    bool hasNameReference = false;
                    std::string candidateDefault;
                    std::string candidateDescription;

                    for (int fieldOffset = 0; fieldOffset <= 0x58; fieldOffset += 8) {
                        uintptr_t fieldPtr = 0;
                        if (!ReadPtr(structAddr + fieldOffset, fieldPtr)) continue;
                        if (fieldPtr == possibleName) {
                            hasNameReference = true;
                            score += 2;
                        }

                        std::string text;
                        if (!tryReadLikelyString(fieldPtr, 256, text)) continue;

                        ++textPtrCount;
                        if (text == name) {
                            hasNameReference = true;
                        } else if (candidateDefault.empty() &&
                                   isLikelyText(text, 1, 64) &&
                                   text.find(' ') == std::string::npos &&
                                   text.find('\n') == std::string::npos) {
                            candidateDefault = text;
                        } else if (candidateDescription.empty() && isLikelyText(text, 8, 256)) {
                            candidateDescription = text;
                        }
                    }

                    if (hasNameReference) score += 3;
                    if (textPtrCount >= 2) score += 2;
                    if (!candidateDefault.empty()) score += 2;
                    if (!candidateDescription.empty()) score += 2;
                    if (isPtrInGameModules(possibleName)) score += 1;

                    if (score > bestScore) {
                        bestScore = score;
                        bestStruct = structAddr;
                        bestDefault = candidateDefault;
                        bestDescription = candidateDescription;
                    }
                }

                if (bestScore >= 5) {
                    ConVar cv;
                    cv.name = name;
                    cv.module = mod.name;
                    cv.address = bestStruct;
                    cv.defaultValue = bestDefault;
                    cv.description = bestDescription;

                    g_ConVars.push_back(std::move(cv));
                    seenNameModule.insert(key);
                    ++foundInModule;

                    if ((int)g_ConVars.size() >= MAX_TOTAL_RESULTS) {
                        break;
                    }
                }

                if (!kScanAllModules && foundInModule == 0 && bytesScannedInModule >= (12 * 1024 * 1024)) {
                    // No signal in this module after a sizable pass; bail out early.
                    break;
                }
            }
        }

        modulesScanned++;
        g_Logger.Info("ConVars", mod.name + ": candidates=" + std::to_string(foundInModule) +
            ", scanned=" + std::to_string(bytesScannedInModule / 1024) + " KB");

        if (globalTimedOut) {
            stopAllScanning = true;
        }
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
            << "\",\"address\":\"0x" << std::hex << cv.address << std::dec << "\"";
        if (!cv.defaultValue.empty()) {
            out << ",\"default\":\"" << JsonEscape(cv.defaultValue) << "\"";
        }
        if (!cv.description.empty()) {
            out << ",\"description\":\"" << JsonEscape(cv.description) << "\"";
        }
        out << "}";
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

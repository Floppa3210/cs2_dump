// ============================================================================
// CS2 COMPLETE DUMPER
// ============================================================================
// Features:
// - Broad pattern coverage with runtime validation
// - Button scanning (attack, jump, duck, etc.)
// - Interface dumping
// - Formatted output (HPP, JSON, CS, RS)
// - Complete logging with timestamps
// ============================================================================

#include "include/common.hpp"
#include "include/logger.hpp"
#include "include/memory.hpp"
#include "include/pattern_scanner.hpp"
#include "include/patterns.hpp"
#include "include/dump_data.hpp"
#include "include/patterns_dump.hpp"
#include "include/buttons_dump.hpp"
#include "include/interfaces_dump.hpp"
#include "include/output_dump.hpp"
#include "include/exports_dump.hpp"
#include "include/rtti_dump.hpp"
#include "include/convar_dump.hpp"
#include "include/vtable_dump.hpp"
#include "include/pipeline_compat.hpp"

// Schema System (E1-E5 implementation)
#include "schemas.hpp"
#include "schema_dump.hpp"
#include "include/schema_tools.hpp"

// ============================================================================
// UTILITY FUNCTIONS
// ============================================================================

std::string GetCurrentTimestamp() {
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);
    std::tm tm;
    localtime_s(&tm, &time);
    char buf[64];
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &tm);
    return std::string(buf);
}

// ============================================================================
// MODULE MANAGEMENT
// ============================================================================

std::vector<ModuleInfo> g_Modules;

void GetLoadedModules() {
    g_Modules.clear();
    
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, GetCurrentProcessId());
    if (snap == INVALID_HANDLE_VALUE) return;
    
    MODULEENTRY32W me;
    me.dwSize = sizeof(me);
    
    if (Module32FirstW(snap, &me)) {
        do {
            ModuleInfo mod;
            mod.name = WStringToString(me.szModule);
            mod.base = reinterpret_cast<uintptr_t>(me.modBaseAddr);
            mod.size = me.modBaseSize;
            
            // Convert to lowercase for comparison
            std::string lower = mod.name;
            std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char c) {
                return static_cast<char>(std::tolower(c));
            });
            mod.name = lower;
            
            g_Modules.push_back(mod);
        } while (Module32NextW(snap, &me));
    }
    CloseHandle(snap);
    
    g_Logger.Success("Modules", "Found " + std::to_string(g_Modules.size()) + " modules");
}

ModuleInfo* FindModule(const std::string& name) {
    std::string lower = name;
    std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char c) {
        return static_cast<char>(std::tolower(c));
    });
    
    for (auto& mod : g_Modules) {
        if (mod.name == lower) return &mod;
    }
    return nullptr;
}

// ============================================================================
// PATTERN SCANNING
// ============================================================================

uintptr_t PatternScan(uintptr_t base, size_t size, const char* pattern) {
    if (!pattern || !*pattern) return 0;
    return PatternScanner::Scan(base, size, pattern);
}

uintptr_t ResolveRelativeAddress(uintptr_t address, int offset, int instrSize) {
    return PatternScanner::ResolveRelative(address, offset, instrSize);
}

// ============================================================================
// DATA STORAGE FOR OUTPUT
// ============================================================================

std::vector<FoundOffset> g_FoundOffsets;
std::map<std::string, std::vector<FoundInterface>> g_Interfaces;
std::vector<FoundButton> g_FoundButtons;
std::vector<PatternScanRecord> g_PatternScanRecords;
std::vector<ComponentInfo> g_ComponentGraph;
std::vector<ModuleExport> g_ModuleExports;
std::vector<RTTIClass> g_RTTIClasses;
std::vector<ConVar> g_ConVars;
std::vector<VTable> g_VTables;

std::string g_OutputPath;

namespace {
struct PreviousDumpState {
    bool hadPreviousDump = false;
    fs::path stagedPath;
    std::string previousBuild;
    double previousValidationRatio = -1.0;
};

constexpr bool kEnableButtonScan = true;
constexpr bool kEnableInterfaceDump = true;
constexpr bool kEnableExportDump = true;
constexpr bool kEnableRTTIDump = true;
constexpr bool kEnableConVarDump = true;
constexpr bool kEnableVTableDump = true;

std::string TrimCopy(std::string value) {
    auto notSpace = [](unsigned char c) { return !std::isspace(c); };
    value.erase(value.begin(), std::find_if(value.begin(), value.end(), notSpace));
    value.erase(std::find_if(value.rbegin(), value.rend(), notSpace).base(), value.end());
    return value;
}

std::string ToLowerCopy(std::string value) {
    std::transform(value.begin(), value.end(), value.begin(), [](unsigned char c) {
        return static_cast<char>(std::tolower(c));
    });
    return value;
}

std::string ReadFirstLineTrimmed(const fs::path& filePath) {
    std::ifstream in(filePath);
    if (!in.is_open()) {
        return {};
    }

    std::string line;
    std::getline(in, line);
    return TrimCopy(line);
}

double ReadValidationRatio(const fs::path& validationPath) {
    std::ifstream in(validationPath);
    if (!in.is_open()) {
        return -1.0;
    }

    const std::string content((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    std::smatch totalMatch;
    std::smatch validMatch;
    const std::regex totalRegex("\"total\"\\s*:\\s*(\\d+)");
    const std::regex validRegex("\"valid\"\\s*:\\s*(\\d+)");

    if (!std::regex_search(content, totalMatch, totalRegex) || !std::regex_search(content, validMatch, validRegex)) {
        return -1.0;
    }

    const int total = std::stoi(totalMatch[1].str());
    const int valid = std::stoi(validMatch[1].str());
    if (total <= 0) {
        return -1.0;
    }

    return static_cast<double>(valid) / static_cast<double>(total);
}

std::string ReadLatestVersionFolder(const fs::path& versionsPath) {
    if (!fs::exists(versionsPath) || !fs::is_directory(versionsPath)) {
        return {};
    }

    std::error_code ec;
    fs::file_time_type latestTime{};
    fs::path latestPath;
    bool foundAny = false;

    for (const auto& entry : fs::directory_iterator(versionsPath, ec)) {
        if (ec || !entry.is_directory()) {
            continue;
        }
        const auto ts = entry.last_write_time(ec);
        if (ec) {
            continue;
        }

        if (!foundAny || ts > latestTime) {
            foundAny = true;
            latestTime = ts;
            latestPath = entry.path();
        }
    }

    return foundAny ? latestPath.filename().string() : std::string();
}

std::string ReadPreviousBuild(const fs::path& outputPath) {
    std::string build = ReadFirstLineTrimmed(outputPath / "meta" / "current_build.txt");
    if (!build.empty()) {
        return build;
    }

    return ReadLatestVersionFolder(outputPath / "versions");
}

bool MovePathWithFallback(const fs::path& source, const fs::path& destination) {
    std::error_code ec;
    if (fs::exists(destination, ec)) {
        fs::remove_all(destination, ec);
        ec.clear();
    }

    fs::rename(source, destination, ec);
    if (!ec) {
        return true;
    }

    ec.clear();
    fs::copy(source, destination, fs::copy_options::recursive | fs::copy_options::overwrite_existing, ec);
    if (ec) {
        return false;
    }

    ec.clear();
    fs::remove_all(source, ec);
    return !ec;
}

PreviousDumpState StagePreviousDump(const fs::path& outputPath) {
    PreviousDumpState state;

    if (!fs::exists(outputPath)) {
        return state;
    }

    state.hadPreviousDump = true;
    state.previousBuild = ReadPreviousBuild(outputPath);
    state.previousValidationRatio = ReadValidationRatio(outputPath / "meta" / "validation_report.json");
    state.stagedPath = outputPath.parent_path() / (outputPath.filename().string() + ".previous_tmp");

    std::error_code ec;
    if (fs::exists(state.stagedPath, ec)) {
        fs::remove_all(state.stagedPath, ec);
    }

    if (!MovePathWithFallback(outputPath, state.stagedPath)) {
        throw std::runtime_error("Failed to stage previous dump directory for rotation.");
    }

    return state;
}

double ComputeCurrentValidationRatio() {
    if (g_ValidationResults.empty()) {
        return -1.0;
    }

    int validCount = 0;
    for (const auto& vr : g_ValidationResults) {
        if (vr.valid) {
            ++validCount;
        }
    }

    return static_cast<double>(validCount) / static_cast<double>(g_ValidationResults.size());
}

struct SemanticValidationEntry {
    std::string module;
    std::string name;
    bool valid = false;
    std::string reason;
    std::string details;
};

struct ModuleConfidenceEntry {
    std::string module;
    int structuralValid = 0;
    int structuralTotal = 0;
    int patternResolved = 0;
    int patternTotal = 0;
    int semanticValid = 0;
    int semanticTotal = 0;
    double structuralScore = 1.0;
    double patternScore = 1.0;
    double semanticScore = 1.0;
    double overallScore = 1.0;
    std::string tier = "high";
};

struct ValueDiffEntry {
    std::string module;
    std::string name;
    std::string oldValue;
    std::string newValue;
    std::string changeType;
};

struct FragilePatternEntry {
    std::string module;
    std::string name;
    std::string pattern;
    int score = 0;
    uintptr_t resolvedRva = 0;
    std::vector<std::string> reasons;
    std::string recommendation;
};

struct BuildDiffStats {
    bool hasBaseline = false;
    int offsetAdded = 0;
    int offsetRemoved = 0;
    int offsetChanged = 0;
    int patternAdded = 0;
    int patternRemoved = 0;
    int patternChanged = 0;
};

using NestedValueMap = std::map<std::string, std::map<std::string, std::string>>;
std::vector<fs::path> ListArchiveBuildDirs(const fs::path& archiveRoot);

void ResetRuntimeState() {
    g_FoundOffsets.clear();
    g_Interfaces.clear();
    g_FoundButtons.clear();
    g_PatternScanRecords.clear();
    g_ComponentGraph.clear();
    g_ModuleExports.clear();
    g_RTTIClasses.clear();
    g_ConVars.clear();
    g_VTables.clear();
    g_ValidationResults.clear();
    g_SchemaClasses.clear();
    g_SchemaEnums.clear();
}

void LogPhaseDuration(const std::string& phaseName, const std::chrono::steady_clock::time_point& startTime) {
    const auto endTime = std::chrono::steady_clock::now();
    const auto elapsedMs = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
    g_Logger.Trace("Phase", phaseName + " completed in " + std::to_string(elapsedMs) + " ms");
}

const FoundOffset* FindFoundOffset(const std::string& module, const std::string& name) {
    for (const auto& off : g_FoundOffsets) {
        if (off.module == module && off.name == name) {
            return &off;
        }
    }
    return nullptr;
}

bool TryGetStaticOffsetValue(const std::string& name, uintptr_t& outValue) {
    for (const auto& so : g_StaticOffsets) {
        if (name == so.name) {
            outValue = so.offset;
            return true;
        }
    }
    return false;
}

void LogPatternScanDiagnostics() {
    std::map<std::string, std::array<int, 3>> byModule;
    int totalFound = 0;
    int totalResolved = 0;
    for (const auto& record : g_PatternScanRecords) {
        auto& counters = byModule[record.module];
        counters[0] += 1; // total
        if (record.found) {
            counters[1] += 1;
            ++totalFound;
        }
        if (record.resolved) {
            counters[2] += 1;
            ++totalResolved;
        }
    }

    g_Logger.Info("Patterns", "Pattern summary: total=" + std::to_string(g_PatternScanRecords.size()) +
        ", found=" + std::to_string(totalFound) + ", resolved=" + std::to_string(totalResolved));

    for (const auto& [moduleName, counters] : byModule) {
        g_Logger.Trace("Patterns", moduleName + " total=" + std::to_string(counters[0]) +
            ", found=" + std::to_string(counters[1]) + ", resolved=" + std::to_string(counters[2]));
    }
}

std::string FormatHex(uintptr_t value) {
    std::stringstream ss;
    ss << "0x" << std::hex << std::uppercase << value;
    return ss.str();
}

bool ReadPtrFromOffset(const std::string& moduleName, const std::string& offsetName, uintptr_t& outPtr, std::string& reason) {
    const FoundOffset* off = FindFoundOffset(moduleName, offsetName);
    if (!off) {
        reason = "offset_missing";
        return false;
    }

    auto mod = FindModule(moduleName);
    if (!mod) {
        reason = "module_missing";
        return false;
    }

    if (off->offset >= mod->size) {
        reason = "offset_out_of_module";
        return false;
    }

    if (!ReadPtr(mod->base + off->offset, outPtr)) {
        reason = "pointer_read_failed";
        return false;
    }

    if (!outPtr) {
        reason = "pointer_null";
        return false;
    }

    if (!IsValidPointer(reinterpret_cast<const void*>(outPtr), sizeof(uintptr_t))) {
        reason = "pointer_not_readable";
        return false;
    }

    reason = "ok";
    return true;
}

bool ReadInt32FromOffset(const std::string& moduleName, const std::string& offsetName, int32_t& outValue, std::string& reason) {
    const FoundOffset* off = FindFoundOffset(moduleName, offsetName);
    if (!off) {
        reason = "offset_missing";
        return false;
    }

    auto mod = FindModule(moduleName);
    if (!mod) {
        reason = "module_missing";
        return false;
    }

    if (off->offset >= mod->size) {
        reason = "offset_out_of_module";
        return false;
    }

    if (!ReadInt32(mod->base + off->offset, outValue)) {
        reason = "read_failed";
        return false;
    }

    reason = "ok";
    return true;
}

std::vector<SemanticValidationEntry> RunSemanticValidationChecks() {
    std::vector<SemanticValidationEntry> results;

    const std::vector<std::pair<std::string, std::string>> pointerChecks = {
        {"client.dll", "dwEntityList"},
        {"client.dll", "dwGameEntitySystem"},
        {"client.dll", "dwLocalPlayerController"},
        {"client.dll", "dwLocalPlayerPawn"},
        {"client.dll", "dwPlantedC4"},
        {"client.dll", "dwGameRules"},
        {"client.dll", "dwGlobalVars"},
        {"engine2.dll", "dwNetworkGameClient"},
    };

    for (const auto& [moduleName, offsetName] : pointerChecks) {
        SemanticValidationEntry entry;
        entry.module = moduleName;
        entry.name = offsetName;

        uintptr_t ptrValue = 0;
        std::string reason;
        if (ReadPtrFromOffset(moduleName, offsetName, ptrValue, reason)) {
            entry.valid = true;
            entry.reason = "ok";
            entry.details = FormatHex(ptrValue);
        } else {
            entry.valid = false;
            entry.reason = reason;
        }
        results.push_back(std::move(entry));
    }

    {
        SemanticValidationEntry viewMatrix;
        viewMatrix.module = "client.dll";
        viewMatrix.name = "dwViewMatrix";

        auto mod = FindModule("client.dll");
        const FoundOffset* off = FindFoundOffset("client.dll", "dwViewMatrix");
        if (!mod || !off || off->offset >= mod->size) {
            viewMatrix.valid = false;
            viewMatrix.reason = "offset_unavailable";
        } else {
            float matrix[16] = {};
            if (!SafeReadBytes(mod->base + off->offset, matrix, sizeof(matrix))) {
                viewMatrix.valid = false;
                viewMatrix.reason = "matrix_read_failed";
            } else {
                int finiteCount = 0;
                int nonZeroCount = 0;
                for (float v : matrix) {
                    if (std::isfinite(v)) {
                        ++finiteCount;
                    }
                    if (std::fabs(v) > 0.0001f) {
                        ++nonZeroCount;
                    }
                }

                if (finiteCount != 16) {
                    viewMatrix.valid = false;
                    viewMatrix.reason = "matrix_non_finite";
                } else if (nonZeroCount < 4) {
                    viewMatrix.valid = false;
                    viewMatrix.reason = "matrix_nearly_zero";
                } else {
                    viewMatrix.valid = true;
                    viewMatrix.reason = "ok";
                    viewMatrix.details = "finite=16";
                }
            }
        }
        results.push_back(std::move(viewMatrix));
    }

    {
        SemanticValidationEntry windowWidth;
        windowWidth.module = "engine2.dll";
        windowWidth.name = "dwWindowWidth";
        int32_t value = 0;
        std::string reason;
        if (ReadInt32FromOffset("engine2.dll", "dwWindowWidth", value, reason) && value >= 640 && value <= 16384) {
            windowWidth.valid = true;
            windowWidth.reason = "ok";
            windowWidth.details = std::to_string(value);
        } else {
            windowWidth.valid = false;
            windowWidth.reason = reason == "ok" ? "window_width_out_of_range" : reason;
        }
        results.push_back(std::move(windowWidth));
    }

    {
        SemanticValidationEntry windowHeight;
        windowHeight.module = "engine2.dll";
        windowHeight.name = "dwWindowHeight";
        int32_t value = 0;
        std::string reason;
        if (ReadInt32FromOffset("engine2.dll", "dwWindowHeight", value, reason) && value >= 480 && value <= 16384) {
            windowHeight.valid = true;
            windowHeight.reason = "ok";
            windowHeight.details = std::to_string(value);
        } else {
            windowHeight.valid = false;
            windowHeight.reason = reason == "ok" ? "window_height_out_of_range" : reason;
        }
        results.push_back(std::move(windowHeight));
    }

    {
        SemanticValidationEntry buildNumber;
        buildNumber.module = "engine2.dll";
        buildNumber.name = "dwBuildNumber";
        int32_t value = 0;
        std::string reason;
        if (ReadInt32FromOffset("engine2.dll", "dwBuildNumber", value, reason) && value > 0) {
            buildNumber.valid = true;
            buildNumber.reason = "ok";
            buildNumber.details = std::to_string(value);
        } else {
            buildNumber.valid = false;
            buildNumber.reason = reason == "ok" ? "invalid_build_number" : reason;
        }
        results.push_back(std::move(buildNumber));
    }

    int validCount = 0;
    for (const auto& entry : results) {
        if (entry.valid) {
            ++validCount;
        }
    }
    g_Logger.Info("Semantic", "Critical semantic checks: " + std::to_string(validCount) + "/" + std::to_string(results.size()));

    return results;
}

void WriteSemanticValidationReport(const std::vector<SemanticValidationEntry>& results) {
    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "semantic_validation.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    int validCount = 0;
    for (const auto& entry : results) {
        if (entry.valid) {
            ++validCount;
        }
    }

    out << "{\n";
    out << "  \"summary\": {\n";
    out << "    \"total\": " << results.size() << ",\n";
    out << "    \"valid\": " << validCount << ",\n";
    out << "    \"invalid\": " << (results.size() - validCount) << "\n";
    out << "  },\n";
    out << "  \"entries\": [\n";
    for (size_t i = 0; i < results.size(); ++i) {
        const auto& entry = results[i];
        out << "    {\"module\":\"" << JsonEscape(entry.module) << "\",";
        out << "\"name\":\"" << JsonEscape(entry.name) << "\",";
        out << "\"valid\":" << (entry.valid ? "true" : "false") << ",";
        out << "\"reason\":\"" << JsonEscape(entry.reason) << "\",";
        out << "\"details\":\"" << JsonEscape(entry.details) << "\"}";
        out << (i + 1 < results.size() ? "," : "") << "\n";
    }
    out << "  ]\n";
    out << "}\n";

    g_Logger.Success("Semantic", "meta/semantic_validation.json written");
}

std::vector<ModuleConfidenceEntry> ComputeModuleConfidence(const std::vector<SemanticValidationEntry>& semanticResults) {
    std::map<std::string, ModuleConfidenceEntry> byModule;

    for (const auto& vr : g_ValidationResults) {
        auto& m = byModule[vr.module];
        m.module = vr.module;
        ++m.structuralTotal;
        if (vr.valid) {
            ++m.structuralValid;
        }
    }

    for (const auto& pr : g_PatternScanRecords) {
        auto& m = byModule[pr.module];
        m.module = pr.module;
        ++m.patternTotal;
        if (pr.resolved) {
            ++m.patternResolved;
        }
    }

    for (const auto& sr : semanticResults) {
        auto& m = byModule[sr.module];
        m.module = sr.module;
        ++m.semanticTotal;
        if (sr.valid) {
            ++m.semanticValid;
        }
    }

    std::vector<ModuleConfidenceEntry> entries;
    entries.reserve(byModule.size());
    for (auto& [module, entry] : byModule) {
        (void)module;
        entry.structuralScore = entry.structuralTotal > 0
            ? static_cast<double>(entry.structuralValid) / static_cast<double>(entry.structuralTotal)
            : 1.0;
        entry.patternScore = entry.patternTotal > 0
            ? static_cast<double>(entry.patternResolved) / static_cast<double>(entry.patternTotal)
            : 1.0;
        entry.semanticScore = entry.semanticTotal > 0
            ? static_cast<double>(entry.semanticValid) / static_cast<double>(entry.semanticTotal)
            : 1.0;

        entry.overallScore = (entry.structuralScore * 0.50) + (entry.patternScore * 0.30) + (entry.semanticScore * 0.20);
        if (entry.overallScore >= 0.85) {
            entry.tier = "high";
        } else if (entry.overallScore >= 0.65) {
            entry.tier = "medium";
        } else {
            entry.tier = "low";
        }

        entries.push_back(entry);
    }

    std::sort(entries.begin(), entries.end(), [](const ModuleConfidenceEntry& a, const ModuleConfidenceEntry& b) {
        return a.overallScore < b.overallScore;
    });
    return entries;
}

void WriteModuleConfidenceReport(const std::vector<ModuleConfidenceEntry>& entries) {
    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "module_confidence.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    out << "{\n";
    out << "  \"modules\": [\n";
    for (size_t i = 0; i < entries.size(); ++i) {
        const auto& e = entries[i];
        out << "    {\"module\":\"" << JsonEscape(e.module) << "\",";
        out << "\"tier\":\"" << JsonEscape(e.tier) << "\",";
        out << "\"overall\":" << std::fixed << std::setprecision(6) << e.overallScore << ",";
        out << "\"structural\":" << std::fixed << std::setprecision(6) << e.structuralScore << ",";
        out << "\"pattern\":" << std::fixed << std::setprecision(6) << e.patternScore << ",";
        out << "\"semantic\":" << std::fixed << std::setprecision(6) << e.semanticScore << ",";
        out << "\"counts\":{\"structural_total\":" << e.structuralTotal << ",\"pattern_total\":" << e.patternTotal
            << ",\"semantic_total\":" << e.semanticTotal << "}}";
        out << (i + 1 < entries.size() ? "," : "") << "\n";
    }
    out << "  ]\n";
    out << "}\n";

    g_Logger.Success("Confidence", "meta/module_confidence.json written");
}

std::vector<std::pair<std::string, std::string>> GetCoreOffsetExpectations() {
    return {
        {"client.dll", "dwCSGOInput"},
        {"client.dll", "dwEntityList"},
        {"client.dll", "dwGameEntitySystem"},
        {"client.dll", "dwGameEntitySystem_highestEntityIndex"},
        {"client.dll", "dwGlobalVars"},
        {"client.dll", "dwLocalPlayerController"},
        {"client.dll", "dwLocalPlayerPawn"},
        {"client.dll", "dwPrediction"},
        {"client.dll", "dwSensitivity"},
        {"client.dll", "dwSensitivity_sensitivity"},
        {"client.dll", "dwViewAngles"},
        {"client.dll", "dwViewMatrix"},
        {"engine2.dll", "dwBuildNumber"},
        {"engine2.dll", "dwNetworkGameClient"},
        {"engine2.dll", "dwNetworkGameClient_clientTickCount"},
        {"engine2.dll", "dwNetworkGameClient_serverTickCount"},
        {"engine2.dll", "dwNetworkGameClient_deltaTick"},
        {"engine2.dll", "dwNetworkGameClient_signOnState"},
        {"engine2.dll", "dwWindowWidth"},
        {"engine2.dll", "dwWindowHeight"},
        {"inputsystem.dll", "dwInputSystem"},
        {"matchmaking.dll", "dwGameTypes"},
        {"soundsystem.dll", "dwSoundSystem"},
        {"soundsystem.dll", "dwSoundSystem_engineViewData"},
    };
}

void WriteCoverageReport() {
    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "coverage_report.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    std::map<std::string, std::array<int, 3>> patternByModule;
    int patternTotal = 0;
    int patternFound = 0;
    int patternResolved = 0;
    for (const auto& record : g_PatternScanRecords) {
        auto& stats = patternByModule[record.module];
        ++stats[0];
        ++patternTotal;
        if (record.found) {
            ++stats[1];
            ++patternFound;
        }
        if (record.resolved) {
            ++stats[2];
            ++patternResolved;
        }
    }

    std::map<std::string, int> offsetByModule;
    for (const auto& off : g_FoundOffsets) {
        ++offsetByModule[off.module];
    }

    const auto coreOffsets = GetCoreOffsetExpectations();
    int coreResolved = 0;
    for (const auto& [moduleName, offsetName] : coreOffsets) {
        if (FindFoundOffset(moduleName, offsetName)) {
            ++coreResolved;
        }
    }

    out << "{\n";
    out << "  \"summary\": {\n";
    out << "    \"pattern_total\": " << patternTotal << ",\n";
    out << "    \"pattern_found\": " << patternFound << ",\n";
    out << "    \"pattern_resolved\": " << patternResolved << ",\n";
    out << "    \"core_offsets_total\": " << coreOffsets.size() << ",\n";
    out << "    \"core_offsets_resolved\": " << coreResolved << ",\n";
    out << "    \"core_offsets_missing\": " << (coreOffsets.size() - coreResolved) << "\n";
    out << "  },\n";

    out << "  \"module_coverage\": [\n";
    size_t moduleIdx = 0;
    for (const auto& [moduleName, patternStats] : patternByModule) {
        const int offsetCount = offsetByModule.count(moduleName) ? offsetByModule[moduleName] : 0;
        out << "    {\"module\":\"" << JsonEscape(moduleName) << "\",";
        out << "\"patterns_total\":" << patternStats[0] << ",";
        out << "\"patterns_found\":" << patternStats[1] << ",";
        out << "\"patterns_resolved\":" << patternStats[2] << ",";
        out << "\"offsets_emitted\":" << offsetCount << "}";
        out << (++moduleIdx < patternByModule.size() ? "," : "") << "\n";
    }
    out << "  ],\n";

    out << "  \"core_offsets\": [\n";
    for (size_t i = 0; i < coreOffsets.size(); ++i) {
        const auto& [moduleName, offsetName] = coreOffsets[i];
        const FoundOffset* off = FindFoundOffset(moduleName, offsetName);
        out << "    {\"module\":\"" << JsonEscape(moduleName) << "\",";
        out << "\"name\":\"" << JsonEscape(offsetName) << "\",";
        out << "\"resolved\":" << (off ? "true" : "false");
        if (off) {
            out << ",\"value\":\"" << JsonEscape(FormatHex(off->offset)) << "\"";
        }
        out << "}";
        out << (i + 1 < coreOffsets.size() ? "," : "") << "\n";
    }
    out << "  ]\n";
    out << "}\n";

    g_Logger.Success("Coverage", "meta/coverage_report.json written");
}

NestedValueMap ParseNestedValueMapFile(const fs::path& filePath) {
    NestedValueMap parsed;
    std::ifstream in(filePath);
    if (!in.is_open()) {
        return parsed;
    }

    std::string line;
    std::string currentModule;
    const std::regex moduleRegex("^\\s{2}\"([^\"]+)\"\\s*:\\s*\\{\\s*$");
    const std::regex valueRegex("^\\s{4}\"([^\"]+)\"\\s*:\\s*(.+?)\\s*,?\\s*$");

    while (std::getline(in, line)) {
        std::smatch match;
        if (std::regex_match(line, match, moduleRegex)) {
            currentModule = match[1].str();
            continue;
        }

        if (currentModule.empty()) {
            continue;
        }

        if (TrimCopy(line) == "}," || TrimCopy(line) == "}") {
            currentModule.clear();
            continue;
        }

        if (std::regex_match(line, match, valueRegex)) {
            std::string key = match[1].str();
            std::string value = TrimCopy(match[2].str());
            if (!value.empty() && value.back() == ',') {
                value.pop_back();
            }
            if (value.size() >= 2 && value.front() == '"' && value.back() == '"') {
                value = value.substr(1, value.size() - 2);
            }
            parsed[currentModule][key] = value;
        }
    }

    return parsed;
}

std::vector<ValueDiffEntry> DiffNestedMaps(const NestedValueMap& previousMap, const NestedValueMap& currentMap) {
    std::vector<ValueDiffEntry> diffs;

    for (const auto& [module, previousEntries] : previousMap) {
        auto itCurrentMod = currentMap.find(module);
        if (itCurrentMod == currentMap.end()) {
            for (const auto& [name, oldValue] : previousEntries) {
                ValueDiffEntry diff;
                diff.module = module;
                diff.name = name;
                diff.oldValue = oldValue;
                diff.changeType = "removed";
                diffs.push_back(std::move(diff));
            }
            continue;
        }

        for (const auto& [name, oldValue] : previousEntries) {
            auto itCurrent = itCurrentMod->second.find(name);
            if (itCurrent == itCurrentMod->second.end()) {
                ValueDiffEntry diff;
                diff.module = module;
                diff.name = name;
                diff.oldValue = oldValue;
                diff.changeType = "removed";
                diffs.push_back(std::move(diff));
                continue;
            }
            if (itCurrent->second != oldValue) {
                ValueDiffEntry diff;
                diff.module = module;
                diff.name = name;
                diff.oldValue = oldValue;
                diff.newValue = itCurrent->second;
                diff.changeType = "changed";
                diffs.push_back(std::move(diff));
            }
        }
    }

    for (const auto& [module, currentEntries] : currentMap) {
        auto itPrevMod = previousMap.find(module);
        if (itPrevMod == previousMap.end()) {
            for (const auto& [name, newValue] : currentEntries) {
                ValueDiffEntry diff;
                diff.module = module;
                diff.name = name;
                diff.newValue = newValue;
                diff.changeType = "added";
                diffs.push_back(std::move(diff));
            }
            continue;
        }

        for (const auto& [name, newValue] : currentEntries) {
            if (itPrevMod->second.find(name) == itPrevMod->second.end()) {
                ValueDiffEntry diff;
                diff.module = module;
                diff.name = name;
                diff.newValue = newValue;
                diff.changeType = "added";
                diffs.push_back(std::move(diff));
            }
        }
    }

    std::sort(diffs.begin(), diffs.end(), [](const ValueDiffEntry& a, const ValueDiffEntry& b) {
        if (a.module != b.module) return a.module < b.module;
        if (a.changeType != b.changeType) return a.changeType < b.changeType;
        return a.name < b.name;
    });

    return diffs;
}

BuildDiffStats WriteBuildDiffReport(const PreviousDumpState& previousDump, const std::string& currentBuild) {
    BuildDiffStats stats;
    const fs::path diffPath = fs::path(g_OutputPath) / "meta" / "build_diff.json";
    std::ofstream out(diffPath);
    if (!out.is_open()) {
        return stats;
    }

    const fs::path currentOffsetsPath = fs::path(g_OutputPath) / "output" / "offsets" / "offsets.json";
    const fs::path currentPatternsPath = fs::path(g_OutputPath) / "output" / "patterns" / "patterns.json";

    NestedValueMap previousOffsets;
    NestedValueMap previousPatterns;
    bool hasBaseline = false;
    if (!previousDump.stagedPath.empty() && fs::exists(previousDump.stagedPath)) {
        previousOffsets = ParseNestedValueMapFile(previousDump.stagedPath / "output" / "offsets" / "offsets.json");
        previousPatterns = ParseNestedValueMapFile(previousDump.stagedPath / "output" / "patterns" / "patterns.json");
        hasBaseline = !previousOffsets.empty() || !previousPatterns.empty();
    }
    stats.hasBaseline = hasBaseline;

    NestedValueMap currentOffsets = ParseNestedValueMapFile(currentOffsetsPath);
    NestedValueMap currentPatterns = ParseNestedValueMapFile(currentPatternsPath);

    std::vector<ValueDiffEntry> offsetDiffs;
    std::vector<ValueDiffEntry> patternDiffs;
    if (hasBaseline) {
        offsetDiffs = DiffNestedMaps(previousOffsets, currentOffsets);
        patternDiffs = DiffNestedMaps(previousPatterns, currentPatterns);
    }

    auto countByType = [](const std::vector<ValueDiffEntry>& diffs, const std::string& type) {
        int count = 0;
        for (const auto& diff : diffs) {
            if (diff.changeType == type) {
                ++count;
            }
        }
        return count;
    };
    stats.offsetAdded = countByType(offsetDiffs, "added");
    stats.offsetRemoved = countByType(offsetDiffs, "removed");
    stats.offsetChanged = countByType(offsetDiffs, "changed");
    stats.patternAdded = countByType(patternDiffs, "added");
    stats.patternRemoved = countByType(patternDiffs, "removed");
    stats.patternChanged = countByType(patternDiffs, "changed");

    out << "{\n";
    out << "  \"current_build\": \"" << JsonEscape(currentBuild) << "\",\n";
    out << "  \"previous_build\": \"" << JsonEscape(previousDump.previousBuild) << "\",\n";
    out << "  \"has_baseline\": " << (hasBaseline ? "true" : "false") << ",\n";
    out << "  \"summary\": {\n";
    out << "    \"offset_changes\": " << offsetDiffs.size() << ",\n";
    out << "    \"pattern_changes\": " << patternDiffs.size() << "\n";
    out << "  },\n";
    out << "  \"offsets\": {\n";
    out << "    \"added\": " << stats.offsetAdded << ",\n";
    out << "    \"removed\": " << stats.offsetRemoved << ",\n";
    out << "    \"changed\": " << stats.offsetChanged << ",\n";
    out << "    \"entries\": [\n";
    for (size_t i = 0; i < offsetDiffs.size(); ++i) {
        const auto& d = offsetDiffs[i];
        out << "      {\"module\":\"" << JsonEscape(d.module) << "\",";
        out << "\"name\":\"" << JsonEscape(d.name) << "\",";
        out << "\"type\":\"" << JsonEscape(d.changeType) << "\",";
        out << "\"old\":\"" << JsonEscape(d.oldValue) << "\",";
        out << "\"new\":\"" << JsonEscape(d.newValue) << "\"}";
        out << (i + 1 < offsetDiffs.size() ? "," : "") << "\n";
    }
    out << "    ]\n";
    out << "  },\n";
    out << "  \"patterns\": {\n";
    out << "    \"added\": " << stats.patternAdded << ",\n";
    out << "    \"removed\": " << stats.patternRemoved << ",\n";
    out << "    \"changed\": " << stats.patternChanged << ",\n";
    out << "    \"entries\": [\n";
    for (size_t i = 0; i < patternDiffs.size(); ++i) {
        const auto& d = patternDiffs[i];
        out << "      {\"module\":\"" << JsonEscape(d.module) << "\",";
        out << "\"name\":\"" << JsonEscape(d.name) << "\",";
        out << "\"type\":\"" << JsonEscape(d.changeType) << "\",";
        out << "\"old\":\"" << JsonEscape(d.oldValue) << "\",";
        out << "\"new\":\"" << JsonEscape(d.newValue) << "\"}";
        out << (i + 1 < patternDiffs.size() ? "," : "") << "\n";
    }
    out << "    ]\n";
    out << "  }\n";
    out << "}\n";

    g_Logger.Success("Diff", "meta/build_diff.json written");
    return stats;
}

std::map<std::string, std::set<std::string>> BuildInvalidOffsetMap() {
    std::map<std::string, std::set<std::string>> invalid;
    for (const auto& vr : g_ValidationResults) {
        if (!vr.valid) {
            invalid[vr.module].insert(vr.name);
        }
    }
    return invalid;
}

std::map<std::string, std::set<std::string>> BuildFailedSemanticMap(const std::vector<SemanticValidationEntry>& semanticResults) {
    std::map<std::string, std::set<std::string>> failed;
    for (const auto& sr : semanticResults) {
        if (!sr.valid) {
            failed[sr.module].insert(sr.name);
        }
    }
    return failed;
}

std::vector<FragilePatternEntry> BuildFragilityEntries(const std::vector<SemanticValidationEntry>& semanticResults) {
    const auto invalidOffsetMap = BuildInvalidOffsetMap();
    const auto failedSemanticMap = BuildFailedSemanticMap(semanticResults);
    std::vector<FragilePatternEntry> entries;

    for (const auto& record : g_PatternScanRecords) {
        FragilePatternEntry entry;
        entry.module = record.module;
        entry.name = record.name;
        entry.pattern = record.pattern;
        entry.resolvedRva = record.resolvedRva;

        if (!record.found) {
            entry.score += 4;
            entry.reasons.push_back("pattern_not_found");
            entry.recommendation = "Update signature bytes around this symbol from latest binary xrefs.";
        } else if (!record.resolved) {
            entry.score += 3;
            entry.reasons.push_back("resolve_failed");
            entry.recommendation = "Re-check resolveOffset/instrSize and instruction type for this pattern.";
        }

        auto itInvalidModule = invalidOffsetMap.find(record.module);
        if (itInvalidModule != invalidOffsetMap.end() && itInvalidModule->second.find(record.name) != itInvalidModule->second.end()) {
            entry.score += 2;
            entry.reasons.push_back("offset_structural_invalid");
            if (entry.recommendation.empty()) {
                entry.recommendation = "Validate module bounds and offset resolution logic for this signature.";
            }
        }

        auto itSemanticModule = failedSemanticMap.find(record.module);
        if (itSemanticModule != failedSemanticMap.end() && itSemanticModule->second.find(record.name) != itSemanticModule->second.end()) {
            entry.score += 2;
            entry.reasons.push_back("semantic_check_failed");
            if (entry.recommendation.empty()) {
                entry.recommendation = "Offset resolves but runtime value looks inconsistent; inspect data layout changes.";
            }
        }

        if (entry.score > 0) {
            if (entry.recommendation.empty()) {
                entry.recommendation = "Monitor this pattern in next update cycle.";
            }
            entries.push_back(std::move(entry));
        }
    }

    std::sort(entries.begin(), entries.end(), [](const FragilePatternEntry& a, const FragilePatternEntry& b) {
        if (a.score != b.score) return a.score > b.score;
        if (a.module != b.module) return a.module < b.module;
        return a.name < b.name;
    });

    return entries;
}

void WriteFragilePatternsReport(const std::vector<FragilePatternEntry>& entries) {
    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "fragile_patterns.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    out << "{\n";
    out << "  \"summary\": {\n";
    out << "    \"total_fragile\": " << entries.size() << ",\n";
    out << "    \"highest_score\": " << (entries.empty() ? 0 : entries.front().score) << "\n";
    out << "  },\n";
    out << "  \"entries\": [\n";
    for (size_t i = 0; i < entries.size(); ++i) {
        const auto& e = entries[i];
        out << "    {\"module\":\"" << JsonEscape(e.module) << "\",";
        out << "\"name\":\"" << JsonEscape(e.name) << "\",";
        out << "\"score\":" << e.score << ",";
        out << "\"resolved_rva\":\"" << JsonEscape(FormatHex(e.resolvedRva)) << "\",";
        out << "\"recommendation\":\"" << JsonEscape(e.recommendation) << "\",";
        out << "\"reasons\":[";
        for (size_t r = 0; r < e.reasons.size(); ++r) {
            out << "\"" << JsonEscape(e.reasons[r]) << "\"";
            out << (r + 1 < e.reasons.size() ? "," : "");
        }
        out << "]}";
        out << (i + 1 < entries.size() ? "," : "") << "\n";
    }
    out << "  ]\n";
    out << "}\n";

    g_Logger.Success("Fragility", "meta/fragile_patterns.json written");
}

std::vector<std::string> SplitPatternTokens(const std::string& pattern) {
    std::vector<std::string> tokens;
    std::stringstream ss(pattern);
    std::string tok;
    while (ss >> tok) {
        tokens.push_back(tok);
    }
    return tokens;
}

std::string BuildRelaxedPattern(const std::string& pattern) {
    std::vector<std::string> tokens = SplitPatternTokens(pattern);
    if (tokens.size() < 10) {
        return pattern;
    }

    for (size_t i = 4; i + 4 < tokens.size(); ++i) {
        if (tokens[i] != "?" && tokens[i] != "??") {
            tokens[i] = "?";
        }
    }

    std::string relaxed;
    for (size_t i = 0; i < tokens.size(); ++i) {
        relaxed += tokens[i];
        if (i + 1 < tokens.size()) {
            relaxed += " ";
        }
    }
    return relaxed;
}

void WritePatternAutofixSuggestions(const std::vector<FragilePatternEntry>& entries) {
    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "pattern_autofix_suggestions.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    out << "{\n";
    out << "  \"suggestions\": [\n";
    bool first = true;
    for (const auto& e : entries) {
        if (e.score < 3) {
            continue;
        }

        const std::string relaxed = BuildRelaxedPattern(e.pattern);
        if (!first) {
            out << ",\n";
        }
        out << "    {\"module\":\"" << JsonEscape(e.module) << "\",";
        out << "\"name\":\"" << JsonEscape(e.name) << "\",";
        out << "\"fragility_score\":" << e.score << ",";
        out << "\"current_pattern\":\"" << JsonEscape(e.pattern) << "\",";
        out << "\"suggested_relaxed_pattern\":\"" << JsonEscape(relaxed) << "\",";
        out << "\"note\":\"" << JsonEscape("Re-validate this candidate against the next game update before promoting.") << "\"}";
        first = false;
    }
    out << "\n";
    out << "  ],\n";
    out << "  \"generated_for\": \"" << JsonEscape(GetCurrentTimestamp()) << "\"\n";
    out << "}\n";

    g_Logger.Success("Autofix", "meta/pattern_autofix_suggestions.json written");
}

SchemaClass* FindSchemaClassByName(const std::string& className) {
    auto it = g_SchemaClassIndex.find(className);
    if (it != g_SchemaClassIndex.end()) {
        return it->second;
    }
    return nullptr;
}

bool SchemaFieldExists(const SchemaClass* cls, const std::string& fieldName) {
    if (!cls) {
        return false;
    }
    for (const auto& field : cls->fields) {
        if (field.name == fieldName) {
            return true;
        }
    }
    return false;
}

void WriteSchemaSemanticValidationReport() {
    struct SchemaCheck {
        std::string className;
        std::string fieldName;
        std::string rationale;
    };

    const std::vector<SchemaCheck> checks = {
        {"C_BaseEntity", "m_iHealth", "core_health_tracking"},
        {"C_BaseEntity", "m_iTeamNum", "team_state"},
        {"C_BaseEntity", "m_pGameSceneNode", "scene_node_pointer"},
        {"CGameSceneNode", "m_vecAbsOrigin", "world_position"},
        {"CBasePlayerController", "m_hPawn", "controller_to_pawn_link"},
        {"CBasePlayerController", "m_iszPlayerName", "player_identity"},
        {"C_BasePlayerPawn", "m_vOldOrigin", "pawn_origin_history"},
        {"CPlayer_WeaponServices", "m_hActiveWeapon", "active_weapon_handle"},
        {"C_CSPlayerPawn", "m_iShotsFired", "combat_activity"},
        {"C_CSPlayerPawn", "m_aimPunchAngle", "recoil_tracking"},
        {"CCSPlayerController", "m_iPing", "player_network_quality"},
    };

    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "schema_semantic_validation.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    int validCount = 0;
    out << "{\n";
    out << "  \"checks\": [\n";
    for (size_t i = 0; i < checks.size(); ++i) {
        const auto& check = checks[i];
        SchemaClass* cls = FindSchemaClassByName(check.className);
        const bool classFound = cls != nullptr;
        const bool fieldFound = SchemaFieldExists(cls, check.fieldName);
        const bool valid = classFound && fieldFound;
        if (valid) {
            ++validCount;
        }

        out << "    {\"class\":\"" << JsonEscape(check.className) << "\",";
        out << "\"field\":\"" << JsonEscape(check.fieldName) << "\",";
        out << "\"valid\":" << (valid ? "true" : "false") << ",";
        out << "\"class_found\":" << (classFound ? "true" : "false") << ",";
        out << "\"field_found\":" << (fieldFound ? "true" : "false") << ",";
        out << "\"rationale\":\"" << JsonEscape(check.rationale) << "\"}";
        out << (i + 1 < checks.size() ? "," : "") << "\n";
    }
    out << "  ],\n";
    out << "  \"summary\": {\"total\": " << checks.size() << ",\"valid\": " << validCount
        << ",\"invalid\": " << (checks.size() - validCount) << "}\n";
    out << "}\n";

    g_Logger.Success("SchemaSemantic", "meta/schema_semantic_validation.json written");
}

void WriteHotNetvarExports() {
    struct WantedField {
        std::string className;
        std::string fieldName;
    };

    const std::vector<WantedField> wanted = {
        {"C_BaseEntity", "m_iHealth"},
        {"C_BaseEntity", "m_iTeamNum"},
        {"C_BaseEntity", "m_lifeState"},
        {"C_BaseEntity", "m_fFlags"},
        {"C_BaseEntity", "m_pGameSceneNode"},
        {"CGameSceneNode", "m_vecAbsOrigin"},
        {"CGameSceneNode", "m_vecOrigin"},
        {"CGameSceneNode", "m_angAbsRotation"},
        {"CBasePlayerController", "m_hPawn"},
        {"CBasePlayerController", "m_iszPlayerName"},
        {"CBasePlayerController", "m_iDesiredFOV"},
        {"C_BasePlayerPawn", "m_vOldOrigin"},
        {"CPlayer_WeaponServices", "m_hActiveWeapon"},
        {"CPlayer_WeaponServices", "m_hMyWeapons"},
        {"CPlayer_WeaponServices", "m_iAmmo"},
        {"C_BasePlayerWeapon", "m_iClip1"},
        {"C_BasePlayerWeapon", "m_iClip2"},
        {"C_CSPlayerPawn", "m_iShotsFired"},
        {"C_CSPlayerPawn", "m_aimPunchAngle"},
        {"C_CSPlayerPawn", "m_aimPunchAngleVel"},
        {"C_CSPlayerPawn", "m_bIsScoped"},
        {"C_CSPlayerPawn", "m_ArmorValue"},
        {"CCSPlayerController", "m_iPing"},
        {"CCSPlayerController_InGameMoneyServices", "m_iAccount"},
    };

    std::map<std::string, std::tuple<std::string, std::string, int>> found;
    for (const auto& [scopeName, classes] : g_SchemaClasses) {
        for (const auto& cls : classes) {
            for (const auto& wf : wanted) {
                if (cls.name != wf.className) {
                    continue;
                }
                for (const auto& field : cls.fields) {
                    if (field.name == wf.fieldName) {
                        found[wf.className + "::" + wf.fieldName] = std::make_tuple(scopeName, field.type, field.offset);
                    }
                }
            }
        }
    }

    const fs::path outRoot = fs::path(g_OutputPath) / "output" / "netvars";
    std::error_code ec;
    fs::create_directories(outRoot, ec);

    std::ofstream jsonOut(outRoot / "hotlist.json");
    if (jsonOut.is_open()) {
        jsonOut << "{\n";
        size_t idx = 0;
        for (const auto& wf : wanted) {
            const std::string key = wf.className + "::" + wf.fieldName;
            jsonOut << "  \"" << JsonEscape(key) << "\": ";
            auto it = found.find(key);
            if (it == found.end()) {
                jsonOut << "{\"found\":false}";
            } else {
                const auto& [scopeName, fieldType, fieldOffset] = it->second;
                jsonOut << "{\"found\":true,\"scope\":\"" << JsonEscape(scopeName)
                    << "\",\"type\":\"" << JsonEscape(fieldType) << "\",\"offset\":" << fieldOffset << "}";
            }
            jsonOut << (++idx < wanted.size() ? "," : "") << "\n";
        }
        jsonOut << "}\n";
    }

    std::ofstream hppOut(outRoot / "hotlist.hpp");
    if (hppOut.is_open()) {
        hppOut << "// Auto-generated hot netvars\n#pragma once\n\n#include <cstddef>\n\nnamespace cs2_dumper {\nnamespace hot_netvars {\n";
        for (const auto& wf : wanted) {
            const std::string key = wf.className + "::" + wf.fieldName;
            auto it = found.find(key);
            if (it == found.end()) {
                continue;
            }
            const auto& [scopeName, fieldType, fieldOffset] = it->second;
            (void)scopeName;
            (void)fieldType;
            hppOut << "constexpr std::ptrdiff_t " << MakeCppIdentifier(wf.className + "_" + wf.fieldName)
                << " = 0x" << std::hex << fieldOffset << std::dec << ";\n";
        }
        hppOut << "} // namespace hot_netvars\n} // namespace cs2_dumper\n";
    }

    g_Logger.Success("Netvars", "output/netvars/{hotlist.json,hotlist.hpp} written");
}

void WriteRegressionTestManifest(const std::string& currentBuild) {
    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "regression_tests.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    const std::vector<std::pair<std::string, std::string>> coreOffsets = {
        {"client.dll", "dwEntityList"},
        {"client.dll", "dwLocalPlayerController"},
        {"client.dll", "dwLocalPlayerPawn"},
        {"client.dll", "dwViewMatrix"},
        {"engine2.dll", "dwBuildNumber"},
        {"engine2.dll", "dwNetworkGameClient"},
        {"engine2.dll", "dwWindowWidth"},
        {"engine2.dll", "dwWindowHeight"},
    };

    out << "{\n";
    out << "  \"build\": \"" << JsonEscape(currentBuild) << "\",\n";
    out << "  \"tests\": [\n";
    for (size_t i = 0; i < coreOffsets.size(); ++i) {
        const auto& [moduleName, offsetName] = coreOffsets[i];
        const FoundOffset* off = FindFoundOffset(moduleName, offsetName);
        out << "    {\"name\":\"" << JsonEscape(offsetName) << "\",";
        out << "\"module\":\"" << JsonEscape(moduleName) << "\",";
        out << "\"exists\":" << (off ? "true" : "false") << ",";
        out << "\"expected\":\"resolved_and_semantic_valid\"}";
        out << (i + 1 < coreOffsets.size() ? "," : "") << "\n";
    }
    out << "  ]\n";
    out << "}\n";

    g_Logger.Success("Regression", "meta/regression_tests.json written");
}

void WriteOffsetStabilityReport(const std::string& currentBuild) {
    std::vector<std::pair<std::string, NestedValueMap>> buildOffsets;
    const fs::path archiveRoot = fs::path(g_OutputPath) / "anteriores";
    for (const auto& dir : ListArchiveBuildDirs(archiveRoot)) {
        const std::string buildName = ReadFirstLineTrimmed(dir / "meta" / "current_build.txt");
        NestedValueMap offsets = ParseNestedValueMapFile(dir / "output" / "offsets" / "offsets.json");
        if (!offsets.empty()) {
            buildOffsets.emplace_back(buildName.empty() ? dir.filename().string() : buildName, std::move(offsets));
        }
    }

    NestedValueMap currentOffsets = ParseNestedValueMapFile(fs::path(g_OutputPath) / "output" / "offsets" / "offsets.json");
    if (!currentOffsets.empty()) {
        buildOffsets.emplace_back(currentBuild, std::move(currentOffsets));
    }

    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "offset_stability.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    std::map<std::string, std::vector<std::string>> history;
    for (const auto& [buildName, mapValues] : buildOffsets) {
        (void)buildName;
        for (const auto& [moduleName, values] : mapValues) {
            for (const auto& [offsetName, value] : values) {
                history[moduleName + "::" + offsetName].push_back(value);
            }
        }
    }

    out << "{\n";
    out << "  \"build_samples\": " << buildOffsets.size() << ",\n";
    out << "  \"entries\": [\n";
    size_t idx = 0;
    for (const auto& [key, values] : history) {
        const size_t sep = key.find("::");
        const std::string moduleName = key.substr(0, sep);
        const std::string offsetName = key.substr(sep + 2);

        int stableTransitions = 0;
        for (size_t i = 1; i < values.size(); ++i) {
            if (values[i] == values[i - 1]) {
                ++stableTransitions;
            }
        }
        const double stability = values.size() > 1
            ? static_cast<double>(stableTransitions) / static_cast<double>(values.size() - 1)
            : 1.0;

        out << "    {\"module\":\"" << JsonEscape(moduleName) << "\",";
        out << "\"name\":\"" << JsonEscape(offsetName) << "\",";
        out << "\"stability\":" << std::fixed << std::setprecision(6) << stability << ",";
        out << "\"samples\":" << values.size() << "}";
        out << (++idx < history.size() ? "," : "") << "\n";
    }
    out << "  ]\n";
    out << "}\n";

    g_Logger.Success("Stability", "meta/offset_stability.json written");
}

void WriteIntegrationPack(const std::vector<ModuleConfidenceEntry>& moduleConfidence) {
    std::set<std::string> lowConfidenceModules;
    for (const auto& entry : moduleConfidence) {
        if (entry.tier == "low") {
            lowConfidenceModules.insert(entry.module);
        }
    }

    const fs::path integrationRoot = fs::path(g_OutputPath) / "output" / "integration";
    std::error_code ec;
    fs::create_directories(integrationRoot, ec);

    std::ofstream offsetsOut(integrationRoot / "offsets_safe.json");
    if (offsetsOut.is_open()) {
        offsetsOut << "{\n";
        std::map<std::string, std::vector<const FoundOffset*>> grouped;
        for (const auto& off : g_FoundOffsets) {
            if (lowConfidenceModules.find(off.module) != lowConfidenceModules.end()) {
                continue;
            }
            if (off.name.find("_alt") != std::string::npos || off.name.find("_offset") != std::string::npos) {
                continue;
            }
            grouped[off.module].push_back(&off);
        }

        size_t moduleIdx = 0;
        for (const auto& [moduleName, offsets] : grouped) {
            offsetsOut << "  \"" << JsonEscape(moduleName) << "\": {\n";
            for (size_t i = 0; i < offsets.size(); ++i) {
                offsetsOut << "    \"" << JsonEscape(offsets[i]->name) << "\": " << offsets[i]->offset;
                offsetsOut << (i + 1 < offsets.size() ? "," : "") << "\n";
            }
            offsetsOut << "  }" << (++moduleIdx < grouped.size() ? "," : "") << "\n";
        }
        offsetsOut << "}\n";
    }

    std::ofstream summaryOut(integrationRoot / "summary.json");
    if (summaryOut.is_open()) {
        summaryOut << "{\n";
        summaryOut << "  \"excluded_low_confidence_modules\": [";
        size_t idx = 0;
        for (const auto& moduleName : lowConfidenceModules) {
            summaryOut << "\"" << JsonEscape(moduleName) << "\"";
            summaryOut << (++idx < lowConfidenceModules.size() ? "," : "");
        }
        summaryOut << "]\n";
        summaryOut << "}\n";
    }

    g_Logger.Success("Integration", "output/integration/{offsets_safe.json,summary.json} written");
}

void WriteEnhancedHtmlDashboard(
    const std::string& currentBuild,
    const BuildDiffStats& diffStats,
    const std::vector<SemanticValidationEntry>& semanticResults,
    const std::vector<ModuleConfidenceEntry>& moduleConfidence,
    const std::vector<FragilePatternEntry>& fragilePatterns
) {
    const fs::path docsPath = fs::path(g_OutputPath) / "docs";
    std::error_code ec;
    fs::create_directories(docsPath, ec);

    int semanticValid = 0;
    for (const auto& s : semanticResults) {
        if (s.valid) {
            ++semanticValid;
        }
    }

    int patternFound = 0;
    int patternResolved = 0;
    for (const auto& p : g_PatternScanRecords) {
        if (p.found) {
            ++patternFound;
        }
        if (p.resolved) {
            ++patternResolved;
        }
    }

    const auto coreOffsets = GetCoreOffsetExpectations();
    int coreResolved = 0;
    std::vector<std::pair<std::string, std::string>> missingCoreOffsets;
    for (const auto& [moduleName, offsetName] : coreOffsets) {
        if (FindFoundOffset(moduleName, offsetName)) {
            ++coreResolved;
        } else {
            missingCoreOffsets.push_back({moduleName, offsetName});
        }
    }

    std::ofstream out(docsPath / "index.html");
    if (!out.is_open()) {
        return;
    }

    out << "<!doctype html><html><head><meta charset=\"utf-8\">";
    out << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">";
    out << "<title>CS2 Dumper Dashboard</title>";
    out << "<style>"
           "body{font-family:Segoe UI,Arial,sans-serif;margin:22px;background:#0e131c;color:#e6edf7;}"
           "h1,h2{color:#7fd0ff;} .row{display:flex;gap:12px;flex-wrap:wrap;margin:12px 0;}"
           ".kpi{background:#172235;border:1px solid #25354e;padding:10px 14px;border-radius:8px;min-width:180px;}"
           "table{border-collapse:collapse;width:100%;margin:10px 0;} th,td{border:1px solid #2a3a54;padding:8px;}"
           "th{background:#1a2940;} .ok{color:#7cffc4;} .warn{color:#ffcc66;} .bad{color:#ff8787;}"
           "a{color:#9ccfff;text-decoration:none;} a:hover{text-decoration:underline;}"
           "code{color:#b6dcff;}</style></head><body>";

    out << "<h1>CS2 Dumper Dashboard</h1>";
    out << "<p>Generated: " << GetCurrentTimestamp() << " | Build: <code>" << JsonEscape(currentBuild) << "</code></p>";

    out << "<div class=\"row\">";
    out << "<div class=\"kpi\">Offsets: " << g_FoundOffsets.size() << "</div>";
    out << "<div class=\"kpi\">Patterns found: " << patternFound << "/" << g_PatternScanRecords.size() << "</div>";
    out << "<div class=\"kpi\">Patterns resolved: " << patternResolved << "/" << g_PatternScanRecords.size() << "</div>";
    out << "<div class=\"kpi\">Semantic checks: " << semanticValid << "/" << semanticResults.size() << "</div>";
    out << "<div class=\"kpi\">Fragile patterns: " << fragilePatterns.size() << "</div>";
    out << "<div class=\"kpi\">Core offsets: " << coreResolved << "/" << coreOffsets.size() << "</div>";
    out << "</div>";

    out << "<h2>Build Diff</h2>";
    if (!diffStats.hasBaseline) {
        out << "<p class=\"warn\">No baseline available yet. Diff starts after next build snapshot.</p>";
    } else {
        out << "<table><tr><th>Type</th><th>Added</th><th>Removed</th><th>Changed</th></tr>";
        out << "<tr><td>Offsets</td><td>" << diffStats.offsetAdded << "</td><td>" << diffStats.offsetRemoved
            << "</td><td>" << diffStats.offsetChanged << "</td></tr>";
        out << "<tr><td>Patterns</td><td>" << diffStats.patternAdded << "</td><td>" << diffStats.patternRemoved
            << "</td><td>" << diffStats.patternChanged << "</td></tr></table>";
    }

    out << "<h2>Module Confidence</h2>";
    out << "<table><tr><th>Module</th><th>Tier</th><th>Overall</th><th>Structural</th><th>Pattern</th><th>Semantic</th></tr>";
    for (const auto& m : moduleConfidence) {
        const char* cls = m.tier == "high" ? "ok" : (m.tier == "medium" ? "warn" : "bad");
        out << "<tr><td>" << JsonEscape(m.module) << "</td><td class=\"" << cls << "\">" << JsonEscape(m.tier)
            << "</td><td>" << std::fixed << std::setprecision(3) << m.overallScore
            << "</td><td>" << std::fixed << std::setprecision(3) << m.structuralScore
            << "</td><td>" << std::fixed << std::setprecision(3) << m.patternScore
            << "</td><td>" << std::fixed << std::setprecision(3) << m.semanticScore << "</td></tr>";
    }
    out << "</table>";

    out << "<h2>Top Fragile Patterns</h2>";
    out << "<table><tr><th>Module</th><th>Name</th><th>Score</th><th>Recommendation</th></tr>";
    size_t limit = std::min<size_t>(15, fragilePatterns.size());
    for (size_t i = 0; i < limit; ++i) {
        const auto& f = fragilePatterns[i];
        out << "<tr><td>" << JsonEscape(f.module) << "</td><td>" << JsonEscape(f.name) << "</td><td>"
            << f.score << "</td><td>" << JsonEscape(f.recommendation) << "</td></tr>";
    }
    out << "</table>";

    out << "<h2>Core Offset Coverage</h2>";
    out << "<table><tr><th>Module</th><th>Offset</th><th>Status</th></tr>";
    for (const auto& [moduleName, offsetName] : coreOffsets) {
        const FoundOffset* off = FindFoundOffset(moduleName, offsetName);
        out << "<tr><td>" << JsonEscape(moduleName) << "</td><td>" << JsonEscape(offsetName) << "</td>";
        if (off) {
            out << "<td class=\"ok\">resolved (" << JsonEscape(FormatHex(off->offset)) << ")</td></tr>";
        } else {
            out << "<td class=\"bad\">missing</td></tr>";
        }
    }
    out << "</table>";

    if (!missingCoreOffsets.empty()) {
        out << "<p class=\"warn\">Missing core offsets: ";
        for (size_t i = 0; i < missingCoreOffsets.size(); ++i) {
            out << "<code>" << JsonEscape(missingCoreOffsets[i].first + "::" + missingCoreOffsets[i].second) << "</code>";
            out << (i + 1 < missingCoreOffsets.size() ? ", " : "");
        }
        out << "</p>";
    }

    out << "<h2>Key Reports</h2><ul>";
    out << "<li><a href=\"../meta/risk_report.json\">meta/risk_report.json</a></li>";
    out << "<li><a href=\"../meta/build_diff.json\">meta/build_diff.json</a></li>";
    out << "<li><a href=\"../meta/coverage_report.json\">meta/coverage_report.json</a></li>";
    out << "<li><a href=\"../meta/semantic_validation.json\">meta/semantic_validation.json</a></li>";
    out << "<li><a href=\"../meta/schema_semantic_validation.json\">meta/schema_semantic_validation.json</a></li>";
    out << "<li><a href=\"../meta/module_confidence.json\">meta/module_confidence.json</a></li>";
    out << "<li><a href=\"../meta/fragile_patterns.json\">meta/fragile_patterns.json</a></li>";
    out << "<li><a href=\"../meta/pattern_autofix_suggestions.json\">meta/pattern_autofix_suggestions.json</a></li>";
    out << "<li><a href=\"../meta/offset_stability.json\">meta/offset_stability.json</a></li>";
    out << "<li><a href=\"../meta/regression_tests.json\">meta/regression_tests.json</a></li>";
    out << "<li><a href=\"../output/integration/offsets_safe.json\">output/integration/offsets_safe.json</a></li>";
    out << "<li><a href=\"../output/netvars/hotlist.json\">output/netvars/hotlist.json</a></li>";
    out << "<li><a href=\"../anteriores/history_index.json\">anteriores/history_index.json</a></li>";
    out << "</ul>";

    out << "</body></html>";
    g_Logger.Success("HTML", "docs/index.html enhanced dashboard generated");
}

std::vector<fs::path> ListArchiveBuildDirs(const fs::path& archiveRoot) {
    std::vector<fs::path> dirs;
    std::error_code ec;
    if (!fs::exists(archiveRoot, ec) || !fs::is_directory(archiveRoot, ec)) {
        return dirs;
    }

    for (const auto& entry : fs::directory_iterator(archiveRoot, ec)) {
        if (ec) {
            break;
        }
        if (entry.is_directory()) {
            dirs.push_back(entry.path());
        }
    }

    std::sort(dirs.begin(), dirs.end(), [](const fs::path& a, const fs::path& b) {
        std::error_code ecA;
        std::error_code ecB;
        const auto ta = fs::last_write_time(a, ecA);
        const auto tb = fs::last_write_time(b, ecB);
        if (ecA || ecB) {
            return a.filename().string() < b.filename().string();
        }
        return ta < tb;
    });
    return dirs;
}

void WriteArchiveHistoryIndex(const std::string& currentBuild) {
    const fs::path archiveRoot = fs::path(g_OutputPath) / "anteriores";
    std::error_code ec;
    fs::create_directories(archiveRoot, ec);
    const auto archiveDirs = ListArchiveBuildDirs(archiveRoot);

    std::ofstream historyOut(archiveRoot / "history_index.json");
    if (historyOut.is_open()) {
        historyOut << "{\n";
        historyOut << "  \"entries\": [\n";
        for (size_t i = 0; i < archiveDirs.size(); ++i) {
            const auto& dir = archiveDirs[i];
            const std::string guessedBuild = ReadFirstLineTrimmed(dir / "meta" / "current_build.txt");
            historyOut << "    {\"folder\":\"" << JsonEscape(dir.filename().string()) << "\",";
            historyOut << "\"build\":\"" << JsonEscape(guessedBuild.empty() ? dir.filename().string() : guessedBuild) << "\"}";
            historyOut << (i + 1 < archiveDirs.size() ? "," : "") << "\n";
        }
        historyOut << "  ]\n";
        historyOut << "}\n";
    }

    std::ofstream timelineOut(fs::path(g_OutputPath) / "meta" / "build_timeline.json");
    if (timelineOut.is_open()) {
        timelineOut << "{\n";
        timelineOut << "  \"current_build\": \"" << JsonEscape(currentBuild) << "\",\n";
        timelineOut << "  \"archived_builds\": [\n";
        for (size_t i = 0; i < archiveDirs.size(); ++i) {
            const auto& dir = archiveDirs[i];
            const std::string guessedBuild = ReadFirstLineTrimmed(dir / "meta" / "current_build.txt");
            timelineOut << "    \"" << JsonEscape(guessedBuild.empty() ? dir.filename().string() : guessedBuild) << "\"";
            timelineOut << (i + 1 < archiveDirs.size() ? "," : "") << "\n";
        }
        timelineOut << "  ]\n";
        timelineOut << "}\n";
    }

    g_Logger.Success("History", "anteriores/history_index.json and meta/build_timeline.json written");
}

void WriteRiskReport(
    const std::string& previousBuild,
    const std::string& currentBuild,
    double previousValidationRatio,
    const std::vector<ModuleConfidenceEntry>& moduleConfidence
) {
    const double currentValidationRatio = ComputeCurrentValidationRatio();
    const bool hasPreviousBuild = !previousBuild.empty();
    const bool hasCurrentBuild = !currentBuild.empty();
    const bool buildChanged = hasPreviousBuild && hasCurrentBuild && previousBuild != currentBuild;
    const bool hasPreviousRatio = previousValidationRatio >= 0.0;
    const bool hasCurrentRatio = currentValidationRatio >= 0.0;
    const double ratioDrop = (hasPreviousRatio && hasCurrentRatio) ? (previousValidationRatio - currentValidationRatio) : 0.0;
    const bool ratioDropped = ratioDrop > 0.03;
    const bool severeDrop = ratioDrop > 0.10;
    const bool lowValidationCoverage = hasCurrentRatio && currentValidationRatio < 0.95;
    const auto coreOffsets = GetCoreOffsetExpectations();
    int coreResolved = 0;
    for (const auto& [moduleName, offsetName] : coreOffsets) {
        if (FindFoundOffset(moduleName, offsetName)) {
            ++coreResolved;
        }
    }
    const double coreCoverage = coreOffsets.empty()
        ? 1.0
        : static_cast<double>(coreResolved) / static_cast<double>(coreOffsets.size());
    const bool lowCoreCoverage = coreCoverage < 0.90;
    const std::vector<std::pair<std::string, std::string>> criticalCore = {
        {"client.dll", "dwEntityList"},
        {"client.dll", "dwLocalPlayerController"},
        {"client.dll", "dwViewMatrix"},
        {"engine2.dll", "dwBuildNumber"},
        {"engine2.dll", "dwNetworkGameClient"},
    };
    bool missingCriticalCore = false;
    for (const auto& [moduleName, offsetName] : criticalCore) {
        if (!FindFoundOffset(moduleName, offsetName)) {
            missingCriticalCore = true;
            break;
        }
    }
    bool hasLowConfidenceModule = false;
    std::string weakestModule = "n/a";
    double weakestScore = 1.0;
    for (const auto& module : moduleConfidence) {
        if (module.overallScore < weakestScore) {
            weakestScore = module.overallScore;
            weakestModule = module.module;
        }
        if (module.tier == "low") {
            hasLowConfidenceModule = true;
        }
    }

    std::string riskLevel = "low";
    if (severeDrop || lowValidationCoverage || hasLowConfidenceModule || missingCriticalCore) {
        riskLevel = "high";
    } else if (buildChanged || ratioDropped || lowCoreCoverage) {
        riskLevel = "medium";
    }

    std::vector<std::string> reasons;
    if (buildChanged) {
        reasons.push_back("build_changed");
    }
    if (ratioDropped) {
        reasons.push_back("validation_ratio_dropped");
    }
    if (lowValidationCoverage) {
        reasons.push_back("validation_ratio_below_95_percent");
    }
    if (hasLowConfidenceModule) {
        reasons.push_back("module_confidence_low");
    }
    if (lowCoreCoverage) {
        reasons.push_back("core_offset_coverage_below_90_percent");
    }
    if (missingCriticalCore) {
        reasons.push_back("critical_core_offset_missing");
    }
    if (reasons.empty()) {
        reasons.push_back("stable");
    }

    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "risk_report.json";
    std::ofstream out(reportPath);
    if (out.is_open()) {
        out << "{\n";
        out << "  \"risk_level\": \"" << JsonEscape(riskLevel) << "\",\n";
        out << "  \"current_build\": \"" << JsonEscape(currentBuild) << "\",\n";
        out << "  \"previous_build\": \"" << JsonEscape(previousBuild) << "\",\n";
        out << "  \"build_changed\": " << (buildChanged ? "true" : "false") << ",\n";
        out << "  \"validation\": {\n";
        out << "    \"current_ratio\": " << std::fixed << std::setprecision(6) << currentValidationRatio << ",\n";
        out << "    \"previous_ratio\": " << std::fixed << std::setprecision(6) << previousValidationRatio << ",\n";
        out << "    \"drop\": " << std::fixed << std::setprecision(6) << ratioDrop << "\n";
        out << "  },\n";
        out << "  \"module_confidence\": {\n";
        out << "    \"weakest_module\": \"" << JsonEscape(weakestModule) << "\",\n";
        out << "    \"weakest_score\": " << std::fixed << std::setprecision(6) << weakestScore << ",\n";
        out << "    \"has_low_tier_module\": " << (hasLowConfidenceModule ? "true" : "false") << "\n";
        out << "  },\n";
        out << "  \"core_coverage\": {\n";
        out << "    \"resolved\": " << coreResolved << ",\n";
        out << "    \"total\": " << coreOffsets.size() << ",\n";
        out << "    \"ratio\": " << std::fixed << std::setprecision(6) << coreCoverage << ",\n";
        out << "    \"low_core_coverage\": " << (lowCoreCoverage ? "true" : "false") << ",\n";
        out << "    \"missing_critical_core\": " << (missingCriticalCore ? "true" : "false") << "\n";
        out << "  },\n";
        out << "  \"reasons\": [\n";
        for (size_t i = 0; i < reasons.size(); ++i) {
            out << "    \"" << JsonEscape(reasons[i]) << "\"";
            out << (i + 1 < reasons.size() ? "," : "") << "\n";
        }
        out << "  ]\n";
        out << "}\n";
    }

    if (riskLevel == "high") {
        g_Logger.Warning("Risk", "High risk detected after update. Check patterns and validation_report.json");
    } else if (riskLevel == "medium") {
        g_Logger.Warning("Risk", "Medium risk detected. Review offsets before trusting output");
    } else {
        g_Logger.Success("Risk", "Low risk profile. Validation remained stable");
    }
    g_Logger.Success("Risk", "meta/risk_report.json written");
}

bool AskKeepArchivedBuild(const std::string& oldBuild, const fs::path& archivePath) {
    if (!GetConsoleWindow()) {
        return true;
    }

    std::cout << "\n[Prompt] Build anterior detectado (" << oldBuild << ").\n";
    std::cout << "[Prompt] Se archivo en: " << archivePath.string() << "\n";
    std::cout << "[Prompt] Quieres conservar ese build viejo? [Y/n]: ";

    std::string input;
    std::getline(std::cin, input);
    input = ToLowerCopy(TrimCopy(input));
    return input.empty() || input[0] != 'n';
}

void FinalizePreviousDumpArchive(const PreviousDumpState& previousDump, const std::string& currentBuild) {
    if (!previousDump.hadPreviousDump || previousDump.stagedPath.empty() || !fs::exists(previousDump.stagedPath)) {
        WriteArchiveHistoryIndex(currentBuild);
        return;
    }

    const std::string previousBuild = previousDump.previousBuild.empty() ? "unknown" : previousDump.previousBuild;
    if (!currentBuild.empty() && previousBuild == currentBuild) {
        g_Logger.Warning("Archive", "Previous build and current build match (" + currentBuild + "). Old data was overwritten.");
        std::error_code ec;
        fs::remove_all(previousDump.stagedPath, ec);
        WriteArchiveHistoryIndex(currentBuild);
        return;
    }

    const fs::path archiveRoot = fs::path(g_OutputPath) / "anteriores";
    fs::create_directories(archiveRoot);

    fs::path archivePath = archiveRoot / previousBuild;
    if (fs::exists(archivePath)) {
        std::string suffix = GetCurrentTimestamp();
        std::replace(suffix.begin(), suffix.end(), ':', '-');
        std::replace(suffix.begin(), suffix.end(), ' ', '_');
        archivePath = archiveRoot / (previousBuild + "_" + suffix);
    }
    fs::create_directories(archivePath);

    std::vector<fs::path> stagedEntries;
    for (const auto& entry : fs::directory_iterator(previousDump.stagedPath)) {
        stagedEntries.push_back(entry.path());
    }

    for (const auto& stagedEntry : stagedEntries) {
        const fs::path entryPath = stagedEntry;
        if (!fs::exists(entryPath)) {
            continue;
        }

        const std::string entryName = ToLowerCopy(entryPath.filename().string());
        if (entryName == "anteriores") {
            for (const auto& archivedEntry : fs::directory_iterator(entryPath)) {
                fs::path destination = archiveRoot / archivedEntry.path().filename();
                if (fs::exists(destination)) {
                    std::string suffix = GetCurrentTimestamp();
                    std::replace(suffix.begin(), suffix.end(), ':', '-');
                    std::replace(suffix.begin(), suffix.end(), ' ', '_');
                    destination = archiveRoot / (archivedEntry.path().filename().string() + "_" + suffix);
                }
                if (!MovePathWithFallback(archivedEntry.path(), destination)) {
                    g_Logger.Warning("Archive", "Failed to migrate archive item: " + archivedEntry.path().string());
                }
            }
            continue;
        }

        const fs::path destination = archivePath / entryPath.filename();
        if (!MovePathWithFallback(entryPath, destination)) {
            g_Logger.Warning("Archive", "Failed to archive item: " + entryPath.string());
        }
    }

    std::error_code ec;
    fs::remove_all(previousDump.stagedPath, ec);
    g_Logger.Success("Archive", "Previous build archived under anteriores/" + previousBuild);

    if (!AskKeepArchivedBuild(previousBuild, archivePath)) {
        fs::remove_all(archivePath, ec);
        g_Logger.Warning("Archive", "Archived build deleted by user request: " + previousBuild);
    } else {
        g_Logger.Success("Archive", "Archived build retained: " + previousBuild);
    }

    WriteArchiveHistoryIndex(currentBuild);
}
} // namespace

// ============================================================================
// MAIN DUMP FUNCTION
// ============================================================================

void DumpAll() {
    try {
        const auto dumpStart = std::chrono::steady_clock::now();
        // Create output directories.
        char userProfile[MAX_PATH];
        GetEnvironmentVariableA("USERPROFILE", userProfile, MAX_PATH);
        g_OutputPath = std::string(userProfile) + "\\Documents\\CS2_Dump";
        ResetRuntimeState();

        PreviousDumpState previousDump;
        try {
            previousDump = StagePreviousDump(fs::path(g_OutputPath));
        } catch (const std::exception& e) {
            MessageBoxA(NULL, (std::string("Failed to rotate previous dump directory:\n") + e.what()).c_str(),
                "Error", MB_OK | MB_ICONERROR);
            return;
        }
        
        std::string logsPath = g_OutputPath + "\\logs";
        std::string outputPath = g_OutputPath + "\\output";
        std::string schemasPath = g_OutputPath + "\\schemas";
        std::string exportsPath = g_OutputPath + "\\exports";
        std::string rttiPath = g_OutputPath + "\\rtti";
        std::string convarsPath = g_OutputPath + "\\convars";
        std::string vtablesPath = g_OutputPath + "\\vtables";
        std::string sdkPath = g_OutputPath + "\\sdk";
        std::string docsPath = g_OutputPath + "\\docs";
        std::string versionsPath = g_OutputPath + "\\versions";
        std::string metaPath = g_OutputPath + "\\meta";
        
        try {
            std::filesystem::create_directories(g_OutputPath);
            std::filesystem::create_directories(logsPath);
            std::filesystem::create_directories(outputPath);
            std::filesystem::create_directories(schemasPath);
            std::filesystem::create_directories(exportsPath);
            std::filesystem::create_directories(rttiPath);
            std::filesystem::create_directories(convarsPath);
            std::filesystem::create_directories(vtablesPath);
            std::filesystem::create_directories(sdkPath);
            std::filesystem::create_directories(docsPath);
            std::filesystem::create_directories(versionsPath);
            std::filesystem::create_directories(metaPath);
        } catch (const std::exception& e) {
            g_Logger.Error("Main", std::string("Failed to create directories: ") + e.what());
            MessageBoxA(NULL, "Failed to create output directories!", "Error", MB_OK | MB_ICONERROR);
            return;
        }
    
    // Initialize logger
    g_Logger.Initialize(logsPath + "\\dump_log.txt", LogLevel::Trace, true, true);
    g_Logger.Info("Main", "CS2 Complete Dumper starting...");
    g_Logger.Info("Main", "Output: " + g_OutputPath);
    if (previousDump.hadPreviousDump) {
        g_Logger.Info("Main", "Previous dump staged. Previous build: " +
            (previousDump.previousBuild.empty() ? std::string("unknown") : previousDump.previousBuild));
        if (previousDump.previousValidationRatio >= 0.0) {
            g_Logger.Info("Main", "Previous validation ratio: " +
                std::to_string(previousDump.previousValidationRatio * 100.0) + "%");
        }
    }
    
    // Get modules
    g_Logger.Info("Main", "=== MODULE ENUMERATION ===");
    const auto modulePhaseStart = std::chrono::steady_clock::now();
    GetLoadedModules();
    LogPhaseDuration("Module enumeration", modulePhaseStart);
    
    // Scan patterns
    g_Logger.Info("Main", "=== PATTERN SCANNING ===");
    const auto patternPhaseStart = std::chrono::steady_clock::now();
    ScanPatterns(g_ClientPatterns, sizeof(g_ClientPatterns)/sizeof(g_ClientPatterns[0]), "client.dll");
    ScanPatterns(g_Engine2Patterns, sizeof(g_Engine2Patterns)/sizeof(g_Engine2Patterns[0]), "engine2.dll");
    ScanPatterns(g_InputsystemPatterns, sizeof(g_InputsystemPatterns)/sizeof(g_InputsystemPatterns[0]), "inputsystem.dll");
    ScanPatterns(g_MatchmakingPatterns, sizeof(g_MatchmakingPatterns)/sizeof(g_MatchmakingPatterns[0]), "matchmaking.dll");
    ScanPatterns(g_SoundsystemPatterns, sizeof(g_SoundsystemPatterns)/sizeof(g_SoundsystemPatterns[0]), "soundsystem.dll");
    ScanPatterns(g_Tier0Patterns, sizeof(g_Tier0Patterns)/sizeof(g_Tier0Patterns[0]), "tier0.dll");
    LogPatternScanDiagnostics();
    LogPhaseDuration("Pattern scanning", patternPhaseStart);
    
    // Add static offsets and fallback candidates.
    g_Logger.Info("Main", "=== ADDING STATIC OFFSETS ===");
    for (auto& so : g_StaticOffsets) {
        FoundOffset off;
        off.name = so.name;
        off.module = so.module;
        off.offset = so.offset;
        off.description = so.description;
        if (AddFoundOffset(off, false)) {
            g_Logger.Success("Offsets", std::string(so.name) + " = " + ToHex(so.offset) + " (static)");
        } else {
            g_Logger.Warning("Offsets", std::string(so.name) + " duplicated, static fallback skipped");
        }
    }
    
    // Calculate derived offsets (dwViewAngles from dwCSGOInput, dwLocalPlayerPawn from dwPrediction)
    g_Logger.Info("Main", "=== DERIVED OFFSETS ===");
    uintptr_t csgoInputOffset = 0;
    uintptr_t predictionOffset = 0;
    uintptr_t gameEntitySystemOffset = 0;
    uintptr_t entityListOffset = 0;
    uintptr_t sensitivityOffset = 0;
    bool hasCsgoInput = false;
    bool hasPrediction = false;
    bool hasGameEntitySystem = false;
    bool hasSensitivity = false;
    bool hasEntityList = false;

    for (const auto& off : g_FoundOffsets) {
        if (off.module == "client.dll" && off.name == "dwCSGOInput") {
            csgoInputOffset = off.offset;
            hasCsgoInput = true;
        } else if (off.module == "client.dll" && off.name == "dwEntityList") {
            entityListOffset = off.offset;
            hasEntityList = true;
        } else if (off.module == "client.dll" && off.name == "dwPrediction") {
            predictionOffset = off.offset;
            hasPrediction = true;
        } else if (off.module == "client.dll" && off.name == "dwGameEntitySystem") {
            gameEntitySystemOffset = off.offset;
            hasGameEntitySystem = true;
        } else if (off.module == "client.dll" && off.name == "dwSensitivity") {
            sensitivityOffset = off.offset;
            hasSensitivity = true;
        }
    }

    if (!hasGameEntitySystem && hasEntityList) {
        FoundOffset gameEntitySystemFallback;
        gameEntitySystemFallback.name = "dwGameEntitySystem";
        gameEntitySystemFallback.module = "client.dll";
        gameEntitySystemFallback.offset = entityListOffset;
        gameEntitySystemFallback.description = "Game entity system (fallback alias from dwEntityList)";
        if (AddFoundOffset(gameEntitySystemFallback, false)) {
            g_Logger.Warning("Offsets", "dwGameEntitySystem fallback aliased to dwEntityList");
        }
        gameEntitySystemOffset = entityListOffset;
        hasGameEntitySystem = true;
    }

    if (hasCsgoInput) {
        uintptr_t viewAnglesField = 0x4520;
        const FoundOffset* dynamicViewField = FindFoundOffset("client.dll", "dwViewAngles_fieldOffset");
        if (dynamicViewField && dynamicViewField->offset > 0 && dynamicViewField->offset < 0x100000) {
            viewAnglesField = dynamicViewField->offset;
        } else {
            TryGetStaticOffsetValue("dwViewAngles_offset", viewAnglesField);
        }

        FoundOffset viewAngles;
        viewAngles.name = "dwViewAngles";
        viewAngles.module = "client.dll";
        viewAngles.offset = csgoInputOffset + viewAnglesField;
        viewAngles.description = "View angles (derived from dwCSGOInput + field offset)";
        if (AddFoundOffset(viewAngles, false)) {
            g_Logger.Success("Offsets", "dwViewAngles = " + ToHex(viewAngles.offset) + " (derived)");
        } else {
            g_Logger.Warning("Offsets", "dwViewAngles already present, derived fallback skipped");
        }
    }

    if (hasPrediction) {
        uintptr_t localPawnField = 0xE0;
        const FoundOffset* dynamicLocalPawnField = FindFoundOffset("client.dll", "dwLocalPlayerPawn_fieldOffset");
        if (dynamicLocalPawnField && dynamicLocalPawnField->offset > 0 && dynamicLocalPawnField->offset < 0x100000) {
            localPawnField = dynamicLocalPawnField->offset;
        } else {
            TryGetStaticOffsetValue("dwLocalPlayerPawn_offset", localPawnField);
        }

        FoundOffset localPawn;
        localPawn.name = "dwLocalPlayerPawn";
        localPawn.module = "client.dll";
        localPawn.offset = predictionOffset + localPawnField;
        localPawn.description = "Local player pawn (derived from dwPrediction + field offset)";
        if (AddFoundOffset(localPawn, false)) {
            g_Logger.Success("Offsets", "dwLocalPlayerPawn = " + ToHex(localPawn.offset) + " (derived)");
        } else {
            g_Logger.Warning("Offsets", "dwLocalPlayerPawn already present, derived fallback skipped");
        }
    }

    uintptr_t networkGameClientOffset = 0;
    bool hasNetworkGameClient = false;
    for (const auto& off : g_FoundOffsets) {
        if (off.module == "engine2.dll" && off.name == "dwNetworkGameClient") {
            networkGameClientOffset = off.offset;
            hasNetworkGameClient = true;
            break;
        }
    }

    if (hasNetworkGameClient) {
        const std::vector<std::pair<std::string, std::string>> networkDerived = {
            {"dwNetworkGameClient_clientTickCount", "dwNetworkGameClient_clientTickCount"},
            {"dwNetworkGameClient_serverTickCount", "dwNetworkGameClient_serverTickCount"},
            {"dwNetworkGameClient_deltaTick", "dwNetworkGameClient_deltaTick"},
            {"dwNetworkGameClient_signOnState", "dwNetworkGameClient_signOnState"},
            {"dwNetworkGameClient_localPlayer", "dwNetworkGameClient_localPlayer"},
            {"dwNetworkGameClient_maxClients", "dwNetworkGameClient_maxClients"},
            {"dwNetworkGameClient_isBackgroundMap", "dwNetworkGameClient_isBackgroundMap"},
        };

        auto findNetworkFieldOffset = [&](const std::string& fieldName) -> const FoundOffset* {
            const FoundOffset* off = FindFoundOffset("engine2.dll", fieldName);
            if (off && off->offset != 0) {
                return off;
            }
            return FindFoundOffset("engine2.dll", fieldName + "_alt");
        };

        for (const auto& [fieldName, offsetName] : networkDerived) {
            const FoundOffset* fieldOff = findNetworkFieldOffset(fieldName);
            if (!fieldOff || fieldOff->offset == 0 || fieldOff->offset > 0x100000) {
                continue;
            }

            FoundOffset derived;
            derived.name = offsetName + "_absolute";
            derived.module = "engine2.dll";
            derived.offset = networkGameClientOffset + fieldOff->offset;
            derived.description = "Absolute NetworkGameClient field (derived from dwNetworkGameClient + " + fieldName + ")";
            if (AddFoundOffset(derived, false)) {
                g_Logger.Success("Offsets", derived.name + " = " + ToHex(derived.offset) + " (derived)");
            }
        }
    }

    if (hasGameEntitySystem) {
        uintptr_t highestEntityIndexField = 0;
        const FoundOffset* dynamicHighestField = FindFoundOffset("client.dll", "dwGameEntitySystem_highestEntityIndex_offset");
        if (dynamicHighestField && dynamicHighestField->offset > 0 && dynamicHighestField->offset < 0x100000) {
            highestEntityIndexField = dynamicHighestField->offset;
        } else if (!TryGetStaticOffsetValue("dwGameEntitySystem_highestEntityIndex_offset", highestEntityIndexField)) {
            TryGetStaticOffsetValue("dwGameEntitySystem_highestEntityIndex_offset_alt", highestEntityIndexField);
        }

        if (highestEntityIndexField != 0) {
            FoundOffset highestEntityIndex;
            highestEntityIndex.name = "dwGameEntitySystem_highestEntityIndex";
            highestEntityIndex.module = "client.dll";
            highestEntityIndex.offset = highestEntityIndexField;
            highestEntityIndex.description = "Highest entity index field offset from CGameEntitySystem";
            if (AddFoundOffset(highestEntityIndex, false)) {
                g_Logger.Success("Offsets", "dwGameEntitySystem_highestEntityIndex = " + ToHex(highestEntityIndex.offset) + " (field)");
            } else {
                g_Logger.Warning("Offsets", "dwGameEntitySystem_highestEntityIndex already present, derived fallback skipped");
            }

            FoundOffset highestEntityIndexAbsolute;
            highestEntityIndexAbsolute.name = "dwGameEntitySystem_highestEntityIndex_absolute";
            highestEntityIndexAbsolute.module = "client.dll";
            highestEntityIndexAbsolute.offset = gameEntitySystemOffset + highestEntityIndexField;
            highestEntityIndexAbsolute.description = "Absolute highest entity index address (dwGameEntitySystem + field offset)";
            if (AddFoundOffset(highestEntityIndexAbsolute, false)) {
                g_Logger.Success("Offsets", "dwGameEntitySystem_highestEntityIndex_absolute = " + ToHex(highestEntityIndexAbsolute.offset) + " (derived)");
            }
        }
    }

    if (hasSensitivity) {
        uintptr_t sensitivityField = 0;
        const FoundOffset* dynamicSensitivityField = FindFoundOffset("client.dll", "dwSensitivity_sensitivity");
        if (dynamicSensitivityField && dynamicSensitivityField->offset > 0 && dynamicSensitivityField->offset < 0x1000) {
            sensitivityField = dynamicSensitivityField->offset;
        } else if (!TryGetStaticOffsetValue("dwSensitivity_sensitivity", sensitivityField)) {
            TryGetStaticOffsetValue("dwSensitivity_sensitivity_alt", sensitivityField);
        }

        if (sensitivityField != 0) {
            FoundOffset sensitivityValue;
            sensitivityValue.name = "dwSensitivityValue";
            sensitivityValue.module = "client.dll";
            sensitivityValue.offset = sensitivityOffset + sensitivityField;
            sensitivityValue.description = "Sensitivity float value (derived from dwSensitivity + field offset)";
            if (AddFoundOffset(sensitivityValue, false)) {
                g_Logger.Success("Offsets", "dwSensitivityValue = " + ToHex(sensitivityValue.offset) + " (derived)");
            } else {
                g_Logger.Warning("Offsets", "dwSensitivityValue already present, derived fallback skipped");
            }
        }
    }
    
    if (kEnableButtonScan) {
        try {
            g_Logger.Info("Main", "=== BUTTON SCANNING ===");
            ScanButtons();
        } catch (const std::exception& e) {
            g_Logger.Error("Main", std::string("Button scanning failed: ") + e.what());
        }
    } else {
        g_Logger.Warning("Main", "Button scanning skipped (disabled)");
    }

    if (kEnableInterfaceDump) {
        g_Logger.Info("Main", "=== INTERFACE DUMPING ===");
        std::vector<std::string> interfaceModules = DiscoverCreateInterfaceModules();
        if (interfaceModules.empty()) {
            // Fallback list when discovery is blocked.
            const char* fallbackModules[] = {
                "client.dll", "engine2.dll", "schemasystem.dll", "tier0.dll",
                "inputsystem.dll", "materialsystem2.dll", "scenesystem.dll",
                "resourcesystem.dll", "particles.dll", "rendersystemdx11.dll",
                "networksystem.dll", "panorama.dll", "vphysics2.dll",
                "soundsystem.dll", "animationsystem.dll", "host.dll",
                "matchmaking.dll", "localize.dll", "filesystem_stdio.dll",
                "meshsystem.dll", "server.dll", "worldrenderer.dll",
                "pulse_system.dll", "steamaudio.dll"
            };
            interfaceModules.assign(std::begin(fallbackModules), std::end(fallbackModules));
        }

        g_Logger.Info("Interfaces", "Interface module discovery count: " + std::to_string(interfaceModules.size()));
        for (const auto& modName : interfaceModules) {
            DumpInterfaces(modName);
        }
    } else {
        g_Logger.Warning("Main", "Interface dumping skipped (disabled)");
    }

    if (kEnableExportDump) {
        try {
            g_Logger.Info("Main", "=== EXPORT SCANNING ===");
            ScanExports();
        } catch (const std::exception& e) {
            g_Logger.Error("Main", std::string("Export scan failed: ") + e.what());
        }
    } else {
        g_Logger.Warning("Main", "Export scanning skipped (disabled)");
    }

    if (kEnableRTTIDump) {
        try {
            g_Logger.Info("Main", "=== RTTI SCANNING ===");
            ScanRTTI();
        } catch (const std::exception& e) {
            g_Logger.Error("Main", std::string("RTTI scan failed: ") + e.what());
        }
    } else {
        g_Logger.Warning("Main", "RTTI scanning skipped (disabled)");
    }

    if (kEnableConVarDump) {
        try {
            g_Logger.Info("Main", "=== CONVAR SCANNING ===");
            ScanConVars();
        } catch (const std::exception& e) {
            g_Logger.Error("Main", std::string("ConVar scan failed: ") + e.what());
        }
    } else {
        g_Logger.Warning("Main", "ConVar scanning skipped (disabled)");
    }

    if (kEnableVTableDump) {
        try {
            g_Logger.Info("Main", "=== VTABLE SCANNING ===");
            ScanVTables();
        } catch (const std::exception& e) {
            g_Logger.Error("Main", std::string("VTable scan failed: ") + e.what());
        }
    } else {
        g_Logger.Warning("Main", "VTable scanning skipped (disabled)");
    }
    
    // Dump schemas (pattern-based, safe)
    try {
        g_Logger.Info("Main", "=== SCHEMA EXTRACTION ===");
        auto schemaMod = FindModule("schemasystem.dll");
        if (schemaMod) {
            DumpSchemas(schemaMod->base, schemaMod->size);
        } else {
            g_Logger.Warning("Schemas", "schemasystem.dll not found - skipping schema extraction");
        }
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("Schema extraction failed: ") + e.what());
    }
    
    // Build schema index
    try {
        g_Logger.Info("Main", "=== BUILDING SCHEMA INDEX ===");
        BuildSchemaIndex();
        LinkRTTIToSchemas();
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("Schema index build failed: ") + e.what());
    }
    
    // Advanced engine modeling
    g_Logger.Info("Main", "=== ENGINE MODELING ===");
    FlattenInheritance();
    DetectComponents();
    
    // Write output files
    g_Logger.Info("Main", "=== WRITING OUTPUT FILES ===");
    const auto writePhaseStart = std::chrono::steady_clock::now();
    WriteStructuredOutput();
    WriteExportsJson();
    WriteExportsHpp();
    WriteRTTIJson();
    WriteRTTIHpp();
    WriteConVarsJson();
    WriteConVarsHpp();
    WriteVTablesJson();
    WriteVTablesHpp();
    WriteComponentGraphJson();
    WriteAllSchemas();
    WriteHotNetvarExports();
    GenerateSDK();
    ValidateOffsetsRuntime();
    WriteValidationReport();
    const auto semanticResults = RunSemanticValidationChecks();
    WriteSemanticValidationReport(semanticResults);
    WriteSchemaSemanticValidationReport();
    const auto moduleConfidence = ComputeModuleConfidence(semanticResults);
    WriteModuleConfidenceReport(moduleConfidence);
    WriteCoverageReport();
    const auto fragilePatterns = BuildFragilityEntries(semanticResults);
    WriteFragilePatternsReport(fragilePatterns);
    WritePatternAutofixSuggestions(fragilePatterns);
    const std::string currentBuild = SaveVersionedDump();
    const BuildDiffStats diffStats = WriteBuildDiffReport(previousDump, currentBuild);
    WriteRiskReport(previousDump.previousBuild, currentBuild, previousDump.previousValidationRatio, moduleConfidence);
    WriteRegressionTestManifest(currentBuild);
    WriteIntegrationPack(moduleConfidence);
    FinalizePreviousDumpArchive(previousDump, currentBuild);
    WriteOffsetStabilityReport(currentBuild);
    GenerateHTMLDocumentation();
    WriteEnhancedHtmlDashboard(currentBuild, diffStats, semanticResults, moduleConfidence, fragilePatterns);
    LogPhaseDuration("Output and reports", writePhaseStart);
    
    // Summary
    g_Logger.Info("Main", "=== DUMP COMPLETE ===");
    g_Logger.Info("Main", "Offsets found: " + std::to_string(g_FoundOffsets.size()));
    g_Logger.Info("Main", "Buttons found: " + std::to_string(g_FoundButtons.size()));
    g_Logger.Info("Main", "Exports found: " + std::to_string(g_ModuleExports.size()));
    g_Logger.Info("Main", "RTTI classes: " + std::to_string(g_RTTIClasses.size()));
    g_Logger.Info("Main", "ConVars: " + std::to_string(g_ConVars.size()));
    g_Logger.Info("Main", "VTables: " + std::to_string(g_VTables.size()));
    
    int totalInterfaces = 0;
    for (auto& [mod, ifaces] : g_Interfaces) totalInterfaces += (int)ifaces.size();
    g_Logger.Info("Main", "Interfaces found: " + std::to_string(totalInterfaces));
    
    int totalSchemaClasses = 0;
    int totalSchemaFields = 0;
    int totalSchemaEnums = 0;
    for (auto& [scope, classes] : g_SchemaClasses) {
        totalSchemaClasses += (int)classes.size();
        for (auto& cls : classes) totalSchemaFields += (int)cls.fields.size();
    }
    for (auto& [scope, enums] : g_SchemaEnums) {
        totalSchemaEnums += (int)enums.size();
    }
    g_Logger.Info("Main", "Schema classes: " + std::to_string(totalSchemaClasses) + ", enums: " + std::to_string(totalSchemaEnums) + ", fields: " + std::to_string(totalSchemaFields));
    LogPhaseDuration("Total dump", dumpStart);
    
    g_Logger.WriteSummary();
    
    // Show message box with summary
    try {
        std::string msg = "CS2 ULTIMATE DUMPER Complete!\n\n";
        msg += "Offsets: " + std::to_string(g_FoundOffsets.size()) + "\n";
        msg += "Buttons: " + std::to_string(g_FoundButtons.size()) + "\n";
        msg += "Interfaces: " + std::to_string(totalInterfaces) + "\n";
        msg += "Exports: " + std::to_string(g_ModuleExports.size()) + "\n";
        msg += "RTTI Classes: " + std::to_string(g_RTTIClasses.size()) + "\n";
        msg += "ConVars: " + std::to_string(g_ConVars.size()) + "\n";
        msg += "VTables: " + std::to_string(g_VTables.size()) + "\n";
        msg += "Schema Classes: " + std::to_string(totalSchemaClasses) + "\n";
        msg += "Schema Enums: " + std::to_string(totalSchemaEnums) + "\n";
        msg += "Schema Fields: " + std::to_string(totalSchemaFields) + "\n\n";
        msg += "Output: " + g_OutputPath;
        
        MessageBoxA(nullptr, msg.c_str(), "CS2 ULTIMATE DUMPER", MB_OK | MB_ICONINFORMATION);
    } catch (...) {
        MessageBoxA(nullptr, "Dump completed but summary display failed", "CS2 ULTIMATE DUMPER", MB_OK | MB_ICONWARNING);
    }
    
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("FATAL ERROR: ") + e.what());
        MessageBoxA(NULL, (std::string("Fatal error during dump:\n") + e.what()).c_str(), "Error", MB_OK | MB_ICONERROR);
    } catch (...) {
        g_Logger.Error("Main", "FATAL ERROR: Unknown exception");
        MessageBoxA(NULL, "Fatal error during dump: Unknown exception", "Error", MB_OK | MB_ICONERROR);
    }
}

// ============================================================================
// DLL ENTRY POINT
// ============================================================================

static void InitLiveConsole() {
    if (GetConsoleWindow()) return;
    if (!AllocConsole()) return;

    SetConsoleTitleA("CS2 Dumper Live Log");

    FILE* out = nullptr;
    FILE* err = nullptr;
    FILE* in = nullptr;
    freopen_s(&out, "CONOUT$", "w", stdout);
    freopen_s(&err, "CONOUT$", "w", stderr);
    freopen_s(&in, "CONIN$", "r", stdin);

    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode = 0;
    if (hOut != INVALID_HANDLE_VALUE && GetConsoleMode(hOut, &mode)) {
        SetConsoleMode(hOut, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    }
}

DWORD WINAPI DumpThread(LPVOID) {
    InitLiveConsole();
    Sleep(2000); // Allow modules to fully initialize after injection.
    DumpAll();
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        HANDLE thread = CreateThread(nullptr, 0, DumpThread, nullptr, 0, nullptr);
        if (thread) {
            CloseHandle(thread);
        }
    }
    return TRUE;
}


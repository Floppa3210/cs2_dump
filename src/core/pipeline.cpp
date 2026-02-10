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

#include "include/core/pipeline.hpp"
#include "include/core/legacy_api.hpp"
#include "include/core/dump_paths.hpp"
#include "include/core/dump_context.hpp"

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
#include "include/utils/json_writer.hpp"

// Schema System (E1-E5 implementation)
#include "schemas.hpp"
#include "schema_dump.hpp"
#include "include/schema_tools.hpp"

// ============================================================================
// NOTE: Multi-TU migration
// ============================================================================
// The original monolithic `main.cpp` owned both the pipeline and all legacy
// globals + helper free-functions (module enumeration, PatternScan wrappers,
// timestamp helpers).
//
// After the Multi-TU refactor:
// - Legacy globals live in `src/legacy_globals.cpp`
// - Legacy helper free-functions live in `src/core/legacy_api.cpp`
//
// The end goal is to delete these legacy globals entirely and move all state
// into DumpContext, but we keep behavior identical during the transition.

namespace {
struct PreviousDumpState {
    bool hadPreviousDump = false;
    fs::path stagedPath;
    std::string previousBuild;
    double previousValidationRatio = -1.0;
};

struct PhaseTimingEntry {
    std::string phase;
    int64_t milliseconds = 0;
};

struct PendingArchiveDecision {
    bool hasPending = false;
    std::string previousBuild;
    fs::path archivePath;
};

constexpr bool kEnableButtonScan = true;
constexpr bool kEnableInterfaceDump = true;
constexpr bool kEnableExportDump = true;
constexpr bool kEnableRTTIDump = true;
constexpr bool kEnableConVarDump = true;
constexpr bool kEnableVTableDump = true;
std::vector<PhaseTimingEntry> g_PhaseTimings;
PendingArchiveDecision g_PendingArchiveDecision;

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
    g_PhaseTimings.clear();
    g_PendingArchiveDecision = {};
}

void LogPhaseDuration(const std::string& phaseName, const std::chrono::steady_clock::time_point& startTime) {
    const auto endTime = std::chrono::steady_clock::now();
    const auto elapsedMs = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
    g_PhaseTimings.push_back({phaseName, elapsedMs});
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

const FoundOffset* FindFoundOffset(const DumpContext& ctx, const std::string& module, const std::string& name) {
    for (const auto& off : ctx.offsets) {
        if (off.module == module && off.name == name) {
            return &off;
        }
    }
    return nullptr;
}

DumpContext BuildContextSnapshot() {
    DumpContext ctx;
    ctx.paths = DumpPaths::MakeDefault();
    if (!g_OutputPath.empty()) {
        ctx.paths.root = fs::path(g_OutputPath);
        ctx.paths.meta = ctx.paths.root / "meta";
        ctx.paths.docs = ctx.paths.root / "docs";
        ctx.paths.versions = ctx.paths.root / "versions";
    }

    ctx.modules = g_Modules;
    ctx.offsets = g_FoundOffsets;
    ctx.interfaces = g_Interfaces;
    ctx.buttons = g_FoundButtons;
    ctx.patternScanRecords = g_PatternScanRecords;
    ctx.componentGraph = g_ComponentGraph;
    ctx.exports = g_ModuleExports;
    ctx.rtti = g_RTTIClasses;
    ctx.convars = g_ConVars;
    ctx.vtables = g_VTables;
    ctx.schemaClasses = g_SchemaClasses;
    ctx.schemaEnums = g_SchemaEnums;
    return ctx;
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

    JsonWriter jw(out);
    jw.begin_object();

    jw.key("summary").begin_object();
    jw.key("total").value_number(static_cast<int64_t>(results.size()));
    jw.key("valid").value_number(static_cast<int64_t>(validCount));
    jw.key("invalid").value_number(static_cast<int64_t>(results.size() - validCount));
    jw.end_object();

    jw.key("entries").begin_array();
    for (const auto& entry : results) {
        jw.begin_object();
        jw.key("module").value_string(entry.module);
        jw.key("name").value_string(entry.name);
        jw.key("valid").value_bool(entry.valid);
        jw.key("reason").value_string(entry.reason);
        jw.key("details").value_string(entry.details);
        jw.end_object();
    }
    jw.end_array();

    jw.end_object();
    out << '\n';

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

    JsonWriter jw(out);
    jw.begin_object();
    jw.key("modules").begin_array();
    for (const auto& e : entries) {
        jw.begin_object();
        jw.key("module").value_string(e.module);
        jw.key("tier").value_string(e.tier);
        jw.key("overall").value_number(e.overallScore);
        jw.key("structural").value_number(e.structuralScore);
        jw.key("pattern").value_number(e.patternScore);
        jw.key("semantic").value_number(e.semanticScore);
        jw.key("counts").begin_object();
        jw.key("structural_total").value_number(static_cast<int64_t>(e.structuralTotal));
        jw.key("pattern_total").value_number(static_cast<int64_t>(e.patternTotal));
        jw.key("semantic_total").value_number(static_cast<int64_t>(e.semanticTotal));
        jw.end_object();
        jw.end_object();
    }
    jw.end_array();
    jw.end_object();
    out << '\n';

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

void WriteCoverageReport(const DumpContext& ctx) {
    const fs::path reportPath = ctx.paths.meta / "coverage_report.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    std::map<std::string, std::array<int, 3>> patternByModule;
    int patternTotal = 0;
    int patternFound = 0;
    int patternResolved = 0;
    for (const auto& record : ctx.patternScanRecords) {
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

    JsonWriter jw(out);
    jw.begin_object();

    jw.key("summary").begin_object();
    jw.key("pattern_total").value_number(static_cast<int64_t>(patternTotal));
    jw.key("pattern_found").value_number(static_cast<int64_t>(patternFound));
    jw.key("pattern_resolved").value_number(static_cast<int64_t>(patternResolved));
    jw.key("core_offsets_total").value_number(static_cast<int64_t>(coreOffsets.size()));
    jw.key("core_offsets_resolved").value_number(static_cast<int64_t>(coreResolved));
    jw.key("core_offsets_missing").value_number(static_cast<int64_t>(coreOffsets.size() - coreResolved));
    jw.end_object();

    jw.key("module_coverage").begin_array();
    for (const auto& [moduleName, patternStats] : patternByModule) {
        const int offsetCount = offsetByModule.count(moduleName) ? offsetByModule[moduleName] : 0;
        jw.begin_object();
        jw.key("module").value_string(moduleName);
        jw.key("patterns_total").value_number(static_cast<int64_t>(patternStats[0]));
        jw.key("patterns_found").value_number(static_cast<int64_t>(patternStats[1]));
        jw.key("patterns_resolved").value_number(static_cast<int64_t>(patternStats[2]));
        jw.key("offsets_emitted").value_number(static_cast<int64_t>(offsetCount));
        jw.end_object();
    }
    jw.end_array();

    jw.key("core_offsets").begin_array();
    for (const auto& [moduleName, offsetName] : coreOffsets) {
        const FoundOffset* off = FindFoundOffset(moduleName, offsetName);
        jw.begin_object();
        jw.key("module").value_string(moduleName);
        jw.key("name").value_string(offsetName);
        jw.key("resolved").value_bool(off != nullptr);
        if (off) {
            jw.key("value").value_string(FormatHex(off->offset));
        }
        jw.end_object();
    }
    jw.end_array();

    jw.end_object();
    out << '\n';

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

    JsonWriter jw(out);
    jw.begin_object();
    jw.key("current_build").value_string(currentBuild);
    jw.key("previous_build").value_string(previousDump.previousBuild);
    jw.key("has_baseline").value_bool(hasBaseline);
    jw.key("summary").begin_object();
    jw.key("offset_changes").value_number(static_cast<int64_t>(offsetDiffs.size()));
    jw.key("pattern_changes").value_number(static_cast<int64_t>(patternDiffs.size()));
    jw.end_object();

    jw.key("offsets").begin_object();
    jw.key("added").value_number(static_cast<int64_t>(stats.offsetAdded));
    jw.key("removed").value_number(static_cast<int64_t>(stats.offsetRemoved));
    jw.key("changed").value_number(static_cast<int64_t>(stats.offsetChanged));
    jw.key("entries").begin_array();
    for (const auto& d : offsetDiffs) {
        jw.begin_object();
        jw.key("module").value_string(d.module);
        jw.key("name").value_string(d.name);
        jw.key("type").value_string(d.changeType);
        jw.key("old").value_string(d.oldValue);
        jw.key("new").value_string(d.newValue);
        jw.end_object();
    }
    jw.end_array();
    jw.end_object();

    jw.key("patterns").begin_object();
    jw.key("added").value_number(static_cast<int64_t>(stats.patternAdded));
    jw.key("removed").value_number(static_cast<int64_t>(stats.patternRemoved));
    jw.key("changed").value_number(static_cast<int64_t>(stats.patternChanged));
    jw.key("entries").begin_array();
    for (const auto& d : patternDiffs) {
        jw.begin_object();
        jw.key("module").value_string(d.module);
        jw.key("name").value_string(d.name);
        jw.key("type").value_string(d.changeType);
        jw.key("old").value_string(d.oldValue);
        jw.key("new").value_string(d.newValue);
        jw.end_object();
    }
    jw.end_array();
    jw.end_object();
    jw.end_object();
    out << '\n';

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

    JsonWriter jw(out);
    jw.begin_object();
    jw.key("summary").begin_object();
    jw.key("total_fragile").value_number(static_cast<int64_t>(entries.size()));
    jw.key("highest_score").value_number(static_cast<int64_t>(entries.empty() ? 0 : entries.front().score));
    jw.end_object();
    jw.key("entries").begin_array();
    for (const auto& e : entries) {
        jw.begin_object();
        jw.key("module").value_string(e.module);
        jw.key("name").value_string(e.name);
        jw.key("score").value_number(static_cast<int64_t>(e.score));
        jw.key("resolved_rva").value_string(FormatHex(e.resolvedRva));
        jw.key("recommendation").value_string(e.recommendation);
        jw.key("reasons").begin_array();
        for (const auto& reason : e.reasons) {
            jw.value_string(reason);
        }
        jw.end_array();
        jw.end_object();
    }
    jw.end_array();
    jw.end_object();
    out << '\n';

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

    JsonWriter jw(out);
    jw.begin_object();
    jw.key("suggestions").begin_array();
    for (const auto& e : entries) {
        if (e.score < 3) {
            continue;
        }

        const std::string relaxed = BuildRelaxedPattern(e.pattern);
        jw.begin_object();
        jw.key("module").value_string(e.module);
        jw.key("name").value_string(e.name);
        jw.key("fragility_score").value_number(static_cast<int64_t>(e.score));
        jw.key("current_pattern").value_string(e.pattern);
        jw.key("suggested_relaxed_pattern").value_string(relaxed);
        jw.key("note").value_string("Re-validate this candidate against the next game update before promoting.");
        jw.end_object();
    }
    jw.end_array();
    jw.key("generated_for").value_string(GetCurrentTimestamp());
    jw.end_object();
    out << '\n';

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

bool IsFallbackOrCandidateName(const std::string& name) {
    const std::string lower = ToLowerCopy(name);
    return lower.find("_alt") != std::string::npos ||
        lower.find("_offset") != std::string::npos ||
        lower.find("fallback") != std::string::npos ||
        lower.find("candidate") != std::string::npos;
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
    JsonWriter jw(out);
    jw.begin_object();
    jw.key("checks").begin_array();
    for (const auto& check : checks) {
        SchemaClass* cls = FindSchemaClassByName(check.className);
        const bool classFound = cls != nullptr;
        const bool fieldFound = SchemaFieldExists(cls, check.fieldName);
        const bool valid = classFound && fieldFound;
        if (valid) {
            ++validCount;
        }

        jw.begin_object();
        jw.key("class").value_string(check.className);
        jw.key("field").value_string(check.fieldName);
        jw.key("valid").value_bool(valid);
        jw.key("class_found").value_bool(classFound);
        jw.key("field_found").value_bool(fieldFound);
        jw.key("rationale").value_string(check.rationale);
        jw.end_object();
    }
    jw.end_array();
    jw.key("summary").begin_object();
    jw.key("total").value_number(static_cast<int64_t>(checks.size()));
    jw.key("valid").value_number(static_cast<int64_t>(validCount));
    jw.key("invalid").value_number(static_cast<int64_t>(checks.size() - validCount));
    jw.end_object();
    jw.end_object();
    out << '\n';

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

    JsonWriter jw(out);
    jw.begin_object();
    jw.key("build").value_string(currentBuild);
    jw.key("tests").begin_array();
    for (const auto& [moduleName, offsetName] : coreOffsets) {
        const FoundOffset* off = FindFoundOffset(moduleName, offsetName);
        jw.begin_object();
        jw.key("name").value_string(offsetName);
        jw.key("module").value_string(moduleName);
        jw.key("exists").value_bool(off != nullptr);
        jw.key("expected").value_string("resolved_and_semantic_valid");
        jw.end_object();
    }
    jw.end_array();
    jw.end_object();
    out << '\n';

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

    JsonWriter jw(out);
    jw.begin_object();
    jw.key("build_samples").value_number(static_cast<int64_t>(buildOffsets.size()));
    jw.key("entries").begin_array();
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

        jw.begin_object();
        jw.key("module").value_string(moduleName);
        jw.key("name").value_string(offsetName);
        jw.key("stability").value_number(stability);
        jw.key("samples").value_number(static_cast<int64_t>(values.size()));
        jw.end_object();
    }
    jw.end_array();
    jw.end_object();
    out << '\n';

    g_Logger.Success("Stability", "meta/offset_stability.json written");
}

void WritePhaseTimingsReport(const std::string& currentBuild) {
    const fs::path reportPath = fs::path(g_OutputPath) / "meta" / "phase_timings.json";
    std::ofstream out(reportPath);
    if (!out.is_open()) {
        return;
    }

    int64_t totalMs = 0;
    for (const auto& entry : g_PhaseTimings) {
        totalMs += entry.milliseconds;
    }

    JsonWriter jw(out);
    jw.begin_object();
    jw.key("build").value_string(currentBuild);
    jw.key("generated_at").value_string(GetCurrentTimestamp());
    jw.key("total_ms").value_number(totalMs);
    jw.key("phases").begin_array();
    for (const auto& entry : g_PhaseTimings) {
        jw.begin_object();
        jw.key("name").value_string(entry.phase);
        jw.key("ms").value_number(entry.milliseconds);
        jw.end_object();
    }
    jw.end_array();
    jw.end_object();
    out << '\n';

    g_Logger.Success("Timings", "meta/phase_timings.json written");
}

void WriteIntegrationPack(
    const DumpContext& ctx,
    const std::vector<ModuleConfidenceEntry>& moduleConfidence,
    const std::vector<SemanticValidationEntry>& semanticResults
) {
    std::set<std::string> lowConfidenceModules;
    for (const auto& entry : moduleConfidence) {
        if (entry.tier == "low") {
            lowConfidenceModules.insert(entry.module);
        }
    }

    const fs::path integrationRoot = ctx.paths.root / "output" / "integration";
    std::error_code ec;
    fs::create_directories(integrationRoot, ec);

    std::ofstream offsetsOut(integrationRoot / "offsets_safe.json");
    if (offsetsOut.is_open()) {
        std::map<std::string, std::vector<const FoundOffset*>> grouped;
        for (const auto& off : ctx.offsets) {
            if (lowConfidenceModules.find(off.module) != lowConfidenceModules.end()) {
                continue;
            }
            if (IsFallbackOrCandidateName(off.name)) {
                continue;
            }
            grouped[off.module].push_back(&off);
        }

        JsonWriter jw(offsetsOut);
        jw.begin_object();
        for (const auto& [moduleName, offsets] : grouped) {
            jw.key(moduleName).begin_object();
            for (const auto* off : offsets) {
                jw.key(off->name).value_number(static_cast<uint64_t>(off->offset));
            }
            jw.end_object();
        }
        jw.end_object();
        offsetsOut << '\n';
    }

    std::set<std::string> semanticValid;
    for (const auto& s : semanticResults) {
        if (s.valid) {
            semanticValid.insert(s.module + "::" + s.name);
        }
    }

    int verifiedTotal = 0;
    std::ofstream verifiedOut(integrationRoot / "offsets_verified.json");
    if (verifiedOut.is_open()) {
        std::map<std::string, std::vector<const FoundOffset*>> grouped;
        for (const auto& off : ctx.offsets) {
            if (lowConfidenceModules.find(off.module) != lowConfidenceModules.end()) {
                continue;
            }
            if (IsFallbackOrCandidateName(off.name)) {
                continue;
            }
            if (semanticValid.find(off.module + "::" + off.name) == semanticValid.end()) {
                continue;
            }
            grouped[off.module].push_back(&off);
            ++verifiedTotal;
        }

        JsonWriter jw(verifiedOut);
        jw.begin_object();
        for (const auto& [moduleName, offsets] : grouped) {
            jw.key(moduleName).begin_object();
            for (const auto* off : offsets) {
                jw.key(off->name).value_number(static_cast<uint64_t>(off->offset));
            }
            jw.end_object();
        }
        jw.end_object();
        verifiedOut << '\n';
    }

    int fallbackCandidates = 0;
    for (const auto& off : ctx.offsets) {
        if (IsFallbackOrCandidateName(off.name)) {
            ++fallbackCandidates;
        }
    }

    const fs::path qualityPath = ctx.paths.meta / "output_quality.json";
    std::ofstream qualityOut(qualityPath);
    if (qualityOut.is_open()) {
        JsonWriter jw(qualityOut);
        jw.begin_object();
        jw.key("summary").begin_object();
        jw.key("raw_offsets").value_number(static_cast<int64_t>(ctx.offsets.size()));
        jw.key("fallback_or_candidate_offsets").value_number(static_cast<int64_t>(fallbackCandidates));
        jw.key("verified_offsets").value_number(static_cast<int64_t>(verifiedTotal));
        jw.key("low_confidence_modules").value_number(static_cast<int64_t>(lowConfidenceModules.size()));
        jw.end_object();
        jw.key("notes").begin_array();
        jw.value_string("offsets_verified.json includes only semantic-valid offsets and excludes fallback/candidate names.");
        jw.value_string("Use offsets_safe.json for broad integration and offsets_verified.json for strict usage.");
        jw.end_array();
        jw.end_object();
        qualityOut << '\n';
    }

    std::ofstream summaryOut(integrationRoot / "summary.json");
    if (summaryOut.is_open()) {
        JsonWriter jw(summaryOut);
        jw.begin_object();
        jw.key("excluded_low_confidence_modules").begin_array();
        for (const auto& moduleName : lowConfidenceModules) {
            jw.value_string(moduleName);
        }
        jw.end_array();
        jw.key("verified_offsets").value_number(static_cast<int64_t>(verifiedTotal));
        jw.end_object();
        summaryOut << '\n';
    }

    g_Logger.Success("Integration", "output/integration/{offsets_safe.json,offsets_verified.json,summary.json} written");
    g_Logger.Success("Integration", "meta/output_quality.json written");
}

void WriteEnhancedHtmlDashboard(
    const DumpContext& ctx,
    const std::string& currentBuild,
    const BuildDiffStats& diffStats,
    const std::vector<SemanticValidationEntry>& semanticResults,
    const std::vector<ModuleConfidenceEntry>& moduleConfidence,
    const std::vector<FragilePatternEntry>& fragilePatterns
) {
    const fs::path docsPath = ctx.paths.docs;
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
    for (const auto& p : ctx.patternScanRecords) {
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
        if (FindFoundOffset(ctx, moduleName, offsetName)) {
            ++coreResolved;
        } else {
            missingCoreOffsets.push_back({moduleName, offsetName});
        }
    }

    // Intentionally fully embedded: dashboard generation is self-contained in the DLL.

    std::ofstream out(docsPath / "index.html");
    if (!out.is_open()) {
        return;
    }

    auto toPercent = [](int value, int total) -> int {
        if (total <= 0) {
            return 0;
        }
        int pct = static_cast<int>((100.0 * static_cast<double>(value)) / static_cast<double>(total));
        if (pct < 0) return 0;
        if (pct > 100) return 100;
        return pct;
    };

    auto htmlEscape = [](const std::string& input) -> std::string {
        std::string outEscaped;
        outEscaped.reserve(input.size() + 16);
        for (char c : input) {
            switch (c) {
            case '&': outEscaped += "&amp;"; break;
            case '<': outEscaped += "&lt;"; break;
            case '>': outEscaped += "&gt;"; break;
            case '"': outEscaped += "&quot;"; break;
            case '\'': outEscaped += "&#39;"; break;
            default: outEscaped += c; break;
            }
        }
        return outEscaped;
    };

    const int patternFoundPct = toPercent(patternFound, static_cast<int>(ctx.patternScanRecords.size()));
    const int patternResolvedPct = toPercent(patternResolved, static_cast<int>(ctx.patternScanRecords.size()));
    const int semanticPct = toPercent(semanticValid, static_cast<int>(semanticResults.size()));
    const int coreCoveragePct = toPercent(coreResolved, static_cast<int>(coreOffsets.size()));

    int totalInterfaces = 0;
    for (const auto& [moduleName, ifaces] : ctx.interfaces) {
        (void)moduleName;
        totalInterfaces += static_cast<int>(ifaces.size());
    }

    int totalSchemaClasses = 0;
    int totalSchemaFields = 0;
    int totalSchemaEnums = 0;
    for (const auto& [scopeName, classes] : ctx.schemaClasses) {
        (void)scopeName;
        totalSchemaClasses += static_cast<int>(classes.size());
        for (const auto& cls : classes) {
            totalSchemaFields += static_cast<int>(cls.fields.size());
        }
    }
    for (const auto& [scopeName, enums] : ctx.schemaEnums) {
        (void)scopeName;
        totalSchemaEnums += static_cast<int>(enums.size());
    }

    int highConfidence = 0;
    int mediumConfidence = 0;
    int lowConfidence = 0;
    for (const auto& m : moduleConfidence) {
        if (m.tier == "high") {
            ++highConfidence;
        } else if (m.tier == "medium") {
            ++mediumConfidence;
        } else {
            ++lowConfidence;
        }
    }

    std::vector<const PatternScanRecord*> missingPatterns;
    missingPatterns.reserve(ctx.patternScanRecords.size());
    for (const auto& rec : ctx.patternScanRecords) {
        if (!rec.resolved) {
            missingPatterns.push_back(&rec);
        }
    }

    out << "<!doctype html><html><head><meta charset=\"utf-8\">";
    out << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">";
    out << "<title>CS2 Dumper Dashboard</title>";
    out << "<style>"
           ":root{"
           "--bg:#070b11;--ink:#dce7f7;--muted:#8ea3be;--card:#0d1522;--line:#1f3148;"
           "--ok:#36d399;--warn:#f4bf4f;--bad:#ff6b88;--accent:#5aa9ff;--accent2:#08c4b3;--card-2:#111d2e;}"
           "*{box-sizing:border-box;}"
           "body{margin:0;font-family:Bahnschrift,'Trebuchet MS',Tahoma,sans-serif;background:radial-gradient(1200px 900px at 10% -20%,#10243f 0%,#070b11 45%,#05070d 100%);color:var(--ink);}"
           ".topbar{padding:34px 22px 26px;background:linear-gradient(132deg,#13243e 0%,#102744 52%,#0f3b49 100%);color:#eff7ff;border-bottom:1px solid #2d4461;box-shadow:0 10px 38px rgba(0,0,0,.35);}"
           ".title{margin:0;font-size:28px;letter-spacing:.4px;}"
           ".subtitle{margin:8px 0 0;color:#b9d7ff;font-size:14px;}"
           ".wrap{max-width:1320px;margin:0 auto;padding:18px 18px 24px;}"
           ".grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(195px,1fr));gap:12px;margin-top:-42px;}"
           ".card{background:linear-gradient(180deg,var(--card),#0a121d);border:1px solid var(--line);border-radius:14px;padding:12px 14px;box-shadow:0 8px 28px rgba(0,0,0,.32);}"
           ".kpi-label{font-size:12px;color:var(--muted);text-transform:uppercase;letter-spacing:.7px;}"
           ".kpi-value{font-size:30px;font-weight:700;line-height:1.08;margin-top:4px;}"
           ".kpi-sub{font-size:12px;color:var(--muted);margin-top:4px;}"
           ".section{background:linear-gradient(180deg,var(--card),var(--card-2));border:1px solid var(--line);border-radius:14px;padding:14px;margin-top:14px;box-shadow:0 10px 28px rgba(0,0,0,.28);}"
           ".section h2{margin:0 0 10px;font-size:18px;color:#cfe4ff;}"
           ".baseline{display:inline-block;padding:3px 9px;border-radius:999px;font-size:12px;font-weight:700;}"
           ".baseline.ok{background:rgba(54,211,153,.14);color:var(--ok);border:1px solid rgba(54,211,153,.35);}"
           ".baseline.warn{background:rgba(244,191,79,.14);color:var(--warn);border:1px solid rgba(244,191,79,.4);}"
           "table{width:100%;border-collapse:collapse;margin-top:8px;font-size:14px;}"
           "th,td{border-bottom:1px solid #1c2d44;padding:9px 10px;text-align:left;vertical-align:middle;}"
           "th{background:#0f1e31;color:#9bb3cf;font-size:12px;text-transform:uppercase;letter-spacing:.55px;}"
           "tr:hover td{background:#132238;}"
           ".tier-ok{color:var(--ok);font-weight:700;} .tier-warn{color:var(--warn);font-weight:700;} .tier-bad{color:var(--bad);font-weight:700;}"
           ".meter{position:relative;height:9px;background:#0a1220;border:1px solid #20324a;border-radius:999px;overflow:hidden;min-width:150px;}"
           ".meter>span{position:absolute;left:0;top:0;bottom:0;background:linear-gradient(90deg,var(--accent),var(--accent2));}"
           ".mono{font-family:'Cascadia Mono',Consolas,monospace;}"
           ".pill{display:inline-block;padding:3px 8px;border-radius:999px;font-size:12px;font-weight:700;}"
           ".pill.ok{background:rgba(54,211,153,.12);color:var(--ok);} .pill.bad{background:rgba(255,107,136,.14);color:var(--bad);}"
           ".missing{margin-top:8px;padding:9px 10px;border-radius:10px;background:rgba(244,191,79,.12);border:1px solid rgba(244,191,79,.38);color:#ffd794;}"
           ".links{display:grid;grid-template-columns:repeat(auto-fit,minmax(240px,1fr));gap:10px;}"
           ".link-card{border:1px solid #233751;border-radius:10px;padding:10px 11px;background:#0d1929;}"
           ".link-card a{color:#7db8ff;text-decoration:none;font-family:'Cascadia Mono',Consolas,monospace;font-size:13px;}"
           ".link-card a:hover{text-decoration:underline;}"
           ".fragile-row{display:grid;grid-template-columns:200px 1fr 90px 1.2fr;gap:8px;padding:8px 0;border-bottom:1px dashed #26405d;align-items:center;}"
           ".fragile-row:last-child{border-bottom:none;}"
           ".fragile-score{font-weight:700;color:#8bc7ff;}"
           ".mini-grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(170px,1fr));gap:10px;margin-top:6px;}"
           ".mini{border:1px solid #263f5c;border-radius:10px;padding:10px 11px;background:#0b1727;}"
           ".mini .label{font-size:11px;color:var(--muted);text-transform:uppercase;letter-spacing:.7px;}"
           ".mini .value{font-size:23px;font-weight:700;margin-top:4px;}"
           "@media (max-width:900px){.fragile-row{grid-template-columns:1fr;gap:4px;}.grid{margin-top:10px;}}"
           "</style></head><body>";

    out << "<header class=\"topbar\"><div class=\"wrap\">";
    out << "<h1 class=\"title\">CS2 Dumper Dashboard</h1>";
    out << "<p class=\"subtitle\">Build <span class=\"mono\">" << htmlEscape(currentBuild)
        << "</span> | Generated " << htmlEscape(GetCurrentTimestamp()) << "</p>";
    out << "</div></header>";

    out << "<main class=\"wrap\">";
    out << "<section class=\"grid\">";
    out << "<article class=\"card\"><div class=\"kpi-label\">Total Offsets</div><div class=\"kpi-value\">"
        << ctx.offsets.size() << "</div><div class=\"kpi-sub\">Resolved entities emitted</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">Pattern Found</div><div class=\"kpi-value\">"
        << patternFoundPct << "%</div><div class=\"kpi-sub\">" << patternFound << "/" << ctx.patternScanRecords.size()
        << " signatures matched</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">Pattern Resolved</div><div class=\"kpi-value\">"
        << patternResolvedPct << "%</div><div class=\"kpi-sub\">" << patternResolved << "/" << ctx.patternScanRecords.size()
        << " converted to offsets</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">Semantic Validity</div><div class=\"kpi-value\">"
        << semanticPct << "%</div><div class=\"kpi-sub\">" << semanticValid << "/" << semanticResults.size()
        << " checks passed</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">Fragile Patterns</div><div class=\"kpi-value\">"
        << fragilePatterns.size() << "</div><div class=\"kpi-sub\">High-risk signatures detected</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">Core Coverage</div><div class=\"kpi-value\">"
        << coreCoveragePct << "%</div><div class=\"kpi-sub\">" << coreResolved << "/" << coreOffsets.size()
        << " critical offsets resolved</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">Modules Loaded</div><div class=\"kpi-value\">"
        << ctx.modules.size() << "</div><div class=\"kpi-sub\">Enumerated in-process modules</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">Interfaces</div><div class=\"kpi-value\">"
        << totalInterfaces << "</div><div class=\"kpi-sub\">CreateInterface exports resolved</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">Exports</div><div class=\"kpi-value\">"
        << ctx.exports.size() << "</div><div class=\"kpi-sub\">Total export symbols captured</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">Schema Classes</div><div class=\"kpi-value\">"
        << totalSchemaClasses << "</div><div class=\"kpi-sub\">Fields: " << totalSchemaFields << " | Enums: " << totalSchemaEnums
        << "</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">RTTI / VTables</div><div class=\"kpi-value\">"
        << ctx.rtti.size() << " / " << ctx.vtables.size() << "</div><div class=\"kpi-sub\">RTTI classes and vtable candidates</div></article>";
    out << "<article class=\"card\"><div class=\"kpi-label\">ConVars</div><div class=\"kpi-value\">"
        << ctx.convars.size() << "</div><div class=\"kpi-sub\">Captured console variables</div></article>";
    out << "</section>";

    out << "<section class=\"section\"><h2>Reliability Footprint</h2>";
    out << "<div class=\"mini-grid\">";
    out << "<div class=\"mini\"><div class=\"label\">High Confidence Modules</div><div class=\"value tier-ok\">" << highConfidence << "</div></div>";
    out << "<div class=\"mini\"><div class=\"label\">Medium Confidence Modules</div><div class=\"value tier-warn\">" << mediumConfidence << "</div></div>";
    out << "<div class=\"mini\"><div class=\"label\">Low Confidence Modules</div><div class=\"value tier-bad\">" << lowConfidence << "</div></div>";
    out << "<div class=\"mini\"><div class=\"label\">Unresolved Patterns</div><div class=\"value\">" << missingPatterns.size() << "</div></div>";
    out << "</div></section>";

    out << "<section class=\"section\"><h2>Build Delta</h2>";
    if (!diffStats.hasBaseline) {
        out << "<span class=\"baseline warn\">No baseline snapshot yet</span>";
    } else {
        out << "<span class=\"baseline ok\">Baseline available</span>";
        out << "<table><tr><th>Group</th><th>Added</th><th>Removed</th><th>Changed</th></tr>";
        out << "<tr><td>Offsets</td><td>" << diffStats.offsetAdded << "</td><td>" << diffStats.offsetRemoved
            << "</td><td>" << diffStats.offsetChanged << "</td></tr>";
        out << "<tr><td>Patterns</td><td>" << diffStats.patternAdded << "</td><td>" << diffStats.patternRemoved
            << "</td><td>" << diffStats.patternChanged << "</td></tr></table>";
    }
    out << "</section>";

    out << "<section class=\"section\"><h2>Module Confidence</h2>";
    out << "<table><tr><th>Module</th><th>Tier</th><th>Overall</th><th>Structural</th><th>Pattern</th><th>Semantic</th><th>Health</th></tr>";
    for (const auto& m : moduleConfidence) {
        const char* cls = m.tier == "high" ? "tier-ok" : (m.tier == "medium" ? "tier-warn" : "tier-bad");
        int overallPct = static_cast<int>(m.overallScore * 100.0);
        if (overallPct < 0) overallPct = 0;
        if (overallPct > 100) overallPct = 100;
        out << "<tr><td class=\"mono\">" << htmlEscape(m.module) << "</td><td class=\"" << cls << "\">"
            << htmlEscape(m.tier) << "</td><td>" << std::fixed << std::setprecision(3) << m.overallScore
            << "</td><td>" << std::fixed << std::setprecision(3) << m.structuralScore
            << "</td><td>" << std::fixed << std::setprecision(3) << m.patternScore
            << "</td><td>" << std::fixed << std::setprecision(3) << m.semanticScore
            << "</td><td><div class=\"meter\"><span style=\"width:" << overallPct << "%\"></span></div></td></tr>";
    }
    out << "</table></section>";

    out << "<section class=\"section\"><h2>Top Fragile Patterns</h2>";
    if (fragilePatterns.empty()) {
        out << "<p>No fragile pattern detected in this run.</p>";
    } else {
        const size_t limit = std::min<size_t>(20, fragilePatterns.size());
        for (size_t i = 0; i < limit; ++i) {
            const auto& f = fragilePatterns[i];
            out << "<div class=\"fragile-row\">"
                << "<div class=\"mono\">" << htmlEscape(f.module) << "</div>"
                << "<div class=\"mono\">" << htmlEscape(f.name) << "</div>"
                << "<div class=\"fragile-score\">" << f.score << "</div>"
                << "<div>" << htmlEscape(f.recommendation) << "</div>"
                << "</div>";
        }
    }
    out << "</section>";

    out << "<section class=\"section\"><h2>Unresolved Patterns</h2>";
    if (missingPatterns.empty()) {
        out << "<p>All scanned patterns resolved correctly in this run.</p>";
    } else {
        out << "<table><tr><th>Module</th><th>Name</th><th>Status</th><th>Reason</th></tr>";
        const size_t unresolvedLimit = std::min<size_t>(30, missingPatterns.size());
        for (size_t i = 0; i < unresolvedLimit; ++i) {
            const PatternScanRecord& rec = *missingPatterns[i];
            const std::string status = rec.found ? "found_not_resolved" : "not_found";
            std::string reason = rec.failureReason.empty() ? status : rec.failureReason;
            out << "<tr><td class=\"mono\">" << htmlEscape(rec.module) << "</td>"
                << "<td class=\"mono\">" << htmlEscape(rec.name) << "</td>"
                << "<td class=\"mono\">" << htmlEscape(status) << "</td>"
                << "<td class=\"mono\">" << htmlEscape(reason) << "</td></tr>";
        }
        out << "</table>";
        if (missingPatterns.size() > unresolvedLimit) {
            out << "<p class=\"kpi-sub\">Showing " << unresolvedLimit << " of " << missingPatterns.size() << " unresolved entries.</p>";
        }
    }
    out << "</section>";

    out << "<section class=\"section\"><h2>Core Offset Coverage</h2>";
    out << "<table><tr><th>Module</th><th>Offset</th><th>Status</th></tr>";
    for (const auto& [moduleName, offsetName] : coreOffsets) {
        const FoundOffset* off = FindFoundOffset(ctx, moduleName, offsetName);
        out << "<tr><td class=\"mono\">" << htmlEscape(moduleName) << "</td><td class=\"mono\">" << htmlEscape(offsetName) << "</td>";
        if (off) {
            out << "<td><span class=\"pill ok\">Resolved</span> <span class=\"mono\">"
                << htmlEscape(FormatHex(off->offset)) << "</span></td></tr>";
        } else {
            out << "<td><span class=\"pill bad\">Missing</span></td></tr>";
        }
    }
    out << "</table>";

    if (!missingCoreOffsets.empty()) {
        out << "<div class=\"missing\"><strong>Missing core offsets:</strong> ";
        for (size_t i = 0; i < missingCoreOffsets.size(); ++i) {
            out << "<span class=\"mono\">" << htmlEscape(missingCoreOffsets[i].first + "::" + missingCoreOffsets[i].second) << "</span>";
            out << (i + 1 < missingCoreOffsets.size() ? ", " : "");
        }
        out << "</div>";
    }
    out << "</section>";

    out << "<section class=\"section\"><h2>Key Reports</h2><div class=\"links\">";
    out << "<div class=\"link-card\"><a href=\"../meta/risk_report.json\">meta/risk_report.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/build_diff.json\">meta/build_diff.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/coverage_report.json\">meta/coverage_report.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/semantic_validation.json\">meta/semantic_validation.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/schema_semantic_validation.json\">meta/schema_semantic_validation.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/module_confidence.json\">meta/module_confidence.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/fragile_patterns.json\">meta/fragile_patterns.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/pattern_autofix_suggestions.json\">meta/pattern_autofix_suggestions.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/offset_stability.json\">meta/offset_stability.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/phase_timings.json\">meta/phase_timings.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/output_quality.json\">meta/output_quality.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../meta/regression_tests.json\">meta/regression_tests.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../output/integration/offsets_safe.json\">output/integration/offsets_safe.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../output/integration/offsets_verified.json\">output/integration/offsets_verified.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../output/netvars/hotlist.json\">output/netvars/hotlist.json</a></div>";
    out << "<div class=\"link-card\"><a href=\"../anteriores/history_index.json\">anteriores/history_index.json</a></div>";
    out << "</div></section>";

    out << "</main></body></html>";
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

void WriteArchiveHistoryIndex(const DumpContext& ctx, const std::string& currentBuild) {
    const fs::path archiveRoot = ctx.paths.root / "anteriores";
    std::error_code ec;
    fs::create_directories(archiveRoot, ec);
    const auto archiveDirs = ListArchiveBuildDirs(archiveRoot);

    std::ofstream historyOut(archiveRoot / "history_index.json");
    if (historyOut.is_open()) {
        JsonWriter jw(historyOut);
        jw.begin_object();
        jw.key("entries").begin_array();
        for (const auto& dir : archiveDirs) {
            const std::string guessedBuild = ReadFirstLineTrimmed(dir / "meta" / "current_build.txt");
            jw.begin_object();
            jw.key("folder").value_string(dir.filename().string());
            jw.key("build").value_string(guessedBuild.empty() ? dir.filename().string() : guessedBuild);
            jw.end_object();
        }
        jw.end_array();
        jw.end_object();
        historyOut << '\n';
    }

    std::ofstream timelineOut(ctx.paths.meta / "build_timeline.json");
    if (timelineOut.is_open()) {
        JsonWriter jw(timelineOut);
        jw.begin_object();
        jw.key("current_build").value_string(currentBuild);
        jw.key("archived_builds").begin_array();
        for (const auto& dir : archiveDirs) {
            const std::string guessedBuild = ReadFirstLineTrimmed(dir / "meta" / "current_build.txt");
            jw.value_string(guessedBuild.empty() ? dir.filename().string() : guessedBuild);
        }
        jw.end_array();
        jw.end_object();
        timelineOut << '\n';
    }

    g_Logger.Success("History", "anteriores/history_index.json and meta/build_timeline.json written");
}

void WriteRiskReport(
    const DumpContext& ctx,
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
        if (FindFoundOffset(ctx, moduleName, offsetName)) {
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
        if (!FindFoundOffset(ctx, moduleName, offsetName)) {
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

    const fs::path reportPath = ctx.paths.meta / "risk_report.json";
    std::ofstream out(reportPath);
    if (out.is_open()) {
        JsonWriter jw(out);
        jw.begin_object();
        jw.key("risk_level").value_string(riskLevel);
        jw.key("current_build").value_string(currentBuild);
        jw.key("previous_build").value_string(previousBuild);
        jw.key("build_changed").value_bool(buildChanged);
        jw.key("validation").begin_object();
        jw.key("current_ratio").value_number(currentValidationRatio);
        jw.key("previous_ratio").value_number(previousValidationRatio);
        jw.key("drop").value_number(ratioDrop);
        jw.end_object();
        jw.key("module_confidence").begin_object();
        jw.key("weakest_module").value_string(weakestModule);
        jw.key("weakest_score").value_number(weakestScore);
        jw.key("has_low_tier_module").value_bool(hasLowConfidenceModule);
        jw.end_object();
        jw.key("core_coverage").begin_object();
        jw.key("resolved").value_number(static_cast<int64_t>(coreResolved));
        jw.key("total").value_number(static_cast<int64_t>(coreOffsets.size()));
        jw.key("ratio").value_number(coreCoverage);
        jw.key("low_core_coverage").value_bool(lowCoreCoverage);
        jw.key("missing_critical_core").value_bool(missingCriticalCore);
        jw.end_object();
        jw.key("reasons").begin_array();
        for (const auto& reason : reasons) {
            jw.value_string(reason);
        }
        jw.end_array();
        jw.end_object();
        out << '\n';
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

void FinalizePreviousDumpArchive(const DumpContext& ctx, const PreviousDumpState& previousDump, const std::string& currentBuild) {
    if (!previousDump.hadPreviousDump || previousDump.stagedPath.empty() || !fs::exists(previousDump.stagedPath)) {
        WriteArchiveHistoryIndex(ctx, currentBuild);
        return;
    }

    std::string previousBuild = previousDump.previousBuild.empty() ? "unknown" : previousDump.previousBuild;
    if (!currentBuild.empty() && previousBuild == currentBuild) {
        std::string suffix = GetCurrentTimestamp();
        std::replace(suffix.begin(), suffix.end(), ':', '-');
        std::replace(suffix.begin(), suffix.end(), ' ', '_');
        previousBuild = previousBuild + "_pre_" + suffix;
        g_Logger.Warning("Archive", "Previous build and current build match (" + currentBuild + "). Preserving previous snapshot as " + previousBuild);
    }

    const fs::path archiveRoot = ctx.paths.root / "anteriores";
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

    g_PendingArchiveDecision.hasPending = true;
    g_PendingArchiveDecision.previousBuild = previousBuild;
    g_PendingArchiveDecision.archivePath = archivePath;
    g_Logger.Info("Archive", "Retention decision pending for archived build: " + previousBuild);
}

void FinalizeArchiveDecisionPrompt(const DumpContext& ctx, const std::string& currentBuild) {
    if (!g_PendingArchiveDecision.hasPending) {
        return;
    }

    const std::string buildName = g_PendingArchiveDecision.previousBuild.empty()
        ? std::string("unknown")
        : g_PendingArchiveDecision.previousBuild;
    const std::string archivePath = g_PendingArchiveDecision.archivePath.string();

    std::string msg =
        "Build anterior detectado (" + buildName + ").\n\n"
        "Se archivo en:\n" + archivePath + "\n\n"
        "Quieres conservar ese build viejo?";

    int result = MessageBoxA(
        nullptr,
        msg.c_str(),
        "CS2 ULTIMATE DUMPER - Archive Retention",
        MB_YESNO | MB_ICONQUESTION | MB_TOPMOST | MB_SETFOREGROUND
    );

    std::error_code ec;
    if (result == IDNO) {
        fs::remove_all(g_PendingArchiveDecision.archivePath, ec);
        if (ec) {
            g_Logger.Warning("Archive", "Failed to delete archived build: " + buildName + " (" + ec.message() + ")");
        } else {
            g_Logger.Warning("Archive", "Archived build deleted by user request: " + buildName);
        }
    } else {
        g_Logger.Success("Archive", "Archived build retained: " + buildName);
    }

    g_PendingArchiveDecision = {};
    WriteArchiveHistoryIndex(ctx, currentBuild);
}
} // namespace

// ============================================================================
// MAIN DUMP FUNCTION
// ============================================================================

void DumpAll() {
    try {
        const auto dumpStart = std::chrono::steady_clock::now();
        // Create output directories (resolve "Documents" robustly across locale/redirection).
        g_OutputPath = DumpPaths::MakeDefault().root.string();
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
    DumpContext ctx = BuildContextSnapshot();
    WriteCoverageReport(ctx);
    const auto fragilePatterns = BuildFragilityEntries(semanticResults);
    WriteFragilePatternsReport(fragilePatterns);
    WritePatternAutofixSuggestions(fragilePatterns);
    const std::string currentBuild = SaveVersionedDump();
    const BuildDiffStats diffStats = WriteBuildDiffReport(previousDump, currentBuild);
    WriteRiskReport(ctx, previousDump.previousBuild, currentBuild, previousDump.previousValidationRatio, moduleConfidence);
    WriteRegressionTestManifest(currentBuild);
    WriteIntegrationPack(ctx, moduleConfidence, semanticResults);
    FinalizePreviousDumpArchive(ctx, previousDump, currentBuild);
    WriteOffsetStabilityReport(currentBuild);
    WriteEnhancedHtmlDashboard(ctx, currentBuild, diffStats, semanticResults, moduleConfidence, fragilePatterns);
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
    WritePhaseTimingsReport(currentBuild);
    
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

    FinalizeArchiveDecisionPrompt(ctx, currentBuild);
    
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("FATAL ERROR: ") + e.what());
        MessageBoxA(NULL, (std::string("Fatal error during dump:\n") + e.what()).c_str(), "Error", MB_OK | MB_ICONERROR);
    } catch (...) {
        g_Logger.Error("Main", "FATAL ERROR: Unknown exception");
        MessageBoxA(NULL, "Fatal error during dump: Unknown exception", "Error", MB_OK | MB_ICONERROR);
    }
}

void RunDumpPipeline() {
    DumpAll();
}


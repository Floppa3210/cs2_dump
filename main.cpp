// ============================================================================
// CS2 COMPLETE DUMPER - Based on a2x/cs2-dumper patterns
// https://github.com/a2x/cs2-dumper
// ============================================================================
// Features:
// - All patterns from a2x dumper
// - Button scanning (attack, jump, duck, etc.)
// - Interface dumping
// - Formatted output (HPP, JSON) like a2x
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

// Schema System (E1-E5 implementation)
#include "schemas.hpp"
#include "schema_export.hpp"
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
std::vector<ModuleExport> g_ModuleExports;
std::vector<RTTIClass> g_RTTIClasses;
std::vector<ConVar> g_ConVars;
std::vector<VTable> g_VTables;
std::vector<ComponentInfo> g_ComponentGraph;

std::string g_OutputPath;


void WriteSummaryJson() {
    std::ofstream out(g_OutputPath + "/meta/summary.json");
    if (!out.is_open()) return;

    int totalInterfaces = 0;
    for (auto& [mod, ifaces] : g_Interfaces) totalInterfaces += (int)ifaces.size();

    int totalSchemaClasses = 0;
    int totalSchemaFields = 0;
    int totalSchemaEnums = 0;
    for (auto& [scope, classes] : g_SchemaClasses) {
        totalSchemaClasses += (int)classes.size();
        for (auto& cls : classes) totalSchemaFields += (int)cls.fields.size();
    }
    for (auto& [scope, enums] : g_SchemaEnums) totalSchemaEnums += (int)enums.size();

    out << "{\n";
    out << "  \"offsets\": " << g_FoundOffsets.size() << ",\n";
    out << "  \"buttons\": " << g_FoundButtons.size() << ",\n";
    out << "  \"interfaces\": " << totalInterfaces << ",\n";
    out << "  \"exports\": " << g_ModuleExports.size() << ",\n";
    out << "  \"rtti_classes\": " << g_RTTIClasses.size() << ",\n";
    out << "  \"convars\": " << g_ConVars.size() << ",\n";
    out << "  \"vtables\": " << g_VTables.size() << ",\n";
    out << "  \"schema_classes\": " << totalSchemaClasses << ",\n";
    out << "  \"schema_enums\": " << totalSchemaEnums << ",\n";
    out << "  \"schema_fields\": " << totalSchemaFields << "\n";
    out << "}\n";
    out.close();

    g_Logger.Success("Output", "meta/summary.json written");
}
// ============================================================================
// MAIN DUMP FUNCTION
// ============================================================================

void DumpAll() {
    try {
        // Create output directories (organized like a2x + more)
        char userProfile[MAX_PATH];
        GetEnvironmentVariableA("USERPROFILE", userProfile, MAX_PATH);
        g_OutputPath = std::string(userProfile) + "\\Documents\\CS2_Dump";
        
        std::string patternsPath = g_OutputPath + "\\patterns";
        std::string interfacesPath = g_OutputPath + "\\interfaces";
        std::string offsetsPath = g_OutputPath + "\\offsets";
        std::string rttiPath = g_OutputPath + "\\rtti";
        std::string schemasPath = g_OutputPath + "\\schemas";
        std::string sdkPath = g_OutputPath + "\\sdk";
        std::string logsPath = g_OutputPath + "\\logs";
        std::string metaPath = g_OutputPath + "\\meta";
        
        try {
            std::filesystem::create_directories(g_OutputPath);
            std::filesystem::create_directories(patternsPath);
            std::filesystem::create_directories(interfacesPath);
            std::filesystem::create_directories(offsetsPath);
            std::filesystem::create_directories(rttiPath);
            std::filesystem::create_directories(schemasPath);
            std::filesystem::create_directories(sdkPath);
            std::filesystem::create_directories(logsPath);
            std::filesystem::create_directories(metaPath);
        } catch (const std::exception& e) {
            g_Logger.Error("Main", std::string("Failed to create directories: ") + e.what());
            MessageBoxA(NULL, "Failed to create output directories!", "Error", MB_OK | MB_ICONERROR);
            return;
        }
    
    // Initialize logger
    g_Logger.Initialize(logsPath + "\\dump_log.txt");
    g_Logger.Info("Main", "CS2 Complete Dumper starting...");
    g_Logger.Info("Main", "Output: " + g_OutputPath);
    
    // Get modules
    g_Logger.Info("Main", "=== MODULE ENUMERATION ===");
    GetLoadedModules();
    
    // Scan exports
    try {
        g_Logger.Info("Main", "=== EXPORT SCANNING ===");
        ScanExports();
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("Export scanning failed: ") + e.what());
    }

    // Scan patterns
    g_Logger.Info("Main", "=== PATTERN SCANNING ===");
    ScanPatterns(g_ClientPatterns, sizeof(g_ClientPatterns)/sizeof(g_ClientPatterns[0]), "client.dll");
    ScanPatterns(g_Engine2Patterns, sizeof(g_Engine2Patterns)/sizeof(g_Engine2Patterns[0]), "engine2.dll");
    ScanPatterns(g_InputsystemPatterns, sizeof(g_InputsystemPatterns)/sizeof(g_InputsystemPatterns[0]), "inputsystem.dll");
    ScanPatterns(g_MatchmakingPatterns, sizeof(g_MatchmakingPatterns)/sizeof(g_MatchmakingPatterns[0]), "matchmaking.dll");
    ScanPatterns(g_SoundsystemPatterns, sizeof(g_SoundsystemPatterns)/sizeof(g_SoundsystemPatterns[0]), "soundsystem.dll");
    ScanPatterns(g_Tier0Patterns, sizeof(g_Tier0Patterns)/sizeof(g_Tier0Patterns[0]), "tier0.dll");
    
    // Add static offsets (hardcoded sub-offsets from a2x)
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
    bool hasCsgoInput = false;
    bool hasPrediction = false;

    for (const auto& off : g_FoundOffsets) {
        if (off.module == "client.dll" && off.name == "dwCSGOInput") {
            csgoInputOffset = off.offset;
            hasCsgoInput = true;
        } else if (off.module == "client.dll" && off.name == "dwPrediction") {
            predictionOffset = off.offset;
            hasPrediction = true;
        }
    }

    if (hasCsgoInput) {
        FoundOffset viewAngles;
        viewAngles.name = "dwViewAngles";
        viewAngles.module = "client.dll";
        viewAngles.offset = csgoInputOffset + 0x4520;
        viewAngles.description = "View angles (derived from dwCSGOInput + 0x4520)";
        if (AddFoundOffset(viewAngles, false)) {
            g_Logger.Success("Offsets", "dwViewAngles = " + ToHex(viewAngles.offset) + " (derived)");
        } else {
            g_Logger.Warning("Offsets", "dwViewAngles already present, derived fallback skipped");
        }
    }

    if (hasPrediction) {
        FoundOffset localPawn;
        localPawn.name = "dwLocalPlayerPawn";
        localPawn.module = "client.dll";
        localPawn.offset = predictionOffset + 0xE0;
        localPawn.description = "Local player pawn (derived from dwPrediction + 0xE0)";
        if (AddFoundOffset(localPawn, false)) {
            g_Logger.Success("Offsets", "dwLocalPlayerPawn = " + ToHex(localPawn.offset) + " (derived)");
        } else {
            g_Logger.Warning("Offsets", "dwLocalPlayerPawn already present, derived fallback skipped");
        }
    }
    
    // Scan buttons - DISABLED (causes freeze, function is in commented code block)
    /*
    try {
        g_Logger.Info("Main", "=== BUTTON SCANNING ===");
        ScanButtons();
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("Button scanning failed: ") + e.what());
    }
    */
    g_Logger.Warning("Main", "Button scanning skipped (disabled - function unavailable)");
    
    
    // Dump interfaces - DISABLED (causes freeze)
    /*
    g_Logger.Info("Main", "=== INTERFACE DUMPING ===");
    const char* interfaceModules[] = {
        "client.dll", "engine2.dll", "schemasystem.dll", "tier0.dll",
        "inputsystem.dll", "materialsystem2.dll", "scenesystem.dll",
        "resourcesystem.dll", "particles.dll", "rendersystemdx11.dll",
        "networksystem.dll", "panorama.dll", "vphysics2.dll",
        "soundsystem.dll", "animationsystem.dll", "host.dll",
        "matchmaking.dll", "localize.dll", "filesystem_stdio.dll"
    };
    
    for (auto& modName : interfaceModules) {
        DumpInterfaces(modName);
    }
    */
    g_Logger.Warning("Main", "Interface dumping skipped (disabled)");
    
    // Scan RTTI classes
    try {
        g_Logger.Info("Main", "=== RTTI SCANNING ===");
        ScanRTTI();
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("RTTI scanning failed: ") + e.what());
    }
    
    // Dump schemas (pattern-based, safe)
    try {
        g_Logger.Info("Main", "=== SCHEMA EXTRACTION ===");
        auto schemaMod = FindModule("schemasystem.dll");
        if (schemaMod) {
            DumpSchemas(schemaMod->base, schemaMod->size);
            WriteSchemaJSON(g_OutputPath);
        } else {
            g_Logger.Warning("Schemas", "schemasystem.dll not found - skipping schema extraction");
        }
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("Schema extraction failed: ") + e.what());
    }
    
    // Build schema index and link to RTTI
    try {
        g_Logger.Info("Main", "=== LINKING DATA SOURCES ===");
        BuildSchemaIndex();
        LinkRTTIToSchemas();
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("Data linking failed: ") + e.what());
    }
    
    // Advanced engine modeling
    g_Logger.Info("Main", "=== ENGINE MODELING ===");
    FlattenInheritance();
    DetectComponents();
    
    // Scan ConVars
    try {
        g_Logger.Info("Main", "=== CONVAR SCANNING ===");
        ScanConVars();
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("ConVar scanning failed: ") + e.what());
    }
    
    // Scan VTables
    try {
        g_Logger.Info("Main", "=== VTABLE SCANNING ===");
        ScanVTables();
    } catch (const std::exception& e) {
        g_Logger.Error("Main", std::string("VTable scanning failed: ") + e.what());
    }
    
    // Write output files
    g_Logger.Info("Main", "=== WRITING OUTPUT FILES ===");
    WritePatternsHpp();
    WritePatternsJson();
    WriteOffsetsHpp();
    WriteOffsetsJson();
    WriteButtonsHpp();
    WriteButtonsJson();
    WriteInterfacesHpp();
    WriteInterfacesJson();
    WriteExportsJson();
    WriteRTTIJson();
    WriteModulesJson();
    WriteSummaryJson();
    WriteAllSchemas();
    WriteConVarsJson();
    WriteVTablesJson();
    WriteComponentGraphJson();
    
    // Generate complete SDK
    g_Logger.Info("Main", "=== SDK GENERATION ===");
    GenerateSDK();
    
    // Runtime validation
    g_Logger.Info("Main", "=== RUNTIME VALIDATION ===");
    ValidateOffsetsRuntime();
    WriteValidationReport();
    
    // Save versioned dump for diff comparison
    g_Logger.Info("Main", "=== VERSIONING ===");
    SaveVersionedDump();
    
    // Generate HTML documentation
    g_Logger.Info("Main", "=== HTML DOCUMENTATION ===");
    GenerateHTMLDocumentation();
    
    // Summary
    g_Logger.Info("Main", "=== DUMP COMPLETE ===");
    g_Logger.Info("Main", "Offsets found: " + std::to_string(g_FoundOffsets.size()));
    g_Logger.Info("Main", "Buttons found: " + std::to_string(g_FoundButtons.size()));
    
    int totalInterfaces = 0;
    for (auto& [mod, ifaces] : g_Interfaces) totalInterfaces += (int)ifaces.size();
    g_Logger.Info("Main", "Interfaces found: " + std::to_string(totalInterfaces));
    
    g_Logger.Info("Main", "Exports found: " + std::to_string(g_ModuleExports.size()));
    g_Logger.Info("Main", "RTTI classes found: " + std::to_string(g_RTTIClasses.size()));
    g_Logger.Info("Main", "ConVars found: " + std::to_string(g_ConVars.size()));
    g_Logger.Info("Main", "VTables found: " + std::to_string(g_VTables.size()));
    
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

DWORD WINAPI DumpThread(LPVOID) {
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

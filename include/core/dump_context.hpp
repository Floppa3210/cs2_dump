#pragma once

#include <map>
#include <string>
#include <vector>

#include "include/core/dump_config.hpp"
#include "include/core/dump_paths.hpp"

#include "include/memory.hpp"
#include "include/dump_data.hpp"
#include "include/patterns_dump.hpp"
#include "include/exports_dump.hpp"
#include "include/rtti_dump.hpp"
#include "include/convar_dump.hpp"
#include "include/vtable_dump.hpp"
#include "include/schema_tools.hpp"
#include "schemas.hpp"

// Target state: ALL runtime state moves here and all modules operate on ctx.
// For now, we keep legacy globals alive and introduce DumpContext as scaffolding.
struct DumpContext {
    DumpConfig config{};
    DumpPaths paths = DumpPaths::MakeDefault();

    std::vector<ModuleInfo> modules;

    // Legacy model types (mirrors current globals)
    std::vector<FoundOffset> offsets;
    std::map<std::string, std::vector<FoundInterface>> interfaces;
    std::vector<FoundButton> buttons;
    std::vector<PatternScanRecord> patternScanRecords;
    std::vector<ComponentInfo> componentGraph;
    std::vector<ModuleExport> exports;
    std::vector<RTTIClass> rtti;
    std::vector<ConVar> convars;
    std::vector<VTable> vtables;

    std::map<std::string, std::vector<SchemaClass>> schemaClasses;
    std::map<std::string, std::vector<SchemaEnum>> schemaEnums;
};

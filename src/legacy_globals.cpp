#include "include/common.hpp"
#include "include/memory.hpp"
#include "include/dump_data.hpp"
#include "include/patterns_dump.hpp"
#include "include/schema_tools.hpp"
#include "include/exports_dump.hpp"
#include "include/rtti_dump.hpp"
#include "include/convar_dump.hpp"
#include "include/vtable_dump.hpp"

// -----------------------------------------------------------------------------
// Legacy global state
// -----------------------------------------------------------------------------
// These were previously defined in main.cpp. They are moved here to enable
// multiple translation units without forcing the entrypoint to own all state.
//
// The end goal is to delete these and keep everything in DumpContext.

std::vector<ModuleInfo> g_Modules;

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


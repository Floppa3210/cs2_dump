#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "dump_data.hpp"
#include "patterns.hpp"
#include "schemas.hpp"
#include "exports_dump.hpp"
#include "rtti_dump.hpp"
#include "convar_dump.hpp"
#include "vtable_dump.hpp"

//=============================================================================
// OUTPUT GENERATION - Multi-language structured output (modularized)
//=============================================================================

extern std::string g_OutputPath;
extern std::vector<ModuleInfo> g_Modules;

std::string GetCurrentTimestamp();

inline std::string ToRustConstName(const std::string& raw) {
    std::string id = MakeCppIdentifier(raw);
    std::string out;
    out.reserve(id.size() + 8);
    for (unsigned char c : id) {
        out.push_back(static_cast<char>(std::toupper(c)));
    }
    return out;
}

inline std::string ToHexLiteral(uintptr_t value) {
    std::stringstream ss;
    ss << "0x" << std::hex << std::uppercase << value;
    return ss.str();
}

inline void WritePatternsJson() {
    std::ofstream out(g_OutputPath + "/patterns/patterns.json");
    if (!out.is_open()) return;

    out << "{\n";

    // Group offsets by module
    std::map<std::string, std::vector<FoundOffset*>> byModule;
    for (auto& off : g_FoundOffsets) {
        byModule[off.module].push_back(&off);
    }

    size_t modIdx = 0;
    for (auto& [mod, offsets] : byModule) {
        out << "  \"" << JsonEscape(mod) << "\": {\n";
        for (size_t i = 0; i < offsets.size(); i++) {
            out << "    \"" << JsonEscape(offsets[i]->name) << "\": {\n";
            out << "      \"offset\": " << std::dec << offsets[i]->offset << ",\n";
            out << "      \"comment\": \"" << JsonEscape(offsets[i]->description) << "\"\n";
            out << "    }" << (i < offsets.size() - 1 ? "," : "") << "\n";
        }
        out << "  }" << (++modIdx < byModule.size() ? "," : "") << "\n";
    }

    out << "}\n";
    out.close();

    g_Logger.Success("Output", "patterns/patterns.json written");
}

inline void WritePatternsHpp() {
    std::ofstream out(g_OutputPath + "/patterns/patterns.hpp");
    if (!out.is_open()) return;

    out << "// Generated using CS2 Complete Dumper\n";
    out << "// Pattern-based output\n";
    out << "// " << GetCurrentTimestamp() << "\n\n";
    out << "#pragma once\n\n";
    out << "#include <cstddef>\n\n";
    out << "namespace cs2_dumper {\n";
    out << "    namespace patterns {\n";

    std::map<std::string, std::vector<FoundOffset*>> byModule;
    for (auto& off : g_FoundOffsets) {
        byModule[off.module].push_back(&off);
    }

    for (auto& [mod, offsets] : byModule) {
        std::string ns = MakeCppIdentifier(mod);

        out << "        // Module: " << mod << "\n";
        out << "        namespace " << ns << " {\n";
        for (auto* off : offsets) {
            out << "            // " << off->description << "\n";
            out << "            constexpr std::ptrdiff_t " << MakeCppIdentifier(off->name) << " = 0x"
                << std::hex << std::uppercase << off->offset << ";\n";
        }
        out << "        }\n";
    }

    out << "    }\n";
    out << "}\n";
    out.close();

    g_Logger.Success("Output", "patterns/patterns.hpp written");
}

inline void WriteOffsetsHpp() {
    std::ofstream out(g_OutputPath + "/offsets/offsets.hpp");
    if (!out.is_open()) return;

    out << "// Generated using CS2 Complete Dumper\n";
    out << "// Pattern-based output\n";
    out << "// " << GetCurrentTimestamp() << "\n\n";
    out << "#pragma once\n\n";
    out << "#include <cstddef>\n\n";
    out << "namespace cs2_dumper {\n";
    out << "    namespace offsets {\n";

    // Group by module
    std::map<std::string, std::vector<FoundOffset*>> byModule;
    for (auto& off : g_FoundOffsets) {
        byModule[off.module].push_back(&off);
    }

    for (auto& [mod, offsets] : byModule) {
        std::string ns = MakeCppIdentifier(mod);

        out << "        // Module: " << mod << "\n";
        out << "        namespace " << ns << " {\n";
        for (auto* off : offsets) {
            out << "            // " << off->description << "\n";
            out << "            constexpr std::ptrdiff_t " << MakeCppIdentifier(off->name) << " = 0x"
                << std::hex << std::uppercase << off->offset << ";\n";
        }
        out << "        }\n";
    }

    out << "    }\n";
    out << "}\n";
    out.close();

    g_Logger.Success("Output", "offsets.hpp written");
}

inline void WriteOffsetsJson() {
    std::ofstream out(g_OutputPath + "/offsets/offsets.json");
    if (!out.is_open()) return;

    out << "{\n";

    std::map<std::string, std::vector<FoundOffset*>> byModule;
    for (auto& off : g_FoundOffsets) {
        byModule[off.module].push_back(&off);
    }

    size_t modIdx = 0;
    for (auto& [mod, offsets] : byModule) {
        out << "  \"" << JsonEscape(mod) << "\": {\n";
        for (size_t i = 0; i < offsets.size(); i++) {
            out << "    \"" << JsonEscape(offsets[i]->name) << "\": " << std::dec << offsets[i]->offset;
            out << (i < offsets.size() - 1 ? "," : "") << "\n";
        }
        out << "  }" << (++modIdx < byModule.size() ? "," : "") << "\n";
    }

    out << "}\n";
    out.close();

    g_Logger.Success("Output", "offsets.json written");
}

inline void WriteButtonsHpp() {
    std::ofstream out(g_OutputPath + "/offsets/buttons.hpp");
    if (!out.is_open()) return;

    out << "// Generated using CS2 Complete Dumper\n";
    out << "// Pattern-based output\n";
    out << "// " << GetCurrentTimestamp() << "\n\n";
    out << "#pragma once\n\n";
    out << "#include <cstddef>\n\n";
    out << "namespace cs2_dumper {\n";
    out << "    // Module: client.dll\n";
    out << "    namespace buttons {\n";

    for (auto& btn : g_FoundButtons) {
        out << "        constexpr std::ptrdiff_t " << MakeCppIdentifier(btn.name) << " = 0x"
            << std::hex << std::uppercase << btn.offset << ";\n";
    }

    out << "    }\n";
    out << "}\n";
    out.close();

    g_Logger.Success("Output", "buttons.hpp written");
}

inline void WriteButtonsJson() {
    std::ofstream out(g_OutputPath + "/offsets/buttons.json");
    if (!out.is_open()) return;

    out << "{\n";
    for (size_t i = 0; i < g_FoundButtons.size(); i++) {
        out << "  \"" << JsonEscape(g_FoundButtons[i].name) << "\": " << std::dec << g_FoundButtons[i].offset;
        out << (i < g_FoundButtons.size() - 1 ? "," : "") << "\n";
    }
    out << "}\n";
    out.close();

    g_Logger.Success("Output", "buttons.json written");
}

inline void WriteInterfacesHpp() {
    std::ofstream out(g_OutputPath + "/interfaces/interfaces.hpp");
    if (!out.is_open()) return;

    out << "// Generated using CS2 Complete Dumper\n";
    out << "// Pattern-based output\n";
    out << "// " << GetCurrentTimestamp() << "\n\n";
    out << "#pragma once\n\n";
    out << "#include <cstddef>\n\n";
    out << "namespace cs2_dumper {\n";
    out << "    namespace interfaces {\n";

    for (auto& [mod, interfaces] : g_Interfaces) {
        std::string ns = MakeCppIdentifier(mod);

        out << "        // Module: " << mod << "\n";
        out << "        namespace " << ns << " {\n";
        for (auto& iface : interfaces) {
            out << "            constexpr std::ptrdiff_t " << MakeCppIdentifier(iface.name) << " = 0x"
                << std::hex << std::uppercase << iface.offset << ";\n";
        }
        out << "        }\n";
    }

    out << "    }\n";
    out << "}\n";
    out.close();

    g_Logger.Success("Output", "interfaces.hpp written");
}

inline void WriteInterfacesJson() {
    std::ofstream out(g_OutputPath + "/interfaces/interfaces.json");
    if (!out.is_open()) return;

    out << "{\n";

    size_t modIdx = 0;
    for (auto& [mod, interfaces] : g_Interfaces) {
        out << "  \"" << JsonEscape(mod) << "\": {\n";
        for (size_t i = 0; i < interfaces.size(); i++) {
            out << "    \"" << JsonEscape(interfaces[i].name) << "\": " << std::dec << interfaces[i].offset;
            out << (i < interfaces.size() - 1 ? "," : "") << "\n";
        }
        out << "  }" << (++modIdx < g_Interfaces.size() ? "," : "") << "\n";
    }

    out << "}\n";
    out.close();

    g_Logger.Success("Output", "interfaces.json written");
}

inline void WriteModulesJson() {
    std::ofstream out(g_OutputPath + "/meta/modules.json");
    if (!out.is_open()) return;

    out << "{\n  \"modules\": [\n";
    for (size_t i = 0; i < g_Modules.size(); i++) {
        const auto& mod = g_Modules[i];
        out << "    {\"name\":\"" << JsonEscape(mod.name) << "\",\"base\":\"0x";
        out << std::hex << mod.base << std::dec << "\",\"size\":" << mod.size << "}";
        out << (i < g_Modules.size() - 1 ? "," : "") << "\n";
    }
    out << "  ]\n}\n";
    out.close();

    g_Logger.Success("Output", "meta/modules.json written");
}

inline void WriteOffsetsByModuleOutput(const std::string& outputRoot) {
    std::map<std::string, std::vector<const FoundOffset*>> byModule;
    for (const auto& off : g_FoundOffsets) {
        byModule[off.module].push_back(&off);
    }

    for (const auto& [module, offsets] : byModule) {
        std::string fileBase = module;
        std::replace(fileBase.begin(), fileBase.end(), '.', '_');
        fileBase = MakeCppIdentifier(fileBase);

        std::ofstream jsonOut(outputRoot + "/" + fileBase + ".json");
        if (jsonOut.is_open()) {
            jsonOut << "{\n";
            for (size_t i = 0; i < offsets.size(); ++i) {
                const auto* off = offsets[i];
                jsonOut << "  \"" << JsonEscape(off->name) << "\": " << std::dec << off->offset;
                jsonOut << (i + 1 < offsets.size() ? "," : "") << "\n";
            }
            jsonOut << "}\n";
        }

        std::ofstream hppOut(outputRoot + "/" + fileBase + ".hpp");
        if (hppOut.is_open()) {
            hppOut << "// Auto-generated module offsets\n";
            hppOut << "#pragma once\n\n#include <cstddef>\n\n";
            hppOut << "namespace cs2_dumper {\n";
            hppOut << "    namespace " << fileBase << " {\n";
            for (const auto* off : offsets) {
                hppOut << "        constexpr std::ptrdiff_t " << MakeCppIdentifier(off->name)
                       << " = " << ToHexLiteral(off->offset) << ";\n";
            }
            hppOut << "    }\n}\n";
        }

        std::ofstream csOut(outputRoot + "/" + fileBase + ".cs");
        if (csOut.is_open()) {
            csOut << "// Auto-generated module offsets\n";
            csOut << "namespace cs2_dumper {\n";
            csOut << "    public static class " << fileBase << " {\n";
            for (const auto* off : offsets) {
                csOut << "        public const nint " << MakeCppIdentifier(off->name)
                      << " = " << ToHexLiteral(off->offset) << ";\n";
            }
            csOut << "    }\n}\n";
        }

        std::ofstream rsOut(outputRoot + "/" + fileBase + ".rs");
        if (rsOut.is_open()) {
            rsOut << "// Auto-generated module offsets\n";
            for (const auto* off : offsets) {
                rsOut << "pub const " << ToRustConstName(off->name)
                      << ": usize = " << ToHexLiteral(off->offset) << ";\n";
            }
        }
    }
}

inline void WriteOffsetsCombinedOutput(const std::string& outputRoot) {
    std::map<std::string, std::vector<const FoundOffset*>> byModule;
    for (const auto& off : g_FoundOffsets) {
        byModule[off.module].push_back(&off);
    }

    std::ofstream jsonOut(outputRoot + "/offsets.json");
    if (jsonOut.is_open()) {
        jsonOut << "{\n";
        size_t modIdx = 0;
        for (const auto& [mod, offsets] : byModule) {
            jsonOut << "  \"" << JsonEscape(mod) << "\": {\n";
            for (size_t i = 0; i < offsets.size(); ++i) {
                const auto* off = offsets[i];
                jsonOut << "    \"" << JsonEscape(off->name) << "\": " << std::dec << off->offset;
                jsonOut << (i + 1 < offsets.size() ? "," : "") << "\n";
            }
            jsonOut << "  }" << (++modIdx < byModule.size() ? "," : "") << "\n";
        }
        jsonOut << "}\n";
    }

    std::ofstream hppOut(outputRoot + "/offsets.hpp");
    if (hppOut.is_open()) {
        hppOut << "// Auto-generated combined offsets\n";
        hppOut << "#pragma once\n\n#include <cstddef>\n\nnamespace cs2_dumper {\n";
        hppOut << "    namespace offsets {\n";
        for (const auto& [mod, offsets] : byModule) {
            hppOut << "        namespace " << MakeCppIdentifier(mod) << " {\n";
            for (const auto* off : offsets) {
                hppOut << "            constexpr std::ptrdiff_t " << MakeCppIdentifier(off->name)
                       << " = " << ToHexLiteral(off->offset) << ";\n";
            }
            hppOut << "        }\n";
        }
        hppOut << "    }\n}\n";
    }

    std::ofstream csOut(outputRoot + "/offsets.cs");
    if (csOut.is_open()) {
        csOut << "// Auto-generated combined offsets\n";
        csOut << "namespace cs2_dumper {\n";
        for (const auto& [mod, offsets] : byModule) {
            csOut << "    public static class " << MakeCppIdentifier(mod) << " {\n";
            for (const auto* off : offsets) {
                csOut << "        public const nint " << MakeCppIdentifier(off->name)
                      << " = " << ToHexLiteral(off->offset) << ";\n";
            }
            csOut << "    }\n";
        }
        csOut << "}\n";
    }

    std::ofstream rsOut(outputRoot + "/offsets.rs");
    if (rsOut.is_open()) {
        rsOut << "// Auto-generated combined offsets\n";
        for (const auto& [mod, offsets] : byModule) {
            rsOut << "pub mod " << MakeCppIdentifier(mod) << " {\n";
            for (const auto* off : offsets) {
                rsOut << "    pub const " << ToRustConstName(off->name)
                      << ": usize = " << ToHexLiteral(off->offset) << ";\n";
            }
            rsOut << "}\n";
        }
    }
}

inline void WriteInterfacesOutputStructured(const std::string& outputRoot) {
    std::ofstream jsonOut(outputRoot + "/interfaces.json");
    if (jsonOut.is_open()) {
        jsonOut << "{\n";
        size_t modIdx = 0;
        for (const auto& [mod, ifaces] : g_Interfaces) {
            jsonOut << "  \"" << JsonEscape(mod) << "\": {\n";
            for (size_t i = 0; i < ifaces.size(); ++i) {
                jsonOut << "    \"" << JsonEscape(ifaces[i].name) << "\": " << std::dec << ifaces[i].offset;
                jsonOut << (i + 1 < ifaces.size() ? "," : "") << "\n";
            }
            jsonOut << "  }" << (++modIdx < g_Interfaces.size() ? "," : "") << "\n";
        }
        jsonOut << "}\n";
    }

    std::ofstream hppOut(outputRoot + "/interfaces.hpp");
    if (hppOut.is_open()) {
        hppOut << "// Auto-generated interfaces\n";
        hppOut << "#pragma once\n\n#include <cstddef>\n\nnamespace cs2_dumper {\n";
        hppOut << "    namespace interfaces {\n";
        for (const auto& [mod, ifaces] : g_Interfaces) {
            hppOut << "        namespace " << MakeCppIdentifier(mod) << " {\n";
            for (const auto& iface : ifaces) {
                hppOut << "            constexpr std::ptrdiff_t " << MakeCppIdentifier(iface.name)
                       << " = " << ToHexLiteral(iface.offset) << ";\n";
            }
            hppOut << "        }\n";
        }
        hppOut << "    }\n}\n";
    }

    std::ofstream csOut(outputRoot + "/interfaces.cs");
    if (csOut.is_open()) {
        csOut << "// Auto-generated interfaces\n";
        csOut << "namespace cs2_dumper {\n";
        for (const auto& [mod, ifaces] : g_Interfaces) {
            csOut << "    public static class " << MakeCppIdentifier(mod) << " {\n";
            for (const auto& iface : ifaces) {
                csOut << "        public const nint " << MakeCppIdentifier(iface.name)
                      << " = " << ToHexLiteral(iface.offset) << ";\n";
            }
            csOut << "    }\n";
        }
        csOut << "}\n";
    }

    std::ofstream rsOut(outputRoot + "/interfaces.rs");
    if (rsOut.is_open()) {
        rsOut << "// Auto-generated interfaces\n";
        for (const auto& [mod, ifaces] : g_Interfaces) {
            rsOut << "pub mod " << MakeCppIdentifier(mod) << " {\n";
            for (const auto& iface : ifaces) {
                rsOut << "    pub const " << ToRustConstName(iface.name)
                      << ": usize = " << ToHexLiteral(iface.offset) << ";\n";
            }
            rsOut << "}\n";
        }
    }
}

inline void WriteButtonsOutputStructured(const std::string& outputRoot) {
    std::ofstream jsonOut(outputRoot + "/buttons.json");
    if (jsonOut.is_open()) {
        jsonOut << "{\n";
        for (size_t i = 0; i < g_FoundButtons.size(); ++i) {
            jsonOut << "  \"" << JsonEscape(g_FoundButtons[i].name) << "\": "
                    << std::dec << g_FoundButtons[i].offset;
            jsonOut << (i + 1 < g_FoundButtons.size() ? "," : "") << "\n";
        }
        jsonOut << "}\n";
    }

    std::ofstream hppOut(outputRoot + "/buttons.hpp");
    if (hppOut.is_open()) {
        hppOut << "// Auto-generated buttons\n";
        hppOut << "#pragma once\n\n#include <cstddef>\n\nnamespace cs2_dumper {\n";
        hppOut << "    namespace buttons {\n";
        for (const auto& btn : g_FoundButtons) {
            hppOut << "        constexpr std::ptrdiff_t " << MakeCppIdentifier(btn.name)
                   << " = " << ToHexLiteral(btn.offset) << ";\n";
        }
        hppOut << "    }\n}\n";
    }

    std::ofstream csOut(outputRoot + "/buttons.cs");
    if (csOut.is_open()) {
        csOut << "// Auto-generated buttons\n";
        csOut << "namespace cs2_dumper {\n";
        csOut << "    public static class buttons {\n";
        for (const auto& btn : g_FoundButtons) {
            csOut << "        public const nint " << MakeCppIdentifier(btn.name)
                  << " = " << ToHexLiteral(btn.offset) << ";\n";
        }
        csOut << "    }\n}\n";
    }

    std::ofstream rsOut(outputRoot + "/buttons.rs");
    if (rsOut.is_open()) {
        rsOut << "// Auto-generated buttons\n";
        for (const auto& btn : g_FoundButtons) {
            rsOut << "pub const " << ToRustConstName(btn.name)
                  << ": usize = " << ToHexLiteral(btn.offset) << ";\n";
        }
    }
}

inline void WritePatternsOutputStructured(const std::string& outputRoot) {
    struct PatternEntry {
        std::string module;
        std::string name;
        std::string pattern;
        std::string description;
    };

    std::vector<PatternEntry> entries;

    auto collect = [&](PatternInfo* arr, size_t count, const std::string& module) {
        for (size_t i = 0; i < count; ++i) {
            PatternEntry e;
            e.module = module;
            e.name = arr[i].name;
            e.pattern = arr[i].pattern;
            e.description = arr[i].description;
            entries.push_back(std::move(e));
        }
    };

    collect(g_ClientPatterns, sizeof(g_ClientPatterns) / sizeof(g_ClientPatterns[0]), "client.dll");
    collect(g_Engine2Patterns, sizeof(g_Engine2Patterns) / sizeof(g_Engine2Patterns[0]), "engine2.dll");
    collect(g_InputsystemPatterns, sizeof(g_InputsystemPatterns) / sizeof(g_InputsystemPatterns[0]), "inputsystem.dll");
    collect(g_MatchmakingPatterns, sizeof(g_MatchmakingPatterns) / sizeof(g_MatchmakingPatterns[0]), "matchmaking.dll");
    collect(g_SoundsystemPatterns, sizeof(g_SoundsystemPatterns) / sizeof(g_SoundsystemPatterns[0]), "soundsystem.dll");
    collect(g_Tier0Patterns, sizeof(g_Tier0Patterns) / sizeof(g_Tier0Patterns[0]), "tier0.dll");

    std::ofstream jsonOut(outputRoot + "/patterns.json");
    if (jsonOut.is_open()) {
        jsonOut << "{\n";
        std::map<std::string, std::vector<const PatternEntry*>> byModule;
        for (const auto& e : entries) byModule[e.module].push_back(&e);

        size_t modIdx = 0;
        for (const auto& [mod, pats] : byModule) {
            jsonOut << "  \"" << JsonEscape(mod) << "\": {\n";
            for (size_t i = 0; i < pats.size(); ++i) {
                const auto* p = pats[i];
                jsonOut << "    \"" << JsonEscape(p->name) << "\": \"" << JsonEscape(p->pattern) << "\"";
                jsonOut << (i + 1 < pats.size() ? "," : "") << "\n";
            }
            jsonOut << "  }" << (++modIdx < byModule.size() ? "," : "") << "\n";
        }
        jsonOut << "}\n";
    }

    std::ofstream hppOut(outputRoot + "/patterns.hpp");
    if (hppOut.is_open()) {
        hppOut << "// Auto-generated patterns\n";
        hppOut << "#pragma once\n\nnamespace cs2_dumper {\n";
        hppOut << "    namespace patterns {\n";
        std::map<std::string, std::vector<const PatternEntry*>> byModule;
        for (const auto& e : entries) byModule[e.module].push_back(&e);
        for (const auto& [mod, pats] : byModule) {
            hppOut << "        namespace " << MakeCppIdentifier(mod) << " {\n";
            for (const auto* p : pats) {
                hppOut << "            constexpr const char* " << MakeCppIdentifier(p->name)
                       << " = \"" << p->pattern << "\";\n";
            }
            hppOut << "        }\n";
        }
        hppOut << "    }\n}\n";
    }

    std::ofstream csOut(outputRoot + "/patterns.cs");
    if (csOut.is_open()) {
        csOut << "// Auto-generated patterns\n";
        csOut << "namespace cs2_dumper {\n";
        std::map<std::string, std::vector<const PatternEntry*>> byModule;
        for (const auto& e : entries) byModule[e.module].push_back(&e);
        for (const auto& [mod, pats] : byModule) {
            csOut << "    public static class " << MakeCppIdentifier(mod) << " {\n";
            for (const auto* p : pats) {
                csOut << "        public const string " << MakeCppIdentifier(p->name)
                      << " = \"" << p->pattern << "\";\n";
            }
            csOut << "    }\n";
        }
        csOut << "}\n";
    }

    std::ofstream rsOut(outputRoot + "/patterns.rs");
    if (rsOut.is_open()) {
        rsOut << "// Auto-generated patterns\n";
        std::map<std::string, std::vector<const PatternEntry*>> byModule;
        for (const auto& e : entries) byModule[e.module].push_back(&e);
        for (const auto& [mod, pats] : byModule) {
            rsOut << "pub mod " << MakeCppIdentifier(mod) << " {\n";
            for (const auto* p : pats) {
                rsOut << "    pub const " << ToRustConstName(p->name)
                      << ": &str = \"" << p->pattern << "\";\n";
            }
            rsOut << "}\n";
        }
    }
}

inline void WriteOutputInfo(const std::string& outputRoot) {
    std::ofstream out(outputRoot + "/info.json");
    if (!out.is_open()) return;

    int interfaceCount = 0;
    for (const auto& [_, ifaces] : g_Interfaces) interfaceCount += static_cast<int>(ifaces.size());
    int schemaClassCount = 0;
    for (const auto& [_, classes] : g_SchemaClasses) schemaClassCount += static_cast<int>(classes.size());

    out << "{\n";
    out << "  \"generator\": \"cs2_dumper\",\n";
    out << "  \"timestamp\": \"" << JsonEscape(GetCurrentTimestamp()) << "\",\n";
    out << "  \"counts\": {\n";
    out << "    \"offsets\": " << g_FoundOffsets.size() << ",\n";
    out << "    \"buttons\": " << g_FoundButtons.size() << ",\n";
    out << "    \"interfaces\": " << interfaceCount << ",\n";
    out << "    \"schema_classes\": " << schemaClassCount << ",\n";
    out << "    \"exports\": " << g_ModuleExports.size() << ",\n";
    out << "    \"rtti_classes\": " << g_RTTIClasses.size() << ",\n";
    out << "    \"convars\": " << g_ConVars.size() << ",\n";
    out << "    \"vtables\": " << g_VTables.size() << "\n";
    out << "  }\n";
    out << "}\n";
}

inline void WriteSchemasOutputStructured(const std::string& outputRoot) {
    std::filesystem::create_directories(outputRoot);
    for (const auto& [scope, classes] : g_SchemaClasses) {
        std::string fileBase = scope;
        std::replace(fileBase.begin(), fileBase.end(), '.', '_');
        fileBase = MakeCppIdentifier(fileBase);

        std::ofstream jsonOut(outputRoot + "/" + fileBase + ".json");
        if (jsonOut.is_open()) {
            jsonOut << "{\n";
            jsonOut << "  \"module\": \"" << JsonEscape(scope) << "\",\n";
            jsonOut << "  \"classes\": {\n";
            for (size_t c = 0; c < classes.size(); ++c) {
                const auto& cls = classes[c];
                jsonOut << "    \"" << JsonEscape(cls.name) << "\": {\n";
                jsonOut << "      \"size\": " << cls.size << ",\n";
                jsonOut << "      \"fields\": {\n";
                for (size_t f = 0; f < cls.fields.size(); ++f) {
                    const auto& field = cls.fields[f];
                    jsonOut << "        \"" << JsonEscape(field.name) << "\": " << field.offset;
                    jsonOut << (f + 1 < cls.fields.size() ? "," : "") << "\n";
                }
                jsonOut << "      }\n";
                jsonOut << "    }" << (c + 1 < classes.size() ? "," : "") << "\n";
            }
            jsonOut << "  }\n";
            jsonOut << "}\n";
        }

        std::ofstream hppOut(outputRoot + "/" + fileBase + ".hpp");
        if (hppOut.is_open()) {
            hppOut << "// Auto-generated schemas\n";
            hppOut << "#pragma once\n\n#include <cstddef>\n\nnamespace cs2_dumper {\n";
            hppOut << "    namespace schemas {\n";
            hppOut << "        namespace " << fileBase << " {\n";
            for (const auto& cls : classes) {
                hppOut << "            namespace " << MakeCppIdentifier(cls.name) << " {\n";
                for (const auto& field : cls.fields) {
                    hppOut << "                constexpr std::ptrdiff_t " << MakeCppIdentifier(field.name)
                           << " = " << ToHexLiteral(field.offset) << ";\n";
                }
                hppOut << "            }\n";
            }
            hppOut << "        }\n    }\n}\n";
        }
    }
}

inline void WriteStructuredOutput() {
    const std::string outputRoot = g_OutputPath + "/output";
    const std::string metaRoot = outputRoot + "/meta";
    const std::string offsetsRoot = outputRoot + "/offsets";
    const std::string patternsRoot = outputRoot + "/patterns";
    const std::string interfacesRoot = outputRoot + "/interfaces";
    const std::string buttonsRoot = outputRoot + "/buttons";
    const std::string schemasRoot = outputRoot + "/schemas";

    std::filesystem::create_directories(metaRoot);
    std::filesystem::create_directories(offsetsRoot);
    std::filesystem::create_directories(patternsRoot);
    std::filesystem::create_directories(interfacesRoot);
    std::filesystem::create_directories(buttonsRoot);
    std::filesystem::create_directories(schemasRoot);

    WriteOutputInfo(metaRoot);
    WriteOffsetsCombinedOutput(offsetsRoot);
    WriteOffsetsByModuleOutput(offsetsRoot);
    WritePatternsOutputStructured(patternsRoot);
    WriteInterfacesOutputStructured(interfacesRoot);
    WriteButtonsOutputStructured(buttonsRoot);
    WriteSchemasOutputStructured(schemasRoot);

    g_Logger.Success("Output", "output written to output/{offsets,patterns,interfaces,buttons,schemas,meta}");
}


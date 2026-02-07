#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "dump_data.hpp"

//=============================================================================
// OUTPUT GENERATION - Formatted like a2x (modularized)
//=============================================================================

extern std::string g_OutputPath;
extern std::vector<ModuleInfo> g_Modules;

std::string GetCurrentTimestamp();

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
    out << "// Based on a2x/cs2-dumper patterns\n";
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
        std::string ns = mod;
        for (char& c : ns) if (c == '.') c = '_';

        out << "        // Module: " << mod << "\n";
        out << "        namespace " << ns << " {\n";
        for (auto* off : offsets) {
            out << "            // " << off->description << "\n";
            out << "            constexpr std::ptrdiff_t " << off->name << " = 0x"
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
    out << "// Based on a2x/cs2-dumper patterns\n";
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
        std::string ns = mod;
        for (char& c : ns) if (c == '.') c = '_';

        out << "        // Module: " << mod << "\n";
        out << "        namespace " << ns << " {\n";
        for (auto* off : offsets) {
            out << "            // " << off->description << "\n";
            out << "            constexpr std::ptrdiff_t " << off->name << " = 0x"
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
    out << "// Based on a2x/cs2-dumper patterns\n";
    out << "// " << GetCurrentTimestamp() << "\n\n";
    out << "#pragma once\n\n";
    out << "#include <cstddef>\n\n";
    out << "namespace cs2_dumper {\n";
    out << "    // Module: client.dll\n";
    out << "    namespace buttons {\n";

    for (auto& btn : g_FoundButtons) {
        out << "        constexpr std::ptrdiff_t " << btn.name << " = 0x"
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
    out << "// Based on a2x/cs2-dumper patterns\n";
    out << "// " << GetCurrentTimestamp() << "\n\n";
    out << "#pragma once\n\n";
    out << "#include <cstddef>\n\n";
    out << "namespace cs2_dumper {\n";
    out << "    namespace interfaces {\n";

    for (auto& [mod, interfaces] : g_Interfaces) {
        std::string ns = mod;
        for (char& c : ns) if (c == '.') c = '_';

        out << "        // Module: " << mod << "\n";
        out << "        namespace " << ns << " {\n";
        for (auto& iface : interfaces) {
            out << "            constexpr std::ptrdiff_t " << iface.name << " = 0x"
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

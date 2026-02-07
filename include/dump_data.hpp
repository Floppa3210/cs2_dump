#pragma once
#include "common.hpp"
#include <cstdio>

//=============================================================================
// DUMP DATA STRUCTURES + SHARED HELPERS
//=============================================================================

struct FoundOffset {
    std::string name;
    std::string module;
    uintptr_t offset;
    std::string description;
};

struct FoundButton {
    std::string name;
    uintptr_t offset;
};

struct FoundInterface {
    std::string name;
    uintptr_t offset;
};

extern std::vector<FoundOffset> g_FoundOffsets;
extern std::map<std::string, std::vector<FoundInterface>> g_Interfaces;
extern std::vector<FoundButton> g_FoundButtons;

inline std::string JsonEscape(const std::string& input) {
    std::string out;
    out.reserve(input.size() + 8);
    for (unsigned char c : input) {
        switch (c) {
            case '"': out += "\\\""; break;
            case '\\': out += "\\\\"; break;
            case '\b': out += "\\b"; break;
            case '\f': out += "\\f"; break;
            case '\n': out += "\\n"; break;
            case '\r': out += "\\r"; break;
            case '\t': out += "\\t"; break;
            default:
                if (c < 0x20) {
                    char buf[7];
                    sprintf_s(buf, "\\u%04X", static_cast<unsigned int>(c));
                    out += buf;
                } else {
                    out += static_cast<char>(c);
                }
                break;
        }
    }
    return out;
}

inline std::string MakeCppIdentifier(const std::string& raw) {
    std::string out;
    out.reserve(raw.size() + 1);

    auto isStart = [](unsigned char c) {
        return std::isalpha(c) || c == '_';
    };
    auto isBody = [](unsigned char c) {
        return std::isalnum(c) || c == '_';
    };

    for (unsigned char c : raw) {
        out.push_back(isBody(c) ? static_cast<char>(c) : '_');
    }

    if (out.empty()) {
        out = "_unnamed";
    }
    if (!isStart(static_cast<unsigned char>(out[0]))) {
        out.insert(out.begin(), '_');
    }

    while (out.find("__") != std::string::npos) {
        out.erase(out.find("__"), 1);
    }

    static const std::set<std::string> kKeywords = {
        "class", "struct", "namespace", "template", "typename", "auto", "const",
        "volatile", "signed", "unsigned", "static", "virtual", "public", "private",
        "protected", "operator", "new", "delete", "switch", "case", "default"
    };
    if (kKeywords.find(out) != kKeywords.end()) {
        out = "_" + out;
    }

    return out;
}

inline bool AddFoundOffset(const FoundOffset& off, bool overwriteIfExists) {
    auto it = std::find_if(
        g_FoundOffsets.begin(),
        g_FoundOffsets.end(),
        [&](const FoundOffset& current) {
            return current.module == off.module && current.name == off.name;
        }
    );

    if (it != g_FoundOffsets.end()) {
        if (overwriteIfExists) {
            *it = off;
        }
        return false;
    }

    g_FoundOffsets.push_back(off);
    return true;
}

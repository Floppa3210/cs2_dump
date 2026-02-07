#pragma once
#include "common.hpp"
#include "memory.hpp"
#include "logger.hpp"

//=============================================================================
// PATTERN SCANNER - Safe pattern scanning with validation + fallbacks
//=============================================================================

struct PatternDefinition {
    std::string name;
    std::string pattern;
    int resolveOffset = 0;
    int instrSize = 0;
    std::string description;
};

class PatternScanner {
private:
    static std::vector<int> ParsePattern(const std::string& pattern) {
        std::vector<int> bytes;
        const char* p = pattern.c_str();
        while (*p) {
            if (*p == ' ') { ++p; continue; }
            if (*p == '?') {
                bytes.push_back(-1);
                p += (p[1] == '?') ? 2 : 1;
            } else {
                bytes.push_back(static_cast<int>(strtol(p, nullptr, 16)));
                p += 2;
            }
        }
        return bytes;
    }

public:
    static uintptr_t Scan(uintptr_t base, size_t size, const std::string& pattern) {
        if (!IsValidPointer(reinterpret_cast<void*>(base), size)) return 0;
        auto bytes = ParsePattern(pattern);
        if (bytes.empty() || size < bytes.size()) return 0;

        const size_t patternLen = bytes.size();
        auto* scanBase = reinterpret_cast<uint8_t*>(base);

        for (size_t i = 0; i <= size - patternLen; ++i) {
            bool found = true;
            for (size_t j = 0; j < patternLen; ++j) {
                if (bytes[j] != -1 && scanBase[i + j] != bytes[j]) {
                    found = false;
                    break;
                }
            }
            if (found) return base + i;
        }
        return 0;
    }

    static uintptr_t ResolveRelative(uintptr_t address, int offset, int instrSize) {
        if (!address || !IsValidPointer(reinterpret_cast<void*>(address + offset), 4)) return 0;
        int32_t relOffset = 0;
        if (!SafeRead<int32_t>(address + offset, relOffset)) return 0;
        return address + instrSize + relOffset;
    }

    static bool ScanPattern(const ModuleInfo& mod, const PatternDefinition& pat, uintptr_t& outRva) {
        uintptr_t found = Scan(mod.base, mod.size, pat.pattern);
        if (!found) return false;

        uintptr_t resolved = ResolveRelative(found, pat.resolveOffset, pat.instrSize);
        if (!resolved || resolved < mod.base) return false;

        outRva = resolved - mod.base;
        return true;
    }
};

#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "pattern_scanner.hpp"
#include "patterns.hpp"
#include "dump_data.hpp"

//=============================================================================
// PATTERN SCANNING EXECUTION (modularized)
//=============================================================================

uintptr_t PatternScan(uintptr_t base, size_t size, const char* pattern);
uintptr_t ResolveRelativeAddress(uintptr_t address, int offset, int instrSize);
ModuleInfo* FindModule(const std::string& name);

inline void ScanPatterns(PatternInfo* patterns, int count, const std::string& moduleName) {
    auto mod = FindModule(moduleName);
    if (!mod) {
        g_Logger.Error("Patterns", moduleName + " not found");
        return;
    }

    g_Logger.Info("Patterns", "Scanning " + moduleName + "...");

    for (int i = 0; i < count; i++) {
        auto& pat = patterns[i];
        uintptr_t addr = PatternScan(mod->base, mod->size, pat.pattern);

        if (addr) {
            uintptr_t resolved = ResolveRelativeAddress(addr, pat.resolveOffset, pat.instrSize);
            if (resolved && resolved >= mod->base && resolved < (mod->base + mod->size)) {
                uintptr_t rva = resolved - mod->base;

                FoundOffset off;
                off.name = pat.name;
                off.module = moduleName;
                off.offset = rva;
                off.description = pat.description;
                if (AddFoundOffset(off, true)) {
                    g_Logger.Success("Patterns", std::string(pat.name) + " = " + ToHex(rva));
                } else {
                    g_Logger.Warning("Patterns", std::string(pat.name) + " duplicated, keeping latest value " + ToHex(rva));
                }
            } else {
                g_Logger.Error("Patterns", std::string(pat.name) + " - failed to resolve");
            }
        } else {
            g_Logger.Error("Patterns", std::string(pat.name) + " - pattern not found");
        }
    }
}

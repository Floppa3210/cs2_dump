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

struct PatternScanRecord {
    std::string module;
    std::string name;
    std::string pattern;
    bool found = false;
    bool resolved = false;
    uintptr_t resolvedRva = 0;
    std::string failureReason;
};

extern std::vector<PatternScanRecord> g_PatternScanRecords;

inline void ScanPatterns(PatternInfo* patterns, int count, const std::string& moduleName) {
    auto mod = FindModule(moduleName);
    if (!mod) {
        g_Logger.Warning("Patterns", moduleName + " not found");
        return;
    }

    g_Logger.Info("Patterns", "Scanning " + moduleName + "...");

    for (int i = 0; i < count; i++) {
        auto& pat = patterns[i];
        PatternScanRecord record;
        record.module = moduleName;
        record.name = pat.name;
        record.pattern = pat.pattern;

        uintptr_t addr = PatternScan(mod->base, mod->size, pat.pattern);

        if (addr) {
            record.found = true;
            uintptr_t resolvedValue = 0;
            bool resolveOk = false;

            if (pat.extractImmediate) {
                const uintptr_t immediateAddr = addr + static_cast<uintptr_t>(pat.resolveOffset);
                if (pat.immediateSize == 1) {
                    uint8_t v = 0;
                    if (ReadUInt8(immediateAddr, v)) {
                        resolvedValue = static_cast<uintptr_t>(v);
                        resolveOk = true;
                    }
                } else if (pat.immediateSize == 2) {
                    int16_t v = 0;
                    if (ReadInt16(immediateAddr, v)) {
                        resolvedValue = static_cast<uintptr_t>(static_cast<uint16_t>(v));
                        resolveOk = true;
                    }
                } else {
                    int32_t v = 0;
                    if (ReadInt32(immediateAddr, v)) {
                        resolvedValue = static_cast<uintptr_t>(static_cast<uint32_t>(v));
                        resolveOk = true;
                    }
                }
            } else {
                const uintptr_t resolved = ResolveRelativeAddress(addr, pat.resolveOffset, pat.instrSize);
                if (resolved && resolved >= mod->base && resolved < (mod->base + mod->size)) {
                    resolvedValue = resolved - mod->base;
                    resolveOk = true;
                }
            }

            if (resolveOk) {
                record.resolved = true;
                record.resolvedRva = resolvedValue;

                FoundOffset off;
                off.name = pat.name;
                off.module = moduleName;
                off.offset = resolvedValue;
                off.description = pat.description;
                if (AddFoundOffset(off, true)) {
                    g_Logger.Success("Patterns", std::string(pat.name) + " = " + ToHex(resolvedValue));
                } else {
                    g_Logger.Warning("Patterns", std::string(pat.name) + " duplicated, keeping latest value " + ToHex(resolvedValue));
                }
            } else {
                record.failureReason = "resolve_failed";
                g_Logger.Warning("Patterns", std::string(pat.name) + " - failed to resolve");
            }
        } else {
            record.failureReason = "pattern_not_found";
            g_Logger.Warning("Patterns", std::string(pat.name) + " - pattern not found");
        }

        g_PatternScanRecords.push_back(std::move(record));
    }
}

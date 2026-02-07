#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "pattern_scanner.hpp"
#include "patterns.hpp"
#include "dump_data.hpp"

//=============================================================================
// BUTTON SCANNING - Like a2x (modularized)
//=============================================================================

uintptr_t PatternScan(uintptr_t base, size_t size, const char* pattern);
uintptr_t ResolveRelativeAddress(uintptr_t address, int offset, int instrSize);
ModuleInfo* FindModule(const std::string& name);

inline void ScanButtons() {
    g_Logger.Info("Buttons", "Scanning button list...");

    auto clientMod = FindModule("client.dll");
    if (!clientMod) {
        g_Logger.Error("Buttons", "client.dll not found");
        return;
    }

    uintptr_t patternAddr = PatternScan(clientMod->base, clientMod->size, BUTTON_LIST_PATTERN);
    if (!patternAddr) {
        g_Logger.Error("Buttons", "Button list pattern not found");
        return;
    }

    uintptr_t listAddr = ResolveRelativeAddress(patternAddr, 3, 7);
    if (!listAddr || !IsSafeToRead((void*)listAddr, 8)) {
        g_Logger.Error("Buttons", "Failed to resolve button list address");
        return;
    }

    g_Logger.Success("Buttons", "Button list @ " + ToHex(listAddr - clientMod->base));

    // Read pointer to first button
    uintptr_t curButton = 0;
    if (!ReadPtr(listAddr, curButton)) {
        g_Logger.Error("Buttons", "Failed to read button list pointer");
        return;
    }
    int buttonCount = 0;

    g_Logger.Info("Buttons", "First button ptr: " + ToHex(curButton));

    // KeyButton structure from a2x (source2/client/input.rs):
    // 0x00-0x08: padding
    // 0x08: name (pointer to string)
    // 0x10-0x30: padding
    // 0x30: state (uint32)
    // 0x34-0x88: padding
    // 0x88: next (pointer to next button)

    if (!curButton) {
        g_Logger.Warning("Buttons", "First button pointer is NULL, trying alternate read method");
        // Try reading from different offset structure
        // Some versions use different layout - try direct pointer list
        for (int i = 0; i < 20; i++) {
            uintptr_t testBtn = 0;
            if (!ReadPtr(listAddr + i * 8, testBtn)) continue;
            if (testBtn && IsSafeToRead((void*)testBtn, 0x20)) {
                uintptr_t namePtr = 0;
                ReadPtr(testBtn + 0x08, namePtr);
                if (namePtr && IsSafeToRead((void*)namePtr, 4)) {
                    std::string name = SafeReadCString(reinterpret_cast<const char*>(namePtr), 32);
                    g_Logger.Info("Buttons", "Try offset " + std::to_string(i * 8) + ": name='" + name + "'");
                    if (!name.empty()) break;
                }
            }
        }
    }

    // Main button iteration loop (no debug limit)
    while (curButton && buttonCount < 100) {
        if (!IsSafeToRead((void*)curButton, 0x90)) {
            if (!IsSafeToRead((void*)curButton, 0x20)) break;
        }

        uintptr_t namePtr = 0;
        ReadPtr(curButton + 0x08, namePtr);

        std::string name;
        if (namePtr && IsSafeToRead((void*)namePtr, 4)) {
            name = SafeReadCString(reinterpret_cast<const char*>(namePtr), 32);
        }

        if (!name.empty()) {
            std::string cleanName = (name[0] == '+') ? name.substr(1) : name;
            uintptr_t rva = (curButton + 0x30) - clientMod->base;

            FoundButton btn;
            btn.name = cleanName;
            btn.offset = rva;
            g_FoundButtons.push_back(btn);

            g_Logger.Success("Buttons", cleanName + " = " + ToHex(rva));
            buttonCount++;
        }

        // Read next pointer at 0x88
        uintptr_t nextPtr = 0;
        ReadPtr(curButton + 0x88, nextPtr);

        curButton = nextPtr;
    }

    g_Logger.Success("Buttons", "Found " + std::to_string(buttonCount) + " buttons");
}

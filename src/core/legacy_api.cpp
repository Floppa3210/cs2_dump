#include "include/core/legacy_api.hpp"

#include "include/logger.hpp"
#include "include/pattern_scanner.hpp"

extern std::vector<ModuleInfo> g_Modules;

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

uintptr_t PatternScan(uintptr_t base, size_t size, const char* pattern) {
    if (!pattern || !*pattern) return 0;
    return PatternScanner::Scan(base, size, pattern);
}

uintptr_t ResolveRelativeAddress(uintptr_t address, int offset, int instrSize) {
    return PatternScanner::ResolveRelative(address, offset, instrSize);
}

std::string GetCurrentTimestamp() {
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);
    std::tm tm;
    localtime_s(&tm, &time);
    char buf[64];
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &tm);
    return std::string(buf);
}


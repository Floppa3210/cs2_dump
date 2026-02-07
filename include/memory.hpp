#pragma once
#include "common.hpp"
#include "logger.hpp"

//=============================================================================
// MEMORY MANAGER - Module enumeration + safe reads
//=============================================================================

struct ModuleInfo {
    std::string name;
    uintptr_t base = 0;
    size_t size = 0;
};

class ModuleManager {
private:
    std::vector<ModuleInfo> m_modules;

    static std::string ToLower(const std::string& in) {
        std::string out = in;
        std::transform(out.begin(), out.end(), out.begin(), [](unsigned char c) {
            return static_cast<char>(std::tolower(c));
        });
        return out;
    }

public:
    void Refresh() {
        m_modules.clear();

        HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32,
                                               GetCurrentProcessId());
        if (snap == INVALID_HANDLE_VALUE) {
            g_Logger.Error("Modules", "CreateToolhelp32Snapshot failed");
            return;
        }

        MODULEENTRY32W me{};
        me.dwSize = sizeof(me);

        if (Module32FirstW(snap, &me)) {
            do {
                ModuleInfo mod;
                mod.name = ToLower(WStringToString(me.szModule));
                mod.base = reinterpret_cast<uintptr_t>(me.modBaseAddr);
                mod.size = me.modBaseSize;
                m_modules.push_back(mod);
            } while (Module32NextW(snap, &me));
        }

        CloseHandle(snap);
        g_Logger.Success("Modules", "Found " + std::to_string(m_modules.size()) + " modules");
    }

    const std::vector<ModuleInfo>& GetModules() const { return m_modules; }

    const ModuleInfo* Find(const std::string& name) const {
        std::string lower = ToLower(name);
        for (const auto& mod : m_modules) {
            if (mod.name == lower) return &mod;
        }
        return nullptr;
    }
};

// Safe primitive read with SEH

template <typename T>
inline bool SafeRead(uintptr_t address, T& out) {
    if (!IsValidPointer(reinterpret_cast<const void*>(address), sizeof(T))) return false;
    __try {
        out = *reinterpret_cast<T*>(address);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

inline bool SafeReadBytes(uintptr_t address, void* buffer, size_t size) {
    if (!IsValidPointer(reinterpret_cast<const void*>(address), size)) return false;
    __try {
        std::memcpy(buffer, reinterpret_cast<const void*>(address), size);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

inline std::string SafeReadString(uintptr_t address, size_t maxLen = 256) {
    return SafeReadCString(reinterpret_cast<const char*>(address), maxLen);
}

inline bool ReadPtr(uintptr_t address, uintptr_t& out) {
    return SafeRead<uintptr_t>(address, out);
}

inline bool ReadInt32(uintptr_t address, int32_t& out) {
    return SafeRead<int32_t>(address, out);
}

inline bool ReadInt16(uintptr_t address, int16_t& out) {
    return SafeRead<int16_t>(address, out);
}

inline bool ReadUInt8(uintptr_t address, uint8_t& out) {
    return SafeRead<uint8_t>(address, out);
}

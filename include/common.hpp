//=============================================================================
// CS2 PRO DUMPER - Professional Memory Dumper for Counter-Strike 2
// 
// Features:
// - SEH (Structured Exception Handling) for crash protection
// - Multi-threaded pattern scanning with validation
// - Complete Schema System dumping
// - Button state scanning
// - Interface enumeration
// - RTTI/VTable discovery
// - ConVar extraction
// - Output in JSON, HPP formats
//
// Built with: Memory safety, error handling, multi-threading
//=============================================================================

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <tlhelp32.h>
#include <psapi.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <filesystem>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <mutex>
#include <thread>
#include <future>
#include <queue>
#include <functional>
#include <memory>
#include <array>
#include <regex>
#include <cstring>
#include <cctype>
#include <cmath>

namespace fs = std::filesystem;

//=============================================================================
// EXCEPTION HANDLING - Prevents crashes from invalid memory access
//=============================================================================

class ExceptionHandler {
private:
    inline static PVOID s_vectoredHandler = nullptr;

    static LONG WINAPI ExceptionFilter(EXCEPTION_POINTERS* pExceptionInfo) {
        // Log the exception but don't crash
        DWORD code = pExceptionInfo->ExceptionRecord->ExceptionCode;
        void* addr = pExceptionInfo->ExceptionRecord->ExceptionAddress;
        
        // Only handle access violations and related memory errors
        if (code == EXCEPTION_ACCESS_VIOLATION ||
            code == EXCEPTION_IN_PAGE_ERROR ||
            code == EXCEPTION_STACK_OVERFLOW) {
            return EXCEPTION_EXECUTE_HANDLER; // Continue execution
        }
        return EXCEPTION_CONTINUE_SEARCH; // Let debugger handle others
    }

public:
    static void Install() {
        SetUnhandledExceptionFilter(ExceptionFilter);
        if (!s_vectoredHandler) {
            s_vectoredHandler = AddVectoredExceptionHandler(1, ExceptionFilter);
        }
    }
    
    static void Uninstall() {
        if (s_vectoredHandler) {
            RemoveVectoredExceptionHandler(s_vectoredHandler);
            s_vectoredHandler = nullptr;
        }
    }
};

//=============================================================================
// MEMORY SAFETY HELPERS
//=============================================================================

inline bool IsValidPointer(const void* ptr, size_t size) {
    if (!ptr) return false;
    if (size == 0) return true;

    auto isReadableProtect = [](DWORD protect) -> bool {
        if (protect & (PAGE_NOACCESS | PAGE_GUARD)) {
            return false;
        }
        const DWORD readableFlags =
            PAGE_READONLY |
            PAGE_READWRITE |
            PAGE_WRITECOPY |
            PAGE_EXECUTE_READ |
            PAGE_EXECUTE_READWRITE |
            PAGE_EXECUTE_WRITECOPY;
        return (protect & readableFlags) != 0;
    };

    uintptr_t current = reinterpret_cast<uintptr_t>(ptr);
    uintptr_t end = current + size;
    if (end < current) {
        return false;
    }

    while (current < end) {
        MEMORY_BASIC_INFORMATION mbi{};
        if (VirtualQuery(reinterpret_cast<const void*>(current), &mbi, sizeof(mbi)) == 0) {
            return false;
        }
        if (mbi.State != MEM_COMMIT || !isReadableProtect(mbi.Protect)) {
            return false;
        }

        uintptr_t regionEnd = reinterpret_cast<uintptr_t>(mbi.BaseAddress) + mbi.RegionSize;
        if (regionEnd <= current) {
            return false;
        }
        current = regionEnd;
    }

    return true;
}

// Legacy compatibility helper (existing code uses IsSafeToRead)
inline bool IsSafeToRead(const void* ptr, size_t size) {
    return IsValidPointer(ptr, size);
}

inline std::string SafeReadCString(const char* ptr, size_t maxLen = 256) {
    if (!ptr || !IsValidPointer(ptr, 1)) return {};
    std::string result;
    result.reserve(maxLen);
    for (size_t i = 0; i < maxLen; ++i) {
        if (!IsValidPointer(ptr + i, 1) || ptr[i] == '\0') break;
        result.push_back(ptr[i]);
    }
    return result;
}

inline std::string WStringToString(const std::wstring& wstr) {
    if (wstr.empty()) return {};
    int size = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
    if (size <= 1) return {};
    std::string out(size - 1, 0);
    WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, &out[0], size, nullptr, nullptr);
    return out;
}

inline std::string ToHex(uintptr_t value) {
    std::stringstream ss;
    ss << "0x" << std::hex << std::uppercase << value;
    return ss.str();
}

// RAII wrapper for safe memory operations
template<typename T>
class SafePtr {
private:
    T* m_ptr;
    bool m_valid;
    
public:
    SafePtr(T* ptr) : m_ptr(ptr), m_valid(false) {
        if (ptr) {
            __try {
                // Test read access
                volatile T dummy = *ptr;
                m_valid = true;
            }
            __except (EXCEPTION_EXECUTE_HANDLER) {
                m_valid = false;
            }
        }
    }
    
    bool IsValid() const { return m_valid; }
    T* Get() const { return m_valid ? m_ptr : nullptr; }
    T ValueOr(T defaultVal) const { return m_valid ? *m_ptr : defaultVal; }
};

// Macro for safe memory reads with SEH
#define SAFE_READ(ptr, type, var) \
    do { \
        var = (type)0; \
        __try { \
            if (IsValidPointer(ptr, sizeof(type))) { \
                var = *(type*)(ptr); \
            } \
        } \
        __except (EXCEPTION_EXECUTE_HANDLER) { \
            var = (type)0; \
        } \
    } while(0)

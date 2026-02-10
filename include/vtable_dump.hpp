#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "dump_data.hpp"

//=============================================================================
// VTABLE SCANNER - Find Virtual Function Tables (modularized)
//=============================================================================

extern std::vector<ModuleInfo> g_Modules;
extern std::string g_OutputPath;

struct VTable {
    std::string className;
    uintptr_t address;
    int functionCount;
    std::string module;
};

extern std::vector<VTable> g_VTables;

inline void ScanVTables() {
    g_Logger.Info("VTables", "Scanning for virtual function tables...");
    g_VTables.clear();

    constexpr size_t MAX_SCAN_BYTES_PER_MODULE = 64 * 1024 * 1024; // 64 MB
    constexpr int MAX_SECONDS_TOTAL = 30;
    constexpr int MAX_TOTAL_RESULTS = 20000;
    constexpr bool kScanAllModules = false;

    auto startTime = std::chrono::steady_clock::now();
    auto isGameModule = [](const std::string& name) -> bool {
        static const std::set<std::string> kAllowed = {
            "client.dll", "engine2.dll", "schemasystem.dll", "tier0.dll",
            "inputsystem.dll", "materialsystem2.dll", "scenesystem.dll",
            "resourcesystem.dll", "particles.dll", "rendersystemdx11.dll",
            "networksystem.dll", "panorama.dll", "vphysics2.dll",
            "soundsystem.dll", "animationsystem.dll", "host.dll",
            "matchmaking.dll", "localize.dll", "filesystem_stdio.dll",
            "server.dll"
        };
        return kAllowed.find(name) != kAllowed.end();
    };

    auto DecodeMsvcRttiName = [](const std::string& decorated) -> std::string {
        // Typical MSVC names: .?AVClassName@@ or .?AUClassName@@
        if (decorated.rfind(".?AV", 0) == 0 || decorated.rfind(".?AU", 0) == 0) {
            size_t start = 4;
            size_t end = decorated.find("@@");
            if (end == std::string::npos) {
                end = decorated.find('@', start);
            }
            if (end != std::string::npos && end > start) {
                return decorated.substr(start, end - start);
            }
            if (decorated.size() > start) {
                return decorated.substr(start);
            }
        }
        return decorated;
    };

    auto TryResolveClassNameFromCol = [&](const ModuleInfo& mod, uintptr_t colPtr) -> std::string {
        int32_t signature = 0;
        if (!ReadInt32(colPtr, signature)) {
            return {};
        }
        if (!(signature == 0 || signature == 1)) {
            return {};
        }

        uintptr_t typeDescriptor = 0;
        if (signature == 1) {
            // x64 COL layout uses RVAs.
            int32_t typeDescRva = 0;
            if (!ReadInt32(colPtr + 0x0C, typeDescRva)) {
                return {};
            }
            if (typeDescRva <= 0 || static_cast<size_t>(typeDescRva) >= mod.size) {
                return {};
            }
            typeDescriptor = mod.base + static_cast<uintptr_t>(typeDescRva);
        } else {
            // Legacy layout can hold absolute pointers.
            if (!ReadPtr(colPtr + 0x0C, typeDescriptor) || !typeDescriptor) {
                return {};
            }
        }

        if (!IsSafeToRead(reinterpret_cast<void*>(typeDescriptor), 0x20)) {
            return {};
        }

        // x64 TypeDescriptor name normally starts at +0x10 (fallback +0x08).
        std::string decorated = SafeReadCString(reinterpret_cast<const char*>(typeDescriptor + 0x10), 128);
        if (decorated.empty()) {
            decorated = SafeReadCString(reinterpret_cast<const char*>(typeDescriptor + 0x08), 128);
        }
        if (decorated.empty()) {
            return {};
        }
        return DecodeMsvcRttiName(decorated);
    };

    // VTables are found by looking for RTTI Complete Object Locator references
    // In x64, vtable[-1] points to RTTI COL

    for (auto& mod : g_Modules) {
        auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(
            std::chrono::steady_clock::now() - startTime);
        if (elapsed.count() >= MAX_SECONDS_TOTAL) {
            g_Logger.Warning("VTables", "Global watchdog timeout reached, stopping VTable scan");
            break;
        }
        if ((int)g_VTables.size() >= MAX_TOTAL_RESULTS) {
            g_Logger.Warning("VTables", "Reached max result cap, stopping VTable scan");
            break;
        }

        if (!kScanAllModules && !isGameModule(mod.name)) continue;

        uint8_t* base = reinterpret_cast<uint8_t*>(mod.base);
        if (!base) continue;

        size_t scanLimit = mod.size;
        if (scanLimit > MAX_SCAN_BYTES_PER_MODULE) {
            scanLimit = MAX_SCAN_BYTES_PER_MODULE;
            g_Logger.Info("VTables", mod.name + ": Limited scan to 64MB");
        }

        if (scanLimit <= 0x1100) continue;
        int foundInModule = 0;
        for (size_t offset = 0x1000; offset <= (scanLimit - 0x100); offset += 8) {
            if ((offset & 0x7FFFF) == 0) {
                auto innerElapsed = std::chrono::duration_cast<std::chrono::seconds>(
                    std::chrono::steady_clock::now() - startTime);
                if (innerElapsed.count() >= MAX_SECONDS_TOTAL) {
                    g_Logger.Warning("VTables", mod.name + ": watchdog timeout inside module");
                    break;
                }
            }

            if (!IsSafeToRead(base + offset, 0x40)) continue;

            // Check for vtable pattern: sequence of function pointers
            uintptr_t ptr1 = 0;
            uintptr_t ptr2 = 0;
            uintptr_t ptr3 = 0;
            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset), ptr1)) continue;
            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset + 8), ptr2)) continue;
            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset + 16), ptr3)) continue;

            // All pointers should be in executable memory
            if (ptr1 < mod.base || ptr1 > mod.base + mod.size) continue;
            if (ptr2 < mod.base || ptr2 > mod.base + mod.size) continue;
            if (ptr3 < mod.base || ptr3 > mod.base + mod.size) continue;

            // Check previous qword for RTTI pointer
            if (offset >= 8) {
                uintptr_t rttiPtr = 0;
                if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset - 8), rttiPtr)) {
                    continue;
                }
                if (rttiPtr >= mod.base && rttiPtr < mod.base + mod.size) {
                    if (IsSafeToRead((void*)rttiPtr, 0x20)) {
                        const std::string resolvedClassName = TryResolveClassNameFromCol(mod, rttiPtr);
                        if (resolvedClassName.empty()) {
                            continue;
                        }

                        // Count function pointers
                        int funcCount = 0;
                        for (int i = 0; i < 200; i++) {
                            uintptr_t fptr = 0;
                            if (!ReadPtr(reinterpret_cast<uintptr_t>(base + offset + i * 8), fptr)) break;
                            if (fptr < mod.base || fptr > mod.base + mod.size) break;
                            funcCount++;
                        }

                        if (funcCount >= 3) {
                            VTable vt;
                            vt.address = mod.base + offset;
                            vt.functionCount = funcCount;
                            vt.module = mod.name;
                            vt.className = resolvedClassName;
                            g_VTables.push_back(vt);
                            foundInModule++;

                            if ((int)g_VTables.size() >= MAX_TOTAL_RESULTS) {
                                break;
                            }
                        }
                    }
                }
            }
        }
        g_Logger.Info("VTables", mod.name + ": candidates=" + std::to_string(foundInModule));
    }

    // Remove duplicate VTables by address
    std::sort(g_VTables.begin(), g_VTables.end(),
        [](const VTable& a, const VTable& b) {
            if (a.module != b.module) return a.module < b.module;
            return a.address < b.address;
        });
    g_VTables.erase(std::unique(g_VTables.begin(), g_VTables.end(),
        [](const VTable& a, const VTable& b) { return a.address == b.address && a.module == b.module; }), g_VTables.end());

    g_Logger.Success("VTables", "Found " + std::to_string(g_VTables.size()) + " virtual tables");
}

inline void WriteVTablesJson() {
    std::filesystem::create_directories(g_OutputPath + "/vtables");
    std::ofstream out(g_OutputPath + "/vtables/vtables.json");
    if (!out.is_open()) return;

    out << "{\n  \"vtables\": [\n";
    for (size_t i = 0; i < g_VTables.size(); i++) {
        auto& vt = g_VTables[i];
        out << "    {\"class\":\"" << JsonEscape(vt.className) << "\",\"address\":\"0x" << std::hex << vt.address
            << std::dec << "\",\"functions\":" << vt.functionCount << ",\"module\":\"" << JsonEscape(vt.module) << "\"}";
        out << (i < g_VTables.size() - 1 ? "," : "") << "\n";
    }
    out << "  ]\n}\n";
    out.close();
    g_Logger.Success("Output", "vtables/vtables.json written (" + std::to_string(g_VTables.size()) + " vtables)");
}

inline void WriteVTablesHpp() {
    std::filesystem::create_directories(g_OutputPath + "/vtables");
    std::ofstream out(g_OutputPath + "/vtables/vtables.hpp");
    if (!out.is_open()) return;

    out << "// Auto-generated VTable list\n";
    out << "#pragma once\n\n";
    out << "namespace cs2_dumper {\nnamespace vtables {\n";
    for (const auto& vt : g_VTables) {
        out << "constexpr const char* " << MakeCppIdentifier(vt.module + "_" + vt.className)
            << " = \"0x" << std::hex << vt.address << std::dec << "\";\n";
    }
    out << "} // namespace vtables\n} // namespace cs2_dumper\n";
    g_Logger.Success("Output", "vtables/vtables.hpp written");
}

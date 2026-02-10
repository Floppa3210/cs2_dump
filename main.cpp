// ============================================================================
// CS2 DUMPER - Entrypoint only (Multi-TU refactor)
// ============================================================================

#include "include/common.hpp"
#include "include/logger.hpp"
#include "include/core/pipeline.hpp"

static void InitLiveConsole() {
    if (GetConsoleWindow()) return;
    if (!AllocConsole()) return;

    SetConsoleTitleA("CS2 Dumper Live Log");

    FILE* out = nullptr;
    FILE* err = nullptr;
    FILE* in = nullptr;
    freopen_s(&out, "CONOUT$", "w", stdout);
    freopen_s(&err, "CONOUT$", "w", stderr);
    freopen_s(&in, "CONIN$", "r", stdin);

    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode = 0;
    if (hOut != INVALID_HANDLE_VALUE && GetConsoleMode(hOut, &mode)) {
        SetConsoleMode(hOut, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    }
}

DWORD WINAPI DumpThread(LPVOID) {
    InitLiveConsole();
    Sleep(2000); // Allow modules to fully initialize after injection.
    RunDumpPipeline();
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        HANDLE thread = CreateThread(nullptr, 0, DumpThread, nullptr, 0, nullptr);
        if (thread) {
            CloseHandle(thread);
        }
    }
    return TRUE;
}

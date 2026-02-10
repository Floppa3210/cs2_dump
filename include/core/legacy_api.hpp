#pragma once

#include "include/common.hpp"
#include "include/memory.hpp"

// Legacy free-function API used by existing header-only modules.
// This header is a bridge while we migrate modules to DumpContext.

void GetLoadedModules();
ModuleInfo* FindModule(const std::string& name);

uintptr_t PatternScan(uintptr_t base, size_t size, const char* pattern);
uintptr_t ResolveRelativeAddress(uintptr_t address, int offset, int instrSize);

std::string GetCurrentTimestamp();


#pragma once

#include <cstdint>

// Central place for toggles/limits that were historically hardcoded in the pipeline.
// This is intentionally minimal for the first refactor pass to avoid behavior changes.
struct DumpConfig {
    // Output toggles (kept for future pipeline split)
    bool writeJson = true;
    bool writeHpp = true;
    bool writeHtmlDashboard = true;

    // Safety/time budgeting (future use)
    uint32_t maxTotalSeconds = 0; // 0 = legacy behavior / no central limit
};


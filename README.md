# CS2 Dumper

A production-oriented Counter-Strike 2 dumper focused on update resilience, verification, and integration-safe outputs.

## Reliability Guarantees

- Dumps are generated from live process memory at runtime.
- Pattern candidates and static fallbacks are still emitted for coverage, but are explicitly separated from stricter outputs.
- Use trust-tiered outputs:
  - `offsets.json`: full/raw (includes broader candidates).
  - `offsets_safe.json`: excludes low-confidence modules and fallback/candidate names.
  - `offsets_verified.json`: strict subset (semantic-valid + non-candidate + non-low-confidence modules).

## Path Handling (Documents / Documentos / redirected folders)

Output root is resolved via Windows Known Folder API (`FOLDERID_Documents`) instead of hardcoded `C:\\Users\\...\\Documents`.
This supports:

- localized systems (`Documents` / `Documentos`)
- custom profile roots (`C:\\Usuario\\...`, domain profiles, etc.)
- redirected folders (OneDrive / enterprise redirection)
- legacy fallback via `CSIDL_PERSONAL`
- final fallback to `%TEMP%\\CS2_Dump` if user-document resolution is unavailable

## Quick Start

1. Open `cs2_dumper.sln` in Visual Studio 2022.
2. Select `Release | x64`.
3. Build the project.
4. Launch CS2.
5. Inject/run `cs2_dumper.dll`.
6. Review these files first:
   - `CS2_Dump/docs/index.html`
   - `CS2_Dump/meta/risk_report.json`
   - `CS2_Dump/meta/coverage_report.json`
   - `CS2_Dump/output/offsets/offsets.json`

Dashboard note:

- The HTML dashboard is generated from code embedded in the DLL (no external template required at runtime).

## Core Features

- Pattern scanning with fallback candidates and per-pattern diagnostics.
- Immediate extraction support for field displacements from matched instructions.
- Interface discovery via `CreateInterface` export scanning.
- Schema, RTTI, vtable, convar, export, and button dumping pipelines.
- Build-aware archival flow (`CS2_Dump/anteriores/<build>`).
- Reliability telemetry:
  - Structural validation report.
  - Semantic validation report.
  - Module confidence scoring.
  - Fragility and autofix suggestion reports.
  - Stability and regression manifests.
- Integration-focused outputs (`offsets_safe.json`, hot netvars, dashboard).

## Build Instructions

### Visual Studio 2022 (Recommended)

1. Open `cs2_dumper.sln`.
2. Choose `Release | x64`.
3. Build.

### CMake (Optional)

```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

Requirements:

- Windows SDK
- C++17 toolchain
- DirectX 11 libraries (`d3d11`, `dxgi`)

## Cleanup Script (Project Maintenance)

Script: `scripts/clean.ps1`

What it does:

- Default mode (safe): removes only generated build/cmake artifacts inside the repo.
- `-Deep`: additionally removes IDE/intermediate folders (`.vs`, `Release`, `Debug`, `x64`, `bin`).
- `-PurgeRuntimeDump`: also removes dump outputs (`Dump` inside repo + `Documents\\CS2_Dump`).

Examples:

```powershell
# Preview (no deletion), safe mode:
powershell -ExecutionPolicy Bypass -File .\scripts\clean.ps1 -WhatIf

# Real cleanup, safe mode:
powershell -ExecutionPolicy Bypass -File .\scripts\clean.ps1

# Deeper cleanup (still only repo-generated content):
powershell -ExecutionPolicy Bypass -File .\scripts\clean.ps1 -Deep

# Full cleanup including runtime dump outputs:
powershell -ExecutionPolicy Bypass -File .\scripts\clean.ps1 -Deep -PurgeRuntimeDump
```

## Output Layout

Main output root:

- `CS2_Dump/output/` - multi-format generated data.
- `CS2_Dump/meta/` - validation, risk, confidence, and lifecycle reports.
- `CS2_Dump/docs/` - HTML dashboard.
- `CS2_Dump/anteriores/` - archived previous builds.

High-value output files:

- `CS2_Dump/output/offsets/offsets.json`
- `CS2_Dump/output/patterns/patterns.json`
- `CS2_Dump/output/interfaces/interfaces.json`
- `CS2_Dump/output/buttons/buttons.json`
- `CS2_Dump/output/schemas/*.json`
- `CS2_Dump/output/netvars/hotlist.json`
- `CS2_Dump/output/netvars/hotlist.hpp`
- `CS2_Dump/output/integration/offsets_safe.json`
- `CS2_Dump/output/integration/offsets_verified.json`
- `CS2_Dump/meta/output_quality.json`

High-value reports:

- `CS2_Dump/meta/validation_report.json`
- `CS2_Dump/meta/semantic_validation.json`
- `CS2_Dump/meta/schema_semantic_validation.json`
- `CS2_Dump/meta/module_confidence.json`
- `CS2_Dump/meta/coverage_report.json`
- `CS2_Dump/meta/fragile_patterns.json`
- `CS2_Dump/meta/pattern_autofix_suggestions.json`
- `CS2_Dump/meta/build_diff.json`
- `CS2_Dump/meta/risk_report.json`
- `CS2_Dump/meta/regression_tests.json`
- `CS2_Dump/meta/offset_stability.json`
- `CS2_Dump/meta/build_timeline.json`
- `CS2_Dump/anteriores/history_index.json`

Dashboard:

- `CS2_Dump/docs/index.html`
- Includes KPIs + risk level + module confidence table + fragile patterns + core offset coverage.

## Post-Update Validation Checklist

Use this order after every CS2 update:

1. Check `CS2_Dump/meta/risk_report.json`.
   - If `risk_level` is `high`, do not trust integration outputs yet.
2. Check `CS2_Dump/meta/coverage_report.json`.
   - Confirm core offsets are resolved.
3. Check `CS2_Dump/meta/module_confidence.json`.
   - Investigate low-tier modules first.
4. Check `CS2_Dump/meta/fragile_patterns.json`.
   - Prioritize top fragility-score entries.
5. Check `CS2_Dump/output/offsets/offsets.json`.
   - Verify critical offsets (entity list, view matrix, network client, etc.).
6. Optional deeper checks:
   - `CS2_Dump/meta/build_diff.json` for change impact.
   - `CS2_Dump/meta/pattern_autofix_suggestions.json` for signature triage.

## Troubleshooting

### CMakeCache path mismatch

Symptom:

- CMake reports that `CMakeCache.txt` was created in a different directory.

Fix:

1. Delete `build/CMakeCache.txt` (or remove the whole `build/` directory).
2. Reconfigure and rebuild.

### Visual Studio generator/toolchain not found

Symptom:

- CMake cannot find `Visual Studio 17 2022` or C/C++ compiler.

Fix:

1. Install Visual Studio 2022.
2. Install the "Desktop development with C++" workload.
3. Ensure Windows SDK is installed.
4. Re-run CMake configuration.

### Slow scans and watchdog warnings

What it means:

- Some modules are intentionally cut short by watchdog limits to keep runtime bounded.
- This can reduce candidate counts for that phase but does not necessarily invalidate the full dump.

What to do:

1. Check `CS2_Dump/meta/risk_report.json` and `CS2_Dump/meta/module_confidence.json`.
2. If risk/confidence is acceptable, continue.
3. If not, investigate affected module reports first.

### Missing or duplicated pattern logs

What it means:

- Missing pattern: signature did not match in current build.
- Duplicated pattern: multiple signatures resolve same name; best candidate is retained.

What to do:

1. Check `CS2_Dump/meta/fragile_patterns.json`.
2. Check `CS2_Dump/meta/pattern_autofix_suggestions.json`.
3. Confirm final resolved offsets in `CS2_Dump/output/offsets/offsets.json`.

## Build Change and Archive Behavior

- Previous dump content is staged before writing a new dump.
- If build changes, previous dump is archived under `CS2_Dump/anteriores/<old_build>`.
- If build is unchanged, output is overwritten and a warning is logged.
- History/timeline metadata is refreshed on each run.

## Notes for Integrators

- Prefer `CS2_Dump/output/integration/offsets_safe.json` for production consumption.
- Prefer `CS2_Dump/output/integration/offsets_verified.json` when you want strict-only values.
- Gate automated usage with `CS2_Dump/meta/risk_report.json`.
- Also inspect `CS2_Dump/meta/output_quality.json` to quantify candidate vs verified coverage.
- Treat field offsets and absolute addresses as different concepts:
  - Field offset example: `dwGameEntitySystem_highestEntityIndex`
  - Absolute address example: `dwGameEntitySystem_highestEntityIndex_absolute`
- Revalidate consumers whenever `risk_level` is not `low`.

## Public Interfaces and Compatibility

- No public API changes are introduced by this documentation update.
- Output/report naming in this README matches the current dumper pipeline.

## License

MIT License. See `LICENSE`.

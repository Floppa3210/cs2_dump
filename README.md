# CS2 Dumper

A production-oriented Counter-Strike 2 dumper focused on update resilience, verification, and integration-safe outputs.

## Quick Start

1. Open `cs2_dumper.sln` in Visual Studio 2022.
2. Select `Release | x64`.
3. Build the project.
4. Launch CS2.
5. Inject/run `cs2_dumper.dll`.
6. Review these files first:
   - `Dump/docs/index.html`
   - `Dump/meta/risk_report.json`
   - `Dump/meta/coverage_report.json`
   - `Dump/output/offsets/offsets.json`

## Core Features

- Pattern scanning with fallback candidates and per-pattern diagnostics.
- Immediate extraction support for field displacements from matched instructions.
- Interface discovery via `CreateInterface` export scanning.
- Schema, RTTI, vtable, convar, export, and button dumping pipelines.
- Build-aware archival flow (`Dump/anteriores/<build>`).
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

## Output Layout

Main output root:

- `Dump/output/` - multi-format generated data.
- `Dump/meta/` - validation, risk, confidence, and lifecycle reports.
- `Dump/docs/` - HTML dashboard.
- `Dump/anteriores/` - archived previous builds.

High-value output files:

- `Dump/output/offsets/offsets.json`
- `Dump/output/patterns/patterns.json`
- `Dump/output/interfaces/interfaces.json`
- `Dump/output/buttons/buttons.json`
- `Dump/output/schemas/*.json`
- `Dump/output/netvars/hotlist.json`
- `Dump/output/netvars/hotlist.hpp`
- `Dump/output/integration/offsets_safe.json`

High-value reports:

- `Dump/meta/validation_report.json`
- `Dump/meta/semantic_validation.json`
- `Dump/meta/schema_semantic_validation.json`
- `Dump/meta/module_confidence.json`
- `Dump/meta/coverage_report.json`
- `Dump/meta/fragile_patterns.json`
- `Dump/meta/pattern_autofix_suggestions.json`
- `Dump/meta/build_diff.json`
- `Dump/meta/risk_report.json`
- `Dump/meta/regression_tests.json`
- `Dump/meta/offset_stability.json`
- `Dump/meta/build_timeline.json`
- `Dump/anteriores/history_index.json`

Dashboard:

- `Dump/docs/index.html`

## Post-Update Validation Checklist

Use this order after every CS2 update:

1. Check `Dump/meta/risk_report.json`.
   - If `risk_level` is `high`, do not trust integration outputs yet.
2. Check `Dump/meta/coverage_report.json`.
   - Confirm core offsets are resolved.
3. Check `Dump/meta/module_confidence.json`.
   - Investigate low-tier modules first.
4. Check `Dump/meta/fragile_patterns.json`.
   - Prioritize top fragility-score entries.
5. Check `Dump/output/offsets/offsets.json`.
   - Verify critical offsets (entity list, view matrix, network client, etc.).
6. Optional deeper checks:
   - `Dump/meta/build_diff.json` for change impact.
   - `Dump/meta/pattern_autofix_suggestions.json` for signature triage.

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

1. Check `Dump/meta/risk_report.json` and `Dump/meta/module_confidence.json`.
2. If risk/confidence is acceptable, continue.
3. If not, investigate affected module reports first.

### Missing or duplicated pattern logs

What it means:

- Missing pattern: signature did not match in current build.
- Duplicated pattern: multiple signatures resolve same name; best candidate is retained.

What to do:

1. Check `Dump/meta/fragile_patterns.json`.
2. Check `Dump/meta/pattern_autofix_suggestions.json`.
3. Confirm final resolved offsets in `Dump/output/offsets/offsets.json`.

## Build Change and Archive Behavior

- Previous dump content is staged before writing a new dump.
- If build changes, previous dump is archived under `Dump/anteriores/<old_build>`.
- If build is unchanged, output is overwritten and a warning is logged.
- History/timeline metadata is refreshed on each run.

## Notes for Integrators

- Prefer `Dump/output/integration/offsets_safe.json` for production consumption.
- Gate automated usage with `Dump/meta/risk_report.json`.
- Treat field offsets and absolute addresses as different concepts:
  - Field offset example: `dwGameEntitySystem_highestEntityIndex`
  - Absolute address example: `dwGameEntitySystem_highestEntityIndex_absolute`
- Revalidate consumers whenever `risk_level` is not `low`.

## Public Interfaces and Compatibility

- No public API changes are introduced by this documentation update.
- Output/report naming in this README matches the current dumper pipeline.

## License

MIT License. See `LICENSE`.

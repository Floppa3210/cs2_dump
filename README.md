# CS2 Dumper

Professional CS2 SDK dumper with modular architecture, safe memory reads, and comprehensive outputs.

## Features

- **Schema Dump**: Extracts Source 2 schema information (classes, enums, fields)
- **RTTI Dump**: Runtime type information extraction
- **VTable Dump**: Virtual function table analysis
- **ConVar Dump**: Console variable enumeration
- **Interface Dump**: Game interface discovery
- **Pattern Scanning**: Advanced signature-based memory scanning
- **Button Dump**: Game input definitions
- **Export Dump**: Module export enumeration

## Architecture

The dumper is organized into modular components:

```
cs2_dumper/
├── include/           # Header-only module implementations
│   ├── common.hpp     # Shared definitions and macros
│   ├── logger.hpp     # Logging utilities
│   ├── memory.hpp     # Safe memory reading primitives
│   ├── pattern_scanner.hpp  # Pattern/signature scanning
│   ├── schema_tools.hpp     # Schema analysis utilities
│   ├── output_dump.hpp      # Output formatting
│   └── ...            # Additional dump modules
├── main.cpp           # Entry point and orchestration
├── schemas.hpp        # Schema definitions
├── schema_dump.hpp    # Schema dumping implementation
├── schema_export.hpp  # Schema export formatting
└── schema_stubs.hpp   # Schema stub definitions
```

## Build Instructions

### Visual Studio

1. Open `cs2_dumper.sln` in Visual Studio 2022 or later
2. Select Release/x64 configuration
3. Build the solution

### CMake

```bash
mkdir build && cd build
cmake ..
cmake --build . --config Release
```

**Requirements:**
- Windows SDK
- DirectX 11 (d3d11, dxgi)
- C++17 compatible compiler

## Usage

1. Launch CS2
2. Run the dumper as DLL or standalone executable
3. Output files are generated in the `Dump/` directory:
   - `schema.json` - Schema definitions
   - `interfaces.json` - Game interfaces
   - `buttons.json` - Input definitions
   - `convars.json` - Console variables
   - Additional dump outputs as configured

## Credits

- Pattern base: [a2x/cs2-dumper](https://github.com/a2x/cs2-dumper)
- Enhanced with improved stability and logging

## License

MIT License - See LICENSE file for details

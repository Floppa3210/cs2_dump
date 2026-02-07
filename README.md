# CS2 Ultimate Dumper

🔧 **Professional CS2 SDK dumper with modular architecture, safe memory reads, and comprehensive outputs.**

---

## 📋 Overview

CS2 Ultimate Dumper is a robust, modular C++ application designed to extract comprehensive game data from Counter-Strike 2. Built with safety and stability as priorities, it provides clean, organized outputs in multiple formats suitable for SDK development, research, and modding.

### ✨ Key Features

- **🔒 Safe Memory Access**: All memory reads protected with SEH exception handling
- **🧩 Modular Architecture**: Clean separation of concerns with dedicated modules
- **📊 Comprehensive Data Extraction**:
  - Pattern-based offsets
  - Schema system classes and fields
  - RTTI information
  - VTables and function pointers
  - ConVars (console variables)
  - Interface exports
  - Button mappings
- **📁 Professional Output Structure**: Organized JSON/HPP files in a2x-style folders
- **📝 Extensive Logging**: Thread-safe logging with timestamps and statistics
- **🔗 Data Correlation**: Links RTTI, schemas, and VTables for complete context
- **🎯 Component Detection**: Automatic entity-component relationship analysis

---

## 🏗️ Architecture

### Modular Design

```
cs2_dumper/
├── main.cpp                 # Orchestration and globals
├── include/
│   ├── common.hpp          # Core utilities
│   ├── logger.hpp          # Thread-safe logging
│   ├── memory.hpp          # Safe memory operations
│   ├── pattern_scanner.hpp # Pattern matching engine
│   ├── dump_data.hpp       # Shared data structures
│   ├── patterns_dump.hpp   # Pattern scanning
│   ├── buttons_dump.hpp    # Button extraction
│   ├── interfaces_dump.hpp # Interface dumping
│   ├── exports_dump.hpp    # Export scanning
│   ├── rtti_dump.hpp       # RTTI analysis
│   ├── convar_dump.hpp     # ConVar extraction
│   ├── vtable_dump.hpp     # VTable analysis
│   ├── schema_tools.hpp    # Schema utilities
│   └── output_dump.hpp     # Output generation
├── schemas.hpp             # Schema structures
├── schema_dump.hpp         # Schema extraction
└── schema_export.hpp      # Schema JSON export
```

### Safety Features

- **SEH Protection**: All memory reads wrapped in structured exception handling
- **Pointer Validation**: Comprehensive address validation before dereferencing
- **Watchdog Limits**: Timeouts and iteration limits to prevent hangs
- **Whitelist Scanning**: Only trusted modules processed for stability

---

## 🚀 Getting Started

### Prerequisites

- **Windows 10/11** (x64)
- **Visual Studio 2019+** or **CMake 3.16+**
- **Counter-Strike 2** running
- **Administrator privileges** (for process access)

### Building

#### Using Visual Studio

1. Open `cs2_dumper.sln`
2. Build in **Release x64** configuration
3. Run `cs2_dumper.exe` while CS2 is active

#### Using CMake

```bash
git clone https://github.com/Floppa3210/cs2_dumper.git
cd cs2_dumper
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --config Release
```

### Usage

1. **Start Counter-Strike 2**
2. **Run the dumper** (requires admin privileges)
3. **Check results** in `%USERPROFILE%\Documents\CS2_Dump\`

---

## 📁 Output Structure

The dumper creates a comprehensive, organized output structure:

```
%USERPROFILE%\Documents\CS2_Dump\
├── patterns/           # Pattern-based offsets (HPP/JSON)
├── offsets/           # Calculated offsets
├── interfaces/        # Interface exports
├── schemas/          # Schema system data
├── rtti/             # RTTI class information
├── convars/          # Console variables
├── vtables/          # VTable analysis
├── sdk/              # Generated C++ SDK
├── docs/             # HTML documentation
├── logs/             # Detailed operation logs
└── meta/             # Metadata and summaries
```

### Key Output Files

- **`patterns/client.hpp`** - Client offsets in C++ format
- **`schemas/classes.json`** - Complete schema system data
- **`rtti/classes.json`** - RTTI hierarchy and information
- **`sdk/cs2_sdk.hpp`** - Ready-to-use C++ SDK
- **`docs/index.html`** - Interactive documentation
- **`logs/dump_log.txt`** - Detailed operation log

---

## 🔧 Configuration

### Pattern Definitions

Patterns are defined in `include/patterns.hpp`:

```cpp
constexpr PatternDefinition g_ClientPatterns[] = {
    {
        "dwEntityList",
        "48 8B 0D ? ? ? ? 48 8B 14 C9 EB 07",
        3, 7,
        "Pointer to entity list"
    },
    // ... more patterns
};
```

### Module Whitelisting

Schema extraction uses a whitelist for stability:

```cpp
std::set<std::string> allowedScopes = {
    "engine2.dll",
    "animationsystem.dll", 
    "pulse_system.dll",
    "worldrenderer.dll"
};
```

---

## 🛠️ Development

### Adding New Dump Modules

1. **Create header** in `include/` following naming convention
2. **Implement functions** with safe memory access
3. **Add to main.cpp** orchestration
4. **Update build files** (CMakeLists.txt/vcxproj)

### Safe Memory Access Pattern

```cpp
// Always use safe reads
uintptr_t somePtr = 0;
if (ReadPtr(address, somePtr)) {
    // Process safely
} else {
    g_Logger.Warning("Module", "Failed to read pointer");
}
```

### Logging Guidelines

```cpp
g_Logger.Info("Category", "Informational message");
g_Logger.Success("Category", "Successful operation");
g_Logger.Warning("Category", "Non-critical issue");
g_Logger.Error("Category", "Critical error");
```

---

## 📊 Data Sources

The dumper extracts data from multiple sources:

| Source | Data Type | Output Format |
|--------|-----------|---------------|
| Pattern Scanning | Game Offsets | HPP/JSON |
| Schema System | Classes/Fields | JSON/HPP |
| RTTI | Type Information | JSON |
| VTables | Function Pointers | JSON |
| ConVars | Console Variables | JSON |
| Exports | Module Exports | JSON |
| Interfaces | Versioned Interfaces | JSON |

---

## 🔄 Version Compatibility

- **CS2 Latest** - Primary target
- **Legacy Support** - Backward compatible patterns
- **Auto-Detection** - Automatic version identification

---

## 🐛 Troubleshooting

### Common Issues

1. **Access Denied**
   - Run as Administrator
   - Ensure CS2 is running

2. **Pattern Not Found**
   - Game updated - patterns need updating
   - Check `logs/dump_log.txt` for details

3. **Schema Extraction Fails**
   - Verify `schemasystem.dll` is loaded
   - Check whitelist in `schema_dump.hpp`

4. **Output Empty**
   - Verify write permissions to Documents folder
   - Check logs for errors

### Debug Mode

Compile with `DEBUG` flag for verbose output:

```bash
cmake .. -DCMAKE_BUILD_TYPE=Debug -DDEBUG=ON
```

---

## 🤝 Contributing

Contributions are welcome! Please follow these guidelines:

1. **Code Style** - Follow existing formatting
2. **Safety First** - Always use safe memory access
3. **Documentation** - Update README and comments
4. **Testing** - Test with latest CS2 version
5. **Pull Requests** - Describe changes clearly

### Development Setup

```bash
git clone https://github.com/Floppa3210/cs2_dumper.git
cd cs2_dumper
# Create feature branch
git checkout -b feature/your-feature
# Make changes
git commit -m "Add your feature"
git push origin feature/your-feature
# Create Pull Request
```

---

## 📄 License

This project is provided for educational and research purposes. Please ensure compliance with:

- Game terms of service
- Local laws and regulations
- Ethical usage guidelines

---

## 🙏 Acknowledgments

- **[a2x/cs2-dumper](https://github.com/a2x/cs2-dumper)** - Original patterns and inspiration
- **Source 2 Community** - Documentation and insights
- **CS2 Modding Community** - Feedback and testing

---

## 📞 Support

- **Issues**: [GitHub Issues](https://github.com/Floppa3210/cs2_dumper/issues)
- **Discussions**: [GitHub Discussions](https://github.com/Floppa3210/cs2_dumper/discussions)
- **Updates**: Follow repository for latest changes

---

> **⚠️ Disclaimer**: This tool is for educational and research purposes only. Users are responsible for ensuring compliance with applicable terms of service and laws.

---

**Made with ❤️ by [Floppa](https://github.com/Floppa3210)**

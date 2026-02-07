cmake_minimum_required(VERSION 3.15)
project(CS2Dumper)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create DLL
add_library(cs2_dumper SHARED
    main.cpp
    include/common.hpp
    include/logger.hpp
    include/memory.hpp
    include/pattern_scanner.hpp
    include/patterns.hpp
    include/dump_data.hpp
    include/patterns_dump.hpp
    include/buttons_dump.hpp
    include/interfaces_dump.hpp
    include/output_dump.hpp
    include/exports_dump.hpp
    include/rtti_dump.hpp
    include/convar_dump.hpp
    include/vtable_dump.hpp
    include/schema_tools.hpp
    schemas.hpp
    schema_export.hpp
    schema_dump.hpp
)

target_include_directories(cs2_dumper PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link required libraries
target_link_libraries(cs2_dumper PRIVATE d3d11 dxgi)

# Set output name
set_target_properties(cs2_dumper PROPERTIES
    OUTPUT_NAME "cs2_dumper"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

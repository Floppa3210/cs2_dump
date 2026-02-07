#pragma once
#include "schemas.hpp"

// Stub declarations for old schema functions that are called but now disabled
// These prevent compilation errors without implementing the full old functionality

struct SchemaEnum {
    std::string name;
    std::string module;
    uint8_t size;
    std::vector<std::pair<std::string, int64_t>> members;
};

// Empty global for compatibility
std::map<std::string, std::vector<SchemaEnum>> g_SchemaEnums;

// Stub functions - these do nothing but prevent link errors
inline void BuildSchemaIndex() {}
inline void LinkRTTIToSchemas() {}
inline void FlattenInheritance() {}
inline void DetectComponents() {}
inline std::string ClassifyField(const SchemaField& f) { return ""; }  // Returns string, takes SchemaField
inline void WriteComponentGraphJson() {}
// GenerateSDK is NOT commented out in main.cpp, so don't define it here
inline std::string ResolveComplexType(const std::string& t) { return t; }
inline std::string GetCppType(const std::string& t) { return t; }  // Type conversion stub
inline void WriteAllSchemas() {}  // Write all schemas stub



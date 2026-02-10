#pragma once
#include <string>
#include <vector>
#include <map>

// ============================================================================
// SCHEMA SYSTEM - Complete implementation with validation (E1-E5)
// ============================================================================

// E3: Field size deduction
inline int DeduceFieldSize(const std::string& type) {
    if (type.find("int32") != std::string::npos) return 4;
    if (type.find("int64") != std::string::npos) return 8;
    if (type.find("int16") != std::string::npos) return 2;
    if (type.find("int8") != std::string::npos) return 1;
    if (type.find("uint32") != std::string::npos) return 4;
    if (type.find("uint64") != std::string::npos) return 8;
    if (type.find("float") != std::string::npos) return 4;
    if (type.find("double") != std::string::npos) return 8;
    if (type.find("bool") != std::string::npos) return 1;
    if (type.find("Vector") != std::string::npos) return 12; // 3 floats
    if (type.find("QAngle") != std::string::npos) return 12;
    if (type.find("*") != std::string::npos) return 8; // pointer
    return 4; // default
}

struct SchemaField {
    std::string name;
    std::string type;
    int offset;
    int size;  // E3: Real size, not assumed
    std::vector<std::string> flags;  // NET, PRED, etc
    
    // Compatibility with old code
    bool isNetworked = false;
    bool isPredicted = false;
    bool isReadOnly = false;
    bool isTransient = false;
};

struct SchemaClass {
    std::string name;
    std::string module;
    int size;
    int alignOf;
    std::string parent;
    std::vector<SchemaField> fields;
    
    // E1: Validation results (internal only, not in JSON)
    bool isValid;
    std::vector<std::string> validationIssues;
    
    // Compatibility with old code
    std::string parentClass;  // alias for parent
    bool hasBaseClass = false;
    std::vector<std::string> allFields;
};

struct SchemaEnum {
    std::string name;
    std::string module;
    uint8_t size;
    std::vector<std::pair<std::string, int64_t>> members;
};

// E1: Schema validation
inline bool ValidateSchemaClass(SchemaClass& cls) {
    cls.isValid = true;
    cls.validationIssues.clear();
    
    // Check 1: Size must be positive
    if (cls.size <= 0) {
        cls.isValid = false;
        cls.validationIssues.push_back("Invalid size: " + std::to_string(cls.size));
        return false;
    }
    
    // Check 2: All field offsets must be within class size
    for (auto& field : cls.fields) {
        if (field.offset < 0 || field.offset >= cls.size) {
            cls.isValid = false;
            cls.validationIssues.push_back(field.name + ": offset out of bounds");
        }
        
        // Check 3: Field end must not exceed class size
        if (field.offset + field.size > cls.size) {
            cls.isValid = false;
            cls.validationIssues.push_back(field.name + ": extends beyond class size");
        }
        
        // Check 4: Alignment check (warning only, not fatal)
        if (cls.alignOf > 0 && field.offset % cls.alignOf != 0) {
            cls.validationIssues.push_back(field.name + ": misaligned offset");
        }
    }
    
    // Check 5: Fields should be monotonic (not strictly required but good hygiene)
    for (size_t i = 1; i < cls.fields.size(); i++) {
        if (cls.fields[i].offset < cls.fields[i-1].offset) {
            // Just warning, not fatal
            cls.validationIssues.push_back("Non-monotonic field order");
            break;
        }
    }
    
    return cls.isValid;
}

// Global storage
// NOTE: These are `inline` to be ODR-safe across multiple translation units.
// They will be removed once SchemaStore lives exclusively inside DumpContext.
inline std::map<std::string, std::vector<SchemaClass>> g_SchemaClasses;
inline std::map<std::string, std::vector<SchemaEnum>> g_SchemaEnums;
inline std::map<std::string, SchemaClass*> g_SchemaClassIndex;

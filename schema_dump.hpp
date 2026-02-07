#pragma once
#include "schemas.hpp"
#include <Windows.h>

// ============================================================================
// SCHEMA EXTRACTION - Safe implementation with all limits
// ============================================================================

// Schema System Type Scope offsets (from a2x source)
constexpr int SCHEMA_SYSTEM_TYPE_SCOPES_OFFSET = 0x188;
constexpr int SCHEMA_TYPE_SCOPE_NAME_OFFSET = 0x8;
constexpr int SCHEMA_TYPE_SCOPE_CLASSES_OFFSET = 0x500;

// Schema Class Field Data offsets
constexpr int SCHEMA_CLASS_NAME_OFFSET = 0x8;
constexpr int SCHEMA_CLASS_MODULE_OFFSET = 0x10;
constexpr int SCHEMA_CLASS_SIZE_OFFSET = 0x18;
constexpr int SCHEMA_CLASS_FIELD_COUNT_OFFSET = 0x1C;
constexpr int SCHEMA_CLASS_FIELDS_OFFSET = 0x28;
constexpr int SCHEMA_CLASS_ALIGN_OFFSET = 0x2C;
constexpr int SCHEMA_CLASS_PARENT_OFFSET = 0x38;

// Schema Field offsets
constexpr int SCHEMA_FIELD_NAME_OFFSET = 0x0;
constexpr int SCHEMA_FIELD_TYPE_OFFSET = 0x8;
constexpr int SCHEMA_FIELD_OFFSET_OFFSET = 0x10;

extern bool IsSafeToRead(const void* ptr, size_t size);
extern std::string SafeReadCString(const char* ptr, size_t maxLen);
extern uintptr_t PatternScan(uintptr_t base, size_t size, const char* pattern);

inline void DumpSchemas(uintptr_t moduleBase, size_t moduleSize) {
    // Safety: Whitelist only these scopes (known to work)
    std::set<std::string> allowedScopes = {
        "engine2.dll",
        "animationsystem.dll",
        "pulse_system.dll",
        "worldrenderer.dll"
    };
    
    // Find SchemaSystem using pattern
    uintptr_t schemaPattern = PatternScan(moduleBase, moduleSize, "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 0D ? ? ? ? E8");
    if (!schemaPattern) return;
    
    // Resolve RIP-relative
    int32_t offset = *reinterpret_cast<int32_t*>(schemaPattern + 3);
    uintptr_t schemaSystem = schemaPattern + 7 + offset;
    
    if (!IsSafeToRead((void*)schemaSystem, 0x200)) return;
    
    // Get type scopes
    uintptr_t typeScopes = schemaSystem + SCHEMA_SYSTEM_TYPE_SCOPES_OFFSET;
    if (!IsSafeToRead((void*)typeScopes, 0x10)) return;
    
    int32_t scopeCount = *reinterpret_cast<int32_t*>(typeScopes + 0x8);
    uintptr_t scopeData = *reinterpret_cast<uintptr_t*>(typeScopes);
    
    if (scopeCount <= 0 || scopeCount > 50) return;
    if (!IsSafeToRead((void*)scopeData, scopeCount * 8)) return;
    
    // Process each scope
    for (int s = 0; s < scopeCount; s++) {
        uintptr_t pScope = *reinterpret_cast<uintptr_t*>(scopeData + s * 8);
        if (!IsSafeToRead((void*)pScope, 0x600)) continue;
        
        std::string scopeName = SafeReadCString(reinterpret_cast<const char*>(pScope + SCHEMA_TYPE_SCOPE_NAME_OFFSET), 64);
        if (scopeName.empty()) continue;
        
        // Whitelist check
        if (!allowedScopes.count(scopeName)) continue;
        
        std::vector<SchemaClass> classes;
        
        // Get class bindings
        uintptr_t classBindings = pScope + SCHEMA_TYPE_SCOPE_CLASSES_OFFSET;
        if (!IsSafeToRead((void*)(classBindings + 0x80), 256 * 0x18)) continue;
        
        // Iterate hash buckets (256 buckets)
        uintptr_t buckets = classBindings + 0x80;
        const int MAX_CLASSES = 500;
        int classCount = 0;
        
        for (int b = 0; b < 256 && classCount < MAX_CLASSES; b++) {
            uintptr_t bucket = buckets + b * 0x18;
            if (!IsSafeToRead((void*)bucket, 0x18)) continue;
            
            uintptr_t node = *reinterpret_cast<uintptr_t*>(bucket + 0x10);
            int chainLen = 0;
            
            while (node && chainLen < 50 && classCount < MAX_CLASSES) {
                if (!IsSafeToRead((void*)node, 0x20)) break;
                
                uintptr_t classInfo = *reinterpret_cast<uintptr_t*>(node + 0x10);
                uintptr_t nextNode = *reinterpret_cast<uintptr_t*>(node + 0x8);
                
                if (classInfo && IsSafeToRead((void*)classInfo, 0x50)) {
                    SchemaClass cls;
                    cls.module = scopeName;
                    
                    uintptr_t namePtr = *reinterpret_cast<uintptr_t*>(classInfo + SCHEMA_CLASS_NAME_OFFSET);
                    cls.name = SafeReadCString(reinterpret_cast<const char*>(namePtr), 128);
                    
                    if (!cls.name.empty() && cls.name.length() > 2) {
                        cls.size = *reinterpret_cast<int32_t*>(classInfo + SCHEMA_CLASS_SIZE_OFFSET);
                        cls.alignOf = *reinterpret_cast<uint8_t*>(classInfo + SCHEMA_CLASS_ALIGN_OFFSET);
                        
                        int16_t fieldCount = *reinterpret_cast<int16_t*>(classInfo + SCHEMA_CLASS_FIELD_COUNT_OFFSET);
                        uintptr_t fieldsPtr = *reinterpret_cast<uintptr_t*>(classInfo + SCHEMA_CLASS_FIELDS_OFFSET);
                        
                        if (fieldCount > 0 && fieldCount < 500 && fieldsPtr) {
                            for (int f = 0; f < fieldCount; f++) {
                                uintptr_t fieldAddr = fieldsPtr + f * 0x20;
                                if (!IsSafeToRead((void*)fieldAddr, 0x20)) continue;
                                
                                SchemaField field;
                                uintptr_t fieldNamePtr = *reinterpret_cast<uintptr_t*>(fieldAddr + SCHEMA_FIELD_NAME_OFFSET);
                                field.name = SafeReadCString(reinterpret_cast<const char*>(fieldNamePtr), 128);
                                
                                if (field.name.empty()) continue;
                                
                                uintptr_t typePtr = *reinterpret_cast<uintptr_t*>(fieldAddr + SCHEMA_FIELD_TYPE_OFFSET);
                                if (typePtr && IsSafeToRead((void*)typePtr, 16)) {
                                    uintptr_t typeNamePtr = *reinterpret_cast<uintptr_t*>(typePtr + 0x8);
                                    field.type = SafeReadCString(reinterpret_cast<const char*>(typeNamePtr), 64);
                                } else {
                                    field.type = "unknown";
                                }
                                
                                field.offset = *reinterpret_cast<int32_t*>(fieldAddr + SCHEMA_FIELD_OFFSET_OFFSET);
                                field.size = DeduceFieldSize(field.type);  // E3
                                
                                cls.fields.push_back(field);
                            }
                        }
                        
                        // E1: Validate before adding
                        if (ValidateSchemaClass(cls)) {
                            classes.push_back(cls);
                            classCount++;
                        }
                    }
                }
                
                if (nextNode == node) break; // Circular protection
                node = nextNode;
                chainLen++;
            }
        }
        
        if (!classes.empty()) {
            g_SchemaClasses[scopeName] = classes;
        }
    }
}

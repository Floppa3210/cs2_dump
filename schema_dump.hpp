#pragma once
#include "schemas.hpp"
#include <Windows.h>
#include <algorithm>
#include <cctype>
#include "include/logger.hpp"
#include "include/memory.hpp"

// ============================================================================
// SCHEMA EXTRACTION - Safe implementation with all limits
// ============================================================================

// Schema System Type Scope offsets (from current a2x layout)
constexpr int SCHEMA_SYSTEM_TYPE_SCOPES_OFFSET = 0x190;
constexpr int SCHEMA_TYPE_SCOPE_NAME_OFFSET = 0x8;
constexpr int SCHEMA_TYPE_SCOPE_CLASSES_OFFSET = 0x560;
constexpr int SCHEMA_TYPE_SCOPE_ENUMS_OFFSET = 0x1DD0;

// Schema Class Field Data offsets
constexpr int SCHEMA_CLASS_NAME_OFFSET = 0x8;
constexpr int SCHEMA_CLASS_MODULE_OFFSET = 0x10;
constexpr int SCHEMA_CLASS_SIZE_OFFSET = 0x18;
constexpr int SCHEMA_CLASS_FIELD_COUNT_OFFSET = 0x1C;
constexpr int SCHEMA_CLASS_FIELDS_OFFSET = 0x28;
constexpr int SCHEMA_CLASS_ALIGN_OFFSET = 0x22;
constexpr int SCHEMA_CLASS_PARENT_OFFSET = 0x38;

// Schema Field offsets
constexpr int SCHEMA_FIELD_NAME_OFFSET = 0x0;
constexpr int SCHEMA_FIELD_TYPE_OFFSET = 0x8;
constexpr int SCHEMA_FIELD_OFFSET_OFFSET = 0x10;
constexpr int SCHEMA_ENUM_NAME_OFFSET = 0x8;
constexpr int SCHEMA_ENUM_COUNT_OFFSET = 0x1C;
constexpr int SCHEMA_ENUM_VALUES_OFFSET = 0x20;
constexpr int SCHEMA_ENUMERATOR_NAME_OFFSET = 0x0;
constexpr int SCHEMA_ENUMERATOR_VALUE_OFFSET = 0x8;

extern bool IsSafeToRead(const void* ptr, size_t size);
extern std::string SafeReadCString(const char* ptr, size_t maxLen);
extern uintptr_t PatternScan(uintptr_t base, size_t size, const char* pattern);

inline void DumpSchemas(uintptr_t moduleBase, size_t moduleSize) {
    g_Logger.Info("Schemas", "DumpSchemas starting...");
    auto IsLikelyTypeName = [](const std::string& name) -> bool {
        if (name.size() < 2 || name.size() > 128) return false;
        if (name.find(' ') != std::string::npos) return false;
        if (!(std::isalpha(static_cast<unsigned char>(name[0])) || name[0] == '_' || name[0] == 'C' || name[0] == 'I')) {
            return false;
        }
        for (char ch : name) {
            const unsigned char c = static_cast<unsigned char>(ch);
            if (!(std::isalnum(c) || ch == '_' || ch == ':' || ch == '<' || ch == '>' || ch == ',')) {
                return false;
            }
        }
        return true;
    };

    // Find SchemaSystem using current a2x-like pattern first, then fallbacks
    const char* schemaPatterns[] = {
        "4C 8D 35 ? ? ? ? 0F 28 45",
        "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 0D ? ? ? ? E8",
        "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 05 ? ? ? ? 48 89 44 24",
        "48 8D 0D ? ? ? ? E8 ? ? ? ? 4C 8D 05 ? ? ? ? 48 8B D3"
    };

    uintptr_t schemaPattern = 0;
    for (const char* pat : schemaPatterns) {
        schemaPattern = PatternScan(moduleBase, moduleSize, pat);
        if (schemaPattern) {
            g_Logger.Info("Schemas", std::string("Matched schema pattern: ") + pat);
            break;
        }
    }

    if (!schemaPattern) {
        g_Logger.Warning("Schemas", "SchemaSystem pattern not found");
        return;
    }
    
    // Resolve RIP-relative (LEA reg, [RIP+imm32])
    int32_t ripOffset = 0;
    if (!ReadInt32(schemaPattern + 3, ripOffset)) {
        g_Logger.Warning("Schemas", "Failed to read schema RIP offset");
        return;
    }
    uintptr_t schemaSystem = schemaPattern + 7 + static_cast<int64_t>(ripOffset);

    if (!IsSafeToRead((void*)schemaSystem, 0x200)) {
        g_Logger.Warning("Schemas", "SchemaSystem address is not readable");
        return;
    }

    int32_t registrationCount = 0;
    if (!ReadInt32(schemaSystem + 0x280, registrationCount) || registrationCount <= 0) {
        uintptr_t indirect = 0;
        if (ReadPtr(schemaSystem, indirect) && IsSafeToRead((void*)indirect, 0x300) &&
            ReadInt32(indirect + 0x280, registrationCount) && registrationCount > 0) {
            schemaSystem = indirect;
        }
    }
    g_Logger.Info("Schemas", "Schema registration count: " + std::to_string(registrationCount));
    
    // Get type scopes
    uintptr_t typeScopes = schemaSystem + SCHEMA_SYSTEM_TYPE_SCOPES_OFFSET;
    if (!IsSafeToRead((void*)typeScopes, 0x10)) {
        g_Logger.Warning("Schemas", "Type scopes container is not readable");
        return;
    }
    
    int32_t scopeCount = 0;
    uintptr_t scopeData = 0;
    if (!ReadInt32(typeScopes + 0x0, scopeCount) || !ReadPtr(typeScopes + 0x8, scopeData)) {
        g_Logger.Warning("Schemas", "Failed to read type scopes vector");
        return;
    }
    
    g_Logger.Info("Schemas", "Scope count detected: " + std::to_string(scopeCount));
    if (scopeCount <= 0 || scopeCount > 256) {
        g_Logger.Warning("Schemas", "Invalid scope count: " + std::to_string(scopeCount));
        return;
    }
    if (!scopeData || !IsSafeToRead((void*)scopeData, static_cast<size_t>(scopeCount) * sizeof(uintptr_t))) {
        g_Logger.Warning("Schemas", "Scope pointer list is not readable");
        return;
    }
    
    // Process each scope
    int nonEmptyScopes = 0;
    int totalClassesExtracted = 0;
    for (int s = 0; s < scopeCount; s++) {
        uintptr_t pScope = 0;
        if (!ReadPtr(scopeData + static_cast<uintptr_t>(s) * sizeof(uintptr_t), pScope)) continue;
        if (!IsSafeToRead((void*)pScope, 0x600)) continue;
        
        std::string scopeName = SafeReadCString(reinterpret_cast<const char*>(pScope + SCHEMA_TYPE_SCOPE_NAME_OFFSET), 64);
        if (scopeName.empty()) continue;

        // Normalize scope name (sometimes it comes without .dll suffix)
        std::string normalizedScope = scopeName;
        std::transform(normalizedScope.begin(), normalizedScope.end(), normalizedScope.begin(), [](unsigned char c) {
            return static_cast<char>(std::tolower(c));
        });
        if (normalizedScope.find(".dll") == std::string::npos) {
            normalizedScope += ".dll";
        }
        
        std::vector<SchemaClass> classes;
        
        // Get class bindings (UtlTsHash at +0x560, buckets start at +0x60)
        uintptr_t classBindings = pScope + SCHEMA_TYPE_SCOPE_CLASSES_OFFSET;
        if (!IsSafeToRead((void*)(classBindings + 0x60), 256 * 0x18)) continue;
        
        // Iterate hash buckets (256 buckets)
        uintptr_t buckets = classBindings + 0x60;
        const int MAX_CLASSES = 3000;
        int classCount = 0;
        
        for (int b = 0; b < 256 && classCount < MAX_CLASSES; b++) {
            uintptr_t bucket = buckets + b * 0x18;
            if (!IsSafeToRead((void*)bucket, 0x18)) continue;
            
            uintptr_t node = 0;
            if (!ReadPtr(bucket + 0x8, node) || !node) {
                ReadPtr(bucket + 0x10, node); // fallback to first_uncommitted
            }
            int chainLen = 0;
            
            while (node && chainLen < 200 && classCount < MAX_CLASSES) {
                if (!IsSafeToRead((void*)node, 0x20)) break;
                
                uintptr_t classInfo = 0;
                uintptr_t nextNode = 0;
                ReadPtr(node + 0x10, classInfo);
                ReadPtr(node + 0x8, nextNode);
                
                if (classInfo && IsSafeToRead((void*)classInfo, 0x50)) {
                    SchemaClass cls;
                    cls.module = normalizedScope;
                    cls.parent.clear();
                    cls.parentClass.clear();
                    cls.hasBaseClass = false;
                    
                    uintptr_t namePtr = 0;
                    ReadPtr(classInfo + SCHEMA_CLASS_NAME_OFFSET, namePtr);
                    cls.name = SafeReadCString(reinterpret_cast<const char*>(namePtr), 128);
                    
                    if (!cls.name.empty() && cls.name.length() > 2) {
                        ReadInt32(classInfo + SCHEMA_CLASS_SIZE_OFFSET, cls.size);
                        uint8_t align = 0;
                        if (ReadUInt8(classInfo + SCHEMA_CLASS_ALIGN_OFFSET, align)) {
                            cls.alignOf = align;
                        } else {
                            cls.alignOf = 0;
                        }
                        
                        int16_t fieldCount = 0;
                        uintptr_t fieldsPtr = 0;
                        ReadInt16(classInfo + SCHEMA_CLASS_FIELD_COUNT_OFFSET, fieldCount);
                        ReadPtr(classInfo + SCHEMA_CLASS_FIELDS_OFFSET, fieldsPtr);
                        
                        if (fieldCount > 0 && fieldCount < 500 && fieldsPtr) {
                            for (int f = 0; f < fieldCount; f++) {
                                uintptr_t fieldAddr = fieldsPtr + static_cast<uintptr_t>(f) * 0x20;
                                if (!IsSafeToRead((void*)fieldAddr, 0x20)) continue;
                                
                                SchemaField field;
                                uintptr_t fieldNamePtr = 0;
                                ReadPtr(fieldAddr + SCHEMA_FIELD_NAME_OFFSET, fieldNamePtr);
                                field.name = SafeReadCString(reinterpret_cast<const char*>(fieldNamePtr), 128);
                                
                                if (field.name.empty()) continue;
                                
                                uintptr_t typePtr = 0;
                                ReadPtr(fieldAddr + SCHEMA_FIELD_TYPE_OFFSET, typePtr);
                                if (typePtr && IsSafeToRead((void*)typePtr, 16)) {
                                    uintptr_t typeNamePtr = 0;
                                    ReadPtr(typePtr + 0x8, typeNamePtr);
                                    field.type = SafeReadCString(reinterpret_cast<const char*>(typeNamePtr), 64);
                                } else {
                                    field.type = "unknown";
                                }
                                
                                ReadInt32(fieldAddr + SCHEMA_FIELD_OFFSET_OFFSET, field.offset);
                                field.size = DeduceFieldSize(field.type);  // E3
                                
                                cls.fields.push_back(field);
                            }
                        }

                        // Parent class resolution (best-effort, guarded).
                        uintptr_t parentInfo = 0;
                        if (ReadPtr(classInfo + SCHEMA_CLASS_PARENT_OFFSET, parentInfo) &&
                            parentInfo && IsSafeToRead((void*)parentInfo, 0x20)) {
                            std::string parentName;

                            uintptr_t parentNamePtr = 0;
                            if (ReadPtr(parentInfo + SCHEMA_CLASS_NAME_OFFSET, parentNamePtr) && parentNamePtr) {
                                parentName = SafeReadCString(reinterpret_cast<const char*>(parentNamePtr), 128);
                            }

                            if (parentName.empty()) {
                                // Fallback for unusual layouts where parent points directly to name-like data.
                                parentName = SafeReadCString(reinterpret_cast<const char*>(parentInfo), 128);
                            }

                            if (IsLikelyTypeName(parentName) && parentName != cls.name) {
                                cls.parent = parentName;
                                cls.parentClass = parentName;
                                cls.hasBaseClass = true;
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
            g_SchemaClasses[normalizedScope] = classes;
            nonEmptyScopes++;
            totalClassesExtracted += static_cast<int>(classes.size());
            g_Logger.Success("Schemas", normalizedScope + ": classes=" + std::to_string(classes.size()));
        }

        // Extract enums from type scope
        std::vector<SchemaEnum> enums;
        uintptr_t enumBindings = pScope + SCHEMA_TYPE_SCOPE_ENUMS_OFFSET;
        if (IsSafeToRead((void*)(enumBindings + 0x60), 256 * 0x18)) {
            uintptr_t enumBuckets = enumBindings + 0x60;
            const int MAX_ENUMS = 2000;
            int enumCount = 0;

            for (int b = 0; b < 256 && enumCount < MAX_ENUMS; ++b) {
                uintptr_t bucket = enumBuckets + b * 0x18;
                uintptr_t node = 0;
                if (!ReadPtr(bucket + 0x8, node) || !node) {
                    ReadPtr(bucket + 0x10, node);
                }

                int chainLen = 0;
                while (node && chainLen < 200 && enumCount < MAX_ENUMS) {
                    if (!IsSafeToRead((void*)node, 0x20)) break;

                    uintptr_t enumInfo = 0;
                    uintptr_t nextNode = 0;
                    ReadPtr(node + 0x10, enumInfo);
                    ReadPtr(node + 0x8, nextNode);

                    if (enumInfo && IsSafeToRead((void*)enumInfo, 0x30)) {
                        SchemaEnum e;
                        e.module = normalizedScope;

                        uintptr_t enumNamePtr = 0;
                        ReadPtr(enumInfo + SCHEMA_ENUM_NAME_OFFSET, enumNamePtr);
                        e.name = SafeReadCString(reinterpret_cast<const char*>(enumNamePtr), 128);

                        uint8_t enumSize = 0;
                        int16_t enumeratorCount = 0;
                        uintptr_t enumeratorsPtr = 0;
                        ReadUInt8(enumInfo + 0x18, enumSize);
                        ReadInt16(enumInfo + SCHEMA_ENUM_COUNT_OFFSET, enumeratorCount);
                        ReadPtr(enumInfo + SCHEMA_ENUM_VALUES_OFFSET, enumeratorsPtr);
                        e.size = enumSize;

                        if (!e.name.empty() && enumeratorCount > 0 && enumeratorCount < 2048 && enumeratorsPtr) {
                            for (int i = 0; i < enumeratorCount; ++i) {
                                uintptr_t enumValueAddr = enumeratorsPtr + static_cast<uintptr_t>(i) * 0x20;
                                if (!IsSafeToRead((void*)enumValueAddr, 0x10)) continue;

                                uintptr_t memberNamePtr = 0;
                                int64_t memberValue = 0;
                                ReadPtr(enumValueAddr + SCHEMA_ENUMERATOR_NAME_OFFSET, memberNamePtr);
                                SafeRead<int64_t>(enumValueAddr + SCHEMA_ENUMERATOR_VALUE_OFFSET, memberValue);

                                std::string memberName = SafeReadCString(reinterpret_cast<const char*>(memberNamePtr), 128);
                                if (!memberName.empty()) {
                                    e.members.emplace_back(memberName, memberValue);
                                }
                            }
                        }

                        if (!e.name.empty() && !e.members.empty()) {
                            enums.push_back(std::move(e));
                            ++enumCount;
                        }
                    }

                    if (nextNode == node) break;
                    node = nextNode;
                    ++chainLen;
                }
            }
        }

        if (!enums.empty()) {
            g_SchemaEnums[normalizedScope] = std::move(enums);
        }
    }

    g_Logger.Success("Schemas", "Schema extraction complete. Non-empty scopes=" +
        std::to_string(nonEmptyScopes) + ", total classes=" + std::to_string(totalClassesExtracted));
}

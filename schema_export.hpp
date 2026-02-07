#pragma once
#include "schemas.hpp"  
#include <fstream>
#include <sstream>

// ============================================================================
// SCHEMA JSON EXPORT - Professional format (E5)
// ============================================================================

inline void WriteSchemaJSON(const std::string& outputPath) {
    std::ofstream out(outputPath + "/schemas/classes.json");
    if (!out.is_open()) return;
    
    // E5: Professional JSON with metadata
    out << "{\n";
    out << "  \"meta\": {\n";
    out << "    \"version\": \"1.0\",\n";
    out << "    \"generator\": \"CS2 Complete Dumper\",\n";
    out << "    \"has_validation\": true\n";
    out << "  },\n";
    out << "  \"classes\": [\n";
    
    bool firstClass = true;
    int totalClasses = 0;
    int totalFields = 0;
    int validClasses = 0;
    
    for (auto& [scopeName, classes] : g_SchemaClasses) {
        for (auto& cls : classes) {
            totalClasses++;
            if (cls.isValid) validClasses++;
            totalFields += (int)cls.fields.size();
            
            // Skip invalid classes (E1 validation)
            if (!cls.isValid) continue;
            
            if (!firstClass) out << ",\n";
            firstClass = false;
            
            out << "    {\n";
            out << "      \"name\": \"" << cls.name << "\",\n";
            out << "      \"module\": \"" << cls.module << "\",\n";
            out << "      \"size\": " << cls.size << ",\n";
            if (!cls.parent.empty()) {
                out << "      \"parent\": \"" << cls.parent << "\",\n";
            }
            out << "      \"fields\": [\n";
            
            for (size_t i = 0; i < cls.fields.size(); i++) {
                auto& field = cls.fields[i];
                out << "        {\n";
                out << "          \"name\": \"" << field.name << "\",\n";
                out << "          \"offset\": " << field.offset << ",\n";
                out << "          \"type\": \"" << field.type << "\",\n";
                out << "          \"size\": " << field.size;  // E3: Real size
                
                if (!field.flags.empty()) {
                    out << ",\n          \"flags\": [";
                    for (size_t j = 0; j < field.flags.size(); j++) {
                        out << "\"" << field.flags[j] << "\"";
                        if (j < field.flags.size() - 1) out << ", ";
                    }
                    out << "]";
                }
                
                out << "\n        }";
                if (i < cls.fields.size() - 1) out << ",";
                out << "\n";
            }
            
            out << "      ]\n";
            out << "    }";
        }
    }
    
    out << "\n  ],\n";
    out << "  \"stats\": {\n";
    out << "    \"total_classes\": " << totalClasses << ",\n";
    out << "    \"valid_classes\": " << validClasses << ",\n";
    out << "    \"total_fields\": " << totalFields << "\n";
    out << "  }\n";
    out << "}\n";
    
    out.close();
}

// Global stats for summary
inline int GetTotalSchemaClasses() {
    int total = 0;
    for (auto& [_, classes] : g_SchemaClasses) {
        for (auto& cls : classes) {
            if (cls.isValid) total++;
        }
    }
    return total;
}

inline int GetTotalSchemaFields() {
    int total = 0;
    for (auto& [_, classes] : g_SchemaClasses) {
        for (auto& cls : classes) {
            if (cls.isValid) total += (int)cls.fields.size();
        }
    }
    return total;
}

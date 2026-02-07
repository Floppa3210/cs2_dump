#pragma once
#include "common.hpp"
#include "logger.hpp"
#include "memory.hpp"
#include "schemas.hpp"
#include "rtti_dump.hpp"
#include "vtable_dump.hpp"

//=============================================================================
// SCHEMA TOOLS - Linking, classification, component graph, schema outputs
//=============================================================================

extern std::string g_OutputPath;
extern std::vector<RTTIClass> g_RTTIClasses;
extern std::vector<VTable> g_VTables;
extern std::map<std::string, SchemaClass*> g_SchemaClassIndex;

std::string GetCurrentTimestamp();

struct ComponentInfo {
    std::string className;
    std::vector<std::string> detectedComponents;
    std::string role;  // entity, controller, pawn, system, interface
};

extern std::vector<ComponentInfo> g_ComponentGraph;

inline void BuildSchemaIndex() {
    for (auto& [scope, classes] : g_SchemaClasses) {
        for (auto& cls : classes) {
            g_SchemaClassIndex[cls.name] = &cls;
        }
    }
    g_Logger.Info("Linking", "Built schema index with " + std::to_string(g_SchemaClassIndex.size()) + " classes");
}

inline void LinkRTTIToSchemas() {
    g_Logger.Info("Linking", "Linking RTTI classes to schemas...");

    int linkedCount = 0;

    for (auto& rtti : g_RTTIClasses) {
        if (g_SchemaClassIndex.count(rtti.name)) {
            linkedCount++;
        }
    }

    for (auto& vt : g_VTables) {
        for (auto& rtti : g_RTTIClasses) {
            if (rtti.vtable == vt.address) {
                vt.className = rtti.name;
                break;
            }
        }
    }

    g_Logger.Success("Linking", "Linked " + std::to_string(linkedCount) + " RTTI classes to schemas");
}

inline void FlattenInheritance() {
    g_Logger.Info("Flatten", "Flattening class inheritance...");

    int totalFlattened = 0;

    std::function<std::vector<std::string>(const std::string&, int)> GetAllParentFields;
    GetAllParentFields = [&](const std::string& className, int depth) -> std::vector<std::string> {
        std::vector<std::string> result;
        if (depth > 20) return result;

        auto it = g_SchemaClassIndex.find(className);
        if (it == g_SchemaClassIndex.end()) return result;

        SchemaClass* cls = it->second;

        if (!cls->parentClass.empty()) {
            auto parentFields = GetAllParentFields(cls->parentClass, depth + 1);
            result.insert(result.end(), parentFields.begin(), parentFields.end());
        }

        for (auto& field : cls->fields) {
            std::stringstream ss;
            ss << std::hex << field.offset;
            result.push_back(cls->name + "::" + field.name + " @ 0x" + ss.str());
        }

        return result;
    };

    for (auto& [scope, classes] : g_SchemaClasses) {
        for (auto& cls : classes) {
            if (!cls->parentClass.empty()) {
                cls.allFields = GetAllParentFields(cls.name, 0);
                totalFlattened++;
            }
        }
    }

    g_Logger.Success("Flatten", "Flattened " + std::to_string(totalFlattened) + " classes with inheritance");
}

inline std::string ClassifyField(const SchemaField& field) {
    std::string name = field.name;
    std::string type = field.type;

    if (name.find("Origin") != std::string::npos ||
        name.find("Position") != std::string::npos ||
        name.find("vecAbsOrigin") != std::string::npos ||
        name.find("vecOrigin") != std::string::npos) return "transform";

    if (name.find("Angle") != std::string::npos ||
        name.find("Rotation") != std::string::npos ||
        name.find("angEye") != std::string::npos ||
        type.find("QAngle") != std::string::npos) return "transform";

    if (name.find("Scale") != std::string::npos) return "transform";

    if (field.isNetworked) return "network";
    if (name.find("Network") != std::string::npos) return "network";
    if (name.find("Replicated") != std::string::npos) return "network";

    if (name.find("Handle") != std::string::npos ||
        type.find("CHandle") != std::string::npos ||
        type.find("CEntityHandle") != std::string::npos) return "identity";

    if (name.find("Index") != std::string::npos ||
        name.find("ID") != std::string::npos ||
        name.find("Id") != std::string::npos) return "identity";

    if (name.find("Name") != std::string::npos ||
        name.find("szName") != std::string::npos ||
        name.find("iszName") != std::string::npos) return "identity";

    if (name.find("Velocity") != std::string::npos ||
        name.find("Friction") != std::string::npos ||
        name.find("Gravity") != std::string::npos ||
        name.find("Mass") != std::string::npos ||
        name.find("Collision") != std::string::npos) return "physics";

    if (name.find("Anim") != std::string::npos ||
        name.find("Sequence") != std::string::npos ||
        name.find("Pose") != std::string::npos ||
        name.find("Bone") != std::string::npos) return "animation";

    if (name.find("Health") != std::string::npos ||
        name.find("Armor") != std::string::npos ||
        name.find("Damage") != std::string::npos ||
        name.find("Weapon") != std::string::npos ||
        name.find("Ammo") != std::string::npos ||
        name.find("Team") != std::string::npos) return "combat";

    if (name.find("Render") != std::string::npos ||
        name.find("Color") != std::string::npos ||
        name.find("Material") != std::string::npos ||
        name.find("Model") != std::string::npos ||
        name.find("Visible") != std::string::npos ||
        name.find("Glow") != std::string::npos) return "rendering";

    if (field.isPredicted) return "prediction";
    if (name.find("Predict") != std::string::npos) return "prediction";

    if (name.find("Input") != std::string::npos ||
        name.find("Button") != std::string::npos ||
        name.find("Key") != std::string::npos) return "input";

    return "internal";
}

inline void DetectComponents() {
    g_Logger.Info("Components", "Detecting entity-component relationships...");

    std::set<std::string> knownComponents = {
        "CGameSceneNode", "CCollisionProperty", "CBodyComponent",
        "CRenderComponent", "CHitboxComponent", "CSkeletonInstance",
        "CNetworkTransmitComponent", "CModelState", "CAnimationController"
    };

    g_ComponentGraph.clear();

    for (auto& [scope, classes] : g_SchemaClasses) {
        for (auto& cls : classes) {
            ComponentInfo info;
            info.className = cls.name;

            if (cls.name.find("Controller") != std::string::npos) {
                info.role = "controller";
            } else if (cls.name.find("Pawn") != std::string::npos) {
                info.role = "pawn";
            } else if (cls.name.find("System") != std::string::npos) {
                info.role = "system";
            } else if (cls.name.find("Interface") != std::string::npos ||
                       cls.name.substr(0, 1) == "I") {
                info.role = "interface";
            } else if (cls.name.find("Entity") != std::string::npos ||
                       cls.name.find("C_") == 0 || cls.name.find("CBase") == 0) {
                info.role = "entity";
            } else {
                info.role = "other";
            }

            for (auto& field : cls.fields) {
                for (auto& comp : knownComponents) {
                    if (field.type.find(comp) != std::string::npos) {
                        info.detectedComponents.push_back(comp);
                    }
                }

                if (field.name.find("m_pGameSceneNode") != std::string::npos) {
                    info.detectedComponents.push_back("CGameSceneNode");
                }
                if (field.name.find("m_Collision") != std::string::npos) {
                    info.detectedComponents.push_back("CCollisionProperty");
                }
            }

            std::sort(info.detectedComponents.begin(), info.detectedComponents.end());
            info.detectedComponents.erase(
                std::unique(info.detectedComponents.begin(), info.detectedComponents.end()),
                info.detectedComponents.end());

            if (!info.detectedComponents.empty() || info.role != "other") {
                g_ComponentGraph.push_back(info);
            }
        }
    }

    g_Logger.Success("Components", "Detected " + std::to_string(g_ComponentGraph.size()) + " classes with components/roles");
}

inline void WriteComponentGraphJson() {
    std::ofstream out(g_OutputPath + "/component_graph.json");
    if (!out.is_open()) return;

    out << "{\n  \"entities\": [\n";

    for (size_t i = 0; i < g_ComponentGraph.size(); i++) {
        auto& info = g_ComponentGraph[i];
        out << "    {\n";
        out << "      \"class\": \"" << info.className << "\",\n";
        out << "      \"role\": \"" << info.role << "\",\n";
        out << "      \"components\": [";

        for (size_t j = 0; j < info.detectedComponents.size(); j++) {
            out << "\"" << info.detectedComponents[j] << "\"";
            if (j < info.detectedComponents.size() - 1) out << ",";
        }

        out << "]\n    }";
        out << (i < g_ComponentGraph.size() - 1 ? "," : "") << "\n";
    }

    out << "  ]\n}\n";
    out.close();

    g_Logger.Success("Output", "component_graph.json written (" + std::to_string(g_ComponentGraph.size()) + " entries)");
}

inline std::string ResolveComplexType(const std::string& type) {
    if (type.find("CUtlVector") != std::string::npos) return "CUtlVector<T>";
    if (type.find("CUtlVectorEmbeddedNetworkVar") != std::string::npos) return "CUtlVectorEmbeddedNetworkVar<T>";
    if (type.find("CHandle") != std::string::npos) return "CHandle<T>";
    if (type.find("CUtlString") != std::string::npos) return "CUtlString";
    if (type.find("CStrongHandle") != std::string::npos) return "CStrongHandle<T>";
    if (type.find("CSingleton") != std::string::npos) return "CSingleton<T>";
    return type;
}

inline std::string GetCppType(const std::string& schemaType) {
    if (schemaType == "float32") return "float";
    if (schemaType == "float64") return "double";
    if (schemaType == "int32") return "int32_t";
    if (schemaType == "int64") return "int64_t";
    if (schemaType == "uint8") return "uint8_t";
    if (schemaType == "uint16") return "uint16_t";
    if (schemaType == "uint32") return "uint32_t";
    if (schemaType == "uint64") return "uint64_t";
    if (schemaType == "bool") return "bool";
    if (schemaType == "char") return "char";
    return ResolveComplexType(schemaType);
}

inline void WriteSchemaStructsHpp(const std::string& scopeName, const std::vector<SchemaClass>& classes) {
    std::string filename = scopeName;
    std::replace(filename.begin(), filename.end(), '.', '_');

    std::ofstream out(g_OutputPath + "/schemas/" + filename + "_structs.hpp");
    if (!out.is_open()) return;

    out << "// Generated using CS2 ULTIMATE DUMPER\n";
    out << "// " << GetCurrentTimestamp() << "\n\n";
    out << "#pragma once\n\n";
    out << "#include <cstdint>\n";
    out << "#include <cstddef>\n\n";
    out << "namespace cs2 {\n";
    out << "namespace " << filename << " {\n\n";

    for (auto& cls : classes) {
        out << "// " << cls.name << " (size: 0x" << std::hex << cls.size << std::dec << ")\n";
        if (!cls.parentClass.empty()) {
            out << "struct " << cls.name << " : public " << cls.parentClass << " {\n";
        } else {
            out << "struct " << cls.name << " {\n";
        }

        for (auto& field : cls.fields) {
            out << "    " << GetCppType(field.type) << " " << field.name << ";";
            out << " // 0x" << std::hex << field.offset << std::dec;
            if (field.isNetworked) out << " [NET]";
            if (field.isPredicted) out << " [PRED]";
            if (field.isReadOnly) out << " [RO]";
            if (field.isTransient) out << " [TRANS]";
            out << "\n";
        }

        out << "};\n\n";
    }

    out << "} // namespace " << filename << "\n";
    out << "} // namespace cs2\n";
    out.close();

    g_Logger.Success("Output", "schemas/" + filename + "_structs.hpp written");
}

inline void WriteSchemaHpp(const std::string& scopeName, const std::vector<SchemaClass>& classes) {
    std::string filename = scopeName;
    std::replace(filename.begin(), filename.end(), '.', '_');

    std::ofstream out(g_OutputPath + "/schemas/" + filename + "_dll.hpp");
    if (!out.is_open()) return;

    out << "// Generated using CS2 ULTIMATE DUMPER\n";
    out << "// " << GetCurrentTimestamp() << "\n\n";
    out << "#pragma once\n\n";
    out << "#include <cstddef>\n\n";
    out << "// Module: " << scopeName << ".dll\n";
    out << "// Classes: " << classes.size() << "\n\n";
    out << "namespace cs2_dumper {\n";
    out << "namespace schemas {\n";
    out << "namespace " << filename << " {\n\n";

    for (auto& cls : classes) {
        out << "// " << cls.name << " (size: 0x" << std::hex << cls.size << ")\n";
        out << "namespace " << cls.name << " {\n";
        for (auto& field : cls.fields) {
            out << "    constexpr std::ptrdiff_t " << field.name << " = 0x"
                << std::hex << field.offset << "; // " << field.type << "\n";
        }
        out << "}\n\n";
    }

    out << "}\n}\n}\n";
    out.close();
}

inline void WriteSchemaJson(const std::string& scopeName, const std::vector<SchemaClass>& classes) {
    std::string filename = scopeName;
    std::replace(filename.begin(), filename.end(), '.', '_');

    std::ofstream out(g_OutputPath + "/schemas/" + filename + "_dll.json");
    if (!out.is_open()) return;

    out << "{\n";
    out << "  \"module\": \"" << scopeName << ".dll\",\n";
    out << "  \"classes\": {\n";

    for (size_t c = 0; c < classes.size(); c++) {
        auto& cls = classes[c];
        out << "    \"" << cls.name << "\": {\n";
        out << "      \"size\": " << std::dec << cls.size << ",\n";
        out << "      \"alignOf\": " << (int)cls.alignOf << ",\n";
        out << "      \"hasBaseClass\": " << (cls.hasBaseClass ? "true" : "false") << ",\n";
        if (!cls.parentClass.empty()) {
            out << "      \"parentClass\": \"" << cls.parentClass << "\",\n";
        }
        out << "      \"fields\": {\n";

        for (size_t f = 0; f < cls.fields.size(); f++) {
            auto& field = cls.fields[f];
            out << "        \"" << field.name << "\": {\n";
            out << "          \"offset\": " << std::dec << field.offset << ",\n";
            out << "          \"type\": \"" << field.type << "\",\n";
            out << "          \"category\": \"" << ClassifyField(field) << "\"";

            if (field.isNetworked || field.isPredicted || field.isReadOnly || field.isTransient) {
                out << ",\n          \"flags\": [";
                bool first = true;
                if (field.isNetworked) { out << (first ? "" : ",") << "\"networked\""; first = false; }
                if (field.isPredicted) { out << (first ? "" : ",") << "\"predicted\""; first = false; }
                if (field.isReadOnly) { out << (first ? "" : ",") << "\"readonly\""; first = false; }
                if (field.isTransient) { out << (first ? "" : ",") << "\"transient\""; first = false; }
                out << "]";
            }

            out << "\n        }";
            out << (f < cls.fields.size() - 1 ? "," : "") << "\n";
        }

        out << "      }\n";
        out << "    }" << (c < classes.size() - 1 ? "," : "") << "\n";
    }

    out << "  }\n";
    out << "}\n";
    out.close();
}

inline void WriteEnumsHpp() {
    std::ofstream out(g_OutputPath + "/schemas/enums.hpp");
    if (!out.is_open()) return;

    out << "// Generated using CS2 ULTIMATE DUMPER\n";
    out << "// " << GetCurrentTimestamp() << "\n\n";
    out << "#pragma once\n\n";
    out << "#include <cstdint>\n\n";
    out << "namespace cs2 {\nnamespace enums {\n\n";

    int totalEnums = 0;
    for (auto& [scopeName, enums] : g_SchemaEnums) {
        out << "// Module: " << scopeName << ".dll\n";
        for (auto& e : enums) {
            out << "enum class " << e.name << " : int64_t {\n";
            for (auto& member : e.members) {
                out << "    " << member.first << " = " << member.second << ",\n";
            }
            out << "};\n\n";
            totalEnums++;
        }
    }

    out << "} // namespace enums\n} // namespace cs2\n";
    out.close();
    g_Logger.Success("Output", "schemas/enums.hpp written (" + std::to_string(totalEnums) + " enums)");
}

inline void WriteAllSchemas() {
    for (auto& [scopeName, classes] : g_SchemaClasses) {
        WriteSchemaHpp(scopeName, classes);
        WriteSchemaJson(scopeName, classes);
        WriteSchemaStructsHpp(scopeName, classes);
    }

    WriteEnumsHpp();
}

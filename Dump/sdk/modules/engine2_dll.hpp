// Auto-generated module SDK: engine2.dll
#pragma once

#include "../sdk_types.hpp"

namespace cs2 {
struct CEntityInstance {
    // 0x8
    CUtlSymbolLarge m_iszPrivateVScripts;
    // 0x10
    CEntityIdentity* m_pEntity;
    // 0x30
    CScriptComponent* m_CScriptComponent;
};
struct CEntityComponent {
};
struct CScriptComponent {
    // 0x30
    CUtlSymbolLarge m_scriptClassName;
};
struct CEntityIdentity {
    // 0x14
    int32_t m_nameStringableIndex;
    // 0x18
    CUtlSymbolLarge m_name;
    // 0x20
    CUtlSymbolLarge m_designerName;
    // 0x30
    uint32_t m_flags;
    // 0x38
    WorldGroupId_t m_worldGroupId;
    // 0x3c
    uint32_t m_fDataObjectTypes;
    // 0x40
    ChangeAccessorFieldPathIndex_t m_PathIndex;
    // 0x48
    CEntityAttributeTable* m_pAttributes;
    // 0x50
    CEntityIdentity* m_pPrev;
    // 0x58
    CEntityIdentity* m_pNext;
    // 0x60
    CEntityIdentity* m_pPrevByClass;
    // 0x68
    CEntityIdentity* m_pNextByClass;
};
} // namespace cs2

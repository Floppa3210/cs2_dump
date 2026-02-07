// Generated using CS2 ULTIMATE DUMPER
// 2026-02-07 09:26:37

#pragma once

#include <cstdint>
#include <cstddef>

namespace cs2 {
namespace worldrenderer_dll {

// CEntityInstance (size: 0x38)
struct CEntityInstance {
    CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
    CEntityIdentity* m_pEntity; // 0x10
    CScriptComponent* m_CScriptComponent; // 0x30
};

// CEntityComponent (size: 0x8)
struct CEntityComponent {
};

// CScriptComponent (size: 0x38)
struct CScriptComponent {
    CUtlSymbolLarge m_scriptClassName; // 0x30
};

// CEntityIdentity (size: 0x70)
struct CEntityIdentity {
    int32_t m_nameStringableIndex; // 0x14
    CUtlSymbolLarge m_name; // 0x18
    CUtlSymbolLarge m_designerName; // 0x20
    uint32_t m_flags; // 0x30
    WorldGroupId_t m_worldGroupId; // 0x38
    uint32_t m_fDataObjectTypes; // 0x3c
    ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40
    CEntityAttributeTable* m_pAttributes; // 0x48
    CEntityIdentity* m_pPrev; // 0x50
    CEntityIdentity* m_pNext; // 0x58
    CEntityIdentity* m_pPrevByClass; // 0x60
    CEntityIdentity* m_pNextByClass; // 0x68
};

} // namespace worldrenderer_dll
} // namespace cs2

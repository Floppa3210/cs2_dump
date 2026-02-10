// Auto-generated schemas
#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace worldrenderer_dll {
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8;
                constexpr std::ptrdiff_t m_pEntity = 0x10;
                constexpr std::ptrdiff_t m_CScriptComponent = 0x30;
            }
            namespace CEntityComponent {
            }
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30;
            }
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringableIndex = 0x14;
                constexpr std::ptrdiff_t m_name = 0x18;
                constexpr std::ptrdiff_t m_designerName = 0x20;
                constexpr std::ptrdiff_t m_flags = 0x30;
                constexpr std::ptrdiff_t m_worldGroupId = 0x38;
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C;
                constexpr std::ptrdiff_t m_PathIndex = 0x40;
                constexpr std::ptrdiff_t m_pAttributes = 0x48;
                constexpr std::ptrdiff_t m_pPrev = 0x50;
                constexpr std::ptrdiff_t m_pNext = 0x58;
                constexpr std::ptrdiff_t m_pPrevByClass = 0x60;
                constexpr std::ptrdiff_t m_pNextByClass = 0x68;
            }
        }
    }
}

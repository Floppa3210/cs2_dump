// Auto-generated patterns
#pragma once

namespace cs2_dumper {
    namespace patterns {
        namespace client_dll {
            constexpr const char* dwCSGOInput = "48 89 05 ? ? ? ? 0F 57 C0 0F 11 05";
            constexpr const char* dwEntityList = "48 89 35 ? ? ? ? 48 85 F6";
            constexpr const char* dwEntityList = "48 89 0D ? ? ? ? E9 ? ? ? ? CC";
            constexpr const char* dwGameEntitySystem = "48 8B 3D ? ? ? ? 48 89 3D";
            constexpr const char* dwGameEntitySystem = "48 8B 1D ? ? ? ? 48 89 1D ? ? ? ? 4C 63 B3";
            constexpr const char* dwGameRules = "48 89 1D ? ? ? ? FF 15 ? ? ? ? 84 C0";
            constexpr const char* dwGlobalVars = "48 89 15 ? ? ? ? 48 89 42";
            constexpr const char* dwGlowManager = "48 8B 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 41";
            constexpr const char* dwLocalPlayerController = "48 8B 05 ? ? ? ? 41 89 BE";
            constexpr const char* dwPlantedC4 = "48 8B 15 ? ? ? ? 41 FF C0";
            constexpr const char* dwPlantedC4 = "48 8B 15 ? ? ? ? 41 FF C0 48 8D 4C 24 ? 44 89 05";
            constexpr const char* dwPrediction = "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 56 41 54";
            constexpr const char* dwSensitivity = "48 8D 0D ? ? ? ? 66 0F 6E CD";
            constexpr const char* dwSensitivity = "48 8D 0D ? ? ? ? ? ? ? ? 66 0F 6E CD";
            constexpr const char* dwSensitivity_sensitivity = "48 8D 7E ? 48 0F BA E0 ? 72 ? 85 D2 49 0F 4F FF";
            constexpr const char* dwViewAngles_fieldOffset = "F2 42 0F 10 84 28 ? ? ? ? 89 54 24 20";
            constexpr const char* dwLocalPlayerPawn_fieldOffset = "4C 39 B6 ? ? ? ? 74 ? 44 88 BE";
            constexpr const char* dwViewMatrix = "48 8D 0D ? ? ? ? 48 C1 E0 06";
            constexpr const char* dwViewRender = "48 89 05 ? ? ? ? 48 8B C8 48 85 C0";
            constexpr const char* dwWeaponC4 = "48 89 05 ? ? ? ? F7 C1 ? ? ? ? 74";
            constexpr const char* dwWeaponC4 = "48 8B 15 ? ? ? ? 48 8B 5C 24 ? FF C0 89 05 ? ? ? ? 48 8B C6 48 89 34 EA 80 BE";
            constexpr const char* dwGameEntitySystem_highestEntityIndex_offset = "FF 81 ? ? ? ? 48 85 D2";
            constexpr const char* dwInputSystem = "48 89 05 ? ? ? ? 48 8B 01 FF 50 08";
            constexpr const char* dwPlayerResource = "48 8B 0D ? ? ? ? 48 8B 01 FF 90 ? ? ? ? 48 8B";
            constexpr const char* dwSignOnState = "44 8B 05 ? ? ? ? 83 F8 02";
            constexpr const char* dwHostMaps = "48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 48 FF 60 30";
        }
        namespace engine2_dll {
            constexpr const char* dwBuildNumber = "89 05 ? ? ? ? 48 8D 0D ? ? ? ? FF 15";
            constexpr const char* dwBuildNumber = "89 05 ? ? ? ? 48 8D 0D ? ? ? ? FF 15 ? ? ? ? 48 8B 0D";
            constexpr const char* dwNetworkGameClient = "48 89 3D ? ? ? ? FF 87 28 02 00 00";
            constexpr const char* dwNetworkGameClient = "48 89 3D ? ? ? ? FF 87";
            constexpr const char* dwNetworkGameClient = "48 89 3D ? ? ? ? FF 87 2C 02 00 00";
            constexpr const char* dwWindowHeight = "8B 05 ? ? ? ? 89 03";
            constexpr const char* dwWindowWidth = "8B 05 ? ? ? ? 89 07";
            constexpr const char* dwNetworkGameClient_deltaTick = "4C 8D B7 ? ? ? ? 4C 89 7C 24";
            constexpr const char* dwNetworkGameClient_signOnState = "44 8B 81 ? ? ? ? 48 8D 0D";
            constexpr const char* dwNetworkGameClient_isBackgroundMap = "0F B6 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 0F B6 81";
            constexpr const char* dwNetworkGameClient_isBackgroundMap = "0F B6 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53";
            constexpr const char* dwNetworkGameClient_localPlayer = "42 8B 94 D3 ? ? ? ? 5B 49 FF E3";
            constexpr const char* dwNetworkGameClient_clientTickCount = "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 8B 81";
            constexpr const char* dwNetworkGameClient_serverTickCount = "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 83 B9";
            constexpr const char* dwNetworkGameClient_maxClients = "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 81";
        }
        namespace inputsystem_dll {
            constexpr const char* dwInputSystem = "48 89 05 ? ? ? ? 33 C0";
        }
        namespace matchmaking_dll {
            constexpr const char* dwGameTypes = "48 8D 0D ? ? ? ? FF 90";
        }
        namespace soundsystem_dll {
            constexpr const char* dwSoundSystem = "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 89 15";
            constexpr const char* dwSoundSystem_engineViewData = "0F 11 47 ? 0F 10 4B ? 0F 11 8F";
            constexpr const char* dwSoundSystem_engineViewData = "0F 11 47 ? 0F 10 4E ? 0F 11 8F";
        }
        namespace tier0_dll {
            constexpr const char* dwCommandLine = "48 8B 05 ? ? ? ? 48 85 C0 74 ? 48 8D 0D";
        }
    }
}

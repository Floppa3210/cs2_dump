#pragma once
#include "common.hpp"

//=============================================================================
// PATTERN DEFINITIONS - Runtime signatures and fallback candidates
//=============================================================================

struct PatternInfo {
    const char* name;
    const char* pattern;
    int resolveOffset;  // offset to RIP-relative in instruction
    int instrSize;      // total instruction size
    const char* description;
    bool extractImmediate = false;  // when true, resolveOffset points to immediate field displacement/value
    int immediateSize = 4;          // immediate byte width (1, 2, or 4)
};

// client.dll patterns
inline PatternInfo g_ClientPatterns[] = {
    {"dwCSGOInput", "48 89 05 ? ? ? ? 0F 57 C0 0F 11 05", 3, 7, "CSGO Input system pointer"},
    {"dwEntityList", "48 89 35 ? ? ? ? 48 85 F6", 3, 7, "Entity list pointer"},
    {"dwEntityList", "48 89 0D ? ? ? ? E9 ? ? ? ? CC", 3, 7, "Entity list pointer (alt signature)"},
    {"dwGameEntitySystem", "48 8B 3D ? ? ? ? 48 89 3D", 3, 7, "Game entity system"},
    {"dwGameEntitySystem", "48 8B 1D ? ? ? ? 48 89 1D ? ? ? ? 4C 63 B3", 3, 7, "Game entity system (alt signature)"},
    {"dwGameRules", "48 89 1D ? ? ? ? FF 15 ? ? ? ? 84 C0", 3, 7, "Game rules pointer"},
    {"dwGlobalVars", "48 89 15 ? ? ? ? 48 89 42", 3, 7, "Global variables pointer"},
    {"dwGlowManager", "48 8B 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 41", 3, 7, "Glow manager"},
    {"dwLocalPlayerController", "48 8B 05 ? ? ? ? 41 89 BE", 3, 7, "Local player controller"},
    {"dwPlantedC4", "48 8B 15 ? ? ? ? 41 FF C0", 3, 7, "Planted C4 pointer"},
    {"dwPlantedC4", "48 8B 15 ? ? ? ? 41 FF C0 48 8D 4C 24 ? 44 89 05", 3, 7, "Planted C4 pointer (alt signature)"},
    {"dwPrediction", "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 56 41 54", 3, 7, "Prediction system"},
    {"dwSensitivity", "48 8D 0D ? ? ? ? 66 0F 6E CD", 3, 7, "Mouse sensitivity"},
    {"dwSensitivity", "48 8D 0D ? ? ? ? ? ? ? ? 66 0F 6E CD", 3, 7, "Mouse sensitivity (alt signature)"},
    {"dwSensitivity_sensitivity", "48 8D 7E ? 48 0F BA E0 ? 72 ? 85 D2 49 0F 4F FF", 3, 4, "Sensitivity field offset (dynamic)", true, 1},
    {"dwViewAngles_fieldOffset", "F2 42 0F 10 84 28 ? ? ? ? 89 54 24 20", 6, 10, "ViewAngles field offset from CSGOInput", true, 4},
    {"dwLocalPlayerPawn_fieldOffset", "4C 39 B6 ? ? ? ? 74 ? 44 88 BE", 3, 7, "LocalPlayerPawn field offset from Prediction", true, 4},
    {"dwViewMatrix", "48 8D 0D ? ? ? ? 48 C1 E0 06", 3, 7, "View matrix"},
    {"dwViewRender", "48 89 05 ? ? ? ? 48 8B C8 48 85 C0", 3, 7, "View render"},
    {"dwWeaponC4", "48 89 05 ? ? ? ? F7 C1 ? ? ? ? 74", 3, 7, "Weapon C4 pointer"},
    {"dwWeaponC4", "48 8B 15 ? ? ? ? 48 8B 5C 24 ? FF C0 89 05 ? ? ? ? 48 8B C6 48 89 34 EA 80 BE", 3, 7, "Weapon C4 pointer (alt signature)"},
    {"dwGameEntitySystem_highestEntityIndex_offset", "FF 81 ? ? ? ? 48 85 D2", 2, 6, "Highest entity index field offset", true, 4},
    {"dwInputSystem", "48 89 05 ? ? ? ? 48 8B 01 FF 50 08", 3, 7, "Input system pointer"},
    {"dwPlayerResource", "48 8B 0D ? ? ? ? 48 8B 01 FF 90 ? ? ? ? 48 8B", 3, 7, "Player resource"},
    {"dwSignOnState", "44 8B 05 ? ? ? ? 83 F8 02", 3, 7, "Sign on state"},
    {"dwHostMaps", "48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 48 FF 60 30", 3, 7, "Hosted maps"},
};

// engine2.dll patterns - Only patterns that work
inline PatternInfo g_Engine2Patterns[] = {
    {"dwBuildNumber", "89 05 ? ? ? ? 48 8D 0D ? ? ? ? FF 15", 2, 6, "Build number"},
    {"dwBuildNumber", "89 05 ? ? ? ? 48 8D 0D ? ? ? ? FF 15 ? ? ? ? 48 8B 0D", 2, 6, "Build number (alt signature)"},
    {"dwNetworkGameClient", "48 89 3D ? ? ? ? FF 87 28 02 00 00", 3, 7, "Network game client"},
    {"dwNetworkGameClient", "48 89 3D ? ? ? ? FF 87", 3, 7, "Network game client (alt signature)"},
    {"dwNetworkGameClient", "48 89 3D ? ? ? ? FF 87 2C 02 00 00", 3, 7, "Network game client (alt signature 2)"},
    {"dwWindowHeight", "8B 05 ? ? ? ? 89 03", 2, 6, "Window height"},
    {"dwWindowWidth", "8B 05 ? ? ? ? 89 07", 2, 6, "Window width"},
    {"dwNetworkGameClient_deltaTick", "4C 8D B7 ? ? ? ? 4C 89 7C 24", 3, 7, "Delta tick (dynamic)", true, 4},
    {"dwNetworkGameClient_signOnState", "44 8B 81 ? ? ? ? 48 8D 0D", 3, 7, "Sign on state (dynamic)", true, 4},
    {"dwNetworkGameClient_isBackgroundMap", "0F B6 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 0F B6 81", 3, 7, "Is background map (dynamic)", true, 4},
    {"dwNetworkGameClient_isBackgroundMap", "0F B6 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53", 3, 7, "Is background map (alt dynamic)", true, 4},
    {"dwNetworkGameClient_localPlayer", "42 8B 94 D3 ? ? ? ? 5B 49 FF E3", 4, 8, "Local player network (dynamic)", true, 4},
    {"dwNetworkGameClient_clientTickCount", "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 8B 81", 2, 6, "Client tick count (dynamic)", true, 4},
    {"dwNetworkGameClient_serverTickCount", "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 83 B9", 2, 6, "Server tick count (dynamic)", true, 4},
    {"dwNetworkGameClient_maxClients", "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 81", 2, 6, "Max clients (dynamic)", true, 4},
};

// inputsystem.dll patterns
inline PatternInfo g_InputsystemPatterns[] = {
    {"dwInputSystem", "48 89 05 ? ? ? ? 33 C0", 3, 7, "Input system"},
};

// matchmaking.dll patterns
inline PatternInfo g_MatchmakingPatterns[] = {
    {"dwGameTypes", "48 8D 0D ? ? ? ? FF 90", 3, 7, "Game types"},
};

// soundsystem.dll patterns
inline PatternInfo g_SoundsystemPatterns[] = {
    {"dwSoundSystem", "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 89 15", 3, 7, "Sound system"},
    {"dwSoundSystem_engineViewData", "0F 11 47 ? 0F 10 4B ? 0F 11 8F", 3, 7, "Sound engine view data (dynamic)", true, 1},
    {"dwSoundSystem_engineViewData", "0F 11 47 ? 0F 10 4E ? 0F 11 8F", 3, 7, "Sound engine view data (alt dynamic)", true, 1},
};

// tier0.dll patterns (working)
inline PatternInfo g_Tier0Patterns[] = {
    {"dwCommandLine", "48 8B 05 ? ? ? ? 48 85 C0 74 ? 48 8D 0D", 3, 7, "Command line"},
};

// Static sub-offsets that cannot be pattern-scanned (fallback values)
struct StaticOffset {
    const char* name;
    uintptr_t offset;
    const char* module;
    const char* description;
};

inline StaticOffset g_StaticOffsets[] = {
    {"dwSensitivity_sensitivity", 0x50, "client.dll", "Sensitivity value offset from dwSensitivity"},
    {"dwSensitivity_sensitivity_alt", 0x58, "client.dll", "Sensitivity value offset (candidate from newer build)"},
    {"dwViewAngles_offset", 0x4520, "client.dll", "ViewAngles offset from dwCSGOInput"},
    {"dwLocalPlayerPawn_offset", 0xE0, "client.dll", "LocalPlayerPawn offset from dwPrediction"},
    {"dwGameEntitySystem_highestEntityIndex_offset", 0x20F0, "client.dll", "Highest entity index from GameEntitySystem"},
    {"dwGameEntitySystem_highestEntityIndex_offset_alt", 0x20A0, "client.dll", "Highest entity index candidate from newer build"},
    {"dwNetworkGameClient_clientTickCount", 0x390, "engine2.dll", "Client tick count offset"},
    {"dwNetworkGameClient_serverTickCount", 0x394, "engine2.dll", "Server tick count offset"},
    {"dwNetworkGameClient_deltaTick", 0x23C, "engine2.dll", "Delta tick offset"},
    {"dwNetworkGameClient_maxClients", 0x230, "engine2.dll", "Max clients offset"},
    {"dwNetworkGameClient_signOnState", 0x220, "engine2.dll", "Sign on state offset"},
    {"dwNetworkGameClient_isBackgroundMap", 0x2C1467, "engine2.dll", "Is background map offset"},
    {"dwNetworkGameClient_localPlayer", 0xE8, "engine2.dll", "Local player index offset"},
    {"dwNetworkGameClient_clientTickCount_alt", 0x378, "engine2.dll", "Client tick count candidate from newer build"},
    {"dwNetworkGameClient_serverTickCount_alt", 0x24C, "engine2.dll", "Server tick count candidate from newer build"},
    {"dwNetworkGameClient_deltaTick_alt", 0x24C, "engine2.dll", "Delta tick candidate from newer build"},
    {"dwNetworkGameClient_maxClients_alt", 0x240, "engine2.dll", "Max clients candidate from newer build"},
    {"dwNetworkGameClient_signOnState_alt", 0x230, "engine2.dll", "Sign on state candidate from newer build"},
    {"dwNetworkGameClient_localPlayer_alt", 0xF8, "engine2.dll", "Local player index candidate from newer build"},
    {"dwNetworkGameClient_isBackgroundMap_alt", 0x2C141F, "engine2.dll", "Is background map candidate from newer build"},
    {"dwSoundSystem_engineViewData", 0x7C, "soundsystem.dll", "Engine view data offset from dwSoundSystem"},
};

// Button list pattern
inline const char* BUTTON_LIST_PATTERN = "48 8B 15 ? ? ? ? 48 85 D2 74 ? 48 8B 02 48 85 C0";

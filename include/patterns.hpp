#pragma once
#include "common.hpp"

//=============================================================================
// PATTERN DEFINITIONS - All from a2x/cs2-dumper
//=============================================================================

struct PatternInfo {
    const char* name;
    const char* pattern;
    int resolveOffset;  // offset to RIP-relative in instruction
    int instrSize;      // total instruction size
    const char* description;
};

// client.dll patterns - Complete a2x coverage
inline PatternInfo g_ClientPatterns[] = {
    {"dwCSGOInput", "48 89 05 ? ? ? ? 0F 57 C0 0F 11 05", 3, 7, "CSGO Input system pointer"},
    {"dwEntityList", "48 89 35 ? ? ? ? 48 85 F6", 3, 7, "Entity list pointer"},
    {"dwGameEntitySystem", "48 8B 3D ? ? ? ? 48 89 3D", 3, 7, "Game entity system"},
    {"dwGameRules", "48 89 1D ? ? ? ? FF 15 ? ? ? ? 84 C0", 3, 7, "Game rules pointer"},
    {"dwGlobalVars", "48 89 15 ? ? ? ? 48 89 42", 3, 7, "Global variables pointer"},
    {"dwGlowManager", "48 8B 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 41", 3, 7, "Glow manager"},
    {"dwLocalPlayerController", "48 8B 05 ? ? ? ? 41 89 BE", 3, 7, "Local player controller"},
    {"dwPlantedC4", "48 8B 15 ? ? ? ? 41 FF C0", 3, 7, "Planted C4 pointer"},
    {"dwPrediction", "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 56 41 54", 3, 7, "Prediction system"},
    {"dwSensitivity", "48 8D 0D ? ? ? ? 66 0F 6E CD", 3, 7, "Mouse sensitivity"},
    {"dwViewMatrix", "48 8D 0D ? ? ? ? 48 C1 E0 06", 3, 7, "View matrix"},
    {"dwViewRender", "48 89 05 ? ? ? ? 48 8B C8 48 85 C0", 3, 7, "View render"},
    {"dwWeaponC4", "48 89 05 ? ? ? ? F7 C1 ? ? ? ? 74", 3, 7, "Weapon C4 pointer"},
    {"dwGameEntitySystem_highestEntityIndex", "FF 81 ? ? ? ? 48 85 D2", 2, 6, "Highest entity index"},
    {"dwInputSystem", "48 89 05 ? ? ? ? 48 8B 01 FF 50 08", 3, 7, "Input system pointer"},
    {"dwPlayerResource", "48 8B 0D ? ? ? ? 48 8B 01 FF 90 ? ? ? ? 48 8B", 3, 7, "Player resource"},
    {"dwSignOnState", "44 8B 05 ? ? ? ? 83 F8 02", 3, 7, "Sign on state"},
    {"dwHostMaps", "48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 48 FF 60 30", 3, 7, "Hosted maps"},
};

// engine2.dll patterns - Only patterns that work
inline PatternInfo g_Engine2Patterns[] = {
    {"dwBuildNumber", "89 05 ? ? ? ? 48 8D 0D ? ? ? ? FF 15", 2, 6, "Build number"},
    {"dwNetworkGameClient", "48 89 3D ? ? ? ? FF 87 28 02 00 00", 3, 7, "Network game client"},
    {"dwWindowHeight", "8B 05 ? ? ? ? 89 03", 2, 6, "Window height"},
    {"dwWindowWidth", "8B 05 ? ? ? ? 89 07", 2, 6, "Window width"},
    {"dwNetworkGameClient_deltaTick", "4C 8D B7 ? ? ? ? 4C 89 7C 24", 3, 7, "Delta tick (dynamic)"},
    {"dwNetworkGameClient_signOnState", "44 8B 81 ? ? ? ? 48 8D 0D", 3, 7, "Sign on state (dynamic)"},
    {"dwNetworkGameClient_isBackgroundMap", "0F B6 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 0F B6 81", 3, 7, "Is background map (dynamic)"},
    {"dwNetworkGameClient_localPlayer", "42 8B 94 D3 ? ? ? ? 5B 49 FF E3", 4, 8, "Local player network (dynamic)"},
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
    {"dwSoundSystem_engineViewData", "0F 11 47 ? 0F 10 4B ? 0F 11 8F", 3, 7, "Sound engine view data (dynamic)"},
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
    {"dwViewAngles_offset", 0x4520, "client.dll", "ViewAngles offset from dwCSGOInput"},
    {"dwLocalPlayerPawn_offset", 0xE0, "client.dll", "LocalPlayerPawn offset from dwPrediction"},
    {"dwGameEntitySystem_highestEntityIndex_offset", 0x20F0, "client.dll", "Highest entity index from GameEntitySystem"},
    {"dwNetworkGameClient_clientTickCount", 0x390, "engine2.dll", "Client tick count offset"},
    {"dwNetworkGameClient_serverTickCount", 0x394, "engine2.dll", "Server tick count offset"},
    {"dwNetworkGameClient_deltaTick_offset", 0x23C, "engine2.dll", "Delta tick offset"},
    {"dwNetworkGameClient_maxClients", 0x230, "engine2.dll", "Max clients offset"},
    {"dwNetworkGameClient_signOnState_offset", 0x220, "engine2.dll", "Sign on state offset"},
    {"dwNetworkGameClient_isBackgroundMap_offset", 0x2C1467, "engine2.dll", "Is background map offset"},
    {"dwNetworkGameClient_localPlayer_offset", 0xE8, "engine2.dll", "Local player index offset"},
    {"dwSoundSystem_engineViewData", 0x7C, "soundsystem.dll", "Engine view data offset from dwSoundSystem"},
};

// Button list pattern
inline const char* BUTTON_LIST_PATTERN = "48 8B 15 ? ? ? ? 48 85 D2 74 ? 48 8B 02 48 85 C0";

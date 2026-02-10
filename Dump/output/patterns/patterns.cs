// Auto-generated patterns
namespace cs2_dumper {
    public static class client_dll {
        public const string dwCSGOInput = "48 89 05 ? ? ? ? 0F 57 C0 0F 11 05";
        public const string dwEntityList = "48 89 35 ? ? ? ? 48 85 F6";
        public const string dwEntityList = "48 89 0D ? ? ? ? E9 ? ? ? ? CC";
        public const string dwGameEntitySystem = "48 8B 3D ? ? ? ? 48 89 3D";
        public const string dwGameEntitySystem = "48 8B 1D ? ? ? ? 48 89 1D ? ? ? ? 4C 63 B3";
        public const string dwGameRules = "48 89 1D ? ? ? ? FF 15 ? ? ? ? 84 C0";
        public const string dwGlobalVars = "48 89 15 ? ? ? ? 48 89 42";
        public const string dwGlowManager = "48 8B 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 41";
        public const string dwLocalPlayerController = "48 8B 05 ? ? ? ? 41 89 BE";
        public const string dwPlantedC4 = "48 8B 15 ? ? ? ? 41 FF C0";
        public const string dwPlantedC4 = "48 8B 15 ? ? ? ? 41 FF C0 48 8D 4C 24 ? 44 89 05";
        public const string dwPrediction = "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 56 41 54";
        public const string dwSensitivity = "48 8D 0D ? ? ? ? 66 0F 6E CD";
        public const string dwSensitivity = "48 8D 0D ? ? ? ? ? ? ? ? 66 0F 6E CD";
        public const string dwSensitivity_sensitivity = "48 8D 7E ? 48 0F BA E0 ? 72 ? 85 D2 49 0F 4F FF";
        public const string dwViewAngles_fieldOffset = "F2 42 0F 10 84 28 ? ? ? ? 89 54 24 20";
        public const string dwLocalPlayerPawn_fieldOffset = "4C 39 B6 ? ? ? ? 74 ? 44 88 BE";
        public const string dwViewMatrix = "48 8D 0D ? ? ? ? 48 C1 E0 06";
        public const string dwViewRender = "48 89 05 ? ? ? ? 48 8B C8 48 85 C0";
        public const string dwWeaponC4 = "48 89 05 ? ? ? ? F7 C1 ? ? ? ? 74";
        public const string dwWeaponC4 = "48 8B 15 ? ? ? ? 48 8B 5C 24 ? FF C0 89 05 ? ? ? ? 48 8B C6 48 89 34 EA 80 BE";
        public const string dwGameEntitySystem_highestEntityIndex_offset = "FF 81 ? ? ? ? 48 85 D2";
        public const string dwInputSystem = "48 89 05 ? ? ? ? 48 8B 01 FF 50 08";
        public const string dwPlayerResource = "48 8B 0D ? ? ? ? 48 8B 01 FF 90 ? ? ? ? 48 8B";
        public const string dwSignOnState = "44 8B 05 ? ? ? ? 83 F8 02";
        public const string dwHostMaps = "48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 48 FF 60 30";
        public const string dwViewMatrix = "48 8D 0D ? ? ? ? 48 C1 E0 06 48 03 C1 C3";
        public const string dwViewRender = "48 89 05 ? ? ? ? 48 8B C8 48 85 C0 74 ? 48 8B 10";
        public const string dwLocalPlayerController = "48 8B 05 ? ? ? ? 48 85 C0 74 ? 8B 88";
        public const string dwGlobalVars = "48 89 15 ? ? ? ? 48 8B 42 ? 48 89 45";
    }
    public static class engine2_dll {
        public const string dwBuildNumber = "89 05 ? ? ? ? 48 8D 0D ? ? ? ? FF 15";
        public const string dwBuildNumber = "89 05 ? ? ? ? 48 8D 0D ? ? ? ? FF 15 ? ? ? ? 48 8B 0D";
        public const string dwNetworkGameClient = "48 89 3D ? ? ? ? FF 87 28 02 00 00";
        public const string dwNetworkGameClient = "48 89 3D ? ? ? ? FF 87";
        public const string dwNetworkGameClient = "48 89 3D ? ? ? ? FF 87 2C 02 00 00";
        public const string dwWindowHeight = "8B 05 ? ? ? ? 89 03";
        public const string dwWindowWidth = "8B 05 ? ? ? ? 89 07";
        public const string dwNetworkGameClient_deltaTick = "4C 8D B7 ? ? ? ? 4C 89 7C 24";
        public const string dwNetworkGameClient_signOnState = "44 8B 81 ? ? ? ? 48 8D 0D";
        public const string dwNetworkGameClient_isBackgroundMap = "0F B6 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 0F B6 81";
        public const string dwNetworkGameClient_isBackgroundMap = "0F B6 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53";
        public const string dwNetworkGameClient_localPlayer = "42 8B 94 D3 ? ? ? ? 5B 49 FF E3";
        public const string dwNetworkGameClient_clientTickCount = "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 8B 81";
        public const string dwNetworkGameClient_serverTickCount = "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 83 B9";
        public const string dwNetworkGameClient_maxClients = "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 81";
        public const string dwWindowWidth = "89 05 ? ? ? ? 8B 05 ? ? ? ? 89 07";
        public const string dwWindowHeight = "89 05 ? ? ? ? 8B 05 ? ? ? ? 89 03";
        public const string dwBuildNumber = "8B 05 ? ? ? ? 89 05 ? ? ? ? 48 8D 0D";
    }
    public static class inputsystem_dll {
        public const string dwInputSystem = "48 89 05 ? ? ? ? 33 C0";
    }
    public static class matchmaking_dll {
        public const string dwGameTypes = "48 8D 0D ? ? ? ? FF 90";
    }
    public static class soundsystem_dll {
        public const string dwSoundSystem = "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 89 15";
        public const string dwSoundSystem_engineViewData = "0F 11 47 ? 0F 10 4B ? 0F 11 8F";
        public const string dwSoundSystem_engineViewData = "0F 11 47 ? 0F 10 4E ? 0F 11 8F";
    }
    public static class tier0_dll {
        public const string dwCommandLine = "48 8B 05 ? ? ? ? 48 85 C0 74 ? 48 8D 0D";
    }
}

// Auto-generated patterns
pub mod client_dll {
    pub const DWCSGOINPUT: &str = "48 89 05 ? ? ? ? 0F 57 C0 0F 11 05";
    pub const DWENTITYLIST: &str = "48 89 35 ? ? ? ? 48 85 F6";
    pub const DWENTITYLIST: &str = "48 89 0D ? ? ? ? E9 ? ? ? ? CC";
    pub const DWGAMEENTITYSYSTEM: &str = "48 8B 3D ? ? ? ? 48 89 3D";
    pub const DWGAMEENTITYSYSTEM: &str = "48 8B 1D ? ? ? ? 48 89 1D ? ? ? ? 4C 63 B3";
    pub const DWGAMERULES: &str = "48 89 1D ? ? ? ? FF 15 ? ? ? ? 84 C0";
    pub const DWGLOBALVARS: &str = "48 89 15 ? ? ? ? 48 89 42";
    pub const DWGLOWMANAGER: &str = "48 8B 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 41";
    pub const DWLOCALPLAYERCONTROLLER: &str = "48 8B 05 ? ? ? ? 41 89 BE";
    pub const DWPLANTEDC4: &str = "48 8B 15 ? ? ? ? 41 FF C0";
    pub const DWPLANTEDC4: &str = "48 8B 15 ? ? ? ? 41 FF C0 48 8D 4C 24 ? 44 89 05";
    pub const DWPREDICTION: &str = "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53 56 41 54";
    pub const DWSENSITIVITY: &str = "48 8D 0D ? ? ? ? 66 0F 6E CD";
    pub const DWSENSITIVITY: &str = "48 8D 0D ? ? ? ? ? ? ? ? 66 0F 6E CD";
    pub const DWSENSITIVITY_SENSITIVITY: &str = "48 8D 7E ? 48 0F BA E0 ? 72 ? 85 D2 49 0F 4F FF";
    pub const DWVIEWANGLES_FIELDOFFSET: &str = "F2 42 0F 10 84 28 ? ? ? ? 89 54 24 20";
    pub const DWLOCALPLAYERPAWN_FIELDOFFSET: &str = "4C 39 B6 ? ? ? ? 74 ? 44 88 BE";
    pub const DWVIEWMATRIX: &str = "48 8D 0D ? ? ? ? 48 C1 E0 06";
    pub const DWVIEWRENDER: &str = "48 89 05 ? ? ? ? 48 8B C8 48 85 C0";
    pub const DWWEAPONC4: &str = "48 89 05 ? ? ? ? F7 C1 ? ? ? ? 74";
    pub const DWWEAPONC4: &str = "48 8B 15 ? ? ? ? 48 8B 5C 24 ? FF C0 89 05 ? ? ? ? 48 8B C6 48 89 34 EA 80 BE";
    pub const DWGAMEENTITYSYSTEM_HIGHESTENTITYINDEX_OFFSET: &str = "FF 81 ? ? ? ? 48 85 D2";
    pub const DWINPUTSYSTEM: &str = "48 89 05 ? ? ? ? 48 8B 01 FF 50 08";
    pub const DWPLAYERRESOURCE: &str = "48 8B 0D ? ? ? ? 48 8B 01 FF 90 ? ? ? ? 48 8B";
    pub const DWSIGNONSTATE: &str = "44 8B 05 ? ? ? ? 83 F8 02";
    pub const DWHOSTMAPS: &str = "48 8B 0D ? ? ? ? 48 85 C9 74 ? 48 8B 01 48 FF 60 30";
}
pub mod engine2_dll {
    pub const DWBUILDNUMBER: &str = "89 05 ? ? ? ? 48 8D 0D ? ? ? ? FF 15";
    pub const DWBUILDNUMBER: &str = "89 05 ? ? ? ? 48 8D 0D ? ? ? ? FF 15 ? ? ? ? 48 8B 0D";
    pub const DWNETWORKGAMECLIENT: &str = "48 89 3D ? ? ? ? FF 87 28 02 00 00";
    pub const DWNETWORKGAMECLIENT: &str = "48 89 3D ? ? ? ? FF 87";
    pub const DWNETWORKGAMECLIENT: &str = "48 89 3D ? ? ? ? FF 87 2C 02 00 00";
    pub const DWWINDOWHEIGHT: &str = "8B 05 ? ? ? ? 89 03";
    pub const DWWINDOWWIDTH: &str = "8B 05 ? ? ? ? 89 07";
    pub const DWNETWORKGAMECLIENT_DELTATICK: &str = "4C 8D B7 ? ? ? ? 4C 89 7C 24";
    pub const DWNETWORKGAMECLIENT_SIGNONSTATE: &str = "44 8B 81 ? ? ? ? 48 8D 0D";
    pub const DWNETWORKGAMECLIENT_ISBACKGROUNDMAP: &str = "0F B6 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 0F B6 81";
    pub const DWNETWORKGAMECLIENT_ISBACKGROUNDMAP: &str = "0F B6 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53";
    pub const DWNETWORKGAMECLIENT_LOCALPLAYER: &str = "42 8B 94 D3 ? ? ? ? 5B 49 FF E3";
    pub const DWNETWORKGAMECLIENT_CLIENTTICKCOUNT: &str = "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 8B 81";
    pub const DWNETWORKGAMECLIENT_SERVERTICKCOUNT: &str = "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 83 B9";
    pub const DWNETWORKGAMECLIENT_MAXCLIENTS: &str = "8B 81 ? ? ? ? C3 CC CC CC CC CC CC CC CC 8B 81";
}
pub mod inputsystem_dll {
    pub const DWINPUTSYSTEM: &str = "48 89 05 ? ? ? ? 33 C0";
}
pub mod matchmaking_dll {
    pub const DWGAMETYPES: &str = "48 8D 0D ? ? ? ? FF 90";
}
pub mod soundsystem_dll {
    pub const DWSOUNDSYSTEM: &str = "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 89 15";
    pub const DWSOUNDSYSTEM_ENGINEVIEWDATA: &str = "0F 11 47 ? 0F 10 4B ? 0F 11 8F";
    pub const DWSOUNDSYSTEM_ENGINEVIEWDATA: &str = "0F 11 47 ? 0F 10 4E ? 0F 11 8F";
}
pub mod tier0_dll {
    pub const DWCOMMANDLINE: &str = "48 8B 05 ? ? ? ? 48 85 C0 74 ? 48 8D 0D";
}

// Auto-generated module SDK: client.dll
#pragma once

#include "../sdk_types.hpp"

namespace cs2 {
struct C_CSGO_TeamIntroCharacterPosition {
};
struct C_FireCrackerBlast {
};
struct CCSGO_WingmanIntroCounterTerroristPosition {
};
struct CPulseCell_WaitForCursorsWithTag {
    // 0x98
    bool m_bTagSelfWhenComplete;
    // 0x9c
    PulseCursorCancelPriority_t m_nDesiredKillPriority;
};
struct C_SceneEntity_QueuedEvents_t {
    // 0x0
    float starttime;
};
struct CCSPlayer_PingServices {
    // 0x48
    CHandle<T> m_hPlayerPing;
};
struct CEconItemAttribute {
    // 0x30
    uint16_t m_iAttributeDefinitionIndex;
    // 0x34
    float m_flValue;
    // 0x38
    float m_flInitialValue;
    // 0x3c
    int32_t m_nRefundableCurrency;
    // 0x40
    bool m_bSetBonus;
};
struct CBaseTriggerAPI {
};
struct PredictedDamageTag_t {
    // 0x30
    GameTick_t nTagTick;
    // 0x34
    float flFlinchModSmall;
    // 0x38
    float flFlinchModLarge;
    // 0x3c
    float flFriendlyFireDamageReductionRatio;
};
struct CFuncRetakeBarrier {
};
struct C_EnvWindShared {
    // 0x8
    GameTime_t m_flStartTime;
    // 0xc
    uint32_t m_iWindSeed;
    // 0x10
    uint16_t m_iMinWind;
    // 0x12
    uint16_t m_iMaxWind;
    // 0x14
    int32_t m_windRadius;
    // 0x18
    uint16_t m_iMinGust;
    // 0x1a
    uint16_t m_iMaxGust;
    // 0x1c
    float m_flMinGustDelay;
    // 0x20
    float m_flMaxGustDelay;
    // 0x24
    float m_flGustDuration;
    // 0x28
    uint16_t m_iGustDirChange;
    // 0x2a
    uint16_t m_iInitialWindDir;
    // 0x2c
    float m_flInitialWindSpeed;
    // 0x30
    Vector m_location;
    // 0x3c
    CHandle<T> m_hEntOwner;
};
struct C_SkyCamera {
    // 0x608
    sky3dparams_t m_skyboxData;
    // 0x698
    CUtlString m_skyboxSlotToken;
    // 0x69c
    bool m_bUseAngles;
    // 0x6a0
    C_SkyCamera* m_pNext;
};
struct CPulseCell_Base {
    // 0x8
    PulseDocNodeID_t m_nEditorNodeID;
};
struct C_FuncRotating {
};
struct C_SoundOpvarSetPointBase {
    // 0x608
    CUtlSymbolLarge m_iszStackName;
    // 0x610
    CUtlSymbolLarge m_iszOperatorName;
    // 0x618
    CUtlSymbolLarge m_iszOpvarName;
    // 0x620
    int32_t m_iOpvarIndex;
    // 0x624
    bool m_bUseAutoCompare;
    // 0x625
    bool m_bFastRefresh;
};
struct C_EnvCubemapFog {
    // 0x608
    float m_flEndDistance;
    // 0x60c
    float m_flStartDistance;
    // 0x610
    float m_flFogFalloffExponent;
    // 0x614
    bool m_bHeightFogEnabled;
    // 0x618
    float m_flFogHeightWidth;
    // 0x61c
    float m_flFogHeightEnd;
    // 0x620
    float m_flFogHeightStart;
    // 0x624
    float m_flFogHeightExponent;
    // 0x628
    float m_flLODBias;
    // 0x62c
    bool m_bActive;
    // 0x62d
    bool m_bStartDisabled;
    // 0x630
    float m_flFogMaxOpacity;
    // 0x634
    int32_t m_nCubemapSourceType;
    // 0x638
    CStrongHandle<T> m_hSkyMaterial;
    // 0x640
    CUtlSymbolLarge m_iszSkyEntity;
    // 0x648
    CStrongHandle<T> m_hFogCubemapTexture;
    // 0x650
    bool m_bHasHeightFogEnd;
    // 0x651
    bool m_bFirstTime;
};
struct C_CSGO_TeamSelectTerroristPosition {
};
struct C_BaseFlex_Emphasized_Phoneme {
    // 0x0
    CUtlString m_sClassName;
    // 0x18
    float m_flAmount;
    // 0x1c
    bool m_bRequired;
    // 0x1d
    bool m_bBasechecked;
    // 0x1e
    bool m_bValid;
};
struct C_EnvParticleGlow {
    // 0x1438
    float m_flAlphaScale;
    // 0x143c
    float m_flRadiusScale;
    // 0x1440
    float m_flSelfIllumScale;
    // 0x1444
    Color m_ColorTint;
    // 0x1448
    CStrongHandle<T> m_hTextureOverride;
};
struct CCS_PortraitWorldCallbackHandler {
};
struct CCSPlayerController_InventoryServices {
    // 0x40
    CUtlVector<T> m_vecNetworkableLoadout;
    // 0x58
    uint16_t m_unMusicID;
    // 0x5c
    MedalRank_t[6] m_rank;
    // 0x74
    int32_t m_nPersonaDataPublicLevel;
    // 0x78
    int32_t m_nPersonaDataPublicCommendsLeader;
    // 0x7c
    int32_t m_nPersonaDataPublicCommendsTeacher;
    // 0x80
    int32_t m_nPersonaDataPublicCommendsFriendly;
    // 0x84
    int32_t m_nPersonaDataXpTrailLevel;
    // 0x88
    C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots;
};
struct CCSPlayerModernJump {
    // 0x10
    GameTick_t m_nLastActualJumpPressTick;
    // 0x14
    float m_flLastActualJumpPressFrac;
    // 0x18
    GameTick_t m_nLastUsableJumpPressTick;
    // 0x1c
    float m_flLastUsableJumpPressFrac;
    // 0x20
    GameTick_t m_nLastLandedTick;
    // 0x24
    float m_flLastLandedFrac;
    // 0x28
    float m_flLastLandedVelocityX;
    // 0x2c
    float m_flLastLandedVelocityY;
    // 0x30
    float m_flLastLandedVelocityZ;
};
struct C_EconEntity_AttachedModelData_t {
    // 0x0
    int32_t m_iModelDisplayFlags;
};
struct CPulse_ResumePoint {
};
struct CTriggerFan {
    // 0xf58
    Vector m_vFanOriginOffset;
    // 0xf64
    Vector m_vDirection;
    // 0xf70
    bool m_bPushTowardsInfoTarget;
    // 0xf71
    bool m_bPushAwayFromInfoTarget;
    // 0xf80
    Quaternion m_qNoiseDelta;
    // 0xf90
    CHandle<T> m_hInfoFan;
    // 0xf94
    float m_flForce;
    // 0xf98
    bool m_bFalloff;
    // 0xfa0
    CountdownTimer m_RampTimer;
};
struct C_HostageCarriableProp {
};
struct C_BulletHitModel {
    // 0x1168
    matrix3x4_t m_matLocal;
    // 0x1198
    int32_t m_iBoneIndex;
    // 0x119c
    CHandle<T> m_hPlayerParent;
    // 0x11a0
    bool m_bIsHit;
    // 0x11a4
    float m_flTimeCreated;
    // 0x11a8
    Vector m_vecStartPos;
};
struct C_FuncElectrifiedVolume {
    // 0xe88
    ParticleIndex_t m_nAmbientEffect;
    // 0xe90
    CUtlSymbolLarge m_EffectName;
    // 0xe98
    bool m_bState;
};
struct C_MapVetoPickController {
    // 0x618
    int32_t m_nDraftType;
    // 0x61c
    int32_t m_nTeamWinningCoinToss;
    // 0x620
    int32[64] m_nTeamWithFirstChoice;
    // 0x720
    int32[7] m_nVoteMapIdsList;
    // 0x73c
    int32[64] m_nAccountIDs;
    // 0x83c
    int32[64] m_nMapId0;
    // 0x93c
    int32[64] m_nMapId1;
    // 0xa3c
    int32[64] m_nMapId2;
    // 0xb3c
    int32[64] m_nMapId3;
    // 0xc3c
    int32[64] m_nMapId4;
    // 0xd3c
    int32[64] m_nMapId5;
    // 0xe3c
    int32[64] m_nStartingSide0;
    // 0xf3c
    int32_t m_nCurrentPhase;
    // 0xf40
    int32_t m_nPhaseStartTick;
    // 0xf44
    int32_t m_nPhaseDurationTicks;
    // 0xf48
    int32_t m_nPostDataUpdateTick;
    // 0xf4c
    bool m_bDisabledHud;
};
struct C_EnvVolumetricFogVolume {
    // 0x608
    bool m_bActive;
    // 0x60c
    Vector m_vBoxMins;
    // 0x618
    Vector m_vBoxMaxs;
    // 0x624
    bool m_bStartDisabled;
    // 0x625
    bool m_bIndirectUseLPVs;
    // 0x628
    float m_flStrength;
    // 0x62c
    int32_t m_nFalloffShape;
    // 0x630
    float m_flFalloffExponent;
    // 0x634
    float m_flHeightFogDepth;
    // 0x638
    float m_fHeightFogEdgeWidth;
    // 0x63c
    float m_fIndirectLightStrength;
    // 0x640
    float m_fSunLightStrength;
    // 0x644
    float m_fNoiseStrength;
    // 0x648
    Color m_TintColor;
    // 0x64c
    bool m_bOverrideTintColor;
    // 0x64d
    bool m_bOverrideIndirectLightStrength;
    // 0x64e
    bool m_bOverrideSunLightStrength;
    // 0x64f
    bool m_bOverrideNoiseStrength;
};
struct C_CSGO_EndOfMatchCharacterPosition {
};
struct CPulseCell_PlaySequence {
    // 0x48
    CUtlString m_SequenceName;
    // 0x50
    PulseNodeDynamicOutflows_t m_PulseAnimEvents;
    // 0x68
    CPulse_ResumePoint m_OnFinished;
    // 0xb0
    CPulse_ResumePoint m_OnCanceled;
};
struct C_BaseEntityAPI {
};
struct C_BarnLight {
    // 0xe88
    bool m_bEnabled;
    // 0xe8c
    int32_t m_nColorMode;
    // 0xe90
    Color m_Color;
    // 0xe94
    float m_flColorTemperature;
    // 0xe98
    float m_flBrightness;
    // 0xe9c
    float m_flBrightnessScale;
    // 0xea0
    int32_t m_nDirectLight;
    // 0xea4
    int32_t m_nBakedShadowIndex;
    // 0xea8
    int32_t m_nLightPathUniqueId;
    // 0xeac
    int32_t m_nLightMapUniqueId;
    // 0xeb0
    int32_t m_nLuminaireShape;
    // 0xeb4
    float m_flLuminaireSize;
    // 0xeb8
    float m_flLuminaireAnisotropy;
    // 0xec0
    CUtlString m_LightStyleString;
    // 0xec8
    GameTime_t m_flLightStyleStartTime;
    // 0xed0
    CUtlString m_QueuedLightStyleStrings;
    // 0xee8
    CUtlString m_LightStyleEvents;
    // 0xf00
    CHandle<T> m_LightStyleTargets;
    // 0xf18
    CEntityIOOutput[4] m_StyleEvent;
    // 0xf78
    CStrongHandle<T> m_hLightCookie;
    // 0xf80
    float m_flShape;
    // 0xf84
    float m_flSoftX;
    // 0xf88
    float m_flSoftY;
    // 0xf8c
    float m_flSkirt;
    // 0xf90
    float m_flSkirtNear;
    // 0xf94
    Vector m_vSizeParams;
    // 0xfa0
    float m_flRange;
    // 0xfa4
    Vector m_vShear;
    // 0xfb0
    int32_t m_nBakeSpecularToCubemaps;
    // 0xfb4
    Vector m_vBakeSpecularToCubemapsSize;
    // 0xfc0
    int32_t m_nCastShadows;
    // 0xfc4
    int32_t m_nShadowMapSize;
    // 0xfc8
    int32_t m_nShadowPriority;
    // 0xfcc
    bool m_bContactShadow;
    // 0xfcd
    bool m_bForceShadowsEnabled;
    // 0xfd0
    int32_t m_nBounceLight;
    // 0xfd4
    float m_flBounceScale;
    // 0xfd8
    bool m_bDynamicBounce;
    // 0xfdc
    float m_flMinRoughness;
    // 0xfe0
    Vector m_vAlternateColor;
    // 0xfec
    float m_fAlternateColorBrightness;
    // 0xff0
    int32_t m_nFog;
    // 0xff4
    float m_flFogStrength;
    // 0xff8
    int32_t m_nFogShadows;
    // 0xffc
    float m_flFogScale;
    // 0x1000
    bool m_bFogMixedShadows;
    // 0x1004
    float m_flFadeSizeStart;
    // 0x1008
    float m_flFadeSizeEnd;
    // 0x100c
    float m_flShadowFadeSizeStart;
    // 0x1010
    float m_flShadowFadeSizeEnd;
    // 0x1014
    bool m_bPrecomputedFieldsValid;
    // 0x1018
    Vector m_vPrecomputedBoundsMins;
    // 0x1024
    Vector m_vPrecomputedBoundsMaxs;
    // 0x1030
    Vector m_vPrecomputedOBBOrigin;
    // 0x103c
    QAngle m_vPrecomputedOBBAngles;
    // 0x1048
    Vector m_vPrecomputedOBBExtent;
    // 0x1054
    int32_t m_nPrecomputedSubFrusta;
    // 0x1058
    Vector m_vPrecomputedOBBOrigin0;
    // 0x1064
    QAngle m_vPrecomputedOBBAngles0;
    // 0x1070
    Vector m_vPrecomputedOBBExtent0;
    // 0x107c
    Vector m_vPrecomputedOBBOrigin1;
    // 0x1088
    QAngle m_vPrecomputedOBBAngles1;
    // 0x1094
    Vector m_vPrecomputedOBBExtent1;
    // 0x10a0
    Vector m_vPrecomputedOBBOrigin2;
    // 0x10ac
    QAngle m_vPrecomputedOBBAngles2;
    // 0x10b8
    Vector m_vPrecomputedOBBExtent2;
    // 0x10c4
    Vector m_vPrecomputedOBBOrigin3;
    // 0x10d0
    QAngle m_vPrecomputedOBBAngles3;
    // 0x10dc
    Vector m_vPrecomputedOBBExtent3;
    // 0x10e8
    Vector m_vPrecomputedOBBOrigin4;
    // 0x10f4
    QAngle m_vPrecomputedOBBAngles4;
    // 0x1100
    Vector m_vPrecomputedOBBExtent4;
    // 0x110c
    Vector m_vPrecomputedOBBOrigin5;
    // 0x1118
    QAngle m_vPrecomputedOBBAngles5;
    // 0x1124
    Vector m_vPrecomputedOBBExtent5;
    // 0x1170
    bool m_bInitialBoneSetup;
    // 0x1178
    C_NetworkUtlVectorBase< uint16 > m_VisClusters;
};
struct CPulseCell_LerpCameraSettings {
    // 0x90
    float m_flSeconds;
    // 0x94
    PointCameraSettings_t m_Start;
    // 0xa4
    PointCameraSettings_t m_End;
};
struct CPointOffScreenIndicatorUi {
    // 0x10e0
    bool m_bBeenEnabled;
    // 0x10e1
    bool m_bHide;
    // 0x10e4
    float m_flSeenTargetTime;
    // 0x10e8
    C_PointClientUIWorldPanel* m_pTargetPanel;
};
struct CCSObserver_UseServices {
};
struct C_PostProcessingVolume {
    // 0xf68
    CStrongHandle<T> m_hPostSettings;
    // 0xf70
    float m_flFadeDuration;
    // 0xf74
    float m_flMinLogExposure;
    // 0xf78
    float m_flMaxLogExposure;
    // 0xf7c
    float m_flMinExposure;
    // 0xf80
    float m_flMaxExposure;
    // 0xf84
    float m_flExposureCompensation;
    // 0xf88
    float m_flExposureFadeSpeedUp;
    // 0xf8c
    float m_flExposureFadeSpeedDown;
    // 0xf90
    float m_flTonemapEVSmoothingRange;
    // 0xf94
    bool m_bMaster;
    // 0xf95
    bool m_bExposureControl;
};
struct CCSPlayer_UseServices {
};
struct C_CSGO_CounterTerroristWingmanIntroCamera {
};
struct CPulseCell_PickBestOutflowSelector {
    // 0x48
    PulseBestOutflowRules_t m_nCheckType;
    // 0x50
    PulseSelectorOutflowList_t m_OutflowList;
};
struct CInfoFan {
    // 0x648
    float m_fFanForceMaxRadius;
    // 0x64c
    float m_fFanForceMinRadius;
    // 0x650
    float m_flCurveDistRange;
    // 0x658
    CUtlSymbolLarge m_FanForceCurveString;
};
struct C_VoteController {
    // 0x618
    int32_t m_iActiveIssueIndex;
    // 0x61c
    int32_t m_iOnlyTeamToVote;
    // 0x620
    int32[5] m_nVoteOptionCount;
    // 0x634
    int32_t m_nPotentialVotes;
    // 0x638
    bool m_bVotesDirty;
    // 0x639
    bool m_bTypeDirty;
    // 0x63a
    bool m_bIsYesNoVote;
};
struct C_CSPlayerPawnBase {
    // 0x15c0
    CCSPlayer_PingServices* m_pPingServices;
    // 0x15c8
    CSPlayerState m_previousPlayerState;
    // 0x15cc
    CSPlayerState m_iPlayerState;
    // 0x15d0
    bool m_bHasMovedSinceSpawn;
    // 0x15d4
    GameTime_t m_flLastSpawnTimeIndex;
    // 0x15d8
    int32_t m_iProgressBarDuration;
    // 0x15dc
    float m_flProgressBarStartTime;
    // 0x15e0
    GameTime_t m_flClientDeathTime;
    // 0x15e4
    float m_flFlashBangTime;
    // 0x15e8
    float m_flFlashScreenshotAlpha;
    // 0x15ec
    float m_flFlashOverlayAlpha;
    // 0x15f0
    bool m_bFlashBuildUp;
    // 0x15f1
    bool m_bFlashDspHasBeenCleared;
    // 0x15f2
    bool m_bFlashScreenshotHasBeenGrabbed;
    // 0x15f4
    float m_flFlashMaxAlpha;
    // 0x15f8
    float m_flFlashDuration;
    // 0x15fc
    GameTime_t m_flClientHealthFadeChangeTimestamp;
    // 0x1600
    int32_t m_nClientHealthFadeParityValue;
    // 0x1604
    float m_fNextThinkPushAway;
    // 0x160c
    float m_flCurrentMusicStartTime;
    // 0x1610
    float m_flMusicRoundStartTime;
    // 0x1614
    bool m_bDeferStartMusicOnWarmup;
    // 0x1618
    float m_flLastSmokeOverlayAlpha;
    // 0x161c
    float m_flLastSmokeAge;
    // 0x1620
    Vector m_vLastSmokeOverlayColor;
    // 0x1648
    CHandle<T> m_hOriginalController;
};
struct C_C4 {
    // 0x1f40
    ParticleIndex_t m_activeLightParticleIndex;
    // 0x1f44
    C4LightEffect_t m_eActiveLightEffect;
    // 0x1f48
    bool m_bStartedArming;
    // 0x1f4c
    GameTime_t m_fArmedTime;
    // 0x1f50
    bool m_bBombPlacedAnimation;
    // 0x1f51
    bool m_bIsPlantingViaUse;
    // 0x1f58
    EntitySpottedState_t m_entitySpottedState;
    // 0x1f70
    int32_t m_nSpotRules;
    // 0x1f74
    bool[7] m_bPlayedArmingBeeps;
    // 0x1f7b
    bool m_bBombPlanted;
};
struct C_BreakableProp {
    // 0x11a0
    CPropDataComponent m_CPropDataComponent;
    // 0x11e0
    CEntityIOOutput m_OnStartDeath;
    // 0x11f8
    CEntityIOOutput m_OnBreak;
    // 0x1210
    CEntityOutputTemplate< float32, float32 > m_OnHealthChanged;
    // 0x1230
    CEntityIOOutput m_OnTakeDamage;
    // 0x1248
    float m_impactEnergyScale;
    // 0x124c
    int32_t m_iMinHealthDmg;
    // 0x1250
    float m_flPressureDelay;
    // 0x1254
    float m_flDefBurstScale;
    // 0x1258
    Vector m_vDefBurstOffset;
    // 0x1264
    CHandle<T> m_hBreaker;
    // 0x1268
    PerformanceMode_t m_PerformanceMode;
    // 0x126c
    GameTime_t m_flPreventDamageBeforeTime;
    // 0x1270
    BreakableContentsType_t m_BreakableContentsType;
    // 0x1278
    CUtlString m_strBreakableContentsPropGroupOverride;
    // 0x1280
    CUtlString m_strBreakableContentsParticleOverride;
    // 0x1288
    bool m_bHasBreakPiecesOrCommands;
    // 0x128c
    float m_explodeDamage;
    // 0x1290
    float m_explodeRadius;
    // 0x1294
    BaseExplosionTypes_t m_nExplosionType;
    // 0x1298
    float m_explosionDelay;
    // 0x12a0
    CUtlSymbolLarge m_explosionBuildupSound;
    // 0x12a8
    CUtlSymbolLarge m_explosionCustomEffect;
    // 0x12b0
    CUtlSymbolLarge m_explosionCustomSound;
    // 0x12b8
    CUtlSymbolLarge m_explosionModifier;
    // 0x12c0
    CHandle<T> m_hPhysicsAttacker;
    // 0x12c4
    GameTime_t m_flLastPhysicsInfluenceTime;
    // 0x12c8
    float m_flDefaultFadeScale;
    // 0x12cc
    CHandle<T> m_hLastAttacker;
};
struct CCSGO_WingmanIntroTerroristPosition {
};
struct CPrecipitationVData {
    // 0x28
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys m_szParticlePrecipitationEffect;
    // 0x108
    float m_flInnerDistance;
    // 0x10c
    ParticleAttachment_t m_nAttachType;
    // 0x110
    bool m_bBatchSameVolumeType;
    // 0x114
    int32_t m_nRTEnvCP;
    // 0x118
    int32_t m_nRTEnvCPComponent;
    // 0x120
    CUtlString m_szModifier;
};
struct C_RetakeGameRules {
    // 0x138
    int32_t m_nMatchSeed;
    // 0x13c
    bool m_bBlockersPresent;
    // 0x13d
    bool m_bRoundInProgress;
    // 0x140
    int32_t m_iFirstSecondHalfRound;
    // 0x144
    int32_t m_iBombSite;
    // 0x148
    CHandle<T> m_hBombPlanter;
};
struct CPulseCell_WaitForObservable {
    // 0x48
    PulseObservableBoolExpression_t m_Condition;
    // 0xc0
    CPulse_ResumePoint m_OnTrue;
};
struct C_SoundAreaEntitySphere {
    // 0x630
    float m_flRadius;
};
struct CPulseCell_Step_EntFire {
    // 0x48
    CUtlString m_Input;
};
struct C_WeaponAWP {
};
struct C_BaseButton {
    // 0xe88
    CHandle<T> m_glowEntity;
    // 0xe8c
    bool m_usable;
    // 0xe90
    CUtlSymbolLarge m_szDisplayText;
};
struct CCSObserver_ObserverServices {
    // 0x64
    ObserverInterpState_t m_obsInterpState;
};
struct CHitboxComponent {
    // 0x14
    float m_flBoundsExpandRadius;
};
struct ServerAuthoritativeWeaponSlot_t {
    // 0x30
    uint16_t unClass;
    // 0x32
    uint16_t unSlot;
    // 0x34
    uint16_t unItemDefIdx;
};
struct C_CSMinimapBoundary {
};
struct CPathQueryComponent {
};
struct C_Precipitation {
    // 0xf58
    float m_flDensity;
    // 0xf68
    float m_flParticleInnerDist;
    // 0xf70
    char* m_pParticleDef;
    // 0xf98
    TimedEvent[1] m_tParticlePrecipTraceTimer;
    // 0xfa0
    bool[1] m_bActiveParticlePrecipEmitter;
    // 0xfa1
    bool m_bParticlePrecipInitialized;
    // 0xfa2
    bool m_bHasSimulatedSinceLastSceneObjectUpdate;
    // 0xfa4
    int32_t m_nAvailableSheetSequencesMaxIndex;
};
struct CLogicRelay {
    // 0x608
    bool m_bDisabled;
    // 0x609
    bool m_bWaitForRefire;
    // 0x60a
    bool m_bTriggerOnce;
    // 0x60b
    bool m_bFastRetrigger;
    // 0x60c
    bool m_bPassthoughCaller;
};
struct SequenceHistory_t {
    // 0x0
    HSequence m_hSequence;
    // 0x4
    GameTime_t m_flSeqStartTime;
    // 0x8
    float m_flSeqFixedCycle;
    // 0xc
    AnimLoopMode_t m_nSeqLoopMode;
    // 0x10
    float m_flPlaybackRate;
    // 0x14
    float m_flCyclesPerSecond;
};
struct CPlayer_ItemServices {
};
struct CPulse_OutflowConnection {
    // 0x0
    PulseSymbol_t m_SourceOutflowName;
    // 0x10
    PulseRuntimeChunkIndex_t m_nDestChunk;
    // 0x14
    int32_t m_nInstruction;
    // 0x18
    PulseRegisterMap_t m_OutflowRegisterMap;
};
struct C_WeaponUMP45 {
};
struct C_WeaponG3SG1 {
};
struct C_SpotlightEnd {
    // 0xe88
    float m_flLightScale;
    // 0xe8c
    float m_Radius;
};
struct C_Fish {
    // 0x1168
    Vector m_pos;
    // 0x1174
    Vector m_vel;
    // 0x1180
    QAngle m_angles;
    // 0x118c
    int32_t m_localLifeState;
    // 0x1190
    float m_deathDepth;
    // 0x1194
    float m_deathAngle;
    // 0x1198
    float m_buoyancy;
    // 0x11a0
    CountdownTimer m_wiggleTimer;
    // 0x11b8
    float m_wigglePhase;
    // 0x11bc
    float m_wiggleRate;
    // 0x11c0
    Vector m_actualPos;
    // 0x11cc
    QAngle m_actualAngles;
    // 0x11d8
    Vector m_poolOrigin;
    // 0x11e4
    float m_waterLevel;
    // 0x11e8
    bool m_gotUpdate;
    // 0x11ec
    float m_x;
    // 0x11f0
    float m_y;
    // 0x11f4
    float m_z;
    // 0x11f8
    float m_angle;
    // 0x11fc
    float32[20] m_errorHistory;
    // 0x124c
    int32_t m_errorHistoryIndex;
    // 0x1250
    int32_t m_errorHistoryCount;
    // 0x1254
    float m_averageError;
};
struct C_WeaponFamas {
};
struct C_EnvVolumetricFogController {
    // 0x608
    float m_flScattering;
    // 0x60c
    Color m_TintColor;
    // 0x610
    float m_flAnisotropy;
    // 0x614
    float m_flFadeSpeed;
    // 0x618
    float m_flDrawDistance;
    // 0x61c
    float m_flFadeInStart;
    // 0x620
    float m_flFadeInEnd;
    // 0x624
    float m_flIndirectStrength;
    // 0x628
    int32_t m_nVolumeDepth;
    // 0x62c
    float m_fFirstVolumeSliceThickness;
    // 0x630
    int32_t m_nIndirectTextureDimX;
    // 0x634
    int32_t m_nIndirectTextureDimY;
    // 0x638
    int32_t m_nIndirectTextureDimZ;
    // 0x63c
    Vector m_vBoxMins;
    // 0x648
    Vector m_vBoxMaxs;
    // 0x654
    bool m_bActive;
    // 0x658
    GameTime_t m_flStartAnisoTime;
    // 0x65c
    GameTime_t m_flStartScatterTime;
    // 0x660
    GameTime_t m_flStartDrawDistanceTime;
    // 0x664
    float m_flStartAnisotropy;
    // 0x668
    float m_flStartScattering;
    // 0x66c
    float m_flStartDrawDistance;
    // 0x670
    float m_flDefaultAnisotropy;
    // 0x674
    float m_flDefaultScattering;
    // 0x678
    float m_flDefaultDrawDistance;
    // 0x67c
    bool m_bStartDisabled;
    // 0x67d
    bool m_bEnableIndirect;
    // 0x67e
    bool m_bIsMaster;
    // 0x680
    CStrongHandle<T> m_hFogIndirectTexture;
    // 0x688
    int32_t m_nForceRefreshCount;
    // 0x68c
    float m_fNoiseSpeed;
    // 0x690
    float m_fNoiseStrength;
    // 0x694
    Vector m_vNoiseScale;
    // 0x6a0
    float m_fWindSpeed;
    // 0x6a4
    Vector m_vWindDirection;
    // 0x6b0
    bool m_bFirstTime;
};
struct CPulseGraphDef {
    // 0x8
    PulseSymbol_t m_DomainIdentifier;
    // 0x18
    CPulseValueFullType m_DomainSubType;
    // 0x30
    PulseSymbol_t m_ParentMapName;
    // 0x40
    PulseSymbol_t m_ParentXmlName;
    // 0x50
    CUtlVector<T> m_Chunks;
    // 0x68
    CUtlVector<T> m_Cells;
    // 0x80
    CUtlVector<T> m_Vars;
    // 0x98
    CUtlVector<T> m_PublicOutputs;
    // 0xb0
    CUtlVector<T> m_InvokeBindings;
    // 0xc8
    CUtlVector<T> m_CallInfos;
    // 0xe0
    CUtlVector<T> m_Constants;
    // 0xf8
    CUtlVector<T> m_DomainValues;
    // 0x110
    CUtlVector<T> m_BlackboardReferences;
    // 0x128
    CUtlVector<T> m_OutputConnections;
};
struct C_EnvDetailController {
    // 0x608
    float m_flFadeStartDist;
    // 0x60c
    float m_flFadeEndDist;
};
struct C_EnvWindVolume {
    // 0x608
    bool m_bActive;
    // 0x60c
    Vector m_vBoxMins;
    // 0x618
    Vector m_vBoxMaxs;
    // 0x624
    bool m_bStartDisabled;
    // 0x628
    int32_t m_nShape;
    // 0x62c
    float m_fWindSpeedMultiplier;
    // 0x630
    float m_fWindTurbulenceMultiplier;
    // 0x634
    float m_fWindSpeedVariationMultiplier;
    // 0x638
    float m_fWindDirectionVariationMultiplier;
};
struct CBasePlayerControllerAPI {
};
struct CHostageRescueZoneShim {
};
struct CEnvSoundscapeAlias_snd_soundscape {
};
struct CCSPlayer_HostageServices {
    // 0x48
    CHandle<T> m_hCarriedHostage;
    // 0x4c
    CHandle<T> m_hCarriedHostageProp;
};
struct C_GameRulesProxy {
};
struct CRenderComponent {
    // 0x10
    CNetworkVarChainer _m_pChainEntity;
    // 0x50
    bool m_bIsRenderingWithViewModels;
    // 0x54
    uint32_t m_nSplitscreenFlags;
    // 0x58
    bool m_bEnableRendering;
    // 0xa8
    bool m_bInterpolationReadyToDraw;
};
struct C_Team {
    // 0x608
    CHandle<T> m_aPlayerControllers;
    // 0x620
    CHandle<T> m_aPlayers;
    // 0x638
    int32_t m_iScore;
    // 0x63c
    char[129] m_szTeamname;
};
struct C_PathParticleRopeAlias_path_particle_rope_clientside {
};
struct CPointChildModifier {
    // 0x608
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove;
};
struct CCSPlayerLegacyJump {
    // 0x10
    bool m_bOldJumpPressed;
    // 0x14
    float m_flJumpPressedTime;
};
struct C_WeaponNOVA {
};
struct C_DEagle {
};
struct C_CS2HudModelAddon {
};
struct C_TriggerMultiple {
};
struct C_CSGO_TeamPreviewCamera {
    // 0x690
    int32_t m_nVariant;
};
struct C_ColorCorrectionVolume {
    // 0xf58
    float m_LastEnterWeight;
    // 0xf5c
    GameTime_t m_LastEnterTime;
    // 0xf60
    float m_LastExitWeight;
    // 0xf64
    GameTime_t m_LastExitTime;
    // 0xf68
    bool m_bEnabled;
    // 0xf6c
    float m_MaxWeight;
    // 0xf70
    float m_FadeDuration;
    // 0xf74
    float m_Weight;
    // 0xf78
    char[512] m_lookupFilename;
};
struct CPlayer_MovementServices {
    // 0x48
    int32_t m_nImpulse;
    // 0x50
    CInButtonState m_nButtons;
    // 0x70
    uint64_t m_nQueuedButtonDownMask;
    // 0x78
    uint64_t m_nQueuedButtonChangeMask;
    // 0x80
    uint64_t m_nButtonDoublePressed;
    // 0x88
    uint32[64] m_pButtonPressedCmdNumber;
    // 0x188
    uint32_t m_nLastCommandNumberProcessed;
    // 0x190
    uint64_t m_nToggleButtonDownMask;
    // 0x1a0
    float m_flMaxspeed;
    // 0x1a4
    float32[4] m_arrForceSubtickMoveWhen;
    // 0x1b4
    float m_flForwardMove;
    // 0x1b8
    float m_flLeftMove;
    // 0x1bc
    float m_flUpMove;
    // 0x1c0
    Vector m_vecLastMovementImpulses;
    // 0x228
    QAngle m_vecOldViewAngles;
};
struct CInfoDynamicShadowHintBox {
    // 0x620
    Vector m_vBoxMins;
    // 0x62c
    Vector m_vBoxMaxs;
};
struct CBaseAnimGraphController {
    // 0x18
    AnimationAlgorithm_t m_nAnimationAlgorithm;
    // 0x20
    CAnimGraphNetworkedVariables m_animGraphNetworkedVars;
    // 0x14b0
    CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance;
    // 0x1510
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle;
    // 0x1518
    CUtlVector<T> m_vecSecondarySkeletonNames;
    // 0x1530
    CHandle<T> m_vecSecondarySkeletons;
    // 0x1548
    int32_t m_nSecondarySkeletonMasterCount;
    // 0x1550
    float m_flSoundSyncTime;
    // 0x1554
    uint32_t m_nActiveIKChainMask;
    // 0x15a8
    HSequence m_hSequence;
    // 0x15ac
    GameTime_t m_flSeqStartTime;
    // 0x15b0
    float m_flSeqFixedCycle;
    // 0x15b4
    AnimLoopMode_t m_nAnimLoopMode;
    // 0x15b8
    CNetworkedQuantizedFloat m_flPlaybackRate;
    // 0x15c4
    SequenceFinishNotifyState_t m_nNotifyState;
    // 0x15c5
    bool m_bNetworkedAnimationInputsChanged;
    // 0x15c6
    bool m_bNetworkedSequenceChanged;
    // 0x15c7
    bool m_bLastUpdateSkipped;
    // 0x15c8
    bool m_bSequenceFinished;
    // 0x15cc
    GameTick_t m_nPrevAnimUpdateTick;
    // 0x1868
    CStrongHandle<T> m_hGraphDefinitionAG2;
    // 0x1870
    C_NetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2;
    // 0x1888
    int32_t m_nSerializePoseRecipeSizeAG2;
    // 0x188c
    int32_t m_nSerializePoseRecipeVersionAG2;
    // 0x1890
    int32_t m_nServerGraphInstanceIteration;
    // 0x1894
    int32_t m_nServerSerializationContextIteration;
    // 0x1898
    ResourceId_t m_primaryGraphId;
    // 0x18a0
    C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds;
    // 0x18b8
    C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds;
    // 0x18d0
    CGlobalSymbol m_sAnimGraph2Identifier;
    // 0x1af8
    CUtlVector<T> m_vecExternalGraphs;
    // 0x1b31
    AnimationAlgorithm_t m_nPrevAnimationAlgorithm;
};
struct C_ColorCorrection {
    // 0x608
    Vector m_vecOrigin;
    // 0x614
    float m_MinFalloff;
    // 0x618
    float m_MaxFalloff;
    // 0x61c
    float m_flFadeInDuration;
    // 0x620
    float m_flFadeOutDuration;
    // 0x624
    float m_flMaxWeight;
    // 0x628
    float m_flCurWeight;
    // 0x62c
    char[512] m_netlookupFilename;
    // 0x82c
    bool m_bEnabled;
    // 0x82d
    bool m_bMaster;
    // 0x82e
    bool m_bClientSide;
    // 0x82f
    bool m_bExclusive;
    // 0x830
    bool[1] m_bEnabledOnClient;
    // 0x834
    float32[1] m_flCurWeightOnClient;
    // 0x838
    bool[1] m_bFadingIn;
    // 0x83c
    float32[1] m_flFadeStartWeight;
    // 0x840
    float32[1] m_flFadeStartTime;
    // 0x844
    float32[1] m_flFadeDuration;
};
struct CBuoyancyHelper {
    // 0x18
    CUtlString m_nFluidType;
    // 0x1c
    float m_flFluidDensity;
    // 0x20
    float m_flNeutrallyBuoyantGravity;
    // 0x24
    float m_flNeutrallyBuoyantLinearDamping;
    // 0x28
    float m_flNeutrallyBuoyantAngularDamping;
    // 0x2c
    bool m_bNeutrallyBuoyant;
    // 0x30
    CUtlVector<T> m_vecFractionOfWheelSubmergedForWheelFriction;
    // 0x48
    CUtlVector<T> m_vecWheelFrictionScales;
    // 0x60
    CUtlVector<T> m_vecFractionOfWheelSubmergedForWheelDrag;
    // 0x78
    CUtlVector<T> m_vecWheelDrag;
};
struct C_PhysBox {
};
struct CCSPlayer_CameraServices {
    // 0x2a8
    float m_flDeathCamTilt;
    // 0x2b0
    Vector m_vClientScopeInaccuracy;
};
struct CFilterMultiple {
    // 0x640
    filter_t m_nFilterType;
    // 0x648
    CUtlSymbolLarge[10] m_iFilterName;
    // 0x698
    CHandle<T> m_hFilter;
};
struct CPulseCell_FireCursors {
    // 0x48
    CUtlVector<T> m_Outflows;
    // 0x60
    bool m_bWaitForChildOutflows;
    // 0x68
    CPulse_ResumePoint m_OnFinished;
    // 0xb0
    CPulse_ResumePoint m_OnCanceled;
};
struct CEnvSoundscape {
    // 0x608
    CEntityIOOutput m_OnPlay;
    // 0x620
    float m_flRadius;
    // 0x628
    CUtlSymbolLarge m_soundEventName;
    // 0x630
    bool m_bOverrideWithEvent;
    // 0x634
    int32_t m_soundscapeIndex;
    // 0x638
    int32_t m_soundscapeEntityListId;
    // 0x640
    CUtlSymbolLarge[8] m_positionNames;
    // 0x680
    CHandle<T> m_hProxySoundscape;
    // 0x684
    bool m_bDisabled;
    // 0x688
    CUtlSymbolLarge m_soundscapeName;
    // 0x690
    uint32_t m_soundEventHash;
};
struct C_SoundEventEntityAlias_snd_event_point {
};
struct C_FogController {
    // 0x608
    fogparams_t m_fog;
    // 0x670
    bool m_bUseAngles;
    // 0x674
    int32_t m_iChangedVariables;
};
struct C_SoundOpvarSetOBBWindEntity {
};
struct C_MolotovGrenade {
};
struct C_NetTestBaseCombatCharacter {
};
struct CBodyComponentPoint {
    // 0x80
    CGameSceneNode m_sceneNode;
};
struct C_WeaponM4A1Silencer {
};
struct C_EconItemView {
    // 0x60
    bool m_bInventoryImageRgbaRequested;
    // 0x61
    bool m_bInventoryImageTriedCache;
    // 0x80
    int32_t m_nInventoryImageRgbaWidth;
    // 0x84
    int32_t m_nInventoryImageRgbaHeight;
    // 0x88
    char[260] m_szCurrentLoadCachedFileName;
    // 0x1b8
    bool m_bRestoreCustomMaterialAfterPrecache;
    // 0x1ba
    uint16_t m_iItemDefinitionIndex;
    // 0x1bc
    int32_t m_iEntityQuality;
    // 0x1c0
    uint32_t m_iEntityLevel;
    // 0x1c8
    uint64_t m_iItemID;
    // 0x1d0
    uint32_t m_iItemIDHigh;
    // 0x1d4
    uint32_t m_iItemIDLow;
    // 0x1d8
    uint32_t m_iAccountID;
    // 0x1dc
    uint32_t m_iInventoryPosition;
    // 0x1e8
    bool m_bInitialized;
    // 0x1e9
    bool m_bDisallowSOC;
    // 0x1ea
    bool m_bIsStoreItem;
    // 0x1eb
    bool m_bIsTradeItem;
    // 0x1ec
    int32_t m_iEntityQuantity;
    // 0x1f0
    int32_t m_iRarityOverride;
    // 0x1f4
    int32_t m_iQualityOverride;
    // 0x1f8
    int32_t m_iOriginOverride;
    // 0x1fc
    uint8_t m_ubStyleOverride;
    // 0x1fd
    uint8_t m_unClientFlags;
    // 0x208
    CAttributeList m_AttributeList;
    // 0x280
    CAttributeList m_NetworkedDynamicAttributes;
    // 0x2f8
    char[161] m_szCustomName;
    // 0x399
    char[161] m_szCustomNameOverride;
    // 0x468
    bool m_bInitializedTags;
};
struct CPulseCell_Timeline_TimelineEvent_t {
    // 0x0
    float m_flTimeFromPrevious;
    // 0x8
    CPulse_OutflowConnection m_EventOutflow;
};
struct CPulseCell_IntervalTimer_CursorState_t {
    // 0x0
    GameTime_t m_StartTime;
    // 0x4
    GameTime_t m_EndTime;
    // 0x8
    float m_flWaitInterval;
    // 0xc
    float m_flWaitIntervalHigh;
    // 0x10
    bool m_bCompleteOnNextWake;
};
struct CPulseCell_BaseRequirement {
};
struct CPulseCell_BaseState {
};
struct OutflowWithRequirements_t {
    // 0x0
    CPulse_OutflowConnection m_Connection;
    // 0x48
    PulseDocNodeID_t m_DestinationFlowNodeID;
    // 0x50
    CUtlVector<T> m_RequirementNodeIDs;
    // 0x68
    CUtlVector<T> m_nCursorStateBlockIndex;
};
struct CPulseCell_IsRequirementValid {
};
struct C_SoundEventPathCornerEntity {
    // 0x6b8
    C_NetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked;
};
struct C_InfoVisibilityBox {
    // 0x60c
    int32_t m_nMode;
    // 0x610
    Vector m_vBoxSize;
    // 0x61c
    bool m_bEnabled;
};
struct CCSPlayer_ItemServices {
    // 0x48
    bool m_bHasDefuser;
    // 0x49
    bool m_bHasHelmet;
};
struct CPulseCell_Value_Gradient {
    // 0x48
    CColorGradient m_Gradient;
};
struct IntervalTimer {
    // 0x8
    GameTime_t m_timestamp;
    // 0xc
    WorldGroupId_t m_nWorldGroupId;
};
struct audioparams_t {
    // 0x8
    Vector[8] localSound;
    // 0x68
    int32_t soundscapeIndex;
    // 0x6c
    uint8_t localBits;
    // 0x70
    int32_t soundscapeEntityListIndex;
    // 0x74
    uint32_t soundEventHash;
};
struct C_PathParticleRope {
    // 0x610
    bool m_bStartActive;
    // 0x614
    float m_flMaxSimulationTime;
    // 0x618
    CUtlSymbolLarge m_iszEffectName;
    // 0x620
    CUtlVector<T> m_PathNodes_Name;
    // 0x638
    float m_flParticleSpacing;
    // 0x63c
    float m_flSlack;
    // 0x640
    float m_flRadius;
    // 0x644
    Color m_ColorTint;
    // 0x648
    int32_t m_nEffectState;
    // 0x650
    CStrongHandle<T> m_iEffectIndex;
    // 0x658
    C_NetworkUtlVectorBase< Vector > m_PathNodes_Position;
    // 0x670
    C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn;
    // 0x688
    C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut;
    // 0x6a0
    C_NetworkUtlVectorBase< Vector > m_PathNodes_Color;
    // 0x6b8
    C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled;
    // 0x6d0
    C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale;
};
struct C_DecoyProjectile {
    // 0x1438
    int32_t m_nDecoyShotTick;
    // 0x143c
    int32_t m_nClientLastKnownDecoyShotTick;
    // 0x1460
    GameTime_t m_flTimeParticleEffectSpawn;
};
struct C_AttributeContainer {
    // 0x50
    C_EconItemView m_Item;
    // 0x4c0
    int32_t m_iExternalItemProviderRegisteredToken;
    // 0x4c8
    uint64_t m_ullRegisteredAsItemID;
};
struct C_CSWeaponBase {
    // 0x1948
    WeaponGameplayAnimState m_iWeaponGameplayAnimState;
    // 0x194c
    GameTime_t m_flWeaponGameplayAnimStateTimestamp;
    // 0x1950
    GameTime_t m_flInspectCancelCompleteTime;
    // 0x1954
    bool m_bInspectPending;
    // 0x1955
    bool m_bInspectShouldLoop;
    // 0x1980
    float m_flCrosshairDistance;
    // 0x1984
    int32_t m_iAmmoLastCheck;
    // 0x1988
    int32_t m_nLastEmptySoundCmdNum;
    // 0x198c
    bool m_bFireOnEmpty;
    // 0x1990
    CEntityIOOutput m_OnPlayerPickup;
    // 0x19a8
    CSWeaponMode m_weaponMode;
    // 0x19ac
    float m_flTurningInaccuracyDelta;
    // 0x19b0
    Vector m_vecTurningInaccuracyEyeDirLast;
    // 0x19bc
    float m_flTurningInaccuracy;
    // 0x19c0
    float m_fAccuracyPenalty;
    // 0x19c4
    GameTime_t m_flLastAccuracyUpdateTime;
    // 0x19c8
    float m_fAccuracySmoothedForZoom;
    // 0x19cc
    int32_t m_iRecoilIndex;
    // 0x19d0
    float m_flRecoilIndex;
    // 0x19d4
    bool m_bBurstMode;
    // 0x19d8
    GameTime_t m_flLastBurstModeChangeTime;
    // 0x19dc
    GameTick_t m_nPostponeFireReadyTicks;
    // 0x19e0
    float m_flPostponeFireReadyFrac;
    // 0x19e4
    bool m_bInReload;
    // 0x19e8
    GameTime_t m_flDroppedAtTime;
    // 0x19ec
    bool m_bIsHauledBack;
    // 0x19ed
    bool m_bSilencerOn;
    // 0x19f0
    GameTime_t m_flTimeSilencerSwitchComplete;
    // 0x19f4
    float m_flWeaponActionPlaybackRate;
    // 0x19f8
    int32_t m_iOriginalTeamNumber;
    // 0x19fc
    int32_t m_iMostRecentTeamNumber;
    // 0x1a00
    bool m_bDroppedNearBuyZone;
    // 0x1a04
    float m_flNextAttackRenderTimeOffset;
    // 0x1aa0
    bool m_bClearWeaponIdentifyingUGC;
    // 0x1aa1
    bool m_bVisualsDataSet;
    // 0x1aa2
    bool m_bUIWeapon;
    // 0x1aa4
    int32_t m_nCustomEconReloadEventId;
    // 0x1ab0
    GameTime_t m_nextPrevOwnerUseTime;
    // 0x1ab4
    CHandle<T> m_hPrevOwner;
    // 0x1ab8
    GameTick_t m_nDropTick;
    // 0x1abc
    bool m_bWasActiveWeaponWhenDropped;
    // 0x1adc
    bool m_donated;
    // 0x1ae0
    GameTime_t m_fLastShotTime;
    // 0x1ae4
    bool m_bWasOwnedByCT;
    // 0x1ae5
    bool m_bWasOwnedByTerrorist;
    // 0x1ae8
    float m_flNextClientFireBulletTime;
    // 0x1aec
    float m_flNextClientFireBulletTime_Repredict;
    // 0x1c50
    C_IronSightController m_IronSightController;
    // 0x1d00
    int32_t m_iIronSightMode;
    // 0x1d18
    GameTime_t m_flLastLOSTraceFailureTime;
    // 0x1d78
    float m_flWatTickOffset;
    // 0x1d8c
    GameTime_t m_flLastShakeTime;
};
struct CTimeline {
    // 0x10
    float32[64] m_flValues;
    // 0x110
    int32[64] m_nValueCounts;
    // 0x210
    int32_t m_nBucketCount;
    // 0x214
    float m_flInterval;
    // 0x218
    float m_flFinalValue;
    // 0x21c
    TimelineCompression_t m_nCompressionType;
    // 0x220
    bool m_bStopped;
};
struct CPulseCursorFuncs {
};
struct C_TonemapController2 {
    // 0x608
    float m_flAutoExposureMin;
    // 0x60c
    float m_flAutoExposureMax;
    // 0x610
    float m_flExposureAdaptationSpeedUp;
    // 0x614
    float m_flExposureAdaptationSpeedDown;
    // 0x618
    float m_flTonemapEVSmoothingRange;
};
struct CountdownTimer {
    // 0x8
    float m_duration;
    // 0xc
    GameTime_t m_timestamp;
    // 0x10
    float m_timescale;
    // 0x14
    WorldGroupId_t m_nWorldGroupId;
};
struct PulseNodeDynamicOutflows_t_DynamicOutflow_t {
    // 0x0
    CGlobalSymbol m_OutflowID;
    // 0x8
    CPulse_OutflowConnection m_Connection;
};
struct C_WeaponMag7 {
};
struct WeaponPurchaseCount_t {
    // 0x30
    uint16_t m_nItemDefIndex;
    // 0x32
    uint16_t m_nCount;
};
struct CBasePulseGraphInstance {
};
struct FilterHealth {
    // 0x640
    bool m_bAdrenalineActive;
    // 0x644
    int32_t m_iHealthMin;
    // 0x648
    int32_t m_iHealthMax;
};
struct C_PointClientUIHUD {
    // 0xec0
    bool m_bCheckCSSClasses;
    // 0x1038
    bool m_bIgnoreInput;
    // 0x103c
    float m_flWidth;
    // 0x1040
    float m_flHeight;
    // 0x1044
    float m_flDPI;
    // 0x1048
    float m_flInteractDistance;
    // 0x104c
    float m_flDepthOffset;
    // 0x1050
    uint32_t m_unOwnerContext;
    // 0x1054
    uint32_t m_unHorizontalAlign;
    // 0x1058
    uint32_t m_unVerticalAlign;
    // 0x105c
    uint32_t m_unOrientation;
    // 0x1060
    bool m_bAllowInteractionFromAllSceneWorlds;
    // 0x1068
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
};
struct CPulseCell_Inflow_GraphHook {
    // 0x80
    PulseSymbol_t m_HookName;
};
struct SignatureOutflow_Resume {
};
struct CPathSimpleAPI {
};
struct C_InfoLadderDismount {
};
struct C_PointCommentaryNode {
    // 0x1180
    bool m_bActive;
    // 0x1181
    bool m_bWasActive;
    // 0x1184
    GameTime_t m_flEndTime;
    // 0x1188
    GameTime_t m_flStartTime;
    // 0x118c
    float m_flStartTimeInCommentary;
    // 0x1190
    CUtlSymbolLarge m_iszCommentaryFile;
    // 0x1198
    CUtlSymbolLarge m_iszTitle;
    // 0x11a0
    CUtlSymbolLarge m_iszSpeakers;
    // 0x11a8
    int32_t m_iNodeNumber;
    // 0x11ac
    int32_t m_iNodeNumberMax;
    // 0x11b0
    bool m_bListenedTo;
    // 0x11b8
    CSoundPatch* m_sndCommentary;
    // 0x11c0
    CHandle<T> m_hViewPosition;
    // 0x11c4
    bool m_bRestartAfterRestore;
};
struct CSpriteOriented {
};
struct shard_model_desc_t {
    // 0x8
    int32_t m_nModelID;
    // 0x10
    CStrongHandle<T> m_hMaterialBase;
    // 0x18
    CStrongHandle<T> m_hMaterialDamageOverlay;
    // 0x20
    ShardSolid_t m_solid;
    // 0x24
    Vector2D m_vecPanelSize;
    // 0x2c
    Vector2D m_vecStressPositionA;
    // 0x34
    Vector2D m_vecStressPositionB;
    // 0x40
    C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices;
    // 0x58
    C_NetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices;
    // 0x70
    float m_flGlassHalfThickness;
    // 0x74
    bool m_bHasParent;
    // 0x75
    bool m_bParentFrozen;
    // 0x78
    CUtlString m_SurfacePropStringToken;
};
struct C_KeychainModule {
    // 0x1170
    uint32_t m_nKeychainDefID;
    // 0x1174
    uint32_t m_nKeychainSeed;
};
struct CFuncWater {
    // 0xe88
    CBuoyancyHelper m_BuoyancyHelper;
};
struct CCSPlayer_GlowServices {
};
struct CCSGameModeRules {
    // 0x8
    CNetworkVarChainer _m_pChainEntity;
};
struct C_Flashbang {
};
struct C_PointClientUIWorldTextPanel {
    // 0x10e0
    char[512] m_messageText;
};
struct CCSPlayer_WaterServices {
    // 0x48
    float m_flWaterJumpTime;
    // 0x4c
    Vector m_vecWaterJumpVel;
    // 0x58
    float m_flSwimSoundTime;
};
struct C_CSObserverPawn {
    // 0x1650
    CEntityHandle m_hDetectParentChange;
};
struct ViewAngleServerChange_t {
    // 0x30
    FixAngleSet_t nType;
    // 0x34
    QAngle qAngle;
    // 0x40
    uint32_t nIndex;
};
struct C_FuncLadder {
    // 0xe88
    Vector m_vecLadderDir;
    // 0xe98
    CUtlVector<T> m_Dismounts;
    // 0xeb0
    Vector m_vecLocalTop;
    // 0xebc
    VectorWS m_vecPlayerMountPositionTop;
    // 0xec8
    VectorWS m_vecPlayerMountPositionBottom;
    // 0xed4
    float m_flAutoRideSpeed;
    // 0xed8
    bool m_bDisabled;
    // 0xed9
    bool m_bFakeLadder;
    // 0xeda
    bool m_bHasSlack;
};
struct C_WeaponMP5SD {
};
struct C_World {
};
struct C_CSGO_TeamSelectCounterTerroristPosition {
};
struct C_WeaponGalilAR {
};
struct CCSPlayerBase_CameraServices {
    // 0x290
    uint32_t m_iFOV;
    // 0x294
    uint32_t m_iFOVStart;
    // 0x298
    GameTime_t m_flFOVTime;
    // 0x29c
    float m_flFOVRate;
    // 0x2a0
    CHandle<T> m_hZoomOwner;
    // 0x2a4
    float m_flLastShotFOV;
};
struct C_TeamplayRules {
};
struct CPulseCell_Inflow_BaseEntrypoint {
    // 0x48
    PulseRuntimeChunkIndex_t m_EntryChunk;
    // 0x50
    PulseRegisterMap_t m_RegisterMap;
};
struct C_WeaponSG556 {
};
struct C_CSPlayerPawn {
    // 0x1660
    CCSPlayer_BulletServices* m_pBulletServices;
    // 0x1668
    CCSPlayer_HostageServices* m_pHostageServices;
    // 0x1670
    CCSPlayer_BuyServices* m_pBuyServices;
    // 0x1678
    CCSPlayer_GlowServices* m_pGlowServices;
    // 0x1680
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices;
    // 0x1688
    CCSPlayer_DamageReactServices* m_pDamageReactServices;
    // 0x1690
    GameTime_t m_flHealthShotBoostExpirationTime;
    // 0x1694
    GameTime_t m_flLastFiredWeaponTime;
    // 0x1698
    bool m_bHasFemaleVoice;
    // 0x169c
    float m_flLandingTimeSeconds;
    // 0x16a0
    float m_flOldFallVelocity;
    // 0x16a4
    char[18] m_szLastPlaceName;
    // 0x16b6
    bool m_bPrevDefuser;
    // 0x16b7
    bool m_bPrevHelmet;
    // 0x16b8
    int32_t m_nPrevArmorVal;
    // 0x16bc
    int32_t m_nPrevGrenadeAmmoCount;
    // 0x16c0
    uint32_t m_unPreviousWeaponHash;
    // 0x16c4
    uint32_t m_unWeaponHash;
    // 0x16c8
    bool m_bInBuyZone;
    // 0x16c9
    bool m_bPreviouslyInBuyZone;
    // 0x16cc
    QAngle m_aimPunchAngle;
    // 0x16d8
    QAngle m_aimPunchAngleVel;
    // 0x16e4
    GameTick_t m_aimPunchTickBase;
    // 0x16e8
    float m_aimPunchTickFraction;
    // 0x1710
    bool m_bInLanding;
    // 0x1714
    float m_flLandingStartTime;
    // 0x1718
    bool m_bInHostageRescueZone;
    // 0x1719
    bool m_bInBombZone;
    // 0x171a
    bool m_bIsBuyMenuOpen;
    // 0x171c
    GameTime_t m_flTimeOfLastInjury;
    // 0x1720
    GameTime_t m_flNextSprayDecalTime;
    // 0x1878
    int32_t m_iRetakesOffering;
    // 0x187c
    int32_t m_iRetakesOfferingCard;
    // 0x1880
    bool m_bRetakesHasDefuseKit;
    // 0x1881
    bool m_bRetakesMVPLastRound;
    // 0x1884
    int32_t m_iRetakesMVPBoostItem;
    // 0x1888
    loadout_slot_t m_RetakesMVPBoostExtraUtility;
    // 0x188d
    bool m_bNeedToReApplyGloves;
    // 0x1890
    C_EconItemView m_EconGloves;
    // 0x1d00
    uint8_t m_nEconGlovesChanged;
    // 0x1d01
    bool m_bMustSyncRagdollState;
    // 0x1d04
    int32_t m_nRagdollDamageBone;
    // 0x1d08
    Vector m_vRagdollDamageForce;
    // 0x1d14
    Vector m_vRagdollDamagePosition;
    // 0x1d20
    char[64] m_szRagdollDamageWeaponName;
    // 0x1d60
    bool m_bRagdollDamageHeadshot;
    // 0x1d64
    Vector m_vRagdollServerOrigin;
    // 0x23e0
    GameTime_t m_lastLandTime;
    // 0x23e4
    bool m_bOnGroundLastTick;
    // 0x2400
    CHandle<T> m_hHudModelArms;
    // 0x2404
    QAngle m_qDeathEyeAngles;
    // 0x2410
    bool m_bSkipOneHeadConstraintUpdate;
    // 0x2411
    bool m_bLeftHanded;
    // 0x2414
    GameTime_t m_fSwitchedHandednessTime;
    // 0x2418
    float m_flViewmodelOffsetX;
    // 0x241c
    float m_flViewmodelOffsetY;
    // 0x2420
    float m_flViewmodelOffsetZ;
    // 0x2424
    float m_flViewmodelFOV;
    // 0x2428
    uint32[5] m_vecPlayerPatchEconIndices;
    // 0x2460
    Color m_GunGameImmunityColor;
    // 0x24b0
    CUtlVector<T> m_vecBulletHitModels;
    // 0x24c8
    bool m_bIsWalking;
    // 0x24d0
    QAngle m_thirdPersonHeading;
    // 0x2560
    float m_flSlopeDropOffset;
    // 0x25d8
    float m_flSlopeDropHeight;
    // 0x2650
    Vector m_vHeadConstraintOffset;
    // 0x26e0
    EntitySpottedState_t m_entitySpottedState;
    // 0x26f8
    bool m_bIsScoped;
    // 0x26f9
    bool m_bResumeZoom;
    // 0x26fa
    bool m_bIsDefusing;
    // 0x26fb
    bool m_bIsGrabbingHostage;
    // 0x26fc
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress;
    // 0x2700
    GameTime_t m_flEmitSoundTime;
    // 0x2704
    bool m_bInNoDefuseArea;
    // 0x2708
    int32_t m_nWhichBombZone;
    // 0x270c
    int32_t m_iShotsFired;
    // 0x2710
    float m_flFlinchStack;
    // 0x2714
    float m_flVelocityModifier;
    // 0x2718
    float m_flHitHeading;
    // 0x271c
    int32_t m_nHitBodyPart;
    // 0x2720
    bool m_bWaitForNoAttack;
    // 0x2724
    float m_ignoreLadderJumpTime;
    // 0x2729
    bool m_bKilledByHeadshot;
    // 0x272c
    int32_t m_ArmorValue;
    // 0x2730
    uint16_t m_unCurrentEquipmentValue;
    // 0x2732
    uint16_t m_unRoundStartEquipmentValue;
    // 0x2734
    uint16_t m_unFreezetimeEndEquipmentValue;
    // 0x2738
    CEntityIndex m_nLastKillerIndex;
    // 0x273c
    bool m_bOldIsScoped;
    // 0x273d
    bool m_bHasDeathInfo;
    // 0x2740
    float m_flDeathInfoTime;
    // 0x2744
    Vector m_vecDeathInfoOrigin;
    // 0x2754
    GameTime_t m_grenadeParameterStashTime;
    // 0x2758
    bool m_bGrenadeParametersStashed;
    // 0x275c
    QAngle m_angStashedShootAngles;
    // 0x2768
    Vector m_vecStashedGrenadeThrowPosition;
    // 0x2774
    Vector m_vecStashedVelocity;
    // 0x2780
    QAngle[2] m_angShootAngleHistory;
    // 0x2798
    Vector[2] m_vecThrowPositionHistory;
    // 0x27b0
    Vector[2] m_vecVelocityHistory;
    // 0x27c8
    C_UtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags;
    // 0x2830
    GameTick_t m_nPrevHighestReceivedDamageTagTick;
    // 0x2834
    int32_t m_nHighestAppliedDamageTagTick;
    // 0x3d6c
    bool m_bShouldAutobuyDMWeapons;
    // 0x3d70
    GameTime_t m_fImmuneToGunGameDamageTime;
    // 0x3d74
    bool m_bGunGameImmunity;
    // 0x3d78
    GameTime_t m_fImmuneToGunGameDamageTimeLast;
    // 0x3d7c
    float m_fMolotovDamageTime;
    // 0x3d84
    Vector m_vecLastAliveLocalVelocity;
    // 0x3d90
    float32[4] m_fRenderingClipPlane;
    // 0x3da0
    int32_t m_nLastClipPlaneSetupFrame;
    // 0x3da4
    Vector m_vecLastClipCameraPos;
    // 0x3db0
    Vector m_vecLastClipCameraForward;
    // 0x3dbc
    bool m_bClipHitStaticWorld;
    // 0x3dbd
    bool m_bCachedPlaneIsValid;
    // 0x3dc0
    C_CSWeaponBase* m_pClippingWeapon;
    // 0x3dc8
    ParticleIndex_t m_nPlayerInfernoBodyFx;
    // 0x3dd0
    QAngle m_angEyeAngles;
    // 0x3e60
    GameTime_t[4] m_arrOldEyeAnglesTimes;
    // 0x3e70
    QAngle[4] m_arrOldEyeAngles;
    // 0x3ea0
    QAngle m_angEyeAnglesVelocity;
    // 0x3eac
    CEntityIndex m_iIDEntIndex;
    // 0x3eb0
    CountdownTimer m_delayTargetIDTimer;
    // 0x3ec8
    CEntityIndex m_iTargetItemEntIdx;
    // 0x3ecc
    CEntityIndex m_iOldIDEntIndex;
    // 0x3ed0
    CountdownTimer m_holdTargetIDTimer;
};
struct C_CSGO_TeamIntroTerroristPosition {
};
struct CPulseCell_WaitForCursorsWithTagBase {
    // 0x48
    int32_t m_nCursorsAllowedToWait;
    // 0x50
    CPulse_ResumePoint m_WaitComplete;
};
struct C_Hostage {
    // 0x13d8
    EntitySpottedState_t m_entitySpottedState;
    // 0x13f0
    CHandle<T> m_leader;
    // 0x13f8
    CountdownTimer m_reuseTimer;
    // 0x1410
    Vector m_vel;
    // 0x141c
    bool m_isRescued;
    // 0x141d
    bool m_jumpedThisFrame;
    // 0x1420
    int32_t m_nHostageState;
    // 0x1424
    bool m_bHandsHaveBeenCut;
    // 0x1428
    CHandle<T> m_hHostageGrabber;
    // 0x142c
    GameTime_t m_fLastGrabTime;
    // 0x1430
    Vector m_vecGrabbedPos;
    // 0x143c
    GameTime_t m_flRescueStartTime;
    // 0x1440
    GameTime_t m_flGrabSuccessTime;
    // 0x1444
    GameTime_t m_flDropStartTime;
    // 0x1448
    GameTime_t m_flDeadOrRescuedTime;
    // 0x1450
    CountdownTimer m_blinkTimer;
    // 0x1468
    Vector m_lookAt;
    // 0x1478
    CountdownTimer m_lookAroundTimer;
    // 0x1490
    bool m_isInit;
    // 0x1491
    AttachmentHandle_t m_eyeAttachment;
    // 0x1492
    AttachmentHandle_t m_chestAttachment;
    // 0x1498
    CBasePlayerController* m_pPredictionOwner;
    // 0x14a0
    GameTime_t m_fNewestAlphaThinkTime;
};
struct C_fogplayerparams_t {
    // 0x8
    CHandle<T> m_hCtrl;
    // 0xc
    float m_flTransitionTime;
    // 0x10
    Color m_OldColor;
    // 0x14
    float m_flOldStart;
    // 0x18
    float m_flOldEnd;
    // 0x1c
    float m_flOldMaxDensity;
    // 0x20
    float m_flOldHDRColorScale;
    // 0x24
    float m_flOldFarZ;
    // 0x28
    Color m_NewColor;
    // 0x2c
    float m_flNewStart;
    // 0x30
    float m_flNewEnd;
    // 0x34
    float m_flNewMaxDensity;
    // 0x38
    float m_flNewHDRColorScale;
    // 0x3c
    float m_flNewFarZ;
};
struct CGameSceneNode {
    // 0x10
    CTransformWS m_nodeToWorld;
    // 0x30
    CEntityInstance* m_pOwner;
    // 0x38
    CGameSceneNode* m_pParent;
    // 0x40
    CGameSceneNode* m_pChild;
    // 0x48
    CGameSceneNode* m_pNextSibling;
    // 0x78
    CGameSceneNodeHandle m_hParent;
    // 0x88
    CNetworkOriginCellCoordQuantizedVector m_vecOrigin;
    // 0xc0
    QAngle m_angRotation;
    // 0xcc
    float m_flScale;
    // 0xd0
    VectorWS m_vecAbsOrigin;
    // 0xdc
    QAngle m_angAbsRotation;
    // 0xe8
    float m_flAbsScale;
    // 0xec
    Vector m_vecWrappedLocalOrigin;
    // 0xf8
    QAngle m_angWrappedLocalRotation;
    // 0x104
    float m_flWrappedScale;
    // 0x108
    int16 m_nParentAttachmentOrBone;
    // 0x10a
    bool m_bDebugAbsOriginChanges;
    // 0x10b
    bool m_bDormant;
    // 0x10c
    bool m_bForceParentToBeNetworked;
    // 0x0
    bitfield:1 m_bDirtyHierarchy;
    // 0x0
    bitfield:1 m_bDirtyBoneMergeInfo;
    // 0x0
    bitfield:1 m_bNetworkedPositionChanged;
    // 0x0
    bitfield:1 m_bNetworkedAnglesChanged;
    // 0x0
    bitfield:1 m_bNetworkedScaleChanged;
    // 0x0
    bitfield:1 m_bWillBeCallingPostDataUpdate;
    // 0x0
    bitfield:1 m_bBoneMergeFlex;
    // 0x0
    bitfield:2 m_nLatchAbsOrigin;
    // 0x0
    bitfield:1 m_bDirtyBoneMergeBoneToRoot;
    // 0x10f
    uint8_t m_nHierarchicalDepth;
    // 0x110
    uint8_t m_nHierarchyType;
    // 0x111
    uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
    // 0x114
    CUtlString m_name;
    // 0x128
    CUtlString m_hierarchyAttachName;
    // 0x12c
    float m_flZOffset;
    // 0x130
    float m_flClientLocalScale;
    // 0x134
    Vector m_vRenderOrigin;
};
struct CPlayer_ObserverServices {
    // 0x48
    uint8_t m_iObserverMode;
    // 0x4c
    CHandle<T> m_hObserverTarget;
    // 0x50
    ObserverMode_t m_iObserverLastMode;
    // 0x54
    bool m_bForcedObserverMode;
    // 0x58
    float m_flObserverChaseDistance;
    // 0x5c
    GameTime_t m_flObserverChaseDistanceCalcTime;
};
struct C_SoundAreaEntityBase {
    // 0x608
    bool m_bDisabled;
    // 0x610
    bool m_bWasEnabled;
    // 0x618
    CUtlSymbolLarge m_iszSoundAreaType;
    // 0x620
    Vector m_vPos;
};
struct C_PlayerVisibility {
    // 0x608
    float m_flVisibilityStrength;
    // 0x60c
    float m_flFogDistanceMultiplier;
    // 0x610
    float m_flFogMaxDensityMultiplier;
    // 0x614
    float m_flFadeTime;
    // 0x618
    bool m_bStartDisabled;
    // 0x619
    bool m_bIsEnabled;
};
struct CAttributeManager_cached_attribute_float_t {
    // 0x0
    float flIn;
    // 0x8
    CUtlSymbolLarge iAttribHook;
    // 0x10
    float flOut;
};
struct C_BasePlayerWeapon {
    // 0x18c0
    GameTick_t m_nNextPrimaryAttackTick;
    // 0x18c4
    float m_flNextPrimaryAttackTickRatio;
    // 0x18c8
    GameTick_t m_nNextSecondaryAttackTick;
    // 0x18cc
    float m_flNextSecondaryAttackTickRatio;
    // 0x18d0
    int32_t m_iClip1;
    // 0x18d4
    int32_t m_iClip2;
    // 0x18d8
    int32[2] m_pReserveAmmo;
};
struct CRagdollManager {
    // 0x608
    int8 m_iCurrentMaxRagdollCount;
};
struct C_HEGrenade {
};
struct C_EnvSky {
    // 0xe88
    CStrongHandle<T> m_hSkyMaterial;
    // 0xe90
    CStrongHandle<T> m_hSkyMaterialLightingOnly;
    // 0xe98
    bool m_bStartDisabled;
    // 0xe99
    Color m_vTintColor;
    // 0xe9d
    Color m_vTintColorLightingOnly;
    // 0xea4
    float m_flBrightnessScale;
    // 0xea8
    int32_t m_nFogType;
    // 0xeac
    float m_flFogMinStart;
    // 0xeb0
    float m_flFogMinEnd;
    // 0xeb4
    float m_flFogMaxStart;
    // 0xeb8
    float m_flFogMaxEnd;
    // 0xebc
    bool m_bEnabled;
};
struct CPulse_InvokeBinding {
    // 0x0
    PulseRegisterMap_t m_RegisterMap;
    // 0x30
    PulseSymbol_t m_FuncName;
    // 0x40
    PulseRuntimeCellIndex_t m_nCellIndex;
    // 0x44
    PulseRuntimeChunkIndex_t m_nSrcChunk;
    // 0x48
    int32_t m_nSrcInstruction;
};
struct C_EnvWindController {
    // 0x608
    C_EnvWindShared m_EnvWindShared;
    // 0x700
    float m_fDirectionVariation;
    // 0x704
    float m_fSpeedVariation;
    // 0x708
    float m_fTurbulence;
    // 0x70c
    float m_fVolumeHalfExtentXY;
    // 0x710
    float m_fVolumeHalfExtentZ;
    // 0x714
    int32_t m_nVolumeResolutionXY;
    // 0x718
    int32_t m_nVolumeResolutionZ;
    // 0x71c
    int32_t m_nClipmapLevels;
    // 0x720
    bool m_bIsMaster;
    // 0x721
    bool m_bFirstTime;
};
struct C_GameRules {
    // 0x8
    CNetworkVarChainer _m_pChainEntity;
    // 0x30
    int32_t m_nTotalPausedTicks;
    // 0x34
    int32_t m_nPauseStartTick;
    // 0x38
    bool m_bGamePaused;
};
struct C_WeaponMAC10 {
};
struct C_CSGO_MapPreviewCameraPath {
    // 0x608
    float m_flZFar;
    // 0x60c
    float m_flZNear;
    // 0x610
    bool m_bLoop;
    // 0x611
    bool m_bVerticalFOV;
    // 0x612
    bool m_bConstantSpeed;
    // 0x614
    float m_flDuration;
    // 0x658
    float m_flPathLength;
    // 0x65c
    float m_flPathDuration;
    // 0x674
    bool m_bDofEnabled;
    // 0x678
    float m_flDofNearBlurry;
    // 0x67c
    float m_flDofNearCrisp;
    // 0x680
    float m_flDofFarCrisp;
    // 0x684
    float m_flDofFarBlurry;
    // 0x688
    float m_flDofTiltToGround;
};
struct C_PointWorldText {
    // 0xe90
    bool m_bForceRecreateNextUpdate;
    // 0xea8
    int32_t m_nTextWidthPx;
    // 0xeac
    int32_t m_nTextHeightPx;
    // 0xeb0
    char[512] m_messageText;
    // 0x10b0
    char[64] m_FontName;
    // 0x10f0
    char[64] m_BackgroundMaterialName;
    // 0x1130
    bool m_bEnabled;
    // 0x1131
    bool m_bFullbright;
    // 0x1134
    float m_flWorldUnitsPerPx;
    // 0x1138
    float m_flFontSize;
    // 0x113c
    float m_flDepthOffset;
    // 0x1140
    bool m_bDrawBackground;
    // 0x1144
    float m_flBackgroundBorderWidth;
    // 0x1148
    float m_flBackgroundBorderHeight;
    // 0x114c
    float m_flBackgroundWorldToUV;
    // 0x1150
    Color m_Color;
    // 0x1154
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal;
    // 0x1158
    PointWorldTextJustifyVertical_t m_nJustifyVertical;
    // 0x115c
    PointWorldTextReorientMode_t m_nReorientMode;
};
struct C_RopeKeyframe {
    // 0xe90
    CBitVec< 10 > m_LinksTouchingSomething;
    // 0xe94
    int32_t m_nLinksTouchingSomething;
    // 0xe98
    bool m_bApplyWind;
    // 0xe9c
    int32_t m_fPrevLockedPoints;
    // 0xea0
    int32_t m_iForcePointMoveCounter;
    // 0xea4
    bool[2] m_bPrevEndPointPos;
    // 0xea8
    Vector[2] m_vPrevEndPointPos;
    // 0xec0
    float m_flCurScroll;
    // 0xec4
    float m_flScrollSpeed;
    // 0xec8
    uint16_t m_RopeFlags;
    // 0xed0
    CStrongHandle<T> m_iRopeMaterialModelIndex;
    // 0x1148
    uint8_t m_nSegments;
    // 0x114c
    CHandle<T> m_hStartPoint;
    // 0x1150
    CHandle<T> m_hEndPoint;
    // 0x1154
    AttachmentHandle_t m_iStartAttachment;
    // 0x1155
    AttachmentHandle_t m_iEndAttachment;
    // 0x1156
    uint8_t m_Subdiv;
    // 0x1158
    int16 m_RopeLength;
    // 0x115a
    int16 m_Slack;
    // 0x115c
    float m_TextureScale;
    // 0x1160
    uint8_t m_fLockedPoints;
    // 0x1161
    uint8_t m_nChangeCount;
    // 0x1164
    float m_Width;
    // 0x1168
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate;
    // 0x1178
    CStrongHandle<T> m_hMaterial;
    // 0x1180
    int32_t m_TextureHeight;
    // 0x1184
    Vector m_vecImpulse;
    // 0x1190
    Vector m_vecPreviousImpulse;
    // 0x119c
    float m_flCurrentGustTimer;
    // 0x11a0
    float m_flCurrentGustLifetime;
    // 0x11a4
    float m_flTimeToNextGust;
    // 0x11a8
    Vector m_vWindDir;
    // 0x11b4
    Vector m_vColorMod;
    // 0x11c0
    Vector[2] m_vCachedEndPointAttachmentPos;
    // 0x11d8
    QAngle[2] m_vCachedEndPointAttachmentAngle;
    // 0x11f0
    bool m_bConstrainBetweenEndpoints;
    // 0x0
    bitfield:1 m_bEndPointAttachmentPositionsDirty;
    // 0x0
    bitfield:1 m_bEndPointAttachmentAnglesDirty;
    // 0x0
    bitfield:1 m_bNewDataThisFrame;
    // 0x0
    bitfield:1 m_bPhysicsInitted;
};
struct C_BaseToggle {
};
struct C_EnvCubemapBox {
};
struct C_RopeKeyframe_CPhysicsDelegate {
    // 0x8
    C_RopeKeyframe* m_pKeyframe;
};
struct CInfoDynamicShadowHint {
    // 0x608
    bool m_bDisabled;
    // 0x60c
    float m_flRange;
    // 0x610
    int32_t m_nImportance;
    // 0x614
    int32_t m_nLightChoice;
    // 0x618
    CHandle<T> m_hLight;
};
struct CPathNode {
    // 0x608
    Vector m_vInTangentLocal;
    // 0x614
    Vector m_vOutTangentLocal;
    // 0x620
    CUtlString m_strParentPathUniqueID;
    // 0x628
    CUtlString m_strPathNodeParameter;
    // 0x630
    CTransform m_xWSPrevParent;
    // 0x650
    CHandle<T> m_hPath;
};
struct C_FuncMoveLinear {
};
struct CServerOnlyModelEntity {
};
struct C_CSGO_TeamSelectCamera {
};
struct CPulseCell_IntervalTimer {
    // 0x48
    CPulse_ResumePoint m_Completed;
    // 0x90
    SignatureOutflow_Continue m_OnInterval;
};
struct C_WeaponXM1014 {
};
struct C_WorldModelGloves {
};
struct C_PhysicsPropMultiplayer {
};
struct C_SoundEventOBBEntity {
    // 0x6b8
    Vector m_vMins;
    // 0x6c4
    Vector m_vMaxs;
};
struct CPulseTestScriptLib {
};
struct CPulseCell_BaseLerp {
    // 0x48
    CPulse_ResumePoint m_WakeResume;
};
struct C_WeaponAug {
};
struct C_BasePropDoor {
    // 0x13b0
    DoorState_t m_eDoorState;
    // 0x13b4
    bool m_modelChanged;
    // 0x13b5
    bool m_bLocked;
    // 0x13b6
    bool m_bNoNPCs;
    // 0x13b8
    Vector m_closedPosition;
    // 0x13c4
    QAngle m_closedAngles;
    // 0x13d0
    CHandle<T> m_hMaster;
    // 0x13d4
    Vector m_vWhereToSetLightingOrigin;
};
struct CChoreoInfoTarget {
};
struct CNetworkedSequenceOperation {
    // 0x8
    HSequence m_hSequence;
    // 0xc
    float m_flPrevCycle;
    // 0x10
    float m_flCycle;
    // 0x14
    CNetworkedQuantizedFloat m_flWeight;
    // 0x1c
    bool m_bSequenceChangeNetworked;
    // 0x1d
    bool m_bDiscontinuity;
    // 0x20
    float m_flPrevCycleFromDiscontinuity;
    // 0x24
    float m_flPrevCycleForAnimEventDetection;
};
struct C_Item_Healthshot {
};
struct CEntityInstance {
    // 0x8
    CUtlSymbolLarge m_iszPrivateVScripts;
    // 0x10
    CEntityIdentity* m_pEntity;
    // 0x30
    CScriptComponent* m_CScriptComponent;
};
struct C_BaseModelEntity {
    // 0xaf0
    CRenderComponent* m_CRenderComponent;
    // 0xaf8
    CHitboxComponent m_CHitboxComponent;
    // 0xb10
    HitGroup_t m_nDestructiblePartInitialStateDestructed0;
    // 0xb14
    HitGroup_t m_nDestructiblePartInitialStateDestructed1;
    // 0xb18
    HitGroup_t m_nDestructiblePartInitialStateDestructed2;
    // 0xb1c
    HitGroup_t m_nDestructiblePartInitialStateDestructed3;
    // 0xb20
    HitGroup_t m_nDestructiblePartInitialStateDestructed4;
    // 0xb24
    int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex;
    // 0xb28
    int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex;
    // 0xb2c
    int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex;
    // 0xb30
    int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex;
    // 0xb34
    int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex;
    // 0xb38
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent;
    // 0xb58
    bool m_bInitModelEffects;
    // 0xb59
    bool m_bDoingModelEffects;
    // 0xb5a
    bool m_bIsStaticProp;
    // 0xb5c
    int32_t m_iOldHealth;
    // 0xb60
    RenderMode_t m_nRenderMode;
    // 0xb61
    RenderFx_t m_nRenderFX;
    // 0xb62
    bool m_bAllowFadeInView;
    // 0xb80
    Color m_clrRender;
    // 0xb88
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes;
    // 0xc08
    bool m_bRenderToCubemaps;
    // 0xc09
    bool m_bNoInterpolate;
    // 0xc10
    CCollisionProperty m_Collision;
    // 0xcc0
    CGlowProperty m_Glow;
    // 0xd18
    float m_flGlowBackfaceMult;
    // 0xd1c
    float m_fadeMinDist;
    // 0xd20
    float m_fadeMaxDist;
    // 0xd24
    float m_flFadeScale;
    // 0xd28
    float m_flShadowStrength;
    // 0xd2c
    uint8_t m_nObjectCulling;
    // 0xd2d
    DecalRtEncoding_t m_nRequiredDecalRtEncoding;
    // 0xd58
    CNetworkViewOffsetVector m_vecViewOffset;
    // 0xe38
    CClientAlphaProperty* m_pClientAlphaProperty;
    // 0xe40
    Color m_ClientOverrideTint;
    // 0xe44
    bool m_bUseClientOverrideTint;
    // 0xe80
    uint32[1] m_bvDisabledHitGroups;
};
struct CCSPlayer_BulletServices {
    // 0x48
    int32_t m_totalHitsOnServer;
};
struct C_SoundOpvarSetAutoRoomEntity {
};
struct C_EnvCombinedLightProbeVolume {
    // 0x1680
    Color m_Entity_Color;
    // 0x1684
    float m_Entity_flBrightness;
    // 0x1688
    CStrongHandle<T> m_Entity_hCubemapTexture;
    // 0x1690
    bool m_Entity_bCustomCubemapTexture;
    // 0x1698
    CStrongHandle<T> m_Entity_hLightProbeTexture_AmbientCube;
    // 0x16a0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SDF;
    // 0x16a8
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_DC;
    // 0x16b0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_R;
    // 0x16b8
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_G;
    // 0x16c0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_B;
    // 0x16c8
    CStrongHandle<T> m_Entity_hLightProbeDirectLightIndicesTexture;
    // 0x16d0
    CStrongHandle<T> m_Entity_hLightProbeDirectLightScalarsTexture;
    // 0x16d8
    CStrongHandle<T> m_Entity_hLightProbeDirectLightShadowsTexture;
    // 0x16e0
    Vector m_Entity_vBoxMins;
    // 0x16ec
    Vector m_Entity_vBoxMaxs;
    // 0x16f8
    bool m_Entity_bMoveable;
    // 0x16fc
    int32_t m_Entity_nHandshake;
    // 0x1700
    int32_t m_Entity_nEnvCubeMapArrayIndex;
    // 0x1704
    int32_t m_Entity_nPriority;
    // 0x1708
    bool m_Entity_bStartDisabled;
    // 0x170c
    float m_Entity_flEdgeFadeDist;
    // 0x1710
    Vector m_Entity_vEdgeFadeDists;
    // 0x171c
    int32_t m_Entity_nLightProbeSizeX;
    // 0x1720
    int32_t m_Entity_nLightProbeSizeY;
    // 0x1724
    int32_t m_Entity_nLightProbeSizeZ;
    // 0x1728
    int32_t m_Entity_nLightProbeAtlasX;
    // 0x172c
    int32_t m_Entity_nLightProbeAtlasY;
    // 0x1730
    int32_t m_Entity_nLightProbeAtlasZ;
    // 0x1749
    bool m_Entity_bEnabled;
};
struct C_MultiplayRules {
};
struct CPlayer_AutoaimServices {
};
struct C_LightDirectionalEntity {
};
struct C_BaseEntity {
    // 0x38
    CBodyComponent* m_CBodyComponent;
    // 0x40
    CNetworkTransmitComponent m_NetworkTransmitComponent;
    // 0x330
    GameTick_t m_nLastThinkTick;
    // 0x338
    CGameSceneNode* m_pGameSceneNode;
    // 0x340
    CRenderComponent* m_pRenderComponent;
    // 0x348
    CCollisionProperty* m_pCollision;
    // 0x350
    int32_t m_iMaxHealth;
    // 0x354
    int32_t m_iHealth;
    // 0x358
    float m_flDamageAccumulator;
    // 0x35c
    uint8_t m_lifeState;
    // 0x35d
    bool m_bTakesDamage;
    // 0x360
    TakeDamageFlags_t m_nTakeDamageFlags;
    // 0x368
    EntityPlatformTypes_t m_nPlatformType;
    // 0x369
    uint8_t m_ubInterpolationFrame;
    // 0x36c
    CHandle<T> m_hSceneObjectController;
    // 0x370
    int32_t m_nNoInterpolationTick;
    // 0x374
    int32_t m_nVisibilityNoInterpolationTick;
    // 0x378
    float m_flProxyRandomValue;
    // 0x37c
    int32_t m_iEFlags;
    // 0x380
    uint8_t m_nWaterType;
    // 0x381
    bool m_bInterpolateEvenWithNoModel;
    // 0x382
    bool m_bPredictionEligible;
    // 0x383
    bool m_bApplyLayerMatchIDToModel;
    // 0x384
    CUtlString m_tokLayerMatchID;
    // 0x388
    CUtlString m_nSubclassID;
    // 0x398
    int32_t m_nSimulationTick;
    // 0x39c
    int32_t m_iCurrentThinkContext;
    // 0x3a0
    CUtlVector<T> m_aThinkFunctions;
    // 0x3b8
    bool m_bDisabledContextThinks;
    // 0x3bc
    float m_flAnimTime;
    // 0x3c0
    float m_flSimulationTime;
    // 0x3c4
    uint8_t m_nSceneObjectOverrideFlags;
    // 0x3c5
    bool m_bHasSuccessfullyInterpolated;
    // 0x3c6
    bool m_bHasAddedVarsToInterpolation;
    // 0x3c7
    bool m_bRenderEvenWhenNotSuccessfullyInterpolated;
    // 0x3c8
    int32[2] m_nInterpolationLatchDirtyFlags;
    // 0x3d0
    uint16[11] m_ListEntry;
    // 0x3e8
    GameTime_t m_flCreateTime;
    // 0x3ec
    float m_flSpeed;
    // 0x3f0
    uint16_t m_EntClientFlags;
    // 0x3f2
    bool m_bClientSideRagdoll;
    // 0x3f3
    uint8_t m_iTeamNum;
    // 0x3f4
    uint32_t m_spawnflags;
    // 0x3f8
    GameTick_t m_nNextThinkTick;
    // 0x400
    uint32_t m_fFlags;
    // 0x404
    Vector m_vecAbsVelocity;
    // 0x410
    CNetworkVelocityVector m_vecServerVelocity;
    // 0x438
    CNetworkVelocityVector m_vecVelocity;
    // 0x518
    Vector m_vecBaseVelocity;
    // 0x524
    CHandle<T> m_hEffectEntity;
    // 0x528
    CHandle<T> m_hOwnerEntity;
    // 0x52c
    MoveCollide_t m_MoveCollide;
    // 0x52d
    MoveType_t m_MoveType;
    // 0x52e
    MoveType_t m_nActualMoveType;
    // 0x530
    float m_flWaterLevel;
    // 0x534
    uint32_t m_fEffects;
    // 0x538
    CHandle<T> m_hGroundEntity;
    // 0x53c
    int32_t m_nGroundBodyIndex;
    // 0x540
    float m_flFriction;
    // 0x544
    float m_flElasticity;
    // 0x548
    float m_flGravityScale;
    // 0x54c
    float m_flTimeScale;
    // 0x550
    bool m_bAnimatedEveryTick;
    // 0x551
    bool m_bGravityDisabled;
    // 0x554
    GameTime_t m_flNavIgnoreUntilTime;
    // 0x558
    uint16_t m_hThink;
    // 0x568
    uint8_t m_fBBoxVisFlags;
    // 0x56c
    float m_flActualGravityScale;
    // 0x570
    bool m_bGravityActuallyDisabled;
    // 0x571
    bool m_bPredictable;
    // 0x572
    bool m_bRenderWithViewModels;
    // 0x574
    int32_t m_nFirstPredictableCommand;
    // 0x578
    int32_t m_nLastPredictableCommand;
    // 0x57c
    CHandle<T> m_hOldMoveParent;
    // 0x580
    CParticleProperty m_Particles;
    // 0x5b0
    QAngle m_vecAngVelocity;
    // 0x5bc
    int32_t m_DataChangeEventRef;
    // 0x5c0
    CUtlVector<T> m_dependencies;
    // 0x5d8
    int32_t m_nCreationTick;
    // 0x5e9
    bool m_bAnimTimeChanged;
    // 0x5ea
    bool m_bSimulationTimeChanged;
    // 0x5f8
    CUtlString m_sUniqueHammerID;
    // 0x600
    BloodType m_nBloodType;
};
struct ActiveModelConfig_t {
    // 0x30
    ModelConfigHandle_t m_Handle;
    // 0x38
    CUtlSymbolLarge m_Name;
    // 0x40
    CHandle<T> m_AssociatedEntities;
    // 0x58
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames;
};
struct C_WeaponSSG08 {
};
struct CPulseCell_Value_Curve {
    // 0x48
    CPiecewiseCurve m_Curve;
};
struct C_BasePlayerPawn {
    // 0x13d8
    CPlayer_WeaponServices* m_pWeaponServices;
    // 0x13e0
    CPlayer_ItemServices* m_pItemServices;
    // 0x13e8
    CPlayer_AutoaimServices* m_pAutoaimServices;
    // 0x13f0
    CPlayer_ObserverServices* m_pObserverServices;
    // 0x13f8
    CPlayer_WaterServices* m_pWaterServices;
    // 0x1400
    CPlayer_UseServices* m_pUseServices;
    // 0x1408
    CPlayer_FlashlightServices* m_pFlashlightServices;
    // 0x1410
    CPlayer_CameraServices* m_pCameraServices;
    // 0x1418
    CPlayer_MovementServices* m_pMovementServices;
    // 0x1428
    C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges;
    // 0x1490
    QAngle v_angle;
    // 0x149c
    QAngle v_anglePrevious;
    // 0x14a8
    uint32_t m_iHideHUD;
    // 0x14b0
    sky3dparams_t m_skybox3d;
    // 0x1540
    GameTime_t m_flDeathTime;
    // 0x1544
    Vector m_vecPredictionError;
    // 0x1550
    GameTime_t m_flPredictionErrorTime;
    // 0x1570
    Vector m_vecLastCameraSetupLocalOrigin;
    // 0x157c
    GameTime_t m_flLastCameraSetupTime;
    // 0x1580
    float m_flFOVSensitivityAdjust;
    // 0x1584
    float m_flMouseSensitivity;
    // 0x1588
    Vector m_vOldOrigin;
    // 0x1594
    float m_flOldSimulationTime;
    // 0x1598
    int32_t m_nLastExecutedCommandNumber;
    // 0x159c
    int32_t m_nLastExecutedCommandTick;
    // 0x15a0
    CHandle<T> m_hController;
    // 0x15a4
    CHandle<T> m_hDefaultController;
    // 0x15a8
    bool m_bIsSwappingToPredictableController;
};
struct C_Chicken {
    // 0x13a8
    CHandle<T> m_hHolidayHatAddon;
    // 0x13ac
    bool m_jumpedThisFrame;
    // 0x13b0
    CHandle<T> m_leader;
    // 0x13b8
    C_AttributeContainer m_AttributeManager;
    // 0x1888
    bool m_bAttributesInitialized;
    // 0x188c
    ParticleIndex_t m_hWaterWakeParticles;
    // 0x1890
    bool m_bIsPreviewModel;
};
struct C_SoundOpvarSetAABBEntity {
};
struct C_WeaponBizon {
};
struct C_StattrakModule {
    // 0x1170
    bool m_bKnife;
};
struct CCSObserver_CameraServices {
};
struct CTakeDamageInfoAPI {
};
struct CEnvSoundscapeProxy {
    // 0x698
    CUtlSymbolLarge m_MainSoundscapeName;
};
struct C_SoundEventEntity {
    // 0x608
    bool m_bStartOnSpawn;
    // 0x609
    bool m_bToLocalPlayer;
    // 0x60a
    bool m_bStopOnNew;
    // 0x60b
    bool m_bSaveRestore;
    // 0x60c
    bool m_bSavedIsPlaying;
    // 0x610
    float m_flSavedElapsedTime;
    // 0x618
    CUtlSymbolLarge m_iszSourceEntityName;
    // 0x620
    CUtlSymbolLarge m_iszAttachmentName;
    // 0x628
    CEntityOutputTemplate< uint64, uint64 > m_onGUIDChanged;
    // 0x648
    CEntityIOOutput m_onSoundFinished;
    // 0x660
    float m_flClientCullRadius;
    // 0x690
    CUtlSymbolLarge m_iszSoundName;
    // 0x6ac
    CEntityHandle m_hSource;
    // 0x6b0
    int32_t m_nEntityIndexSelection;
    // 0x0
    bitfield:1 m_bClientSideOnly;
};
struct CPulseCell_Inflow_EventHandler {
    // 0x80
    PulseSymbol_t m_EventName;
};
struct C_LightOrthoEntity {
};
struct CPulseCell_BaseFlow {
};
struct CBombTarget {
    // 0xf58
    bool m_bBombPlantedHere;
};
struct C_Knife {
    // 0x1f40
    bool m_bFirstAttack;
};
struct C_CSGO_TerroristWingmanIntroCamera {
};
struct CSkeletonInstance {
    // 0x160
    CModelState m_modelState;
    // 0x430
    bool m_bIsAnimationEnabled;
    // 0x431
    bool m_bUseParentRenderBounds;
    // 0x432
    bool m_bDisableSolidCollisionsForHierarchy;
    // 0x0
    bitfield:1 m_bDirtyMotionType;
    // 0x0
    bitfield:1 m_bIsGeneratingLatchedParentSpaceState;
    // 0x434
    CUtlString m_materialGroup;
    // 0x438
    uint8_t m_nHitboxSet;
};
struct CEntityComponent {
};
struct C_ItemDogtags {
    // 0x19c0
    CHandle<T> m_OwningPlayer;
    // 0x19c4
    CHandle<T> m_KillingPlayer;
};
struct C_LateUpdatedAnimating {
};
struct CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    // 0x0
    CUtlVector<T> m_Shuffle;
    // 0x20
    int32_t m_nNextShuffle;
};
struct CPulseCell_BaseLerp_CursorState_t {
    // 0x0
    GameTime_t m_StartTime;
    // 0x4
    GameTime_t m_EndTime;
};
struct CPulseAnimFuncs {
};
struct C_BaseClientUIEntity {
    // 0xe90
    bool m_bEnabled;
    // 0xe98
    CUtlSymbolLarge m_DialogXMLName;
    // 0xea0
    CUtlSymbolLarge m_PanelClassName;
    // 0xea8
    CUtlSymbolLarge m_PanelID;
};
struct CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    // 0x0
    PulseSymbol_t m_TagName;
};
struct CPulseArraylib {
};
struct C_WeaponUSPSilencer {
};
struct C_MolotovProjectile {
    // 0x1438
    bool m_bIsIncGrenade;
};
struct C_TriggerLerpObject {
};
struct CPointTemplateAPI {
};
struct C_WeaponRevolver {
};
struct C_WeaponElite {
};
struct C_DynamicPropAlias_cable_dynamic {
};
struct CBaseProp {
    // 0x1168
    bool m_bModelOverrodeBlockLOS;
    // 0x116c
    int32_t m_iShapeType;
    // 0x1170
    bool m_bConformToCollisionBounds;
    // 0x1180
    CTransform m_mPreferredCatchTransform;
};
struct CInfoOffscreenPanoramaTexture {
    // 0x608
    bool m_bDisabled;
    // 0x60c
    int32_t m_nResolutionX;
    // 0x610
    int32_t m_nResolutionY;
    // 0x618
    CUtlSymbolLarge m_szPanelType;
    // 0x620
    CUtlSymbolLarge m_szLayoutFileName;
    // 0x628
    CUtlSymbolLarge m_RenderAttrName;
    // 0x630
    CHandle<T> m_TargetEntities;
    // 0x648
    int32_t m_nTargetChangeCount;
    // 0x650
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    // 0x668
    CUtlSymbolLarge m_szTargetsName;
    // 0x670
    CUtlVector<T> m_AdditionalTargetEntities;
    // 0x7e8
    bool m_bCheckCSSClasses;
};
struct CCSWeaponBaseVData {
    // 0x440
    CSWeaponType m_WeaponType;
    // 0x444
    CSWeaponCategory m_WeaponCategory;
    // 0x448
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmSkeleton  m_szAnimSkeleton;
    // 0x528
    Vector m_vecMuzzlePos0;
    // 0x534
    Vector m_vecMuzzlePos1;
    // 0x540
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys m_szTracerParticle;
    // 0x620
    gear_slot_t m_GearSlot;
    // 0x624
    int32_t m_GearSlotPosition;
    // 0x628
    loadout_slot_t m_DefaultLoadoutSlot;
    // 0x62c
    int32_t m_nPrice;
    // 0x630
    int32_t m_nKillAward;
    // 0x634
    int32_t m_nPrimaryReserveAmmoMax;
    // 0x638
    int32_t m_nSecondaryReserveAmmoMax;
    // 0x63c
    bool m_bMeleeWeapon;
    // 0x63d
    bool m_bHasBurstMode;
    // 0x63e
    bool m_bIsRevolver;
    // 0x63f
    bool m_bCannotShootUnderwater;
    // 0x640
    CGlobalSymbol m_szName;
    // 0x648
    CSWeaponSilencerType m_eSilencerType;
    // 0x64c
    int32_t m_nCrosshairMinDistance;
    // 0x650
    int32_t m_nCrosshairDeltaDistance;
    // 0x654
    bool m_bIsFullAuto;
    // 0x658
    int32_t m_nNumBullets;
    // 0x65c
    bool m_bReloadsSingleShells;
    // 0x660
    CFiringModeFloat m_flCycleTime;
    // 0x668
    CFiringModeFloat m_flMaxSpeed;
    // 0x670
    CFiringModeFloat m_flSpread;
    // 0x678
    CFiringModeFloat m_flInaccuracyCrouch;
    // 0x680
    CFiringModeFloat m_flInaccuracyStand;
    // 0x688
    CFiringModeFloat m_flInaccuracyJump;
    // 0x690
    CFiringModeFloat m_flInaccuracyLand;
    // 0x698
    CFiringModeFloat m_flInaccuracyLadder;
    // 0x6a0
    CFiringModeFloat m_flInaccuracyFire;
    // 0x6a8
    CFiringModeFloat m_flInaccuracyMove;
    // 0x6b0
    CFiringModeFloat m_flRecoilAngle;
    // 0x6b8
    CFiringModeFloat m_flRecoilAngleVariance;
    // 0x6c0
    CFiringModeFloat m_flRecoilMagnitude;
    // 0x6c8
    CFiringModeFloat m_flRecoilMagnitudeVariance;
    // 0x6d0
    CFiringModeInt m_nTracerFrequency;
    // 0x6d8
    float m_flInaccuracyJumpInitial;
    // 0x6dc
    float m_flInaccuracyJumpApex;
    // 0x6e0
    float m_flInaccuracyReload;
    // 0x6e4
    float m_flDeployDuration;
    // 0x6e8
    float m_flDisallowAttackAfterReloadStartDuration;
    // 0x6ec
    int32_t m_nBurstShotCount;
    // 0x6f0
    bool m_bAllowBurstHolster;
    // 0x6f4
    int32_t m_nRecoilSeed;
    // 0x6f8
    int32_t m_nSpreadSeed;
    // 0x6fc
    float m_flAttackMovespeedFactor;
    // 0x700
    float m_flInaccuracyPitchShift;
    // 0x704
    float m_flInaccuracyAltSoundThreshold;
    // 0x708
    CUtlString m_szUseRadioSubtitle;
    // 0x710
    bool m_bUnzoomsAfterShot;
    // 0x711
    bool m_bHideViewModelWhenZoomed;
    // 0x714
    int32_t m_nZoomLevels;
    // 0x718
    int32_t m_nZoomFOV1;
    // 0x71c
    int32_t m_nZoomFOV2;
    // 0x720
    float m_flZoomTime0;
    // 0x724
    float m_flZoomTime1;
    // 0x728
    float m_flZoomTime2;
    // 0x72c
    float m_flIronSightPullUpSpeed;
    // 0x730
    float m_flIronSightPutDownSpeed;
    // 0x734
    float m_flIronSightFOV;
    // 0x738
    float m_flIronSightPivotForward;
    // 0x73c
    float m_flIronSightLooseness;
    // 0x740
    int32_t m_nDamage;
    // 0x744
    float m_flHeadshotMultiplier;
    // 0x748
    float m_flArmorRatio;
    // 0x74c
    float m_flPenetration;
    // 0x750
    float m_flRange;
    // 0x754
    float m_flRangeModifier;
    // 0x758
    float m_flFlinchVelocityModifierLarge;
    // 0x75c
    float m_flFlinchVelocityModifierSmall;
    // 0x760
    float m_flRecoveryTimeCrouch;
    // 0x764
    float m_flRecoveryTimeStand;
    // 0x768
    float m_flRecoveryTimeCrouchFinal;
    // 0x76c
    float m_flRecoveryTimeStandFinal;
    // 0x770
    int32_t m_nRecoveryTransitionStartBullet;
    // 0x774
    int32_t m_nRecoveryTransitionEndBullet;
    // 0x778
    float m_flThrowVelocity;
    // 0x77c
    Vector m_vSmokeColor;
    // 0x788
    CGlobalSymbol m_szAnimClass;
};
struct CAttributeManager {
    // 0x8
    CUtlVector<T> m_Providers;
    // 0x20
    int32_t m_iReapplyProvisionParity;
    // 0x24
    CHandle<T> m_hOuter;
    // 0x28
    bool m_bPreventLoopback;
    // 0x2c
    attributeprovidertypes_t m_ProviderType;
    // 0x30
    CUtlVector<T> m_CachedResults;
};
struct SignatureOutflow_Continue {
};
struct CInfoTarget {
};
struct CPlayer_CameraServices {
    // 0x48
    QAngle m_vecCsViewPunchAngle;
    // 0x54
    GameTick_t m_nCsViewPunchAngleTick;
    // 0x58
    float m_flCsViewPunchAngleTickRatio;
    // 0x60
    C_fogplayerparams_t m_PlayerFog;
    // 0xa0
    CHandle<T> m_hColorCorrectionCtrl;
    // 0xa4
    CHandle<T> m_hViewEntity;
    // 0xa8
    CHandle<T> m_hTonemapController;
    // 0xb0
    audioparams_t m_audio;
    // 0x128
    CHandle<T> m_PostProcessingVolumes;
    // 0x140
    float m_flOldPlayerZ;
    // 0x144
    float m_flOldPlayerViewOffsetZ;
    // 0x148
    fogparams_t m_CurrentFog;
    // 0x1b0
    CHandle<T> m_hOldFogController;
    // 0x1b4
    bool[5] m_bOverrideFogColor;
    // 0x1b9
    Color[5] m_OverrideFogColor;
    // 0x1cd
    bool[5] m_bOverrideFogStartEnd;
    // 0x1d4
    float32[5] m_fOverrideFogStart;
    // 0x1e8
    float32[5] m_fOverrideFogEnd;
    // 0x1fc
    CHandle<T> m_hActivePostProcessingVolume;
    // 0x200
    QAngle m_angDemoViewAngles;
};
struct CPulseCell_Timeline {
    // 0x48
    CUtlVector<T> m_TimelineEvents;
    // 0x60
    bool m_bWaitForChildOutflows;
    // 0x68
    CPulse_ResumePoint m_OnFinished;
    // 0xb0
    CPulse_ResumePoint m_OnCanceled;
};
struct CPulseCell_Inflow_EntOutputHandler {
    // 0x80
    PulseSymbol_t m_SourceEntity;
    // 0x90
    PulseSymbol_t m_SourceOutput;
    // 0xa0
    CPulseValueFullType m_ExpectedParamType;
};
struct C_BaseCSGrenade {
    // 0x1f40
    bool m_bClientPredictDelete;
    // 0x1f41
    bool m_bRedraw;
    // 0x1f42
    bool m_bIsHeldByPlayer;
    // 0x1f43
    bool m_bPinPulled;
    // 0x1f44
    bool m_bJumpThrow;
    // 0x1f45
    bool m_bThrowAnimating;
    // 0x1f48
    GameTime_t m_fThrowTime;
    // 0x1f50
    float m_flThrowStrength;
    // 0x1fc8
    GameTime_t m_fDropTime;
    // 0x1fcc
    GameTime_t m_fPinPullTime;
    // 0x1fd0
    bool m_bJustPulledPin;
    // 0x1fd4
    GameTick_t m_nNextHoldTick;
    // 0x1fd8
    float m_flNextHoldFrac;
    // 0x1fdc
    CHandle<T> m_hSwitchToWeaponAfterThrow;
};
struct CFilterAttributeInt {
    // 0x640
    CUtlSymbolLarge m_sAttributeName;
};
struct CPointTemplate {
    // 0x608
    CUtlSymbolLarge m_iszWorldName;
    // 0x610
    CUtlSymbolLarge m_iszSource2EntityLumpName;
    // 0x618
    CUtlSymbolLarge m_iszEntityFilterName;
    // 0x620
    float m_flTimeoutInterval;
    // 0x624
    bool m_bAsynchronouslySpawnEntities;
    // 0x628
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior;
    // 0x62c
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType;
    // 0x630
    CUtlVector<T> m_createdSpawnGroupHandles;
    // 0x648
    CUtlVector<T> m_SpawnedEntityHandles;
    // 0x660
    HSCRIPT m_ScriptSpawnCallback;
    // 0x668
    HSCRIPT m_ScriptCallbackScope;
};
struct CPlayer_FlashlightServices {
};
struct CCSPlayerController {
    // 0x808
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices;
    // 0x810
    CCSPlayerController_InventoryServices* m_pInventoryServices;
    // 0x818
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices;
    // 0x820
    CCSPlayerController_DamageServices* m_pDamageServices;
    // 0x828
    uint32_t m_iPing;
    // 0x82c
    bool m_bHasCommunicationAbuseMute;
    // 0x830
    uint32_t m_uiCommunicationMuteFlags;
    // 0x838
    CUtlSymbolLarge m_szCrosshairCodes;
    // 0x840
    uint8_t m_iPendingTeamNum;
    // 0x844
    GameTime_t m_flForceTeamTime;
    // 0x848
    int32_t m_iCompTeammateColor;
    // 0x84c
    bool m_bEverPlayedOnTeam;
    // 0x850
    GameTime_t m_flPreviousForceJoinTeamTime;
    // 0x858
    CUtlSymbolLarge m_szClan;
    // 0x860
    CUtlString m_sSanitizedPlayerName;
    // 0x868
    int32_t m_iCoachingTeam;
    // 0x870
    uint64_t m_nPlayerDominated;
    // 0x878
    uint64_t m_nPlayerDominatingMe;
    // 0x880
    int32_t m_iCompetitiveRanking;
    // 0x884
    int32_t m_iCompetitiveWins;
    // 0x888
    int8 m_iCompetitiveRankType;
    // 0x88c
    int32_t m_iCompetitiveRankingPredicted_Win;
    // 0x890
    int32_t m_iCompetitiveRankingPredicted_Loss;
    // 0x894
    int32_t m_iCompetitiveRankingPredicted_Tie;
    // 0x898
    int32_t m_nEndMatchNextMapVote;
    // 0x89c
    uint16_t m_unActiveQuestId;
    // 0x8a0
    uint32_t m_rtActiveMissionPeriod;
    // 0x8a4
    QuestProgress::Reason m_nQuestProgressReason;
    // 0x8a8
    uint32_t m_unPlayerTvControlFlags;
    // 0x8d8
    int32_t m_iDraftIndex;
    // 0x8dc
    uint32_t m_msQueuedModeDisconnectionTimestamp;
    // 0x8e0
    uint32_t m_uiAbandonRecordedReason;
    // 0x8e4
    uint32_t m_eNetworkDisconnectionReason;
    // 0x8e8
    bool m_bCannotBeKicked;
    // 0x8e9
    bool m_bEverFullyConnected;
    // 0x8ea
    bool m_bAbandonAllowsSurrender;
    // 0x8eb
    bool m_bAbandonOffersInstantSurrender;
    // 0x8ec
    bool m_bDisconnection1MinWarningPrinted;
    // 0x8ed
    bool m_bScoreReported;
    // 0x8f0
    int32_t m_nDisconnectionTick;
    // 0x900
    bool m_bControllingBot;
    // 0x901
    bool m_bHasControlledBotThisRound;
    // 0x902
    bool m_bHasBeenControlledByPlayerThisRound;
    // 0x904
    int32_t m_nBotsControlledThisRound;
    // 0x908
    bool m_bCanControlObservedBot;
    // 0x90c
    CHandle<T> m_hPlayerPawn;
    // 0x910
    CHandle<T> m_hObserverPawn;
    // 0x914
    bool m_bPawnIsAlive;
    // 0x918
    uint32_t m_iPawnHealth;
    // 0x91c
    int32_t m_iPawnArmor;
    // 0x920
    bool m_bPawnHasDefuser;
    // 0x921
    bool m_bPawnHasHelmet;
    // 0x922
    uint16_t m_nPawnCharacterDefIndex;
    // 0x924
    int32_t m_iPawnLifetimeStart;
    // 0x928
    int32_t m_iPawnLifetimeEnd;
    // 0x92c
    int32_t m_iPawnBotDifficulty;
    // 0x930
    CHandle<T> m_hOriginalControllerOfCurrentPawn;
    // 0x934
    int32_t m_iScore;
    // 0x938
    uint8[8] m_recentKillQueue;
    // 0x940
    uint8_t m_nFirstKill;
    // 0x941
    uint8_t m_nKillCount;
    // 0x942
    bool m_bMvpNoMusic;
    // 0x944
    int32_t m_eMvpReason;
    // 0x948
    int32_t m_iMusicKitID;
    // 0x94c
    int32_t m_iMusicKitMVPs;
    // 0x950
    int32_t m_iMVPs;
    // 0x954
    bool m_bIsPlayerNameDirty;
    // 0x955
    bool m_bFireBulletsSeedSynchronized;
};
struct C_CSGO_TeamIntroCounterTerroristPosition {
};
struct C_CSGO_PreviewModel {
    // 0x1350
    CUtlString m_defaultAnim;
    // 0x1358
    AnimLoopMode_t m_nDefaultAnimLoopMode;
    // 0x135c
    float m_flInitialModelScale;
    // 0x1360
    CUtlString m_sInitialWeaponState;
};
struct C_CSGO_TeamSelectCharacterPosition {
};
struct CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    // 0x0
    int32_t m_nNextIndex;
};
struct C_SoundEventAABBEntity {
    // 0x6b8
    Vector m_vMins;
    // 0x6c4
    Vector m_vMaxs;
};
struct CCSPlayer_MovementServices {
    // 0x270
    Vector m_vecLadderNormal;
    // 0x27c
    int32_t m_nLadderSurfacePropIndex;
    // 0x280
    bool m_bDucked;
    // 0x284
    float m_flDuckAmount;
    // 0x288
    float m_flDuckSpeed;
    // 0x28c
    bool m_bDuckOverride;
    // 0x28d
    bool m_bDesiresDuck;
    // 0x28e
    bool m_bDucking;
    // 0x290
    float m_flDuckOffset;
    // 0x294
    uint32_t m_nDuckTimeMsecs;
    // 0x298
    uint32_t m_nDuckJumpTimeMsecs;
    // 0x29c
    uint32_t m_nJumpTimeMsecs;
    // 0x2a0
    float m_flLastDuckTime;
    // 0x2b0
    Vector2D m_vecLastPositionAtFullCrouchSpeed;
    // 0x2b8
    bool m_duckUntilOnGround;
    // 0x2b9
    bool m_bHasWalkMovedSinceLastJump;
    // 0x2ba
    bool m_bInStuckTest;
    // 0x4c8
    int32_t m_nTraceCount;
    // 0x4cc
    int32_t m_StuckLast;
    // 0x4d0
    bool m_bSpeedCropped;
    // 0x4d4
    int32_t m_nOldWaterLevel;
    // 0x4d8
    float m_flWaterEntryTime;
    // 0x4dc
    Vector m_vecForward;
    // 0x4e8
    Vector m_vecLeft;
    // 0x4f4
    Vector m_vecUp;
    // 0x500
    int32_t m_nGameCodeHasMovedPlayerAfterCommand;
    // 0x504
    GameTime_t m_fStashGrenadeParameterWhen;
    // 0x508
    uint64_t m_nButtonDownMaskPrev;
    // 0x510
    float m_flOffsetTickCompleteTime;
    // 0x514
    float m_flOffsetTickStashedSpeed;
    // 0x518
    float m_flStamina;
    // 0x51c
    float m_flHeightAtJumpStart;
    // 0x520
    float m_flMaxJumpHeightThisJump;
    // 0x524
    float m_flMaxJumpHeightLastJump;
    // 0x528
    float m_flStaminaAtJumpStart;
    // 0x52c
    float m_flVelMulAtJumpStart;
    // 0x530
    float m_flAccumulatedJumpError;
    // 0x538
    CCSPlayerLegacyJump m_LegacyJump;
    // 0x550
    CCSPlayerModernJump m_ModernJump;
    // 0x588
    GameTick_t m_nLastJumpTick;
    // 0x58c
    float m_flLastJumpFrac;
    // 0x590
    float m_flLastJumpVelocityZ;
    // 0x594
    bool m_bJumpApexPending;
    // 0x598
    float m_flTicksSinceLastSurfingDetected;
    // 0x59c
    bool m_bWasSurfing;
    // 0x62c
    Vector m_vecInputRotated;
};
struct SellbackPurchaseEntry_t {
    // 0x30
    uint16_t m_unDefIdx;
    // 0x34
    int32_t m_nCost;
    // 0x38
    int32_t m_nPrevArmor;
    // 0x3c
    bool m_bPrevHelmet;
    // 0x40
    CEntityHandle m_hItem;
};
struct C_TintController {
};
struct C_WeaponBaseItem {
    // 0x1f40
    bool m_bSequenceInProgress;
    // 0x1f41
    bool m_bRedraw;
};
struct CWaterSplasher {
};
struct C_FuncBrush {
};
struct PhysicsRagdollPose_t {
    // 0x8
    C_NetworkUtlVectorBase< CTransform > m_Transforms;
    // 0x20
    CHandle<T> m_hOwner;
    // 0x24
    bool m_bSetFromDebugHistory;
};
struct CPropDataComponent {
    // 0x10
    float m_flDmgModBullet;
    // 0x14
    float m_flDmgModClub;
    // 0x18
    float m_flDmgModExplosive;
    // 0x1c
    float m_flDmgModFire;
    // 0x20
    CUtlSymbolLarge m_iszPhysicsDamageTableName;
    // 0x28
    CUtlSymbolLarge m_iszBasePropData;
    // 0x30
    int32_t m_nInteractions;
    // 0x34
    bool m_bSpawnMotionDisabled;
    // 0x38
    int32_t m_nDisableTakePhysicsDamageSpawnFlag;
    // 0x3c
    int32_t m_nMotionDisabledSpawnFlag;
};
struct CPulseCell_LimitCount_InstanceState_t {
    // 0x0
    int32_t m_nCurrentCount;
};
struct C_WeaponCZ75a {
    // 0x1f70
    bool m_bMagazineRemoved;
};
struct C_DynamicLight {
    // 0xe88
    uint8_t m_Flags;
    // 0xe89
    uint8_t m_LightStyle;
    // 0xe8c
    float m_Radius;
    // 0xe90
    int32_t m_Exponent;
    // 0xe94
    float m_InnerAngle;
    // 0xe98
    float m_OuterAngle;
    // 0xe9c
    float m_SpotRadius;
};
struct EngineCountdownTimer {
    // 0x8
    float m_duration;
    // 0xc
    float m_timestamp;
    // 0x10
    float m_timescale;
};
struct C_SoundEventSphereEntity {
    // 0x6b8
    float m_flRadius;
};
struct CCSPlayerController_DamageServices {
    // 0x40
    int32_t m_nSendUpdate;
    // 0x48
    C_UtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList;
};
struct C_CSGO_TeamPreviewModel {
};
struct C_TonemapController2Alias_env_tonemap_controller2 {
};
struct C_Inferno {
    // 0xec8
    ParticleIndex_t m_nfxFireDamageEffect;
    // 0xed0
    CStrongHandle<T> m_hInfernoPointsSnapshot;
    // 0xed8
    CStrongHandle<T> m_hInfernoFillerPointsSnapshot;
    // 0xee0
    CStrongHandle<T> m_hInfernoOutlinePointsSnapshot;
    // 0xee8
    CStrongHandle<T> m_hInfernoClimbingOutlinePointsSnapshot;
    // 0xef0
    CStrongHandle<T> m_hInfernoDecalsSnapshot;
    // 0xef8
    Vector[64] m_firePositions;
    // 0x11f8
    Vector[64] m_fireParentPositions;
    // 0x14f8
    bool[64] m_bFireIsBurning;
    // 0x1538
    Vector[64] m_BurnNormal;
    // 0x1838
    int32_t m_fireCount;
    // 0x183c
    int32_t m_nInfernoType;
    // 0x1840
    float m_nFireLifetime;
    // 0x1844
    bool m_bInPostEffectTime;
    // 0x1848
    int32_t m_lastFireCount;
    // 0x184c
    int32_t m_nFireEffectTickBegin;
    // 0x8450
    int32_t m_drawableCount;
    // 0x8454
    bool m_blosCheck;
    // 0x8458
    int32_t m_nlosperiod;
    // 0x845c
    float m_maxFireHalfWidth;
    // 0x8460
    float m_maxFireHeight;
    // 0x8464
    Vector m_minBounds;
    // 0x8470
    Vector m_maxBounds;
    // 0x847c
    float m_flLastGrassBurnThink;
};
struct CFilterLOS {
};
struct CPointOrient {
    // 0x608
    CUtlSymbolLarge m_iszSpawnTargetName;
    // 0x610
    CHandle<T> m_hTarget;
    // 0x614
    bool m_bActive;
    // 0x618
    PointOrientGoalDirectionType_t m_nGoalDirection;
    // 0x61c
    PointOrientConstraint_t m_nConstraint;
    // 0x620
    float m_flMaxTurnRate;
    // 0x624
    GameTime_t m_flLastGameTime;
};
struct C_GlobalLight {
    // 0xad0
    uint16_t m_WindClothForceHandle;
};
struct C_EnvWindClientside {
    // 0x608
    C_EnvWindShared m_EnvWindShared;
};
struct sky3dparams_t {
    // 0x8
    int16 scale;
    // 0xc
    Vector origin;
    // 0x18
    bool bClip3DSkyBoxNearToWorldFar;
    // 0x1c
    float flClip3DSkyBoxNearToWorldFarOffset;
    // 0x20
    fogparams_t fog;
    // 0x88
    WorldGroupId_t m_nWorldGroupID;
};
struct C_FlashbangProjectile {
};
struct C_SoundEventConeEntity {
    // 0x6b8
    float m_flEmitterAngle;
    // 0x6bc
    float m_flSweetSpotAngle;
    // 0x6c0
    float m_flAttenMin;
    // 0x6c4
    float m_flAttenMax;
    // 0x6c8
    CUtlSymbolLarge m_iszParameterName;
};
struct CDestructiblePartsComponent {
    // 0x0
    CNetworkVarChainer _m_pChainEntity;
    // 0x48
    CUtlVector<T> m_vecDamageTakenByHitGroup;
    // 0x60
    CHandle<T> m_hOwner;
};
struct C_WeaponP90 {
};
struct C_EnvWind {
    // 0x608
    C_EnvWindShared m_EnvWindShared;
};
struct C_CSGO_TerroristTeamIntroCamera {
};
struct CPulseCell_Step_DebugLog {
};
struct CCSPlayerController_ActionTrackingServices {
    // 0x40
    C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats;
    // 0xa8
    CSMatchStats_t m_matchStats;
    // 0x128
    int32_t m_iNumRoundKills;
    // 0x12c
    int32_t m_iNumRoundKillsHeadshots;
    // 0x130
    float m_flTotalRoundDamageDealt;
};
struct CBodyComponentBaseAnimGraph {
    // 0x550
    CBaseAnimGraphController m_animationController;
};
struct C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
};
struct C_InfoInstructorHintHostageRescueZone {
};
struct CPulseCell_BaseYieldingInflow {
};
struct PulseNodeDynamicOutflows_t {
    // 0x0
    CUtlVector<T> m_Outflows;
};
struct C_TriggerBuoyancy {
    // 0xf58
    CBuoyancyHelper m_BuoyancyHelper;
    // 0x1070
    float m_flFluidDensity;
};
struct CPlayer_MovementServices_Humanoid {
    // 0x240
    float m_flStepSoundTime;
    // 0x244
    float m_flFallVelocity;
    // 0x248
    Vector m_groundNormal;
    // 0x254
    float m_flSurfaceFriction;
    // 0x258
    CUtlString m_surfaceProps;
    // 0x268
    int32_t m_nStepside;
};
struct CPulseCell_IsRequirementValid_Criteria_t {
    // 0x0
    bool m_bIsValid;
};
struct C_WeaponTec9 {
};
struct C_PhysPropClientside {
    // 0x12d0
    GameTime_t m_flTouchDelta;
    // 0x12d4
    GameTime_t m_fDeathTime;
    // 0x12d8
    Vector m_vecDamagePosition;
    // 0x12e4
    Vector m_vecDamageDirection;
    // 0x12f0
    DamageTypes_t m_nDamageType;
};
struct C_BaseDoor {
    // 0xe88
    bool m_bIsUsable;
};
struct CSMatchStats_t {
    // 0x68
    int32_t m_iEnemy5Ks;
    // 0x6c
    int32_t m_iEnemy4Ks;
    // 0x70
    int32_t m_iEnemy3Ks;
    // 0x74
    int32_t m_iEnemyKnifeKills;
    // 0x78
    int32_t m_iEnemyTaserKills;
};
struct EntityRenderAttribute_t {
    // 0x30
    CUtlString m_ID;
    // 0x34
    Vector4D m_Values;
};
struct CPulseCell_Inflow_ObservableVariableListener {
    // 0x80
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReference;
    // 0x82
    bool m_bSelfReference;
};
struct CFilterMultipleAPI {
};
struct CHostageRescueZone {
};
struct CModelState {
    // 0xa0
    CStrongHandle<T> m_hModel;
    // 0xa8
    CUtlSymbolLarge m_ModelName;
    // 0x179
    bool m_bClientClothCreationSuppressed;
    // 0x220
    uint64_t m_MeshGroupMask;
    // 0x270
    C_NetworkUtlVectorBase< int32 > m_nBodyGroupChoices;
    // 0x2ba
    int8 m_nIdealMotionType;
    // 0x2bb
    int8 m_nForceLOD;
    // 0x2bc
    int8 m_nClothUpdateFlags;
};
struct CPulseCell_LerpCameraSettings_CursorState_t {
    // 0x8
    CHandle<T> m_hCamera;
    // 0xc
    PointCameraSettings_t m_OverlaidStart;
    // 0x1c
    PointCameraSettings_t m_OverlaidEnd;
};
struct CPulseCell_Outflow_CycleOrdered {
    // 0x48
    CUtlVector<T> m_Outputs;
};
struct C_CSWeaponBaseGun {
    // 0x1f40
    int32_t m_zoomLevel;
    // 0x1f44
    int32_t m_iBurstShotsRemaining;
    // 0x1f48
    int32_t m_iSilencerBodygroup;
    // 0x1f58
    int32_t m_silencedModelIndex;
    // 0x1f5c
    bool m_inPrecache;
    // 0x1f5d
    bool m_bNeedsBoltAction;
    // 0x1f60
    int32_t m_nRevolverCylinderIdx;
};
struct C_CSGameRulesProxy {
    // 0x608
    C_CSGameRules* m_pGameRules;
};
struct CCollisionProperty {
    // 0x10
    VPhysicsCollisionAttribute_t m_collisionAttribute;
    // 0x40
    Vector m_vecMins;
    // 0x4c
    Vector m_vecMaxs;
    // 0x5a
    uint8_t m_usSolidFlags;
    // 0x5b
    SolidType_t m_nSolidType;
    // 0x5c
    uint8_t m_triggerBloat;
    // 0x5d
    SurroundingBoundsType_t m_nSurroundType;
    // 0x5e
    uint8_t m_CollisionGroup;
    // 0x5f
    uint8_t m_nEnablePhysics;
    // 0x60
    float m_flBoundingRadius;
    // 0x64
    Vector m_vecSpecifiedSurroundingMins;
    // 0x70
    Vector m_vecSpecifiedSurroundingMaxs;
    // 0x7c
    Vector m_vecSurroundingMaxs;
    // 0x88
    Vector m_vecSurroundingMins;
    // 0x94
    Vector m_vCapsuleCenter1;
    // 0xa0
    Vector m_vCapsuleCenter2;
    // 0xac
    float m_flCapsuleRadius;
};
struct C_WeaponP250 {
};
struct C_ShatterGlassShardPhysics {
    // 0x12e8
    shard_model_desc_t m_ShardDesc;
};
struct CFilterMassGreater {
    // 0x640
    float m_fFilterMass;
};
struct C_EntityDissolve {
    // 0xe90
    GameTime_t m_flStartTime;
    // 0xe94
    float m_flFadeInStart;
    // 0xe98
    float m_flFadeInLength;
    // 0xe9c
    float m_flFadeOutModelStart;
    // 0xea0
    float m_flFadeOutModelLength;
    // 0xea4
    float m_flFadeOutStart;
    // 0xea8
    float m_flFadeOutLength;
    // 0xeac
    GameTime_t m_flNextSparkTime;
    // 0xeb0
    EntityDisolveType_t m_nDissolveType;
    // 0xeb4
    Vector m_vDissolverOrigin;
    // 0xec0
    uint32_t m_nMagnitude;
    // 0xec4
    bool m_bCoreExplode;
    // 0xec5
    bool m_bLinkedToServerEnt;
};
struct C_SoundOpvarSetOBBEntity {
};
struct CCSGameModeRules_ArmsRace {
    // 0x30
    CUtlString m_WeaponSequence;
};
struct C_FuncMonitor {
    // 0xe88
    CUtlString m_targetCamera;
    // 0xe90
    int32_t m_nResolutionEnum;
    // 0xe94
    bool m_bRenderShadows;
    // 0xe95
    bool m_bUseUniqueColorTarget;
    // 0xe98
    CUtlString m_brushModelName;
    // 0xea0
    CHandle<T> m_hTargetCamera;
    // 0xea4
    bool m_bEnabled;
    // 0xea5
    bool m_bDraw3DSkybox;
};
struct C_ClientRagdoll {
    // 0x1168
    bool m_bFadeOut;
    // 0x1169
    bool m_bImportant;
    // 0x116c
    GameTime_t m_flEffectTime;
    // 0x1170
    GameTime_t m_gibDespawnTime;
    // 0x1174
    int32_t m_iCurrentFriction;
    // 0x1178
    int32_t m_iMinFriction;
    // 0x117c
    int32_t m_iMaxFriction;
    // 0x1180
    int32_t m_iFrictionAnimState;
    // 0x1184
    bool m_bReleaseRagdoll;
    // 0x1185
    AttachmentHandle_t m_iEyeAttachment;
    // 0x1186
    bool m_bFadingOut;
    // 0x1188
    float32[10] m_flScaleEnd;
    // 0x11b0
    GameTime_t[10] m_flScaleTimeStart;
    // 0x11d8
    GameTime_t[10] m_flScaleTimeEnd;
};
struct PulseSelectorOutflowList_t {
    // 0x0
    CUtlVector<T> m_Outflows;
};
struct CPulseCell_PlaySequence_CursorState_t {
    // 0x0
    CHandle<T> m_hTarget;
};
struct CBodyComponentSkeletonInstance {
    // 0x80
    CSkeletonInstance m_skeletonInstance;
};
struct C_CS2WeaponModuleBase {
};
struct C_CSGO_TeamPreviewCharacterPosition {
    // 0x608
    int32_t m_nVariant;
    // 0x60c
    int32_t m_nRandom;
    // 0x610
    int32_t m_nOrdinal;
    // 0x618
    CUtlString m_sWeaponName;
    // 0x620
    uint64_t m_xuid;
    // 0x628
    C_EconItemView m_agentItem;
    // 0xa98
    C_EconItemView m_glovesItem;
    // 0xf08
    C_EconItemView m_weaponItem;
};
struct C_SmokeGrenadeProjectile {
    // 0x1450
    int32_t m_nSmokeEffectTickBegin;
    // 0x1454
    bool m_bDidSmokeEffect;
    // 0x1458
    int32_t m_nRandomSeed;
    // 0x145c
    Vector m_vSmokeColor;
    // 0x1468
    Vector m_vSmokeDetonationPos;
    // 0x1478
    C_NetworkUtlVectorBase< uint8 > m_VoxelFrameData;
    // 0x1490
    int32_t m_nVoxelFrameDataSize;
    // 0x1494
    int32_t m_nVoxelUpdate;
    // 0x1498
    bool m_bSmokeVolumeDataReceived;
    // 0x1499
    bool m_bSmokeEffectSpawned;
};
struct CScriptComponent {
    // 0x30
    CUtlSymbolLarge m_scriptClassName;
};
struct CCSPlayer_BuyServices {
    // 0x48
    C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries;
};
struct C_PortraitWorldCallbackHandler {
};
struct C_DynamicProp {
    // 0x12d0
    bool m_bUseHitboxesForRenderBox;
    // 0x12d1
    bool m_bUseAnimGraph;
    // 0x12d8
    CEntityIOOutput m_pOutputAnimBegun;
    // 0x12f0
    CEntityIOOutput m_pOutputAnimOver;
    // 0x1308
    CEntityIOOutput m_pOutputAnimLoopCycleOver;
    // 0x1320
    CEntityIOOutput m_OnAnimReachedStart;
    // 0x1338
    CEntityIOOutput m_OnAnimReachedEnd;
    // 0x1350
    CUtlSymbolLarge m_iszIdleAnim;
    // 0x1358
    AnimLoopMode_t m_nIdleAnimLoopMode;
    // 0x135c
    bool m_bRandomizeCycle;
    // 0x135d
    bool m_bStartDisabled;
    // 0x135e
    bool m_bFiredStartEndOutput;
    // 0x135f
    bool m_bForceNpcExclude;
    // 0x1360
    bool m_bCreateNonSolid;
    // 0x1361
    bool m_bIsOverrideProp;
    // 0x1364
    int32_t m_iInitialGlowState;
    // 0x1368
    int32_t m_nGlowRange;
    // 0x136c
    int32_t m_nGlowRangeMin;
    // 0x1370
    Color m_glowColor;
    // 0x1374
    int32_t m_nGlowTeam;
    // 0x1378
    int32_t m_iCachedFrameCount;
    // 0x137c
    Vector m_vecCachedRenderMins;
    // 0x1388
    Vector m_vecCachedRenderMaxs;
};
struct C_CSTeam {
    // 0x6c0
    char[512] m_szTeamMatchStat;
    // 0x8c0
    int32_t m_numMapVictories;
    // 0x8c4
    bool m_bSurrendered;
    // 0x8c8
    int32_t m_scoreFirstHalf;
    // 0x8cc
    int32_t m_scoreSecondHalf;
    // 0x8d0
    int32_t m_scoreOvertime;
    // 0x8d4
    char[129] m_szClanTeamname;
    // 0x958
    uint32_t m_iClanID;
    // 0x95c
    char[8] m_szTeamFlagImage;
    // 0x964
    char[8] m_szTeamLogoImage;
};
struct C_CS2HudModelWeapon {
};
struct C_TextureBasedAnimatable {
    // 0xe88
    bool m_bLoop;
    // 0xe8c
    float m_flFPS;
    // 0xe90
    CStrongHandle<T> m_hPositionKeys;
    // 0xe98
    CStrongHandle<T> m_hRotationKeys;
    // 0xea0
    Vector m_vAnimationBoundsMin;
    // 0xeac
    Vector m_vAnimationBoundsMax;
    // 0xeb8
    float m_flStartTime;
    // 0xebc
    float m_flStartFrame;
};
struct C_LightEnvironmentEntity {
};
struct CLogicRelayAPI {
};
struct C_TriggerPhysics {
    // 0xf58
    float m_gravityScale;
    // 0xf5c
    float m_linearLimit;
    // 0xf60
    float m_linearDamping;
    // 0xf64
    float m_angularLimit;
    // 0xf68
    float m_angularDamping;
    // 0xf6c
    float m_linearForce;
    // 0xf70
    float m_flFrequency;
    // 0xf74
    float m_flDampingRatio;
    // 0xf78
    Vector m_vecLinearForcePointAt;
    // 0xf84
    bool m_bCollapseToForcePoint;
    // 0xf88
    Vector m_vecLinearForcePointAtWorld;
    // 0xf94
    Vector m_vecLinearForceDirection;
    // 0xfa0
    bool m_bConvertToDebrisWhenPossible;
};
struct C_PropDoorRotating {
};
struct C_HandleTest {
    // 0x608
    CHandle<T> m_Handle;
    // 0x60c
    bool m_bSendHandle;
};
struct CInfoWorldLayer {
    // 0x608
    CEntityIOOutput m_pOutputOnEntitiesSpawned;
    // 0x620
    CUtlSymbolLarge m_worldName;
    // 0x628
    CUtlSymbolLarge m_layerName;
    // 0x630
    bool m_bWorldLayerVisible;
    // 0x631
    bool m_bEntitiesSpawned;
    // 0x632
    bool m_bCreateAsChildSpawnGroup;
    // 0x634
    uint32_t m_hLayerSpawnGroup;
    // 0x638
    bool m_bWorldLayerActuallyVisible;
};
struct CBodyComponentBaseModelEntity {
};
struct C_Multimeter {
    // 0x1170
    CHandle<T> m_hTargetC4;
};
struct C_BaseTrigger {
    // 0xe88
    CEntityIOOutput m_OnStartTouch;
    // 0xea0
    CEntityIOOutput m_OnStartTouchAll;
    // 0xeb8
    CEntityIOOutput m_OnEndTouch;
    // 0xed0
    CEntityIOOutput m_OnEndTouchAll;
    // 0xee8
    CEntityIOOutput m_OnTouching;
    // 0xf00
    CEntityIOOutput m_OnTouchingEachEntity;
    // 0xf18
    CEntityIOOutput m_OnNotTouching;
    // 0xf30
    CUtlVector<T> m_hTouchingEntities;
    // 0xf48
    CUtlSymbolLarge m_iFilterName;
    // 0xf50
    CHandle<T> m_hFilter;
    // 0xf54
    bool m_bDisabled;
};
struct FilterDamageType {
    // 0x640
    int32_t m_iDamageType;
};
struct CAttributeList {
    // 0x8
    C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes;
    // 0x70
    CAttributeManager* m_pManager;
};
struct CPulseCell_Inflow_Wait {
    // 0x48
    CPulse_ResumePoint m_WakeResume;
};
struct CFilterProximity {
    // 0x640
    float m_flRadius;
};
struct CCS2WeaponGraphController {
    // 0x90
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action;
    // 0xa8
    CAnimGraph2ParamOptionalRef< bool > m_bActionReset;
    // 0xc0
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponActionSpeedScale;
    // 0xd8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponCategory;
    // 0xf0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponType;
    // 0x108
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponExtraInfo;
    // 0x120
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmo;
    // 0x138
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoMax;
    // 0x150
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoReserve;
    // 0x168
    CAnimGraph2ParamOptionalRef< bool > m_bWeaponIsSilenced;
    // 0x180
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponIronsightAmount;
    // 0x198
    CAnimGraph2ParamOptionalRef< bool > m_bIsUsingLegacyModel;
    // 0x1b0
    CAnimGraph2ParamOptionalRef< float32 > m_idleVariation;
    // 0x1c8
    CAnimGraph2ParamOptionalRef< float32 > m_deployVariation;
    // 0x1e0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_attackType;
    // 0x1f8
    CAnimGraph2ParamOptionalRef< float32 > m_attackThrowStrength;
    // 0x210
    CAnimGraph2ParamOptionalRef< float32 > m_flAttackVariation;
    // 0x228
    CAnimGraph2ParamOptionalRef< float32 > m_inspectVariation;
    // 0x240
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_inspectExtraInfo;
    // 0x258
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_reloadStage;
};
struct CEffectData {
    // 0x8
    VectorWS m_vOrigin;
    // 0x14
    VectorWS m_vStart;
    // 0x20
    Vector m_vNormal;
    // 0x2c
    QAngle m_vAngles;
    // 0x38
    CEntityHandle m_hEntity;
    // 0x3c
    CEntityHandle m_hOtherEntity;
    // 0x40
    float m_flScale;
    // 0x44
    float m_flMagnitude;
    // 0x48
    float m_flRadius;
    // 0x4c
    CUtlString m_nSurfaceProp;
    // 0x50
    CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex;
    // 0x58
    uint32_t m_nDamageType;
    // 0x5c
    uint8_t m_nPenetrate;
    // 0x5e
    uint16_t m_nMaterial;
    // 0x60
    int16 m_nHitBox;
    // 0x62
    uint8_t m_nColor;
    // 0x63
    uint8_t m_fFlags;
    // 0x64
    AttachmentHandle_t m_nAttachmentIndex;
    // 0x68
    CUtlString m_nAttachmentName;
    // 0x6c
    uint16_t m_iEffectName;
    // 0x6e
    uint8_t m_nExplosionType;
};
struct C_ParticleSystem {
    // 0xe88
    char[512] m_szSnapshotFileName;
    // 0x1088
    bool m_bActive;
    // 0x1089
    bool m_bFrozen;
    // 0x108c
    float m_flFreezeTransitionDuration;
    // 0x1090
    int32_t m_nStopType;
    // 0x1094
    bool m_bAnimateDuringGameplayPause;
    // 0x1098
    CStrongHandle<T> m_iEffectIndex;
    // 0x10a0
    GameTime_t m_flStartTime;
    // 0x10a4
    float m_flPreSimTime;
    // 0x10a8
    Vector[4] m_vServerControlPoints;
    // 0x10d8
    uint8[4] m_iServerControlPointAssignments;
    // 0x10dc
    CHandle<T> m_hControlPointEnts;
    // 0x11dc
    bool m_bNoSave;
    // 0x11dd
    bool m_bNoFreeze;
    // 0x11de
    bool m_bNoRamp;
    // 0x11df
    bool m_bStartActive;
    // 0x11e0
    CUtlSymbolLarge m_iszEffectName;
    // 0x11e8
    CUtlSymbolLarge[64] m_iszControlPointNames;
    // 0x13e8
    int32_t m_nDataCP;
    // 0x13ec
    Vector m_vecDataCPValue;
    // 0x13f8
    int32_t m_nTintCP;
    // 0x13fc
    Color m_clrTint;
    // 0x1420
    bool m_bOldActive;
    // 0x1421
    bool m_bOldFrozen;
};
struct CPulseCell_Outflow_CycleShuffled {
    // 0x48
    CUtlVector<T> m_Outputs;
};
struct C_WeaponSCAR20 {
};
struct C_BaseFlex {
    // 0x1170
    C_NetworkUtlVectorBase< float32 > m_flexWeight;
    // 0x1188
    VectorWS m_vLookTargetPosition;
    // 0x1270
    int32_t m_nLastFlexUpdateFrameCount;
    // 0x1274
    Vector m_CachedViewTarget;
    // 0x1280
    SceneEventId_t m_nNextSceneEventId;
    // 0x1284
    AttachmentHandle_t m_iMouthAttachment;
    // 0x1285
    AttachmentHandle_t m_iEyeAttachment;
    // 0x1286
    bool m_bResetFlexWeightsOnModelChange;
    // 0x12a0
    int32_t m_nEyeOcclusionRendererBone;
    // 0x12a4
    matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform;
    // 0x12d4
    Vector m_vEyeOcclusionRendererHalfExtent;
    // 0x12f0
    C_BaseFlex::Emphasized_Phoneme[3] m_PhonemeClasses;
};
struct C_FuncMover {
};
struct CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t {
    // 0x0
    C_EconItemView* pItem;
    // 0x8
    uint16_t team;
    // 0xa
    uint16_t slot;
};
struct CLightComponent {
    // 0x38
    CNetworkVarChainer _m_pChainEntity;
    // 0x75
    Color m_Color;
    // 0x79
    Color m_SecondaryColor;
    // 0x80
    float m_flBrightness;
    // 0x84
    float m_flBrightnessScale;
    // 0x88
    float m_flBrightnessMult;
    // 0x8c
    float m_flRange;
    // 0x90
    float m_flFalloff;
    // 0x94
    float m_flAttenuation0;
    // 0x98
    float m_flAttenuation1;
    // 0x9c
    float m_flAttenuation2;
    // 0xa0
    float m_flTheta;
    // 0xa4
    float m_flPhi;
    // 0xa8
    CStrongHandle<T> m_hLightCookie;
    // 0xb0
    int32_t m_nCascades;
    // 0xb4
    int32_t m_nCastShadows;
    // 0xb8
    int32_t m_nShadowWidth;
    // 0xbc
    int32_t m_nShadowHeight;
    // 0xc0
    bool m_bRenderDiffuse;
    // 0xc4
    int32_t m_nRenderSpecular;
    // 0xc8
    bool m_bRenderTransmissive;
    // 0xcc
    float m_flOrthoLightWidth;
    // 0xd0
    float m_flOrthoLightHeight;
    // 0xd4
    int32_t m_nStyle;
    // 0xd8
    CUtlString m_Pattern;
    // 0xe0
    int32_t m_nCascadeRenderStaticObjects;
    // 0xe4
    float m_flShadowCascadeCrossFade;
    // 0xe8
    float m_flShadowCascadeDistanceFade;
    // 0xec
    float m_flShadowCascadeDistance0;
    // 0xf0
    float m_flShadowCascadeDistance1;
    // 0xf4
    float m_flShadowCascadeDistance2;
    // 0xf8
    float m_flShadowCascadeDistance3;
    // 0xfc
    int32_t m_nShadowCascadeResolution0;
    // 0x100
    int32_t m_nShadowCascadeResolution1;
    // 0x104
    int32_t m_nShadowCascadeResolution2;
    // 0x108
    int32_t m_nShadowCascadeResolution3;
    // 0x10c
    bool m_bUsesBakedShadowing;
    // 0x110
    int32_t m_nShadowPriority;
    // 0x114
    int32_t m_nBakedShadowIndex;
    // 0x118
    int32_t m_nLightPathUniqueId;
    // 0x11c
    int32_t m_nLightMapUniqueId;
    // 0x120
    bool m_bRenderToCubemaps;
    // 0x121
    bool m_bAllowSSTGeneration;
    // 0x124
    int32_t m_nDirectLight;
    // 0x128
    int32_t m_nIndirectLight;
    // 0x12c
    bool m_bDynamicBounce;
    // 0x130
    float m_flFadeMinDist;
    // 0x134
    float m_flFadeMaxDist;
    // 0x138
    float m_flShadowFadeMinDist;
    // 0x13c
    float m_flShadowFadeMaxDist;
    // 0x140
    bool m_bEnabled;
    // 0x141
    bool m_bFlicker;
    // 0x142
    bool m_bPrecomputedFieldsValid;
    // 0x144
    Vector m_vPrecomputedBoundsMins;
    // 0x150
    Vector m_vPrecomputedBoundsMaxs;
    // 0x15c
    Vector m_vPrecomputedOBBOrigin;
    // 0x168
    QAngle m_vPrecomputedOBBAngles;
    // 0x174
    Vector m_vPrecomputedOBBExtent;
    // 0x180
    float m_flPrecomputedMaxRange;
    // 0x184
    int32_t m_nFogLightingMode;
    // 0x188
    float m_flFogContributionStength;
    // 0x18c
    float m_flNearClipPlane;
    // 0x190
    Color m_SkyColor;
    // 0x194
    float m_flSkyIntensity;
    // 0x198
    Color m_SkyAmbientBounce;
    // 0x19c
    bool m_bUseSecondaryColor;
    // 0x19d
    bool m_bMixedShadows;
    // 0x1a0
    GameTime_t m_flLightStyleStartTime;
    // 0x1a4
    float m_flCapsuleLength;
    // 0x1a8
    float m_flMinRoughness;
};
struct C_DecoyGrenade {
};
struct C_WaterBullet {
};
struct CCSPlayer_ActionTrackingServices {
    // 0x48
    CHandle<T> m_hLastWeaponBeforeC4AutoSwitch;
    // 0x4c
    bool m_bIsRescuing;
    // 0x50
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch;
    // 0xc0
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound;
};
struct C_EnvCubemap {
    // 0x688
    CStrongHandle<T> m_Entity_hCubemapTexture;
    // 0x690
    bool m_Entity_bCustomCubemapTexture;
    // 0x694
    float m_Entity_flInfluenceRadius;
    // 0x698
    Vector m_Entity_vBoxProjectMins;
    // 0x6a4
    Vector m_Entity_vBoxProjectMaxs;
    // 0x6b0
    bool m_Entity_bMoveable;
    // 0x6b4
    int32_t m_Entity_nHandshake;
    // 0x6b8
    int32_t m_Entity_nEnvCubeMapArrayIndex;
    // 0x6bc
    int32_t m_Entity_nPriority;
    // 0x6c0
    float m_Entity_flEdgeFadeDist;
    // 0x6c4
    Vector m_Entity_vEdgeFadeDists;
    // 0x6d0
    float m_Entity_flDiffuseScale;
    // 0x6d4
    bool m_Entity_bStartDisabled;
    // 0x6d5
    bool m_Entity_bDefaultEnvMap;
    // 0x6d6
    bool m_Entity_bDefaultSpecEnvMap;
    // 0x6d7
    bool m_Entity_bIndoorCubeMap;
    // 0x6d8
    bool m_Entity_bCopyDiffuseFromDefaultCubemap;
    // 0x6e8
    bool m_Entity_bEnabled;
};
struct CCSObserver_MovementServices {
};
struct CBodyComponent {
    // 0x8
    CGameSceneNode* m_pSceneNode;
    // 0x48
    CNetworkVarChainer _m_pChainEntity;
};
struct CPulseCell_Inflow_Method {
    // 0x80
    PulseSymbol_t m_MethodName;
    // 0x90
    CUtlString m_Description;
    // 0x98
    bool m_bIsPublic;
    // 0xa0
    CPulseValueFullType m_ReturnType;
    // 0xb8
    CUtlLeanVector< CPulseRuntimeMethodArg > m_Args;
};
struct C_BaseCombatCharacter {
    // 0x1350
    CHandle<T> m_hMyWearables;
    // 0x1368
    AttachmentHandle_t m_leftFootAttachment;
    // 0x1369
    AttachmentHandle_t m_rightFootAttachment;
    // 0x136c
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode;
    // 0x1370
    float m_flWaterWorldZ;
    // 0x1374
    float m_flWaterNextTraceTime;
};
struct CGlowProperty {
    // 0x8
    Vector m_fGlowColor;
    // 0x30
    int32_t m_iGlowType;
    // 0x34
    int32_t m_iGlowTeam;
    // 0x38
    int32_t m_nGlowRange;
    // 0x3c
    int32_t m_nGlowRangeMin;
    // 0x40
    Color m_glowColorOverride;
    // 0x44
    bool m_bFlashing;
    // 0x48
    float m_flGlowTime;
    // 0x4c
    float m_flGlowStartTime;
    // 0x50
    bool m_bEligibleForScreenHighlight;
    // 0x51
    bool m_bGlowing;
};
struct C_PointClientUIDialog {
    // 0xeb8
    CHandle<T> m_hActivator;
    // 0xebc
    bool m_bStartEnabled;
};
struct CPulseCell_BaseValue {
};
struct C_WeaponHKP2000 {
};
struct C_FootstepControl {
    // 0xf58
    CUtlSymbolLarge m_source;
    // 0xf60
    CUtlSymbolLarge m_destination;
};
struct CCitadelSoundOpvarSetOBB {
    // 0x620
    CUtlSymbolLarge m_iszStackName;
    // 0x628
    CUtlSymbolLarge m_iszOperatorName;
    // 0x630
    CUtlSymbolLarge m_iszOpvarName;
    // 0x638
    Vector m_vDistanceInnerMins;
    // 0x644
    Vector m_vDistanceInnerMaxs;
    // 0x650
    Vector m_vDistanceOuterMins;
    // 0x65c
    Vector m_vDistanceOuterMaxs;
    // 0x668
    int32_t m_nAABBDirection;
};
struct C_CSGO_EndOfMatchLineupStart {
};
struct CPlayer_WaterServices {
};
struct CPulseCell_BooleanSwitchState {
    // 0x48
    PulseObservableBoolExpression_t m_Condition;
    // 0xc0
    CPulse_OutflowConnection m_SubGraph;
    // 0x108
    CPulse_OutflowConnection m_WhenTrue;
    // 0x150
    CPulse_OutflowConnection m_WhenFalse;
};
struct VPhysicsCollisionAttribute_t {
    // 0x8
    uint64_t m_nInteractsAs;
    // 0x10
    uint64_t m_nInteractsWith;
    // 0x18
    uint64_t m_nInteractsExclude;
    // 0x20
    uint32_t m_nEntityId;
    // 0x24
    uint32_t m_nOwnerId;
    // 0x28
    uint16_t m_nHierarchyId;
    // 0x2a
    uint16_t m_nDetailLayerMask;
    // 0x2c
    uint8_t m_nDetailLayerMaskType;
    // 0x2d
    uint8_t m_nTargetDetailLayer;
    // 0x2e
    uint8_t m_nCollisionGroup;
    // 0x2f
    uint8_t m_nCollisionFunctionMask;
};
struct C_DynamicPropAlias_dynamic_prop {
};
struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
};
struct C_OmniLight {
    // 0x1198
    float m_flInnerAngle;
    // 0x119c
    float m_flOuterAngle;
    // 0x11a0
    bool m_bShowLight;
};
struct C_SceneEntity {
    // 0x610
    bool m_bIsPlayingBack;
    // 0x611
    bool m_bPaused;
    // 0x612
    bool m_bMultiplayer;
    // 0x613
    bool m_bAutogenerated;
    // 0x614
    float m_flForceClientTime;
    // 0x618
    uint16_t m_nSceneStringIndex;
    // 0x61a
    bool m_bClientOnly;
    // 0x61c
    CHandle<T> m_hOwner;
    // 0x620
    CHandle<T> m_hActorList;
    // 0x638
    bool m_bWasPlaying;
    // 0x648
    CUtlVector<T> m_QueuedEvents;
    // 0x660
    float m_flCurrentTime;
};
struct CPulseCell_Inflow_Yield {
    // 0x48
    CPulse_ResumePoint m_UnyieldResume;
};
struct CPulseMathlib {
};
struct C_NametagModule {
    // 0x1170
    CUtlString m_strNametagString;
};
struct C_EconEntity {
    // 0x1360
    float m_flFlexDelayTime;
    // 0x1368
    float32* m_flFlexDelayedWeight;
    // 0x1370
    bool m_bAttributesInitialized;
    // 0x1378
    C_AttributeContainer m_AttributeManager;
    // 0x1848
    uint32_t m_OriginalOwnerXuidLow;
    // 0x184c
    uint32_t m_OriginalOwnerXuidHigh;
    // 0x1850
    int32_t m_nFallbackPaintKit;
    // 0x1854
    int32_t m_nFallbackSeed;
    // 0x1858
    float m_flFallbackWear;
    // 0x185c
    int32_t m_nFallbackStatTrak;
    // 0x1860
    bool m_bClientside;
    // 0x1861
    bool m_bParticleSystemsCreated;
    // 0x1868
    CUtlVector<T> m_vecAttachedParticles;
    // 0x1880
    CHandle<T> m_hViewmodelAttachment;
    // 0x1884
    int32_t m_iOldTeam;
    // 0x1888
    bool m_bAttachmentDirty;
    // 0x188c
    int32_t m_nUnloadedModelIndex;
    // 0x1890
    int32_t m_iNumOwnerValidationRetries;
    // 0x18a0
    CHandle<T> m_hOldProvidee;
    // 0x18a8
    CUtlVector<T> m_vecAttachedModels;
};
struct CPlayer_UseServices {
};
struct C_PointValueRemapper {
    // 0x608
    bool m_bDisabled;
    // 0x609
    bool m_bDisabledOld;
    // 0x60a
    bool m_bUpdateOnClient;
    // 0x60c
    ValueRemapperInputType_t m_nInputType;
    // 0x610
    CHandle<T> m_hRemapLineStart;
    // 0x614
    CHandle<T> m_hRemapLineEnd;
    // 0x618
    float m_flMaximumChangePerSecond;
    // 0x61c
    float m_flDisengageDistance;
    // 0x620
    float m_flEngageDistance;
    // 0x624
    bool m_bRequiresUseKey;
    // 0x628
    ValueRemapperOutputType_t m_nOutputType;
    // 0x630
    CHandle<T> m_hOutputEntities;
    // 0x648
    ValueRemapperHapticsType_t m_nHapticsType;
    // 0x64c
    ValueRemapperMomentumType_t m_nMomentumType;
    // 0x650
    float m_flMomentumModifier;
    // 0x654
    float m_flSnapValue;
    // 0x658
    float m_flCurrentMomentum;
    // 0x65c
    ValueRemapperRatchetType_t m_nRatchetType;
    // 0x660
    float m_flRatchetOffset;
    // 0x664
    float m_flInputOffset;
    // 0x668
    bool m_bEngaged;
    // 0x669
    bool m_bFirstUpdate;
    // 0x66c
    float m_flPreviousValue;
    // 0x670
    GameTime_t m_flPreviousUpdateTickTime;
    // 0x674
    Vector m_vecPreviousTestPoint;
};
struct CGameSceneNodeHandle {
    // 0x8
    CEntityHandle m_hOwner;
    // 0xc
    CUtlString m_name;
};
struct CPulseCell_Unknown {
    // 0x48
    KeyValues3 m_UnknownKeys;
};
struct C_WeaponMP7 {
};
struct CSPerRoundStats_t {
    // 0x30
    int32_t m_iKills;
    // 0x34
    int32_t m_iDeaths;
    // 0x38
    int32_t m_iAssists;
    // 0x3c
    int32_t m_iDamage;
    // 0x40
    int32_t m_iEquipmentValue;
    // 0x44
    int32_t m_iMoneySaved;
    // 0x48
    int32_t m_iKillReward;
    // 0x4c
    int32_t m_iLiveTime;
    // 0x50
    int32_t m_iHeadShotKills;
    // 0x54
    int32_t m_iObjective;
    // 0x58
    int32_t m_iCashEarned;
    // 0x5c
    int32_t m_iUtilityDamage;
    // 0x60
    int32_t m_iEnemiesFlashed;
};
struct CPulseCell_Outflow_CycleRandom {
    // 0x48
    CUtlVector<T> m_Outputs;
};
struct CPulseCell_Step_PublicOutput {
    // 0x48
    PulseRuntimeOutputIndex_t m_OutputIndex;
};
struct C_CS2HudModelBase {
};
struct C_CSGameRules {
    // 0x40
    bool m_bFreezePeriod;
    // 0x41
    bool m_bWarmupPeriod;
    // 0x44
    GameTime_t m_fWarmupPeriodEnd;
    // 0x48
    GameTime_t m_fWarmupPeriodStart;
    // 0x4c
    bool m_bTerroristTimeOutActive;
    // 0x4d
    bool m_bCTTimeOutActive;
    // 0x50
    float m_flTerroristTimeOutRemaining;
    // 0x54
    float m_flCTTimeOutRemaining;
    // 0x58
    int32_t m_nTerroristTimeOuts;
    // 0x5c
    int32_t m_nCTTimeOuts;
    // 0x60
    bool m_bTechnicalTimeOut;
    // 0x61
    bool m_bMatchWaitingForResume;
    // 0x64
    int32_t m_iFreezeTime;
    // 0x68
    int32_t m_iRoundTime;
    // 0x6c
    float m_fMatchStartTime;
    // 0x70
    GameTime_t m_fRoundStartTime;
    // 0x74
    GameTime_t m_flRestartRoundTime;
    // 0x78
    bool m_bGameRestart;
    // 0x7c
    float m_flGameStartTime;
    // 0x80
    float m_timeUntilNextPhaseStarts;
    // 0x84
    int32_t m_gamePhase;
    // 0x88
    int32_t m_totalRoundsPlayed;
    // 0x8c
    int32_t m_nRoundsPlayedThisPhase;
    // 0x90
    int32_t m_nOvertimePlaying;
    // 0x94
    int32_t m_iHostagesRemaining;
    // 0x98
    bool m_bAnyHostageReached;
    // 0x99
    bool m_bMapHasBombTarget;
    // 0x9a
    bool m_bMapHasRescueZone;
    // 0x9b
    bool m_bMapHasBuyZone;
    // 0x9c
    bool m_bIsQueuedMatchmaking;
    // 0xa0
    int32_t m_nQueuedMatchmakingMode;
    // 0xa4
    bool m_bIsValveDS;
    // 0xa5
    bool m_bLogoMap;
    // 0xa6
    bool m_bPlayAllStepSoundsOnServer;
    // 0xa8
    int32_t m_iSpectatorSlotCount;
    // 0xac
    int32_t m_MatchDevice;
    // 0xb0
    bool m_bHasMatchStarted;
    // 0xb4
    int32_t m_nNextMapInMapgroup;
    // 0xb8
    char[512] m_szTournamentEventName;
    // 0x2b8
    char[512] m_szTournamentEventStage;
    // 0x4b8
    char[512] m_szMatchStatTxt;
    // 0x6b8
    char[512] m_szTournamentPredictionsTxt;
    // 0x8b8
    int32_t m_nTournamentPredictionsPct;
    // 0x8bc
    GameTime_t m_flCMMItemDropRevealStartTime;
    // 0x8c0
    GameTime_t m_flCMMItemDropRevealEndTime;
    // 0x8c4
    bool m_bIsDroppingItems;
    // 0x8c5
    bool m_bIsQuestEligible;
    // 0x8c6
    bool m_bIsHltvActive;
    // 0x8c7
    bool m_bBombPlanted;
    // 0x8c8
    uint16[100] m_arrProhibitedItemIndices;
    // 0x990
    uint32[4] m_arrTournamentActiveCasterAccounts;
    // 0x9a0
    int32_t m_numBestOfMaps;
    // 0x9a4
    int32_t m_nHalloweenMaskListSeed;
    // 0x9a8
    bool m_bBombDropped;
    // 0x9ac
    int32_t m_iRoundWinStatus;
    // 0x9b0
    int32_t m_eRoundWinReason;
    // 0x9b4
    bool m_bTCantBuy;
    // 0x9b5
    bool m_bCTCantBuy;
    // 0x9b8
    int32[30] m_iMatchStats_RoundResults;
    // 0xa30
    int32[30] m_iMatchStats_PlayersAlive_CT;
    // 0xaa8
    int32[30] m_iMatchStats_PlayersAlive_T;
    // 0xb20
    float32[32] m_TeamRespawnWaveTimes;
    // 0xba0
    GameTime_t[32] m_flNextRespawnWave;
    // 0xc20
    Vector m_vMinimapMins;
    // 0xc2c
    Vector m_vMinimapMaxs;
    // 0xc38
    float32[8] m_MinimapVerticalSectionHeights;
    // 0xc58
    uint64_t m_ullLocalMatchID;
    // 0xc60
    int32[10] m_nEndMatchMapGroupVoteTypes;
    // 0xc88
    int32[10] m_nEndMatchMapGroupVoteOptions;
    // 0xcb0
    int32_t m_nEndMatchMapVoteWinner;
    // 0xcb4
    int32_t m_iNumConsecutiveCTLoses;
    // 0xcb8
    int32_t m_iNumConsecutiveTerroristLoses;
    // 0xd78
    int32_t m_nMatchAbortedEarlyReason;
    // 0xd7c
    bool m_bHasTriggeredRoundStartMusic;
    // 0xd7d
    bool m_bSwitchingTeamsAtRoundReset;
    // 0xd98
    CCSGameModeRules* m_pGameModeRules;
    // 0xda0
    C_RetakeGameRules m_RetakeRules;
    // 0xef8
    uint8_t m_nMatchEndCount;
    // 0xefc
    int32_t m_nTTeamIntroVariant;
    // 0xf00
    int32_t m_nCTTeamIntroVariant;
    // 0xf04
    bool m_bTeamIntroPeriod;
    // 0xf08
    int32_t m_iRoundEndWinnerTeam;
    // 0xf0c
    int32_t m_eRoundEndReason;
    // 0xf10
    bool m_bRoundEndShowTimerDefend;
    // 0xf14
    int32_t m_iRoundEndTimerTime;
    // 0xf18
    CUtlString m_sRoundEndFunFactToken;
    // 0xf20
    CPlayerSlot m_iRoundEndFunFactPlayerSlot;
    // 0xf24
    int32_t m_iRoundEndFunFactData1;
    // 0xf28
    int32_t m_iRoundEndFunFactData2;
    // 0xf2c
    int32_t m_iRoundEndFunFactData3;
    // 0xf30
    CUtlString m_sRoundEndMessage;
    // 0xf38
    int32_t m_iRoundEndPlayerCount;
    // 0xf3c
    bool m_bRoundEndNoMusic;
    // 0xf40
    int32_t m_iRoundEndLegacy;
    // 0xf44
    uint8_t m_nRoundEndCount;
    // 0xf48
    int32_t m_iRoundStartRoundNumber;
    // 0xf4c
    uint8_t m_nRoundStartCount;
    // 0x4f58
    double m_flLastPerfSampleTime;
};
struct CGrenadeTracer {
    // 0xea0
    float m_flTracerDuration;
    // 0xea4
    GrenadeType_t m_nType;
};
struct CCSGameModeRules_Noop {
};
struct CPulse_BlackboardReference {
    // 0x0
    CStrongHandle<T> m_hBlackboardResource;
    // 0x8
    PulseSymbol_t m_BlackboardResource;
    // 0x18
    PulseDocNodeID_t m_nNodeID;
    // 0x20
    CGlobalSymbol m_NodeName;
};
struct C_BaseCSGrenadeProjectile {
    // 0x13a0
    Vector m_vInitialPosition;
    // 0x13ac
    Vector m_vInitialVelocity;
    // 0x13b8
    int32_t m_nBounces;
    // 0x13c0
    CStrongHandle<T> m_nExplodeEffectIndex;
    // 0x13c8
    int32_t m_nExplodeEffectTickBegin;
    // 0x13cc
    Vector m_vecExplodeEffectOrigin;
    // 0x13d8
    GameTime_t m_flSpawnTime;
    // 0x13dc
    Vector vecLastTrailLinePos;
    // 0x13e8
    GameTime_t flNextTrailLineTime;
    // 0x13ec
    bool m_bExplodeEffectBegan;
    // 0x13ed
    bool m_bCanCreateGrenadeTrail;
    // 0x13f0
    ParticleIndex_t m_nSnapshotTrajectoryEffectIndex;
    // 0x13f8
    CStrongHandle<T> m_hSnapshotTrajectoryParticleSnapshot;
    // 0x1400
    CUtlVector<T> m_arrTrajectoryTrailPoints;
    // 0x1418
    CUtlVector<T> m_arrTrajectoryTrailPointCreationTimes;
    // 0x1430
    float m_flTrajectoryTrailEffectCreationTime;
};
struct C_GradientFog {
    // 0x608
    CStrongHandle<T> m_hGradientFogTexture;
    // 0x610
    float m_flFogStartDistance;
    // 0x614
    float m_flFogEndDistance;
    // 0x618
    bool m_bHeightFogEnabled;
    // 0x61c
    float m_flFogStartHeight;
    // 0x620
    float m_flFogEndHeight;
    // 0x624
    float m_flFarZ;
    // 0x628
    float m_flFogMaxOpacity;
    // 0x62c
    float m_flFogFalloffExponent;
    // 0x630
    float m_flFogVerticalExponent;
    // 0x634
    Color m_fogColor;
    // 0x638
    float m_flFogStrength;
    // 0x63c
    float m_flFadeTime;
    // 0x640
    bool m_bStartDisabled;
    // 0x641
    bool m_bIsEnabled;
    // 0x642
    bool m_bGradientFogNeedsTextures;
};
struct CCSPlayerController_InGameMoneyServices {
    // 0x40
    int32_t m_iAccount;
    // 0x44
    int32_t m_iStartAccount;
    // 0x48
    int32_t m_iTotalCashSpent;
    // 0x4c
    int32_t m_iCashSpentThisRound;
};
struct C_HEGrenadeProjectile {
};
struct CAnimGraphNetworkedVariables {
    // 0x8
    C_NetworkUtlVectorBase< uint32 > m_PredNetBoolVariables;
    // 0x20
    C_NetworkUtlVectorBase< uint8 > m_PredNetByteVariables;
    // 0x38
    C_NetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables;
    // 0x50
    C_NetworkUtlVectorBase< int32 > m_PredNetIntVariables;
    // 0x68
    C_NetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables;
    // 0x80
    C_NetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables;
    // 0x98
    C_NetworkUtlVectorBase< float32 > m_PredNetFloatVariables;
    // 0xb0
    C_NetworkUtlVectorBase< Vector > m_PredNetVectorVariables;
    // 0xc8
    C_NetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables;
    // 0xe0
    C_NetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables;
    // 0xf8
    C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables;
    // 0x110
    C_NetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables;
    // 0x128
    C_NetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables;
    // 0x140
    C_NetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables;
    // 0x158
    C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables;
    // 0x170
    C_NetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables;
    // 0x188
    C_NetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables;
    // 0x1a0
    C_NetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables;
    // 0x1b8
    C_NetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables;
    // 0x1d0
    C_NetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables;
    // 0x1e8
    int32_t m_nBoolVariablesCount;
    // 0x1ec
    int32_t m_nOwnerOnlyBoolVariablesCount;
    // 0x1f0
    int32_t m_nRandomSeedOffset;
    // 0x1f4
    float m_flLastTeleportTime;
};
struct CFilterModel {
    // 0x640
    CUtlSymbolLarge m_iFilterModel;
};
struct C_SoundAreaEntityOrientedBox {
    // 0x630
    Vector m_vMin;
    // 0x63c
    Vector m_vMax;
};
struct C_SoundOpvarSetPointEntity {
};
struct CPulseGameBlackboard {
    // 0x610
    CUtlString m_strGraphName;
    // 0x618
    CUtlString m_strStateBlob;
};
struct CPulseCell_Value_RandomInt {
};
struct C_CSWeaponBaseShotgun {
};
struct C_RagdollPropAttached {
    // 0x11f8
    uint32_t m_boneIndexAttached;
    // 0x11fc
    uint32_t m_ragdollAttachedObjectIndex;
    // 0x1200
    Vector m_attachmentPointBoneSpace;
    // 0x120c
    Vector m_attachmentPointRagdollSpace;
    // 0x1218
    Vector m_vecOffset;
    // 0x1224
    float m_parentTime;
    // 0x1228
    bool m_bHasParent;
};
struct C_ModelPointEntity {
};
struct C_CSGO_PreviewPlayer {
    // 0x3ef0
    CGlobalSymbol m_animgraphCharacterModeString;
    // 0x3ef8
    float m_flInitialModelScale;
};
struct C_RectLight {
    // 0x1198
    bool m_bShowLight;
};
struct CPathSimple {
    // 0x610
    CPathQueryComponent m_CPathQueryComponent;
    // 0x700
    CUtlString m_pathString;
    // 0x708
    bool m_bClosedLoop;
};
struct C_FuncTrackTrain {
    // 0xe88
    int32_t m_nLongAxis;
    // 0xe8c
    float m_flRadius;
    // 0xe90
    float m_flLineLength;
};
struct C_EconWearable {
    // 0x18c0
    int32_t m_nForceSkin;
    // 0x18c4
    bool m_bAlwaysAllow;
};
struct C_EnvDecal {
    // 0xe88
    CStrongHandle<T> m_hDecalMaterial;
    // 0xe90
    float m_flWidth;
    // 0xe94
    float m_flHeight;
    // 0xe98
    float m_flDepth;
    // 0xe9c
    uint32_t m_nRenderOrder;
    // 0xea0
    bool m_bProjectOnWorld;
    // 0xea1
    bool m_bProjectOnCharacters;
    // 0xea2
    bool m_bProjectOnWater;
    // 0xea4
    float m_flDepthSortBias;
};
struct EntitySpottedState_t {
    // 0x8
    bool m_bSpotted;
    // 0xc
    uint32[2] m_bSpottedByMask;
};
struct fogparams_t {
    // 0x8
    Vector dirPrimary;
    // 0x14
    Color colorPrimary;
    // 0x18
    Color colorSecondary;
    // 0x1c
    Color colorPrimaryLerpTo;
    // 0x20
    Color colorSecondaryLerpTo;
    // 0x24
    float start;
    // 0x28
    float end;
    // 0x2c
    float farz;
    // 0x30
    float maxdensity;
    // 0x34
    float exponent;
    // 0x38
    float HDRColorScale;
    // 0x3c
    float skyboxFogFactor;
    // 0x40
    float skyboxFogFactorLerpTo;
    // 0x44
    float startLerpTo;
    // 0x48
    float endLerpTo;
    // 0x4c
    float maxdensityLerpTo;
    // 0x50
    GameTime_t lerptime;
    // 0x54
    float duration;
    // 0x58
    float blendtobackground;
    // 0x5c
    float scattering;
    // 0x60
    float locallightscale;
    // 0x64
    bool enable;
    // 0x65
    bool blend;
    // 0x66
    bool m_bPadding2;
    // 0x67
    bool m_bPadding;
};
struct C_WeaponM4A1 {
};
struct C_Item {
    // 0x18c0
    char[256] m_pReticleHintTextName;
};
struct C_CSPetPlacement {
};
struct C_Beam {
    // 0xe88
    float m_flFrameRate;
    // 0xe8c
    float m_flHDRColorScale;
    // 0xe90
    GameTime_t m_flFireTime;
    // 0xe94
    float m_flDamage;
    // 0xe98
    uint8_t m_nNumBeamEnts;
    // 0xe9c
    int32_t m_queryHandleHalo;
    // 0xec0
    CStrongHandle<T> m_hBaseMaterial;
    // 0xec8
    CStrongHandle<T> m_nHaloIndex;
    // 0xed0
    BeamType_t m_nBeamType;
    // 0xed4
    uint32_t m_nBeamFlags;
    // 0xed8
    CHandle<T> m_hAttachEntity;
    // 0xf00
    AttachmentHandle_t[10] m_nAttachIndex;
    // 0xf0c
    float m_fWidth;
    // 0xf10
    float m_fEndWidth;
    // 0xf14
    float m_fFadeLength;
    // 0xf18
    float m_fHaloScale;
    // 0xf1c
    float m_fAmplitude;
    // 0xf20
    float m_fStartFrame;
    // 0xf24
    float m_fSpeed;
    // 0xf28
    float m_flFrame;
    // 0xf2c
    BeamClipStyle_t m_nClipStyle;
    // 0xf30
    bool m_bTurnedOff;
    // 0xf34
    VectorWS m_vecEndPos;
    // 0xf40
    CHandle<T> m_hEndEntity;
};
struct C_EnvLightProbeVolume {
    // 0x1600
    CStrongHandle<T> m_Entity_hLightProbeTexture_AmbientCube;
    // 0x1608
    CStrongHandle<T> m_Entity_hLightProbeTexture_SDF;
    // 0x1610
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_DC;
    // 0x1618
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_R;
    // 0x1620
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_G;
    // 0x1628
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_B;
    // 0x1630
    CStrongHandle<T> m_Entity_hLightProbeDirectLightIndicesTexture;
    // 0x1638
    CStrongHandle<T> m_Entity_hLightProbeDirectLightScalarsTexture;
    // 0x1640
    CStrongHandle<T> m_Entity_hLightProbeDirectLightShadowsTexture;
    // 0x1648
    Vector m_Entity_vBoxMins;
    // 0x1654
    Vector m_Entity_vBoxMaxs;
    // 0x1660
    bool m_Entity_bMoveable;
    // 0x1664
    int32_t m_Entity_nHandshake;
    // 0x1668
    int32_t m_Entity_nPriority;
    // 0x166c
    bool m_Entity_bStartDisabled;
    // 0x1670
    int32_t m_Entity_nLightProbeSizeX;
    // 0x1674
    int32_t m_Entity_nLightProbeSizeY;
    // 0x1678
    int32_t m_Entity_nLightProbeSizeZ;
    // 0x167c
    int32_t m_Entity_nLightProbeAtlasX;
    // 0x1680
    int32_t m_Entity_nLightProbeAtlasY;
    // 0x1684
    int32_t m_Entity_nLightProbeAtlasZ;
    // 0x1691
    bool m_Entity_bEnabled;
};
struct C_FuncConveyor {
    // 0xe90
    Vector m_vecMoveDirEntitySpace;
    // 0xe9c
    float m_flTargetSpeed;
    // 0xea0
    GameTick_t m_nTransitionStartTick;
    // 0xea4
    int32_t m_nTransitionDurationTicks;
    // 0xea8
    float m_flTransitionStartSpeed;
    // 0xeb0
    CHandle<T> m_hConveyorModels;
    // 0xec8
    float m_flCurrentConveyorOffset;
    // 0xecc
    float m_flCurrentConveyorSpeed;
};
struct CCSPlayer_WeaponServices {
    // 0xd0
    GameTime_t m_flNextAttack;
    // 0xd4
    bool m_bIsLookingAtWeapon;
    // 0xd5
    bool m_bIsHoldingLookAtWeapon;
    // 0xd8
    uint32_t m_nOldTotalShootPositionHistoryCount;
    // 0x370
    uint32_t m_nOldTotalInputHistoryCount;
    // 0x1588
    C_NetworkUtlVectorBase< uint8 > m_networkAnimTiming;
    // 0x15a0
    bool m_bBlockInspectUntilNextGraphUpdate;
};
struct C_PhysMagnet {
    // 0x1168
    CUtlVector<T> m_aAttachedObjectsFromServer;
    // 0x1180
    CUtlVector<T> m_aAttachedObjects;
};
struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
};
struct C_Breakable {
};
struct C_PlantedC4 {
    // 0x1170
    bool m_bBombTicking;
    // 0x1174
    int32_t m_nBombSite;
    // 0x1178
    int32_t m_nSourceSoundscapeHash;
    // 0x1180
    EntitySpottedState_t m_entitySpottedState;
    // 0x1198
    GameTime_t m_flNextGlow;
    // 0x119c
    GameTime_t m_flNextBeep;
    // 0x11a0
    GameTime_t m_flC4Blow;
    // 0x11a4
    bool m_bCannotBeDefused;
    // 0x11a5
    bool m_bHasExploded;
    // 0x11a8
    float m_flTimerLength;
    // 0x11ac
    bool m_bBeingDefused;
    // 0x11b0
    float m_bTriggerWarning;
    // 0x11b4
    float m_bExplodeWarning;
    // 0x11b8
    bool m_bC4Activated;
    // 0x11b9
    bool m_bTenSecWarning;
    // 0x11bc
    float m_flDefuseLength;
    // 0x11c0
    GameTime_t m_flDefuseCountDown;
    // 0x11c4
    bool m_bBombDefused;
    // 0x11c8
    CHandle<T> m_hBombDefuser;
    // 0x11d0
    C_AttributeContainer m_AttributeManager;
    // 0x16a0
    CHandle<T> m_hDefuserMultimeter;
    // 0x16a4
    GameTime_t m_flNextRadarFlashTime;
    // 0x16a8
    bool m_bRadarFlash;
    // 0x16ac
    CHandle<T> m_pBombDefuser;
    // 0x16b0
    GameTime_t m_fLastDefuseTime;
    // 0x16b8
    CBasePlayerController* m_pPredictionOwner;
    // 0x16c0
    Vector m_vecC4ExplodeSpectatePos;
    // 0x16cc
    QAngle m_vecC4ExplodeSpectateAng;
    // 0x16d8
    float m_flC4ExplodeSpectateDuration;
};
struct CCSGO_WingmanIntroCharacterPosition {
};
struct CFilterName {
    // 0x640
    CUtlSymbolLarge m_iFilterName;
};
struct C_RagdollProp {
    // 0x1170
    C_NetworkUtlVectorBase< bool > m_ragEnabled;
    // 0x1188
    C_NetworkUtlVectorBase< Vector > m_ragPos;
    // 0x11a0
    C_NetworkUtlVectorBase< QAngle > m_ragAngles;
    // 0x11b8
    float m_flBlendWeight;
    // 0x11bc
    CHandle<T> m_hRagdollSource;
    // 0x11c0
    AttachmentHandle_t m_iEyeAttachment;
    // 0x11c4
    float m_flBlendWeightCurrent;
    // 0x11c8
    CUtlVector<T> m_parentPhysicsBoneIndices;
    // 0x11e0
    CUtlVector<T> m_worldSpaceBoneComputationOrder;
};
struct CPulse_CallInfo {
    // 0x0
    PulseSymbol_t m_PortName;
    // 0x10
    PulseDocNodeID_t m_nEditorNodeID;
    // 0x18
    PulseRegisterMap_t m_RegisterMap;
    // 0x48
    PulseDocNodeID_t m_CallMethodID;
    // 0x4c
    PulseRuntimeChunkIndex_t m_nSrcChunk;
    // 0x50
    int32_t m_nSrcInstruction;
};
struct C_MapPreviewParticleSystem {
};
struct CBaseAnimGraph {
    // 0xe88
    CAnimGraphControllerManager m_graphControllerManager;
    // 0xf38
    CAnimGraphControllerBase* m_pMainGraphController;
    // 0xf40
    bool m_bInitiallyPopulateInterpHistory;
    // 0xf42
    bool m_bSuppressAnimEventSounds;
    // 0xf50
    bool m_bAnimGraphUpdateEnabled;
    // 0xf54
    float m_flMaxSlopeDistance;
    // 0xf58
    VectorWS m_vLastSlopeCheckPos;
    // 0xf64
    uint32_t m_nAnimGraphUpdateId;
    // 0xf68
    bool m_bAnimationUpdateScheduled;
    // 0xf6c
    Vector m_vecForce;
    // 0xf78
    int32_t m_nForceBone;
    // 0xf80
    CBaseAnimGraph* m_pClientsideRagdoll;
    // 0xf88
    bool m_bBuiltRagdoll;
    // 0xfa0
    PhysicsRagdollPose_t m_RagdollPose;
    // 0xfe8
    bool m_bRagdollEnabled;
    // 0xfe9
    bool m_bRagdollClientSide;
    // 0xff8
    bool m_bHasAnimatedMaterialAttributes;
};
struct CPulseCell_InlineNodeSkipSelector {
    // 0x48
    PulseDocNodeID_t m_nFlowNodeID;
    // 0x4c
    bool m_bAnd;
    // 0x50
    PulseSelectorOutflowList_t m_PassOutflow;
    // 0x68
    CPulse_OutflowConnection m_FailOutflow;
};
struct C_LightEntity {
    // 0xe88
    CLightComponent* m_CLightComponent;
};
struct C_WeaponM249 {
};
struct C_LocalTempEntity {
    // 0x1168
    int32_t flags;
    // 0x116c
    GameTime_t die;
    // 0x1170
    float m_flFrameMax;
    // 0x1174
    float x;
    // 0x1178
    float y;
    // 0x117c
    float fadeSpeed;
    // 0x1180
    float bounceFactor;
    // 0x1184
    int32_t hitSound;
    // 0x1188
    int32_t priority;
    // 0x118c
    Vector tentOffset;
    // 0x1198
    QAngle m_vecTempEntAngVelocity;
    // 0x11a4
    int32_t tempent_renderamt;
    // 0x11a8
    Vector m_vecNormal;
    // 0x11b4
    float m_flSpriteScale;
    // 0x11b8
    int32_t m_nFlickerFrame;
    // 0x11bc
    float m_flFrameRate;
    // 0x11c0
    float m_flFrame;
    // 0x11c8
    char* m_pszImpactEffect;
    // 0x11d0
    char* m_pszParticleEffect;
    // 0x11d8
    bool m_bParticleCollision;
    // 0x11dc
    int32_t m_iLastCollisionFrame;
    // 0x11e0
    Vector m_vLastCollisionOrigin;
    // 0x11ec
    Vector m_vecTempEntVelocity;
    // 0x11f8
    Vector m_vecPrevAbsOrigin;
    // 0x1204
    Vector m_vecTempEntAcceleration;
};
struct C_WeaponTaser {
    // 0x1f70
    GameTime_t m_fFireTime;
    // 0x1f74
    int32_t m_nLastAttackTick;
};
struct C_PointEntity {
};
struct C_SingleplayRules {
};
struct CLogicalEntity {
};
struct C_PrecipitationBlocker {
};
struct C_CSGO_CounterTerroristTeamIntroCamera {
};
struct C_SoundOpvarSetPathCornerEntity {
};
struct CPlayer_WeaponServices {
    // 0x48
    CHandle<T> m_hMyWeapons;
    // 0x60
    CHandle<T> m_hActiveWeapon;
    // 0x64
    CHandle<T> m_hLastWeapon;
    // 0x68
    uint16[32] m_iAmmo;
};
struct C_WeaponNegev {
};
struct C_WeaponFiveSeven {
};
struct C_WeaponSawedoff {
};
struct C_TriggerVolume {
};
struct CPulseCell_LimitCount {
    // 0x48
    int32_t m_nLimitCount;
};
struct CPulseCell_Step_CallExternalMethod {
    // 0x48
    PulseSymbol_t m_MethodName;
    // 0x58
    PulseSymbol_t m_GameBlackboard;
    // 0x68
    CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs;
    // 0x78
    PulseMethodCallMode_t m_nAsyncCallMode;
    // 0x80
    CPulse_ResumePoint m_OnFinished;
};
struct C_WeaponMP9 {
};
struct C_DynamicPropAlias_prop_dynamic_override {
};
struct CEnvSoundscapeTriggerable {
};
struct C_PlayerPing {
    // 0x638
    CHandle<T> m_hPlayer;
    // 0x63c
    CHandle<T> m_hPingedEntity;
    // 0x640
    int32_t m_iType;
    // 0x644
    bool m_bUrgent;
    // 0x645
    char[18] m_szPlaceName;
};
struct C_AK47 {
};
struct C_CSGO_MapPreviewCameraPathNode {
    // 0x608
    CUtlSymbolLarge m_szParentPathUniqueID;
    // 0x610
    int32_t m_nPathIndex;
    // 0x614
    Vector m_vInTangentLocal;
    // 0x620
    Vector m_vOutTangentLocal;
    // 0x62c
    float m_flFOV;
    // 0x630
    float m_flCameraSpeed;
    // 0x634
    float m_flEaseIn;
    // 0x638
    float m_flEaseOut;
    // 0x63c
    Vector m_vInTangentWorld;
    // 0x648
    Vector m_vOutTangentWorld;
};
struct C_CSPlayerResource {
    // 0x608
    bool[12] m_bHostageAlive;
    // 0x614
    bool[12] m_isHostageFollowingSomeone;
    // 0x620
    CEntityIndex[12] m_iHostageEntityIDs;
    // 0x650
    Vector m_bombsiteCenterA;
    // 0x65c
    Vector m_bombsiteCenterB;
    // 0x668
    int32[4] m_hostageRescueX;
    // 0x678
    int32[4] m_hostageRescueY;
    // 0x688
    int32[4] m_hostageRescueZ;
    // 0x698
    bool m_bEndMatchNextMapAllVoted;
    // 0x699
    bool m_foundGoalPositions;
};
struct CSkyboxReference {
    // 0x608
    WorldGroupId_t m_worldGroupId;
    // 0x60c
    CHandle<T> m_hSkyCamera;
};
struct C_IncendiaryGrenade {
};
struct CFilterClass {
    // 0x640
    CUtlSymbolLarge m_iFilterClass;
};
struct C_PointCameraVFOV {
    // 0x668
    float m_flVerticalFOV;
};
struct C_PointCamera {
    // 0x608
    float m_FOV;
    // 0x60c
    float m_Resolution;
    // 0x610
    bool m_bFogEnable;
    // 0x611
    Color m_FogColor;
    // 0x618
    float m_flFogStart;
    // 0x61c
    float m_flFogEnd;
    // 0x620
    float m_flFogMaxDensity;
    // 0x624
    bool m_bActive;
    // 0x625
    bool m_bUseScreenAspectRatio;
    // 0x628
    float m_flAspectRatio;
    // 0x62c
    bool m_bNoSky;
    // 0x630
    float m_fBrightness;
    // 0x634
    float m_flZFar;
    // 0x638
    float m_flZNear;
    // 0x63c
    bool m_bCanHLTVUse;
    // 0x63d
    bool m_bAlignWithParent;
    // 0x63e
    bool m_bDofEnabled;
    // 0x640
    float m_flDofNearBlurry;
    // 0x644
    float m_flDofNearCrisp;
    // 0x648
    float m_flDofFarCrisp;
    // 0x64c
    float m_flDofFarBlurry;
    // 0x650
    float m_flDofTiltToGround;
    // 0x654
    float m_TargetFOV;
    // 0x658
    float m_DegreesPerSecond;
    // 0x65c
    bool m_bIsOn;
    // 0x660
    C_PointCamera* m_pNext;
};
struct CPathWithDynamicNodes {
    // 0x710
    CHandle<T> m_vecPathNodes;
    // 0x730
    CTransform m_xInitialPathWorldToLocal;
};
struct CBaseFilter {
    // 0x608
    bool m_bNegated;
    // 0x610
    CEntityIOOutput m_OnPass;
    // 0x628
    CEntityIOOutput m_OnFail;
};
struct WeaponPurchaseTracker_t {
    // 0x8
    C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases;
};
struct PulseObservableBoolExpression_t {
    // 0x0
    CPulse_OutflowConnection m_EvaluateConnection;
    // 0x48
    CUtlVector<T> m_DependentObservableVars;
    // 0x60
    CUtlVector<T> m_DependentObservableBlackboardReferences;
};
struct CMapInfo {
    // 0x608
    int32_t m_iBuyingStatus;
    // 0x60c
    float m_flBombRadius;
    // 0x610
    int32_t m_iPetPopulation;
    // 0x614
    bool m_bUseNormalSpawnsForDM;
    // 0x615
    bool m_bDisableAutoGeneratedDMSpawns;
    // 0x618
    float m_flBotMaxVisionDistance;
    // 0x61c
    int32_t m_iHostageCount;
    // 0x620
    bool m_bFadePlayerVisibilityFarZ;
    // 0x621
    bool m_bRainTraceToSkyEnabled;
    // 0x624
    float m_flEnvRainStrength;
    // 0x628
    float m_flEnvPuddleRippleStrength;
    // 0x62c
    float m_flEnvPuddleRippleDirection;
    // 0x630
    float m_flEnvWetnessCoverage;
    // 0x634
    float m_flEnvWetnessDryingAmount;
};
struct C_CSGO_EndOfMatchCamera {
};
struct C_BaseGrenade {
    // 0x1350
    bool m_bHasWarnedAI;
    // 0x1351
    bool m_bIsSmokeGrenade;
    // 0x1352
    bool m_bIsLive;
    // 0x1354
    float m_DmgRadius;
    // 0x1358
    GameTime_t m_flDetonateTime;
    // 0x135c
    float m_flWarnAITime;
    // 0x1360
    float m_flDamage;
    // 0x1368
    CUtlSymbolLarge m_iszBounceSound;
    // 0x1370
    CUtlString m_ExplosionSound;
    // 0x137c
    CHandle<T> m_hThrower;
    // 0x1394
    GameTime_t m_flNextAttack;
    // 0x1398
    CHandle<T> m_hOriginalThrower;
};
struct C_PlayerSprayDecal {
    // 0xe88
    int32_t m_nUniqueID;
    // 0xe8c
    uint32_t m_unAccountID;
    // 0xe90
    uint32_t m_unTraceID;
    // 0xe94
    uint32_t m_rtGcTime;
    // 0xe98
    Vector m_vecEndPos;
    // 0xea4
    Vector m_vecStart;
    // 0xeb0
    Vector m_vecLeft;
    // 0xebc
    Vector m_vecNormal;
    // 0xec8
    int32_t m_nPlayer;
    // 0xecc
    int32_t m_nEntity;
    // 0xed0
    int32_t m_nHitbox;
    // 0xed4
    float m_flCreationTime;
    // 0xed8
    int32_t m_nTintID;
    // 0xedc
    uint8_t m_nVersion;
    // 0xedd
    uint8[128] m_ubSignature;
    // 0xf68
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper;
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
struct CPulseCell_LimitCount_Criteria_t {
    // 0x0
    bool m_bLimitCountPasses;
};
struct C_CS2HudModelArms {
};
struct CBasePlayerVData {
    // 0x28
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName;
    // 0x108
    CSkillFloat m_flHeadDamageMultiplier;
    // 0x118
    CSkillFloat m_flChestDamageMultiplier;
    // 0x128
    CSkillFloat m_flStomachDamageMultiplier;
    // 0x138
    CSkillFloat m_flArmDamageMultiplier;
    // 0x148
    CSkillFloat m_flLegDamageMultiplier;
    // 0x158
    float m_flHoldBreathTime;
    // 0x15c
    float m_flDrowningDamageInterval;
    // 0x160
    int32_t m_nDrowningDamageInitial;
    // 0x164
    int32_t m_nDrowningDamageMax;
    // 0x168
    int32_t m_nWaterSpeed;
    // 0x16c
    float m_flUseRange;
    // 0x170
    float m_flUseAngleTolerance;
    // 0x174
    float m_flCrouchTime;
};
struct C_LightSpotEntity {
};
struct CCSGameModeRules_Deathmatch {
    // 0x30
    GameTime_t m_flDMBonusStartTime;
    // 0x34
    float m_flDMBonusTimeLength;
    // 0x38
    CUtlString m_sDMBonusWeapon;
};
struct CPulseCell_CursorQueue {
    // 0x98
    int32_t m_nCursorsAllowedToRunParallel;
};
struct CPulseCell_Value_RandomFloat {
};
struct CPulseExecCursor {
};
struct C_Sprite {
    // 0xe88
    CStrongHandle<T> m_hSpriteMaterial;
    // 0xe90
    CHandle<T> m_hAttachedToEntity;
    // 0xe94
    AttachmentHandle_t m_nAttachment;
    // 0xe98
    float m_flSpriteFramerate;
    // 0xe9c
    float m_flFrame;
    // 0xea0
    GameTime_t m_flDieTime;
    // 0xeb0
    uint32_t m_nBrightness;
    // 0xeb4
    float m_flBrightnessDuration;
    // 0xeb8
    float m_flSpriteScale;
    // 0xebc
    float m_flScaleDuration;
    // 0xec0
    bool m_bWorldSpaceScale;
    // 0xec4
    float m_flGlowProxySize;
    // 0xec8
    float m_flHDRColorScale;
    // 0xecc
    GameTime_t m_flLastTime;
    // 0xed0
    float m_flMaxFrame;
    // 0xed4
    float m_flStartScale;
    // 0xed8
    float m_flDestScale;
    // 0xedc
    GameTime_t m_flScaleTimeStart;
    // 0xee0
    int32_t m_nStartBrightness;
    // 0xee4
    int32_t m_nDestBrightness;
    // 0xee8
    GameTime_t m_flBrightnessTimeStart;
    // 0xef8
    int32_t m_nSpriteWidth;
    // 0xefc
    int32_t m_nSpriteHeight;
};
struct C_CsmFovOverride {
    // 0x608
    CUtlString m_cameraName;
    // 0x610
    float m_flCsmFovOverrideValue;
};
struct C_WeaponGlock {
};
struct C_PhysicsProp {
    // 0x12d0
    bool m_bAwake;
};
struct CFilterTeam {
    // 0x640
    int32_t m_iFilterTeam;
};
struct CInfoInteraction {
    // 0x608
    CUtlSymbolLarge[8] m_strSlotEntityName;
    // 0x648
    CUtlSymbolLarge m_strInteractVData;
    // 0x650
    float m_flInteractRadius;
};
struct CBasePlayerWeaponVData {
    // 0x28
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel;
    // 0x108
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName;
    // 0x1e8
    bool m_bBuiltRightHanded;
    // 0x1e9
    bool m_bAllowFlipping;
    // 0x1f0
    CAttachmentNameSymbolWithStorage m_sMuzzleAttachment;
    // 0x210
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys m_szMuzzleFlashParticle;
    // 0x2f0
    CUtlString m_szMuzzleFlashParticleConfig;
    // 0x2f8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys m_szBarrelSmokeParticle;
    // 0x3d8
    uint8_t m_nMuzzleSmokeShotThreshold;
    // 0x3dc
    float m_flMuzzleSmokeTimeout;
    // 0x3e0
    float m_flMuzzleSmokeDecrementRate;
    // 0x3e4
    bool m_bGenerateMuzzleLight;
    // 0x3e5
    bool m_bLinkedCooldowns;
    // 0x3e6
    ItemFlagTypes_t m_iFlags;
    // 0x3e8
    int32_t m_iWeight;
    // 0x3ec
    bool m_bAutoSwitchTo;
    // 0x3ed
    bool m_bAutoSwitchFrom;
    // 0x3ee
    AmmoIndex_t m_nPrimaryAmmoType;
    // 0x3ef
    AmmoIndex_t m_nSecondaryAmmoType;
    // 0x3f0
    int32_t m_iMaxClip1;
    // 0x3f4
    int32_t m_iMaxClip2;
    // 0x3f8
    int32_t m_iDefaultClip1;
    // 0x3fc
    int32_t m_iDefaultClip2;
    // 0x400
    bool m_bReserveAmmoAsClips;
    // 0x401
    bool m_bTreatAsSingleClip;
    // 0x402
    bool m_bKeepLoadedAmmo;
    // 0x404
    RumbleEffect_t m_iRumbleEffect;
    // 0x408
    float m_flDropSpeed;
    // 0x40c
    int32_t m_iSlot;
    // 0x410
    int32_t m_iPosition;
    // 0x418
    CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds;
};
struct C_CSGO_EndOfMatchLineupEnd {
};
struct C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
};
struct C_SmokeGrenade {
};
struct CInfoParticleTarget {
};
struct CCSPlayer_DamageReactServices {
};
struct C_PointClientUIWorldPanel {
    // 0xec0
    bool m_bForceRecreateNextUpdate;
    // 0xec1
    bool m_bMoveViewToPlayerNextThink;
    // 0xec2
    bool m_bCheckCSSClasses;
    // 0xed0
    CTransform m_anchorDeltaTransform;
    // 0x1060
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator;
    // 0x1088
    bool m_bIgnoreInput;
    // 0x1089
    bool m_bLit;
    // 0x108a
    bool m_bFollowPlayerAcrossTeleport;
    // 0x108c
    float m_flWidth;
    // 0x1090
    float m_flHeight;
    // 0x1094
    float m_flDPI;
    // 0x1098
    float m_flInteractDistance;
    // 0x109c
    float m_flDepthOffset;
    // 0x10a0
    uint32_t m_unOwnerContext;
    // 0x10a4
    uint32_t m_unHorizontalAlign;
    // 0x10a8
    uint32_t m_unVerticalAlign;
    // 0x10ac
    uint32_t m_unOrientation;
    // 0x10b0
    bool m_bAllowInteractionFromAllSceneWorlds;
    // 0x10b8
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    // 0x10d0
    bool m_bOpaque;
    // 0x10d1
    bool m_bNoDepth;
    // 0x10d2
    bool m_bVisibleWhenParentNoDraw;
    // 0x10d3
    bool m_bRenderBackface;
    // 0x10d4
    bool m_bUseOffScreenIndicator;
    // 0x10d5
    bool m_bExcludeFromSaveGames;
    // 0x10d6
    bool m_bGrabbable;
    // 0x10d7
    bool m_bOnlyRenderToTexture;
    // 0x10d8
    bool m_bDisableMipGen;
    // 0x10dc
    int32_t m_nExplicitImageLayout;
};
struct C_EntityFlame {
    // 0x608
    CHandle<T> m_hEntAttached;
    // 0x630
    CHandle<T> m_hOldAttached;
    // 0x634
    bool m_bCheapEffect;
};
struct CBasePlayerController {
    // 0x610
    C_CommandContext m_CommandContext;
    // 0x6b8
    uint64_t m_nInButtonsWhichAreToggles;
    // 0x6c0
    uint32_t m_nTickBase;
    // 0x6c4
    CHandle<T> m_hPawn;
    // 0x6c8
    bool m_bKnownTeamMismatch;
    // 0x6cc
    CHandle<T> m_hPredictedPawn;
    // 0x6d0
    CSplitScreenSlot m_nSplitScreenSlot;
    // 0x6d4
    CHandle<T> m_hSplitOwner;
    // 0x6d8
    CUtlVector<T> m_hSplitScreenPlayers;
    // 0x6f0
    bool m_bIsHLTV;
    // 0x6f4
    PlayerConnectedState m_iConnected;
    // 0x6f8
    char[128] m_iszPlayerName;
    // 0x780
    uint64_t m_steamID;
    // 0x788
    bool m_bIsLocalPlayerController;
    // 0x789
    bool m_bNoClipEnabled;
    // 0x78c
    uint32_t m_iDesiredFOV;
};
struct C_CSGO_EndOfMatchLineupEndpoint {
};
} // namespace cs2

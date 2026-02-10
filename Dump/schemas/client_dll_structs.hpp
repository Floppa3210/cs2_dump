// Generated using CS2 ULTIMATE DUMPER
// 2026-02-10 19:56:33

#pragma once

#include <cstdint>
#include <cstddef>

namespace cs2 {
namespace client_dll {

// C_CSGO_TeamIntroCharacterPosition (size: 0x13a8)
struct C_CSGO_TeamIntroCharacterPosition {
};

// C_FireCrackerBlast (size: 0x8490)
struct C_FireCrackerBlast {
};

// CCSGO_WingmanIntroCounterTerroristPosition (size: 0x13a8)
struct CCSGO_WingmanIntroCounterTerroristPosition {
};

// CPulseCell_WaitForCursorsWithTag (size: 0xa0)
struct CPulseCell_WaitForCursorsWithTag {
    bool m_bTagSelfWhenComplete; // 0x98
    PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x9c
};

// C_SceneEntity::QueuedEvents_t (size: 0x18)
struct C_SceneEntity_QueuedEvents_t {
    float starttime; // 0x0
};

// CCSPlayer_PingServices (size: 0x50)
struct CCSPlayer_PingServices {
    CHandle<T> m_hPlayerPing; // 0x48
};

// CEconItemAttribute (size: 0x48)
struct CEconItemAttribute {
    uint16_t m_iAttributeDefinitionIndex; // 0x30
    float m_flValue; // 0x34
    float m_flInitialValue; // 0x38
    int32_t m_nRefundableCurrency; // 0x3c
    bool m_bSetBonus; // 0x40
};

// CBaseTriggerAPI (size: 0x8)
struct CBaseTriggerAPI {
};

// PredictedDamageTag_t (size: 0x40)
struct PredictedDamageTag_t {
    GameTick_t nTagTick; // 0x30
    float flFlinchModSmall; // 0x34
    float flFlinchModLarge; // 0x38
    float flFriendlyFireDamageReductionRatio; // 0x3c
};

// CFuncRetakeBarrier (size: 0x13c0)
struct CFuncRetakeBarrier {
};

// C_EnvWindShared (size: 0xf8)
struct C_EnvWindShared {
    GameTime_t m_flStartTime; // 0x8
    uint32_t m_iWindSeed; // 0xc
    uint16_t m_iMinWind; // 0x10
    uint16_t m_iMaxWind; // 0x12
    int32_t m_windRadius; // 0x14
    uint16_t m_iMinGust; // 0x18
    uint16_t m_iMaxGust; // 0x1a
    float m_flMinGustDelay; // 0x1c
    float m_flMaxGustDelay; // 0x20
    float m_flGustDuration; // 0x24
    uint16_t m_iGustDirChange; // 0x28
    uint16_t m_iInitialWindDir; // 0x2a
    float m_flInitialWindSpeed; // 0x2c
    Vector m_location; // 0x30
    CHandle<T> m_hEntOwner; // 0x3c
};

// C_SkyCamera (size: 0x6a8)
struct C_SkyCamera {
    sky3dparams_t m_skyboxData; // 0x608
    CUtlString m_skyboxSlotToken; // 0x698
    bool m_bUseAngles; // 0x69c
    C_SkyCamera* m_pNext; // 0x6a0
};

// CPulseCell_Base (size: 0x48)
struct CPulseCell_Base {
    PulseDocNodeID_t m_nEditorNodeID; // 0x8
};

// C_FuncRotating (size: 0xe88)
struct C_FuncRotating {
};

// C_SoundOpvarSetPointBase (size: 0x628)
struct C_SoundOpvarSetPointBase {
    CUtlSymbolLarge m_iszStackName; // 0x608
    CUtlSymbolLarge m_iszOperatorName; // 0x610
    CUtlSymbolLarge m_iszOpvarName; // 0x618
    int32_t m_iOpvarIndex; // 0x620
    bool m_bUseAutoCompare; // 0x624
    bool m_bFastRefresh; // 0x625
};

// C_EnvCubemapFog (size: 0x658)
struct C_EnvCubemapFog {
    float m_flEndDistance; // 0x608
    float m_flStartDistance; // 0x60c
    float m_flFogFalloffExponent; // 0x610
    bool m_bHeightFogEnabled; // 0x614
    float m_flFogHeightWidth; // 0x618
    float m_flFogHeightEnd; // 0x61c
    float m_flFogHeightStart; // 0x620
    float m_flFogHeightExponent; // 0x624
    float m_flLODBias; // 0x628
    bool m_bActive; // 0x62c
    bool m_bStartDisabled; // 0x62d
    float m_flFogMaxOpacity; // 0x630
    int32_t m_nCubemapSourceType; // 0x634
    CStrongHandle<T> m_hSkyMaterial; // 0x638
    CUtlSymbolLarge m_iszSkyEntity; // 0x640
    CStrongHandle<T> m_hFogCubemapTexture; // 0x648
    bool m_bHasHeightFogEnd; // 0x650
    bool m_bFirstTime; // 0x651
};

// C_CSGO_TeamSelectTerroristPosition (size: 0x13a8)
struct C_CSGO_TeamSelectTerroristPosition {
};

// C_BaseFlex::Emphasized_Phoneme (size: 0x20)
struct C_BaseFlex_Emphasized_Phoneme {
    CUtlString m_sClassName; // 0x0
    float m_flAmount; // 0x18
    bool m_bRequired; // 0x1c
    bool m_bBasechecked; // 0x1d
    bool m_bValid; // 0x1e
};

// C_EnvParticleGlow (size: 0x1450)
struct C_EnvParticleGlow {
    float m_flAlphaScale; // 0x1438
    float m_flRadiusScale; // 0x143c
    float m_flSelfIllumScale; // 0x1440
    Color m_ColorTint; // 0x1444
    CStrongHandle<T> m_hTextureOverride; // 0x1448
};

// CCS_PortraitWorldCallbackHandler (size: 0x610)
struct CCS_PortraitWorldCallbackHandler {
};

// CCSPlayerController_InventoryServices (size: 0xf0)
struct CCSPlayerController_InventoryServices {
    CUtlVector<T> m_vecNetworkableLoadout; // 0x40
    uint16_t m_unMusicID; // 0x58
    MedalRank_t[6] m_rank; // 0x5c
    int32_t m_nPersonaDataPublicLevel; // 0x74
    int32_t m_nPersonaDataPublicCommendsLeader; // 0x78
    int32_t m_nPersonaDataPublicCommendsTeacher; // 0x7c
    int32_t m_nPersonaDataPublicCommendsFriendly; // 0x80
    int32_t m_nPersonaDataXpTrailLevel; // 0x84
    C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots; // 0x88
};

// CCSPlayerModernJump (size: 0x38)
struct CCSPlayerModernJump {
    GameTick_t m_nLastActualJumpPressTick; // 0x10
    float m_flLastActualJumpPressFrac; // 0x14
    GameTick_t m_nLastUsableJumpPressTick; // 0x18
    float m_flLastUsableJumpPressFrac; // 0x1c
    GameTick_t m_nLastLandedTick; // 0x20
    float m_flLastLandedFrac; // 0x24
    float m_flLastLandedVelocityX; // 0x28
    float m_flLastLandedVelocityY; // 0x2c
    float m_flLastLandedVelocityZ; // 0x30
};

// C_EconEntity::AttachedModelData_t (size: 0x4)
struct C_EconEntity_AttachedModelData_t {
    int32_t m_iModelDisplayFlags; // 0x0
};

// CPulse_ResumePoint (size: 0x48)
struct CPulse_ResumePoint {
};

// CTriggerFan (size: 0xfc0)
struct CTriggerFan {
    Vector m_vFanOriginOffset; // 0xf58
    Vector m_vDirection; // 0xf64
    bool m_bPushTowardsInfoTarget; // 0xf70
    bool m_bPushAwayFromInfoTarget; // 0xf71
    Quaternion m_qNoiseDelta; // 0xf80
    CHandle<T> m_hInfoFan; // 0xf90
    float m_flForce; // 0xf94
    bool m_bFalloff; // 0xf98
    CountdownTimer m_RampTimer; // 0xfa0
};

// C_HostageCarriableProp (size: 0x1170)
struct C_HostageCarriableProp {
};

// C_BulletHitModel (size: 0x11b8)
struct C_BulletHitModel {
    matrix3x4_t m_matLocal; // 0x1168
    int32_t m_iBoneIndex; // 0x1198
    CHandle<T> m_hPlayerParent; // 0x119c
    bool m_bIsHit; // 0x11a0
    float m_flTimeCreated; // 0x11a4
    Vector m_vecStartPos; // 0x11a8
};

// C_FuncElectrifiedVolume (size: 0xea0)
struct C_FuncElectrifiedVolume {
    ParticleIndex_t m_nAmbientEffect; // 0xe88
    CUtlSymbolLarge m_EffectName; // 0xe90
    bool m_bState; // 0xe98
};

// C_MapVetoPickController (size: 0xf50)
struct C_MapVetoPickController {
    int32_t m_nDraftType; // 0x618
    int32_t m_nTeamWinningCoinToss; // 0x61c
    int32[64] m_nTeamWithFirstChoice; // 0x620
    int32[7] m_nVoteMapIdsList; // 0x720
    int32[64] m_nAccountIDs; // 0x73c
    int32[64] m_nMapId0; // 0x83c
    int32[64] m_nMapId1; // 0x93c
    int32[64] m_nMapId2; // 0xa3c
    int32[64] m_nMapId3; // 0xb3c
    int32[64] m_nMapId4; // 0xc3c
    int32[64] m_nMapId5; // 0xd3c
    int32[64] m_nStartingSide0; // 0xe3c
    int32_t m_nCurrentPhase; // 0xf3c
    int32_t m_nPhaseStartTick; // 0xf40
    int32_t m_nPhaseDurationTicks; // 0xf44
    int32_t m_nPostDataUpdateTick; // 0xf48
    bool m_bDisabledHud; // 0xf4c
};

// C_EnvVolumetricFogVolume (size: 0x650)
struct C_EnvVolumetricFogVolume {
    bool m_bActive; // 0x608
    Vector m_vBoxMins; // 0x60c
    Vector m_vBoxMaxs; // 0x618
    bool m_bStartDisabled; // 0x624
    bool m_bIndirectUseLPVs; // 0x625
    float m_flStrength; // 0x628
    int32_t m_nFalloffShape; // 0x62c
    float m_flFalloffExponent; // 0x630
    float m_flHeightFogDepth; // 0x634
    float m_fHeightFogEdgeWidth; // 0x638
    float m_fIndirectLightStrength; // 0x63c
    float m_fSunLightStrength; // 0x640
    float m_fNoiseStrength; // 0x644
    Color m_TintColor; // 0x648
    bool m_bOverrideTintColor; // 0x64c
    bool m_bOverrideIndirectLightStrength; // 0x64d
    bool m_bOverrideSunLightStrength; // 0x64e
    bool m_bOverrideNoiseStrength; // 0x64f
};

// C_CSGO_EndOfMatchCharacterPosition (size: 0x13a8)
struct C_CSGO_EndOfMatchCharacterPosition {
};

// CPulseCell_PlaySequence (size: 0xf8)
struct CPulseCell_PlaySequence {
    CUtlString m_SequenceName; // 0x48
    PulseNodeDynamicOutflows_t m_PulseAnimEvents; // 0x50
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
};

// C_BaseEntityAPI (size: 0x8)
struct C_BaseEntityAPI {
};

// C_BarnLight (size: 0x1198)
struct C_BarnLight {
    bool m_bEnabled; // 0xe88
    int32_t m_nColorMode; // 0xe8c
    Color m_Color; // 0xe90
    float m_flColorTemperature; // 0xe94
    float m_flBrightness; // 0xe98
    float m_flBrightnessScale; // 0xe9c
    int32_t m_nDirectLight; // 0xea0
    int32_t m_nBakedShadowIndex; // 0xea4
    int32_t m_nLightPathUniqueId; // 0xea8
    int32_t m_nLightMapUniqueId; // 0xeac
    int32_t m_nLuminaireShape; // 0xeb0
    float m_flLuminaireSize; // 0xeb4
    float m_flLuminaireAnisotropy; // 0xeb8
    CUtlString m_LightStyleString; // 0xec0
    GameTime_t m_flLightStyleStartTime; // 0xec8
    CUtlString m_QueuedLightStyleStrings; // 0xed0
    CUtlString m_LightStyleEvents; // 0xee8
    CHandle<T> m_LightStyleTargets; // 0xf00
    CEntityIOOutput[4] m_StyleEvent; // 0xf18
    CStrongHandle<T> m_hLightCookie; // 0xf78
    float m_flShape; // 0xf80
    float m_flSoftX; // 0xf84
    float m_flSoftY; // 0xf88
    float m_flSkirt; // 0xf8c
    float m_flSkirtNear; // 0xf90
    Vector m_vSizeParams; // 0xf94
    float m_flRange; // 0xfa0
    Vector m_vShear; // 0xfa4
    int32_t m_nBakeSpecularToCubemaps; // 0xfb0
    Vector m_vBakeSpecularToCubemapsSize; // 0xfb4
    int32_t m_nCastShadows; // 0xfc0
    int32_t m_nShadowMapSize; // 0xfc4
    int32_t m_nShadowPriority; // 0xfc8
    bool m_bContactShadow; // 0xfcc
    bool m_bForceShadowsEnabled; // 0xfcd
    int32_t m_nBounceLight; // 0xfd0
    float m_flBounceScale; // 0xfd4
    bool m_bDynamicBounce; // 0xfd8
    float m_flMinRoughness; // 0xfdc
    Vector m_vAlternateColor; // 0xfe0
    float m_fAlternateColorBrightness; // 0xfec
    int32_t m_nFog; // 0xff0
    float m_flFogStrength; // 0xff4
    int32_t m_nFogShadows; // 0xff8
    float m_flFogScale; // 0xffc
    bool m_bFogMixedShadows; // 0x1000
    float m_flFadeSizeStart; // 0x1004
    float m_flFadeSizeEnd; // 0x1008
    float m_flShadowFadeSizeStart; // 0x100c
    float m_flShadowFadeSizeEnd; // 0x1010
    bool m_bPrecomputedFieldsValid; // 0x1014
    Vector m_vPrecomputedBoundsMins; // 0x1018
    Vector m_vPrecomputedBoundsMaxs; // 0x1024
    Vector m_vPrecomputedOBBOrigin; // 0x1030
    QAngle m_vPrecomputedOBBAngles; // 0x103c
    Vector m_vPrecomputedOBBExtent; // 0x1048
    int32_t m_nPrecomputedSubFrusta; // 0x1054
    Vector m_vPrecomputedOBBOrigin0; // 0x1058
    QAngle m_vPrecomputedOBBAngles0; // 0x1064
    Vector m_vPrecomputedOBBExtent0; // 0x1070
    Vector m_vPrecomputedOBBOrigin1; // 0x107c
    QAngle m_vPrecomputedOBBAngles1; // 0x1088
    Vector m_vPrecomputedOBBExtent1; // 0x1094
    Vector m_vPrecomputedOBBOrigin2; // 0x10a0
    QAngle m_vPrecomputedOBBAngles2; // 0x10ac
    Vector m_vPrecomputedOBBExtent2; // 0x10b8
    Vector m_vPrecomputedOBBOrigin3; // 0x10c4
    QAngle m_vPrecomputedOBBAngles3; // 0x10d0
    Vector m_vPrecomputedOBBExtent3; // 0x10dc
    Vector m_vPrecomputedOBBOrigin4; // 0x10e8
    QAngle m_vPrecomputedOBBAngles4; // 0x10f4
    Vector m_vPrecomputedOBBExtent4; // 0x1100
    Vector m_vPrecomputedOBBOrigin5; // 0x110c
    QAngle m_vPrecomputedOBBAngles5; // 0x1118
    Vector m_vPrecomputedOBBExtent5; // 0x1124
    bool m_bInitialBoneSetup; // 0x1170
    C_NetworkUtlVectorBase< uint16 > m_VisClusters; // 0x1178
};

// CPulseCell_LerpCameraSettings (size: 0xb8)
struct CPulseCell_LerpCameraSettings {
    float m_flSeconds; // 0x90
    PointCameraSettings_t m_Start; // 0x94
    PointCameraSettings_t m_End; // 0xa4
};

// CPointOffScreenIndicatorUi (size: 0x10f0)
struct CPointOffScreenIndicatorUi {
    bool m_bBeenEnabled; // 0x10e0
    bool m_bHide; // 0x10e1
    float m_flSeenTargetTime; // 0x10e4
    C_PointClientUIWorldPanel* m_pTargetPanel; // 0x10e8
};

// CCSObserver_UseServices (size: 0x48)
struct CCSObserver_UseServices {
};

// C_PostProcessingVolume (size: 0xf98)
struct C_PostProcessingVolume {
    CStrongHandle<T> m_hPostSettings; // 0xf68
    float m_flFadeDuration; // 0xf70
    float m_flMinLogExposure; // 0xf74
    float m_flMaxLogExposure; // 0xf78
    float m_flMinExposure; // 0xf7c
    float m_flMaxExposure; // 0xf80
    float m_flExposureCompensation; // 0xf84
    float m_flExposureFadeSpeedUp; // 0xf88
    float m_flExposureFadeSpeedDown; // 0xf8c
    float m_flTonemapEVSmoothingRange; // 0xf90
    bool m_bMaster; // 0xf94
    bool m_bExposureControl; // 0xf95
};

// CCSPlayer_UseServices (size: 0x48)
struct CCSPlayer_UseServices {
};

// C_CSGO_CounterTerroristWingmanIntroCamera (size: 0x698)
struct C_CSGO_CounterTerroristWingmanIntroCamera {
};

// CPulseCell_PickBestOutflowSelector (size: 0x68)
struct CPulseCell_PickBestOutflowSelector {
    PulseBestOutflowRules_t m_nCheckType; // 0x48
    PulseSelectorOutflowList_t m_OutflowList; // 0x50
};

// CInfoFan (size: 0x660)
struct CInfoFan {
    float m_fFanForceMaxRadius; // 0x648
    float m_fFanForceMinRadius; // 0x64c
    float m_flCurveDistRange; // 0x650
    CUtlSymbolLarge m_FanForceCurveString; // 0x658
};

// C_VoteController (size: 0x640)
struct C_VoteController {
    int32_t m_iActiveIssueIndex; // 0x618
    int32_t m_iOnlyTeamToVote; // 0x61c
    int32[5] m_nVoteOptionCount; // 0x620
    int32_t m_nPotentialVotes; // 0x634
    bool m_bVotesDirty; // 0x638
    bool m_bTypeDirty; // 0x639
    bool m_bIsYesNoVote; // 0x63a
};

// C_CSPlayerPawnBase (size: 0x1650)
struct C_CSPlayerPawnBase {
    CCSPlayer_PingServices* m_pPingServices; // 0x15c0
    CSPlayerState m_previousPlayerState; // 0x15c8
    CSPlayerState m_iPlayerState; // 0x15cc
    bool m_bHasMovedSinceSpawn; // 0x15d0
    GameTime_t m_flLastSpawnTimeIndex; // 0x15d4
    int32_t m_iProgressBarDuration; // 0x15d8
    float m_flProgressBarStartTime; // 0x15dc
    GameTime_t m_flClientDeathTime; // 0x15e0
    float m_flFlashBangTime; // 0x15e4
    float m_flFlashScreenshotAlpha; // 0x15e8
    float m_flFlashOverlayAlpha; // 0x15ec
    bool m_bFlashBuildUp; // 0x15f0
    bool m_bFlashDspHasBeenCleared; // 0x15f1
    bool m_bFlashScreenshotHasBeenGrabbed; // 0x15f2
    float m_flFlashMaxAlpha; // 0x15f4
    float m_flFlashDuration; // 0x15f8
    GameTime_t m_flClientHealthFadeChangeTimestamp; // 0x15fc
    int32_t m_nClientHealthFadeParityValue; // 0x1600
    float m_fNextThinkPushAway; // 0x1604
    float m_flCurrentMusicStartTime; // 0x160c
    float m_flMusicRoundStartTime; // 0x1610
    bool m_bDeferStartMusicOnWarmup; // 0x1614
    float m_flLastSmokeOverlayAlpha; // 0x1618
    float m_flLastSmokeAge; // 0x161c
    Vector m_vLastSmokeOverlayColor; // 0x1620
    CHandle<T> m_hOriginalController; // 0x1648
};

// C_C4 (size: 0x1f80)
struct C_C4 {
    ParticleIndex_t m_activeLightParticleIndex; // 0x1f40
    C4LightEffect_t m_eActiveLightEffect; // 0x1f44
    bool m_bStartedArming; // 0x1f48
    GameTime_t m_fArmedTime; // 0x1f4c
    bool m_bBombPlacedAnimation; // 0x1f50
    bool m_bIsPlantingViaUse; // 0x1f51
    EntitySpottedState_t m_entitySpottedState; // 0x1f58
    int32_t m_nSpotRules; // 0x1f70
    bool[7] m_bPlayedArmingBeeps; // 0x1f74
    bool m_bBombPlanted; // 0x1f7b
};

// C_BreakableProp (size: 0x12d0)
struct C_BreakableProp {
    CPropDataComponent m_CPropDataComponent; // 0x11a0
    CEntityIOOutput m_OnStartDeath; // 0x11e0
    CEntityIOOutput m_OnBreak; // 0x11f8
    CEntityOutputTemplate< float32, float32 > m_OnHealthChanged; // 0x1210
    CEntityIOOutput m_OnTakeDamage; // 0x1230
    float m_impactEnergyScale; // 0x1248
    int32_t m_iMinHealthDmg; // 0x124c
    float m_flPressureDelay; // 0x1250
    float m_flDefBurstScale; // 0x1254
    Vector m_vDefBurstOffset; // 0x1258
    CHandle<T> m_hBreaker; // 0x1264
    PerformanceMode_t m_PerformanceMode; // 0x1268
    GameTime_t m_flPreventDamageBeforeTime; // 0x126c
    BreakableContentsType_t m_BreakableContentsType; // 0x1270
    CUtlString m_strBreakableContentsPropGroupOverride; // 0x1278
    CUtlString m_strBreakableContentsParticleOverride; // 0x1280
    bool m_bHasBreakPiecesOrCommands; // 0x1288
    float m_explodeDamage; // 0x128c
    float m_explodeRadius; // 0x1290
    BaseExplosionTypes_t m_nExplosionType; // 0x1294
    float m_explosionDelay; // 0x1298
    CUtlSymbolLarge m_explosionBuildupSound; // 0x12a0
    CUtlSymbolLarge m_explosionCustomEffect; // 0x12a8
    CUtlSymbolLarge m_explosionCustomSound; // 0x12b0
    CUtlSymbolLarge m_explosionModifier; // 0x12b8
    CHandle<T> m_hPhysicsAttacker; // 0x12c0
    GameTime_t m_flLastPhysicsInfluenceTime; // 0x12c4
    float m_flDefaultFadeScale; // 0x12c8
    CHandle<T> m_hLastAttacker; // 0x12cc
};

// CCSGO_WingmanIntroTerroristPosition (size: 0x13a8)
struct CCSGO_WingmanIntroTerroristPosition {
};

// CPrecipitationVData (size: 0x128)
struct CPrecipitationVData {
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys m_szParticlePrecipitationEffect; // 0x28
    float m_flInnerDistance; // 0x108
    ParticleAttachment_t m_nAttachType; // 0x10c
    bool m_bBatchSameVolumeType; // 0x110
    int32_t m_nRTEnvCP; // 0x114
    int32_t m_nRTEnvCPComponent; // 0x118
    CUtlString m_szModifier; // 0x120
};

// C_RetakeGameRules (size: 0x158)
struct C_RetakeGameRules {
    int32_t m_nMatchSeed; // 0x138
    bool m_bBlockersPresent; // 0x13c
    bool m_bRoundInProgress; // 0x13d
    int32_t m_iFirstSecondHalfRound; // 0x140
    int32_t m_iBombSite; // 0x144
    CHandle<T> m_hBombPlanter; // 0x148
};

// CPulseCell_WaitForObservable (size: 0x108)
struct CPulseCell_WaitForObservable {
    PulseObservableBoolExpression_t m_Condition; // 0x48
    CPulse_ResumePoint m_OnTrue; // 0xc0
};

// C_SoundAreaEntitySphere (size: 0x638)
struct C_SoundAreaEntitySphere {
    float m_flRadius; // 0x630
};

// CPulseCell_Step_EntFire (size: 0x50)
struct CPulseCell_Step_EntFire {
    CUtlString m_Input; // 0x48
};

// C_WeaponAWP (size: 0x1f70)
struct C_WeaponAWP {
};

// C_BaseButton (size: 0xe98)
struct C_BaseButton {
    CHandle<T> m_glowEntity; // 0xe88
    bool m_usable; // 0xe8c
    CUtlSymbolLarge m_szDisplayText; // 0xe90
};

// CCSObserver_ObserverServices (size: 0xf0)
struct CCSObserver_ObserverServices {
    ObserverInterpState_t m_obsInterpState; // 0x64
};

// CHitboxComponent (size: 0x18)
struct CHitboxComponent {
    float m_flBoundsExpandRadius; // 0x14
};

// ServerAuthoritativeWeaponSlot_t (size: 0x38)
struct ServerAuthoritativeWeaponSlot_t {
    uint16_t unClass; // 0x30
    uint16_t unSlot; // 0x32
    uint16_t unItemDefIdx; // 0x34
};

// C_CSMinimapBoundary (size: 0x608)
struct C_CSMinimapBoundary {
};

// CPathQueryComponent (size: 0xa0)
struct CPathQueryComponent {
};

// C_Precipitation (size: 0xfa8)
struct C_Precipitation {
    float m_flDensity; // 0xf58
    float m_flParticleInnerDist; // 0xf68
    char* m_pParticleDef; // 0xf70
    TimedEvent[1] m_tParticlePrecipTraceTimer; // 0xf98
    bool[1] m_bActiveParticlePrecipEmitter; // 0xfa0
    bool m_bParticlePrecipInitialized; // 0xfa1
    bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xfa2
    int32_t m_nAvailableSheetSequencesMaxIndex; // 0xfa4
};

// CLogicRelay (size: 0x610)
struct CLogicRelay {
    bool m_bDisabled; // 0x608
    bool m_bWaitForRefire; // 0x609
    bool m_bTriggerOnce; // 0x60a
    bool m_bFastRetrigger; // 0x60b
    bool m_bPassthoughCaller; // 0x60c
};

// SequenceHistory_t (size: 0x18)
struct SequenceHistory_t {
    HSequence m_hSequence; // 0x0
    GameTime_t m_flSeqStartTime; // 0x4
    float m_flSeqFixedCycle; // 0x8
    AnimLoopMode_t m_nSeqLoopMode; // 0xc
    float m_flPlaybackRate; // 0x10
    float m_flCyclesPerSecond; // 0x14
};

// CPlayer_ItemServices (size: 0x48)
struct CPlayer_ItemServices {
};

// CPulse_OutflowConnection (size: 0x48)
struct CPulse_OutflowConnection {
    PulseSymbol_t m_SourceOutflowName; // 0x0
    PulseRuntimeChunkIndex_t m_nDestChunk; // 0x10
    int32_t m_nInstruction; // 0x14
    PulseRegisterMap_t m_OutflowRegisterMap; // 0x18
};

// C_WeaponUMP45 (size: 0x1f70)
struct C_WeaponUMP45 {
};

// C_WeaponG3SG1 (size: 0x1f70)
struct C_WeaponG3SG1 {
};

// C_SpotlightEnd (size: 0xe98)
struct C_SpotlightEnd {
    float m_flLightScale; // 0xe88
    float m_Radius; // 0xe8c
};

// C_Fish (size: 0x1258)
struct C_Fish {
    Vector m_pos; // 0x1168
    Vector m_vel; // 0x1174
    QAngle m_angles; // 0x1180
    int32_t m_localLifeState; // 0x118c
    float m_deathDepth; // 0x1190
    float m_deathAngle; // 0x1194
    float m_buoyancy; // 0x1198
    CountdownTimer m_wiggleTimer; // 0x11a0
    float m_wigglePhase; // 0x11b8
    float m_wiggleRate; // 0x11bc
    Vector m_actualPos; // 0x11c0
    QAngle m_actualAngles; // 0x11cc
    Vector m_poolOrigin; // 0x11d8
    float m_waterLevel; // 0x11e4
    bool m_gotUpdate; // 0x11e8
    float m_x; // 0x11ec
    float m_y; // 0x11f0
    float m_z; // 0x11f4
    float m_angle; // 0x11f8
    float32[20] m_errorHistory; // 0x11fc
    int32_t m_errorHistoryIndex; // 0x124c
    int32_t m_errorHistoryCount; // 0x1250
    float m_averageError; // 0x1254
};

// C_WeaponFamas (size: 0x1f70)
struct C_WeaponFamas {
};

// C_EnvVolumetricFogController (size: 0x6b8)
struct C_EnvVolumetricFogController {
    float m_flScattering; // 0x608
    Color m_TintColor; // 0x60c
    float m_flAnisotropy; // 0x610
    float m_flFadeSpeed; // 0x614
    float m_flDrawDistance; // 0x618
    float m_flFadeInStart; // 0x61c
    float m_flFadeInEnd; // 0x620
    float m_flIndirectStrength; // 0x624
    int32_t m_nVolumeDepth; // 0x628
    float m_fFirstVolumeSliceThickness; // 0x62c
    int32_t m_nIndirectTextureDimX; // 0x630
    int32_t m_nIndirectTextureDimY; // 0x634
    int32_t m_nIndirectTextureDimZ; // 0x638
    Vector m_vBoxMins; // 0x63c
    Vector m_vBoxMaxs; // 0x648
    bool m_bActive; // 0x654
    GameTime_t m_flStartAnisoTime; // 0x658
    GameTime_t m_flStartScatterTime; // 0x65c
    GameTime_t m_flStartDrawDistanceTime; // 0x660
    float m_flStartAnisotropy; // 0x664
    float m_flStartScattering; // 0x668
    float m_flStartDrawDistance; // 0x66c
    float m_flDefaultAnisotropy; // 0x670
    float m_flDefaultScattering; // 0x674
    float m_flDefaultDrawDistance; // 0x678
    bool m_bStartDisabled; // 0x67c
    bool m_bEnableIndirect; // 0x67d
    bool m_bIsMaster; // 0x67e
    CStrongHandle<T> m_hFogIndirectTexture; // 0x680
    int32_t m_nForceRefreshCount; // 0x688
    float m_fNoiseSpeed; // 0x68c
    float m_fNoiseStrength; // 0x690
    Vector m_vNoiseScale; // 0x694
    float m_fWindSpeed; // 0x6a0
    Vector m_vWindDirection; // 0x6a4
    bool m_bFirstTime; // 0x6b0
};

// CPulseGraphDef (size: 0x198)
struct CPulseGraphDef {
    PulseSymbol_t m_DomainIdentifier; // 0x8
    CPulseValueFullType m_DomainSubType; // 0x18
    PulseSymbol_t m_ParentMapName; // 0x30
    PulseSymbol_t m_ParentXmlName; // 0x40
    CUtlVector<T> m_Chunks; // 0x50
    CUtlVector<T> m_Cells; // 0x68
    CUtlVector<T> m_Vars; // 0x80
    CUtlVector<T> m_PublicOutputs; // 0x98
    CUtlVector<T> m_InvokeBindings; // 0xb0
    CUtlVector<T> m_CallInfos; // 0xc8
    CUtlVector<T> m_Constants; // 0xe0
    CUtlVector<T> m_DomainValues; // 0xf8
    CUtlVector<T> m_BlackboardReferences; // 0x110
    CUtlVector<T> m_OutputConnections; // 0x128
};

// C_EnvDetailController (size: 0x610)
struct C_EnvDetailController {
    float m_flFadeStartDist; // 0x608
    float m_flFadeEndDist; // 0x60c
};

// C_EnvWindVolume (size: 0x640)
struct C_EnvWindVolume {
    bool m_bActive; // 0x608
    Vector m_vBoxMins; // 0x60c
    Vector m_vBoxMaxs; // 0x618
    bool m_bStartDisabled; // 0x624
    int32_t m_nShape; // 0x628
    float m_fWindSpeedMultiplier; // 0x62c
    float m_fWindTurbulenceMultiplier; // 0x630
    float m_fWindSpeedVariationMultiplier; // 0x634
    float m_fWindDirectionVariationMultiplier; // 0x638
};

// CBasePlayerControllerAPI (size: 0x8)
struct CBasePlayerControllerAPI {
};

// CHostageRescueZoneShim (size: 0xf58)
struct CHostageRescueZoneShim {
};

// CEnvSoundscapeAlias_snd_soundscape (size: 0x698)
struct CEnvSoundscapeAlias_snd_soundscape {
};

// CCSPlayer_HostageServices (size: 0x50)
struct CCSPlayer_HostageServices {
    CHandle<T> m_hCarriedHostage; // 0x48
    CHandle<T> m_hCarriedHostageProp; // 0x4c
};

// C_GameRulesProxy (size: 0x608)
struct C_GameRulesProxy {
};

// CRenderComponent (size: 0xd0)
struct CRenderComponent {
    CNetworkVarChainer _m_pChainEntity; // 0x10
    bool m_bIsRenderingWithViewModels; // 0x50
    uint32_t m_nSplitscreenFlags; // 0x54
    bool m_bEnableRendering; // 0x58
    bool m_bInterpolationReadyToDraw; // 0xa8
};

// C_Team (size: 0x6c0)
struct C_Team {
    CHandle<T> m_aPlayerControllers; // 0x608
    CHandle<T> m_aPlayers; // 0x620
    int32_t m_iScore; // 0x638
    char[129] m_szTeamname; // 0x63c
};

// C_PathParticleRopeAlias_path_particle_rope_clientside (size: 0x718)
struct C_PathParticleRopeAlias_path_particle_rope_clientside {
};

// CPointChildModifier (size: 0x610)
struct CPointChildModifier {
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x608
};

// CCSPlayerLegacyJump (size: 0x18)
struct CCSPlayerLegacyJump {
    bool m_bOldJumpPressed; // 0x10
    float m_flJumpPressedTime; // 0x14
};

// C_WeaponNOVA (size: 0x1f40)
struct C_WeaponNOVA {
};

// C_DEagle (size: 0x1f70)
struct C_DEagle {
};

// C_CS2HudModelAddon (size: 0x1210)
struct C_CS2HudModelAddon {
};

// C_TriggerMultiple (size: 0xf58)
struct C_TriggerMultiple {
};

// C_CSGO_TeamPreviewCamera (size: 0x698)
struct C_CSGO_TeamPreviewCamera {
    int32_t m_nVariant; // 0x690
};

// C_ColorCorrectionVolume (size: 0x1180)
struct C_ColorCorrectionVolume {
    float m_LastEnterWeight; // 0xf58
    GameTime_t m_LastEnterTime; // 0xf5c
    float m_LastExitWeight; // 0xf60
    GameTime_t m_LastExitTime; // 0xf64
    bool m_bEnabled; // 0xf68
    float m_MaxWeight; // 0xf6c
    float m_FadeDuration; // 0xf70
    float m_Weight; // 0xf74
    char[512] m_lookupFilename; // 0xf78
};

// CPlayer_MovementServices (size: 0x240)
struct CPlayer_MovementServices {
    int32_t m_nImpulse; // 0x48
    CInButtonState m_nButtons; // 0x50
    uint64_t m_nQueuedButtonDownMask; // 0x70
    uint64_t m_nQueuedButtonChangeMask; // 0x78
    uint64_t m_nButtonDoublePressed; // 0x80
    uint32[64] m_pButtonPressedCmdNumber; // 0x88
    uint32_t m_nLastCommandNumberProcessed; // 0x188
    uint64_t m_nToggleButtonDownMask; // 0x190
    float m_flMaxspeed; // 0x1a0
    float32[4] m_arrForceSubtickMoveWhen; // 0x1a4
    float m_flForwardMove; // 0x1b4
    float m_flLeftMove; // 0x1b8
    float m_flUpMove; // 0x1bc
    Vector m_vecLastMovementImpulses; // 0x1c0
    QAngle m_vecOldViewAngles; // 0x228
};

// CInfoDynamicShadowHintBox (size: 0x638)
struct CInfoDynamicShadowHintBox {
    Vector m_vBoxMins; // 0x620
    Vector m_vBoxMaxs; // 0x62c
};

// CBaseAnimGraphController (size: 0x1b38)
struct CBaseAnimGraphController {
    AnimationAlgorithm_t m_nAnimationAlgorithm; // 0x18
    CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x20
    CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance; // 0x14b0
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // 0x1510
    CUtlVector<T> m_vecSecondarySkeletonNames; // 0x1518
    CHandle<T> m_vecSecondarySkeletons; // 0x1530
    int32_t m_nSecondarySkeletonMasterCount; // 0x1548
    float m_flSoundSyncTime; // 0x1550
    uint32_t m_nActiveIKChainMask; // 0x1554
    HSequence m_hSequence; // 0x15a8
    GameTime_t m_flSeqStartTime; // 0x15ac
    float m_flSeqFixedCycle; // 0x15b0
    AnimLoopMode_t m_nAnimLoopMode; // 0x15b4
    CNetworkedQuantizedFloat m_flPlaybackRate; // 0x15b8
    SequenceFinishNotifyState_t m_nNotifyState; // 0x15c4
    bool m_bNetworkedAnimationInputsChanged; // 0x15c5
    bool m_bNetworkedSequenceChanged; // 0x15c6
    bool m_bLastUpdateSkipped; // 0x15c7
    bool m_bSequenceFinished; // 0x15c8
    GameTick_t m_nPrevAnimUpdateTick; // 0x15cc
    CStrongHandle<T> m_hGraphDefinitionAG2; // 0x1868
    C_NetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2; // 0x1870
    int32_t m_nSerializePoseRecipeSizeAG2; // 0x1888
    int32_t m_nSerializePoseRecipeVersionAG2; // 0x188c
    int32_t m_nServerGraphInstanceIteration; // 0x1890
    int32_t m_nServerSerializationContextIteration; // 0x1894
    ResourceId_t m_primaryGraphId; // 0x1898
    C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds; // 0x18a0
    C_NetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds; // 0x18b8
    CGlobalSymbol m_sAnimGraph2Identifier; // 0x18d0
    CUtlVector<T> m_vecExternalGraphs; // 0x1af8
    AnimationAlgorithm_t m_nPrevAnimationAlgorithm; // 0x1b31
};

// C_ColorCorrection (size: 0x850)
struct C_ColorCorrection {
    Vector m_vecOrigin; // 0x608
    float m_MinFalloff; // 0x614
    float m_MaxFalloff; // 0x618
    float m_flFadeInDuration; // 0x61c
    float m_flFadeOutDuration; // 0x620
    float m_flMaxWeight; // 0x624
    float m_flCurWeight; // 0x628
    char[512] m_netlookupFilename; // 0x62c
    bool m_bEnabled; // 0x82c
    bool m_bMaster; // 0x82d
    bool m_bClientSide; // 0x82e
    bool m_bExclusive; // 0x82f
    bool[1] m_bEnabledOnClient; // 0x830
    float32[1] m_flCurWeightOnClient; // 0x834
    bool[1] m_bFadingIn; // 0x838
    float32[1] m_flFadeStartWeight; // 0x83c
    float32[1] m_flFadeStartTime; // 0x840
    float32[1] m_flFadeDuration; // 0x844
};

// CBuoyancyHelper (size: 0x118)
struct CBuoyancyHelper {
    CUtlString m_nFluidType; // 0x18
    float m_flFluidDensity; // 0x1c
    float m_flNeutrallyBuoyantGravity; // 0x20
    float m_flNeutrallyBuoyantLinearDamping; // 0x24
    float m_flNeutrallyBuoyantAngularDamping; // 0x28
    bool m_bNeutrallyBuoyant; // 0x2c
    CUtlVector<T> m_vecFractionOfWheelSubmergedForWheelFriction; // 0x30
    CUtlVector<T> m_vecWheelFrictionScales; // 0x48
    CUtlVector<T> m_vecFractionOfWheelSubmergedForWheelDrag; // 0x60
    CUtlVector<T> m_vecWheelDrag; // 0x78
};

// C_PhysBox (size: 0xe88)
struct C_PhysBox {
};

// CCSPlayer_CameraServices (size: 0x340)
struct CCSPlayer_CameraServices {
    float m_flDeathCamTilt; // 0x2a8
    Vector m_vClientScopeInaccuracy; // 0x2b0
};

// CFilterMultiple (size: 0x6c0)
struct CFilterMultiple {
    filter_t m_nFilterType; // 0x640
    CUtlSymbolLarge[10] m_iFilterName; // 0x648
    CHandle<T> m_hFilter; // 0x698
};

// CPulseCell_FireCursors (size: 0xf8)
struct CPulseCell_FireCursors {
    CUtlVector<T> m_Outflows; // 0x48
    bool m_bWaitForChildOutflows; // 0x60
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
};

// CEnvSoundscape (size: 0x698)
struct CEnvSoundscape {
    CEntityIOOutput m_OnPlay; // 0x608
    float m_flRadius; // 0x620
    CUtlSymbolLarge m_soundEventName; // 0x628
    bool m_bOverrideWithEvent; // 0x630
    int32_t m_soundscapeIndex; // 0x634
    int32_t m_soundscapeEntityListId; // 0x638
    CUtlSymbolLarge[8] m_positionNames; // 0x640
    CHandle<T> m_hProxySoundscape; // 0x680
    bool m_bDisabled; // 0x684
    CUtlSymbolLarge m_soundscapeName; // 0x688
    uint32_t m_soundEventHash; // 0x690
};

// C_SoundEventEntityAlias_snd_event_point (size: 0x6b8)
struct C_SoundEventEntityAlias_snd_event_point {
};

// C_FogController (size: 0x678)
struct C_FogController {
    fogparams_t m_fog; // 0x608
    bool m_bUseAngles; // 0x670
    int32_t m_iChangedVariables; // 0x674
};

// C_SoundOpvarSetOBBWindEntity (size: 0x628)
struct C_SoundOpvarSetOBBWindEntity {
};

// C_MolotovGrenade (size: 0x2000)
struct C_MolotovGrenade {
};

// C_NetTestBaseCombatCharacter (size: 0x13d8)
struct C_NetTestBaseCombatCharacter {
};

// CBodyComponentPoint (size: 0x1d0)
struct CBodyComponentPoint {
    CGameSceneNode m_sceneNode; // 0x80
};

// C_WeaponM4A1Silencer (size: 0x1f70)
struct C_WeaponM4A1Silencer {
};

// C_EconItemView (size: 0x470)
struct C_EconItemView {
    bool m_bInventoryImageRgbaRequested; // 0x60
    bool m_bInventoryImageTriedCache; // 0x61
    int32_t m_nInventoryImageRgbaWidth; // 0x80
    int32_t m_nInventoryImageRgbaHeight; // 0x84
    char[260] m_szCurrentLoadCachedFileName; // 0x88
    bool m_bRestoreCustomMaterialAfterPrecache; // 0x1b8
    uint16_t m_iItemDefinitionIndex; // 0x1ba
    int32_t m_iEntityQuality; // 0x1bc
    uint32_t m_iEntityLevel; // 0x1c0
    uint64_t m_iItemID; // 0x1c8
    uint32_t m_iItemIDHigh; // 0x1d0
    uint32_t m_iItemIDLow; // 0x1d4
    uint32_t m_iAccountID; // 0x1d8
    uint32_t m_iInventoryPosition; // 0x1dc
    bool m_bInitialized; // 0x1e8
    bool m_bDisallowSOC; // 0x1e9
    bool m_bIsStoreItem; // 0x1ea
    bool m_bIsTradeItem; // 0x1eb
    int32_t m_iEntityQuantity; // 0x1ec
    int32_t m_iRarityOverride; // 0x1f0
    int32_t m_iQualityOverride; // 0x1f4
    int32_t m_iOriginOverride; // 0x1f8
    uint8_t m_ubStyleOverride; // 0x1fc
    uint8_t m_unClientFlags; // 0x1fd
    CAttributeList m_AttributeList; // 0x208
    CAttributeList m_NetworkedDynamicAttributes; // 0x280
    char[161] m_szCustomName; // 0x2f8
    char[161] m_szCustomNameOverride; // 0x399
    bool m_bInitializedTags; // 0x468
};

// CPulseCell_Timeline::TimelineEvent_t (size: 0x50)
struct CPulseCell_Timeline_TimelineEvent_t {
    float m_flTimeFromPrevious; // 0x0
    CPulse_OutflowConnection m_EventOutflow; // 0x8
};

// CPulseCell_IntervalTimer::CursorState_t (size: 0x14)
struct CPulseCell_IntervalTimer_CursorState_t {
    GameTime_t m_StartTime; // 0x0
    GameTime_t m_EndTime; // 0x4
    float m_flWaitInterval; // 0x8
    float m_flWaitIntervalHigh; // 0xc
    bool m_bCompleteOnNextWake; // 0x10
};

// CPulseCell_BaseRequirement (size: 0x48)
struct CPulseCell_BaseRequirement {
};

// CPulseCell_BaseState (size: 0x48)
struct CPulseCell_BaseState {
};

// OutflowWithRequirements_t (size: 0x80)
struct OutflowWithRequirements_t {
    CPulse_OutflowConnection m_Connection; // 0x0
    PulseDocNodeID_t m_DestinationFlowNodeID; // 0x48
    CUtlVector<T> m_RequirementNodeIDs; // 0x50
    CUtlVector<T> m_nCursorStateBlockIndex; // 0x68
};

// CPulseCell_IsRequirementValid (size: 0x48)
struct CPulseCell_IsRequirementValid {
};

// C_SoundEventPathCornerEntity (size: 0x6d0)
struct C_SoundEventPathCornerEntity {
    C_NetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // 0x6b8
};

// C_InfoVisibilityBox (size: 0x620)
struct C_InfoVisibilityBox {
    int32_t m_nMode; // 0x60c
    Vector m_vBoxSize; // 0x610
    bool m_bEnabled; // 0x61c
};

// CCSPlayer_ItemServices (size: 0x50)
struct CCSPlayer_ItemServices {
    bool m_bHasDefuser; // 0x48
    bool m_bHasHelmet; // 0x49
};

// CPulseCell_Value_Gradient (size: 0x60)
struct CPulseCell_Value_Gradient {
    CColorGradient m_Gradient; // 0x48
};

// IntervalTimer (size: 0x10)
struct IntervalTimer {
    GameTime_t m_timestamp; // 0x8
    WorldGroupId_t m_nWorldGroupId; // 0xc
};

// audioparams_t (size: 0x78)
struct audioparams_t {
    Vector[8] localSound; // 0x8
    int32_t soundscapeIndex; // 0x68
    uint8_t localBits; // 0x6c
    int32_t soundscapeEntityListIndex; // 0x70
    uint32_t soundEventHash; // 0x74
};

// C_PathParticleRope (size: 0x718)
struct C_PathParticleRope {
    bool m_bStartActive; // 0x610
    float m_flMaxSimulationTime; // 0x614
    CUtlSymbolLarge m_iszEffectName; // 0x618
    CUtlVector<T> m_PathNodes_Name; // 0x620
    float m_flParticleSpacing; // 0x638
    float m_flSlack; // 0x63c
    float m_flRadius; // 0x640
    Color m_ColorTint; // 0x644
    int32_t m_nEffectState; // 0x648
    CStrongHandle<T> m_iEffectIndex; // 0x650
    C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x658
    C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x670
    C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x688
    C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x6a0
    C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x6b8
    C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x6d0
};

// C_DecoyProjectile (size: 0x1468)
struct C_DecoyProjectile {
    int32_t m_nDecoyShotTick; // 0x1438
    int32_t m_nClientLastKnownDecoyShotTick; // 0x143c
    GameTime_t m_flTimeParticleEffectSpawn; // 0x1460
};

// C_AttributeContainer (size: 0x4d0)
struct C_AttributeContainer {
    C_EconItemView m_Item; // 0x50
    int32_t m_iExternalItemProviderRegisteredToken; // 0x4c0
    uint64_t m_ullRegisteredAsItemID; // 0x4c8
};

// C_CSWeaponBase (size: 0x1f40)
struct C_CSWeaponBase {
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // 0x1948
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // 0x194c
    GameTime_t m_flInspectCancelCompleteTime; // 0x1950
    bool m_bInspectPending; // 0x1954
    bool m_bInspectShouldLoop; // 0x1955
    float m_flCrosshairDistance; // 0x1980
    int32_t m_iAmmoLastCheck; // 0x1984
    int32_t m_nLastEmptySoundCmdNum; // 0x1988
    bool m_bFireOnEmpty; // 0x198c
    CEntityIOOutput m_OnPlayerPickup; // 0x1990
    CSWeaponMode m_weaponMode; // 0x19a8
    float m_flTurningInaccuracyDelta; // 0x19ac
    Vector m_vecTurningInaccuracyEyeDirLast; // 0x19b0
    float m_flTurningInaccuracy; // 0x19bc
    float m_fAccuracyPenalty; // 0x19c0
    GameTime_t m_flLastAccuracyUpdateTime; // 0x19c4
    float m_fAccuracySmoothedForZoom; // 0x19c8
    int32_t m_iRecoilIndex; // 0x19cc
    float m_flRecoilIndex; // 0x19d0
    bool m_bBurstMode; // 0x19d4
    GameTime_t m_flLastBurstModeChangeTime; // 0x19d8
    GameTick_t m_nPostponeFireReadyTicks; // 0x19dc
    float m_flPostponeFireReadyFrac; // 0x19e0
    bool m_bInReload; // 0x19e4
    GameTime_t m_flDroppedAtTime; // 0x19e8
    bool m_bIsHauledBack; // 0x19ec
    bool m_bSilencerOn; // 0x19ed
    GameTime_t m_flTimeSilencerSwitchComplete; // 0x19f0
    float m_flWeaponActionPlaybackRate; // 0x19f4
    int32_t m_iOriginalTeamNumber; // 0x19f8
    int32_t m_iMostRecentTeamNumber; // 0x19fc
    bool m_bDroppedNearBuyZone; // 0x1a00
    float m_flNextAttackRenderTimeOffset; // 0x1a04
    bool m_bClearWeaponIdentifyingUGC; // 0x1aa0
    bool m_bVisualsDataSet; // 0x1aa1
    bool m_bUIWeapon; // 0x1aa2
    int32_t m_nCustomEconReloadEventId; // 0x1aa4
    GameTime_t m_nextPrevOwnerUseTime; // 0x1ab0
    CHandle<T> m_hPrevOwner; // 0x1ab4
    GameTick_t m_nDropTick; // 0x1ab8
    bool m_bWasActiveWeaponWhenDropped; // 0x1abc
    bool m_donated; // 0x1adc
    GameTime_t m_fLastShotTime; // 0x1ae0
    bool m_bWasOwnedByCT; // 0x1ae4
    bool m_bWasOwnedByTerrorist; // 0x1ae5
    float m_flNextClientFireBulletTime; // 0x1ae8
    float m_flNextClientFireBulletTime_Repredict; // 0x1aec
    C_IronSightController m_IronSightController; // 0x1c50
    int32_t m_iIronSightMode; // 0x1d00
    GameTime_t m_flLastLOSTraceFailureTime; // 0x1d18
    float m_flWatTickOffset; // 0x1d78
    GameTime_t m_flLastShakeTime; // 0x1d8c
};

// CTimeline (size: 0x228)
struct CTimeline {
    float32[64] m_flValues; // 0x10
    int32[64] m_nValueCounts; // 0x110
    int32_t m_nBucketCount; // 0x210
    float m_flInterval; // 0x214
    float m_flFinalValue; // 0x218
    TimelineCompression_t m_nCompressionType; // 0x21c
    bool m_bStopped; // 0x220
};

// CPulseCursorFuncs (size: 0x1)
struct CPulseCursorFuncs {
};

// C_TonemapController2 (size: 0x620)
struct C_TonemapController2 {
    float m_flAutoExposureMin; // 0x608
    float m_flAutoExposureMax; // 0x60c
    float m_flExposureAdaptationSpeedUp; // 0x610
    float m_flExposureAdaptationSpeedDown; // 0x614
    float m_flTonemapEVSmoothingRange; // 0x618
};

// CountdownTimer (size: 0x18)
struct CountdownTimer {
    float m_duration; // 0x8
    GameTime_t m_timestamp; // 0xc
    float m_timescale; // 0x10
    WorldGroupId_t m_nWorldGroupId; // 0x14
};

// PulseNodeDynamicOutflows_t::DynamicOutflow_t (size: 0x50)
struct PulseNodeDynamicOutflows_t_DynamicOutflow_t {
    CGlobalSymbol m_OutflowID; // 0x0
    CPulse_OutflowConnection m_Connection; // 0x8
};

// C_WeaponMag7 (size: 0x1f70)
struct C_WeaponMag7 {
};

// WeaponPurchaseCount_t (size: 0x38)
struct WeaponPurchaseCount_t {
    uint16_t m_nItemDefIndex; // 0x30
    uint16_t m_nCount; // 0x32
};

// CBasePulseGraphInstance (size: 0x118)
struct CBasePulseGraphInstance {
};

// FilterHealth (size: 0x650)
struct FilterHealth {
    bool m_bAdrenalineActive; // 0x640
    int32_t m_iHealthMin; // 0x644
    int32_t m_iHealthMax; // 0x648
};

// C_PointClientUIHUD (size: 0x1080)
struct C_PointClientUIHUD {
    bool m_bCheckCSSClasses; // 0xec0
    bool m_bIgnoreInput; // 0x1038
    float m_flWidth; // 0x103c
    float m_flHeight; // 0x1040
    float m_flDPI; // 0x1044
    float m_flInteractDistance; // 0x1048
    float m_flDepthOffset; // 0x104c
    uint32_t m_unOwnerContext; // 0x1050
    uint32_t m_unHorizontalAlign; // 0x1054
    uint32_t m_unVerticalAlign; // 0x1058
    uint32_t m_unOrientation; // 0x105c
    bool m_bAllowInteractionFromAllSceneWorlds; // 0x1060
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x1068
};

// CPulseCell_Inflow_GraphHook (size: 0x90)
struct CPulseCell_Inflow_GraphHook {
    PulseSymbol_t m_HookName; // 0x80
};

// SignatureOutflow_Resume (size: 0x48)
struct SignatureOutflow_Resume {
};

// CPathSimpleAPI (size: 0x8)
struct CPathSimpleAPI {
};

// C_InfoLadderDismount (size: 0x608)
struct C_InfoLadderDismount {
};

// C_PointCommentaryNode (size: 0x11c8)
struct C_PointCommentaryNode {
    bool m_bActive; // 0x1180
    bool m_bWasActive; // 0x1181
    GameTime_t m_flEndTime; // 0x1184
    GameTime_t m_flStartTime; // 0x1188
    float m_flStartTimeInCommentary; // 0x118c
    CUtlSymbolLarge m_iszCommentaryFile; // 0x1190
    CUtlSymbolLarge m_iszTitle; // 0x1198
    CUtlSymbolLarge m_iszSpeakers; // 0x11a0
    int32_t m_iNodeNumber; // 0x11a8
    int32_t m_iNodeNumberMax; // 0x11ac
    bool m_bListenedTo; // 0x11b0
    CSoundPatch* m_sndCommentary; // 0x11b8
    CHandle<T> m_hViewPosition; // 0x11c0
    bool m_bRestartAfterRestore; // 0x11c4
};

// CSpriteOriented (size: 0xf00)
struct CSpriteOriented {
};

// shard_model_desc_t (size: 0x80)
struct shard_model_desc_t {
    int32_t m_nModelID; // 0x8
    CStrongHandle<T> m_hMaterialBase; // 0x10
    CStrongHandle<T> m_hMaterialDamageOverlay; // 0x18
    ShardSolid_t m_solid; // 0x20
    Vector2D m_vecPanelSize; // 0x24
    Vector2D m_vecStressPositionA; // 0x2c
    Vector2D m_vecStressPositionB; // 0x34
    C_NetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x40
    C_NetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices; // 0x58
    float m_flGlassHalfThickness; // 0x70
    bool m_bHasParent; // 0x74
    bool m_bParentFrozen; // 0x75
    CUtlString m_SurfacePropStringToken; // 0x78
};

// C_KeychainModule (size: 0x1178)
struct C_KeychainModule {
    uint32_t m_nKeychainDefID; // 0x1170
    uint32_t m_nKeychainSeed; // 0x1174
};

// CFuncWater (size: 0xfa0)
struct CFuncWater {
    CBuoyancyHelper m_BuoyancyHelper; // 0xe88
};

// CCSPlayer_GlowServices (size: 0x50)
struct CCSPlayer_GlowServices {
};

// CCSGameModeRules (size: 0x30)
struct CCSGameModeRules {
    CNetworkVarChainer _m_pChainEntity; // 0x8
};

// C_Flashbang (size: 0x2000)
struct C_Flashbang {
};

// C_PointClientUIWorldTextPanel (size: 0x12e0)
struct C_PointClientUIWorldTextPanel {
    char[512] m_messageText; // 0x10e0
};

// CCSPlayer_WaterServices (size: 0x70)
struct CCSPlayer_WaterServices {
    float m_flWaterJumpTime; // 0x48
    Vector m_vecWaterJumpVel; // 0x4c
    float m_flSwimSoundTime; // 0x58
};

// C_CSObserverPawn (size: 0x1658)
struct C_CSObserverPawn {
    CEntityHandle m_hDetectParentChange; // 0x1650
};

// ViewAngleServerChange_t (size: 0x48)
struct ViewAngleServerChange_t {
    FixAngleSet_t nType; // 0x30
    QAngle qAngle; // 0x34
    uint32_t nIndex; // 0x40
};

// C_FuncLadder (size: 0xee0)
struct C_FuncLadder {
    Vector m_vecLadderDir; // 0xe88
    CUtlVector<T> m_Dismounts; // 0xe98
    Vector m_vecLocalTop; // 0xeb0
    VectorWS m_vecPlayerMountPositionTop; // 0xebc
    VectorWS m_vecPlayerMountPositionBottom; // 0xec8
    float m_flAutoRideSpeed; // 0xed4
    bool m_bDisabled; // 0xed8
    bool m_bFakeLadder; // 0xed9
    bool m_bHasSlack; // 0xeda
};

// C_WeaponMP5SD (size: 0x1f70)
struct C_WeaponMP5SD {
};

// C_World (size: 0xe88)
struct C_World {
};

// C_CSGO_TeamSelectCounterTerroristPosition (size: 0x13a8)
struct C_CSGO_TeamSelectCounterTerroristPosition {
};

// C_WeaponGalilAR (size: 0x1f70)
struct C_WeaponGalilAR {
};

// CCSPlayerBase_CameraServices (size: 0x2a8)
struct CCSPlayerBase_CameraServices {
    uint32_t m_iFOV; // 0x290
    uint32_t m_iFOVStart; // 0x294
    GameTime_t m_flFOVTime; // 0x298
    float m_flFOVRate; // 0x29c
    CHandle<T> m_hZoomOwner; // 0x2a0
    float m_flLastShotFOV; // 0x2a4
};

// C_TeamplayRules (size: 0x40)
struct C_TeamplayRules {
};

// CPulseCell_Inflow_BaseEntrypoint (size: 0x80)
struct CPulseCell_Inflow_BaseEntrypoint {
    PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48
    PulseRegisterMap_t m_RegisterMap; // 0x50
};

// C_WeaponSG556 (size: 0x1f70)
struct C_WeaponSG556 {
};

// C_CSPlayerPawn (size: 0x3ef0)
struct C_CSPlayerPawn {
    CCSPlayer_BulletServices* m_pBulletServices; // 0x1660
    CCSPlayer_HostageServices* m_pHostageServices; // 0x1668
    CCSPlayer_BuyServices* m_pBuyServices; // 0x1670
    CCSPlayer_GlowServices* m_pGlowServices; // 0x1678
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1680
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x1688
    GameTime_t m_flHealthShotBoostExpirationTime; // 0x1690
    GameTime_t m_flLastFiredWeaponTime; // 0x1694
    bool m_bHasFemaleVoice; // 0x1698
    float m_flLandingTimeSeconds; // 0x169c
    float m_flOldFallVelocity; // 0x16a0
    char[18] m_szLastPlaceName; // 0x16a4
    bool m_bPrevDefuser; // 0x16b6
    bool m_bPrevHelmet; // 0x16b7
    int32_t m_nPrevArmorVal; // 0x16b8
    int32_t m_nPrevGrenadeAmmoCount; // 0x16bc
    uint32_t m_unPreviousWeaponHash; // 0x16c0
    uint32_t m_unWeaponHash; // 0x16c4
    bool m_bInBuyZone; // 0x16c8
    bool m_bPreviouslyInBuyZone; // 0x16c9
    QAngle m_aimPunchAngle; // 0x16cc
    QAngle m_aimPunchAngleVel; // 0x16d8
    GameTick_t m_aimPunchTickBase; // 0x16e4
    float m_aimPunchTickFraction; // 0x16e8
    bool m_bInLanding; // 0x1710
    float m_flLandingStartTime; // 0x1714
    bool m_bInHostageRescueZone; // 0x1718
    bool m_bInBombZone; // 0x1719
    bool m_bIsBuyMenuOpen; // 0x171a
    GameTime_t m_flTimeOfLastInjury; // 0x171c
    GameTime_t m_flNextSprayDecalTime; // 0x1720
    int32_t m_iRetakesOffering; // 0x1878
    int32_t m_iRetakesOfferingCard; // 0x187c
    bool m_bRetakesHasDefuseKit; // 0x1880
    bool m_bRetakesMVPLastRound; // 0x1881
    int32_t m_iRetakesMVPBoostItem; // 0x1884
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1888
    bool m_bNeedToReApplyGloves; // 0x188d
    C_EconItemView m_EconGloves; // 0x1890
    uint8_t m_nEconGlovesChanged; // 0x1d00
    bool m_bMustSyncRagdollState; // 0x1d01
    int32_t m_nRagdollDamageBone; // 0x1d04
    Vector m_vRagdollDamageForce; // 0x1d08
    Vector m_vRagdollDamagePosition; // 0x1d14
    char[64] m_szRagdollDamageWeaponName; // 0x1d20
    bool m_bRagdollDamageHeadshot; // 0x1d60
    Vector m_vRagdollServerOrigin; // 0x1d64
    GameTime_t m_lastLandTime; // 0x23e0
    bool m_bOnGroundLastTick; // 0x23e4
    CHandle<T> m_hHudModelArms; // 0x2400
    QAngle m_qDeathEyeAngles; // 0x2404
    bool m_bSkipOneHeadConstraintUpdate; // 0x2410
    bool m_bLeftHanded; // 0x2411
    GameTime_t m_fSwitchedHandednessTime; // 0x2414
    float m_flViewmodelOffsetX; // 0x2418
    float m_flViewmodelOffsetY; // 0x241c
    float m_flViewmodelOffsetZ; // 0x2420
    float m_flViewmodelFOV; // 0x2424
    uint32[5] m_vecPlayerPatchEconIndices; // 0x2428
    Color m_GunGameImmunityColor; // 0x2460
    CUtlVector<T> m_vecBulletHitModels; // 0x24b0
    bool m_bIsWalking; // 0x24c8
    QAngle m_thirdPersonHeading; // 0x24d0
    float m_flSlopeDropOffset; // 0x2560
    float m_flSlopeDropHeight; // 0x25d8
    Vector m_vHeadConstraintOffset; // 0x2650
    EntitySpottedState_t m_entitySpottedState; // 0x26e0
    bool m_bIsScoped; // 0x26f8
    bool m_bResumeZoom; // 0x26f9
    bool m_bIsDefusing; // 0x26fa
    bool m_bIsGrabbingHostage; // 0x26fb
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x26fc
    GameTime_t m_flEmitSoundTime; // 0x2700
    bool m_bInNoDefuseArea; // 0x2704
    int32_t m_nWhichBombZone; // 0x2708
    int32_t m_iShotsFired; // 0x270c
    float m_flFlinchStack; // 0x2710
    float m_flVelocityModifier; // 0x2714
    float m_flHitHeading; // 0x2718
    int32_t m_nHitBodyPart; // 0x271c
    bool m_bWaitForNoAttack; // 0x2720
    float m_ignoreLadderJumpTime; // 0x2724
    bool m_bKilledByHeadshot; // 0x2729
    int32_t m_ArmorValue; // 0x272c
    uint16_t m_unCurrentEquipmentValue; // 0x2730
    uint16_t m_unRoundStartEquipmentValue; // 0x2732
    uint16_t m_unFreezetimeEndEquipmentValue; // 0x2734
    CEntityIndex m_nLastKillerIndex; // 0x2738
    bool m_bOldIsScoped; // 0x273c
    bool m_bHasDeathInfo; // 0x273d
    float m_flDeathInfoTime; // 0x2740
    Vector m_vecDeathInfoOrigin; // 0x2744
    GameTime_t m_grenadeParameterStashTime; // 0x2754
    bool m_bGrenadeParametersStashed; // 0x2758
    QAngle m_angStashedShootAngles; // 0x275c
    Vector m_vecStashedGrenadeThrowPosition; // 0x2768
    Vector m_vecStashedVelocity; // 0x2774
    QAngle[2] m_angShootAngleHistory; // 0x2780
    Vector[2] m_vecThrowPositionHistory; // 0x2798
    Vector[2] m_vecVelocityHistory; // 0x27b0
    C_UtlVectorEmbeddedNetworkVar< PredictedDamageTag_t > m_PredictedDamageTags; // 0x27c8
    GameTick_t m_nPrevHighestReceivedDamageTagTick; // 0x2830
    int32_t m_nHighestAppliedDamageTagTick; // 0x2834
    bool m_bShouldAutobuyDMWeapons; // 0x3d6c
    GameTime_t m_fImmuneToGunGameDamageTime; // 0x3d70
    bool m_bGunGameImmunity; // 0x3d74
    GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x3d78
    float m_fMolotovDamageTime; // 0x3d7c
    Vector m_vecLastAliveLocalVelocity; // 0x3d84
    float32[4] m_fRenderingClipPlane; // 0x3d90
    int32_t m_nLastClipPlaneSetupFrame; // 0x3da0
    Vector m_vecLastClipCameraPos; // 0x3da4
    Vector m_vecLastClipCameraForward; // 0x3db0
    bool m_bClipHitStaticWorld; // 0x3dbc
    bool m_bCachedPlaneIsValid; // 0x3dbd
    C_CSWeaponBase* m_pClippingWeapon; // 0x3dc0
    ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x3dc8
    QAngle m_angEyeAngles; // 0x3dd0
    GameTime_t[4] m_arrOldEyeAnglesTimes; // 0x3e60
    QAngle[4] m_arrOldEyeAngles; // 0x3e70
    QAngle m_angEyeAnglesVelocity; // 0x3ea0
    CEntityIndex m_iIDEntIndex; // 0x3eac
    CountdownTimer m_delayTargetIDTimer; // 0x3eb0
    CEntityIndex m_iTargetItemEntIdx; // 0x3ec8
    CEntityIndex m_iOldIDEntIndex; // 0x3ecc
    CountdownTimer m_holdTargetIDTimer; // 0x3ed0
};

// C_CSGO_TeamIntroTerroristPosition (size: 0x13a8)
struct C_CSGO_TeamIntroTerroristPosition {
};

// CPulseCell_WaitForCursorsWithTagBase (size: 0x98)
struct CPulseCell_WaitForCursorsWithTagBase {
    int32_t m_nCursorsAllowedToWait; // 0x48
    CPulse_ResumePoint m_WaitComplete; // 0x50
};

// C_Hostage (size: 0x14a8)
struct C_Hostage {
    EntitySpottedState_t m_entitySpottedState; // 0x13d8
    CHandle<T> m_leader; // 0x13f0
    CountdownTimer m_reuseTimer; // 0x13f8
    Vector m_vel; // 0x1410
    bool m_isRescued; // 0x141c
    bool m_jumpedThisFrame; // 0x141d
    int32_t m_nHostageState; // 0x1420
    bool m_bHandsHaveBeenCut; // 0x1424
    CHandle<T> m_hHostageGrabber; // 0x1428
    GameTime_t m_fLastGrabTime; // 0x142c
    Vector m_vecGrabbedPos; // 0x1430
    GameTime_t m_flRescueStartTime; // 0x143c
    GameTime_t m_flGrabSuccessTime; // 0x1440
    GameTime_t m_flDropStartTime; // 0x1444
    GameTime_t m_flDeadOrRescuedTime; // 0x1448
    CountdownTimer m_blinkTimer; // 0x1450
    Vector m_lookAt; // 0x1468
    CountdownTimer m_lookAroundTimer; // 0x1478
    bool m_isInit; // 0x1490
    AttachmentHandle_t m_eyeAttachment; // 0x1491
    AttachmentHandle_t m_chestAttachment; // 0x1492
    CBasePlayerController* m_pPredictionOwner; // 0x1498
    GameTime_t m_fNewestAlphaThinkTime; // 0x14a0
};

// C_fogplayerparams_t (size: 0x40)
struct C_fogplayerparams_t {
    CHandle<T> m_hCtrl; // 0x8
    float m_flTransitionTime; // 0xc
    Color m_OldColor; // 0x10
    float m_flOldStart; // 0x14
    float m_flOldEnd; // 0x18
    float m_flOldMaxDensity; // 0x1c
    float m_flOldHDRColorScale; // 0x20
    float m_flOldFarZ; // 0x24
    Color m_NewColor; // 0x28
    float m_flNewStart; // 0x2c
    float m_flNewEnd; // 0x30
    float m_flNewMaxDensity; // 0x34
    float m_flNewHDRColorScale; // 0x38
    float m_flNewFarZ; // 0x3c
};

// CGameSceneNode (size: 0x150)
struct CGameSceneNode {
    CTransformWS m_nodeToWorld; // 0x10
    CEntityInstance* m_pOwner; // 0x30
    CGameSceneNode* m_pParent; // 0x38
    CGameSceneNode* m_pChild; // 0x40
    CGameSceneNode* m_pNextSibling; // 0x48
    CGameSceneNodeHandle m_hParent; // 0x78
    CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88
    QAngle m_angRotation; // 0xc0
    float m_flScale; // 0xcc
    VectorWS m_vecAbsOrigin; // 0xd0
    QAngle m_angAbsRotation; // 0xdc
    float m_flAbsScale; // 0xe8
    Vector m_vecWrappedLocalOrigin; // 0xec
    QAngle m_angWrappedLocalRotation; // 0xf8
    float m_flWrappedScale; // 0x104
    int16 m_nParentAttachmentOrBone; // 0x108
    bool m_bDebugAbsOriginChanges; // 0x10a
    bool m_bDormant; // 0x10b
    bool m_bForceParentToBeNetworked; // 0x10c
    bitfield:1 m_bDirtyHierarchy; // 0x0
    bitfield:1 m_bDirtyBoneMergeInfo; // 0x0
    bitfield:1 m_bNetworkedPositionChanged; // 0x0
    bitfield:1 m_bNetworkedAnglesChanged; // 0x0
    bitfield:1 m_bNetworkedScaleChanged; // 0x0
    bitfield:1 m_bWillBeCallingPostDataUpdate; // 0x0
    bitfield:1 m_bBoneMergeFlex; // 0x0
    bitfield:2 m_nLatchAbsOrigin; // 0x0
    bitfield:1 m_bDirtyBoneMergeBoneToRoot; // 0x0
    uint8_t m_nHierarchicalDepth; // 0x10f
    uint8_t m_nHierarchyType; // 0x110
    uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x111
    CUtlString m_name; // 0x114
    CUtlString m_hierarchyAttachName; // 0x128
    float m_flZOffset; // 0x12c
    float m_flClientLocalScale; // 0x130
    Vector m_vRenderOrigin; // 0x134
};

// CPlayer_ObserverServices (size: 0x60)
struct CPlayer_ObserverServices {
    uint8_t m_iObserverMode; // 0x48
    CHandle<T> m_hObserverTarget; // 0x4c
    ObserverMode_t m_iObserverLastMode; // 0x50
    bool m_bForcedObserverMode; // 0x54
    float m_flObserverChaseDistance; // 0x58
    GameTime_t m_flObserverChaseDistanceCalcTime; // 0x5c
};

// C_SoundAreaEntityBase (size: 0x630)
struct C_SoundAreaEntityBase {
    bool m_bDisabled; // 0x608
    bool m_bWasEnabled; // 0x610
    CUtlSymbolLarge m_iszSoundAreaType; // 0x618
    Vector m_vPos; // 0x620
};

// C_PlayerVisibility (size: 0x638)
struct C_PlayerVisibility {
    float m_flVisibilityStrength; // 0x608
    float m_flFogDistanceMultiplier; // 0x60c
    float m_flFogMaxDensityMultiplier; // 0x610
    float m_flFadeTime; // 0x614
    bool m_bStartDisabled; // 0x618
    bool m_bIsEnabled; // 0x619
};

// CAttributeManager::cached_attribute_float_t (size: 0x18)
struct CAttributeManager_cached_attribute_float_t {
    float flIn; // 0x0
    CUtlSymbolLarge iAttribHook; // 0x8
    float flOut; // 0x10
};

// C_BasePlayerWeapon (size: 0x18f8)
struct C_BasePlayerWeapon {
    GameTick_t m_nNextPrimaryAttackTick; // 0x18c0
    float m_flNextPrimaryAttackTickRatio; // 0x18c4
    GameTick_t m_nNextSecondaryAttackTick; // 0x18c8
    float m_flNextSecondaryAttackTickRatio; // 0x18cc
    int32_t m_iClip1; // 0x18d0
    int32_t m_iClip2; // 0x18d4
    int32[2] m_pReserveAmmo; // 0x18d8
};

// CRagdollManager (size: 0x610)
struct CRagdollManager {
    int8 m_iCurrentMaxRagdollCount; // 0x608
};

// C_HEGrenade (size: 0x2000)
struct C_HEGrenade {
};

// C_EnvSky (size: 0xee8)
struct C_EnvSky {
    CStrongHandle<T> m_hSkyMaterial; // 0xe88
    CStrongHandle<T> m_hSkyMaterialLightingOnly; // 0xe90
    bool m_bStartDisabled; // 0xe98
    Color m_vTintColor; // 0xe99
    Color m_vTintColorLightingOnly; // 0xe9d
    float m_flBrightnessScale; // 0xea4
    int32_t m_nFogType; // 0xea8
    float m_flFogMinStart; // 0xeac
    float m_flFogMinEnd; // 0xeb0
    float m_flFogMaxStart; // 0xeb4
    float m_flFogMaxEnd; // 0xeb8
    bool m_bEnabled; // 0xebc
};

// CPulse_InvokeBinding (size: 0xb0)
struct CPulse_InvokeBinding {
    PulseRegisterMap_t m_RegisterMap; // 0x0
    PulseSymbol_t m_FuncName; // 0x30
    PulseRuntimeCellIndex_t m_nCellIndex; // 0x40
    PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x44
    int32_t m_nSrcInstruction; // 0x48
};

// C_EnvWindController (size: 0x728)
struct C_EnvWindController {
    C_EnvWindShared m_EnvWindShared; // 0x608
    float m_fDirectionVariation; // 0x700
    float m_fSpeedVariation; // 0x704
    float m_fTurbulence; // 0x708
    float m_fVolumeHalfExtentXY; // 0x70c
    float m_fVolumeHalfExtentZ; // 0x710
    int32_t m_nVolumeResolutionXY; // 0x714
    int32_t m_nVolumeResolutionZ; // 0x718
    int32_t m_nClipmapLevels; // 0x71c
    bool m_bIsMaster; // 0x720
    bool m_bFirstTime; // 0x721
};

// C_GameRules (size: 0x40)
struct C_GameRules {
    CNetworkVarChainer _m_pChainEntity; // 0x8
    int32_t m_nTotalPausedTicks; // 0x30
    int32_t m_nPauseStartTick; // 0x34
    bool m_bGamePaused; // 0x38
};

// C_WeaponMAC10 (size: 0x1f70)
struct C_WeaponMAC10 {
};

// C_CSGO_MapPreviewCameraPath (size: 0x690)
struct C_CSGO_MapPreviewCameraPath {
    float m_flZFar; // 0x608
    float m_flZNear; // 0x60c
    bool m_bLoop; // 0x610
    bool m_bVerticalFOV; // 0x611
    bool m_bConstantSpeed; // 0x612
    float m_flDuration; // 0x614
    float m_flPathLength; // 0x658
    float m_flPathDuration; // 0x65c
    bool m_bDofEnabled; // 0x674
    float m_flDofNearBlurry; // 0x678
    float m_flDofNearCrisp; // 0x67c
    float m_flDofFarCrisp; // 0x680
    float m_flDofFarBlurry; // 0x684
    float m_flDofTiltToGround; // 0x688
};

// C_PointWorldText (size: 0x1160)
struct C_PointWorldText {
    bool m_bForceRecreateNextUpdate; // 0xe90
    int32_t m_nTextWidthPx; // 0xea8
    int32_t m_nTextHeightPx; // 0xeac
    char[512] m_messageText; // 0xeb0
    char[64] m_FontName; // 0x10b0
    char[64] m_BackgroundMaterialName; // 0x10f0
    bool m_bEnabled; // 0x1130
    bool m_bFullbright; // 0x1131
    float m_flWorldUnitsPerPx; // 0x1134
    float m_flFontSize; // 0x1138
    float m_flDepthOffset; // 0x113c
    bool m_bDrawBackground; // 0x1140
    float m_flBackgroundBorderWidth; // 0x1144
    float m_flBackgroundBorderHeight; // 0x1148
    float m_flBackgroundWorldToUV; // 0x114c
    Color m_Color; // 0x1150
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x1154
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x1158
    PointWorldTextReorientMode_t m_nReorientMode; // 0x115c
};

// C_RopeKeyframe (size: 0x11f8)
struct C_RopeKeyframe {
    CBitVec< 10 > m_LinksTouchingSomething; // 0xe90
    int32_t m_nLinksTouchingSomething; // 0xe94
    bool m_bApplyWind; // 0xe98
    int32_t m_fPrevLockedPoints; // 0xe9c
    int32_t m_iForcePointMoveCounter; // 0xea0
    bool[2] m_bPrevEndPointPos; // 0xea4
    Vector[2] m_vPrevEndPointPos; // 0xea8
    float m_flCurScroll; // 0xec0
    float m_flScrollSpeed; // 0xec4
    uint16_t m_RopeFlags; // 0xec8
    CStrongHandle<T> m_iRopeMaterialModelIndex; // 0xed0
    uint8_t m_nSegments; // 0x1148
    CHandle<T> m_hStartPoint; // 0x114c
    CHandle<T> m_hEndPoint; // 0x1150
    AttachmentHandle_t m_iStartAttachment; // 0x1154
    AttachmentHandle_t m_iEndAttachment; // 0x1155
    uint8_t m_Subdiv; // 0x1156
    int16 m_RopeLength; // 0x1158
    int16 m_Slack; // 0x115a
    float m_TextureScale; // 0x115c
    uint8_t m_fLockedPoints; // 0x1160
    uint8_t m_nChangeCount; // 0x1161
    float m_Width; // 0x1164
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0x1168
    CStrongHandle<T> m_hMaterial; // 0x1178
    int32_t m_TextureHeight; // 0x1180
    Vector m_vecImpulse; // 0x1184
    Vector m_vecPreviousImpulse; // 0x1190
    float m_flCurrentGustTimer; // 0x119c
    float m_flCurrentGustLifetime; // 0x11a0
    float m_flTimeToNextGust; // 0x11a4
    Vector m_vWindDir; // 0x11a8
    Vector m_vColorMod; // 0x11b4
    Vector[2] m_vCachedEndPointAttachmentPos; // 0x11c0
    QAngle[2] m_vCachedEndPointAttachmentAngle; // 0x11d8
    bool m_bConstrainBetweenEndpoints; // 0x11f0
    bitfield:1 m_bEndPointAttachmentPositionsDirty; // 0x0
    bitfield:1 m_bEndPointAttachmentAnglesDirty; // 0x0
    bitfield:1 m_bNewDataThisFrame; // 0x0
    bitfield:1 m_bPhysicsInitted; // 0x0
};

// C_BaseToggle (size: 0xe88)
struct C_BaseToggle {
};

// C_EnvCubemapBox (size: 0x6f0)
struct C_EnvCubemapBox {
};

// C_RopeKeyframe::CPhysicsDelegate (size: 0x10)
struct C_RopeKeyframe_CPhysicsDelegate {
    C_RopeKeyframe* m_pKeyframe; // 0x8
};

// CInfoDynamicShadowHint (size: 0x620)
struct CInfoDynamicShadowHint {
    bool m_bDisabled; // 0x608
    float m_flRange; // 0x60c
    int32_t m_nImportance; // 0x610
    int32_t m_nLightChoice; // 0x614
    CHandle<T> m_hLight; // 0x618
};

// CPathNode (size: 0x660)
struct CPathNode {
    Vector m_vInTangentLocal; // 0x608
    Vector m_vOutTangentLocal; // 0x614
    CUtlString m_strParentPathUniqueID; // 0x620
    CUtlString m_strPathNodeParameter; // 0x628
    CTransform m_xWSPrevParent; // 0x630
    CHandle<T> m_hPath; // 0x650
};

// C_FuncMoveLinear (size: 0xe88)
struct C_FuncMoveLinear {
};

// CServerOnlyModelEntity (size: 0xe88)
struct CServerOnlyModelEntity {
};

// C_CSGO_TeamSelectCamera (size: 0x698)
struct C_CSGO_TeamSelectCamera {
};

// CPulseCell_IntervalTimer (size: 0xd8)
struct CPulseCell_IntervalTimer {
    CPulse_ResumePoint m_Completed; // 0x48
    SignatureOutflow_Continue m_OnInterval; // 0x90
};

// C_WeaponXM1014 (size: 0x1f40)
struct C_WeaponXM1014 {
};

// C_WorldModelGloves (size: 0x1170)
struct C_WorldModelGloves {
};

// C_PhysicsPropMultiplayer (size: 0x12e0)
struct C_PhysicsPropMultiplayer {
};

// C_SoundEventOBBEntity (size: 0x6e0)
struct C_SoundEventOBBEntity {
    Vector m_vMins; // 0x6b8
    Vector m_vMaxs; // 0x6c4
};

// CPulseTestScriptLib (size: 0x1)
struct CPulseTestScriptLib {
};

// CPulseCell_BaseLerp (size: 0x90)
struct CPulseCell_BaseLerp {
    CPulse_ResumePoint m_WakeResume; // 0x48
};

// C_WeaponAug (size: 0x1f70)
struct C_WeaponAug {
};

// C_BasePropDoor (size: 0x13e0)
struct C_BasePropDoor {
    DoorState_t m_eDoorState; // 0x13b0
    bool m_modelChanged; // 0x13b4
    bool m_bLocked; // 0x13b5
    bool m_bNoNPCs; // 0x13b6
    Vector m_closedPosition; // 0x13b8
    QAngle m_closedAngles; // 0x13c4
    CHandle<T> m_hMaster; // 0x13d0
    Vector m_vWhereToSetLightingOrigin; // 0x13d4
};

// CChoreoInfoTarget (size: 0x608)
struct CChoreoInfoTarget {
};

// CNetworkedSequenceOperation (size: 0x28)
struct CNetworkedSequenceOperation {
    HSequence m_hSequence; // 0x8
    float m_flPrevCycle; // 0xc
    float m_flCycle; // 0x10
    CNetworkedQuantizedFloat m_flWeight; // 0x14
    bool m_bSequenceChangeNetworked; // 0x1c
    bool m_bDiscontinuity; // 0x1d
    float m_flPrevCycleFromDiscontinuity; // 0x20
    float m_flPrevCycleForAnimEventDetection; // 0x24
};

// C_Item_Healthshot (size: 0x1f50)
struct C_Item_Healthshot {
};

// CEntityInstance (size: 0x38)
struct CEntityInstance {
    CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
    CEntityIdentity* m_pEntity; // 0x10
    CScriptComponent* m_CScriptComponent; // 0x30
};

// C_BaseModelEntity (size: 0xe88)
struct C_BaseModelEntity {
    CRenderComponent* m_CRenderComponent; // 0xaf0
    CHitboxComponent m_CHitboxComponent; // 0xaf8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0xb10
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0xb14
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0xb18
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0xb1c
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0xb20
    int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0xb24
    int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0xb28
    int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0xb2c
    int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0xb30
    int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0xb34
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0xb38
    bool m_bInitModelEffects; // 0xb58
    bool m_bDoingModelEffects; // 0xb59
    bool m_bIsStaticProp; // 0xb5a
    int32_t m_iOldHealth; // 0xb5c
    RenderMode_t m_nRenderMode; // 0xb60
    RenderFx_t m_nRenderFX; // 0xb61
    bool m_bAllowFadeInView; // 0xb62
    Color m_clrRender; // 0xb80
    C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0xb88
    bool m_bRenderToCubemaps; // 0xc08
    bool m_bNoInterpolate; // 0xc09
    CCollisionProperty m_Collision; // 0xc10
    CGlowProperty m_Glow; // 0xcc0
    float m_flGlowBackfaceMult; // 0xd18
    float m_fadeMinDist; // 0xd1c
    float m_fadeMaxDist; // 0xd20
    float m_flFadeScale; // 0xd24
    float m_flShadowStrength; // 0xd28
    uint8_t m_nObjectCulling; // 0xd2c
    DecalRtEncoding_t m_nRequiredDecalRtEncoding; // 0xd2d
    CNetworkViewOffsetVector m_vecViewOffset; // 0xd58
    CClientAlphaProperty* m_pClientAlphaProperty; // 0xe38
    Color m_ClientOverrideTint; // 0xe40
    bool m_bUseClientOverrideTint; // 0xe44
    uint32[1] m_bvDisabledHitGroups; // 0xe80
};

// CCSPlayer_BulletServices (size: 0xa8)
struct CCSPlayer_BulletServices {
    int32_t m_totalHitsOnServer; // 0x48
};

// C_SoundOpvarSetAutoRoomEntity (size: 0x628)
struct C_SoundOpvarSetAutoRoomEntity {
};

// C_EnvCombinedLightProbeVolume (size: 0x1750)
struct C_EnvCombinedLightProbeVolume {
    Color m_Entity_Color; // 0x1680
    float m_Entity_flBrightness; // 0x1684
    CStrongHandle<T> m_Entity_hCubemapTexture; // 0x1688
    bool m_Entity_bCustomCubemapTexture; // 0x1690
    CStrongHandle<T> m_Entity_hLightProbeTexture_AmbientCube; // 0x1698
    CStrongHandle<T> m_Entity_hLightProbeTexture_SDF; // 0x16a0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_DC; // 0x16a8
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_R; // 0x16b0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_G; // 0x16b8
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_B; // 0x16c0
    CStrongHandle<T> m_Entity_hLightProbeDirectLightIndicesTexture; // 0x16c8
    CStrongHandle<T> m_Entity_hLightProbeDirectLightScalarsTexture; // 0x16d0
    CStrongHandle<T> m_Entity_hLightProbeDirectLightShadowsTexture; // 0x16d8
    Vector m_Entity_vBoxMins; // 0x16e0
    Vector m_Entity_vBoxMaxs; // 0x16ec
    bool m_Entity_bMoveable; // 0x16f8
    int32_t m_Entity_nHandshake; // 0x16fc
    int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x1700
    int32_t m_Entity_nPriority; // 0x1704
    bool m_Entity_bStartDisabled; // 0x1708
    float m_Entity_flEdgeFadeDist; // 0x170c
    Vector m_Entity_vEdgeFadeDists; // 0x1710
    int32_t m_Entity_nLightProbeSizeX; // 0x171c
    int32_t m_Entity_nLightProbeSizeY; // 0x1720
    int32_t m_Entity_nLightProbeSizeZ; // 0x1724
    int32_t m_Entity_nLightProbeAtlasX; // 0x1728
    int32_t m_Entity_nLightProbeAtlasY; // 0x172c
    int32_t m_Entity_nLightProbeAtlasZ; // 0x1730
    bool m_Entity_bEnabled; // 0x1749
};

// C_MultiplayRules (size: 0x40)
struct C_MultiplayRules {
};

// CPlayer_AutoaimServices (size: 0x48)
struct CPlayer_AutoaimServices {
};

// C_LightDirectionalEntity (size: 0xe90)
struct C_LightDirectionalEntity {
};

// C_BaseEntity (size: 0x608)
struct C_BaseEntity {
    CBodyComponent* m_CBodyComponent; // 0x38
    CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40
    GameTick_t m_nLastThinkTick; // 0x330
    CGameSceneNode* m_pGameSceneNode; // 0x338
    CRenderComponent* m_pRenderComponent; // 0x340
    CCollisionProperty* m_pCollision; // 0x348
    int32_t m_iMaxHealth; // 0x350
    int32_t m_iHealth; // 0x354
    float m_flDamageAccumulator; // 0x358
    uint8_t m_lifeState; // 0x35c
    bool m_bTakesDamage; // 0x35d
    TakeDamageFlags_t m_nTakeDamageFlags; // 0x360
    EntityPlatformTypes_t m_nPlatformType; // 0x368
    uint8_t m_ubInterpolationFrame; // 0x369
    CHandle<T> m_hSceneObjectController; // 0x36c
    int32_t m_nNoInterpolationTick; // 0x370
    int32_t m_nVisibilityNoInterpolationTick; // 0x374
    float m_flProxyRandomValue; // 0x378
    int32_t m_iEFlags; // 0x37c
    uint8_t m_nWaterType; // 0x380
    bool m_bInterpolateEvenWithNoModel; // 0x381
    bool m_bPredictionEligible; // 0x382
    bool m_bApplyLayerMatchIDToModel; // 0x383
    CUtlString m_tokLayerMatchID; // 0x384
    CUtlString m_nSubclassID; // 0x388
    int32_t m_nSimulationTick; // 0x398
    int32_t m_iCurrentThinkContext; // 0x39c
    CUtlVector<T> m_aThinkFunctions; // 0x3a0
    bool m_bDisabledContextThinks; // 0x3b8
    float m_flAnimTime; // 0x3bc
    float m_flSimulationTime; // 0x3c0
    uint8_t m_nSceneObjectOverrideFlags; // 0x3c4
    bool m_bHasSuccessfullyInterpolated; // 0x3c5
    bool m_bHasAddedVarsToInterpolation; // 0x3c6
    bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3c7
    int32[2] m_nInterpolationLatchDirtyFlags; // 0x3c8
    uint16[11] m_ListEntry; // 0x3d0
    GameTime_t m_flCreateTime; // 0x3e8
    float m_flSpeed; // 0x3ec
    uint16_t m_EntClientFlags; // 0x3f0
    bool m_bClientSideRagdoll; // 0x3f2
    uint8_t m_iTeamNum; // 0x3f3
    uint32_t m_spawnflags; // 0x3f4
    GameTick_t m_nNextThinkTick; // 0x3f8
    uint32_t m_fFlags; // 0x400
    Vector m_vecAbsVelocity; // 0x404
    CNetworkVelocityVector m_vecServerVelocity; // 0x410
    CNetworkVelocityVector m_vecVelocity; // 0x438
    Vector m_vecBaseVelocity; // 0x518
    CHandle<T> m_hEffectEntity; // 0x524
    CHandle<T> m_hOwnerEntity; // 0x528
    MoveCollide_t m_MoveCollide; // 0x52c
    MoveType_t m_MoveType; // 0x52d
    MoveType_t m_nActualMoveType; // 0x52e
    float m_flWaterLevel; // 0x530
    uint32_t m_fEffects; // 0x534
    CHandle<T> m_hGroundEntity; // 0x538
    int32_t m_nGroundBodyIndex; // 0x53c
    float m_flFriction; // 0x540
    float m_flElasticity; // 0x544
    float m_flGravityScale; // 0x548
    float m_flTimeScale; // 0x54c
    bool m_bAnimatedEveryTick; // 0x550
    bool m_bGravityDisabled; // 0x551
    GameTime_t m_flNavIgnoreUntilTime; // 0x554
    uint16_t m_hThink; // 0x558
    uint8_t m_fBBoxVisFlags; // 0x568
    float m_flActualGravityScale; // 0x56c
    bool m_bGravityActuallyDisabled; // 0x570
    bool m_bPredictable; // 0x571
    bool m_bRenderWithViewModels; // 0x572
    int32_t m_nFirstPredictableCommand; // 0x574
    int32_t m_nLastPredictableCommand; // 0x578
    CHandle<T> m_hOldMoveParent; // 0x57c
    CParticleProperty m_Particles; // 0x580
    QAngle m_vecAngVelocity; // 0x5b0
    int32_t m_DataChangeEventRef; // 0x5bc
    CUtlVector<T> m_dependencies; // 0x5c0
    int32_t m_nCreationTick; // 0x5d8
    bool m_bAnimTimeChanged; // 0x5e9
    bool m_bSimulationTimeChanged; // 0x5ea
    CUtlString m_sUniqueHammerID; // 0x5f8
    BloodType m_nBloodType; // 0x600
};

// ActiveModelConfig_t (size: 0x70)
struct ActiveModelConfig_t {
    ModelConfigHandle_t m_Handle; // 0x30
    CUtlSymbolLarge m_Name; // 0x38
    CHandle<T> m_AssociatedEntities; // 0x40
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x58
};

// C_WeaponSSG08 (size: 0x1f70)
struct C_WeaponSSG08 {
};

// CPulseCell_Value_Curve (size: 0x88)
struct CPulseCell_Value_Curve {
    CPiecewiseCurve m_Curve; // 0x48
};

// C_BasePlayerPawn (size: 0x15b0)
struct C_BasePlayerPawn {
    CPlayer_WeaponServices* m_pWeaponServices; // 0x13d8
    CPlayer_ItemServices* m_pItemServices; // 0x13e0
    CPlayer_AutoaimServices* m_pAutoaimServices; // 0x13e8
    CPlayer_ObserverServices* m_pObserverServices; // 0x13f0
    CPlayer_WaterServices* m_pWaterServices; // 0x13f8
    CPlayer_UseServices* m_pUseServices; // 0x1400
    CPlayer_FlashlightServices* m_pFlashlightServices; // 0x1408
    CPlayer_CameraServices* m_pCameraServices; // 0x1410
    CPlayer_MovementServices* m_pMovementServices; // 0x1418
    C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t > m_ServerViewAngleChanges; // 0x1428
    QAngle v_angle; // 0x1490
    QAngle v_anglePrevious; // 0x149c
    uint32_t m_iHideHUD; // 0x14a8
    sky3dparams_t m_skybox3d; // 0x14b0
    GameTime_t m_flDeathTime; // 0x1540
    Vector m_vecPredictionError; // 0x1544
    GameTime_t m_flPredictionErrorTime; // 0x1550
    Vector m_vecLastCameraSetupLocalOrigin; // 0x1570
    GameTime_t m_flLastCameraSetupTime; // 0x157c
    float m_flFOVSensitivityAdjust; // 0x1580
    float m_flMouseSensitivity; // 0x1584
    Vector m_vOldOrigin; // 0x1588
    float m_flOldSimulationTime; // 0x1594
    int32_t m_nLastExecutedCommandNumber; // 0x1598
    int32_t m_nLastExecutedCommandTick; // 0x159c
    CHandle<T> m_hController; // 0x15a0
    CHandle<T> m_hDefaultController; // 0x15a4
    bool m_bIsSwappingToPredictableController; // 0x15a8
};

// C_Chicken (size: 0x18a0)
struct C_Chicken {
    CHandle<T> m_hHolidayHatAddon; // 0x13a8
    bool m_jumpedThisFrame; // 0x13ac
    CHandle<T> m_leader; // 0x13b0
    C_AttributeContainer m_AttributeManager; // 0x13b8
    bool m_bAttributesInitialized; // 0x1888
    ParticleIndex_t m_hWaterWakeParticles; // 0x188c
    bool m_bIsPreviewModel; // 0x1890
};

// C_SoundOpvarSetAABBEntity (size: 0x628)
struct C_SoundOpvarSetAABBEntity {
};

// C_WeaponBizon (size: 0x1f70)
struct C_WeaponBizon {
};

// C_StattrakModule (size: 0x1178)
struct C_StattrakModule {
    bool m_bKnife; // 0x1170
};

// CCSObserver_CameraServices (size: 0x2a8)
struct CCSObserver_CameraServices {
};

// CTakeDamageInfoAPI (size: 0x8)
struct CTakeDamageInfoAPI {
};

// CEnvSoundscapeProxy (size: 0x6a0)
struct CEnvSoundscapeProxy {
    CUtlSymbolLarge m_MainSoundscapeName; // 0x698
};

// C_SoundEventEntity (size: 0x6b8)
struct C_SoundEventEntity {
    bool m_bStartOnSpawn; // 0x608
    bool m_bToLocalPlayer; // 0x609
    bool m_bStopOnNew; // 0x60a
    bool m_bSaveRestore; // 0x60b
    bool m_bSavedIsPlaying; // 0x60c
    float m_flSavedElapsedTime; // 0x610
    CUtlSymbolLarge m_iszSourceEntityName; // 0x618
    CUtlSymbolLarge m_iszAttachmentName; // 0x620
    CEntityOutputTemplate< uint64, uint64 > m_onGUIDChanged; // 0x628
    CEntityIOOutput m_onSoundFinished; // 0x648
    float m_flClientCullRadius; // 0x660
    CUtlSymbolLarge m_iszSoundName; // 0x690
    CEntityHandle m_hSource; // 0x6ac
    int32_t m_nEntityIndexSelection; // 0x6b0
    bitfield:1 m_bClientSideOnly; // 0x0
};

// CPulseCell_Inflow_EventHandler (size: 0x90)
struct CPulseCell_Inflow_EventHandler {
    PulseSymbol_t m_EventName; // 0x80
};

// C_LightOrthoEntity (size: 0xe90)
struct C_LightOrthoEntity {
};

// CPulseCell_BaseFlow (size: 0x48)
struct CPulseCell_BaseFlow {
};

// CBombTarget (size: 0xf60)
struct CBombTarget {
    bool m_bBombPlantedHere; // 0xf58
};

// C_Knife (size: 0x1f50)
struct C_Knife {
    bool m_bFirstAttack; // 0x1f40
};

// C_CSGO_TerroristWingmanIntroCamera (size: 0x698)
struct C_CSGO_TerroristWingmanIntroCamera {
};

// CSkeletonInstance (size: 0x4d0)
struct CSkeletonInstance {
    CModelState m_modelState; // 0x160
    bool m_bIsAnimationEnabled; // 0x430
    bool m_bUseParentRenderBounds; // 0x431
    bool m_bDisableSolidCollisionsForHierarchy; // 0x432
    bitfield:1 m_bDirtyMotionType; // 0x0
    bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0
    CUtlString m_materialGroup; // 0x434
    uint8_t m_nHitboxSet; // 0x438
};

// CEntityComponent (size: 0x8)
struct CEntityComponent {
};

// C_ItemDogtags (size: 0x19c8)
struct C_ItemDogtags {
    CHandle<T> m_OwningPlayer; // 0x19c0
    CHandle<T> m_KillingPlayer; // 0x19c4
};

// C_LateUpdatedAnimating (size: 0x1200)
struct C_LateUpdatedAnimating {
};

// CPulseCell_Outflow_CycleShuffled::InstanceState_t (size: 0x28)
struct CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    CUtlVector<T> m_Shuffle; // 0x0
    int32_t m_nNextShuffle; // 0x20
};

// CPulseCell_BaseLerp::CursorState_t (size: 0x8)
struct CPulseCell_BaseLerp_CursorState_t {
    GameTime_t m_StartTime; // 0x0
    GameTime_t m_EndTime; // 0x4
};

// CPulseAnimFuncs (size: 0x8)
struct CPulseAnimFuncs {
};

// C_BaseClientUIEntity (size: 0xeb8)
struct C_BaseClientUIEntity {
    bool m_bEnabled; // 0xe90
    CUtlSymbolLarge m_DialogXMLName; // 0xe98
    CUtlSymbolLarge m_PanelClassName; // 0xea0
    CUtlSymbolLarge m_PanelID; // 0xea8
};

// CPulseCell_WaitForCursorsWithTagBase::CursorState_t (size: 0x30)
struct CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    PulseSymbol_t m_TagName; // 0x0
};

// CPulseArraylib (size: 0x1)
struct CPulseArraylib {
};

// C_WeaponUSPSilencer (size: 0x1f70)
struct C_WeaponUSPSilencer {
};

// C_MolotovProjectile (size: 0x1460)
struct C_MolotovProjectile {
    bool m_bIsIncGrenade; // 0x1438
};

// C_TriggerLerpObject (size: 0xf58)
struct C_TriggerLerpObject {
};

// CPointTemplateAPI (size: 0x8)
struct CPointTemplateAPI {
};

// C_WeaponRevolver (size: 0x1f70)
struct C_WeaponRevolver {
};

// C_WeaponElite (size: 0x1f70)
struct C_WeaponElite {
};

// C_DynamicPropAlias_cable_dynamic (size: 0x13a0)
struct C_DynamicPropAlias_cable_dynamic {
};

// CBaseProp (size: 0x11a0)
struct CBaseProp {
    bool m_bModelOverrodeBlockLOS; // 0x1168
    int32_t m_iShapeType; // 0x116c
    bool m_bConformToCollisionBounds; // 0x1170
    CTransform m_mPreferredCatchTransform; // 0x1180
};

// CInfoOffscreenPanoramaTexture (size: 0x810)
struct CInfoOffscreenPanoramaTexture {
    bool m_bDisabled; // 0x608
    int32_t m_nResolutionX; // 0x60c
    int32_t m_nResolutionY; // 0x610
    CUtlSymbolLarge m_szPanelType; // 0x618
    CUtlSymbolLarge m_szLayoutFileName; // 0x620
    CUtlSymbolLarge m_RenderAttrName; // 0x628
    CHandle<T> m_TargetEntities; // 0x630
    int32_t m_nTargetChangeCount; // 0x648
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x650
    CUtlSymbolLarge m_szTargetsName; // 0x668
    CUtlVector<T> m_AdditionalTargetEntities; // 0x670
    bool m_bCheckCSSClasses; // 0x7e8
};

// CCSWeaponBaseVData (size: 0x7c0)
struct CCSWeaponBaseVData {
    CSWeaponType m_WeaponType; // 0x440
    CSWeaponCategory m_WeaponCategory; // 0x444
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmSkeleton  m_szAnimSkeleton; // 0x448
    Vector m_vecMuzzlePos0; // 0x528
    Vector m_vecMuzzlePos1; // 0x534
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys m_szTracerParticle; // 0x540
    gear_slot_t m_GearSlot; // 0x620
    int32_t m_GearSlotPosition; // 0x624
    loadout_slot_t m_DefaultLoadoutSlot; // 0x628
    int32_t m_nPrice; // 0x62c
    int32_t m_nKillAward; // 0x630
    int32_t m_nPrimaryReserveAmmoMax; // 0x634
    int32_t m_nSecondaryReserveAmmoMax; // 0x638
    bool m_bMeleeWeapon; // 0x63c
    bool m_bHasBurstMode; // 0x63d
    bool m_bIsRevolver; // 0x63e
    bool m_bCannotShootUnderwater; // 0x63f
    CGlobalSymbol m_szName; // 0x640
    CSWeaponSilencerType m_eSilencerType; // 0x648
    int32_t m_nCrosshairMinDistance; // 0x64c
    int32_t m_nCrosshairDeltaDistance; // 0x650
    bool m_bIsFullAuto; // 0x654
    int32_t m_nNumBullets; // 0x658
    bool m_bReloadsSingleShells; // 0x65c
    CFiringModeFloat m_flCycleTime; // 0x660
    CFiringModeFloat m_flMaxSpeed; // 0x668
    CFiringModeFloat m_flSpread; // 0x670
    CFiringModeFloat m_flInaccuracyCrouch; // 0x678
    CFiringModeFloat m_flInaccuracyStand; // 0x680
    CFiringModeFloat m_flInaccuracyJump; // 0x688
    CFiringModeFloat m_flInaccuracyLand; // 0x690
    CFiringModeFloat m_flInaccuracyLadder; // 0x698
    CFiringModeFloat m_flInaccuracyFire; // 0x6a0
    CFiringModeFloat m_flInaccuracyMove; // 0x6a8
    CFiringModeFloat m_flRecoilAngle; // 0x6b0
    CFiringModeFloat m_flRecoilAngleVariance; // 0x6b8
    CFiringModeFloat m_flRecoilMagnitude; // 0x6c0
    CFiringModeFloat m_flRecoilMagnitudeVariance; // 0x6c8
    CFiringModeInt m_nTracerFrequency; // 0x6d0
    float m_flInaccuracyJumpInitial; // 0x6d8
    float m_flInaccuracyJumpApex; // 0x6dc
    float m_flInaccuracyReload; // 0x6e0
    float m_flDeployDuration; // 0x6e4
    float m_flDisallowAttackAfterReloadStartDuration; // 0x6e8
    int32_t m_nBurstShotCount; // 0x6ec
    bool m_bAllowBurstHolster; // 0x6f0
    int32_t m_nRecoilSeed; // 0x6f4
    int32_t m_nSpreadSeed; // 0x6f8
    float m_flAttackMovespeedFactor; // 0x6fc
    float m_flInaccuracyPitchShift; // 0x700
    float m_flInaccuracyAltSoundThreshold; // 0x704
    CUtlString m_szUseRadioSubtitle; // 0x708
    bool m_bUnzoomsAfterShot; // 0x710
    bool m_bHideViewModelWhenZoomed; // 0x711
    int32_t m_nZoomLevels; // 0x714
    int32_t m_nZoomFOV1; // 0x718
    int32_t m_nZoomFOV2; // 0x71c
    float m_flZoomTime0; // 0x720
    float m_flZoomTime1; // 0x724
    float m_flZoomTime2; // 0x728
    float m_flIronSightPullUpSpeed; // 0x72c
    float m_flIronSightPutDownSpeed; // 0x730
    float m_flIronSightFOV; // 0x734
    float m_flIronSightPivotForward; // 0x738
    float m_flIronSightLooseness; // 0x73c
    int32_t m_nDamage; // 0x740
    float m_flHeadshotMultiplier; // 0x744
    float m_flArmorRatio; // 0x748
    float m_flPenetration; // 0x74c
    float m_flRange; // 0x750
    float m_flRangeModifier; // 0x754
    float m_flFlinchVelocityModifierLarge; // 0x758
    float m_flFlinchVelocityModifierSmall; // 0x75c
    float m_flRecoveryTimeCrouch; // 0x760
    float m_flRecoveryTimeStand; // 0x764
    float m_flRecoveryTimeCrouchFinal; // 0x768
    float m_flRecoveryTimeStandFinal; // 0x76c
    int32_t m_nRecoveryTransitionStartBullet; // 0x770
    int32_t m_nRecoveryTransitionEndBullet; // 0x774
    float m_flThrowVelocity; // 0x778
    Vector m_vSmokeColor; // 0x77c
    CGlobalSymbol m_szAnimClass; // 0x788
};

// CAttributeManager (size: 0x50)
struct CAttributeManager {
    CUtlVector<T> m_Providers; // 0x8
    int32_t m_iReapplyProvisionParity; // 0x20
    CHandle<T> m_hOuter; // 0x24
    bool m_bPreventLoopback; // 0x28
    attributeprovidertypes_t m_ProviderType; // 0x2c
    CUtlVector<T> m_CachedResults; // 0x30
};

// SignatureOutflow_Continue (size: 0x48)
struct SignatureOutflow_Continue {
};

// CInfoTarget (size: 0x608)
struct CInfoTarget {
};

// CPlayer_CameraServices (size: 0x290)
struct CPlayer_CameraServices {
    QAngle m_vecCsViewPunchAngle; // 0x48
    GameTick_t m_nCsViewPunchAngleTick; // 0x54
    float m_flCsViewPunchAngleTickRatio; // 0x58
    C_fogplayerparams_t m_PlayerFog; // 0x60
    CHandle<T> m_hColorCorrectionCtrl; // 0xa0
    CHandle<T> m_hViewEntity; // 0xa4
    CHandle<T> m_hTonemapController; // 0xa8
    audioparams_t m_audio; // 0xb0
    CHandle<T> m_PostProcessingVolumes; // 0x128
    float m_flOldPlayerZ; // 0x140
    float m_flOldPlayerViewOffsetZ; // 0x144
    fogparams_t m_CurrentFog; // 0x148
    CHandle<T> m_hOldFogController; // 0x1b0
    bool[5] m_bOverrideFogColor; // 0x1b4
    Color[5] m_OverrideFogColor; // 0x1b9
    bool[5] m_bOverrideFogStartEnd; // 0x1cd
    float32[5] m_fOverrideFogStart; // 0x1d4
    float32[5] m_fOverrideFogEnd; // 0x1e8
    CHandle<T> m_hActivePostProcessingVolume; // 0x1fc
    QAngle m_angDemoViewAngles; // 0x200
};

// CPulseCell_Timeline (size: 0xf8)
struct CPulseCell_Timeline {
    CUtlVector<T> m_TimelineEvents; // 0x48
    bool m_bWaitForChildOutflows; // 0x60
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
};

// CPulseCell_Inflow_EntOutputHandler (size: 0xb8)
struct CPulseCell_Inflow_EntOutputHandler {
    PulseSymbol_t m_SourceEntity; // 0x80
    PulseSymbol_t m_SourceOutput; // 0x90
    CPulseValueFullType m_ExpectedParamType; // 0xa0
};

// C_BaseCSGrenade (size: 0x2000)
struct C_BaseCSGrenade {
    bool m_bClientPredictDelete; // 0x1f40
    bool m_bRedraw; // 0x1f41
    bool m_bIsHeldByPlayer; // 0x1f42
    bool m_bPinPulled; // 0x1f43
    bool m_bJumpThrow; // 0x1f44
    bool m_bThrowAnimating; // 0x1f45
    GameTime_t m_fThrowTime; // 0x1f48
    float m_flThrowStrength; // 0x1f50
    GameTime_t m_fDropTime; // 0x1fc8
    GameTime_t m_fPinPullTime; // 0x1fcc
    bool m_bJustPulledPin; // 0x1fd0
    GameTick_t m_nNextHoldTick; // 0x1fd4
    float m_flNextHoldFrac; // 0x1fd8
    CHandle<T> m_hSwitchToWeaponAfterThrow; // 0x1fdc
};

// CFilterAttributeInt (size: 0x648)
struct CFilterAttributeInt {
    CUtlSymbolLarge m_sAttributeName; // 0x640
};

// CPointTemplate (size: 0x670)
struct CPointTemplate {
    CUtlSymbolLarge m_iszWorldName; // 0x608
    CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x610
    CUtlSymbolLarge m_iszEntityFilterName; // 0x618
    float m_flTimeoutInterval; // 0x620
    bool m_bAsynchronouslySpawnEntities; // 0x624
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x628
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x62c
    CUtlVector<T> m_createdSpawnGroupHandles; // 0x630
    CUtlVector<T> m_SpawnedEntityHandles; // 0x648
    HSCRIPT m_ScriptSpawnCallback; // 0x660
    HSCRIPT m_ScriptCallbackScope; // 0x668
};

// CPlayer_FlashlightServices (size: 0x48)
struct CPlayer_FlashlightServices {
};

// CCSPlayerController (size: 0x958)
struct CCSPlayerController {
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x808
    CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x810
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x818
    CCSPlayerController_DamageServices* m_pDamageServices; // 0x820
    uint32_t m_iPing; // 0x828
    bool m_bHasCommunicationAbuseMute; // 0x82c
    uint32_t m_uiCommunicationMuteFlags; // 0x830
    CUtlSymbolLarge m_szCrosshairCodes; // 0x838
    uint8_t m_iPendingTeamNum; // 0x840
    GameTime_t m_flForceTeamTime; // 0x844
    int32_t m_iCompTeammateColor; // 0x848
    bool m_bEverPlayedOnTeam; // 0x84c
    GameTime_t m_flPreviousForceJoinTeamTime; // 0x850
    CUtlSymbolLarge m_szClan; // 0x858
    CUtlString m_sSanitizedPlayerName; // 0x860
    int32_t m_iCoachingTeam; // 0x868
    uint64_t m_nPlayerDominated; // 0x870
    uint64_t m_nPlayerDominatingMe; // 0x878
    int32_t m_iCompetitiveRanking; // 0x880
    int32_t m_iCompetitiveWins; // 0x884
    int8 m_iCompetitiveRankType; // 0x888
    int32_t m_iCompetitiveRankingPredicted_Win; // 0x88c
    int32_t m_iCompetitiveRankingPredicted_Loss; // 0x890
    int32_t m_iCompetitiveRankingPredicted_Tie; // 0x894
    int32_t m_nEndMatchNextMapVote; // 0x898
    uint16_t m_unActiveQuestId; // 0x89c
    uint32_t m_rtActiveMissionPeriod; // 0x8a0
    QuestProgress::Reason m_nQuestProgressReason; // 0x8a4
    uint32_t m_unPlayerTvControlFlags; // 0x8a8
    int32_t m_iDraftIndex; // 0x8d8
    uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x8dc
    uint32_t m_uiAbandonRecordedReason; // 0x8e0
    uint32_t m_eNetworkDisconnectionReason; // 0x8e4
    bool m_bCannotBeKicked; // 0x8e8
    bool m_bEverFullyConnected; // 0x8e9
    bool m_bAbandonAllowsSurrender; // 0x8ea
    bool m_bAbandonOffersInstantSurrender; // 0x8eb
    bool m_bDisconnection1MinWarningPrinted; // 0x8ec
    bool m_bScoreReported; // 0x8ed
    int32_t m_nDisconnectionTick; // 0x8f0
    bool m_bControllingBot; // 0x900
    bool m_bHasControlledBotThisRound; // 0x901
    bool m_bHasBeenControlledByPlayerThisRound; // 0x902
    int32_t m_nBotsControlledThisRound; // 0x904
    bool m_bCanControlObservedBot; // 0x908
    CHandle<T> m_hPlayerPawn; // 0x90c
    CHandle<T> m_hObserverPawn; // 0x910
    bool m_bPawnIsAlive; // 0x914
    uint32_t m_iPawnHealth; // 0x918
    int32_t m_iPawnArmor; // 0x91c
    bool m_bPawnHasDefuser; // 0x920
    bool m_bPawnHasHelmet; // 0x921
    uint16_t m_nPawnCharacterDefIndex; // 0x922
    int32_t m_iPawnLifetimeStart; // 0x924
    int32_t m_iPawnLifetimeEnd; // 0x928
    int32_t m_iPawnBotDifficulty; // 0x92c
    CHandle<T> m_hOriginalControllerOfCurrentPawn; // 0x930
    int32_t m_iScore; // 0x934
    uint8[8] m_recentKillQueue; // 0x938
    uint8_t m_nFirstKill; // 0x940
    uint8_t m_nKillCount; // 0x941
    bool m_bMvpNoMusic; // 0x942
    int32_t m_eMvpReason; // 0x944
    int32_t m_iMusicKitID; // 0x948
    int32_t m_iMusicKitMVPs; // 0x94c
    int32_t m_iMVPs; // 0x950
    bool m_bIsPlayerNameDirty; // 0x954
    bool m_bFireBulletsSeedSynchronized; // 0x955
};

// C_CSGO_TeamIntroCounterTerroristPosition (size: 0x13a8)
struct C_CSGO_TeamIntroCounterTerroristPosition {
};

// C_CSGO_PreviewModel (size: 0x1860)
struct C_CSGO_PreviewModel {
    CUtlString m_defaultAnim; // 0x1350
    AnimLoopMode_t m_nDefaultAnimLoopMode; // 0x1358
    float m_flInitialModelScale; // 0x135c
    CUtlString m_sInitialWeaponState; // 0x1360
};

// C_CSGO_TeamSelectCharacterPosition (size: 0x13a8)
struct C_CSGO_TeamSelectCharacterPosition {
};

// CPulseCell_Outflow_CycleOrdered::InstanceState_t (size: 0x4)
struct CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    int32_t m_nNextIndex; // 0x0
};

// C_SoundEventAABBEntity (size: 0x6d0)
struct C_SoundEventAABBEntity {
    Vector m_vMins; // 0x6b8
    Vector m_vMaxs; // 0x6c4
};

// CCSPlayer_MovementServices (size: 0xe58)
struct CCSPlayer_MovementServices {
    Vector m_vecLadderNormal; // 0x270
    int32_t m_nLadderSurfacePropIndex; // 0x27c
    bool m_bDucked; // 0x280
    float m_flDuckAmount; // 0x284
    float m_flDuckSpeed; // 0x288
    bool m_bDuckOverride; // 0x28c
    bool m_bDesiresDuck; // 0x28d
    bool m_bDucking; // 0x28e
    float m_flDuckOffset; // 0x290
    uint32_t m_nDuckTimeMsecs; // 0x294
    uint32_t m_nDuckJumpTimeMsecs; // 0x298
    uint32_t m_nJumpTimeMsecs; // 0x29c
    float m_flLastDuckTime; // 0x2a0
    Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x2b0
    bool m_duckUntilOnGround; // 0x2b8
    bool m_bHasWalkMovedSinceLastJump; // 0x2b9
    bool m_bInStuckTest; // 0x2ba
    int32_t m_nTraceCount; // 0x4c8
    int32_t m_StuckLast; // 0x4cc
    bool m_bSpeedCropped; // 0x4d0
    int32_t m_nOldWaterLevel; // 0x4d4
    float m_flWaterEntryTime; // 0x4d8
    Vector m_vecForward; // 0x4dc
    Vector m_vecLeft; // 0x4e8
    Vector m_vecUp; // 0x4f4
    int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x500
    GameTime_t m_fStashGrenadeParameterWhen; // 0x504
    uint64_t m_nButtonDownMaskPrev; // 0x508
    float m_flOffsetTickCompleteTime; // 0x510
    float m_flOffsetTickStashedSpeed; // 0x514
    float m_flStamina; // 0x518
    float m_flHeightAtJumpStart; // 0x51c
    float m_flMaxJumpHeightThisJump; // 0x520
    float m_flMaxJumpHeightLastJump; // 0x524
    float m_flStaminaAtJumpStart; // 0x528
    float m_flVelMulAtJumpStart; // 0x52c
    float m_flAccumulatedJumpError; // 0x530
    CCSPlayerLegacyJump m_LegacyJump; // 0x538
    CCSPlayerModernJump m_ModernJump; // 0x550
    GameTick_t m_nLastJumpTick; // 0x588
    float m_flLastJumpFrac; // 0x58c
    float m_flLastJumpVelocityZ; // 0x590
    bool m_bJumpApexPending; // 0x594
    float m_flTicksSinceLastSurfingDetected; // 0x598
    bool m_bWasSurfing; // 0x59c
    Vector m_vecInputRotated; // 0x62c
};

// SellbackPurchaseEntry_t (size: 0x48)
struct SellbackPurchaseEntry_t {
    uint16_t m_unDefIdx; // 0x30
    int32_t m_nCost; // 0x34
    int32_t m_nPrevArmor; // 0x38
    bool m_bPrevHelmet; // 0x3c
    CEntityHandle m_hItem; // 0x40
};

// C_TintController (size: 0x620)
struct C_TintController {
};

// C_WeaponBaseItem (size: 0x1f50)
struct C_WeaponBaseItem {
    bool m_bSequenceInProgress; // 0x1f40
    bool m_bRedraw; // 0x1f41
};

// CWaterSplasher (size: 0xe88)
struct CWaterSplasher {
};

// C_FuncBrush (size: 0xe88)
struct C_FuncBrush {
};

// PhysicsRagdollPose_t (size: 0x48)
struct PhysicsRagdollPose_t {
    C_NetworkUtlVectorBase< CTransform > m_Transforms; // 0x8
    CHandle<T> m_hOwner; // 0x20
    bool m_bSetFromDebugHistory; // 0x24
};

// CPropDataComponent (size: 0x40)
struct CPropDataComponent {
    float m_flDmgModBullet; // 0x10
    float m_flDmgModClub; // 0x14
    float m_flDmgModExplosive; // 0x18
    float m_flDmgModFire; // 0x1c
    CUtlSymbolLarge m_iszPhysicsDamageTableName; // 0x20
    CUtlSymbolLarge m_iszBasePropData; // 0x28
    int32_t m_nInteractions; // 0x30
    bool m_bSpawnMotionDisabled; // 0x34
    int32_t m_nDisableTakePhysicsDamageSpawnFlag; // 0x38
    int32_t m_nMotionDisabledSpawnFlag; // 0x3c
};

// CPulseCell_LimitCount::InstanceState_t (size: 0x4)
struct CPulseCell_LimitCount_InstanceState_t {
    int32_t m_nCurrentCount; // 0x0
};

// C_WeaponCZ75a (size: 0x1f80)
struct C_WeaponCZ75a {
    bool m_bMagazineRemoved; // 0x1f70
};

// C_DynamicLight (size: 0xeb0)
struct C_DynamicLight {
    uint8_t m_Flags; // 0xe88
    uint8_t m_LightStyle; // 0xe89
    float m_Radius; // 0xe8c
    int32_t m_Exponent; // 0xe90
    float m_InnerAngle; // 0xe94
    float m_OuterAngle; // 0xe98
    float m_SpotRadius; // 0xe9c
};

// EngineCountdownTimer (size: 0x18)
struct EngineCountdownTimer {
    float m_duration; // 0x8
    float m_timestamp; // 0xc
    float m_timescale; // 0x10
};

// C_SoundEventSphereEntity (size: 0x6c0)
struct C_SoundEventSphereEntity {
    float m_flRadius; // 0x6b8
};

// CCSPlayerController_DamageServices (size: 0xb0)
struct CCSPlayerController_DamageServices {
    int32_t m_nSendUpdate; // 0x40
    C_UtlVectorEmbeddedNetworkVar< CDamageRecord > m_DamageList; // 0x48
};

// C_CSGO_TeamPreviewModel (size: 0x3fa0)
struct C_CSGO_TeamPreviewModel {
};

// C_TonemapController2Alias_env_tonemap_controller2 (size: 0x620)
struct C_TonemapController2Alias_env_tonemap_controller2 {
};

// C_Inferno (size: 0x8490)
struct C_Inferno {
    ParticleIndex_t m_nfxFireDamageEffect; // 0xec8
    CStrongHandle<T> m_hInfernoPointsSnapshot; // 0xed0
    CStrongHandle<T> m_hInfernoFillerPointsSnapshot; // 0xed8
    CStrongHandle<T> m_hInfernoOutlinePointsSnapshot; // 0xee0
    CStrongHandle<T> m_hInfernoClimbingOutlinePointsSnapshot; // 0xee8
    CStrongHandle<T> m_hInfernoDecalsSnapshot; // 0xef0
    Vector[64] m_firePositions; // 0xef8
    Vector[64] m_fireParentPositions; // 0x11f8
    bool[64] m_bFireIsBurning; // 0x14f8
    Vector[64] m_BurnNormal; // 0x1538
    int32_t m_fireCount; // 0x1838
    int32_t m_nInfernoType; // 0x183c
    float m_nFireLifetime; // 0x1840
    bool m_bInPostEffectTime; // 0x1844
    int32_t m_lastFireCount; // 0x1848
    int32_t m_nFireEffectTickBegin; // 0x184c
    int32_t m_drawableCount; // 0x8450
    bool m_blosCheck; // 0x8454
    int32_t m_nlosperiod; // 0x8458
    float m_maxFireHalfWidth; // 0x845c
    float m_maxFireHeight; // 0x8460
    Vector m_minBounds; // 0x8464
    Vector m_maxBounds; // 0x8470
    float m_flLastGrassBurnThink; // 0x847c
};

// CFilterLOS (size: 0x640)
struct CFilterLOS {
};

// CPointOrient (size: 0x628)
struct CPointOrient {
    CUtlSymbolLarge m_iszSpawnTargetName; // 0x608
    CHandle<T> m_hTarget; // 0x610
    bool m_bActive; // 0x614
    PointOrientGoalDirectionType_t m_nGoalDirection; // 0x618
    PointOrientConstraint_t m_nConstraint; // 0x61c
    float m_flMaxTurnRate; // 0x620
    GameTime_t m_flLastGameTime; // 0x624
};

// C_GlobalLight (size: 0xb00)
struct C_GlobalLight {
    uint16_t m_WindClothForceHandle; // 0xad0
};

// C_EnvWindClientside (size: 0x700)
struct C_EnvWindClientside {
    C_EnvWindShared m_EnvWindShared; // 0x608
};

// sky3dparams_t (size: 0x90)
struct sky3dparams_t {
    int16 scale; // 0x8
    Vector origin; // 0xc
    bool bClip3DSkyBoxNearToWorldFar; // 0x18
    float flClip3DSkyBoxNearToWorldFarOffset; // 0x1c
    fogparams_t fog; // 0x20
    WorldGroupId_t m_nWorldGroupID; // 0x88
};

// C_FlashbangProjectile (size: 0x1438)
struct C_FlashbangProjectile {
};

// C_SoundEventConeEntity (size: 0x6d0)
struct C_SoundEventConeEntity {
    float m_flEmitterAngle; // 0x6b8
    float m_flSweetSpotAngle; // 0x6bc
    float m_flAttenMin; // 0x6c0
    float m_flAttenMax; // 0x6c4
    CUtlSymbolLarge m_iszParameterName; // 0x6c8
};

// CDestructiblePartsComponent (size: 0x70)
struct CDestructiblePartsComponent {
    CNetworkVarChainer _m_pChainEntity; // 0x0
    CUtlVector<T> m_vecDamageTakenByHitGroup; // 0x48
    CHandle<T> m_hOwner; // 0x60
};

// C_WeaponP90 (size: 0x1f70)
struct C_WeaponP90 {
};

// C_EnvWind (size: 0x700)
struct C_EnvWind {
    C_EnvWindShared m_EnvWindShared; // 0x608
};

// C_CSGO_TerroristTeamIntroCamera (size: 0x698)
struct C_CSGO_TerroristTeamIntroCamera {
};

// CPulseCell_Step_DebugLog (size: 0x48)
struct CPulseCell_Step_DebugLog {
};

// CCSPlayerController_ActionTrackingServices (size: 0x138)
struct CCSPlayerController_ActionTrackingServices {
    C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // 0x40
    CSMatchStats_t m_matchStats; // 0xa8
    int32_t m_iNumRoundKills; // 0x128
    int32_t m_iNumRoundKillsHeadshots; // 0x12c
    float m_flTotalRoundDamageDealt; // 0x130
};

// CBodyComponentBaseAnimGraph (size: 0x2090)
struct CBodyComponentBaseAnimGraph {
    CBaseAnimGraphController m_animationController; // 0x550
};

// C_CSGO_PreviewModelAlias_csgo_item_previewmodel (size: 0x1860)
struct C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
};

// C_InfoInstructorHintHostageRescueZone (size: 0x608)
struct C_InfoInstructorHintHostageRescueZone {
};

// CPulseCell_BaseYieldingInflow (size: 0x48)
struct CPulseCell_BaseYieldingInflow {
};

// PulseNodeDynamicOutflows_t (size: 0x18)
struct PulseNodeDynamicOutflows_t {
    CUtlVector<T> m_Outflows; // 0x0
};

// C_TriggerBuoyancy (size: 0x1078)
struct C_TriggerBuoyancy {
    CBuoyancyHelper m_BuoyancyHelper; // 0xf58
    float m_flFluidDensity; // 0x1070
};

// CPlayer_MovementServices_Humanoid (size: 0x270)
struct CPlayer_MovementServices_Humanoid {
    float m_flStepSoundTime; // 0x240
    float m_flFallVelocity; // 0x244
    Vector m_groundNormal; // 0x248
    float m_flSurfaceFriction; // 0x254
    CUtlString m_surfaceProps; // 0x258
    int32_t m_nStepside; // 0x268
};

// CPulseCell_IsRequirementValid::Criteria_t (size: 0x1)
struct CPulseCell_IsRequirementValid_Criteria_t {
    bool m_bIsValid; // 0x0
};

// C_WeaponTec9 (size: 0x1f70)
struct C_WeaponTec9 {
};

// C_PhysPropClientside (size: 0x1300)
struct C_PhysPropClientside {
    GameTime_t m_flTouchDelta; // 0x12d0
    GameTime_t m_fDeathTime; // 0x12d4
    Vector m_vecDamagePosition; // 0x12d8
    Vector m_vecDamageDirection; // 0x12e4
    DamageTypes_t m_nDamageType; // 0x12f0
};

// C_BaseDoor (size: 0xe90)
struct C_BaseDoor {
    bool m_bIsUsable; // 0xe88
};

// CSMatchStats_t (size: 0x80)
struct CSMatchStats_t {
    int32_t m_iEnemy5Ks; // 0x68
    int32_t m_iEnemy4Ks; // 0x6c
    int32_t m_iEnemy3Ks; // 0x70
    int32_t m_iEnemyKnifeKills; // 0x74
    int32_t m_iEnemyTaserKills; // 0x78
};

// EntityRenderAttribute_t (size: 0x48)
struct EntityRenderAttribute_t {
    CUtlString m_ID; // 0x30
    Vector4D m_Values; // 0x34
};

// CPulseCell_Inflow_ObservableVariableListener (size: 0x88)
struct CPulseCell_Inflow_ObservableVariableListener {
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReference; // 0x80
    bool m_bSelfReference; // 0x82
};

// CFilterMultipleAPI (size: 0x8)
struct CFilterMultipleAPI {
};

// CHostageRescueZone (size: 0xf70)
struct CHostageRescueZone {
};

// CModelState (size: 0x2d0)
struct CModelState {
    CStrongHandle<T> m_hModel; // 0xa0
    CUtlSymbolLarge m_ModelName; // 0xa8
    bool m_bClientClothCreationSuppressed; // 0x179
    uint64_t m_MeshGroupMask; // 0x220
    C_NetworkUtlVectorBase< int32 > m_nBodyGroupChoices; // 0x270
    int8 m_nIdealMotionType; // 0x2ba
    int8 m_nForceLOD; // 0x2bb
    int8 m_nClothUpdateFlags; // 0x2bc
};

// CPulseCell_LerpCameraSettings::CursorState_t (size: 0x2c)
struct CPulseCell_LerpCameraSettings_CursorState_t {
    CHandle<T> m_hCamera; // 0x8
    PointCameraSettings_t m_OverlaidStart; // 0xc
    PointCameraSettings_t m_OverlaidEnd; // 0x1c
};

// CPulseCell_Outflow_CycleOrdered (size: 0x60)
struct CPulseCell_Outflow_CycleOrdered {
    CUtlVector<T> m_Outputs; // 0x48
};

// C_CSWeaponBaseGun (size: 0x1f70)
struct C_CSWeaponBaseGun {
    int32_t m_zoomLevel; // 0x1f40
    int32_t m_iBurstShotsRemaining; // 0x1f44
    int32_t m_iSilencerBodygroup; // 0x1f48
    int32_t m_silencedModelIndex; // 0x1f58
    bool m_inPrecache; // 0x1f5c
    bool m_bNeedsBoltAction; // 0x1f5d
    int32_t m_nRevolverCylinderIdx; // 0x1f60
};

// C_CSGameRulesProxy (size: 0x610)
struct C_CSGameRulesProxy {
    C_CSGameRules* m_pGameRules; // 0x608
};

// CCollisionProperty (size: 0xb0)
struct CCollisionProperty {
    VPhysicsCollisionAttribute_t m_collisionAttribute; // 0x10
    Vector m_vecMins; // 0x40
    Vector m_vecMaxs; // 0x4c
    uint8_t m_usSolidFlags; // 0x5a
    SolidType_t m_nSolidType; // 0x5b
    uint8_t m_triggerBloat; // 0x5c
    SurroundingBoundsType_t m_nSurroundType; // 0x5d
    uint8_t m_CollisionGroup; // 0x5e
    uint8_t m_nEnablePhysics; // 0x5f
    float m_flBoundingRadius; // 0x60
    Vector m_vecSpecifiedSurroundingMins; // 0x64
    Vector m_vecSpecifiedSurroundingMaxs; // 0x70
    Vector m_vecSurroundingMaxs; // 0x7c
    Vector m_vecSurroundingMins; // 0x88
    Vector m_vCapsuleCenter1; // 0x94
    Vector m_vCapsuleCenter2; // 0xa0
    float m_flCapsuleRadius; // 0xac
};

// C_WeaponP250 (size: 0x1f70)
struct C_WeaponP250 {
};

// C_ShatterGlassShardPhysics (size: 0x1370)
struct C_ShatterGlassShardPhysics {
    shard_model_desc_t m_ShardDesc; // 0x12e8
};

// CFilterMassGreater (size: 0x648)
struct CFilterMassGreater {
    float m_fFilterMass; // 0x640
};

// C_EntityDissolve (size: 0xed0)
struct C_EntityDissolve {
    GameTime_t m_flStartTime; // 0xe90
    float m_flFadeInStart; // 0xe94
    float m_flFadeInLength; // 0xe98
    float m_flFadeOutModelStart; // 0xe9c
    float m_flFadeOutModelLength; // 0xea0
    float m_flFadeOutStart; // 0xea4
    float m_flFadeOutLength; // 0xea8
    GameTime_t m_flNextSparkTime; // 0xeac
    EntityDisolveType_t m_nDissolveType; // 0xeb0
    Vector m_vDissolverOrigin; // 0xeb4
    uint32_t m_nMagnitude; // 0xec0
    bool m_bCoreExplode; // 0xec4
    bool m_bLinkedToServerEnt; // 0xec5
};

// C_SoundOpvarSetOBBEntity (size: 0x628)
struct C_SoundOpvarSetOBBEntity {
};

// CCSGameModeRules_ArmsRace (size: 0x48)
struct CCSGameModeRules_ArmsRace {
    CUtlString m_WeaponSequence; // 0x30
};

// C_FuncMonitor (size: 0x1300)
struct C_FuncMonitor {
    CUtlString m_targetCamera; // 0xe88
    int32_t m_nResolutionEnum; // 0xe90
    bool m_bRenderShadows; // 0xe94
    bool m_bUseUniqueColorTarget; // 0xe95
    CUtlString m_brushModelName; // 0xe98
    CHandle<T> m_hTargetCamera; // 0xea0
    bool m_bEnabled; // 0xea4
    bool m_bDraw3DSkybox; // 0xea5
};

// C_ClientRagdoll (size: 0x1200)
struct C_ClientRagdoll {
    bool m_bFadeOut; // 0x1168
    bool m_bImportant; // 0x1169
    GameTime_t m_flEffectTime; // 0x116c
    GameTime_t m_gibDespawnTime; // 0x1170
    int32_t m_iCurrentFriction; // 0x1174
    int32_t m_iMinFriction; // 0x1178
    int32_t m_iMaxFriction; // 0x117c
    int32_t m_iFrictionAnimState; // 0x1180
    bool m_bReleaseRagdoll; // 0x1184
    AttachmentHandle_t m_iEyeAttachment; // 0x1185
    bool m_bFadingOut; // 0x1186
    float32[10] m_flScaleEnd; // 0x1188
    GameTime_t[10] m_flScaleTimeStart; // 0x11b0
    GameTime_t[10] m_flScaleTimeEnd; // 0x11d8
};

// PulseSelectorOutflowList_t (size: 0x18)
struct PulseSelectorOutflowList_t {
    CUtlVector<T> m_Outflows; // 0x0
};

// CPulseCell_PlaySequence::CursorState_t (size: 0x4)
struct CPulseCell_PlaySequence_CursorState_t {
    CHandle<T> m_hTarget; // 0x0
};

// CBodyComponentSkeletonInstance (size: 0x550)
struct CBodyComponentSkeletonInstance {
    CSkeletonInstance m_skeletonInstance; // 0x80
};

// C_CS2WeaponModuleBase (size: 0x1170)
struct C_CS2WeaponModuleBase {
};

// C_CSGO_TeamPreviewCharacterPosition (size: 0x13a8)
struct C_CSGO_TeamPreviewCharacterPosition {
    int32_t m_nVariant; // 0x608
    int32_t m_nRandom; // 0x60c
    int32_t m_nOrdinal; // 0x610
    CUtlString m_sWeaponName; // 0x618
    uint64_t m_xuid; // 0x620
    C_EconItemView m_agentItem; // 0x628
    C_EconItemView m_glovesItem; // 0xa98
    C_EconItemView m_weaponItem; // 0xf08
};

// C_SmokeGrenadeProjectile (size: 0x15f0)
struct C_SmokeGrenadeProjectile {
    int32_t m_nSmokeEffectTickBegin; // 0x1450
    bool m_bDidSmokeEffect; // 0x1454
    int32_t m_nRandomSeed; // 0x1458
    Vector m_vSmokeColor; // 0x145c
    Vector m_vSmokeDetonationPos; // 0x1468
    C_NetworkUtlVectorBase< uint8 > m_VoxelFrameData; // 0x1478
    int32_t m_nVoxelFrameDataSize; // 0x1490
    int32_t m_nVoxelUpdate; // 0x1494
    bool m_bSmokeVolumeDataReceived; // 0x1498
    bool m_bSmokeEffectSpawned; // 0x1499
};

// CScriptComponent (size: 0x38)
struct CScriptComponent {
    CUtlSymbolLarge m_scriptClassName; // 0x30
};

// CCSPlayer_BuyServices (size: 0xb0)
struct CCSPlayer_BuyServices {
    C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries; // 0x48
};

// C_PortraitWorldCallbackHandler (size: 0x610)
struct C_PortraitWorldCallbackHandler {
};

// C_DynamicProp (size: 0x13a0)
struct C_DynamicProp {
    bool m_bUseHitboxesForRenderBox; // 0x12d0
    bool m_bUseAnimGraph; // 0x12d1
    CEntityIOOutput m_pOutputAnimBegun; // 0x12d8
    CEntityIOOutput m_pOutputAnimOver; // 0x12f0
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1308
    CEntityIOOutput m_OnAnimReachedStart; // 0x1320
    CEntityIOOutput m_OnAnimReachedEnd; // 0x1338
    CUtlSymbolLarge m_iszIdleAnim; // 0x1350
    AnimLoopMode_t m_nIdleAnimLoopMode; // 0x1358
    bool m_bRandomizeCycle; // 0x135c
    bool m_bStartDisabled; // 0x135d
    bool m_bFiredStartEndOutput; // 0x135e
    bool m_bForceNpcExclude; // 0x135f
    bool m_bCreateNonSolid; // 0x1360
    bool m_bIsOverrideProp; // 0x1361
    int32_t m_iInitialGlowState; // 0x1364
    int32_t m_nGlowRange; // 0x1368
    int32_t m_nGlowRangeMin; // 0x136c
    Color m_glowColor; // 0x1370
    int32_t m_nGlowTeam; // 0x1374
    int32_t m_iCachedFrameCount; // 0x1378
    Vector m_vecCachedRenderMins; // 0x137c
    Vector m_vecCachedRenderMaxs; // 0x1388
};

// C_CSTeam (size: 0x970)
struct C_CSTeam {
    char[512] m_szTeamMatchStat; // 0x6c0
    int32_t m_numMapVictories; // 0x8c0
    bool m_bSurrendered; // 0x8c4
    int32_t m_scoreFirstHalf; // 0x8c8
    int32_t m_scoreSecondHalf; // 0x8cc
    int32_t m_scoreOvertime; // 0x8d0
    char[129] m_szClanTeamname; // 0x8d4
    uint32_t m_iClanID; // 0x958
    char[8] m_szTeamFlagImage; // 0x95c
    char[8] m_szTeamLogoImage; // 0x964
};

// C_CS2HudModelWeapon (size: 0x1280)
struct C_CS2HudModelWeapon {
};

// C_TextureBasedAnimatable (size: 0xec0)
struct C_TextureBasedAnimatable {
    bool m_bLoop; // 0xe88
    float m_flFPS; // 0xe8c
    CStrongHandle<T> m_hPositionKeys; // 0xe90
    CStrongHandle<T> m_hRotationKeys; // 0xe98
    Vector m_vAnimationBoundsMin; // 0xea0
    Vector m_vAnimationBoundsMax; // 0xeac
    float m_flStartTime; // 0xeb8
    float m_flStartFrame; // 0xebc
};

// C_LightEnvironmentEntity (size: 0xe90)
struct C_LightEnvironmentEntity {
};

// CLogicRelayAPI (size: 0x8)
struct CLogicRelayAPI {
};

// C_TriggerPhysics (size: 0xfa8)
struct C_TriggerPhysics {
    float m_gravityScale; // 0xf58
    float m_linearLimit; // 0xf5c
    float m_linearDamping; // 0xf60
    float m_angularLimit; // 0xf64
    float m_angularDamping; // 0xf68
    float m_linearForce; // 0xf6c
    float m_flFrequency; // 0xf70
    float m_flDampingRatio; // 0xf74
    Vector m_vecLinearForcePointAt; // 0xf78
    bool m_bCollapseToForcePoint; // 0xf84
    Vector m_vecLinearForcePointAtWorld; // 0xf88
    Vector m_vecLinearForceDirection; // 0xf94
    bool m_bConvertToDebrisWhenPossible; // 0xfa0
};

// C_PropDoorRotating (size: 0x13e0)
struct C_PropDoorRotating {
};

// C_HandleTest (size: 0x610)
struct C_HandleTest {
    CHandle<T> m_Handle; // 0x608
    bool m_bSendHandle; // 0x60c
};

// CInfoWorldLayer (size: 0x640)
struct CInfoWorldLayer {
    CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x608
    CUtlSymbolLarge m_worldName; // 0x620
    CUtlSymbolLarge m_layerName; // 0x628
    bool m_bWorldLayerVisible; // 0x630
    bool m_bEntitiesSpawned; // 0x631
    bool m_bCreateAsChildSpawnGroup; // 0x632
    uint32_t m_hLayerSpawnGroup; // 0x634
    bool m_bWorldLayerActuallyVisible; // 0x638
};

// CBodyComponentBaseModelEntity (size: 0x550)
struct CBodyComponentBaseModelEntity {
};

// C_Multimeter (size: 0x1178)
struct C_Multimeter {
    CHandle<T> m_hTargetC4; // 0x1170
};

// C_BaseTrigger (size: 0xf58)
struct C_BaseTrigger {
    CEntityIOOutput m_OnStartTouch; // 0xe88
    CEntityIOOutput m_OnStartTouchAll; // 0xea0
    CEntityIOOutput m_OnEndTouch; // 0xeb8
    CEntityIOOutput m_OnEndTouchAll; // 0xed0
    CEntityIOOutput m_OnTouching; // 0xee8
    CEntityIOOutput m_OnTouchingEachEntity; // 0xf00
    CEntityIOOutput m_OnNotTouching; // 0xf18
    CUtlVector<T> m_hTouchingEntities; // 0xf30
    CUtlSymbolLarge m_iFilterName; // 0xf48
    CHandle<T> m_hFilter; // 0xf50
    bool m_bDisabled; // 0xf54
};

// FilterDamageType (size: 0x648)
struct FilterDamageType {
    int32_t m_iDamageType; // 0x640
};

// CAttributeList (size: 0x78)
struct CAttributeList {
    C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute > m_Attributes; // 0x8
    CAttributeManager* m_pManager; // 0x70
};

// CPulseCell_Inflow_Wait (size: 0x90)
struct CPulseCell_Inflow_Wait {
    CPulse_ResumePoint m_WakeResume; // 0x48
};

// CFilterProximity (size: 0x648)
struct CFilterProximity {
    float m_flRadius; // 0x640
};

// CCS2WeaponGraphController (size: 0x2a0)
struct CCS2WeaponGraphController {
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_action; // 0x90
    CAnimGraph2ParamOptionalRef< bool > m_bActionReset; // 0xa8
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponActionSpeedScale; // 0xc0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponCategory; // 0xd8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponType; // 0xf0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_weaponExtraInfo; // 0x108
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmo; // 0x120
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoMax; // 0x138
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponAmmoReserve; // 0x150
    CAnimGraph2ParamOptionalRef< bool > m_bWeaponIsSilenced; // 0x168
    CAnimGraph2ParamOptionalRef< float32 > m_flWeaponIronsightAmount; // 0x180
    CAnimGraph2ParamOptionalRef< bool > m_bIsUsingLegacyModel; // 0x198
    CAnimGraph2ParamOptionalRef< float32 > m_idleVariation; // 0x1b0
    CAnimGraph2ParamOptionalRef< float32 > m_deployVariation; // 0x1c8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_attackType; // 0x1e0
    CAnimGraph2ParamOptionalRef< float32 > m_attackThrowStrength; // 0x1f8
    CAnimGraph2ParamOptionalRef< float32 > m_flAttackVariation; // 0x210
    CAnimGraph2ParamOptionalRef< float32 > m_inspectVariation; // 0x228
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_inspectExtraInfo; // 0x240
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_reloadStage; // 0x258
};

// CEffectData (size: 0x78)
struct CEffectData {
    VectorWS m_vOrigin; // 0x8
    VectorWS m_vStart; // 0x14
    Vector m_vNormal; // 0x20
    QAngle m_vAngles; // 0x2c
    CEntityHandle m_hEntity; // 0x38
    CEntityHandle m_hOtherEntity; // 0x3c
    float m_flScale; // 0x40
    float m_flMagnitude; // 0x44
    float m_flRadius; // 0x48
    CUtlString m_nSurfaceProp; // 0x4c
    CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex; // 0x50
    uint32_t m_nDamageType; // 0x58
    uint8_t m_nPenetrate; // 0x5c
    uint16_t m_nMaterial; // 0x5e
    int16 m_nHitBox; // 0x60
    uint8_t m_nColor; // 0x62
    uint8_t m_fFlags; // 0x63
    AttachmentHandle_t m_nAttachmentIndex; // 0x64
    CUtlString m_nAttachmentName; // 0x68
    uint16_t m_iEffectName; // 0x6c
    uint8_t m_nExplosionType; // 0x6e
};

// C_ParticleSystem (size: 0x1438)
struct C_ParticleSystem {
    char[512] m_szSnapshotFileName; // 0xe88
    bool m_bActive; // 0x1088
    bool m_bFrozen; // 0x1089
    float m_flFreezeTransitionDuration; // 0x108c
    int32_t m_nStopType; // 0x1090
    bool m_bAnimateDuringGameplayPause; // 0x1094
    CStrongHandle<T> m_iEffectIndex; // 0x1098
    GameTime_t m_flStartTime; // 0x10a0
    float m_flPreSimTime; // 0x10a4
    Vector[4] m_vServerControlPoints; // 0x10a8
    uint8[4] m_iServerControlPointAssignments; // 0x10d8
    CHandle<T> m_hControlPointEnts; // 0x10dc
    bool m_bNoSave; // 0x11dc
    bool m_bNoFreeze; // 0x11dd
    bool m_bNoRamp; // 0x11de
    bool m_bStartActive; // 0x11df
    CUtlSymbolLarge m_iszEffectName; // 0x11e0
    CUtlSymbolLarge[64] m_iszControlPointNames; // 0x11e8
    int32_t m_nDataCP; // 0x13e8
    Vector m_vecDataCPValue; // 0x13ec
    int32_t m_nTintCP; // 0x13f8
    Color m_clrTint; // 0x13fc
    bool m_bOldActive; // 0x1420
    bool m_bOldFrozen; // 0x1421
};

// CPulseCell_Outflow_CycleShuffled (size: 0x60)
struct CPulseCell_Outflow_CycleShuffled {
    CUtlVector<T> m_Outputs; // 0x48
};

// C_WeaponSCAR20 (size: 0x1f70)
struct C_WeaponSCAR20 {
};

// C_BaseFlex (size: 0x1350)
struct C_BaseFlex {
    C_NetworkUtlVectorBase< float32 > m_flexWeight; // 0x1170
    VectorWS m_vLookTargetPosition; // 0x1188
    int32_t m_nLastFlexUpdateFrameCount; // 0x1270
    Vector m_CachedViewTarget; // 0x1274
    SceneEventId_t m_nNextSceneEventId; // 0x1280
    AttachmentHandle_t m_iMouthAttachment; // 0x1284
    AttachmentHandle_t m_iEyeAttachment; // 0x1285
    bool m_bResetFlexWeightsOnModelChange; // 0x1286
    int32_t m_nEyeOcclusionRendererBone; // 0x12a0
    matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x12a4
    Vector m_vEyeOcclusionRendererHalfExtent; // 0x12d4
    C_BaseFlex::Emphasized_Phoneme[3] m_PhonemeClasses; // 0x12f0
};

// C_FuncMover (size: 0xe88)
struct C_FuncMover {
};

// CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t (size: 0xc8)
struct CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t {
    C_EconItemView* pItem; // 0x0
    uint16_t team; // 0x8
    uint16_t slot; // 0xa
};

// CLightComponent (size: 0x1f0)
struct CLightComponent {
    CNetworkVarChainer _m_pChainEntity; // 0x38
    Color m_Color; // 0x75
    Color m_SecondaryColor; // 0x79
    float m_flBrightness; // 0x80
    float m_flBrightnessScale; // 0x84
    float m_flBrightnessMult; // 0x88
    float m_flRange; // 0x8c
    float m_flFalloff; // 0x90
    float m_flAttenuation0; // 0x94
    float m_flAttenuation1; // 0x98
    float m_flAttenuation2; // 0x9c
    float m_flTheta; // 0xa0
    float m_flPhi; // 0xa4
    CStrongHandle<T> m_hLightCookie; // 0xa8
    int32_t m_nCascades; // 0xb0
    int32_t m_nCastShadows; // 0xb4
    int32_t m_nShadowWidth; // 0xb8
    int32_t m_nShadowHeight; // 0xbc
    bool m_bRenderDiffuse; // 0xc0
    int32_t m_nRenderSpecular; // 0xc4
    bool m_bRenderTransmissive; // 0xc8
    float m_flOrthoLightWidth; // 0xcc
    float m_flOrthoLightHeight; // 0xd0
    int32_t m_nStyle; // 0xd4
    CUtlString m_Pattern; // 0xd8
    int32_t m_nCascadeRenderStaticObjects; // 0xe0
    float m_flShadowCascadeCrossFade; // 0xe4
    float m_flShadowCascadeDistanceFade; // 0xe8
    float m_flShadowCascadeDistance0; // 0xec
    float m_flShadowCascadeDistance1; // 0xf0
    float m_flShadowCascadeDistance2; // 0xf4
    float m_flShadowCascadeDistance3; // 0xf8
    int32_t m_nShadowCascadeResolution0; // 0xfc
    int32_t m_nShadowCascadeResolution1; // 0x100
    int32_t m_nShadowCascadeResolution2; // 0x104
    int32_t m_nShadowCascadeResolution3; // 0x108
    bool m_bUsesBakedShadowing; // 0x10c
    int32_t m_nShadowPriority; // 0x110
    int32_t m_nBakedShadowIndex; // 0x114
    int32_t m_nLightPathUniqueId; // 0x118
    int32_t m_nLightMapUniqueId; // 0x11c
    bool m_bRenderToCubemaps; // 0x120
    bool m_bAllowSSTGeneration; // 0x121
    int32_t m_nDirectLight; // 0x124
    int32_t m_nIndirectLight; // 0x128
    bool m_bDynamicBounce; // 0x12c
    float m_flFadeMinDist; // 0x130
    float m_flFadeMaxDist; // 0x134
    float m_flShadowFadeMinDist; // 0x138
    float m_flShadowFadeMaxDist; // 0x13c
    bool m_bEnabled; // 0x140
    bool m_bFlicker; // 0x141
    bool m_bPrecomputedFieldsValid; // 0x142
    Vector m_vPrecomputedBoundsMins; // 0x144
    Vector m_vPrecomputedBoundsMaxs; // 0x150
    Vector m_vPrecomputedOBBOrigin; // 0x15c
    QAngle m_vPrecomputedOBBAngles; // 0x168
    Vector m_vPrecomputedOBBExtent; // 0x174
    float m_flPrecomputedMaxRange; // 0x180
    int32_t m_nFogLightingMode; // 0x184
    float m_flFogContributionStength; // 0x188
    float m_flNearClipPlane; // 0x18c
    Color m_SkyColor; // 0x190
    float m_flSkyIntensity; // 0x194
    Color m_SkyAmbientBounce; // 0x198
    bool m_bUseSecondaryColor; // 0x19c
    bool m_bMixedShadows; // 0x19d
    GameTime_t m_flLightStyleStartTime; // 0x1a0
    float m_flCapsuleLength; // 0x1a4
    float m_flMinRoughness; // 0x1a8
};

// C_DecoyGrenade (size: 0x2000)
struct C_DecoyGrenade {
};

// C_WaterBullet (size: 0x1168)
struct C_WaterBullet {
};

// CCSPlayer_ActionTrackingServices (size: 0x130)
struct CCSPlayer_ActionTrackingServices {
    CHandle<T> m_hLastWeaponBeforeC4AutoSwitch; // 0x48
    bool m_bIsRescuing; // 0x4c
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x50
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0xc0
};

// C_EnvCubemap (size: 0x6f0)
struct C_EnvCubemap {
    CStrongHandle<T> m_Entity_hCubemapTexture; // 0x688
    bool m_Entity_bCustomCubemapTexture; // 0x690
    float m_Entity_flInfluenceRadius; // 0x694
    Vector m_Entity_vBoxProjectMins; // 0x698
    Vector m_Entity_vBoxProjectMaxs; // 0x6a4
    bool m_Entity_bMoveable; // 0x6b0
    int32_t m_Entity_nHandshake; // 0x6b4
    int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x6b8
    int32_t m_Entity_nPriority; // 0x6bc
    float m_Entity_flEdgeFadeDist; // 0x6c0
    Vector m_Entity_vEdgeFadeDists; // 0x6c4
    float m_Entity_flDiffuseScale; // 0x6d0
    bool m_Entity_bStartDisabled; // 0x6d4
    bool m_Entity_bDefaultEnvMap; // 0x6d5
    bool m_Entity_bDefaultSpecEnvMap; // 0x6d6
    bool m_Entity_bIndoorCubeMap; // 0x6d7
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x6d8
    bool m_Entity_bEnabled; // 0x6e8
};

// CCSObserver_MovementServices (size: 0x240)
struct CCSObserver_MovementServices {
};

// CBodyComponent (size: 0x78)
struct CBodyComponent {
    CGameSceneNode* m_pSceneNode; // 0x8
    CNetworkVarChainer _m_pChainEntity; // 0x48
};

// CPulseCell_Inflow_Method (size: 0xc8)
struct CPulseCell_Inflow_Method {
    PulseSymbol_t m_MethodName; // 0x80
    CUtlString m_Description; // 0x90
    bool m_bIsPublic; // 0x98
    CPulseValueFullType m_ReturnType; // 0xa0
    CUtlLeanVector< CPulseRuntimeMethodArg > m_Args; // 0xb8
};

// C_BaseCombatCharacter (size: 0x13d8)
struct C_BaseCombatCharacter {
    CHandle<T> m_hMyWearables; // 0x1350
    AttachmentHandle_t m_leftFootAttachment; // 0x1368
    AttachmentHandle_t m_rightFootAttachment; // 0x1369
    C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0x136c
    float m_flWaterWorldZ; // 0x1370
    float m_flWaterNextTraceTime; // 0x1374
};

// CGlowProperty (size: 0x58)
struct CGlowProperty {
    Vector m_fGlowColor; // 0x8
    int32_t m_iGlowType; // 0x30
    int32_t m_iGlowTeam; // 0x34
    int32_t m_nGlowRange; // 0x38
    int32_t m_nGlowRangeMin; // 0x3c
    Color m_glowColorOverride; // 0x40
    bool m_bFlashing; // 0x44
    float m_flGlowTime; // 0x48
    float m_flGlowStartTime; // 0x4c
    bool m_bEligibleForScreenHighlight; // 0x50
    bool m_bGlowing; // 0x51
};

// C_PointClientUIDialog (size: 0xec0)
struct C_PointClientUIDialog {
    CHandle<T> m_hActivator; // 0xeb8
    bool m_bStartEnabled; // 0xebc
};

// CPulseCell_BaseValue (size: 0x48)
struct CPulseCell_BaseValue {
};

// C_WeaponHKP2000 (size: 0x1f70)
struct C_WeaponHKP2000 {
};

// C_FootstepControl (size: 0xf68)
struct C_FootstepControl {
    CUtlSymbolLarge m_source; // 0xf58
    CUtlSymbolLarge m_destination; // 0xf60
};

// CCitadelSoundOpvarSetOBB (size: 0x670)
struct CCitadelSoundOpvarSetOBB {
    CUtlSymbolLarge m_iszStackName; // 0x620
    CUtlSymbolLarge m_iszOperatorName; // 0x628
    CUtlSymbolLarge m_iszOpvarName; // 0x630
    Vector m_vDistanceInnerMins; // 0x638
    Vector m_vDistanceInnerMaxs; // 0x644
    Vector m_vDistanceOuterMins; // 0x650
    Vector m_vDistanceOuterMaxs; // 0x65c
    int32_t m_nAABBDirection; // 0x668
};

// C_CSGO_EndOfMatchLineupStart (size: 0x608)
struct C_CSGO_EndOfMatchLineupStart {
};

// CPlayer_WaterServices (size: 0x48)
struct CPlayer_WaterServices {
};

// CPulseCell_BooleanSwitchState (size: 0x198)
struct CPulseCell_BooleanSwitchState {
    PulseObservableBoolExpression_t m_Condition; // 0x48
    CPulse_OutflowConnection m_SubGraph; // 0xc0
    CPulse_OutflowConnection m_WhenTrue; // 0x108
    CPulse_OutflowConnection m_WhenFalse; // 0x150
};

// VPhysicsCollisionAttribute_t (size: 0x30)
struct VPhysicsCollisionAttribute_t {
    uint64_t m_nInteractsAs; // 0x8
    uint64_t m_nInteractsWith; // 0x10
    uint64_t m_nInteractsExclude; // 0x18
    uint32_t m_nEntityId; // 0x20
    uint32_t m_nOwnerId; // 0x24
    uint16_t m_nHierarchyId; // 0x28
    uint16_t m_nDetailLayerMask; // 0x2a
    uint8_t m_nDetailLayerMaskType; // 0x2c
    uint8_t m_nTargetDetailLayer; // 0x2d
    uint8_t m_nCollisionGroup; // 0x2e
    uint8_t m_nCollisionFunctionMask; // 0x2f
};

// C_DynamicPropAlias_dynamic_prop (size: 0x13a0)
struct C_DynamicPropAlias_dynamic_prop {
};

// CEnvSoundscapeProxyAlias_snd_soundscape_proxy (size: 0x6a0)
struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
};

// C_OmniLight (size: 0x11a8)
struct C_OmniLight {
    float m_flInnerAngle; // 0x1198
    float m_flOuterAngle; // 0x119c
    bool m_bShowLight; // 0x11a0
};

// C_SceneEntity (size: 0x668)
struct C_SceneEntity {
    bool m_bIsPlayingBack; // 0x610
    bool m_bPaused; // 0x611
    bool m_bMultiplayer; // 0x612
    bool m_bAutogenerated; // 0x613
    float m_flForceClientTime; // 0x614
    uint16_t m_nSceneStringIndex; // 0x618
    bool m_bClientOnly; // 0x61a
    CHandle<T> m_hOwner; // 0x61c
    CHandle<T> m_hActorList; // 0x620
    bool m_bWasPlaying; // 0x638
    CUtlVector<T> m_QueuedEvents; // 0x648
    float m_flCurrentTime; // 0x660
};

// CPulseCell_Inflow_Yield (size: 0x90)
struct CPulseCell_Inflow_Yield {
    CPulse_ResumePoint m_UnyieldResume; // 0x48
};

// CPulseMathlib (size: 0x1)
struct CPulseMathlib {
};

// C_NametagModule (size: 0x1178)
struct C_NametagModule {
    CUtlString m_strNametagString; // 0x1170
};

// C_EconEntity (size: 0x18c0)
struct C_EconEntity {
    float m_flFlexDelayTime; // 0x1360
    float32* m_flFlexDelayedWeight; // 0x1368
    bool m_bAttributesInitialized; // 0x1370
    C_AttributeContainer m_AttributeManager; // 0x1378
    uint32_t m_OriginalOwnerXuidLow; // 0x1848
    uint32_t m_OriginalOwnerXuidHigh; // 0x184c
    int32_t m_nFallbackPaintKit; // 0x1850
    int32_t m_nFallbackSeed; // 0x1854
    float m_flFallbackWear; // 0x1858
    int32_t m_nFallbackStatTrak; // 0x185c
    bool m_bClientside; // 0x1860
    bool m_bParticleSystemsCreated; // 0x1861
    CUtlVector<T> m_vecAttachedParticles; // 0x1868
    CHandle<T> m_hViewmodelAttachment; // 0x1880
    int32_t m_iOldTeam; // 0x1884
    bool m_bAttachmentDirty; // 0x1888
    int32_t m_nUnloadedModelIndex; // 0x188c
    int32_t m_iNumOwnerValidationRetries; // 0x1890
    CHandle<T> m_hOldProvidee; // 0x18a0
    CUtlVector<T> m_vecAttachedModels; // 0x18a8
};

// CPlayer_UseServices (size: 0x48)
struct CPlayer_UseServices {
};

// C_PointValueRemapper (size: 0x680)
struct C_PointValueRemapper {
    bool m_bDisabled; // 0x608
    bool m_bDisabledOld; // 0x609
    bool m_bUpdateOnClient; // 0x60a
    ValueRemapperInputType_t m_nInputType; // 0x60c
    CHandle<T> m_hRemapLineStart; // 0x610
    CHandle<T> m_hRemapLineEnd; // 0x614
    float m_flMaximumChangePerSecond; // 0x618
    float m_flDisengageDistance; // 0x61c
    float m_flEngageDistance; // 0x620
    bool m_bRequiresUseKey; // 0x624
    ValueRemapperOutputType_t m_nOutputType; // 0x628
    CHandle<T> m_hOutputEntities; // 0x630
    ValueRemapperHapticsType_t m_nHapticsType; // 0x648
    ValueRemapperMomentumType_t m_nMomentumType; // 0x64c
    float m_flMomentumModifier; // 0x650
    float m_flSnapValue; // 0x654
    float m_flCurrentMomentum; // 0x658
    ValueRemapperRatchetType_t m_nRatchetType; // 0x65c
    float m_flRatchetOffset; // 0x660
    float m_flInputOffset; // 0x664
    bool m_bEngaged; // 0x668
    bool m_bFirstUpdate; // 0x669
    float m_flPreviousValue; // 0x66c
    GameTime_t m_flPreviousUpdateTickTime; // 0x670
    Vector m_vecPreviousTestPoint; // 0x674
};

// CGameSceneNodeHandle (size: 0x10)
struct CGameSceneNodeHandle {
    CEntityHandle m_hOwner; // 0x8
    CUtlString m_name; // 0xc
};

// CPulseCell_Unknown (size: 0x58)
struct CPulseCell_Unknown {
    KeyValues3 m_UnknownKeys; // 0x48
};

// C_WeaponMP7 (size: 0x1f70)
struct C_WeaponMP7 {
};

// CSPerRoundStats_t (size: 0x68)
struct CSPerRoundStats_t {
    int32_t m_iKills; // 0x30
    int32_t m_iDeaths; // 0x34
    int32_t m_iAssists; // 0x38
    int32_t m_iDamage; // 0x3c
    int32_t m_iEquipmentValue; // 0x40
    int32_t m_iMoneySaved; // 0x44
    int32_t m_iKillReward; // 0x48
    int32_t m_iLiveTime; // 0x4c
    int32_t m_iHeadShotKills; // 0x50
    int32_t m_iObjective; // 0x54
    int32_t m_iCashEarned; // 0x58
    int32_t m_iUtilityDamage; // 0x5c
    int32_t m_iEnemiesFlashed; // 0x60
};

// CPulseCell_Outflow_CycleRandom (size: 0x60)
struct CPulseCell_Outflow_CycleRandom {
    CUtlVector<T> m_Outputs; // 0x48
};

// CPulseCell_Step_PublicOutput (size: 0x50)
struct CPulseCell_Step_PublicOutput {
    PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48
};

// C_CS2HudModelBase (size: 0x1230)
struct C_CS2HudModelBase {
};

// C_CSGameRules (size: 0x4f60)
struct C_CSGameRules {
    bool m_bFreezePeriod; // 0x40
    bool m_bWarmupPeriod; // 0x41
    GameTime_t m_fWarmupPeriodEnd; // 0x44
    GameTime_t m_fWarmupPeriodStart; // 0x48
    bool m_bTerroristTimeOutActive; // 0x4c
    bool m_bCTTimeOutActive; // 0x4d
    float m_flTerroristTimeOutRemaining; // 0x50
    float m_flCTTimeOutRemaining; // 0x54
    int32_t m_nTerroristTimeOuts; // 0x58
    int32_t m_nCTTimeOuts; // 0x5c
    bool m_bTechnicalTimeOut; // 0x60
    bool m_bMatchWaitingForResume; // 0x61
    int32_t m_iFreezeTime; // 0x64
    int32_t m_iRoundTime; // 0x68
    float m_fMatchStartTime; // 0x6c
    GameTime_t m_fRoundStartTime; // 0x70
    GameTime_t m_flRestartRoundTime; // 0x74
    bool m_bGameRestart; // 0x78
    float m_flGameStartTime; // 0x7c
    float m_timeUntilNextPhaseStarts; // 0x80
    int32_t m_gamePhase; // 0x84
    int32_t m_totalRoundsPlayed; // 0x88
    int32_t m_nRoundsPlayedThisPhase; // 0x8c
    int32_t m_nOvertimePlaying; // 0x90
    int32_t m_iHostagesRemaining; // 0x94
    bool m_bAnyHostageReached; // 0x98
    bool m_bMapHasBombTarget; // 0x99
    bool m_bMapHasRescueZone; // 0x9a
    bool m_bMapHasBuyZone; // 0x9b
    bool m_bIsQueuedMatchmaking; // 0x9c
    int32_t m_nQueuedMatchmakingMode; // 0xa0
    bool m_bIsValveDS; // 0xa4
    bool m_bLogoMap; // 0xa5
    bool m_bPlayAllStepSoundsOnServer; // 0xa6
    int32_t m_iSpectatorSlotCount; // 0xa8
    int32_t m_MatchDevice; // 0xac
    bool m_bHasMatchStarted; // 0xb0
    int32_t m_nNextMapInMapgroup; // 0xb4
    char[512] m_szTournamentEventName; // 0xb8
    char[512] m_szTournamentEventStage; // 0x2b8
    char[512] m_szMatchStatTxt; // 0x4b8
    char[512] m_szTournamentPredictionsTxt; // 0x6b8
    int32_t m_nTournamentPredictionsPct; // 0x8b8
    GameTime_t m_flCMMItemDropRevealStartTime; // 0x8bc
    GameTime_t m_flCMMItemDropRevealEndTime; // 0x8c0
    bool m_bIsDroppingItems; // 0x8c4
    bool m_bIsQuestEligible; // 0x8c5
    bool m_bIsHltvActive; // 0x8c6
    bool m_bBombPlanted; // 0x8c7
    uint16[100] m_arrProhibitedItemIndices; // 0x8c8
    uint32[4] m_arrTournamentActiveCasterAccounts; // 0x990
    int32_t m_numBestOfMaps; // 0x9a0
    int32_t m_nHalloweenMaskListSeed; // 0x9a4
    bool m_bBombDropped; // 0x9a8
    int32_t m_iRoundWinStatus; // 0x9ac
    int32_t m_eRoundWinReason; // 0x9b0
    bool m_bTCantBuy; // 0x9b4
    bool m_bCTCantBuy; // 0x9b5
    int32[30] m_iMatchStats_RoundResults; // 0x9b8
    int32[30] m_iMatchStats_PlayersAlive_CT; // 0xa30
    int32[30] m_iMatchStats_PlayersAlive_T; // 0xaa8
    float32[32] m_TeamRespawnWaveTimes; // 0xb20
    GameTime_t[32] m_flNextRespawnWave; // 0xba0
    Vector m_vMinimapMins; // 0xc20
    Vector m_vMinimapMaxs; // 0xc2c
    float32[8] m_MinimapVerticalSectionHeights; // 0xc38
    uint64_t m_ullLocalMatchID; // 0xc58
    int32[10] m_nEndMatchMapGroupVoteTypes; // 0xc60
    int32[10] m_nEndMatchMapGroupVoteOptions; // 0xc88
    int32_t m_nEndMatchMapVoteWinner; // 0xcb0
    int32_t m_iNumConsecutiveCTLoses; // 0xcb4
    int32_t m_iNumConsecutiveTerroristLoses; // 0xcb8
    int32_t m_nMatchAbortedEarlyReason; // 0xd78
    bool m_bHasTriggeredRoundStartMusic; // 0xd7c
    bool m_bSwitchingTeamsAtRoundReset; // 0xd7d
    CCSGameModeRules* m_pGameModeRules; // 0xd98
    C_RetakeGameRules m_RetakeRules; // 0xda0
    uint8_t m_nMatchEndCount; // 0xef8
    int32_t m_nTTeamIntroVariant; // 0xefc
    int32_t m_nCTTeamIntroVariant; // 0xf00
    bool m_bTeamIntroPeriod; // 0xf04
    int32_t m_iRoundEndWinnerTeam; // 0xf08
    int32_t m_eRoundEndReason; // 0xf0c
    bool m_bRoundEndShowTimerDefend; // 0xf10
    int32_t m_iRoundEndTimerTime; // 0xf14
    CUtlString m_sRoundEndFunFactToken; // 0xf18
    CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0xf20
    int32_t m_iRoundEndFunFactData1; // 0xf24
    int32_t m_iRoundEndFunFactData2; // 0xf28
    int32_t m_iRoundEndFunFactData3; // 0xf2c
    CUtlString m_sRoundEndMessage; // 0xf30
    int32_t m_iRoundEndPlayerCount; // 0xf38
    bool m_bRoundEndNoMusic; // 0xf3c
    int32_t m_iRoundEndLegacy; // 0xf40
    uint8_t m_nRoundEndCount; // 0xf44
    int32_t m_iRoundStartRoundNumber; // 0xf48
    uint8_t m_nRoundStartCount; // 0xf4c
    double m_flLastPerfSampleTime; // 0x4f58
};

// CGrenadeTracer (size: 0x1320)
struct CGrenadeTracer {
    float m_flTracerDuration; // 0xea0
    GrenadeType_t m_nType; // 0xea4
};

// CCSGameModeRules_Noop (size: 0x30)
struct CCSGameModeRules_Noop {
};

// CPulse_BlackboardReference (size: 0x28)
struct CPulse_BlackboardReference {
    CStrongHandle<T> m_hBlackboardResource; // 0x0
    PulseSymbol_t m_BlackboardResource; // 0x8
    PulseDocNodeID_t m_nNodeID; // 0x18
    CGlobalSymbol m_NodeName; // 0x20
};

// C_BaseCSGrenadeProjectile (size: 0x1438)
struct C_BaseCSGrenadeProjectile {
    Vector m_vInitialPosition; // 0x13a0
    Vector m_vInitialVelocity; // 0x13ac
    int32_t m_nBounces; // 0x13b8
    CStrongHandle<T> m_nExplodeEffectIndex; // 0x13c0
    int32_t m_nExplodeEffectTickBegin; // 0x13c8
    Vector m_vecExplodeEffectOrigin; // 0x13cc
    GameTime_t m_flSpawnTime; // 0x13d8
    Vector vecLastTrailLinePos; // 0x13dc
    GameTime_t flNextTrailLineTime; // 0x13e8
    bool m_bExplodeEffectBegan; // 0x13ec
    bool m_bCanCreateGrenadeTrail; // 0x13ed
    ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x13f0
    CStrongHandle<T> m_hSnapshotTrajectoryParticleSnapshot; // 0x13f8
    CUtlVector<T> m_arrTrajectoryTrailPoints; // 0x1400
    CUtlVector<T> m_arrTrajectoryTrailPointCreationTimes; // 0x1418
    float m_flTrajectoryTrailEffectCreationTime; // 0x1430
};

// C_GradientFog (size: 0x6a0)
struct C_GradientFog {
    CStrongHandle<T> m_hGradientFogTexture; // 0x608
    float m_flFogStartDistance; // 0x610
    float m_flFogEndDistance; // 0x614
    bool m_bHeightFogEnabled; // 0x618
    float m_flFogStartHeight; // 0x61c
    float m_flFogEndHeight; // 0x620
    float m_flFarZ; // 0x624
    float m_flFogMaxOpacity; // 0x628
    float m_flFogFalloffExponent; // 0x62c
    float m_flFogVerticalExponent; // 0x630
    Color m_fogColor; // 0x634
    float m_flFogStrength; // 0x638
    float m_flFadeTime; // 0x63c
    bool m_bStartDisabled; // 0x640
    bool m_bIsEnabled; // 0x641
    bool m_bGradientFogNeedsTextures; // 0x642
};

// CCSPlayerController_InGameMoneyServices (size: 0x50)
struct CCSPlayerController_InGameMoneyServices {
    int32_t m_iAccount; // 0x40
    int32_t m_iStartAccount; // 0x44
    int32_t m_iTotalCashSpent; // 0x48
    int32_t m_iCashSpentThisRound; // 0x4c
};

// C_HEGrenadeProjectile (size: 0x1438)
struct C_HEGrenadeProjectile {
};

// CAnimGraphNetworkedVariables (size: 0x1490)
struct CAnimGraphNetworkedVariables {
    C_NetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; // 0x8
    C_NetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // 0x20
    C_NetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // 0x38
    C_NetworkUtlVectorBase< int32 > m_PredNetIntVariables; // 0x50
    C_NetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // 0x68
    C_NetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables; // 0x80
    C_NetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // 0x98
    C_NetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // 0xb0
    C_NetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // 0xc8
    C_NetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables; // 0xe0
    C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; // 0xf8
    C_NetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; // 0x110
    C_NetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; // 0x128
    C_NetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; // 0x140
    C_NetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; // 0x158
    C_NetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables; // 0x170
    C_NetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; // 0x188
    C_NetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; // 0x1a0
    C_NetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; // 0x1b8
    C_NetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables; // 0x1d0
    int32_t m_nBoolVariablesCount; // 0x1e8
    int32_t m_nOwnerOnlyBoolVariablesCount; // 0x1ec
    int32_t m_nRandomSeedOffset; // 0x1f0
    float m_flLastTeleportTime; // 0x1f4
};

// CFilterModel (size: 0x648)
struct CFilterModel {
    CUtlSymbolLarge m_iFilterModel; // 0x640
};

// C_SoundAreaEntityOrientedBox (size: 0x648)
struct C_SoundAreaEntityOrientedBox {
    Vector m_vMin; // 0x630
    Vector m_vMax; // 0x63c
};

// C_SoundOpvarSetPointEntity (size: 0x628)
struct C_SoundOpvarSetPointEntity {
};

// CPulseGameBlackboard (size: 0x620)
struct CPulseGameBlackboard {
    CUtlString m_strGraphName; // 0x610
    CUtlString m_strStateBlob; // 0x618
};

// CPulseCell_Value_RandomInt (size: 0x48)
struct CPulseCell_Value_RandomInt {
};

// C_CSWeaponBaseShotgun (size: 0x1f40)
struct C_CSWeaponBaseShotgun {
};

// C_RagdollPropAttached (size: 0x1230)
struct C_RagdollPropAttached {
    uint32_t m_boneIndexAttached; // 0x11f8
    uint32_t m_ragdollAttachedObjectIndex; // 0x11fc
    Vector m_attachmentPointBoneSpace; // 0x1200
    Vector m_attachmentPointRagdollSpace; // 0x120c
    Vector m_vecOffset; // 0x1218
    float m_parentTime; // 0x1224
    bool m_bHasParent; // 0x1228
};

// C_ModelPointEntity (size: 0xe88)
struct C_ModelPointEntity {
};

// C_CSGO_PreviewPlayer (size: 0x3fa0)
struct C_CSGO_PreviewPlayer {
    CGlobalSymbol m_animgraphCharacterModeString; // 0x3ef0
    float m_flInitialModelScale; // 0x3ef8
};

// C_RectLight (size: 0x11a0)
struct C_RectLight {
    bool m_bShowLight; // 0x1198
};

// CPathSimple (size: 0x710)
struct CPathSimple {
    CPathQueryComponent m_CPathQueryComponent; // 0x610
    CUtlString m_pathString; // 0x700
    bool m_bClosedLoop; // 0x708
};

// C_FuncTrackTrain (size: 0xe98)
struct C_FuncTrackTrain {
    int32_t m_nLongAxis; // 0xe88
    float m_flRadius; // 0xe8c
    float m_flLineLength; // 0xe90
};

// C_EconWearable (size: 0x18c8)
struct C_EconWearable {
    int32_t m_nForceSkin; // 0x18c0
    bool m_bAlwaysAllow; // 0x18c4
};

// C_EnvDecal (size: 0xec0)
struct C_EnvDecal {
    CStrongHandle<T> m_hDecalMaterial; // 0xe88
    float m_flWidth; // 0xe90
    float m_flHeight; // 0xe94
    float m_flDepth; // 0xe98
    uint32_t m_nRenderOrder; // 0xe9c
    bool m_bProjectOnWorld; // 0xea0
    bool m_bProjectOnCharacters; // 0xea1
    bool m_bProjectOnWater; // 0xea2
    float m_flDepthSortBias; // 0xea4
};

// EntitySpottedState_t (size: 0x18)
struct EntitySpottedState_t {
    bool m_bSpotted; // 0x8
    uint32[2] m_bSpottedByMask; // 0xc
};

// fogparams_t (size: 0x68)
struct fogparams_t {
    Vector dirPrimary; // 0x8
    Color colorPrimary; // 0x14
    Color colorSecondary; // 0x18
    Color colorPrimaryLerpTo; // 0x1c
    Color colorSecondaryLerpTo; // 0x20
    float start; // 0x24
    float end; // 0x28
    float farz; // 0x2c
    float maxdensity; // 0x30
    float exponent; // 0x34
    float HDRColorScale; // 0x38
    float skyboxFogFactor; // 0x3c
    float skyboxFogFactorLerpTo; // 0x40
    float startLerpTo; // 0x44
    float endLerpTo; // 0x48
    float maxdensityLerpTo; // 0x4c
    GameTime_t lerptime; // 0x50
    float duration; // 0x54
    float blendtobackground; // 0x58
    float scattering; // 0x5c
    float locallightscale; // 0x60
    bool enable; // 0x64
    bool blend; // 0x65
    bool m_bPadding2; // 0x66
    bool m_bPadding; // 0x67
};

// C_WeaponM4A1 (size: 0x1f70)
struct C_WeaponM4A1 {
};

// C_Item (size: 0x19c0)
struct C_Item {
    char[256] m_pReticleHintTextName; // 0x18c0
};

// C_CSPetPlacement (size: 0x608)
struct C_CSPetPlacement {
};

// C_Beam (size: 0xf48)
struct C_Beam {
    float m_flFrameRate; // 0xe88
    float m_flHDRColorScale; // 0xe8c
    GameTime_t m_flFireTime; // 0xe90
    float m_flDamage; // 0xe94
    uint8_t m_nNumBeamEnts; // 0xe98
    int32_t m_queryHandleHalo; // 0xe9c
    CStrongHandle<T> m_hBaseMaterial; // 0xec0
    CStrongHandle<T> m_nHaloIndex; // 0xec8
    BeamType_t m_nBeamType; // 0xed0
    uint32_t m_nBeamFlags; // 0xed4
    CHandle<T> m_hAttachEntity; // 0xed8
    AttachmentHandle_t[10] m_nAttachIndex; // 0xf00
    float m_fWidth; // 0xf0c
    float m_fEndWidth; // 0xf10
    float m_fFadeLength; // 0xf14
    float m_fHaloScale; // 0xf18
    float m_fAmplitude; // 0xf1c
    float m_fStartFrame; // 0xf20
    float m_fSpeed; // 0xf24
    float m_flFrame; // 0xf28
    BeamClipStyle_t m_nClipStyle; // 0xf2c
    bool m_bTurnedOff; // 0xf30
    VectorWS m_vecEndPos; // 0xf34
    CHandle<T> m_hEndEntity; // 0xf40
};

// C_EnvLightProbeVolume (size: 0x1698)
struct C_EnvLightProbeVolume {
    CStrongHandle<T> m_Entity_hLightProbeTexture_AmbientCube; // 0x1600
    CStrongHandle<T> m_Entity_hLightProbeTexture_SDF; // 0x1608
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_DC; // 0x1610
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_R; // 0x1618
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_G; // 0x1620
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_B; // 0x1628
    CStrongHandle<T> m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1630
    CStrongHandle<T> m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1638
    CStrongHandle<T> m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1640
    Vector m_Entity_vBoxMins; // 0x1648
    Vector m_Entity_vBoxMaxs; // 0x1654
    bool m_Entity_bMoveable; // 0x1660
    int32_t m_Entity_nHandshake; // 0x1664
    int32_t m_Entity_nPriority; // 0x1668
    bool m_Entity_bStartDisabled; // 0x166c
    int32_t m_Entity_nLightProbeSizeX; // 0x1670
    int32_t m_Entity_nLightProbeSizeY; // 0x1674
    int32_t m_Entity_nLightProbeSizeZ; // 0x1678
    int32_t m_Entity_nLightProbeAtlasX; // 0x167c
    int32_t m_Entity_nLightProbeAtlasY; // 0x1680
    int32_t m_Entity_nLightProbeAtlasZ; // 0x1684
    bool m_Entity_bEnabled; // 0x1691
};

// C_FuncConveyor (size: 0xed0)
struct C_FuncConveyor {
    Vector m_vecMoveDirEntitySpace; // 0xe90
    float m_flTargetSpeed; // 0xe9c
    GameTick_t m_nTransitionStartTick; // 0xea0
    int32_t m_nTransitionDurationTicks; // 0xea4
    float m_flTransitionStartSpeed; // 0xea8
    CHandle<T> m_hConveyorModels; // 0xeb0
    float m_flCurrentConveyorOffset; // 0xec8
    float m_flCurrentConveyorSpeed; // 0xecc
};

// CCSPlayer_WeaponServices (size: 0x15d0)
struct CCSPlayer_WeaponServices {
    GameTime_t m_flNextAttack; // 0xd0
    bool m_bIsLookingAtWeapon; // 0xd4
    bool m_bIsHoldingLookAtWeapon; // 0xd5
    uint32_t m_nOldTotalShootPositionHistoryCount; // 0xd8
    uint32_t m_nOldTotalInputHistoryCount; // 0x370
    C_NetworkUtlVectorBase< uint8 > m_networkAnimTiming; // 0x1588
    bool m_bBlockInspectUntilNextGraphUpdate; // 0x15a0
};

// C_PhysMagnet (size: 0x1198)
struct C_PhysMagnet {
    CUtlVector<T> m_aAttachedObjectsFromServer; // 0x1168
    CUtlVector<T> m_aAttachedObjects; // 0x1180
};

// CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable (size: 0x698)
struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
};

// C_Breakable (size: 0xe88)
struct C_Breakable {
};

// C_PlantedC4 (size: 0x16e0)
struct C_PlantedC4 {
    bool m_bBombTicking; // 0x1170
    int32_t m_nBombSite; // 0x1174
    int32_t m_nSourceSoundscapeHash; // 0x1178
    EntitySpottedState_t m_entitySpottedState; // 0x1180
    GameTime_t m_flNextGlow; // 0x1198
    GameTime_t m_flNextBeep; // 0x119c
    GameTime_t m_flC4Blow; // 0x11a0
    bool m_bCannotBeDefused; // 0x11a4
    bool m_bHasExploded; // 0x11a5
    float m_flTimerLength; // 0x11a8
    bool m_bBeingDefused; // 0x11ac
    float m_bTriggerWarning; // 0x11b0
    float m_bExplodeWarning; // 0x11b4
    bool m_bC4Activated; // 0x11b8
    bool m_bTenSecWarning; // 0x11b9
    float m_flDefuseLength; // 0x11bc
    GameTime_t m_flDefuseCountDown; // 0x11c0
    bool m_bBombDefused; // 0x11c4
    CHandle<T> m_hBombDefuser; // 0x11c8
    C_AttributeContainer m_AttributeManager; // 0x11d0
    CHandle<T> m_hDefuserMultimeter; // 0x16a0
    GameTime_t m_flNextRadarFlashTime; // 0x16a4
    bool m_bRadarFlash; // 0x16a8
    CHandle<T> m_pBombDefuser; // 0x16ac
    GameTime_t m_fLastDefuseTime; // 0x16b0
    CBasePlayerController* m_pPredictionOwner; // 0x16b8
    Vector m_vecC4ExplodeSpectatePos; // 0x16c0
    QAngle m_vecC4ExplodeSpectateAng; // 0x16cc
    float m_flC4ExplodeSpectateDuration; // 0x16d8
};

// CCSGO_WingmanIntroCharacterPosition (size: 0x13a8)
struct CCSGO_WingmanIntroCharacterPosition {
};

// CFilterName (size: 0x648)
struct CFilterName {
    CUtlSymbolLarge m_iFilterName; // 0x640
};

// C_RagdollProp (size: 0x11f8)
struct C_RagdollProp {
    C_NetworkUtlVectorBase< bool > m_ragEnabled; // 0x1170
    C_NetworkUtlVectorBase< Vector > m_ragPos; // 0x1188
    C_NetworkUtlVectorBase< QAngle > m_ragAngles; // 0x11a0
    float m_flBlendWeight; // 0x11b8
    CHandle<T> m_hRagdollSource; // 0x11bc
    AttachmentHandle_t m_iEyeAttachment; // 0x11c0
    float m_flBlendWeightCurrent; // 0x11c4
    CUtlVector<T> m_parentPhysicsBoneIndices; // 0x11c8
    CUtlVector<T> m_worldSpaceBoneComputationOrder; // 0x11e0
};

// CPulse_CallInfo (size: 0x58)
struct CPulse_CallInfo {
    PulseSymbol_t m_PortName; // 0x0
    PulseDocNodeID_t m_nEditorNodeID; // 0x10
    PulseRegisterMap_t m_RegisterMap; // 0x18
    PulseDocNodeID_t m_CallMethodID; // 0x48
    PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x4c
    int32_t m_nSrcInstruction; // 0x50
};

// C_MapPreviewParticleSystem (size: 0x1438)
struct C_MapPreviewParticleSystem {
};

// CBaseAnimGraph (size: 0x1168)
struct CBaseAnimGraph {
    CAnimGraphControllerManager m_graphControllerManager; // 0xe88
    CAnimGraphControllerBase* m_pMainGraphController; // 0xf38
    bool m_bInitiallyPopulateInterpHistory; // 0xf40
    bool m_bSuppressAnimEventSounds; // 0xf42
    bool m_bAnimGraphUpdateEnabled; // 0xf50
    float m_flMaxSlopeDistance; // 0xf54
    VectorWS m_vLastSlopeCheckPos; // 0xf58
    uint32_t m_nAnimGraphUpdateId; // 0xf64
    bool m_bAnimationUpdateScheduled; // 0xf68
    Vector m_vecForce; // 0xf6c
    int32_t m_nForceBone; // 0xf78
    CBaseAnimGraph* m_pClientsideRagdoll; // 0xf80
    bool m_bBuiltRagdoll; // 0xf88
    PhysicsRagdollPose_t m_RagdollPose; // 0xfa0
    bool m_bRagdollEnabled; // 0xfe8
    bool m_bRagdollClientSide; // 0xfe9
    bool m_bHasAnimatedMaterialAttributes; // 0xff8
};

// CPulseCell_InlineNodeSkipSelector (size: 0xb0)
struct CPulseCell_InlineNodeSkipSelector {
    PulseDocNodeID_t m_nFlowNodeID; // 0x48
    bool m_bAnd; // 0x4c
    PulseSelectorOutflowList_t m_PassOutflow; // 0x50
    CPulse_OutflowConnection m_FailOutflow; // 0x68
};

// C_LightEntity (size: 0xe90)
struct C_LightEntity {
    CLightComponent* m_CLightComponent; // 0xe88
};

// C_WeaponM249 (size: 0x1f70)
struct C_WeaponM249 {
};

// C_LocalTempEntity (size: 0x1210)
struct C_LocalTempEntity {
    int32_t flags; // 0x1168
    GameTime_t die; // 0x116c
    float m_flFrameMax; // 0x1170
    float x; // 0x1174
    float y; // 0x1178
    float fadeSpeed; // 0x117c
    float bounceFactor; // 0x1180
    int32_t hitSound; // 0x1184
    int32_t priority; // 0x1188
    Vector tentOffset; // 0x118c
    QAngle m_vecTempEntAngVelocity; // 0x1198
    int32_t tempent_renderamt; // 0x11a4
    Vector m_vecNormal; // 0x11a8
    float m_flSpriteScale; // 0x11b4
    int32_t m_nFlickerFrame; // 0x11b8
    float m_flFrameRate; // 0x11bc
    float m_flFrame; // 0x11c0
    char* m_pszImpactEffect; // 0x11c8
    char* m_pszParticleEffect; // 0x11d0
    bool m_bParticleCollision; // 0x11d8
    int32_t m_iLastCollisionFrame; // 0x11dc
    Vector m_vLastCollisionOrigin; // 0x11e0
    Vector m_vecTempEntVelocity; // 0x11ec
    Vector m_vecPrevAbsOrigin; // 0x11f8
    Vector m_vecTempEntAcceleration; // 0x1204
};

// C_WeaponTaser (size: 0x1f80)
struct C_WeaponTaser {
    GameTime_t m_fFireTime; // 0x1f70
    int32_t m_nLastAttackTick; // 0x1f74
};

// C_PointEntity (size: 0x608)
struct C_PointEntity {
};

// C_SingleplayRules (size: 0x40)
struct C_SingleplayRules {
};

// CLogicalEntity (size: 0x608)
struct CLogicalEntity {
};

// C_PrecipitationBlocker (size: 0xe88)
struct C_PrecipitationBlocker {
};

// C_CSGO_CounterTerroristTeamIntroCamera (size: 0x698)
struct C_CSGO_CounterTerroristTeamIntroCamera {
};

// C_SoundOpvarSetPathCornerEntity (size: 0x628)
struct C_SoundOpvarSetPathCornerEntity {
};

// CPlayer_WeaponServices (size: 0xa8)
struct CPlayer_WeaponServices {
    CHandle<T> m_hMyWeapons; // 0x48
    CHandle<T> m_hActiveWeapon; // 0x60
    CHandle<T> m_hLastWeapon; // 0x64
    uint16[32] m_iAmmo; // 0x68
};

// C_WeaponNegev (size: 0x1f70)
struct C_WeaponNegev {
};

// C_WeaponFiveSeven (size: 0x1f70)
struct C_WeaponFiveSeven {
};

// C_WeaponSawedoff (size: 0x1f40)
struct C_WeaponSawedoff {
};

// C_TriggerVolume (size: 0xe88)
struct C_TriggerVolume {
};

// CPulseCell_LimitCount (size: 0x50)
struct CPulseCell_LimitCount {
    int32_t m_nLimitCount; // 0x48
};

// CPulseCell_Step_CallExternalMethod (size: 0xc8)
struct CPulseCell_Step_CallExternalMethod {
    PulseSymbol_t m_MethodName; // 0x48
    PulseSymbol_t m_GameBlackboard; // 0x58
    CUtlLeanVector< CPulseRuntimeMethodArg > m_ExpectedArgs; // 0x68
    PulseMethodCallMode_t m_nAsyncCallMode; // 0x78
    CPulse_ResumePoint m_OnFinished; // 0x80
};

// C_WeaponMP9 (size: 0x1f70)
struct C_WeaponMP9 {
};

// C_DynamicPropAlias_prop_dynamic_override (size: 0x13a0)
struct C_DynamicPropAlias_prop_dynamic_override {
};

// CEnvSoundscapeTriggerable (size: 0x698)
struct CEnvSoundscapeTriggerable {
};

// C_PlayerPing (size: 0x658)
struct C_PlayerPing {
    CHandle<T> m_hPlayer; // 0x638
    CHandle<T> m_hPingedEntity; // 0x63c
    int32_t m_iType; // 0x640
    bool m_bUrgent; // 0x644
    char[18] m_szPlaceName; // 0x645
};

// C_AK47 (size: 0x1f70)
struct C_AK47 {
};

// C_CSGO_MapPreviewCameraPathNode (size: 0x658)
struct C_CSGO_MapPreviewCameraPathNode {
    CUtlSymbolLarge m_szParentPathUniqueID; // 0x608
    int32_t m_nPathIndex; // 0x610
    Vector m_vInTangentLocal; // 0x614
    Vector m_vOutTangentLocal; // 0x620
    float m_flFOV; // 0x62c
    float m_flCameraSpeed; // 0x630
    float m_flEaseIn; // 0x634
    float m_flEaseOut; // 0x638
    Vector m_vInTangentWorld; // 0x63c
    Vector m_vOutTangentWorld; // 0x648
};

// C_CSPlayerResource (size: 0x6a0)
struct C_CSPlayerResource {
    bool[12] m_bHostageAlive; // 0x608
    bool[12] m_isHostageFollowingSomeone; // 0x614
    CEntityIndex[12] m_iHostageEntityIDs; // 0x620
    Vector m_bombsiteCenterA; // 0x650
    Vector m_bombsiteCenterB; // 0x65c
    int32[4] m_hostageRescueX; // 0x668
    int32[4] m_hostageRescueY; // 0x678
    int32[4] m_hostageRescueZ; // 0x688
    bool m_bEndMatchNextMapAllVoted; // 0x698
    bool m_foundGoalPositions; // 0x699
};

// CSkyboxReference (size: 0x610)
struct CSkyboxReference {
    WorldGroupId_t m_worldGroupId; // 0x608
    CHandle<T> m_hSkyCamera; // 0x60c
};

// C_IncendiaryGrenade (size: 0x2000)
struct C_IncendiaryGrenade {
};

// CFilterClass (size: 0x648)
struct CFilterClass {
    CUtlSymbolLarge m_iFilterClass; // 0x640
};

// C_PointCameraVFOV (size: 0x670)
struct C_PointCameraVFOV {
    float m_flVerticalFOV; // 0x668
};

// C_PointCamera (size: 0x668)
struct C_PointCamera {
    float m_FOV; // 0x608
    float m_Resolution; // 0x60c
    bool m_bFogEnable; // 0x610
    Color m_FogColor; // 0x611
    float m_flFogStart; // 0x618
    float m_flFogEnd; // 0x61c
    float m_flFogMaxDensity; // 0x620
    bool m_bActive; // 0x624
    bool m_bUseScreenAspectRatio; // 0x625
    float m_flAspectRatio; // 0x628
    bool m_bNoSky; // 0x62c
    float m_fBrightness; // 0x630
    float m_flZFar; // 0x634
    float m_flZNear; // 0x638
    bool m_bCanHLTVUse; // 0x63c
    bool m_bAlignWithParent; // 0x63d
    bool m_bDofEnabled; // 0x63e
    float m_flDofNearBlurry; // 0x640
    float m_flDofNearCrisp; // 0x644
    float m_flDofFarCrisp; // 0x648
    float m_flDofFarBlurry; // 0x64c
    float m_flDofTiltToGround; // 0x650
    float m_TargetFOV; // 0x654
    float m_DegreesPerSecond; // 0x658
    bool m_bIsOn; // 0x65c
    C_PointCamera* m_pNext; // 0x660
};

// CPathWithDynamicNodes (size: 0x750)
struct CPathWithDynamicNodes {
    CHandle<T> m_vecPathNodes; // 0x710
    CTransform m_xInitialPathWorldToLocal; // 0x730
};

// CBaseFilter (size: 0x640)
struct CBaseFilter {
    bool m_bNegated; // 0x608
    CEntityIOOutput m_OnPass; // 0x610
    CEntityIOOutput m_OnFail; // 0x628
};

// WeaponPurchaseTracker_t (size: 0x70)
struct WeaponPurchaseTracker_t {
    C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t > m_weaponPurchases; // 0x8
};

// PulseObservableBoolExpression_t (size: 0x78)
struct PulseObservableBoolExpression_t {
    CPulse_OutflowConnection m_EvaluateConnection; // 0x0
    CUtlVector<T> m_DependentObservableVars; // 0x48
    CUtlVector<T> m_DependentObservableBlackboardReferences; // 0x60
};

// CMapInfo (size: 0x638)
struct CMapInfo {
    int32_t m_iBuyingStatus; // 0x608
    float m_flBombRadius; // 0x60c
    int32_t m_iPetPopulation; // 0x610
    bool m_bUseNormalSpawnsForDM; // 0x614
    bool m_bDisableAutoGeneratedDMSpawns; // 0x615
    float m_flBotMaxVisionDistance; // 0x618
    int32_t m_iHostageCount; // 0x61c
    bool m_bFadePlayerVisibilityFarZ; // 0x620
    bool m_bRainTraceToSkyEnabled; // 0x621
    float m_flEnvRainStrength; // 0x624
    float m_flEnvPuddleRippleStrength; // 0x628
    float m_flEnvPuddleRippleDirection; // 0x62c
    float m_flEnvWetnessCoverage; // 0x630
    float m_flEnvWetnessDryingAmount; // 0x634
};

// C_CSGO_EndOfMatchCamera (size: 0x698)
struct C_CSGO_EndOfMatchCamera {
};

// C_BaseGrenade (size: 0x13a0)
struct C_BaseGrenade {
    bool m_bHasWarnedAI; // 0x1350
    bool m_bIsSmokeGrenade; // 0x1351
    bool m_bIsLive; // 0x1352
    float m_DmgRadius; // 0x1354
    GameTime_t m_flDetonateTime; // 0x1358
    float m_flWarnAITime; // 0x135c
    float m_flDamage; // 0x1360
    CUtlSymbolLarge m_iszBounceSound; // 0x1368
    CUtlString m_ExplosionSound; // 0x1370
    CHandle<T> m_hThrower; // 0x137c
    GameTime_t m_flNextAttack; // 0x1394
    CHandle<T> m_hOriginalThrower; // 0x1398
};

// C_PlayerSprayDecal (size: 0xf98)
struct C_PlayerSprayDecal {
    int32_t m_nUniqueID; // 0xe88
    uint32_t m_unAccountID; // 0xe8c
    uint32_t m_unTraceID; // 0xe90
    uint32_t m_rtGcTime; // 0xe94
    Vector m_vecEndPos; // 0xe98
    Vector m_vecStart; // 0xea4
    Vector m_vecLeft; // 0xeb0
    Vector m_vecNormal; // 0xebc
    int32_t m_nPlayer; // 0xec8
    int32_t m_nEntity; // 0xecc
    int32_t m_nHitbox; // 0xed0
    float m_flCreationTime; // 0xed4
    int32_t m_nTintID; // 0xed8
    uint8_t m_nVersion; // 0xedc
    uint8[128] m_ubSignature; // 0xedd
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xf68
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

// CPulseCell_LimitCount::Criteria_t (size: 0x1)
struct CPulseCell_LimitCount_Criteria_t {
    bool m_bLimitCountPasses; // 0x0
};

// C_CS2HudModelArms (size: 0x1340)
struct C_CS2HudModelArms {
};

// CBasePlayerVData (size: 0x178)
struct CBasePlayerVData {
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28
    CSkillFloat m_flHeadDamageMultiplier; // 0x108
    CSkillFloat m_flChestDamageMultiplier; // 0x118
    CSkillFloat m_flStomachDamageMultiplier; // 0x128
    CSkillFloat m_flArmDamageMultiplier; // 0x138
    CSkillFloat m_flLegDamageMultiplier; // 0x148
    float m_flHoldBreathTime; // 0x158
    float m_flDrowningDamageInterval; // 0x15c
    int32_t m_nDrowningDamageInitial; // 0x160
    int32_t m_nDrowningDamageMax; // 0x164
    int32_t m_nWaterSpeed; // 0x168
    float m_flUseRange; // 0x16c
    float m_flUseAngleTolerance; // 0x170
    float m_flCrouchTime; // 0x174
};

// C_LightSpotEntity (size: 0xe90)
struct C_LightSpotEntity {
};

// CCSGameModeRules_Deathmatch (size: 0x40)
struct CCSGameModeRules_Deathmatch {
    GameTime_t m_flDMBonusStartTime; // 0x30
    float m_flDMBonusTimeLength; // 0x34
    CUtlString m_sDMBonusWeapon; // 0x38
};

// CPulseCell_CursorQueue (size: 0xa0)
struct CPulseCell_CursorQueue {
    int32_t m_nCursorsAllowedToRunParallel; // 0x98
};

// CPulseCell_Value_RandomFloat (size: 0x48)
struct CPulseCell_Value_RandomFloat {
};

// CPulseExecCursor (size: 0xd0)
struct CPulseExecCursor {
};

// C_Sprite (size: 0xf00)
struct C_Sprite {
    CStrongHandle<T> m_hSpriteMaterial; // 0xe88
    CHandle<T> m_hAttachedToEntity; // 0xe90
    AttachmentHandle_t m_nAttachment; // 0xe94
    float m_flSpriteFramerate; // 0xe98
    float m_flFrame; // 0xe9c
    GameTime_t m_flDieTime; // 0xea0
    uint32_t m_nBrightness; // 0xeb0
    float m_flBrightnessDuration; // 0xeb4
    float m_flSpriteScale; // 0xeb8
    float m_flScaleDuration; // 0xebc
    bool m_bWorldSpaceScale; // 0xec0
    float m_flGlowProxySize; // 0xec4
    float m_flHDRColorScale; // 0xec8
    GameTime_t m_flLastTime; // 0xecc
    float m_flMaxFrame; // 0xed0
    float m_flStartScale; // 0xed4
    float m_flDestScale; // 0xed8
    GameTime_t m_flScaleTimeStart; // 0xedc
    int32_t m_nStartBrightness; // 0xee0
    int32_t m_nDestBrightness; // 0xee4
    GameTime_t m_flBrightnessTimeStart; // 0xee8
    int32_t m_nSpriteWidth; // 0xef8
    int32_t m_nSpriteHeight; // 0xefc
};

// C_CsmFovOverride (size: 0x618)
struct C_CsmFovOverride {
    CUtlString m_cameraName; // 0x608
    float m_flCsmFovOverrideValue; // 0x610
};

// C_WeaponGlock (size: 0x1f70)
struct C_WeaponGlock {
};

// C_PhysicsProp (size: 0x12e0)
struct C_PhysicsProp {
    bool m_bAwake; // 0x12d0
};

// CFilterTeam (size: 0x648)
struct CFilterTeam {
    int32_t m_iFilterTeam; // 0x640
};

// CInfoInteraction (size: 0x658)
struct CInfoInteraction {
    CUtlSymbolLarge[8] m_strSlotEntityName; // 0x608
    CUtlSymbolLarge m_strInteractVData; // 0x648
    float m_flInteractRadius; // 0x650
};

// CBasePlayerWeaponVData (size: 0x440)
struct CBasePlayerWeaponVData {
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // 0x28
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName; // 0x108
    bool m_bBuiltRightHanded; // 0x1e8
    bool m_bAllowFlipping; // 0x1e9
    CAttachmentNameSymbolWithStorage m_sMuzzleAttachment; // 0x1f0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys m_szMuzzleFlashParticle; // 0x210
    CUtlString m_szMuzzleFlashParticleConfig; // 0x2f0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys m_szBarrelSmokeParticle; // 0x2f8
    uint8_t m_nMuzzleSmokeShotThreshold; // 0x3d8
    float m_flMuzzleSmokeTimeout; // 0x3dc
    float m_flMuzzleSmokeDecrementRate; // 0x3e0
    bool m_bGenerateMuzzleLight; // 0x3e4
    bool m_bLinkedCooldowns; // 0x3e5
    ItemFlagTypes_t m_iFlags; // 0x3e6
    int32_t m_iWeight; // 0x3e8
    bool m_bAutoSwitchTo; // 0x3ec
    bool m_bAutoSwitchFrom; // 0x3ed
    AmmoIndex_t m_nPrimaryAmmoType; // 0x3ee
    AmmoIndex_t m_nSecondaryAmmoType; // 0x3ef
    int32_t m_iMaxClip1; // 0x3f0
    int32_t m_iMaxClip2; // 0x3f4
    int32_t m_iDefaultClip1; // 0x3f8
    int32_t m_iDefaultClip2; // 0x3fc
    bool m_bReserveAmmoAsClips; // 0x400
    bool m_bTreatAsSingleClip; // 0x401
    bool m_bKeepLoadedAmmo; // 0x402
    RumbleEffect_t m_iRumbleEffect; // 0x404
    float m_flDropSpeed; // 0x408
    int32_t m_iSlot; // 0x40c
    int32_t m_iPosition; // 0x410
    CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // 0x418
};

// C_CSGO_EndOfMatchLineupEnd (size: 0x608)
struct C_CSGO_EndOfMatchLineupEnd {
};

// C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel (size: 0x3fa0)
struct C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
};

// C_SmokeGrenade (size: 0x2000)
struct C_SmokeGrenade {
};

// CInfoParticleTarget (size: 0x608)
struct CInfoParticleTarget {
};

// CCSPlayer_DamageReactServices (size: 0x50)
struct CCSPlayer_DamageReactServices {
};

// C_PointClientUIWorldPanel (size: 0x10e0)
struct C_PointClientUIWorldPanel {
    bool m_bForceRecreateNextUpdate; // 0xec0
    bool m_bMoveViewToPlayerNextThink; // 0xec1
    bool m_bCheckCSSClasses; // 0xec2
    CTransform m_anchorDeltaTransform; // 0xed0
    CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x1060
    bool m_bIgnoreInput; // 0x1088
    bool m_bLit; // 0x1089
    bool m_bFollowPlayerAcrossTeleport; // 0x108a
    float m_flWidth; // 0x108c
    float m_flHeight; // 0x1090
    float m_flDPI; // 0x1094
    float m_flInteractDistance; // 0x1098
    float m_flDepthOffset; // 0x109c
    uint32_t m_unOwnerContext; // 0x10a0
    uint32_t m_unHorizontalAlign; // 0x10a4
    uint32_t m_unVerticalAlign; // 0x10a8
    uint32_t m_unOrientation; // 0x10ac
    bool m_bAllowInteractionFromAllSceneWorlds; // 0x10b0
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x10b8
    bool m_bOpaque; // 0x10d0
    bool m_bNoDepth; // 0x10d1
    bool m_bVisibleWhenParentNoDraw; // 0x10d2
    bool m_bRenderBackface; // 0x10d3
    bool m_bUseOffScreenIndicator; // 0x10d4
    bool m_bExcludeFromSaveGames; // 0x10d5
    bool m_bGrabbable; // 0x10d6
    bool m_bOnlyRenderToTexture; // 0x10d7
    bool m_bDisableMipGen; // 0x10d8
    int32_t m_nExplicitImageLayout; // 0x10dc
};

// C_EntityFlame (size: 0x650)
struct C_EntityFlame {
    CHandle<T> m_hEntAttached; // 0x608
    CHandle<T> m_hOldAttached; // 0x630
    bool m_bCheapEffect; // 0x634
};

// CBasePlayerController (size: 0x7f8)
struct CBasePlayerController {
    C_CommandContext m_CommandContext; // 0x610
    uint64_t m_nInButtonsWhichAreToggles; // 0x6b8
    uint32_t m_nTickBase; // 0x6c0
    CHandle<T> m_hPawn; // 0x6c4
    bool m_bKnownTeamMismatch; // 0x6c8
    CHandle<T> m_hPredictedPawn; // 0x6cc
    CSplitScreenSlot m_nSplitScreenSlot; // 0x6d0
    CHandle<T> m_hSplitOwner; // 0x6d4
    CUtlVector<T> m_hSplitScreenPlayers; // 0x6d8
    bool m_bIsHLTV; // 0x6f0
    PlayerConnectedState m_iConnected; // 0x6f4
    char[128] m_iszPlayerName; // 0x6f8
    uint64_t m_steamID; // 0x780
    bool m_bIsLocalPlayerController; // 0x788
    bool m_bNoClipEnabled; // 0x789
    uint32_t m_iDesiredFOV; // 0x78c
};

// C_CSGO_EndOfMatchLineupEndpoint (size: 0x608)
struct C_CSGO_EndOfMatchLineupEndpoint {
};

} // namespace client_dll
} // namespace cs2

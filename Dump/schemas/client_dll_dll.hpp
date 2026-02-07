// Generated using CS2 ULTIMATE DUMPER
// 2026-02-07 09:26:37

#pragma once

#include <cstddef>

// Module: client.dll.dll
// Classes: 497

namespace cs2_dumper {
namespace schemas {
namespace client_dll {

// C_CSGO_TeamIntroCharacterPosition (size: 0x13a8)
namespace C_CSGO_TeamIntroCharacterPosition {
}

// C_FireCrackerBlast (size: 0x8490)
namespace C_FireCrackerBlast {
}

// CCSGO_WingmanIntroCounterTerroristPosition (size: 0x13a8)
namespace CCSGO_WingmanIntroCounterTerroristPosition {
}

// CPulseCell_WaitForCursorsWithTag (size: 0xa0)
namespace CPulseCell_WaitForCursorsWithTag {
    constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
    constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9c; // PulseCursorCancelPriority_t
}

// C_SceneEntity::QueuedEvents_t (size: 0x18)
namespace C_SceneEntity_QueuedEvents_t {
    constexpr std::ptrdiff_t starttime = 0x0; // float32
}

// CCSPlayer_PingServices (size: 0x50)
namespace CCSPlayer_PingServices {
    constexpr std::ptrdiff_t m_hPlayerPing = 0x48; // CHandle< C_PlayerPing >
}

// CEconItemAttribute (size: 0x48)
namespace CEconItemAttribute {
    constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
    constexpr std::ptrdiff_t m_flValue = 0x34; // float32
    constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
    constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3c; // int32
    constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
}

// CBaseTriggerAPI (size: 0x8)
namespace CBaseTriggerAPI {
}

// PredictedDamageTag_t (size: 0x40)
namespace PredictedDamageTag_t {
    constexpr std::ptrdiff_t nTagTick = 0x30; // GameTick_t
    constexpr std::ptrdiff_t flFlinchModSmall = 0x34; // float32
    constexpr std::ptrdiff_t flFlinchModLarge = 0x38; // float32
    constexpr std::ptrdiff_t flFriendlyFireDamageReductionRatio = 0x3c; // float32
}

// CFuncRetakeBarrier (size: 0x13c0)
namespace CFuncRetakeBarrier {
}

// C_EnvWindShared (size: 0xf8)
namespace C_EnvWindShared {
    constexpr std::ptrdiff_t m_flStartTime = 0x8; // GameTime_t
    constexpr std::ptrdiff_t m_iWindSeed = 0xc; // uint32
    constexpr std::ptrdiff_t m_iMinWind = 0x10; // uint16
    constexpr std::ptrdiff_t m_iMaxWind = 0x12; // uint16
    constexpr std::ptrdiff_t m_windRadius = 0x14; // int32
    constexpr std::ptrdiff_t m_iMinGust = 0x18; // uint16
    constexpr std::ptrdiff_t m_iMaxGust = 0x1a; // uint16
    constexpr std::ptrdiff_t m_flMinGustDelay = 0x1c; // float32
    constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20; // float32
    constexpr std::ptrdiff_t m_flGustDuration = 0x24; // float32
    constexpr std::ptrdiff_t m_iGustDirChange = 0x28; // uint16
    constexpr std::ptrdiff_t m_iInitialWindDir = 0x2a; // uint16
    constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x2c; // float32
    constexpr std::ptrdiff_t m_location = 0x30; // Vector
    constexpr std::ptrdiff_t m_hEntOwner = 0x3c; // CHandle< C_BaseEntity >
}

// C_SkyCamera (size: 0x6a8)
namespace C_SkyCamera {
    constexpr std::ptrdiff_t m_skyboxData = 0x608; // sky3dparams_t
    constexpr std::ptrdiff_t m_skyboxSlotToken = 0x698; // CUtlStringToken
    constexpr std::ptrdiff_t m_bUseAngles = 0x69c; // bool
    constexpr std::ptrdiff_t m_pNext = 0x6a0; // C_SkyCamera*
}

// CPulseCell_Base (size: 0x48)
namespace CPulseCell_Base {
    constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
}

// C_FuncRotating (size: 0xe88)
namespace C_FuncRotating {
}

// C_SoundOpvarSetPointBase (size: 0x628)
namespace C_SoundOpvarSetPointBase {
    constexpr std::ptrdiff_t m_iszStackName = 0x608; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x610; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x618; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iOpvarIndex = 0x620; // int32
    constexpr std::ptrdiff_t m_bUseAutoCompare = 0x624; // bool
    constexpr std::ptrdiff_t m_bFastRefresh = 0x625; // bool
}

// C_EnvCubemapFog (size: 0x658)
namespace C_EnvCubemapFog {
    constexpr std::ptrdiff_t m_flEndDistance = 0x608; // float32
    constexpr std::ptrdiff_t m_flStartDistance = 0x60c; // float32
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x610; // float32
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x614; // bool
    constexpr std::ptrdiff_t m_flFogHeightWidth = 0x618; // float32
    constexpr std::ptrdiff_t m_flFogHeightEnd = 0x61c; // float32
    constexpr std::ptrdiff_t m_flFogHeightStart = 0x620; // float32
    constexpr std::ptrdiff_t m_flFogHeightExponent = 0x624; // float32
    constexpr std::ptrdiff_t m_flLODBias = 0x628; // float32
    constexpr std::ptrdiff_t m_bActive = 0x62c; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x62d; // bool
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x630; // float32
    constexpr std::ptrdiff_t m_nCubemapSourceType = 0x634; // int32
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x638; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_iszSkyEntity = 0x640; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x648; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x650; // bool
    constexpr std::ptrdiff_t m_bFirstTime = 0x651; // bool
}

// C_CSGO_TeamSelectTerroristPosition (size: 0x13a8)
namespace C_CSGO_TeamSelectTerroristPosition {
}

// C_BaseFlex::Emphasized_Phoneme (size: 0x20)
namespace C_BaseFlex_Emphasized_Phoneme {
    constexpr std::ptrdiff_t m_sClassName = 0x0; // CUtlString
    constexpr std::ptrdiff_t m_flAmount = 0x18; // float32
    constexpr std::ptrdiff_t m_bRequired = 0x1c; // bool
    constexpr std::ptrdiff_t m_bBasechecked = 0x1d; // bool
    constexpr std::ptrdiff_t m_bValid = 0x1e; // bool
}

// C_EnvParticleGlow (size: 0x1450)
namespace C_EnvParticleGlow {
    constexpr std::ptrdiff_t m_flAlphaScale = 0x1438; // float32
    constexpr std::ptrdiff_t m_flRadiusScale = 0x143c; // float32
    constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1440; // float32
    constexpr std::ptrdiff_t m_ColorTint = 0x1444; // Color
    constexpr std::ptrdiff_t m_hTextureOverride = 0x1448; // CStrongHandle< InfoForResourceTypeCTextureBase >
}

// CCS_PortraitWorldCallbackHandler (size: 0x610)
namespace CCS_PortraitWorldCallbackHandler {
}

// CCSPlayerController_InventoryServices (size: 0xf0)
namespace CCSPlayerController_InventoryServices {
    constexpr std::ptrdiff_t m_vecNetworkableLoadout = 0x40; // CUtlVector< CCSPlayerController_InventoryServices::NetworkedLoad
    constexpr std::ptrdiff_t m_unMusicID = 0x58; // uint16
    constexpr std::ptrdiff_t m_rank = 0x5c; // MedalRank_t[6]
    constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x74; // int32
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x78; // int32
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x7c; // int32
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x80; // int32
    constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x84; // int32
    constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x88; // C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t >
}

// CCSPlayerModernJump (size: 0x38)
namespace CCSPlayerModernJump {
    constexpr std::ptrdiff_t m_nLastActualJumpPressTick = 0x10; // GameTick_t
    constexpr std::ptrdiff_t m_flLastActualJumpPressFrac = 0x14; // float32
    constexpr std::ptrdiff_t m_nLastUsableJumpPressTick = 0x18; // GameTick_t
    constexpr std::ptrdiff_t m_flLastUsableJumpPressFrac = 0x1c; // float32
    constexpr std::ptrdiff_t m_nLastLandedTick = 0x20; // GameTick_t
    constexpr std::ptrdiff_t m_flLastLandedFrac = 0x24; // float32
    constexpr std::ptrdiff_t m_flLastLandedVelocityX = 0x28; // float32
    constexpr std::ptrdiff_t m_flLastLandedVelocityY = 0x2c; // float32
    constexpr std::ptrdiff_t m_flLastLandedVelocityZ = 0x30; // float32
}

// C_EconEntity::AttachedModelData_t (size: 0x4)
namespace C_EconEntity_AttachedModelData_t {
    constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0; // int32
}

// CPulse_ResumePoint (size: 0x48)
namespace CPulse_ResumePoint {
}

// CTriggerFan (size: 0xfc0)
namespace CTriggerFan {
    constexpr std::ptrdiff_t m_vFanOriginOffset = 0xf58; // Vector
    constexpr std::ptrdiff_t m_vDirection = 0xf64; // Vector
    constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0xf70; // bool
    constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0xf71; // bool
    constexpr std::ptrdiff_t m_qNoiseDelta = 0xf80; // Quaternion
    constexpr std::ptrdiff_t m_hInfoFan = 0xf90; // CHandle< CInfoFan >
    constexpr std::ptrdiff_t m_flForce = 0xf94; // float32
    constexpr std::ptrdiff_t m_bFalloff = 0xf98; // bool
    constexpr std::ptrdiff_t m_RampTimer = 0xfa0; // CountdownTimer
}

// C_HostageCarriableProp (size: 0x1170)
namespace C_HostageCarriableProp {
}

// C_BulletHitModel (size: 0x11b8)
namespace C_BulletHitModel {
    constexpr std::ptrdiff_t m_matLocal = 0x1168; // matrix3x4_t
    constexpr std::ptrdiff_t m_iBoneIndex = 0x1198; // int32
    constexpr std::ptrdiff_t m_hPlayerParent = 0x119c; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_bIsHit = 0x11a0; // bool
    constexpr std::ptrdiff_t m_flTimeCreated = 0x11a4; // float32
    constexpr std::ptrdiff_t m_vecStartPos = 0x11a8; // Vector
}

// C_FuncElectrifiedVolume (size: 0xea0)
namespace C_FuncElectrifiedVolume {
    constexpr std::ptrdiff_t m_nAmbientEffect = 0xe88; // ParticleIndex_t
    constexpr std::ptrdiff_t m_EffectName = 0xe90; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bState = 0xe98; // bool
}

// C_MapVetoPickController (size: 0xf50)
namespace C_MapVetoPickController {
    constexpr std::ptrdiff_t m_nDraftType = 0x618; // int32
    constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x61c; // int32
    constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x620; // int32[64]
    constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x720; // int32[7]
    constexpr std::ptrdiff_t m_nAccountIDs = 0x73c; // int32[64]
    constexpr std::ptrdiff_t m_nMapId0 = 0x83c; // int32[64]
    constexpr std::ptrdiff_t m_nMapId1 = 0x93c; // int32[64]
    constexpr std::ptrdiff_t m_nMapId2 = 0xa3c; // int32[64]
    constexpr std::ptrdiff_t m_nMapId3 = 0xb3c; // int32[64]
    constexpr std::ptrdiff_t m_nMapId4 = 0xc3c; // int32[64]
    constexpr std::ptrdiff_t m_nMapId5 = 0xd3c; // int32[64]
    constexpr std::ptrdiff_t m_nStartingSide0 = 0xe3c; // int32[64]
    constexpr std::ptrdiff_t m_nCurrentPhase = 0xf3c; // int32
    constexpr std::ptrdiff_t m_nPhaseStartTick = 0xf40; // int32
    constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xf44; // int32
    constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xf48; // int32
    constexpr std::ptrdiff_t m_bDisabledHud = 0xf4c; // bool
}

// C_EnvVolumetricFogVolume (size: 0x650)
namespace C_EnvVolumetricFogVolume {
    constexpr std::ptrdiff_t m_bActive = 0x608; // bool
    constexpr std::ptrdiff_t m_vBoxMins = 0x60c; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x618; // Vector
    constexpr std::ptrdiff_t m_bStartDisabled = 0x624; // bool
    constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x625; // bool
    constexpr std::ptrdiff_t m_flStrength = 0x628; // float32
    constexpr std::ptrdiff_t m_nFalloffShape = 0x62c; // int32
    constexpr std::ptrdiff_t m_flFalloffExponent = 0x630; // float32
    constexpr std::ptrdiff_t m_flHeightFogDepth = 0x634; // float32
    constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x638; // float32
    constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x63c; // float32
    constexpr std::ptrdiff_t m_fSunLightStrength = 0x640; // float32
    constexpr std::ptrdiff_t m_fNoiseStrength = 0x644; // float32
    constexpr std::ptrdiff_t m_TintColor = 0x648; // Color
    constexpr std::ptrdiff_t m_bOverrideTintColor = 0x64c; // bool
    constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x64d; // bool
    constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x64e; // bool
    constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x64f; // bool
}

// C_CSGO_EndOfMatchCharacterPosition (size: 0x13a8)
namespace C_CSGO_EndOfMatchCharacterPosition {
}

// CPulseCell_PlaySequence (size: 0xf8)
namespace CPulseCell_PlaySequence {
    constexpr std::ptrdiff_t m_SequenceName = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_PulseAnimEvents = 0x50; // PulseNodeDynamicOutflows_t
    constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0xb0; // CPulse_ResumePoint
}

// C_BaseEntityAPI (size: 0x8)
namespace C_BaseEntityAPI {
}

// C_BarnLight (size: 0x1198)
namespace C_BarnLight {
    constexpr std::ptrdiff_t m_bEnabled = 0xe88; // bool
    constexpr std::ptrdiff_t m_nColorMode = 0xe8c; // int32
    constexpr std::ptrdiff_t m_Color = 0xe90; // Color
    constexpr std::ptrdiff_t m_flColorTemperature = 0xe94; // float32
    constexpr std::ptrdiff_t m_flBrightness = 0xe98; // float32
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xe9c; // float32
    constexpr std::ptrdiff_t m_nDirectLight = 0xea0; // int32
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0xea4; // int32
    constexpr std::ptrdiff_t m_nLightPathUniqueId = 0xea8; // int32
    constexpr std::ptrdiff_t m_nLightMapUniqueId = 0xeac; // int32
    constexpr std::ptrdiff_t m_nLuminaireShape = 0xeb0; // int32
    constexpr std::ptrdiff_t m_flLuminaireSize = 0xeb4; // float32
    constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0xeb8; // float32
    constexpr std::ptrdiff_t m_LightStyleString = 0xec0; // CUtlString
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0xec8; // GameTime_t
    constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0xed0; // C_NetworkUtlVectorBase< CUtlString >
    constexpr std::ptrdiff_t m_LightStyleEvents = 0xee8; // C_NetworkUtlVectorBase< CUtlString >
    constexpr std::ptrdiff_t m_LightStyleTargets = 0xf00; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    constexpr std::ptrdiff_t m_StyleEvent = 0xf18; // CEntityIOOutput[4]
    constexpr std::ptrdiff_t m_hLightCookie = 0xf78; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_flShape = 0xf80; // float32
    constexpr std::ptrdiff_t m_flSoftX = 0xf84; // float32
    constexpr std::ptrdiff_t m_flSoftY = 0xf88; // float32
    constexpr std::ptrdiff_t m_flSkirt = 0xf8c; // float32
    constexpr std::ptrdiff_t m_flSkirtNear = 0xf90; // float32
    constexpr std::ptrdiff_t m_vSizeParams = 0xf94; // Vector
    constexpr std::ptrdiff_t m_flRange = 0xfa0; // float32
    constexpr std::ptrdiff_t m_vShear = 0xfa4; // Vector
    constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0xfb0; // int32
    constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0xfb4; // Vector
    constexpr std::ptrdiff_t m_nCastShadows = 0xfc0; // int32
    constexpr std::ptrdiff_t m_nShadowMapSize = 0xfc4; // int32
    constexpr std::ptrdiff_t m_nShadowPriority = 0xfc8; // int32
    constexpr std::ptrdiff_t m_bContactShadow = 0xfcc; // bool
    constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0xfcd; // bool
    constexpr std::ptrdiff_t m_nBounceLight = 0xfd0; // int32
    constexpr std::ptrdiff_t m_flBounceScale = 0xfd4; // float32
    constexpr std::ptrdiff_t m_bDynamicBounce = 0xfd8; // bool
    constexpr std::ptrdiff_t m_flMinRoughness = 0xfdc; // float32
    constexpr std::ptrdiff_t m_vAlternateColor = 0xfe0; // Vector
    constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0xfec; // float32
    constexpr std::ptrdiff_t m_nFog = 0xff0; // int32
    constexpr std::ptrdiff_t m_flFogStrength = 0xff4; // float32
    constexpr std::ptrdiff_t m_nFogShadows = 0xff8; // int32
    constexpr std::ptrdiff_t m_flFogScale = 0xffc; // float32
    constexpr std::ptrdiff_t m_bFogMixedShadows = 0x1000; // bool
    constexpr std::ptrdiff_t m_flFadeSizeStart = 0x1004; // float32
    constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x1008; // float32
    constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x100c; // float32
    constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x1010; // float32
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x1014; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x1018; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x1024; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x1030; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x103c; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x1048; // Vector
    constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x1054; // int32
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x1058; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x1064; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x1070; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x107c; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x1088; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x1094; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x10a0; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x10ac; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x10b8; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x10c4; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x10d0; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x10dc; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0x10e8; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0x10f4; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0x1100; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0x110c; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0x1118; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0x1124; // Vector
    constexpr std::ptrdiff_t m_bInitialBoneSetup = 0x1170; // bool
    constexpr std::ptrdiff_t m_VisClusters = 0x1178; // C_NetworkUtlVectorBase< uint16 >
}

// CPulseCell_LerpCameraSettings (size: 0xb8)
namespace CPulseCell_LerpCameraSettings {
    constexpr std::ptrdiff_t m_flSeconds = 0x90; // float32
    constexpr std::ptrdiff_t m_Start = 0x94; // PointCameraSettings_t
    constexpr std::ptrdiff_t m_End = 0xa4; // PointCameraSettings_t
}

// CPointOffScreenIndicatorUi (size: 0x10f0)
namespace CPointOffScreenIndicatorUi {
    constexpr std::ptrdiff_t m_bBeenEnabled = 0x10e0; // bool
    constexpr std::ptrdiff_t m_bHide = 0x10e1; // bool
    constexpr std::ptrdiff_t m_flSeenTargetTime = 0x10e4; // float32
    constexpr std::ptrdiff_t m_pTargetPanel = 0x10e8; // C_PointClientUIWorldPanel*
}

// CCSObserver_UseServices (size: 0x48)
namespace CCSObserver_UseServices {
}

// C_PostProcessingVolume (size: 0xf98)
namespace C_PostProcessingVolume {
    constexpr std::ptrdiff_t m_hPostSettings = 0xf68; // CStrongHandle< InfoForResourceTypeCPostProcessingResource >
    constexpr std::ptrdiff_t m_flFadeDuration = 0xf70; // float32
    constexpr std::ptrdiff_t m_flMinLogExposure = 0xf74; // float32
    constexpr std::ptrdiff_t m_flMaxLogExposure = 0xf78; // float32
    constexpr std::ptrdiff_t m_flMinExposure = 0xf7c; // float32
    constexpr std::ptrdiff_t m_flMaxExposure = 0xf80; // float32
    constexpr std::ptrdiff_t m_flExposureCompensation = 0xf84; // float32
    constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0xf88; // float32
    constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0xf8c; // float32
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0xf90; // float32
    constexpr std::ptrdiff_t m_bMaster = 0xf94; // bool
    constexpr std::ptrdiff_t m_bExposureControl = 0xf95; // bool
}

// CCSPlayer_UseServices (size: 0x48)
namespace CCSPlayer_UseServices {
}

// C_CSGO_CounterTerroristWingmanIntroCamera (size: 0x698)
namespace C_CSGO_CounterTerroristWingmanIntroCamera {
}

// CPulseCell_PickBestOutflowSelector (size: 0x68)
namespace CPulseCell_PickBestOutflowSelector {
    constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
    constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
}

// CInfoFan (size: 0x660)
namespace CInfoFan {
    constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x648; // float32
    constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x64c; // float32
    constexpr std::ptrdiff_t m_flCurveDistRange = 0x650; // float32
    constexpr std::ptrdiff_t m_FanForceCurveString = 0x658; // CUtlSymbolLarge
}

// C_VoteController (size: 0x640)
namespace C_VoteController {
    constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x618; // int32
    constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x61c; // int32
    constexpr std::ptrdiff_t m_nVoteOptionCount = 0x620; // int32[5]
    constexpr std::ptrdiff_t m_nPotentialVotes = 0x634; // int32
    constexpr std::ptrdiff_t m_bVotesDirty = 0x638; // bool
    constexpr std::ptrdiff_t m_bTypeDirty = 0x639; // bool
    constexpr std::ptrdiff_t m_bIsYesNoVote = 0x63a; // bool
}

// C_CSPlayerPawnBase (size: 0x1650)
namespace C_CSPlayerPawnBase {
    constexpr std::ptrdiff_t m_pPingServices = 0x15c0; // CCSPlayer_PingServices*
    constexpr std::ptrdiff_t m_previousPlayerState = 0x15c8; // CSPlayerState
    constexpr std::ptrdiff_t m_iPlayerState = 0x15cc; // CSPlayerState
    constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x15d0; // bool
    constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x15d4; // GameTime_t
    constexpr std::ptrdiff_t m_iProgressBarDuration = 0x15d8; // int32
    constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x15dc; // float32
    constexpr std::ptrdiff_t m_flClientDeathTime = 0x15e0; // GameTime_t
    constexpr std::ptrdiff_t m_flFlashBangTime = 0x15e4; // float32
    constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x15e8; // float32
    constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x15ec; // float32
    constexpr std::ptrdiff_t m_bFlashBuildUp = 0x15f0; // bool
    constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x15f1; // bool
    constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x15f2; // bool
    constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x15f4; // float32
    constexpr std::ptrdiff_t m_flFlashDuration = 0x15f8; // float32
    constexpr std::ptrdiff_t m_flClientHealthFadeChangeTimestamp = 0x15fc; // GameTime_t
    constexpr std::ptrdiff_t m_nClientHealthFadeParityValue = 0x1600; // int32
    constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x1604; // float32
    constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x160c; // float32
    constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1610; // float32
    constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x1614; // bool
    constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x1618; // float32
    constexpr std::ptrdiff_t m_flLastSmokeAge = 0x161c; // float32
    constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x1620; // Vector
    constexpr std::ptrdiff_t m_hOriginalController = 0x1648; // CHandle< CCSPlayerController >
}

// C_C4 (size: 0x1f80)
namespace C_C4 {
    constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1f40; // ParticleIndex_t
    constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1f44; // C4LightEffect_t
    constexpr std::ptrdiff_t m_bStartedArming = 0x1f48; // bool
    constexpr std::ptrdiff_t m_fArmedTime = 0x1f4c; // GameTime_t
    constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1f50; // bool
    constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1f51; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1f58; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x1f70; // int32
    constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1f74; // bool[7]
    constexpr std::ptrdiff_t m_bBombPlanted = 0x1f7b; // bool
}

// C_BreakableProp (size: 0x12d0)
namespace C_BreakableProp {
    constexpr std::ptrdiff_t m_CPropDataComponent = 0x11a0; // CPropDataComponent
    constexpr std::ptrdiff_t m_OnStartDeath = 0x11e0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBreak = 0x11f8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0x1210; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnTakeDamage = 0x1230; // CEntityIOOutput
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x1248; // float32
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0x124c; // int32
    constexpr std::ptrdiff_t m_flPressureDelay = 0x1250; // float32
    constexpr std::ptrdiff_t m_flDefBurstScale = 0x1254; // float32
    constexpr std::ptrdiff_t m_vDefBurstOffset = 0x1258; // Vector
    constexpr std::ptrdiff_t m_hBreaker = 0x1264; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_PerformanceMode = 0x1268; // PerformanceMode_t
    constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x126c; // GameTime_t
    constexpr std::ptrdiff_t m_BreakableContentsType = 0x1270; // BreakableContentsType_t
    constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0x1278; // CUtlString
    constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0x1280; // CUtlString
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x1288; // bool
    constexpr std::ptrdiff_t m_explodeDamage = 0x128c; // float32
    constexpr std::ptrdiff_t m_explodeRadius = 0x1290; // float32
    constexpr std::ptrdiff_t m_nExplosionType = 0x1294; // BaseExplosionTypes_t
    constexpr std::ptrdiff_t m_explosionDelay = 0x1298; // float32
    constexpr std::ptrdiff_t m_explosionBuildupSound = 0x12a0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomEffect = 0x12a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomSound = 0x12b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionModifier = 0x12b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x12c0; // CHandle< C_BasePlayerPawn >
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x12c4; // GameTime_t
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x12c8; // float32
    constexpr std::ptrdiff_t m_hLastAttacker = 0x12cc; // CHandle< C_BaseEntity >
}

// CCSGO_WingmanIntroTerroristPosition (size: 0x13a8)
namespace CCSGO_WingmanIntroTerroristPosition {
}

// CPrecipitationVData (size: 0x128)
namespace CPrecipitationVData {
    constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys
    constexpr std::ptrdiff_t m_flInnerDistance = 0x108; // float32
    constexpr std::ptrdiff_t m_nAttachType = 0x10c; // ParticleAttachment_t
    constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110; // bool
    constexpr std::ptrdiff_t m_nRTEnvCP = 0x114; // int32
    constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118; // int32
    constexpr std::ptrdiff_t m_szModifier = 0x120; // CUtlString
}

// C_RetakeGameRules (size: 0x158)
namespace C_RetakeGameRules {
    constexpr std::ptrdiff_t m_nMatchSeed = 0x138; // int32
    constexpr std::ptrdiff_t m_bBlockersPresent = 0x13c; // bool
    constexpr std::ptrdiff_t m_bRoundInProgress = 0x13d; // bool
    constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x140; // int32
    constexpr std::ptrdiff_t m_iBombSite = 0x144; // int32
    constexpr std::ptrdiff_t m_hBombPlanter = 0x148; // CHandle< C_CSPlayerPawn >
}

// CPulseCell_WaitForObservable (size: 0x108)
namespace CPulseCell_WaitForObservable {
    constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
    constexpr std::ptrdiff_t m_OnTrue = 0xc0; // CPulse_ResumePoint
}

// C_SoundAreaEntitySphere (size: 0x638)
namespace C_SoundAreaEntitySphere {
    constexpr std::ptrdiff_t m_flRadius = 0x630; // float32
}

// CPulseCell_Step_EntFire (size: 0x50)
namespace CPulseCell_Step_EntFire {
    constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
}

// C_WeaponAWP (size: 0x1f70)
namespace C_WeaponAWP {
}

// C_BaseButton (size: 0xe98)
namespace C_BaseButton {
    constexpr std::ptrdiff_t m_glowEntity = 0xe88; // CHandle< C_BaseModelEntity >
    constexpr std::ptrdiff_t m_usable = 0xe8c; // bool
    constexpr std::ptrdiff_t m_szDisplayText = 0xe90; // CUtlSymbolLarge
}

// CCSObserver_ObserverServices (size: 0xf0)
namespace CCSObserver_ObserverServices {
    constexpr std::ptrdiff_t m_obsInterpState = 0x64; // ObserverInterpState_t
}

// CHitboxComponent (size: 0x18)
namespace CHitboxComponent {
    constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
}

// ServerAuthoritativeWeaponSlot_t (size: 0x38)
namespace ServerAuthoritativeWeaponSlot_t {
    constexpr std::ptrdiff_t unClass = 0x30; // uint16
    constexpr std::ptrdiff_t unSlot = 0x32; // uint16
    constexpr std::ptrdiff_t unItemDefIdx = 0x34; // uint16
}

// C_CSMinimapBoundary (size: 0x608)
namespace C_CSMinimapBoundary {
}

// CPathQueryComponent (size: 0xa0)
namespace CPathQueryComponent {
}

// C_Precipitation (size: 0xfa8)
namespace C_Precipitation {
    constexpr std::ptrdiff_t m_flDensity = 0xf58; // float32
    constexpr std::ptrdiff_t m_flParticleInnerDist = 0xf68; // float32
    constexpr std::ptrdiff_t m_pParticleDef = 0xf70; // char*
    constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0xf98; // TimedEvent[1]
    constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0xfa0; // bool[1]
    constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0xfa1; // bool
    constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xfa2; // bool
    constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0xfa4; // int32
}

// CLogicRelay (size: 0x610)
namespace CLogicRelay {
    constexpr std::ptrdiff_t m_bDisabled = 0x608; // bool
    constexpr std::ptrdiff_t m_bWaitForRefire = 0x609; // bool
    constexpr std::ptrdiff_t m_bTriggerOnce = 0x60a; // bool
    constexpr std::ptrdiff_t m_bFastRetrigger = 0x60b; // bool
    constexpr std::ptrdiff_t m_bPassthoughCaller = 0x60c; // bool
}

// SequenceHistory_t (size: 0x18)
namespace SequenceHistory_t {
    constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
    constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
    constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
    constexpr std::ptrdiff_t m_nSeqLoopMode = 0xc; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
    constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
}

// CPlayer_ItemServices (size: 0x48)
namespace CPlayer_ItemServices {
}

// CPulse_OutflowConnection (size: 0x48)
namespace CPulse_OutflowConnection {
    constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
    constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
    constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
}

// C_WeaponUMP45 (size: 0x1f70)
namespace C_WeaponUMP45 {
}

// C_WeaponG3SG1 (size: 0x1f70)
namespace C_WeaponG3SG1 {
}

// C_SpotlightEnd (size: 0xe98)
namespace C_SpotlightEnd {
    constexpr std::ptrdiff_t m_flLightScale = 0xe88; // float32
    constexpr std::ptrdiff_t m_Radius = 0xe8c; // float32
}

// C_Fish (size: 0x1258)
namespace C_Fish {
    constexpr std::ptrdiff_t m_pos = 0x1168; // Vector
    constexpr std::ptrdiff_t m_vel = 0x1174; // Vector
    constexpr std::ptrdiff_t m_angles = 0x1180; // QAngle
    constexpr std::ptrdiff_t m_localLifeState = 0x118c; // int32
    constexpr std::ptrdiff_t m_deathDepth = 0x1190; // float32
    constexpr std::ptrdiff_t m_deathAngle = 0x1194; // float32
    constexpr std::ptrdiff_t m_buoyancy = 0x1198; // float32
    constexpr std::ptrdiff_t m_wiggleTimer = 0x11a0; // CountdownTimer
    constexpr std::ptrdiff_t m_wigglePhase = 0x11b8; // float32
    constexpr std::ptrdiff_t m_wiggleRate = 0x11bc; // float32
    constexpr std::ptrdiff_t m_actualPos = 0x11c0; // Vector
    constexpr std::ptrdiff_t m_actualAngles = 0x11cc; // QAngle
    constexpr std::ptrdiff_t m_poolOrigin = 0x11d8; // Vector
    constexpr std::ptrdiff_t m_waterLevel = 0x11e4; // float32
    constexpr std::ptrdiff_t m_gotUpdate = 0x11e8; // bool
    constexpr std::ptrdiff_t m_x = 0x11ec; // float32
    constexpr std::ptrdiff_t m_y = 0x11f0; // float32
    constexpr std::ptrdiff_t m_z = 0x11f4; // float32
    constexpr std::ptrdiff_t m_angle = 0x11f8; // float32
    constexpr std::ptrdiff_t m_errorHistory = 0x11fc; // float32[20]
    constexpr std::ptrdiff_t m_errorHistoryIndex = 0x124c; // int32
    constexpr std::ptrdiff_t m_errorHistoryCount = 0x1250; // int32
    constexpr std::ptrdiff_t m_averageError = 0x1254; // float32
}

// C_WeaponFamas (size: 0x1f70)
namespace C_WeaponFamas {
}

// C_EnvVolumetricFogController (size: 0x6b8)
namespace C_EnvVolumetricFogController {
    constexpr std::ptrdiff_t m_flScattering = 0x608; // float32
    constexpr std::ptrdiff_t m_TintColor = 0x60c; // Color
    constexpr std::ptrdiff_t m_flAnisotropy = 0x610; // float32
    constexpr std::ptrdiff_t m_flFadeSpeed = 0x614; // float32
    constexpr std::ptrdiff_t m_flDrawDistance = 0x618; // float32
    constexpr std::ptrdiff_t m_flFadeInStart = 0x61c; // float32
    constexpr std::ptrdiff_t m_flFadeInEnd = 0x620; // float32
    constexpr std::ptrdiff_t m_flIndirectStrength = 0x624; // float32
    constexpr std::ptrdiff_t m_nVolumeDepth = 0x628; // int32
    constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x62c; // float32
    constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x630; // int32
    constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x634; // int32
    constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x638; // int32
    constexpr std::ptrdiff_t m_vBoxMins = 0x63c; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x648; // Vector
    constexpr std::ptrdiff_t m_bActive = 0x654; // bool
    constexpr std::ptrdiff_t m_flStartAnisoTime = 0x658; // GameTime_t
    constexpr std::ptrdiff_t m_flStartScatterTime = 0x65c; // GameTime_t
    constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x660; // GameTime_t
    constexpr std::ptrdiff_t m_flStartAnisotropy = 0x664; // float32
    constexpr std::ptrdiff_t m_flStartScattering = 0x668; // float32
    constexpr std::ptrdiff_t m_flStartDrawDistance = 0x66c; // float32
    constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x670; // float32
    constexpr std::ptrdiff_t m_flDefaultScattering = 0x674; // float32
    constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x678; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x67c; // bool
    constexpr std::ptrdiff_t m_bEnableIndirect = 0x67d; // bool
    constexpr std::ptrdiff_t m_bIsMaster = 0x67e; // bool
    constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x680; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_nForceRefreshCount = 0x688; // int32
    constexpr std::ptrdiff_t m_fNoiseSpeed = 0x68c; // float32
    constexpr std::ptrdiff_t m_fNoiseStrength = 0x690; // float32
    constexpr std::ptrdiff_t m_vNoiseScale = 0x694; // Vector
    constexpr std::ptrdiff_t m_fWindSpeed = 0x6a0; // float32
    constexpr std::ptrdiff_t m_vWindDirection = 0x6a4; // Vector
    constexpr std::ptrdiff_t m_bFirstTime = 0x6b0; // bool
}

// CPulseGraphDef (size: 0x198)
namespace CPulseGraphDef {
    constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // PulseSymbol_t
    constexpr std::ptrdiff_t m_DomainSubType = 0x18; // CPulseValueFullType
    constexpr std::ptrdiff_t m_ParentMapName = 0x30; // PulseSymbol_t
    constexpr std::ptrdiff_t m_ParentXmlName = 0x40; // PulseSymbol_t
    constexpr std::ptrdiff_t m_Chunks = 0x50; // CUtlVector< CPulse_Chunk* >
    constexpr std::ptrdiff_t m_Cells = 0x68; // CUtlVector< CPulseCell_Base* >
    constexpr std::ptrdiff_t m_Vars = 0x80; // CUtlVector< CPulse_Variable >
    constexpr std::ptrdiff_t m_PublicOutputs = 0x98; // CUtlVector< CPulse_PublicOutput >
    constexpr std::ptrdiff_t m_InvokeBindings = 0xb0; // CUtlVector< CPulse_InvokeBinding* >
    constexpr std::ptrdiff_t m_CallInfos = 0xc8; // CUtlVector< CPulse_CallInfo* >
    constexpr std::ptrdiff_t m_Constants = 0xe0; // CUtlVector< CPulse_Constant >
    constexpr std::ptrdiff_t m_DomainValues = 0xf8; // CUtlVector< CPulse_DomainValue >
    constexpr std::ptrdiff_t m_BlackboardReferences = 0x110; // CUtlVector< CPulse_BlackboardReference >
    constexpr std::ptrdiff_t m_OutputConnections = 0x128; // CUtlVector< CPulse_OutputConnection* >
}

// C_EnvDetailController (size: 0x610)
namespace C_EnvDetailController {
    constexpr std::ptrdiff_t m_flFadeStartDist = 0x608; // float32
    constexpr std::ptrdiff_t m_flFadeEndDist = 0x60c; // float32
}

// C_EnvWindVolume (size: 0x640)
namespace C_EnvWindVolume {
    constexpr std::ptrdiff_t m_bActive = 0x608; // bool
    constexpr std::ptrdiff_t m_vBoxMins = 0x60c; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x618; // Vector
    constexpr std::ptrdiff_t m_bStartDisabled = 0x624; // bool
    constexpr std::ptrdiff_t m_nShape = 0x628; // int32
    constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x62c; // float32
    constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x630; // float32
    constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x634; // float32
    constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x638; // float32
}

// CBasePlayerControllerAPI (size: 0x8)
namespace CBasePlayerControllerAPI {
}

// CHostageRescueZoneShim (size: 0xf58)
namespace CHostageRescueZoneShim {
}

// CEnvSoundscapeAlias_snd_soundscape (size: 0x698)
namespace CEnvSoundscapeAlias_snd_soundscape {
}

// CCSPlayer_HostageServices (size: 0x50)
namespace CCSPlayer_HostageServices {
    constexpr std::ptrdiff_t m_hCarriedHostage = 0x48; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x4c; // CHandle< C_BaseEntity >
}

// C_GameRulesProxy (size: 0x608)
namespace C_GameRulesProxy {
}

// CRenderComponent (size: 0xd0)
namespace CRenderComponent {
    constexpr std::ptrdiff_t _m_pChainEntity = 0x10; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
    constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
    constexpr std::ptrdiff_t m_bEnableRendering = 0x58; // bool
    constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xa8; // bool
}

// C_Team (size: 0x6c0)
namespace C_Team {
    constexpr std::ptrdiff_t m_aPlayerControllers = 0x608; // C_NetworkUtlVectorBase< CHandle< CBasePlayerController > >
    constexpr std::ptrdiff_t m_aPlayers = 0x620; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > >
    constexpr std::ptrdiff_t m_iScore = 0x638; // int32
    constexpr std::ptrdiff_t m_szTeamname = 0x63c; // char[129]
}

// C_PathParticleRopeAlias_path_particle_rope_clientside (size: 0x718)
namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
}

// CPointChildModifier (size: 0x610)
namespace CPointChildModifier {
    constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x608; // bool
}

// CCSPlayerLegacyJump (size: 0x18)
namespace CCSPlayerLegacyJump {
    constexpr std::ptrdiff_t m_bOldJumpPressed = 0x10; // bool
    constexpr std::ptrdiff_t m_flJumpPressedTime = 0x14; // float32
}

// C_WeaponNOVA (size: 0x1f40)
namespace C_WeaponNOVA {
}

// C_DEagle (size: 0x1f70)
namespace C_DEagle {
}

// C_CS2HudModelAddon (size: 0x1210)
namespace C_CS2HudModelAddon {
}

// C_TriggerMultiple (size: 0xf58)
namespace C_TriggerMultiple {
}

// C_CSGO_TeamPreviewCamera (size: 0x698)
namespace C_CSGO_TeamPreviewCamera {
    constexpr std::ptrdiff_t m_nVariant = 0x690; // int32
}

// C_ColorCorrectionVolume (size: 0x1180)
namespace C_ColorCorrectionVolume {
    constexpr std::ptrdiff_t m_LastEnterWeight = 0xf58; // float32
    constexpr std::ptrdiff_t m_LastEnterTime = 0xf5c; // GameTime_t
    constexpr std::ptrdiff_t m_LastExitWeight = 0xf60; // float32
    constexpr std::ptrdiff_t m_LastExitTime = 0xf64; // GameTime_t
    constexpr std::ptrdiff_t m_bEnabled = 0xf68; // bool
    constexpr std::ptrdiff_t m_MaxWeight = 0xf6c; // float32
    constexpr std::ptrdiff_t m_FadeDuration = 0xf70; // float32
    constexpr std::ptrdiff_t m_Weight = 0xf74; // float32
    constexpr std::ptrdiff_t m_lookupFilename = 0xf78; // char[512]
}

// CPlayer_MovementServices (size: 0x240)
namespace CPlayer_MovementServices {
    constexpr std::ptrdiff_t m_nImpulse = 0x48; // int32
    constexpr std::ptrdiff_t m_nButtons = 0x50; // CInButtonState
    constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x70; // uint64
    constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x78; // uint64
    constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x80; // uint64
    constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x88; // uint32[64]
    constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x188; // uint32
    constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x190; // uint64
    constexpr std::ptrdiff_t m_flMaxspeed = 0x1a0; // float32
    constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x1a4; // float32[4]
    constexpr std::ptrdiff_t m_flForwardMove = 0x1b4; // float32
    constexpr std::ptrdiff_t m_flLeftMove = 0x1b8; // float32
    constexpr std::ptrdiff_t m_flUpMove = 0x1bc; // float32
    constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1c0; // Vector
    constexpr std::ptrdiff_t m_vecOldViewAngles = 0x228; // QAngle
}

// CInfoDynamicShadowHintBox (size: 0x638)
namespace CInfoDynamicShadowHintBox {
    constexpr std::ptrdiff_t m_vBoxMins = 0x620; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x62c; // Vector
}

// CBaseAnimGraphController (size: 0x1b38)
namespace CBaseAnimGraphController {
    constexpr std::ptrdiff_t m_nAnimationAlgorithm = 0x18; // AnimationAlgorithm_t
    constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x20; // CAnimGraphNetworkedVariables
    constexpr std::ptrdiff_t m_pAnimGraphInstance = 0x14b0; // CSmartPtr< IAnimationGraphInstance >
    constexpr std::ptrdiff_t m_nNextExternalGraphHandle = 0x1510; // ExternalAnimGraphHandle_t
    constexpr std::ptrdiff_t m_vecSecondarySkeletonNames = 0x1518; // CUtlVector< CGlobalSymbol >
    constexpr std::ptrdiff_t m_vecSecondarySkeletons = 0x1530; // C_NetworkUtlVectorBase< CHandle< CBaseAnimGraph > >
    constexpr std::ptrdiff_t m_nSecondarySkeletonMasterCount = 0x1548; // int32
    constexpr std::ptrdiff_t m_flSoundSyncTime = 0x1550; // float32
    constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x1554; // uint32
    constexpr std::ptrdiff_t m_hSequence = 0x15a8; // HSequence
    constexpr std::ptrdiff_t m_flSeqStartTime = 0x15ac; // GameTime_t
    constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x15b0; // float32
    constexpr std::ptrdiff_t m_nAnimLoopMode = 0x15b4; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x15b8; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_nNotifyState = 0x15c4; // SequenceFinishNotifyState_t
    constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x15c5; // bool
    constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x15c6; // bool
    constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x15c7; // bool
    constexpr std::ptrdiff_t m_bSequenceFinished = 0x15c8; // bool
    constexpr std::ptrdiff_t m_nPrevAnimUpdateTick = 0x15cc; // GameTick_t
    constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x1868; // CStrongHandle< InfoForResourceTypeCNmGraphDefinition >
    constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x1870; // C_NetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x1888; // int32
    constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x188c; // int32
    constexpr std::ptrdiff_t m_nServerGraphInstanceIteration = 0x1890; // int32
    constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x1894; // int32
    constexpr std::ptrdiff_t m_primaryGraphId = 0x1898; // ResourceId_t
    constexpr std::ptrdiff_t m_vecExternalGraphIds = 0x18a0; // C_NetworkUtlVectorBase< ResourceId_t >
    constexpr std::ptrdiff_t m_vecExternalClipIds = 0x18b8; // C_NetworkUtlVectorBase< ResourceId_t >
    constexpr std::ptrdiff_t m_sAnimGraph2Identifier = 0x18d0; // CGlobalSymbol
    constexpr std::ptrdiff_t m_vecExternalGraphs = 0x1af8; // CUtlVector< ExternalAnimGraph_t >
    constexpr std::ptrdiff_t m_nPrevAnimationAlgorithm = 0x1b31; // AnimationAlgorithm_t
}

// C_ColorCorrection (size: 0x850)
namespace C_ColorCorrection {
    constexpr std::ptrdiff_t m_vecOrigin = 0x608; // Vector
    constexpr std::ptrdiff_t m_MinFalloff = 0x614; // float32
    constexpr std::ptrdiff_t m_MaxFalloff = 0x618; // float32
    constexpr std::ptrdiff_t m_flFadeInDuration = 0x61c; // float32
    constexpr std::ptrdiff_t m_flFadeOutDuration = 0x620; // float32
    constexpr std::ptrdiff_t m_flMaxWeight = 0x624; // float32
    constexpr std::ptrdiff_t m_flCurWeight = 0x628; // float32
    constexpr std::ptrdiff_t m_netlookupFilename = 0x62c; // char[512]
    constexpr std::ptrdiff_t m_bEnabled = 0x82c; // bool
    constexpr std::ptrdiff_t m_bMaster = 0x82d; // bool
    constexpr std::ptrdiff_t m_bClientSide = 0x82e; // bool
    constexpr std::ptrdiff_t m_bExclusive = 0x82f; // bool
    constexpr std::ptrdiff_t m_bEnabledOnClient = 0x830; // bool[1]
    constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x834; // float32[1]
    constexpr std::ptrdiff_t m_bFadingIn = 0x838; // bool[1]
    constexpr std::ptrdiff_t m_flFadeStartWeight = 0x83c; // float32[1]
    constexpr std::ptrdiff_t m_flFadeStartTime = 0x840; // float32[1]
    constexpr std::ptrdiff_t m_flFadeDuration = 0x844; // float32[1]
}

// CBuoyancyHelper (size: 0x118)
namespace CBuoyancyHelper {
    constexpr std::ptrdiff_t m_nFluidType = 0x18; // CUtlStringToken
    constexpr std::ptrdiff_t m_flFluidDensity = 0x1c; // float32
    constexpr std::ptrdiff_t m_flNeutrallyBuoyantGravity = 0x20; // float32
    constexpr std::ptrdiff_t m_flNeutrallyBuoyantLinearDamping = 0x24; // float32
    constexpr std::ptrdiff_t m_flNeutrallyBuoyantAngularDamping = 0x28; // float32
    constexpr std::ptrdiff_t m_bNeutrallyBuoyant = 0x2c; // bool
    constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x30; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x48; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x60; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_vecWheelDrag = 0x78; // CUtlVector< float32 >
}

// C_PhysBox (size: 0xe88)
namespace C_PhysBox {
}

// CCSPlayer_CameraServices (size: 0x340)
namespace CCSPlayer_CameraServices {
    constexpr std::ptrdiff_t m_flDeathCamTilt = 0x2a8; // float32
    constexpr std::ptrdiff_t m_vClientScopeInaccuracy = 0x2b0; // Vector
}

// CFilterMultiple (size: 0x6c0)
namespace CFilterMultiple {
    constexpr std::ptrdiff_t m_nFilterType = 0x640; // filter_t
    constexpr std::ptrdiff_t m_iFilterName = 0x648; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_hFilter = 0x698; // CHandle< C_BaseEntity >[10]
}

// CPulseCell_FireCursors (size: 0xf8)
namespace CPulseCell_FireCursors {
    constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector< CPulse_OutflowConnection >
    constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
    constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0xb0; // CPulse_ResumePoint
}

// CEnvSoundscape (size: 0x698)
namespace CEnvSoundscape {
    constexpr std::ptrdiff_t m_OnPlay = 0x608; // CEntityIOOutput
    constexpr std::ptrdiff_t m_flRadius = 0x620; // float32
    constexpr std::ptrdiff_t m_soundEventName = 0x628; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x630; // bool
    constexpr std::ptrdiff_t m_soundscapeIndex = 0x634; // int32
    constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x638; // int32
    constexpr std::ptrdiff_t m_positionNames = 0x640; // CUtlSymbolLarge[8]
    constexpr std::ptrdiff_t m_hProxySoundscape = 0x680; // CHandle< CEnvSoundscape >
    constexpr std::ptrdiff_t m_bDisabled = 0x684; // bool
    constexpr std::ptrdiff_t m_soundscapeName = 0x688; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_soundEventHash = 0x690; // uint32
}

// C_SoundEventEntityAlias_snd_event_point (size: 0x6b8)
namespace C_SoundEventEntityAlias_snd_event_point {
}

// C_FogController (size: 0x678)
namespace C_FogController {
    constexpr std::ptrdiff_t m_fog = 0x608; // fogparams_t
    constexpr std::ptrdiff_t m_bUseAngles = 0x670; // bool
    constexpr std::ptrdiff_t m_iChangedVariables = 0x674; // int32
}

// C_SoundOpvarSetOBBWindEntity (size: 0x628)
namespace C_SoundOpvarSetOBBWindEntity {
}

// C_MolotovGrenade (size: 0x2000)
namespace C_MolotovGrenade {
}

// C_NetTestBaseCombatCharacter (size: 0x13d8)
namespace C_NetTestBaseCombatCharacter {
}

// CBodyComponentPoint (size: 0x1d0)
namespace CBodyComponentPoint {
    constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
}

// C_WeaponM4A1Silencer (size: 0x1f70)
namespace C_WeaponM4A1Silencer {
}

// C_EconItemView (size: 0x470)
namespace C_EconItemView {
    constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x60; // bool
    constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x61; // bool
    constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x80; // int32
    constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x84; // int32
    constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x88; // char[260]
    constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1b8; // bool
    constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1ba; // uint16
    constexpr std::ptrdiff_t m_iEntityQuality = 0x1bc; // int32
    constexpr std::ptrdiff_t m_iEntityLevel = 0x1c0; // uint32
    constexpr std::ptrdiff_t m_iItemID = 0x1c8; // uint64
    constexpr std::ptrdiff_t m_iItemIDHigh = 0x1d0; // uint32
    constexpr std::ptrdiff_t m_iItemIDLow = 0x1d4; // uint32
    constexpr std::ptrdiff_t m_iAccountID = 0x1d8; // uint32
    constexpr std::ptrdiff_t m_iInventoryPosition = 0x1dc; // uint32
    constexpr std::ptrdiff_t m_bInitialized = 0x1e8; // bool
    constexpr std::ptrdiff_t m_bDisallowSOC = 0x1e9; // bool
    constexpr std::ptrdiff_t m_bIsStoreItem = 0x1ea; // bool
    constexpr std::ptrdiff_t m_bIsTradeItem = 0x1eb; // bool
    constexpr std::ptrdiff_t m_iEntityQuantity = 0x1ec; // int32
    constexpr std::ptrdiff_t m_iRarityOverride = 0x1f0; // int32
    constexpr std::ptrdiff_t m_iQualityOverride = 0x1f4; // int32
    constexpr std::ptrdiff_t m_iOriginOverride = 0x1f8; // int32
    constexpr std::ptrdiff_t m_ubStyleOverride = 0x1fc; // uint8
    constexpr std::ptrdiff_t m_unClientFlags = 0x1fd; // uint8
    constexpr std::ptrdiff_t m_AttributeList = 0x208; // CAttributeList
    constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x280; // CAttributeList
    constexpr std::ptrdiff_t m_szCustomName = 0x2f8; // char[161]
    constexpr std::ptrdiff_t m_szCustomNameOverride = 0x399; // char[161]
    constexpr std::ptrdiff_t m_bInitializedTags = 0x468; // bool
}

// CPulseCell_Timeline::TimelineEvent_t (size: 0x50)
namespace CPulseCell_Timeline_TimelineEvent_t {
    constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
    constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
}

// CPulseCell_IntervalTimer::CursorState_t (size: 0x14)
namespace CPulseCell_IntervalTimer_CursorState_t {
    constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
    constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
    constexpr std::ptrdiff_t m_flWaitInterval = 0x8; // float32
    constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xc; // float32
    constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10; // bool
}

// CPulseCell_BaseRequirement (size: 0x48)
namespace CPulseCell_BaseRequirement {
}

// CPulseCell_BaseState (size: 0x48)
namespace CPulseCell_BaseState {
}

// OutflowWithRequirements_t (size: 0x80)
namespace OutflowWithRequirements_t {
    constexpr std::ptrdiff_t m_Connection = 0x0; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50; // CUtlVector< PulseDocNodeID_t >
    constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68; // CUtlVector< int32 >
}

// CPulseCell_IsRequirementValid (size: 0x48)
namespace CPulseCell_IsRequirementValid {
}

// C_SoundEventPathCornerEntity (size: 0x6d0)
namespace C_SoundEventPathCornerEntity {
    constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x6b8; // C_NetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t >
}

// C_InfoVisibilityBox (size: 0x620)
namespace C_InfoVisibilityBox {
    constexpr std::ptrdiff_t m_nMode = 0x60c; // int32
    constexpr std::ptrdiff_t m_vBoxSize = 0x610; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x61c; // bool
}

// CCSPlayer_ItemServices (size: 0x50)
namespace CCSPlayer_ItemServices {
    constexpr std::ptrdiff_t m_bHasDefuser = 0x48; // bool
    constexpr std::ptrdiff_t m_bHasHelmet = 0x49; // bool
}

// CPulseCell_Value_Gradient (size: 0x60)
namespace CPulseCell_Value_Gradient {
    constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
}

// IntervalTimer (size: 0x10)
namespace IntervalTimer {
    constexpr std::ptrdiff_t m_timestamp = 0x8; // GameTime_t
    constexpr std::ptrdiff_t m_nWorldGroupId = 0xc; // WorldGroupId_t
}

// audioparams_t (size: 0x78)
namespace audioparams_t {
    constexpr std::ptrdiff_t localSound = 0x8; // Vector[8]
    constexpr std::ptrdiff_t soundscapeIndex = 0x68; // int32
    constexpr std::ptrdiff_t localBits = 0x6c; // uint8
    constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70; // int32
    constexpr std::ptrdiff_t soundEventHash = 0x74; // uint32
}

// C_PathParticleRope (size: 0x718)
namespace C_PathParticleRope {
    constexpr std::ptrdiff_t m_bStartActive = 0x610; // bool
    constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x614; // float32
    constexpr std::ptrdiff_t m_iszEffectName = 0x618; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PathNodes_Name = 0x620; // CUtlVector< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_flParticleSpacing = 0x638; // float32
    constexpr std::ptrdiff_t m_flSlack = 0x63c; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x640; // float32
    constexpr std::ptrdiff_t m_ColorTint = 0x644; // Color
    constexpr std::ptrdiff_t m_nEffectState = 0x648; // int32
    constexpr std::ptrdiff_t m_iEffectIndex = 0x650; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_PathNodes_Position = 0x658; // C_NetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x670; // C_NetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x688; // C_NetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_Color = 0x6a0; // C_NetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x6b8; // C_NetworkUtlVectorBase< bool >
    constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x6d0; // C_NetworkUtlVectorBase< float32 >
}

// C_DecoyProjectile (size: 0x1468)
namespace C_DecoyProjectile {
    constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1438; // int32
    constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x143c; // int32
    constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1460; // GameTime_t
}

// C_AttributeContainer (size: 0x4d0)
namespace C_AttributeContainer {
    constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
    constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x4c0; // int32
    constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x4c8; // uint64
}

// C_CSWeaponBase (size: 0x1f40)
namespace C_CSWeaponBase {
    constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0x1948; // WeaponGameplayAnimState
    constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0x194c; // GameTime_t
    constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0x1950; // GameTime_t
    constexpr std::ptrdiff_t m_bInspectPending = 0x1954; // bool
    constexpr std::ptrdiff_t m_bInspectShouldLoop = 0x1955; // bool
    constexpr std::ptrdiff_t m_flCrosshairDistance = 0x1980; // float32
    constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x1984; // int32
    constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x1988; // int32
    constexpr std::ptrdiff_t m_bFireOnEmpty = 0x198c; // bool
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0x1990; // CEntityIOOutput
    constexpr std::ptrdiff_t m_weaponMode = 0x19a8; // CSWeaponMode
    constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x19ac; // float32
    constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x19b0; // Vector
    constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x19bc; // float32
    constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x19c0; // float32
    constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x19c4; // GameTime_t
    constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x19c8; // float32
    constexpr std::ptrdiff_t m_iRecoilIndex = 0x19cc; // int32
    constexpr std::ptrdiff_t m_flRecoilIndex = 0x19d0; // float32
    constexpr std::ptrdiff_t m_bBurstMode = 0x19d4; // bool
    constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x19d8; // GameTime_t
    constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x19dc; // GameTick_t
    constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x19e0; // float32
    constexpr std::ptrdiff_t m_bInReload = 0x19e4; // bool
    constexpr std::ptrdiff_t m_flDroppedAtTime = 0x19e8; // GameTime_t
    constexpr std::ptrdiff_t m_bIsHauledBack = 0x19ec; // bool
    constexpr std::ptrdiff_t m_bSilencerOn = 0x19ed; // bool
    constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x19f0; // GameTime_t
    constexpr std::ptrdiff_t m_flWeaponActionPlaybackRate = 0x19f4; // float32
    constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x19f8; // int32
    constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x19fc; // int32
    constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1a00; // bool
    constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1a04; // float32
    constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x1aa0; // bool
    constexpr std::ptrdiff_t m_bVisualsDataSet = 0x1aa1; // bool
    constexpr std::ptrdiff_t m_bUIWeapon = 0x1aa2; // bool
    constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x1aa4; // int32
    constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x1ab0; // GameTime_t
    constexpr std::ptrdiff_t m_hPrevOwner = 0x1ab4; // CHandle< C_CSPlayerPawn >
    constexpr std::ptrdiff_t m_nDropTick = 0x1ab8; // GameTick_t
    constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0x1abc; // bool
    constexpr std::ptrdiff_t m_donated = 0x1adc; // bool
    constexpr std::ptrdiff_t m_fLastShotTime = 0x1ae0; // GameTime_t
    constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x1ae4; // bool
    constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x1ae5; // bool
    constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1ae8; // float32
    constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1aec; // float32
    constexpr std::ptrdiff_t m_IronSightController = 0x1c50; // C_IronSightController
    constexpr std::ptrdiff_t m_iIronSightMode = 0x1d00; // int32
    constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1d18; // GameTime_t
    constexpr std::ptrdiff_t m_flWatTickOffset = 0x1d78; // float32
    constexpr std::ptrdiff_t m_flLastShakeTime = 0x1d8c; // GameTime_t
}

// CTimeline (size: 0x228)
namespace CTimeline {
    constexpr std::ptrdiff_t m_flValues = 0x10; // float32[64]
    constexpr std::ptrdiff_t m_nValueCounts = 0x110; // int32[64]
    constexpr std::ptrdiff_t m_nBucketCount = 0x210; // int32
    constexpr std::ptrdiff_t m_flInterval = 0x214; // float32
    constexpr std::ptrdiff_t m_flFinalValue = 0x218; // float32
    constexpr std::ptrdiff_t m_nCompressionType = 0x21c; // TimelineCompression_t
    constexpr std::ptrdiff_t m_bStopped = 0x220; // bool
}

// CPulseCursorFuncs (size: 0x1)
namespace CPulseCursorFuncs {
}

// C_TonemapController2 (size: 0x620)
namespace C_TonemapController2 {
    constexpr std::ptrdiff_t m_flAutoExposureMin = 0x608; // float32
    constexpr std::ptrdiff_t m_flAutoExposureMax = 0x60c; // float32
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x610; // float32
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x614; // float32
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x618; // float32
}

// CountdownTimer (size: 0x18)
namespace CountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8; // float32
    constexpr std::ptrdiff_t m_timestamp = 0xc; // GameTime_t
    constexpr std::ptrdiff_t m_timescale = 0x10; // float32
    constexpr std::ptrdiff_t m_nWorldGroupId = 0x14; // WorldGroupId_t
}

// PulseNodeDynamicOutflows_t::DynamicOutflow_t (size: 0x50)
namespace PulseNodeDynamicOutflows_t_DynamicOutflow_t {
    constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
    constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
}

// C_WeaponMag7 (size: 0x1f70)
namespace C_WeaponMag7 {
}

// WeaponPurchaseCount_t (size: 0x38)
namespace WeaponPurchaseCount_t {
    constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
    constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
}

// CBasePulseGraphInstance (size: 0x118)
namespace CBasePulseGraphInstance {
}

// FilterHealth (size: 0x650)
namespace FilterHealth {
    constexpr std::ptrdiff_t m_bAdrenalineActive = 0x640; // bool
    constexpr std::ptrdiff_t m_iHealthMin = 0x644; // int32
    constexpr std::ptrdiff_t m_iHealthMax = 0x648; // int32
}

// C_PointClientUIHUD (size: 0x1080)
namespace C_PointClientUIHUD {
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xec0; // bool
    constexpr std::ptrdiff_t m_bIgnoreInput = 0x1038; // bool
    constexpr std::ptrdiff_t m_flWidth = 0x103c; // float32
    constexpr std::ptrdiff_t m_flHeight = 0x1040; // float32
    constexpr std::ptrdiff_t m_flDPI = 0x1044; // float32
    constexpr std::ptrdiff_t m_flInteractDistance = 0x1048; // float32
    constexpr std::ptrdiff_t m_flDepthOffset = 0x104c; // float32
    constexpr std::ptrdiff_t m_unOwnerContext = 0x1050; // uint32
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0x1054; // uint32
    constexpr std::ptrdiff_t m_unVerticalAlign = 0x1058; // uint32
    constexpr std::ptrdiff_t m_unOrientation = 0x105c; // uint32
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x1060; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x1068; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
}

// CPulseCell_Inflow_GraphHook (size: 0x90)
namespace CPulseCell_Inflow_GraphHook {
    constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
}

// SignatureOutflow_Resume (size: 0x48)
namespace SignatureOutflow_Resume {
}

// CPathSimpleAPI (size: 0x8)
namespace CPathSimpleAPI {
}

// C_InfoLadderDismount (size: 0x608)
namespace C_InfoLadderDismount {
}

// C_PointCommentaryNode (size: 0x11c8)
namespace C_PointCommentaryNode {
    constexpr std::ptrdiff_t m_bActive = 0x1180; // bool
    constexpr std::ptrdiff_t m_bWasActive = 0x1181; // bool
    constexpr std::ptrdiff_t m_flEndTime = 0x1184; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTime = 0x1188; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x118c; // float32
    constexpr std::ptrdiff_t m_iszCommentaryFile = 0x1190; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTitle = 0x1198; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpeakers = 0x11a0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iNodeNumber = 0x11a8; // int32
    constexpr std::ptrdiff_t m_iNodeNumberMax = 0x11ac; // int32
    constexpr std::ptrdiff_t m_bListenedTo = 0x11b0; // bool
    constexpr std::ptrdiff_t m_sndCommentary = 0x11b8; // CSoundPatch*
    constexpr std::ptrdiff_t m_hViewPosition = 0x11c0; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_bRestartAfterRestore = 0x11c4; // bool
}

// CSpriteOriented (size: 0xf00)
namespace CSpriteOriented {
}

// shard_model_desc_t (size: 0x80)
namespace shard_model_desc_t {
    constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
    constexpr std::ptrdiff_t m_hMaterialBase = 0x10; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_solid = 0x20; // ShardSolid_t
    constexpr std::ptrdiff_t m_vecPanelSize = 0x24; // Vector2D
    constexpr std::ptrdiff_t m_vecStressPositionA = 0x2c; // Vector2D
    constexpr std::ptrdiff_t m_vecStressPositionB = 0x34; // Vector2D
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase< Vector2D >
    constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase< Vector4D >
    constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70; // float32
    constexpr std::ptrdiff_t m_bHasParent = 0x74; // bool
    constexpr std::ptrdiff_t m_bParentFrozen = 0x75; // bool
    constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
}

// C_KeychainModule (size: 0x1178)
namespace C_KeychainModule {
    constexpr std::ptrdiff_t m_nKeychainDefID = 0x1170; // uint32
    constexpr std::ptrdiff_t m_nKeychainSeed = 0x1174; // uint32
}

// CFuncWater (size: 0xfa0)
namespace CFuncWater {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0xe88; // CBuoyancyHelper
}

// CCSPlayer_GlowServices (size: 0x50)
namespace CCSPlayer_GlowServices {
}

// CCSGameModeRules (size: 0x30)
namespace CCSGameModeRules {
    constexpr std::ptrdiff_t _m_pChainEntity = 0x8; // CNetworkVarChainer
}

// C_Flashbang (size: 0x2000)
namespace C_Flashbang {
}

// C_PointClientUIWorldTextPanel (size: 0x12e0)
namespace C_PointClientUIWorldTextPanel {
    constexpr std::ptrdiff_t m_messageText = 0x10e0; // char[512]
}

// CCSPlayer_WaterServices (size: 0x70)
namespace CCSPlayer_WaterServices {
    constexpr std::ptrdiff_t m_flWaterJumpTime = 0x48; // float32
    constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x4c; // Vector
    constexpr std::ptrdiff_t m_flSwimSoundTime = 0x58; // float32
}

// C_CSObserverPawn (size: 0x1658)
namespace C_CSObserverPawn {
    constexpr std::ptrdiff_t m_hDetectParentChange = 0x1650; // CEntityHandle
}

// ViewAngleServerChange_t (size: 0x48)
namespace ViewAngleServerChange_t {
    constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
    constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
    constexpr std::ptrdiff_t nIndex = 0x40; // uint32
}

// C_FuncLadder (size: 0xee0)
namespace C_FuncLadder {
    constexpr std::ptrdiff_t m_vecLadderDir = 0xe88; // Vector
    constexpr std::ptrdiff_t m_Dismounts = 0xe98; // CUtlVector< CHandle< C_InfoLadderDismount > >
    constexpr std::ptrdiff_t m_vecLocalTop = 0xeb0; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0xebc; // VectorWS
    constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0xec8; // VectorWS
    constexpr std::ptrdiff_t m_flAutoRideSpeed = 0xed4; // float32
    constexpr std::ptrdiff_t m_bDisabled = 0xed8; // bool
    constexpr std::ptrdiff_t m_bFakeLadder = 0xed9; // bool
    constexpr std::ptrdiff_t m_bHasSlack = 0xeda; // bool
}

// C_WeaponMP5SD (size: 0x1f70)
namespace C_WeaponMP5SD {
}

// C_World (size: 0xe88)
namespace C_World {
}

// C_CSGO_TeamSelectCounterTerroristPosition (size: 0x13a8)
namespace C_CSGO_TeamSelectCounterTerroristPosition {
}

// C_WeaponGalilAR (size: 0x1f70)
namespace C_WeaponGalilAR {
}

// CCSPlayerBase_CameraServices (size: 0x2a8)
namespace CCSPlayerBase_CameraServices {
    constexpr std::ptrdiff_t m_iFOV = 0x290; // uint32
    constexpr std::ptrdiff_t m_iFOVStart = 0x294; // uint32
    constexpr std::ptrdiff_t m_flFOVTime = 0x298; // GameTime_t
    constexpr std::ptrdiff_t m_flFOVRate = 0x29c; // float32
    constexpr std::ptrdiff_t m_hZoomOwner = 0x2a0; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_flLastShotFOV = 0x2a4; // float32
}

// C_TeamplayRules (size: 0x40)
namespace C_TeamplayRules {
}

// CPulseCell_Inflow_BaseEntrypoint (size: 0x80)
namespace CPulseCell_Inflow_BaseEntrypoint {
    constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
}

// C_WeaponSG556 (size: 0x1f70)
namespace C_WeaponSG556 {
}

// C_CSPlayerPawn (size: 0x3ef0)
namespace C_CSPlayerPawn {
    constexpr std::ptrdiff_t m_pBulletServices = 0x1660; // CCSPlayer_BulletServices*
    constexpr std::ptrdiff_t m_pHostageServices = 0x1668; // CCSPlayer_HostageServices*
    constexpr std::ptrdiff_t m_pBuyServices = 0x1670; // CCSPlayer_BuyServices*
    constexpr std::ptrdiff_t m_pGlowServices = 0x1678; // CCSPlayer_GlowServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1680; // CCSPlayer_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pDamageReactServices = 0x1688; // CCSPlayer_DamageReactServices*
    constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1690; // GameTime_t
    constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x1694; // GameTime_t
    constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x1698; // bool
    constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x169c; // float32
    constexpr std::ptrdiff_t m_flOldFallVelocity = 0x16a0; // float32
    constexpr std::ptrdiff_t m_szLastPlaceName = 0x16a4; // char[18]
    constexpr std::ptrdiff_t m_bPrevDefuser = 0x16b6; // bool
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x16b7; // bool
    constexpr std::ptrdiff_t m_nPrevArmorVal = 0x16b8; // int32
    constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x16bc; // int32
    constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x16c0; // uint32
    constexpr std::ptrdiff_t m_unWeaponHash = 0x16c4; // uint32
    constexpr std::ptrdiff_t m_bInBuyZone = 0x16c8; // bool
    constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x16c9; // bool
    constexpr std::ptrdiff_t m_aimPunchAngle = 0x16cc; // QAngle
    constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x16d8; // QAngle
    constexpr std::ptrdiff_t m_aimPunchTickBase = 0x16e4; // GameTick_t
    constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x16e8; // float32
    constexpr std::ptrdiff_t m_bInLanding = 0x1710; // bool
    constexpr std::ptrdiff_t m_flLandingStartTime = 0x1714; // float32
    constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x1718; // bool
    constexpr std::ptrdiff_t m_bInBombZone = 0x1719; // bool
    constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x171a; // bool
    constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x171c; // GameTime_t
    constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x1720; // GameTime_t
    constexpr std::ptrdiff_t m_iRetakesOffering = 0x1878; // int32
    constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x187c; // int32
    constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1880; // bool
    constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1881; // bool
    constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x1884; // int32
    constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1888; // loadout_slot_t
    constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x188d; // bool
    constexpr std::ptrdiff_t m_EconGloves = 0x1890; // C_EconItemView
    constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1d00; // uint8
    constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1d01; // bool
    constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1d04; // int32
    constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1d08; // Vector
    constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x1d14; // Vector
    constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1d20; // char[64]
    constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1d60; // bool
    constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1d64; // Vector
    constexpr std::ptrdiff_t m_lastLandTime = 0x23e0; // GameTime_t
    constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x23e4; // bool
    constexpr std::ptrdiff_t m_hHudModelArms = 0x2400; // CHandle< C_CS2HudModelArms >
    constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x2404; // QAngle
    constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x2410; // bool
    constexpr std::ptrdiff_t m_bLeftHanded = 0x2411; // bool
    constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x2414; // GameTime_t
    constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x2418; // float32
    constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x241c; // float32
    constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x2420; // float32
    constexpr std::ptrdiff_t m_flViewmodelFOV = 0x2424; // float32
    constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x2428; // uint32[5]
    constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x2460; // Color
    constexpr std::ptrdiff_t m_vecBulletHitModels = 0x24b0; // CUtlVector< C_BulletHitModel* >
    constexpr std::ptrdiff_t m_bIsWalking = 0x24c8; // bool
    constexpr std::ptrdiff_t m_thirdPersonHeading = 0x24d0; // QAngle
    constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x2560; // float32
    constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x25d8; // float32
    constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x2650; // Vector
    constexpr std::ptrdiff_t m_entitySpottedState = 0x26e0; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_bIsScoped = 0x26f8; // bool
    constexpr std::ptrdiff_t m_bResumeZoom = 0x26f9; // bool
    constexpr std::ptrdiff_t m_bIsDefusing = 0x26fa; // bool
    constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x26fb; // bool
    constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x26fc; // CSPlayerBlockingUseAction_t
    constexpr std::ptrdiff_t m_flEmitSoundTime = 0x2700; // GameTime_t
    constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x2704; // bool
    constexpr std::ptrdiff_t m_nWhichBombZone = 0x2708; // int32
    constexpr std::ptrdiff_t m_iShotsFired = 0x270c; // int32
    constexpr std::ptrdiff_t m_flFlinchStack = 0x2710; // float32
    constexpr std::ptrdiff_t m_flVelocityModifier = 0x2714; // float32
    constexpr std::ptrdiff_t m_flHitHeading = 0x2718; // float32
    constexpr std::ptrdiff_t m_nHitBodyPart = 0x271c; // int32
    constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x2720; // bool
    constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x2724; // float32
    constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x2729; // bool
    constexpr std::ptrdiff_t m_ArmorValue = 0x272c; // int32
    constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x2730; // uint16
    constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x2732; // uint16
    constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x2734; // uint16
    constexpr std::ptrdiff_t m_nLastKillerIndex = 0x2738; // CEntityIndex
    constexpr std::ptrdiff_t m_bOldIsScoped = 0x273c; // bool
    constexpr std::ptrdiff_t m_bHasDeathInfo = 0x273d; // bool
    constexpr std::ptrdiff_t m_flDeathInfoTime = 0x2740; // float32
    constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x2744; // Vector
    constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x2754; // GameTime_t
    constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x2758; // bool
    constexpr std::ptrdiff_t m_angStashedShootAngles = 0x275c; // QAngle
    constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x2768; // Vector
    constexpr std::ptrdiff_t m_vecStashedVelocity = 0x2774; // Vector
    constexpr std::ptrdiff_t m_angShootAngleHistory = 0x2780; // QAngle[2]
    constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x2798; // Vector[2]
    constexpr std::ptrdiff_t m_vecVelocityHistory = 0x27b0; // Vector[2]
    constexpr std::ptrdiff_t m_PredictedDamageTags = 0x27c8; // C_UtlVectorEmbeddedNetworkVar< PredictedDamageTag_t >
    constexpr std::ptrdiff_t m_nPrevHighestReceivedDamageTagTick = 0x2830; // GameTick_t
    constexpr std::ptrdiff_t m_nHighestAppliedDamageTagTick = 0x2834; // int32
    constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x3d6c; // bool
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x3d70; // GameTime_t
    constexpr std::ptrdiff_t m_bGunGameImmunity = 0x3d74; // bool
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x3d78; // GameTime_t
    constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x3d7c; // float32
    constexpr std::ptrdiff_t m_vecLastAliveLocalVelocity = 0x3d84; // Vector
    constexpr std::ptrdiff_t m_fRenderingClipPlane = 0x3d90; // float32[4]
    constexpr std::ptrdiff_t m_nLastClipPlaneSetupFrame = 0x3da0; // int32
    constexpr std::ptrdiff_t m_vecLastClipCameraPos = 0x3da4; // Vector
    constexpr std::ptrdiff_t m_vecLastClipCameraForward = 0x3db0; // Vector
    constexpr std::ptrdiff_t m_bClipHitStaticWorld = 0x3dbc; // bool
    constexpr std::ptrdiff_t m_bCachedPlaneIsValid = 0x3dbd; // bool
    constexpr std::ptrdiff_t m_pClippingWeapon = 0x3dc0; // C_CSWeaponBase*
    constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x3dc8; // ParticleIndex_t
    constexpr std::ptrdiff_t m_angEyeAngles = 0x3dd0; // QAngle
    constexpr std::ptrdiff_t m_arrOldEyeAnglesTimes = 0x3e60; // GameTime_t[4]
    constexpr std::ptrdiff_t m_arrOldEyeAngles = 0x3e70; // QAngle[4]
    constexpr std::ptrdiff_t m_angEyeAnglesVelocity = 0x3ea0; // QAngle
    constexpr std::ptrdiff_t m_iIDEntIndex = 0x3eac; // CEntityIndex
    constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x3eb0; // CountdownTimer
    constexpr std::ptrdiff_t m_iTargetItemEntIdx = 0x3ec8; // CEntityIndex
    constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x3ecc; // CEntityIndex
    constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x3ed0; // CountdownTimer
}

// C_CSGO_TeamIntroTerroristPosition (size: 0x13a8)
namespace C_CSGO_TeamIntroTerroristPosition {
}

// CPulseCell_WaitForCursorsWithTagBase (size: 0x98)
namespace CPulseCell_WaitForCursorsWithTagBase {
    constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
    constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
}

// C_Hostage (size: 0x14a8)
namespace C_Hostage {
    constexpr std::ptrdiff_t m_entitySpottedState = 0x13d8; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_leader = 0x13f0; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_reuseTimer = 0x13f8; // CountdownTimer
    constexpr std::ptrdiff_t m_vel = 0x1410; // Vector
    constexpr std::ptrdiff_t m_isRescued = 0x141c; // bool
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x141d; // bool
    constexpr std::ptrdiff_t m_nHostageState = 0x1420; // int32
    constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x1424; // bool
    constexpr std::ptrdiff_t m_hHostageGrabber = 0x1428; // CHandle< C_CSPlayerPawn >
    constexpr std::ptrdiff_t m_fLastGrabTime = 0x142c; // GameTime_t
    constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1430; // Vector
    constexpr std::ptrdiff_t m_flRescueStartTime = 0x143c; // GameTime_t
    constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1440; // GameTime_t
    constexpr std::ptrdiff_t m_flDropStartTime = 0x1444; // GameTime_t
    constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1448; // GameTime_t
    constexpr std::ptrdiff_t m_blinkTimer = 0x1450; // CountdownTimer
    constexpr std::ptrdiff_t m_lookAt = 0x1468; // Vector
    constexpr std::ptrdiff_t m_lookAroundTimer = 0x1478; // CountdownTimer
    constexpr std::ptrdiff_t m_isInit = 0x1490; // bool
    constexpr std::ptrdiff_t m_eyeAttachment = 0x1491; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_chestAttachment = 0x1492; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_pPredictionOwner = 0x1498; // CBasePlayerController*
    constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x14a0; // GameTime_t
}

// C_fogplayerparams_t (size: 0x40)
namespace C_fogplayerparams_t {
    constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle< C_FogController >
    constexpr std::ptrdiff_t m_flTransitionTime = 0xc; // float32
    constexpr std::ptrdiff_t m_OldColor = 0x10; // Color
    constexpr std::ptrdiff_t m_flOldStart = 0x14; // float32
    constexpr std::ptrdiff_t m_flOldEnd = 0x18; // float32
    constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1c; // float32
    constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20; // float32
    constexpr std::ptrdiff_t m_flOldFarZ = 0x24; // float32
    constexpr std::ptrdiff_t m_NewColor = 0x28; // Color
    constexpr std::ptrdiff_t m_flNewStart = 0x2c; // float32
    constexpr std::ptrdiff_t m_flNewEnd = 0x30; // float32
    constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34; // float32
    constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38; // float32
    constexpr std::ptrdiff_t m_flNewFarZ = 0x3c; // float32
}

// CGameSceneNode (size: 0x150)
namespace CGameSceneNode {
    constexpr std::ptrdiff_t m_nodeToWorld = 0x10; // CTransformWS
    constexpr std::ptrdiff_t m_pOwner = 0x30; // CEntityInstance*
    constexpr std::ptrdiff_t m_pParent = 0x38; // CGameSceneNode*
    constexpr std::ptrdiff_t m_pChild = 0x40; // CGameSceneNode*
    constexpr std::ptrdiff_t m_pNextSibling = 0x48; // CGameSceneNode*
    constexpr std::ptrdiff_t m_hParent = 0x78; // CGameSceneNodeHandle
    constexpr std::ptrdiff_t m_vecOrigin = 0x88; // CNetworkOriginCellCoordQuantizedVector
    constexpr std::ptrdiff_t m_angRotation = 0xc0; // QAngle
    constexpr std::ptrdiff_t m_flScale = 0xcc; // float32
    constexpr std::ptrdiff_t m_vecAbsOrigin = 0xd0; // VectorWS
    constexpr std::ptrdiff_t m_angAbsRotation = 0xdc; // QAngle
    constexpr std::ptrdiff_t m_flAbsScale = 0xe8; // float32
    constexpr std::ptrdiff_t m_vecWrappedLocalOrigin = 0xec; // Vector
    constexpr std::ptrdiff_t m_angWrappedLocalRotation = 0xf8; // QAngle
    constexpr std::ptrdiff_t m_flWrappedScale = 0x104; // float32
    constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0x108; // int16
    constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0x10a; // bool
    constexpr std::ptrdiff_t m_bDormant = 0x10b; // bool
    constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0x10c; // bool
    constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
    constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nHierarchicalDepth = 0x10f; // uint8
    constexpr std::ptrdiff_t m_nHierarchyType = 0x110; // uint8
    constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x111; // uint8
    constexpr std::ptrdiff_t m_name = 0x114; // CUtlStringToken
    constexpr std::ptrdiff_t m_hierarchyAttachName = 0x128; // CUtlStringToken
    constexpr std::ptrdiff_t m_flZOffset = 0x12c; // float32
    constexpr std::ptrdiff_t m_flClientLocalScale = 0x130; // float32
    constexpr std::ptrdiff_t m_vRenderOrigin = 0x134; // Vector
}

// CPlayer_ObserverServices (size: 0x60)
namespace CPlayer_ObserverServices {
    constexpr std::ptrdiff_t m_iObserverMode = 0x48; // uint8
    constexpr std::ptrdiff_t m_hObserverTarget = 0x4c; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_iObserverLastMode = 0x50; // ObserverMode_t
    constexpr std::ptrdiff_t m_bForcedObserverMode = 0x54; // bool
    constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x58; // float32
    constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x5c; // GameTime_t
}

// C_SoundAreaEntityBase (size: 0x630)
namespace C_SoundAreaEntityBase {
    constexpr std::ptrdiff_t m_bDisabled = 0x608; // bool
    constexpr std::ptrdiff_t m_bWasEnabled = 0x610; // bool
    constexpr std::ptrdiff_t m_iszSoundAreaType = 0x618; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vPos = 0x620; // Vector
}

// C_PlayerVisibility (size: 0x638)
namespace C_PlayerVisibility {
    constexpr std::ptrdiff_t m_flVisibilityStrength = 0x608; // float32
    constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x60c; // float32
    constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x610; // float32
    constexpr std::ptrdiff_t m_flFadeTime = 0x614; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x618; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x619; // bool
}

// CAttributeManager::cached_attribute_float_t (size: 0x18)
namespace CAttributeManager_cached_attribute_float_t {
    constexpr std::ptrdiff_t flIn = 0x0; // float32
    constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t flOut = 0x10; // float32
}

// C_BasePlayerWeapon (size: 0x18f8)
namespace C_BasePlayerWeapon {
    constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x18c0; // GameTick_t
    constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x18c4; // float32
    constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x18c8; // GameTick_t
    constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x18cc; // float32
    constexpr std::ptrdiff_t m_iClip1 = 0x18d0; // int32
    constexpr std::ptrdiff_t m_iClip2 = 0x18d4; // int32
    constexpr std::ptrdiff_t m_pReserveAmmo = 0x18d8; // int32[2]
}

// CRagdollManager (size: 0x610)
namespace CRagdollManager {
    constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x608; // int8
}

// C_HEGrenade (size: 0x2000)
namespace C_HEGrenade {
}

// C_EnvSky (size: 0xee8)
namespace C_EnvSky {
    constexpr std::ptrdiff_t m_hSkyMaterial = 0xe88; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0xe90; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_bStartDisabled = 0xe98; // bool
    constexpr std::ptrdiff_t m_vTintColor = 0xe99; // Color
    constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0xe9d; // Color
    constexpr std::ptrdiff_t m_flBrightnessScale = 0xea4; // float32
    constexpr std::ptrdiff_t m_nFogType = 0xea8; // int32
    constexpr std::ptrdiff_t m_flFogMinStart = 0xeac; // float32
    constexpr std::ptrdiff_t m_flFogMinEnd = 0xeb0; // float32
    constexpr std::ptrdiff_t m_flFogMaxStart = 0xeb4; // float32
    constexpr std::ptrdiff_t m_flFogMaxEnd = 0xeb8; // float32
    constexpr std::ptrdiff_t m_bEnabled = 0xebc; // bool
}

// CPulse_InvokeBinding (size: 0xb0)
namespace CPulse_InvokeBinding {
    constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
    constexpr std::ptrdiff_t m_FuncName = 0x30; // PulseSymbol_t
    constexpr std::ptrdiff_t m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
    constexpr std::ptrdiff_t m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nSrcInstruction = 0x48; // int32
}

// C_EnvWindController (size: 0x728)
namespace C_EnvWindController {
    constexpr std::ptrdiff_t m_EnvWindShared = 0x608; // C_EnvWindShared
    constexpr std::ptrdiff_t m_fDirectionVariation = 0x700; // float32
    constexpr std::ptrdiff_t m_fSpeedVariation = 0x704; // float32
    constexpr std::ptrdiff_t m_fTurbulence = 0x708; // float32
    constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x70c; // float32
    constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x710; // float32
    constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x714; // int32
    constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x718; // int32
    constexpr std::ptrdiff_t m_nClipmapLevels = 0x71c; // int32
    constexpr std::ptrdiff_t m_bIsMaster = 0x720; // bool
    constexpr std::ptrdiff_t m_bFirstTime = 0x721; // bool
}

// C_GameRules (size: 0x40)
namespace C_GameRules {
    constexpr std::ptrdiff_t _m_pChainEntity = 0x8; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x30; // int32
    constexpr std::ptrdiff_t m_nPauseStartTick = 0x34; // int32
    constexpr std::ptrdiff_t m_bGamePaused = 0x38; // bool
}

// C_WeaponMAC10 (size: 0x1f70)
namespace C_WeaponMAC10 {
}

// C_CSGO_MapPreviewCameraPath (size: 0x690)
namespace C_CSGO_MapPreviewCameraPath {
    constexpr std::ptrdiff_t m_flZFar = 0x608; // float32
    constexpr std::ptrdiff_t m_flZNear = 0x60c; // float32
    constexpr std::ptrdiff_t m_bLoop = 0x610; // bool
    constexpr std::ptrdiff_t m_bVerticalFOV = 0x611; // bool
    constexpr std::ptrdiff_t m_bConstantSpeed = 0x612; // bool
    constexpr std::ptrdiff_t m_flDuration = 0x614; // float32
    constexpr std::ptrdiff_t m_flPathLength = 0x658; // float32
    constexpr std::ptrdiff_t m_flPathDuration = 0x65c; // float32
    constexpr std::ptrdiff_t m_bDofEnabled = 0x674; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x678; // float32
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x67c; // float32
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x680; // float32
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x684; // float32
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x688; // float32
}

// C_PointWorldText (size: 0x1160)
namespace C_PointWorldText {
    constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xe90; // bool
    constexpr std::ptrdiff_t m_nTextWidthPx = 0xea8; // int32
    constexpr std::ptrdiff_t m_nTextHeightPx = 0xeac; // int32
    constexpr std::ptrdiff_t m_messageText = 0xeb0; // char[512]
    constexpr std::ptrdiff_t m_FontName = 0x10b0; // char[64]
    constexpr std::ptrdiff_t m_BackgroundMaterialName = 0x10f0; // char[64]
    constexpr std::ptrdiff_t m_bEnabled = 0x1130; // bool
    constexpr std::ptrdiff_t m_bFullbright = 0x1131; // bool
    constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x1134; // float32
    constexpr std::ptrdiff_t m_flFontSize = 0x1138; // float32
    constexpr std::ptrdiff_t m_flDepthOffset = 0x113c; // float32
    constexpr std::ptrdiff_t m_bDrawBackground = 0x1140; // bool
    constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0x1144; // float32
    constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0x1148; // float32
    constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0x114c; // float32
    constexpr std::ptrdiff_t m_Color = 0x1150; // Color
    constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x1154; // PointWorldTextJustifyHorizontal_t
    constexpr std::ptrdiff_t m_nJustifyVertical = 0x1158; // PointWorldTextJustifyVertical_t
    constexpr std::ptrdiff_t m_nReorientMode = 0x115c; // PointWorldTextReorientMode_t
}

// C_RopeKeyframe (size: 0x11f8)
namespace C_RopeKeyframe {
    constexpr std::ptrdiff_t m_LinksTouchingSomething = 0xe90; // CBitVec< 10 >
    constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0xe94; // int32
    constexpr std::ptrdiff_t m_bApplyWind = 0xe98; // bool
    constexpr std::ptrdiff_t m_fPrevLockedPoints = 0xe9c; // int32
    constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0xea0; // int32
    constexpr std::ptrdiff_t m_bPrevEndPointPos = 0xea4; // bool[2]
    constexpr std::ptrdiff_t m_vPrevEndPointPos = 0xea8; // Vector[2]
    constexpr std::ptrdiff_t m_flCurScroll = 0xec0; // float32
    constexpr std::ptrdiff_t m_flScrollSpeed = 0xec4; // float32
    constexpr std::ptrdiff_t m_RopeFlags = 0xec8; // uint16
    constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0xed0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_nSegments = 0x1148; // uint8
    constexpr std::ptrdiff_t m_hStartPoint = 0x114c; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_hEndPoint = 0x1150; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_iStartAttachment = 0x1154; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEndAttachment = 0x1155; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_Subdiv = 0x1156; // uint8
    constexpr std::ptrdiff_t m_RopeLength = 0x1158; // int16
    constexpr std::ptrdiff_t m_Slack = 0x115a; // int16
    constexpr std::ptrdiff_t m_TextureScale = 0x115c; // float32
    constexpr std::ptrdiff_t m_fLockedPoints = 0x1160; // uint8
    constexpr std::ptrdiff_t m_nChangeCount = 0x1161; // uint8
    constexpr std::ptrdiff_t m_Width = 0x1164; // float32
    constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1168; // C_RopeKeyframe::CPhysicsDelegate
    constexpr std::ptrdiff_t m_hMaterial = 0x1178; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_TextureHeight = 0x1180; // int32
    constexpr std::ptrdiff_t m_vecImpulse = 0x1184; // Vector
    constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x1190; // Vector
    constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x119c; // float32
    constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x11a0; // float32
    constexpr std::ptrdiff_t m_flTimeToNextGust = 0x11a4; // float32
    constexpr std::ptrdiff_t m_vWindDir = 0x11a8; // Vector
    constexpr std::ptrdiff_t m_vColorMod = 0x11b4; // Vector
    constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x11c0; // Vector[2]
    constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x11d8; // QAngle[2]
    constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x11f0; // bool
    constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
}

// C_BaseToggle (size: 0xe88)
namespace C_BaseToggle {
}

// C_EnvCubemapBox (size: 0x6f0)
namespace C_EnvCubemapBox {
}

// C_RopeKeyframe::CPhysicsDelegate (size: 0x10)
namespace C_RopeKeyframe_CPhysicsDelegate {
    constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
}

// CInfoDynamicShadowHint (size: 0x620)
namespace CInfoDynamicShadowHint {
    constexpr std::ptrdiff_t m_bDisabled = 0x608; // bool
    constexpr std::ptrdiff_t m_flRange = 0x60c; // float32
    constexpr std::ptrdiff_t m_nImportance = 0x610; // int32
    constexpr std::ptrdiff_t m_nLightChoice = 0x614; // int32
    constexpr std::ptrdiff_t m_hLight = 0x618; // CHandle< C_BaseEntity >
}

// CPathNode (size: 0x660)
namespace CPathNode {
    constexpr std::ptrdiff_t m_vInTangentLocal = 0x608; // Vector
    constexpr std::ptrdiff_t m_vOutTangentLocal = 0x614; // Vector
    constexpr std::ptrdiff_t m_strParentPathUniqueID = 0x620; // CUtlString
    constexpr std::ptrdiff_t m_strPathNodeParameter = 0x628; // CUtlString
    constexpr std::ptrdiff_t m_xWSPrevParent = 0x630; // CTransform
    constexpr std::ptrdiff_t m_hPath = 0x650; // CHandle< CPathWithDynamicNodes >
}

// C_FuncMoveLinear (size: 0xe88)
namespace C_FuncMoveLinear {
}

// CServerOnlyModelEntity (size: 0xe88)
namespace CServerOnlyModelEntity {
}

// C_CSGO_TeamSelectCamera (size: 0x698)
namespace C_CSGO_TeamSelectCamera {
}

// CPulseCell_IntervalTimer (size: 0xd8)
namespace CPulseCell_IntervalTimer {
    constexpr std::ptrdiff_t m_Completed = 0x48; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnInterval = 0x90; // SignatureOutflow_Continue
}

// C_WeaponXM1014 (size: 0x1f40)
namespace C_WeaponXM1014 {
}

// C_WorldModelGloves (size: 0x1170)
namespace C_WorldModelGloves {
}

// C_PhysicsPropMultiplayer (size: 0x12e0)
namespace C_PhysicsPropMultiplayer {
}

// C_SoundEventOBBEntity (size: 0x6e0)
namespace C_SoundEventOBBEntity {
    constexpr std::ptrdiff_t m_vMins = 0x6b8; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x6c4; // Vector
}

// CPulseTestScriptLib (size: 0x1)
namespace CPulseTestScriptLib {
}

// CPulseCell_BaseLerp (size: 0x90)
namespace CPulseCell_BaseLerp {
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
}

// C_WeaponAug (size: 0x1f70)
namespace C_WeaponAug {
}

// C_BasePropDoor (size: 0x13e0)
namespace C_BasePropDoor {
    constexpr std::ptrdiff_t m_eDoorState = 0x13b0; // DoorState_t
    constexpr std::ptrdiff_t m_modelChanged = 0x13b4; // bool
    constexpr std::ptrdiff_t m_bLocked = 0x13b5; // bool
    constexpr std::ptrdiff_t m_bNoNPCs = 0x13b6; // bool
    constexpr std::ptrdiff_t m_closedPosition = 0x13b8; // Vector
    constexpr std::ptrdiff_t m_closedAngles = 0x13c4; // QAngle
    constexpr std::ptrdiff_t m_hMaster = 0x13d0; // CHandle< C_BasePropDoor >
    constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x13d4; // Vector
}

// CChoreoInfoTarget (size: 0x608)
namespace CChoreoInfoTarget {
}

// CNetworkedSequenceOperation (size: 0x28)
namespace CNetworkedSequenceOperation {
    constexpr std::ptrdiff_t m_hSequence = 0x8; // HSequence
    constexpr std::ptrdiff_t m_flPrevCycle = 0xc; // float32
    constexpr std::ptrdiff_t m_flCycle = 0x10; // float32
    constexpr std::ptrdiff_t m_flWeight = 0x14; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1c; // bool
    constexpr std::ptrdiff_t m_bDiscontinuity = 0x1d; // bool
    constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20; // float32
    constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24; // float32
}

// C_Item_Healthshot (size: 0x1f50)
namespace C_Item_Healthshot {
}

// CEntityInstance (size: 0x38)
namespace CEntityInstance {
    constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
    constexpr std::ptrdiff_t m_CScriptComponent = 0x30; // CScriptComponent*
}

// C_BaseModelEntity (size: 0xe88)
namespace C_BaseModelEntity {
    constexpr std::ptrdiff_t m_CRenderComponent = 0xaf0; // CRenderComponent*
    constexpr std::ptrdiff_t m_CHitboxComponent = 0xaf8; // CHitboxComponent
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0 = 0xb10; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1 = 0xb14; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2 = 0xb18; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3 = 0xb1c; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4 = 0xb20; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0xb24; // int32
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0xb28; // int32
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0xb2c; // int32
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0xb30; // int32
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0xb34; // int32
    constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0xb38; // CDestructiblePartsComponent*
    constexpr std::ptrdiff_t m_bInitModelEffects = 0xb58; // bool
    constexpr std::ptrdiff_t m_bDoingModelEffects = 0xb59; // bool
    constexpr std::ptrdiff_t m_bIsStaticProp = 0xb5a; // bool
    constexpr std::ptrdiff_t m_iOldHealth = 0xb5c; // int32
    constexpr std::ptrdiff_t m_nRenderMode = 0xb60; // RenderMode_t
    constexpr std::ptrdiff_t m_nRenderFX = 0xb61; // RenderFx_t
    constexpr std::ptrdiff_t m_bAllowFadeInView = 0xb62; // bool
    constexpr std::ptrdiff_t m_clrRender = 0xb80; // Color
    constexpr std::ptrdiff_t m_vecRenderAttributes = 0xb88; // C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xc08; // bool
    constexpr std::ptrdiff_t m_bNoInterpolate = 0xc09; // bool
    constexpr std::ptrdiff_t m_Collision = 0xc10; // CCollisionProperty
    constexpr std::ptrdiff_t m_Glow = 0xcc0; // CGlowProperty
    constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xd18; // float32
    constexpr std::ptrdiff_t m_fadeMinDist = 0xd1c; // float32
    constexpr std::ptrdiff_t m_fadeMaxDist = 0xd20; // float32
    constexpr std::ptrdiff_t m_flFadeScale = 0xd24; // float32
    constexpr std::ptrdiff_t m_flShadowStrength = 0xd28; // float32
    constexpr std::ptrdiff_t m_nObjectCulling = 0xd2c; // uint8
    constexpr std::ptrdiff_t m_nRequiredDecalRtEncoding = 0xd2d; // DecalRtEncoding_t
    constexpr std::ptrdiff_t m_vecViewOffset = 0xd58; // CNetworkViewOffsetVector
    constexpr std::ptrdiff_t m_pClientAlphaProperty = 0xe38; // CClientAlphaProperty*
    constexpr std::ptrdiff_t m_ClientOverrideTint = 0xe40; // Color
    constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0xe44; // bool
    constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0xe80; // uint32[1]
}

// CCSPlayer_BulletServices (size: 0xa8)
namespace CCSPlayer_BulletServices {
    constexpr std::ptrdiff_t m_totalHitsOnServer = 0x48; // int32
}

// C_SoundOpvarSetAutoRoomEntity (size: 0x628)
namespace C_SoundOpvarSetAutoRoomEntity {
}

// C_EnvCombinedLightProbeVolume (size: 0x1750)
namespace C_EnvCombinedLightProbeVolume {
    constexpr std::ptrdiff_t m_Entity_Color = 0x1680; // Color
    constexpr std::ptrdiff_t m_Entity_flBrightness = 0x1684; // float32
    constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1688; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1690; // bool
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1698; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x16a0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x16a8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x16b0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x16b8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x16c0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x16c8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x16d0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x16d8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x16e0; // Vector
    constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x16ec; // Vector
    constexpr std::ptrdiff_t m_Entity_bMoveable = 0x16f8; // bool
    constexpr std::ptrdiff_t m_Entity_nHandshake = 0x16fc; // int32
    constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x1700; // int32
    constexpr std::ptrdiff_t m_Entity_nPriority = 0x1704; // int32
    constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x1708; // bool
    constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x170c; // float32
    constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x1710; // Vector
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x171c; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1720; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1724; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x1728; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x172c; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1730; // int32
    constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1749; // bool
}

// C_MultiplayRules (size: 0x40)
namespace C_MultiplayRules {
}

// CPlayer_AutoaimServices (size: 0x48)
namespace CPlayer_AutoaimServices {
}

// C_LightDirectionalEntity (size: 0xe90)
namespace C_LightDirectionalEntity {
}

// C_BaseEntity (size: 0x608)
namespace C_BaseEntity {
    constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
    constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x330; // GameTick_t
    constexpr std::ptrdiff_t m_pGameSceneNode = 0x338; // CGameSceneNode*
    constexpr std::ptrdiff_t m_pRenderComponent = 0x340; // CRenderComponent*
    constexpr std::ptrdiff_t m_pCollision = 0x348; // CCollisionProperty*
    constexpr std::ptrdiff_t m_iMaxHealth = 0x350; // int32
    constexpr std::ptrdiff_t m_iHealth = 0x354; // int32
    constexpr std::ptrdiff_t m_flDamageAccumulator = 0x358; // float32
    constexpr std::ptrdiff_t m_lifeState = 0x35c; // uint8
    constexpr std::ptrdiff_t m_bTakesDamage = 0x35d; // bool
    constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x360; // TakeDamageFlags_t
    constexpr std::ptrdiff_t m_nPlatformType = 0x368; // EntityPlatformTypes_t
    constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x369; // uint8
    constexpr std::ptrdiff_t m_hSceneObjectController = 0x36c; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x370; // int32
    constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x374; // int32
    constexpr std::ptrdiff_t m_flProxyRandomValue = 0x378; // float32
    constexpr std::ptrdiff_t m_iEFlags = 0x37c; // int32
    constexpr std::ptrdiff_t m_nWaterType = 0x380; // uint8
    constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x381; // bool
    constexpr std::ptrdiff_t m_bPredictionEligible = 0x382; // bool
    constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x383; // bool
    constexpr std::ptrdiff_t m_tokLayerMatchID = 0x384; // CUtlStringToken
    constexpr std::ptrdiff_t m_nSubclassID = 0x388; // CUtlStringToken
    constexpr std::ptrdiff_t m_nSimulationTick = 0x398; // int32
    constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x39c; // int32
    constexpr std::ptrdiff_t m_aThinkFunctions = 0x3a0; // CUtlVector< thinkfunc_t >
    constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x3b8; // bool
    constexpr std::ptrdiff_t m_flAnimTime = 0x3bc; // float32
    constexpr std::ptrdiff_t m_flSimulationTime = 0x3c0; // float32
    constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x3c4; // uint8
    constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x3c5; // bool
    constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x3c6; // bool
    constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3c7; // bool
    constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3c8; // int32[2]
    constexpr std::ptrdiff_t m_ListEntry = 0x3d0; // uint16[11]
    constexpr std::ptrdiff_t m_flCreateTime = 0x3e8; // GameTime_t
    constexpr std::ptrdiff_t m_flSpeed = 0x3ec; // float32
    constexpr std::ptrdiff_t m_EntClientFlags = 0x3f0; // uint16
    constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3f2; // bool
    constexpr std::ptrdiff_t m_iTeamNum = 0x3f3; // uint8
    constexpr std::ptrdiff_t m_spawnflags = 0x3f4; // uint32
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x3f8; // GameTick_t
    constexpr std::ptrdiff_t m_fFlags = 0x400; // uint32
    constexpr std::ptrdiff_t m_vecAbsVelocity = 0x404; // Vector
    constexpr std::ptrdiff_t m_vecServerVelocity = 0x410; // CNetworkVelocityVector
    constexpr std::ptrdiff_t m_vecVelocity = 0x438; // CNetworkVelocityVector
    constexpr std::ptrdiff_t m_vecBaseVelocity = 0x518; // Vector
    constexpr std::ptrdiff_t m_hEffectEntity = 0x524; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_hOwnerEntity = 0x528; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_MoveCollide = 0x52c; // MoveCollide_t
    constexpr std::ptrdiff_t m_MoveType = 0x52d; // MoveType_t
    constexpr std::ptrdiff_t m_nActualMoveType = 0x52e; // MoveType_t
    constexpr std::ptrdiff_t m_flWaterLevel = 0x530; // float32
    constexpr std::ptrdiff_t m_fEffects = 0x534; // uint32
    constexpr std::ptrdiff_t m_hGroundEntity = 0x538; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x53c; // int32
    constexpr std::ptrdiff_t m_flFriction = 0x540; // float32
    constexpr std::ptrdiff_t m_flElasticity = 0x544; // float32
    constexpr std::ptrdiff_t m_flGravityScale = 0x548; // float32
    constexpr std::ptrdiff_t m_flTimeScale = 0x54c; // float32
    constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x550; // bool
    constexpr std::ptrdiff_t m_bGravityDisabled = 0x551; // bool
    constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x554; // GameTime_t
    constexpr std::ptrdiff_t m_hThink = 0x558; // uint16
    constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x568; // uint8
    constexpr std::ptrdiff_t m_flActualGravityScale = 0x56c; // float32
    constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x570; // bool
    constexpr std::ptrdiff_t m_bPredictable = 0x571; // bool
    constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x572; // bool
    constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x574; // int32
    constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x578; // int32
    constexpr std::ptrdiff_t m_hOldMoveParent = 0x57c; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_Particles = 0x580; // CParticleProperty
    constexpr std::ptrdiff_t m_vecAngVelocity = 0x5b0; // QAngle
    constexpr std::ptrdiff_t m_DataChangeEventRef = 0x5bc; // int32
    constexpr std::ptrdiff_t m_dependencies = 0x5c0; // CUtlVector< CEntityHandle >
    constexpr std::ptrdiff_t m_nCreationTick = 0x5d8; // int32
    constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x5e9; // bool
    constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x5ea; // bool
    constexpr std::ptrdiff_t m_sUniqueHammerID = 0x5f8; // CUtlString
    constexpr std::ptrdiff_t m_nBloodType = 0x600; // BloodType
}

// ActiveModelConfig_t (size: 0x70)
namespace ActiveModelConfig_t {
    constexpr std::ptrdiff_t m_Handle = 0x30; // ModelConfigHandle_t
    constexpr std::ptrdiff_t m_Name = 0x38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AssociatedEntities = 0x40; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x58; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
}

// C_WeaponSSG08 (size: 0x1f70)
namespace C_WeaponSSG08 {
}

// CPulseCell_Value_Curve (size: 0x88)
namespace CPulseCell_Value_Curve {
    constexpr std::ptrdiff_t m_Curve = 0x48; // CPiecewiseCurve
}

// C_BasePlayerPawn (size: 0x15b0)
namespace C_BasePlayerPawn {
    constexpr std::ptrdiff_t m_pWeaponServices = 0x13d8; // CPlayer_WeaponServices*
    constexpr std::ptrdiff_t m_pItemServices = 0x13e0; // CPlayer_ItemServices*
    constexpr std::ptrdiff_t m_pAutoaimServices = 0x13e8; // CPlayer_AutoaimServices*
    constexpr std::ptrdiff_t m_pObserverServices = 0x13f0; // CPlayer_ObserverServices*
    constexpr std::ptrdiff_t m_pWaterServices = 0x13f8; // CPlayer_WaterServices*
    constexpr std::ptrdiff_t m_pUseServices = 0x1400; // CPlayer_UseServices*
    constexpr std::ptrdiff_t m_pFlashlightServices = 0x1408; // CPlayer_FlashlightServices*
    constexpr std::ptrdiff_t m_pCameraServices = 0x1410; // CPlayer_CameraServices*
    constexpr std::ptrdiff_t m_pMovementServices = 0x1418; // CPlayer_MovementServices*
    constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x1428; // C_UtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t >
    constexpr std::ptrdiff_t v_angle = 0x1490; // QAngle
    constexpr std::ptrdiff_t v_anglePrevious = 0x149c; // QAngle
    constexpr std::ptrdiff_t m_iHideHUD = 0x14a8; // uint32
    constexpr std::ptrdiff_t m_skybox3d = 0x14b0; // sky3dparams_t
    constexpr std::ptrdiff_t m_flDeathTime = 0x1540; // GameTime_t
    constexpr std::ptrdiff_t m_vecPredictionError = 0x1544; // Vector
    constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x1550; // GameTime_t
    constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x1570; // Vector
    constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x157c; // GameTime_t
    constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x1580; // float32
    constexpr std::ptrdiff_t m_flMouseSensitivity = 0x1584; // float32
    constexpr std::ptrdiff_t m_vOldOrigin = 0x1588; // Vector
    constexpr std::ptrdiff_t m_flOldSimulationTime = 0x1594; // float32
    constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x1598; // int32
    constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x159c; // int32
    constexpr std::ptrdiff_t m_hController = 0x15a0; // CHandle< CBasePlayerController >
    constexpr std::ptrdiff_t m_hDefaultController = 0x15a4; // CHandle< CBasePlayerController >
    constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x15a8; // bool
}

// C_Chicken (size: 0x18a0)
namespace C_Chicken {
    constexpr std::ptrdiff_t m_hHolidayHatAddon = 0x13a8; // CHandle< CBaseAnimGraph >
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x13ac; // bool
    constexpr std::ptrdiff_t m_leader = 0x13b0; // CHandle< C_CSPlayerPawn >
    constexpr std::ptrdiff_t m_AttributeManager = 0x13b8; // C_AttributeContainer
    constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1888; // bool
    constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x188c; // ParticleIndex_t
    constexpr std::ptrdiff_t m_bIsPreviewModel = 0x1890; // bool
}

// C_SoundOpvarSetAABBEntity (size: 0x628)
namespace C_SoundOpvarSetAABBEntity {
}

// C_WeaponBizon (size: 0x1f70)
namespace C_WeaponBizon {
}

// C_StattrakModule (size: 0x1178)
namespace C_StattrakModule {
    constexpr std::ptrdiff_t m_bKnife = 0x1170; // bool
}

// CCSObserver_CameraServices (size: 0x2a8)
namespace CCSObserver_CameraServices {
}

// CTakeDamageInfoAPI (size: 0x8)
namespace CTakeDamageInfoAPI {
}

// CEnvSoundscapeProxy (size: 0x6a0)
namespace CEnvSoundscapeProxy {
    constexpr std::ptrdiff_t m_MainSoundscapeName = 0x698; // CUtlSymbolLarge
}

// C_SoundEventEntity (size: 0x6b8)
namespace C_SoundEventEntity {
    constexpr std::ptrdiff_t m_bStartOnSpawn = 0x608; // bool
    constexpr std::ptrdiff_t m_bToLocalPlayer = 0x609; // bool
    constexpr std::ptrdiff_t m_bStopOnNew = 0x60a; // bool
    constexpr std::ptrdiff_t m_bSaveRestore = 0x60b; // bool
    constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x60c; // bool
    constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x610; // float32
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x618; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszAttachmentName = 0x620; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_onGUIDChanged = 0x628; // CEntityOutputTemplate< uint64, uint64 >
    constexpr std::ptrdiff_t m_onSoundFinished = 0x648; // CEntityIOOutput
    constexpr std::ptrdiff_t m_flClientCullRadius = 0x660; // float32
    constexpr std::ptrdiff_t m_iszSoundName = 0x690; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSource = 0x6ac; // CEntityHandle
    constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x6b0; // int32
    constexpr std::ptrdiff_t m_bClientSideOnly = 0x0; // bitfield:1
}

// CPulseCell_Inflow_EventHandler (size: 0x90)
namespace CPulseCell_Inflow_EventHandler {
    constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
}

// C_LightOrthoEntity (size: 0xe90)
namespace C_LightOrthoEntity {
}

// CPulseCell_BaseFlow (size: 0x48)
namespace CPulseCell_BaseFlow {
}

// CBombTarget (size: 0xf60)
namespace CBombTarget {
    constexpr std::ptrdiff_t m_bBombPlantedHere = 0xf58; // bool
}

// C_Knife (size: 0x1f50)
namespace C_Knife {
    constexpr std::ptrdiff_t m_bFirstAttack = 0x1f40; // bool
}

// C_CSGO_TerroristWingmanIntroCamera (size: 0x698)
namespace C_CSGO_TerroristWingmanIntroCamera {
}

// CSkeletonInstance (size: 0x4d0)
namespace CSkeletonInstance {
    constexpr std::ptrdiff_t m_modelState = 0x160; // CModelState
    constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x430; // bool
    constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x431; // bool
    constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x432; // bool
    constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_materialGroup = 0x434; // CUtlStringToken
    constexpr std::ptrdiff_t m_nHitboxSet = 0x438; // uint8
}

// CEntityComponent (size: 0x8)
namespace CEntityComponent {
}

// C_ItemDogtags (size: 0x19c8)
namespace C_ItemDogtags {
    constexpr std::ptrdiff_t m_OwningPlayer = 0x19c0; // CHandle< C_CSPlayerPawn >
    constexpr std::ptrdiff_t m_KillingPlayer = 0x19c4; // CHandle< C_CSPlayerPawn >
}

// C_LateUpdatedAnimating (size: 0x1200)
namespace C_LateUpdatedAnimating {
}

// CPulseCell_Outflow_CycleShuffled::InstanceState_t (size: 0x28)
namespace CPulseCell_Outflow_CycleShuffled_InstanceState_t {
    constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable< uint8, 8 >
    constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
}

// CPulseCell_BaseLerp::CursorState_t (size: 0x8)
namespace CPulseCell_BaseLerp_CursorState_t {
    constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
    constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
}

// CPulseAnimFuncs (size: 0x8)
namespace CPulseAnimFuncs {
}

// C_BaseClientUIEntity (size: 0xeb8)
namespace C_BaseClientUIEntity {
    constexpr std::ptrdiff_t m_bEnabled = 0xe90; // bool
    constexpr std::ptrdiff_t m_DialogXMLName = 0xe98; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelClassName = 0xea0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelID = 0xea8; // CUtlSymbolLarge
}

// CPulseCell_WaitForCursorsWithTagBase::CursorState_t (size: 0x30)
namespace CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
}

// CPulseArraylib (size: 0x1)
namespace CPulseArraylib {
}

// C_WeaponUSPSilencer (size: 0x1f70)
namespace C_WeaponUSPSilencer {
}

// C_MolotovProjectile (size: 0x1460)
namespace C_MolotovProjectile {
    constexpr std::ptrdiff_t m_bIsIncGrenade = 0x1438; // bool
}

// C_TriggerLerpObject (size: 0xf58)
namespace C_TriggerLerpObject {
}

// CPointTemplateAPI (size: 0x8)
namespace CPointTemplateAPI {
}

// C_WeaponRevolver (size: 0x1f70)
namespace C_WeaponRevolver {
}

// C_WeaponElite (size: 0x1f70)
namespace C_WeaponElite {
}

// C_DynamicPropAlias_cable_dynamic (size: 0x13a0)
namespace C_DynamicPropAlias_cable_dynamic {
}

// CBaseProp (size: 0x11a0)
namespace CBaseProp {
    constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x1168; // bool
    constexpr std::ptrdiff_t m_iShapeType = 0x116c; // int32
    constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x1170; // bool
    constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x1180; // CTransform
}

// CInfoOffscreenPanoramaTexture (size: 0x810)
namespace CInfoOffscreenPanoramaTexture {
    constexpr std::ptrdiff_t m_bDisabled = 0x608; // bool
    constexpr std::ptrdiff_t m_nResolutionX = 0x60c; // int32
    constexpr std::ptrdiff_t m_nResolutionY = 0x610; // int32
    constexpr std::ptrdiff_t m_szPanelType = 0x618; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szLayoutFileName = 0x620; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_RenderAttrName = 0x628; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetEntities = 0x630; // C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > >
    constexpr std::ptrdiff_t m_nTargetChangeCount = 0x648; // int32
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x650; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_szTargetsName = 0x668; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x670; // CUtlVector< CHandle< C_BaseModelEntity > >
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x7e8; // bool
}

// CCSWeaponBaseVData (size: 0x7c0)
namespace CCSWeaponBaseVData {
    constexpr std::ptrdiff_t m_WeaponType = 0x440; // CSWeaponType
    constexpr std::ptrdiff_t m_WeaponCategory = 0x444; // CSWeaponCategory
    constexpr std::ptrdiff_t m_szAnimSkeleton = 0x448; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmSkeleton 
    constexpr std::ptrdiff_t m_vecMuzzlePos0 = 0x528; // Vector
    constexpr std::ptrdiff_t m_vecMuzzlePos1 = 0x534; // Vector
    constexpr std::ptrdiff_t m_szTracerParticle = 0x540; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys
    constexpr std::ptrdiff_t m_GearSlot = 0x620; // gear_slot_t
    constexpr std::ptrdiff_t m_GearSlotPosition = 0x624; // int32
    constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0x628; // loadout_slot_t
    constexpr std::ptrdiff_t m_nPrice = 0x62c; // int32
    constexpr std::ptrdiff_t m_nKillAward = 0x630; // int32
    constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0x634; // int32
    constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0x638; // int32
    constexpr std::ptrdiff_t m_bMeleeWeapon = 0x63c; // bool
    constexpr std::ptrdiff_t m_bHasBurstMode = 0x63d; // bool
    constexpr std::ptrdiff_t m_bIsRevolver = 0x63e; // bool
    constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0x63f; // bool
    constexpr std::ptrdiff_t m_szName = 0x640; // CGlobalSymbol
    constexpr std::ptrdiff_t m_eSilencerType = 0x648; // CSWeaponSilencerType
    constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0x64c; // int32
    constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0x650; // int32
    constexpr std::ptrdiff_t m_bIsFullAuto = 0x654; // bool
    constexpr std::ptrdiff_t m_nNumBullets = 0x658; // int32
    constexpr std::ptrdiff_t m_bReloadsSingleShells = 0x65c; // bool
    constexpr std::ptrdiff_t m_flCycleTime = 0x660; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flMaxSpeed = 0x668; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flSpread = 0x670; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0x678; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyStand = 0x680; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyJump = 0x688; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLand = 0x690; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyLadder = 0x698; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyFire = 0x6a0; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flInaccuracyMove = 0x6a8; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngle = 0x6b0; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0x6b8; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitude = 0x6c0; // CFiringModeFloat
    constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0x6c8; // CFiringModeFloat
    constexpr std::ptrdiff_t m_nTracerFrequency = 0x6d0; // CFiringModeInt
    constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0x6d8; // float32
    constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0x6dc; // float32
    constexpr std::ptrdiff_t m_flInaccuracyReload = 0x6e0; // float32
    constexpr std::ptrdiff_t m_flDeployDuration = 0x6e4; // float32
    constexpr std::ptrdiff_t m_flDisallowAttackAfterReloadStartDuration = 0x6e8; // float32
    constexpr std::ptrdiff_t m_nBurstShotCount = 0x6ec; // int32
    constexpr std::ptrdiff_t m_bAllowBurstHolster = 0x6f0; // bool
    constexpr std::ptrdiff_t m_nRecoilSeed = 0x6f4; // int32
    constexpr std::ptrdiff_t m_nSpreadSeed = 0x6f8; // int32
    constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0x6fc; // float32
    constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0x700; // float32
    constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0x704; // float32
    constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0x708; // CUtlString
    constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0x710; // bool
    constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0x711; // bool
    constexpr std::ptrdiff_t m_nZoomLevels = 0x714; // int32
    constexpr std::ptrdiff_t m_nZoomFOV1 = 0x718; // int32
    constexpr std::ptrdiff_t m_nZoomFOV2 = 0x71c; // int32
    constexpr std::ptrdiff_t m_flZoomTime0 = 0x720; // float32
    constexpr std::ptrdiff_t m_flZoomTime1 = 0x724; // float32
    constexpr std::ptrdiff_t m_flZoomTime2 = 0x728; // float32
    constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0x72c; // float32
    constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0x730; // float32
    constexpr std::ptrdiff_t m_flIronSightFOV = 0x734; // float32
    constexpr std::ptrdiff_t m_flIronSightPivotForward = 0x738; // float32
    constexpr std::ptrdiff_t m_flIronSightLooseness = 0x73c; // float32
    constexpr std::ptrdiff_t m_nDamage = 0x740; // int32
    constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0x744; // float32
    constexpr std::ptrdiff_t m_flArmorRatio = 0x748; // float32
    constexpr std::ptrdiff_t m_flPenetration = 0x74c; // float32
    constexpr std::ptrdiff_t m_flRange = 0x750; // float32
    constexpr std::ptrdiff_t m_flRangeModifier = 0x754; // float32
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0x758; // float32
    constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0x75c; // float32
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0x760; // float32
    constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0x764; // float32
    constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0x768; // float32
    constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0x76c; // float32
    constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0x770; // int32
    constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0x774; // int32
    constexpr std::ptrdiff_t m_flThrowVelocity = 0x778; // float32
    constexpr std::ptrdiff_t m_vSmokeColor = 0x77c; // Vector
    constexpr std::ptrdiff_t m_szAnimClass = 0x788; // CGlobalSymbol
}

// CAttributeManager (size: 0x50)
namespace CAttributeManager {
    constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector< CHandle< C_BaseEntity > >
    constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
    constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
    constexpr std::ptrdiff_t m_ProviderType = 0x2c; // attributeprovidertypes_t
    constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
}

// SignatureOutflow_Continue (size: 0x48)
namespace SignatureOutflow_Continue {
}

// CInfoTarget (size: 0x608)
namespace CInfoTarget {
}

// CPlayer_CameraServices (size: 0x290)
namespace CPlayer_CameraServices {
    constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x48; // QAngle
    constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x54; // GameTick_t
    constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x58; // float32
    constexpr std::ptrdiff_t m_PlayerFog = 0x60; // C_fogplayerparams_t
    constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0xa0; // CHandle< C_ColorCorrection >
    constexpr std::ptrdiff_t m_hViewEntity = 0xa4; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_hTonemapController = 0xa8; // CHandle< C_TonemapController2 >
    constexpr std::ptrdiff_t m_audio = 0xb0; // audioparams_t
    constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x128; // C_NetworkUtlVectorBase< CHandle< C_PostProcessingVolume > >
    constexpr std::ptrdiff_t m_flOldPlayerZ = 0x140; // float32
    constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x144; // float32
    constexpr std::ptrdiff_t m_CurrentFog = 0x148; // fogparams_t
    constexpr std::ptrdiff_t m_hOldFogController = 0x1b0; // CHandle< C_FogController >
    constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1b4; // bool[5]
    constexpr std::ptrdiff_t m_OverrideFogColor = 0x1b9; // Color[5]
    constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1cd; // bool[5]
    constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1d4; // float32[5]
    constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1e8; // float32[5]
    constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x1fc; // CHandle< C_PostProcessingVolume >
    constexpr std::ptrdiff_t m_angDemoViewAngles = 0x200; // QAngle
}

// CPulseCell_Timeline (size: 0xf8)
namespace CPulseCell_Timeline {
    constexpr std::ptrdiff_t m_TimelineEvents = 0x48; // CUtlVector< CPulseCell_Timeline::TimelineEvent_t >
    constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
    constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0xb0; // CPulse_ResumePoint
}

// CPulseCell_Inflow_EntOutputHandler (size: 0xb8)
namespace CPulseCell_Inflow_EntOutputHandler {
    constexpr std::ptrdiff_t m_SourceEntity = 0x80; // PulseSymbol_t
    constexpr std::ptrdiff_t m_SourceOutput = 0x90; // PulseSymbol_t
    constexpr std::ptrdiff_t m_ExpectedParamType = 0xa0; // CPulseValueFullType
}

// C_BaseCSGrenade (size: 0x2000)
namespace C_BaseCSGrenade {
    constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1f40; // bool
    constexpr std::ptrdiff_t m_bRedraw = 0x1f41; // bool
    constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1f42; // bool
    constexpr std::ptrdiff_t m_bPinPulled = 0x1f43; // bool
    constexpr std::ptrdiff_t m_bJumpThrow = 0x1f44; // bool
    constexpr std::ptrdiff_t m_bThrowAnimating = 0x1f45; // bool
    constexpr std::ptrdiff_t m_fThrowTime = 0x1f48; // GameTime_t
    constexpr std::ptrdiff_t m_flThrowStrength = 0x1f50; // float32
    constexpr std::ptrdiff_t m_fDropTime = 0x1fc8; // GameTime_t
    constexpr std::ptrdiff_t m_fPinPullTime = 0x1fcc; // GameTime_t
    constexpr std::ptrdiff_t m_bJustPulledPin = 0x1fd0; // bool
    constexpr std::ptrdiff_t m_nNextHoldTick = 0x1fd4; // GameTick_t
    constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1fd8; // float32
    constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1fdc; // CHandle< C_CSWeaponBase >
}

// CFilterAttributeInt (size: 0x648)
namespace CFilterAttributeInt {
    constexpr std::ptrdiff_t m_sAttributeName = 0x640; // CUtlSymbolLarge
}

// CPointTemplate (size: 0x670)
namespace CPointTemplate {
    constexpr std::ptrdiff_t m_iszWorldName = 0x608; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x610; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityFilterName = 0x618; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x620; // float32
    constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x624; // bool
    constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x628; // PointTemplateClientOnlyEntityBehavior_t
    constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x62c; // PointTemplateOwnerSpawnGroupType_t
    constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x630; // CUtlVector< uint32 >
    constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x648; // CUtlVector< CEntityHandle >
    constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x660; // HSCRIPT
    constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x668; // HSCRIPT
}

// CPlayer_FlashlightServices (size: 0x48)
namespace CPlayer_FlashlightServices {
}

// CCSPlayerController (size: 0x958)
namespace CCSPlayerController {
    constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x808; // CCSPlayerController_InGameMoneyServices*
    constexpr std::ptrdiff_t m_pInventoryServices = 0x810; // CCSPlayerController_InventoryServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x818; // CCSPlayerController_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pDamageServices = 0x820; // CCSPlayerController_DamageServices*
    constexpr std::ptrdiff_t m_iPing = 0x828; // uint32
    constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x82c; // bool
    constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x830; // uint32
    constexpr std::ptrdiff_t m_szCrosshairCodes = 0x838; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iPendingTeamNum = 0x840; // uint8
    constexpr std::ptrdiff_t m_flForceTeamTime = 0x844; // GameTime_t
    constexpr std::ptrdiff_t m_iCompTeammateColor = 0x848; // int32
    constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x84c; // bool
    constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x850; // GameTime_t
    constexpr std::ptrdiff_t m_szClan = 0x858; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x860; // CUtlString
    constexpr std::ptrdiff_t m_iCoachingTeam = 0x868; // int32
    constexpr std::ptrdiff_t m_nPlayerDominated = 0x870; // uint64
    constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x878; // uint64
    constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x880; // int32
    constexpr std::ptrdiff_t m_iCompetitiveWins = 0x884; // int32
    constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x888; // int8
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x88c; // int32
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x890; // int32
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x894; // int32
    constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x898; // int32
    constexpr std::ptrdiff_t m_unActiveQuestId = 0x89c; // uint16
    constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x8a0; // uint32
    constexpr std::ptrdiff_t m_nQuestProgressReason = 0x8a4; // QuestProgress::Reason
    constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x8a8; // uint32
    constexpr std::ptrdiff_t m_iDraftIndex = 0x8d8; // int32
    constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x8dc; // uint32
    constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x8e0; // uint32
    constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x8e4; // uint32
    constexpr std::ptrdiff_t m_bCannotBeKicked = 0x8e8; // bool
    constexpr std::ptrdiff_t m_bEverFullyConnected = 0x8e9; // bool
    constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x8ea; // bool
    constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x8eb; // bool
    constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x8ec; // bool
    constexpr std::ptrdiff_t m_bScoreReported = 0x8ed; // bool
    constexpr std::ptrdiff_t m_nDisconnectionTick = 0x8f0; // int32
    constexpr std::ptrdiff_t m_bControllingBot = 0x900; // bool
    constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x901; // bool
    constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x902; // bool
    constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x904; // int32
    constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x908; // bool
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x90c; // CHandle< C_CSPlayerPawn >
    constexpr std::ptrdiff_t m_hObserverPawn = 0x910; // CHandle< C_CSObserverPawn >
    constexpr std::ptrdiff_t m_bPawnIsAlive = 0x914; // bool
    constexpr std::ptrdiff_t m_iPawnHealth = 0x918; // uint32
    constexpr std::ptrdiff_t m_iPawnArmor = 0x91c; // int32
    constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x920; // bool
    constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x921; // bool
    constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x922; // uint16
    constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x924; // int32
    constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x928; // int32
    constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x92c; // int32
    constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x930; // CHandle< CCSPlayerController >
    constexpr std::ptrdiff_t m_iScore = 0x934; // int32
    constexpr std::ptrdiff_t m_recentKillQueue = 0x938; // uint8[8]
    constexpr std::ptrdiff_t m_nFirstKill = 0x940; // uint8
    constexpr std::ptrdiff_t m_nKillCount = 0x941; // uint8
    constexpr std::ptrdiff_t m_bMvpNoMusic = 0x942; // bool
    constexpr std::ptrdiff_t m_eMvpReason = 0x944; // int32
    constexpr std::ptrdiff_t m_iMusicKitID = 0x948; // int32
    constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x94c; // int32
    constexpr std::ptrdiff_t m_iMVPs = 0x950; // int32
    constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x954; // bool
    constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0x955; // bool
}

// C_CSGO_TeamIntroCounterTerroristPosition (size: 0x13a8)
namespace C_CSGO_TeamIntroCounterTerroristPosition {
}

// C_CSGO_PreviewModel (size: 0x1860)
namespace C_CSGO_PreviewModel {
    constexpr std::ptrdiff_t m_defaultAnim = 0x1350; // CUtlString
    constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1358; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flInitialModelScale = 0x135c; // float32
    constexpr std::ptrdiff_t m_sInitialWeaponState = 0x1360; // CUtlString
}

// C_CSGO_TeamSelectCharacterPosition (size: 0x13a8)
namespace C_CSGO_TeamSelectCharacterPosition {
}

// CPulseCell_Outflow_CycleOrdered::InstanceState_t (size: 0x4)
namespace CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
}

// C_SoundEventAABBEntity (size: 0x6d0)
namespace C_SoundEventAABBEntity {
    constexpr std::ptrdiff_t m_vMins = 0x6b8; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x6c4; // Vector
}

// CCSPlayer_MovementServices (size: 0xe58)
namespace CCSPlayer_MovementServices {
    constexpr std::ptrdiff_t m_vecLadderNormal = 0x270; // Vector
    constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x27c; // int32
    constexpr std::ptrdiff_t m_bDucked = 0x280; // bool
    constexpr std::ptrdiff_t m_flDuckAmount = 0x284; // float32
    constexpr std::ptrdiff_t m_flDuckSpeed = 0x288; // float32
    constexpr std::ptrdiff_t m_bDuckOverride = 0x28c; // bool
    constexpr std::ptrdiff_t m_bDesiresDuck = 0x28d; // bool
    constexpr std::ptrdiff_t m_bDucking = 0x28e; // bool
    constexpr std::ptrdiff_t m_flDuckOffset = 0x290; // float32
    constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x294; // uint32
    constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x298; // uint32
    constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x29c; // uint32
    constexpr std::ptrdiff_t m_flLastDuckTime = 0x2a0; // float32
    constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x2b0; // Vector2D
    constexpr std::ptrdiff_t m_duckUntilOnGround = 0x2b8; // bool
    constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x2b9; // bool
    constexpr std::ptrdiff_t m_bInStuckTest = 0x2ba; // bool
    constexpr std::ptrdiff_t m_nTraceCount = 0x4c8; // int32
    constexpr std::ptrdiff_t m_StuckLast = 0x4cc; // int32
    constexpr std::ptrdiff_t m_bSpeedCropped = 0x4d0; // bool
    constexpr std::ptrdiff_t m_nOldWaterLevel = 0x4d4; // int32
    constexpr std::ptrdiff_t m_flWaterEntryTime = 0x4d8; // float32
    constexpr std::ptrdiff_t m_vecForward = 0x4dc; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x4e8; // Vector
    constexpr std::ptrdiff_t m_vecUp = 0x4f4; // Vector
    constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x500; // int32
    constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x504; // GameTime_t
    constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x508; // uint64
    constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x510; // float32
    constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x514; // float32
    constexpr std::ptrdiff_t m_flStamina = 0x518; // float32
    constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x51c; // float32
    constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x520; // float32
    constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x524; // float32
    constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x528; // float32
    constexpr std::ptrdiff_t m_flVelMulAtJumpStart = 0x52c; // float32
    constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x530; // float32
    constexpr std::ptrdiff_t m_LegacyJump = 0x538; // CCSPlayerLegacyJump
    constexpr std::ptrdiff_t m_ModernJump = 0x550; // CCSPlayerModernJump
    constexpr std::ptrdiff_t m_nLastJumpTick = 0x588; // GameTick_t
    constexpr std::ptrdiff_t m_flLastJumpFrac = 0x58c; // float32
    constexpr std::ptrdiff_t m_flLastJumpVelocityZ = 0x590; // float32
    constexpr std::ptrdiff_t m_bJumpApexPending = 0x594; // bool
    constexpr std::ptrdiff_t m_flTicksSinceLastSurfingDetected = 0x598; // float32
    constexpr std::ptrdiff_t m_bWasSurfing = 0x59c; // bool
    constexpr std::ptrdiff_t m_vecInputRotated = 0x62c; // Vector
}

// SellbackPurchaseEntry_t (size: 0x48)
namespace SellbackPurchaseEntry_t {
    constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16
    constexpr std::ptrdiff_t m_nCost = 0x34; // int32
    constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x3c; // bool
    constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
}

// C_TintController (size: 0x620)
namespace C_TintController {
}

// C_WeaponBaseItem (size: 0x1f50)
namespace C_WeaponBaseItem {
    constexpr std::ptrdiff_t m_bSequenceInProgress = 0x1f40; // bool
    constexpr std::ptrdiff_t m_bRedraw = 0x1f41; // bool
}

// CWaterSplasher (size: 0xe88)
namespace CWaterSplasher {
}

// C_FuncBrush (size: 0xe88)
namespace C_FuncBrush {
}

// PhysicsRagdollPose_t (size: 0x48)
namespace PhysicsRagdollPose_t {
    constexpr std::ptrdiff_t m_Transforms = 0x8; // C_NetworkUtlVectorBase< CTransform >
    constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24; // bool
}

// CPropDataComponent (size: 0x40)
namespace CPropDataComponent {
    constexpr std::ptrdiff_t m_flDmgModBullet = 0x10; // float32
    constexpr std::ptrdiff_t m_flDmgModClub = 0x14; // float32
    constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18; // float32
    constexpr std::ptrdiff_t m_flDmgModFire = 0x1c; // float32
    constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszBasePropData = 0x28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nInteractions = 0x30; // int32
    constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34; // bool
    constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38; // int32
    constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3c; // int32
}

// CPulseCell_LimitCount::InstanceState_t (size: 0x4)
namespace CPulseCell_LimitCount_InstanceState_t {
    constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
}

// C_WeaponCZ75a (size: 0x1f80)
namespace C_WeaponCZ75a {
    constexpr std::ptrdiff_t m_bMagazineRemoved = 0x1f70; // bool
}

// C_DynamicLight (size: 0xeb0)
namespace C_DynamicLight {
    constexpr std::ptrdiff_t m_Flags = 0xe88; // uint8
    constexpr std::ptrdiff_t m_LightStyle = 0xe89; // uint8
    constexpr std::ptrdiff_t m_Radius = 0xe8c; // float32
    constexpr std::ptrdiff_t m_Exponent = 0xe90; // int32
    constexpr std::ptrdiff_t m_InnerAngle = 0xe94; // float32
    constexpr std::ptrdiff_t m_OuterAngle = 0xe98; // float32
    constexpr std::ptrdiff_t m_SpotRadius = 0xe9c; // float32
}

// EngineCountdownTimer (size: 0x18)
namespace EngineCountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8; // float32
    constexpr std::ptrdiff_t m_timestamp = 0xc; // float32
    constexpr std::ptrdiff_t m_timescale = 0x10; // float32
}

// C_SoundEventSphereEntity (size: 0x6c0)
namespace C_SoundEventSphereEntity {
    constexpr std::ptrdiff_t m_flRadius = 0x6b8; // float32
}

// CCSPlayerController_DamageServices (size: 0xb0)
namespace CCSPlayerController_DamageServices {
    constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
    constexpr std::ptrdiff_t m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar< CDamageRecord >
}

// C_CSGO_TeamPreviewModel (size: 0x3fa0)
namespace C_CSGO_TeamPreviewModel {
}

// C_TonemapController2Alias_env_tonemap_controller2 (size: 0x620)
namespace C_TonemapController2Alias_env_tonemap_controller2 {
}

// C_Inferno (size: 0x8490)
namespace C_Inferno {
    constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0xec8; // ParticleIndex_t
    constexpr std::ptrdiff_t m_hInfernoPointsSnapshot = 0xed0; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
    constexpr std::ptrdiff_t m_hInfernoFillerPointsSnapshot = 0xed8; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
    constexpr std::ptrdiff_t m_hInfernoOutlinePointsSnapshot = 0xee0; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
    constexpr std::ptrdiff_t m_hInfernoClimbingOutlinePointsSnapshot = 0xee8; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
    constexpr std::ptrdiff_t m_hInfernoDecalsSnapshot = 0xef0; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
    constexpr std::ptrdiff_t m_firePositions = 0xef8; // Vector[64]
    constexpr std::ptrdiff_t m_fireParentPositions = 0x11f8; // Vector[64]
    constexpr std::ptrdiff_t m_bFireIsBurning = 0x14f8; // bool[64]
    constexpr std::ptrdiff_t m_BurnNormal = 0x1538; // Vector[64]
    constexpr std::ptrdiff_t m_fireCount = 0x1838; // int32
    constexpr std::ptrdiff_t m_nInfernoType = 0x183c; // int32
    constexpr std::ptrdiff_t m_nFireLifetime = 0x1840; // float32
    constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1844; // bool
    constexpr std::ptrdiff_t m_lastFireCount = 0x1848; // int32
    constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x184c; // int32
    constexpr std::ptrdiff_t m_drawableCount = 0x8450; // int32
    constexpr std::ptrdiff_t m_blosCheck = 0x8454; // bool
    constexpr std::ptrdiff_t m_nlosperiod = 0x8458; // int32
    constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x845c; // float32
    constexpr std::ptrdiff_t m_maxFireHeight = 0x8460; // float32
    constexpr std::ptrdiff_t m_minBounds = 0x8464; // Vector
    constexpr std::ptrdiff_t m_maxBounds = 0x8470; // Vector
    constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x847c; // float32
}

// CFilterLOS (size: 0x640)
namespace CFilterLOS {
}

// CPointOrient (size: 0x628)
namespace CPointOrient {
    constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x608; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTarget = 0x610; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_bActive = 0x614; // bool
    constexpr std::ptrdiff_t m_nGoalDirection = 0x618; // PointOrientGoalDirectionType_t
    constexpr std::ptrdiff_t m_nConstraint = 0x61c; // PointOrientConstraint_t
    constexpr std::ptrdiff_t m_flMaxTurnRate = 0x620; // float32
    constexpr std::ptrdiff_t m_flLastGameTime = 0x624; // GameTime_t
}

// C_GlobalLight (size: 0xb00)
namespace C_GlobalLight {
    constexpr std::ptrdiff_t m_WindClothForceHandle = 0xad0; // uint16
}

// C_EnvWindClientside (size: 0x700)
namespace C_EnvWindClientside {
    constexpr std::ptrdiff_t m_EnvWindShared = 0x608; // C_EnvWindShared
}

// sky3dparams_t (size: 0x90)
namespace sky3dparams_t {
    constexpr std::ptrdiff_t scale = 0x8; // int16
    constexpr std::ptrdiff_t origin = 0xc; // Vector
    constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18; // bool
    constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1c; // float32
    constexpr std::ptrdiff_t fog = 0x20; // fogparams_t
    constexpr std::ptrdiff_t m_nWorldGroupID = 0x88; // WorldGroupId_t
}

// C_FlashbangProjectile (size: 0x1438)
namespace C_FlashbangProjectile {
}

// C_SoundEventConeEntity (size: 0x6d0)
namespace C_SoundEventConeEntity {
    constexpr std::ptrdiff_t m_flEmitterAngle = 0x6b8; // float32
    constexpr std::ptrdiff_t m_flSweetSpotAngle = 0x6bc; // float32
    constexpr std::ptrdiff_t m_flAttenMin = 0x6c0; // float32
    constexpr std::ptrdiff_t m_flAttenMax = 0x6c4; // float32
    constexpr std::ptrdiff_t m_iszParameterName = 0x6c8; // CUtlSymbolLarge
}

// CDestructiblePartsComponent (size: 0x70)
namespace CDestructiblePartsComponent {
    constexpr std::ptrdiff_t _m_pChainEntity = 0x0; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle< C_BaseModelEntity >
}

// C_WeaponP90 (size: 0x1f70)
namespace C_WeaponP90 {
}

// C_EnvWind (size: 0x700)
namespace C_EnvWind {
    constexpr std::ptrdiff_t m_EnvWindShared = 0x608; // C_EnvWindShared
}

// C_CSGO_TerroristTeamIntroCamera (size: 0x698)
namespace C_CSGO_TerroristTeamIntroCamera {
}

// CPulseCell_Step_DebugLog (size: 0x48)
namespace CPulseCell_Step_DebugLog {
}

// CCSPlayerController_ActionTrackingServices (size: 0x138)
namespace CCSPlayerController_ActionTrackingServices {
    constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
    constexpr std::ptrdiff_t m_matchStats = 0xa8; // CSMatchStats_t
    constexpr std::ptrdiff_t m_iNumRoundKills = 0x128; // int32
    constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x12c; // int32
    constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x130; // float32
}

// CBodyComponentBaseAnimGraph (size: 0x2090)
namespace CBodyComponentBaseAnimGraph {
    constexpr std::ptrdiff_t m_animationController = 0x550; // CBaseAnimGraphController
}

// C_CSGO_PreviewModelAlias_csgo_item_previewmodel (size: 0x1860)
namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
}

// C_InfoInstructorHintHostageRescueZone (size: 0x608)
namespace C_InfoInstructorHintHostageRescueZone {
}

// CPulseCell_BaseYieldingInflow (size: 0x48)
namespace CPulseCell_BaseYieldingInflow {
}

// PulseNodeDynamicOutflows_t (size: 0x18)
namespace PulseNodeDynamicOutflows_t {
    constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t >
}

// C_TriggerBuoyancy (size: 0x1078)
namespace C_TriggerBuoyancy {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0xf58; // CBuoyancyHelper
    constexpr std::ptrdiff_t m_flFluidDensity = 0x1070; // float32
}

// CPlayer_MovementServices_Humanoid (size: 0x270)
namespace CPlayer_MovementServices_Humanoid {
    constexpr std::ptrdiff_t m_flStepSoundTime = 0x240; // float32
    constexpr std::ptrdiff_t m_flFallVelocity = 0x244; // float32
    constexpr std::ptrdiff_t m_groundNormal = 0x248; // Vector
    constexpr std::ptrdiff_t m_flSurfaceFriction = 0x254; // float32
    constexpr std::ptrdiff_t m_surfaceProps = 0x258; // CUtlStringToken
    constexpr std::ptrdiff_t m_nStepside = 0x268; // int32
}

// CPulseCell_IsRequirementValid::Criteria_t (size: 0x1)
namespace CPulseCell_IsRequirementValid_Criteria_t {
    constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
}

// C_WeaponTec9 (size: 0x1f70)
namespace C_WeaponTec9 {
}

// C_PhysPropClientside (size: 0x1300)
namespace C_PhysPropClientside {
    constexpr std::ptrdiff_t m_flTouchDelta = 0x12d0; // GameTime_t
    constexpr std::ptrdiff_t m_fDeathTime = 0x12d4; // GameTime_t
    constexpr std::ptrdiff_t m_vecDamagePosition = 0x12d8; // Vector
    constexpr std::ptrdiff_t m_vecDamageDirection = 0x12e4; // Vector
    constexpr std::ptrdiff_t m_nDamageType = 0x12f0; // DamageTypes_t
}

// C_BaseDoor (size: 0xe90)
namespace C_BaseDoor {
    constexpr std::ptrdiff_t m_bIsUsable = 0xe88; // bool
}

// CSMatchStats_t (size: 0x80)
namespace CSMatchStats_t {
    constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
    constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6c; // int32
    constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
    constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32
    constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32
}

// EntityRenderAttribute_t (size: 0x48)
namespace EntityRenderAttribute_t {
    constexpr std::ptrdiff_t m_ID = 0x30; // CUtlStringToken
    constexpr std::ptrdiff_t m_Values = 0x34; // Vector4D
}

// CPulseCell_Inflow_ObservableVariableListener (size: 0x88)
namespace CPulseCell_Inflow_ObservableVariableListener {
    constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
    constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
}

// CFilterMultipleAPI (size: 0x8)
namespace CFilterMultipleAPI {
}

// CHostageRescueZone (size: 0xf70)
namespace CHostageRescueZone {
}

// CModelState (size: 0x2d0)
namespace CModelState {
    constexpr std::ptrdiff_t m_hModel = 0xa0; // CStrongHandle< InfoForResourceTypeCModel >
    constexpr std::ptrdiff_t m_ModelName = 0xa8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0x179; // bool
    constexpr std::ptrdiff_t m_MeshGroupMask = 0x220; // uint64
    constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x270; // C_NetworkUtlVectorBase< int32 >
    constexpr std::ptrdiff_t m_nIdealMotionType = 0x2ba; // int8
    constexpr std::ptrdiff_t m_nForceLOD = 0x2bb; // int8
    constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x2bc; // int8
}

// CPulseCell_LerpCameraSettings::CursorState_t (size: 0x2c)
namespace CPulseCell_LerpCameraSettings_CursorState_t {
    constexpr std::ptrdiff_t m_hCamera = 0x8; // CHandle< C_PointCamera >
    constexpr std::ptrdiff_t m_OverlaidStart = 0xc; // PointCameraSettings_t
    constexpr std::ptrdiff_t m_OverlaidEnd = 0x1c; // PointCameraSettings_t
}

// CPulseCell_Outflow_CycleOrdered (size: 0x60)
namespace CPulseCell_Outflow_CycleOrdered {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

// C_CSWeaponBaseGun (size: 0x1f70)
namespace C_CSWeaponBaseGun {
    constexpr std::ptrdiff_t m_zoomLevel = 0x1f40; // int32
    constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1f44; // int32
    constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x1f48; // int32
    constexpr std::ptrdiff_t m_silencedModelIndex = 0x1f58; // int32
    constexpr std::ptrdiff_t m_inPrecache = 0x1f5c; // bool
    constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1f5d; // bool
    constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x1f60; // int32
}

// C_CSGameRulesProxy (size: 0x610)
namespace C_CSGameRulesProxy {
    constexpr std::ptrdiff_t m_pGameRules = 0x608; // C_CSGameRules*
}

// CCollisionProperty (size: 0xb0)
namespace CCollisionProperty {
    constexpr std::ptrdiff_t m_collisionAttribute = 0x10; // VPhysicsCollisionAttribute_t
    constexpr std::ptrdiff_t m_vecMins = 0x40; // Vector
    constexpr std::ptrdiff_t m_vecMaxs = 0x4c; // Vector
    constexpr std::ptrdiff_t m_usSolidFlags = 0x5a; // uint8
    constexpr std::ptrdiff_t m_nSolidType = 0x5b; // SolidType_t
    constexpr std::ptrdiff_t m_triggerBloat = 0x5c; // uint8
    constexpr std::ptrdiff_t m_nSurroundType = 0x5d; // SurroundingBoundsType_t
    constexpr std::ptrdiff_t m_CollisionGroup = 0x5e; // uint8
    constexpr std::ptrdiff_t m_nEnablePhysics = 0x5f; // uint8
    constexpr std::ptrdiff_t m_flBoundingRadius = 0x60; // float32
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64; // Vector
    constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70; // Vector
    constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7c; // Vector
    constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88; // Vector
    constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94; // Vector
    constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xa0; // Vector
    constexpr std::ptrdiff_t m_flCapsuleRadius = 0xac; // float32
}

// C_WeaponP250 (size: 0x1f70)
namespace C_WeaponP250 {
}

// C_ShatterGlassShardPhysics (size: 0x1370)
namespace C_ShatterGlassShardPhysics {
    constexpr std::ptrdiff_t m_ShardDesc = 0x12e8; // shard_model_desc_t
}

// CFilterMassGreater (size: 0x648)
namespace CFilterMassGreater {
    constexpr std::ptrdiff_t m_fFilterMass = 0x640; // float32
}

// C_EntityDissolve (size: 0xed0)
namespace C_EntityDissolve {
    constexpr std::ptrdiff_t m_flStartTime = 0xe90; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeInStart = 0xe94; // float32
    constexpr std::ptrdiff_t m_flFadeInLength = 0xe98; // float32
    constexpr std::ptrdiff_t m_flFadeOutModelStart = 0xe9c; // float32
    constexpr std::ptrdiff_t m_flFadeOutModelLength = 0xea0; // float32
    constexpr std::ptrdiff_t m_flFadeOutStart = 0xea4; // float32
    constexpr std::ptrdiff_t m_flFadeOutLength = 0xea8; // float32
    constexpr std::ptrdiff_t m_flNextSparkTime = 0xeac; // GameTime_t
    constexpr std::ptrdiff_t m_nDissolveType = 0xeb0; // EntityDisolveType_t
    constexpr std::ptrdiff_t m_vDissolverOrigin = 0xeb4; // Vector
    constexpr std::ptrdiff_t m_nMagnitude = 0xec0; // uint32
    constexpr std::ptrdiff_t m_bCoreExplode = 0xec4; // bool
    constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0xec5; // bool
}

// C_SoundOpvarSetOBBEntity (size: 0x628)
namespace C_SoundOpvarSetOBBEntity {
}

// CCSGameModeRules_ArmsRace (size: 0x48)
namespace CCSGameModeRules_ArmsRace {
    constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase< CUtlString >
}

// C_FuncMonitor (size: 0x1300)
namespace C_FuncMonitor {
    constexpr std::ptrdiff_t m_targetCamera = 0xe88; // CUtlString
    constexpr std::ptrdiff_t m_nResolutionEnum = 0xe90; // int32
    constexpr std::ptrdiff_t m_bRenderShadows = 0xe94; // bool
    constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0xe95; // bool
    constexpr std::ptrdiff_t m_brushModelName = 0xe98; // CUtlString
    constexpr std::ptrdiff_t m_hTargetCamera = 0xea0; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_bEnabled = 0xea4; // bool
    constexpr std::ptrdiff_t m_bDraw3DSkybox = 0xea5; // bool
}

// C_ClientRagdoll (size: 0x1200)
namespace C_ClientRagdoll {
    constexpr std::ptrdiff_t m_bFadeOut = 0x1168; // bool
    constexpr std::ptrdiff_t m_bImportant = 0x1169; // bool
    constexpr std::ptrdiff_t m_flEffectTime = 0x116c; // GameTime_t
    constexpr std::ptrdiff_t m_gibDespawnTime = 0x1170; // GameTime_t
    constexpr std::ptrdiff_t m_iCurrentFriction = 0x1174; // int32
    constexpr std::ptrdiff_t m_iMinFriction = 0x1178; // int32
    constexpr std::ptrdiff_t m_iMaxFriction = 0x117c; // int32
    constexpr std::ptrdiff_t m_iFrictionAnimState = 0x1180; // int32
    constexpr std::ptrdiff_t m_bReleaseRagdoll = 0x1184; // bool
    constexpr std::ptrdiff_t m_iEyeAttachment = 0x1185; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_bFadingOut = 0x1186; // bool
    constexpr std::ptrdiff_t m_flScaleEnd = 0x1188; // float32[10]
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0x11b0; // GameTime_t[10]
    constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x11d8; // GameTime_t[10]
}

// PulseSelectorOutflowList_t (size: 0x18)
namespace PulseSelectorOutflowList_t {
    constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector< OutflowWithRequirements_t >
}

// CPulseCell_PlaySequence::CursorState_t (size: 0x4)
namespace CPulseCell_PlaySequence_CursorState_t {
    constexpr std::ptrdiff_t m_hTarget = 0x0; // CHandle< CBaseAnimGraph >
}

// CBodyComponentSkeletonInstance (size: 0x550)
namespace CBodyComponentSkeletonInstance {
    constexpr std::ptrdiff_t m_skeletonInstance = 0x80; // CSkeletonInstance
}

// C_CS2WeaponModuleBase (size: 0x1170)
namespace C_CS2WeaponModuleBase {
}

// C_CSGO_TeamPreviewCharacterPosition (size: 0x13a8)
namespace C_CSGO_TeamPreviewCharacterPosition {
    constexpr std::ptrdiff_t m_nVariant = 0x608; // int32
    constexpr std::ptrdiff_t m_nRandom = 0x60c; // int32
    constexpr std::ptrdiff_t m_nOrdinal = 0x610; // int32
    constexpr std::ptrdiff_t m_sWeaponName = 0x618; // CUtlString
    constexpr std::ptrdiff_t m_xuid = 0x620; // uint64
    constexpr std::ptrdiff_t m_agentItem = 0x628; // C_EconItemView
    constexpr std::ptrdiff_t m_glovesItem = 0xa98; // C_EconItemView
    constexpr std::ptrdiff_t m_weaponItem = 0xf08; // C_EconItemView
}

// C_SmokeGrenadeProjectile (size: 0x15f0)
namespace C_SmokeGrenadeProjectile {
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1450; // int32
    constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x1454; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0x1458; // int32
    constexpr std::ptrdiff_t m_vSmokeColor = 0x145c; // Vector
    constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1468; // Vector
    constexpr std::ptrdiff_t m_VoxelFrameData = 0x1478; // C_NetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0x1490; // int32
    constexpr std::ptrdiff_t m_nVoxelUpdate = 0x1494; // int32
    constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x1498; // bool
    constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x1499; // bool
}

// CScriptComponent (size: 0x38)
namespace CScriptComponent {
    constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
}

// CCSPlayer_BuyServices (size: 0xb0)
namespace CCSPlayer_BuyServices {
    constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x48; // C_UtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t >
}

// C_PortraitWorldCallbackHandler (size: 0x610)
namespace C_PortraitWorldCallbackHandler {
}

// C_DynamicProp (size: 0x13a0)
namespace C_DynamicProp {
    constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0x12d0; // bool
    constexpr std::ptrdiff_t m_bUseAnimGraph = 0x12d1; // bool
    constexpr std::ptrdiff_t m_pOutputAnimBegun = 0x12d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimOver = 0x12f0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0x1308; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedStart = 0x1320; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0x1338; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszIdleAnim = 0x1350; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0x1358; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_bRandomizeCycle = 0x135c; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x135d; // bool
    constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0x135e; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0x135f; // bool
    constexpr std::ptrdiff_t m_bCreateNonSolid = 0x1360; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0x1361; // bool
    constexpr std::ptrdiff_t m_iInitialGlowState = 0x1364; // int32
    constexpr std::ptrdiff_t m_nGlowRange = 0x1368; // int32
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x136c; // int32
    constexpr std::ptrdiff_t m_glowColor = 0x1370; // Color
    constexpr std::ptrdiff_t m_nGlowTeam = 0x1374; // int32
    constexpr std::ptrdiff_t m_iCachedFrameCount = 0x1378; // int32
    constexpr std::ptrdiff_t m_vecCachedRenderMins = 0x137c; // Vector
    constexpr std::ptrdiff_t m_vecCachedRenderMaxs = 0x1388; // Vector
}

// C_CSTeam (size: 0x970)
namespace C_CSTeam {
    constexpr std::ptrdiff_t m_szTeamMatchStat = 0x6c0; // char[512]
    constexpr std::ptrdiff_t m_numMapVictories = 0x8c0; // int32
    constexpr std::ptrdiff_t m_bSurrendered = 0x8c4; // bool
    constexpr std::ptrdiff_t m_scoreFirstHalf = 0x8c8; // int32
    constexpr std::ptrdiff_t m_scoreSecondHalf = 0x8cc; // int32
    constexpr std::ptrdiff_t m_scoreOvertime = 0x8d0; // int32
    constexpr std::ptrdiff_t m_szClanTeamname = 0x8d4; // char[129]
    constexpr std::ptrdiff_t m_iClanID = 0x958; // uint32
    constexpr std::ptrdiff_t m_szTeamFlagImage = 0x95c; // char[8]
    constexpr std::ptrdiff_t m_szTeamLogoImage = 0x964; // char[8]
}

// C_CS2HudModelWeapon (size: 0x1280)
namespace C_CS2HudModelWeapon {
}

// C_TextureBasedAnimatable (size: 0xec0)
namespace C_TextureBasedAnimatable {
    constexpr std::ptrdiff_t m_bLoop = 0xe88; // bool
    constexpr std::ptrdiff_t m_flFPS = 0xe8c; // float32
    constexpr std::ptrdiff_t m_hPositionKeys = 0xe90; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_hRotationKeys = 0xe98; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0xea0; // Vector
    constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0xeac; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0xeb8; // float32
    constexpr std::ptrdiff_t m_flStartFrame = 0xebc; // float32
}

// C_LightEnvironmentEntity (size: 0xe90)
namespace C_LightEnvironmentEntity {
}

// CLogicRelayAPI (size: 0x8)
namespace CLogicRelayAPI {
}

// C_TriggerPhysics (size: 0xfa8)
namespace C_TriggerPhysics {
    constexpr std::ptrdiff_t m_gravityScale = 0xf58; // float32
    constexpr std::ptrdiff_t m_linearLimit = 0xf5c; // float32
    constexpr std::ptrdiff_t m_linearDamping = 0xf60; // float32
    constexpr std::ptrdiff_t m_angularLimit = 0xf64; // float32
    constexpr std::ptrdiff_t m_angularDamping = 0xf68; // float32
    constexpr std::ptrdiff_t m_linearForce = 0xf6c; // float32
    constexpr std::ptrdiff_t m_flFrequency = 0xf70; // float32
    constexpr std::ptrdiff_t m_flDampingRatio = 0xf74; // float32
    constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0xf78; // Vector
    constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0xf84; // bool
    constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0xf88; // Vector
    constexpr std::ptrdiff_t m_vecLinearForceDirection = 0xf94; // Vector
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0xfa0; // bool
}

// C_PropDoorRotating (size: 0x13e0)
namespace C_PropDoorRotating {
}

// C_HandleTest (size: 0x610)
namespace C_HandleTest {
    constexpr std::ptrdiff_t m_Handle = 0x608; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_bSendHandle = 0x60c; // bool
}

// CInfoWorldLayer (size: 0x640)
namespace CInfoWorldLayer {
    constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x608; // CEntityIOOutput
    constexpr std::ptrdiff_t m_worldName = 0x620; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_layerName = 0x628; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x630; // bool
    constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x631; // bool
    constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x632; // bool
    constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x634; // uint32
    constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x638; // bool
}

// CBodyComponentBaseModelEntity (size: 0x550)
namespace CBodyComponentBaseModelEntity {
}

// C_Multimeter (size: 0x1178)
namespace C_Multimeter {
    constexpr std::ptrdiff_t m_hTargetC4 = 0x1170; // CHandle< C_PlantedC4 >
}

// C_BaseTrigger (size: 0xf58)
namespace C_BaseTrigger {
    constexpr std::ptrdiff_t m_OnStartTouch = 0xe88; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartTouchAll = 0xea0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouch = 0xeb8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouchAll = 0xed0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTouching = 0xee8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0xf00; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNotTouching = 0xf18; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hTouchingEntities = 0xf30; // CUtlVector< CHandle< C_BaseEntity > >
    constexpr std::ptrdiff_t m_iFilterName = 0xf48; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0xf50; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_bDisabled = 0xf54; // bool
}

// FilterDamageType (size: 0x648)
namespace FilterDamageType {
    constexpr std::ptrdiff_t m_iDamageType = 0x640; // int32
}

// CAttributeList (size: 0x78)
namespace CAttributeList {
    constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar< CEconItemAttribute >
    constexpr std::ptrdiff_t m_pManager = 0x70; // CAttributeManager*
}

// CPulseCell_Inflow_Wait (size: 0x90)
namespace CPulseCell_Inflow_Wait {
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
}

// CFilterProximity (size: 0x648)
namespace CFilterProximity {
    constexpr std::ptrdiff_t m_flRadius = 0x640; // float32
}

// CCS2WeaponGraphController (size: 0x2a0)
namespace CCS2WeaponGraphController {
    constexpr std::ptrdiff_t m_action = 0x90; // CAnimGraph2ParamOptionalRef< CGlobalSymbol >
    constexpr std::ptrdiff_t m_bActionReset = 0xa8; // CAnimGraph2ParamOptionalRef< bool >
    constexpr std::ptrdiff_t m_flWeaponActionSpeedScale = 0xc0; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_weaponCategory = 0xd8; // CAnimGraph2ParamOptionalRef< CGlobalSymbol >
    constexpr std::ptrdiff_t m_weaponType = 0xf0; // CAnimGraph2ParamOptionalRef< CGlobalSymbol >
    constexpr std::ptrdiff_t m_weaponExtraInfo = 0x108; // CAnimGraph2ParamOptionalRef< CGlobalSymbol >
    constexpr std::ptrdiff_t m_flWeaponAmmo = 0x120; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_flWeaponAmmoMax = 0x138; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_flWeaponAmmoReserve = 0x150; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_bWeaponIsSilenced = 0x168; // CAnimGraph2ParamOptionalRef< bool >
    constexpr std::ptrdiff_t m_flWeaponIronsightAmount = 0x180; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_bIsUsingLegacyModel = 0x198; // CAnimGraph2ParamOptionalRef< bool >
    constexpr std::ptrdiff_t m_idleVariation = 0x1b0; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_deployVariation = 0x1c8; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_attackType = 0x1e0; // CAnimGraph2ParamOptionalRef< CGlobalSymbol >
    constexpr std::ptrdiff_t m_attackThrowStrength = 0x1f8; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_flAttackVariation = 0x210; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_inspectVariation = 0x228; // CAnimGraph2ParamOptionalRef< float32 >
    constexpr std::ptrdiff_t m_inspectExtraInfo = 0x240; // CAnimGraph2ParamOptionalRef< CGlobalSymbol >
    constexpr std::ptrdiff_t m_reloadStage = 0x258; // CAnimGraph2ParamOptionalRef< CGlobalSymbol >
}

// CEffectData (size: 0x78)
namespace CEffectData {
    constexpr std::ptrdiff_t m_vOrigin = 0x8; // VectorWS
    constexpr std::ptrdiff_t m_vStart = 0x14; // VectorWS
    constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
    constexpr std::ptrdiff_t m_vAngles = 0x2c; // QAngle
    constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
    constexpr std::ptrdiff_t m_hOtherEntity = 0x3c; // CEntityHandle
    constexpr std::ptrdiff_t m_flScale = 0x40; // float32
    constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x48; // float32
    constexpr std::ptrdiff_t m_nSurfaceProp = 0x4c; // CUtlStringToken
    constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32
    constexpr std::ptrdiff_t m_nPenetrate = 0x5c; // uint8
    constexpr std::ptrdiff_t m_nMaterial = 0x5e; // uint16
    constexpr std::ptrdiff_t m_nHitBox = 0x60; // int16
    constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
    constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
    constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
    constexpr std::ptrdiff_t m_iEffectName = 0x6c; // uint16
    constexpr std::ptrdiff_t m_nExplosionType = 0x6e; // uint8
}

// C_ParticleSystem (size: 0x1438)
namespace C_ParticleSystem {
    constexpr std::ptrdiff_t m_szSnapshotFileName = 0xe88; // char[512]
    constexpr std::ptrdiff_t m_bActive = 0x1088; // bool
    constexpr std::ptrdiff_t m_bFrozen = 0x1089; // bool
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x108c; // float32
    constexpr std::ptrdiff_t m_nStopType = 0x1090; // int32
    constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x1094; // bool
    constexpr std::ptrdiff_t m_iEffectIndex = 0x1098; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_flStartTime = 0x10a0; // GameTime_t
    constexpr std::ptrdiff_t m_flPreSimTime = 0x10a4; // float32
    constexpr std::ptrdiff_t m_vServerControlPoints = 0x10a8; // Vector[4]
    constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x10d8; // uint8[4]
    constexpr std::ptrdiff_t m_hControlPointEnts = 0x10dc; // CHandle< C_BaseEntity >[64]
    constexpr std::ptrdiff_t m_bNoSave = 0x11dc; // bool
    constexpr std::ptrdiff_t m_bNoFreeze = 0x11dd; // bool
    constexpr std::ptrdiff_t m_bNoRamp = 0x11de; // bool
    constexpr std::ptrdiff_t m_bStartActive = 0x11df; // bool
    constexpr std::ptrdiff_t m_iszEffectName = 0x11e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszControlPointNames = 0x11e8; // CUtlSymbolLarge[64]
    constexpr std::ptrdiff_t m_nDataCP = 0x13e8; // int32
    constexpr std::ptrdiff_t m_vecDataCPValue = 0x13ec; // Vector
    constexpr std::ptrdiff_t m_nTintCP = 0x13f8; // int32
    constexpr std::ptrdiff_t m_clrTint = 0x13fc; // Color
    constexpr std::ptrdiff_t m_bOldActive = 0x1420; // bool
    constexpr std::ptrdiff_t m_bOldFrozen = 0x1421; // bool
}

// CPulseCell_Outflow_CycleShuffled (size: 0x60)
namespace CPulseCell_Outflow_CycleShuffled {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

// C_WeaponSCAR20 (size: 0x1f70)
namespace C_WeaponSCAR20 {
}

// C_BaseFlex (size: 0x1350)
namespace C_BaseFlex {
    constexpr std::ptrdiff_t m_flexWeight = 0x1170; // C_NetworkUtlVectorBase< float32 >
    constexpr std::ptrdiff_t m_vLookTargetPosition = 0x1188; // VectorWS
    constexpr std::ptrdiff_t m_nLastFlexUpdateFrameCount = 0x1270; // int32
    constexpr std::ptrdiff_t m_CachedViewTarget = 0x1274; // Vector
    constexpr std::ptrdiff_t m_nNextSceneEventId = 0x1280; // SceneEventId_t
    constexpr std::ptrdiff_t m_iMouthAttachment = 0x1284; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEyeAttachment = 0x1285; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_bResetFlexWeightsOnModelChange = 0x1286; // bool
    constexpr std::ptrdiff_t m_nEyeOcclusionRendererBone = 0x12a0; // int32
    constexpr std::ptrdiff_t m_mEyeOcclusionRendererCameraToBoneTransform = 0x12a4; // matrix3x4_t
    constexpr std::ptrdiff_t m_vEyeOcclusionRendererHalfExtent = 0x12d4; // Vector
    constexpr std::ptrdiff_t m_PhonemeClasses = 0x12f0; // C_BaseFlex::Emphasized_Phoneme[3]
}

// C_FuncMover (size: 0xe88)
namespace C_FuncMover {
}

// CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t (size: 0xc8)
namespace CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t {
    constexpr std::ptrdiff_t pItem = 0x0; // C_EconItemView*
    constexpr std::ptrdiff_t team = 0x8; // uint16
    constexpr std::ptrdiff_t slot = 0xa; // uint16
}

// CLightComponent (size: 0x1f0)
namespace CLightComponent {
    constexpr std::ptrdiff_t _m_pChainEntity = 0x38; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_Color = 0x75; // Color
    constexpr std::ptrdiff_t m_SecondaryColor = 0x79; // Color
    constexpr std::ptrdiff_t m_flBrightness = 0x80; // float32
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x84; // float32
    constexpr std::ptrdiff_t m_flBrightnessMult = 0x88; // float32
    constexpr std::ptrdiff_t m_flRange = 0x8c; // float32
    constexpr std::ptrdiff_t m_flFalloff = 0x90; // float32
    constexpr std::ptrdiff_t m_flAttenuation0 = 0x94; // float32
    constexpr std::ptrdiff_t m_flAttenuation1 = 0x98; // float32
    constexpr std::ptrdiff_t m_flAttenuation2 = 0x9c; // float32
    constexpr std::ptrdiff_t m_flTheta = 0xa0; // float32
    constexpr std::ptrdiff_t m_flPhi = 0xa4; // float32
    constexpr std::ptrdiff_t m_hLightCookie = 0xa8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_nCascades = 0xb0; // int32
    constexpr std::ptrdiff_t m_nCastShadows = 0xb4; // int32
    constexpr std::ptrdiff_t m_nShadowWidth = 0xb8; // int32
    constexpr std::ptrdiff_t m_nShadowHeight = 0xbc; // int32
    constexpr std::ptrdiff_t m_bRenderDiffuse = 0xc0; // bool
    constexpr std::ptrdiff_t m_nRenderSpecular = 0xc4; // int32
    constexpr std::ptrdiff_t m_bRenderTransmissive = 0xc8; // bool
    constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xcc; // float32
    constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xd0; // float32
    constexpr std::ptrdiff_t m_nStyle = 0xd4; // int32
    constexpr std::ptrdiff_t m_Pattern = 0xd8; // CUtlString
    constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xe0; // int32
    constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xe4; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xe8; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xec; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xf0; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xf4; // float32
    constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xf8; // float32
    constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xfc; // int32
    constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x100; // int32
    constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x104; // int32
    constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x108; // int32
    constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x10c; // bool
    constexpr std::ptrdiff_t m_nShadowPriority = 0x110; // int32
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x114; // int32
    constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x118; // int32
    constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x11c; // int32
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x120; // bool
    constexpr std::ptrdiff_t m_bAllowSSTGeneration = 0x121; // bool
    constexpr std::ptrdiff_t m_nDirectLight = 0x124; // int32
    constexpr std::ptrdiff_t m_nIndirectLight = 0x128; // int32
    constexpr std::ptrdiff_t m_bDynamicBounce = 0x12c; // bool
    constexpr std::ptrdiff_t m_flFadeMinDist = 0x130; // float32
    constexpr std::ptrdiff_t m_flFadeMaxDist = 0x134; // float32
    constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x138; // float32
    constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x13c; // float32
    constexpr std::ptrdiff_t m_bEnabled = 0x140; // bool
    constexpr std::ptrdiff_t m_bFlicker = 0x141; // bool
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x142; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x144; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x150; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x15c; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x168; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x174; // Vector
    constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x180; // float32
    constexpr std::ptrdiff_t m_nFogLightingMode = 0x184; // int32
    constexpr std::ptrdiff_t m_flFogContributionStength = 0x188; // float32
    constexpr std::ptrdiff_t m_flNearClipPlane = 0x18c; // float32
    constexpr std::ptrdiff_t m_SkyColor = 0x190; // Color
    constexpr std::ptrdiff_t m_flSkyIntensity = 0x194; // float32
    constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x198; // Color
    constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x19c; // bool
    constexpr std::ptrdiff_t m_bMixedShadows = 0x19d; // bool
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1a0; // GameTime_t
    constexpr std::ptrdiff_t m_flCapsuleLength = 0x1a4; // float32
    constexpr std::ptrdiff_t m_flMinRoughness = 0x1a8; // float32
}

// C_DecoyGrenade (size: 0x2000)
namespace C_DecoyGrenade {
}

// C_WaterBullet (size: 0x1168)
namespace C_WaterBullet {
}

// CCSPlayer_ActionTrackingServices (size: 0x130)
namespace CCSPlayer_ActionTrackingServices {
    constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x48; // CHandle< C_BasePlayerWeapon >
    constexpr std::ptrdiff_t m_bIsRescuing = 0x4c; // bool
    constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x50; // WeaponPurchaseTracker_t
    constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xc0; // WeaponPurchaseTracker_t
}

// C_EnvCubemap (size: 0x6f0)
namespace C_EnvCubemap {
    constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x688; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x690; // bool
    constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x694; // float32
    constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x698; // Vector
    constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x6a4; // Vector
    constexpr std::ptrdiff_t m_Entity_bMoveable = 0x6b0; // bool
    constexpr std::ptrdiff_t m_Entity_nHandshake = 0x6b4; // int32
    constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x6b8; // int32
    constexpr std::ptrdiff_t m_Entity_nPriority = 0x6bc; // int32
    constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x6c0; // float32
    constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x6c4; // Vector
    constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x6d0; // float32
    constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x6d4; // bool
    constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x6d5; // bool
    constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x6d6; // bool
    constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x6d7; // bool
    constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x6d8; // bool
    constexpr std::ptrdiff_t m_Entity_bEnabled = 0x6e8; // bool
}

// CCSObserver_MovementServices (size: 0x240)
namespace CCSObserver_MovementServices {
}

// CBodyComponent (size: 0x78)
namespace CBodyComponent {
    constexpr std::ptrdiff_t m_pSceneNode = 0x8; // CGameSceneNode*
    constexpr std::ptrdiff_t _m_pChainEntity = 0x48; // CNetworkVarChainer
}

// CPulseCell_Inflow_Method (size: 0xc8)
namespace CPulseCell_Inflow_Method {
    constexpr std::ptrdiff_t m_MethodName = 0x80; // PulseSymbol_t
    constexpr std::ptrdiff_t m_Description = 0x90; // CUtlString
    constexpr std::ptrdiff_t m_bIsPublic = 0x98; // bool
    constexpr std::ptrdiff_t m_ReturnType = 0xa0; // CPulseValueFullType
    constexpr std::ptrdiff_t m_Args = 0xb8; // CUtlLeanVector< CPulseRuntimeMethodArg >
}

// C_BaseCombatCharacter (size: 0x13d8)
namespace C_BaseCombatCharacter {
    constexpr std::ptrdiff_t m_hMyWearables = 0x1350; // C_NetworkUtlVectorBase< CHandle< C_EconWearable > >
    constexpr std::ptrdiff_t m_leftFootAttachment = 0x1368; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_rightFootAttachment = 0x1369; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_nWaterWakeMode = 0x136c; // C_BaseCombatCharacter::WaterWakeMode_t
    constexpr std::ptrdiff_t m_flWaterWorldZ = 0x1370; // float32
    constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x1374; // float32
}

// CGlowProperty (size: 0x58)
namespace CGlowProperty {
    constexpr std::ptrdiff_t m_fGlowColor = 0x8; // Vector
    constexpr std::ptrdiff_t m_iGlowType = 0x30; // int32
    constexpr std::ptrdiff_t m_iGlowTeam = 0x34; // int32
    constexpr std::ptrdiff_t m_nGlowRange = 0x38; // int32
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3c; // int32
    constexpr std::ptrdiff_t m_glowColorOverride = 0x40; // Color
    constexpr std::ptrdiff_t m_bFlashing = 0x44; // bool
    constexpr std::ptrdiff_t m_flGlowTime = 0x48; // float32
    constexpr std::ptrdiff_t m_flGlowStartTime = 0x4c; // float32
    constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50; // bool
    constexpr std::ptrdiff_t m_bGlowing = 0x51; // bool
}

// C_PointClientUIDialog (size: 0xec0)
namespace C_PointClientUIDialog {
    constexpr std::ptrdiff_t m_hActivator = 0xeb8; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_bStartEnabled = 0xebc; // bool
}

// CPulseCell_BaseValue (size: 0x48)
namespace CPulseCell_BaseValue {
}

// C_WeaponHKP2000 (size: 0x1f70)
namespace C_WeaponHKP2000 {
}

// C_FootstepControl (size: 0xf68)
namespace C_FootstepControl {
    constexpr std::ptrdiff_t m_source = 0xf58; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_destination = 0xf60; // CUtlSymbolLarge
}

// CCitadelSoundOpvarSetOBB (size: 0x670)
namespace CCitadelSoundOpvarSetOBB {
    constexpr std::ptrdiff_t m_iszStackName = 0x620; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x628; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x630; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x638; // Vector
    constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x644; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x650; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x65c; // Vector
    constexpr std::ptrdiff_t m_nAABBDirection = 0x668; // int32
}

// C_CSGO_EndOfMatchLineupStart (size: 0x608)
namespace C_CSGO_EndOfMatchLineupStart {
}

// CPlayer_WaterServices (size: 0x48)
namespace CPlayer_WaterServices {
}

// CPulseCell_BooleanSwitchState (size: 0x198)
namespace CPulseCell_BooleanSwitchState {
    constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
    constexpr std::ptrdiff_t m_SubGraph = 0xc0; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_WhenTrue = 0x108; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_WhenFalse = 0x150; // CPulse_OutflowConnection
}

// VPhysicsCollisionAttribute_t (size: 0x30)
namespace VPhysicsCollisionAttribute_t {
    constexpr std::ptrdiff_t m_nInteractsAs = 0x8; // uint64
    constexpr std::ptrdiff_t m_nInteractsWith = 0x10; // uint64
    constexpr std::ptrdiff_t m_nInteractsExclude = 0x18; // uint64
    constexpr std::ptrdiff_t m_nEntityId = 0x20; // uint32
    constexpr std::ptrdiff_t m_nOwnerId = 0x24; // uint32
    constexpr std::ptrdiff_t m_nHierarchyId = 0x28; // uint16
    constexpr std::ptrdiff_t m_nDetailLayerMask = 0x2a; // uint16
    constexpr std::ptrdiff_t m_nDetailLayerMaskType = 0x2c; // uint8
    constexpr std::ptrdiff_t m_nTargetDetailLayer = 0x2d; // uint8
    constexpr std::ptrdiff_t m_nCollisionGroup = 0x2e; // uint8
    constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2f; // uint8
}

// C_DynamicPropAlias_dynamic_prop (size: 0x13a0)
namespace C_DynamicPropAlias_dynamic_prop {
}

// CEnvSoundscapeProxyAlias_snd_soundscape_proxy (size: 0x6a0)
namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
}

// C_OmniLight (size: 0x11a8)
namespace C_OmniLight {
    constexpr std::ptrdiff_t m_flInnerAngle = 0x1198; // float32
    constexpr std::ptrdiff_t m_flOuterAngle = 0x119c; // float32
    constexpr std::ptrdiff_t m_bShowLight = 0x11a0; // bool
}

// C_SceneEntity (size: 0x668)
namespace C_SceneEntity {
    constexpr std::ptrdiff_t m_bIsPlayingBack = 0x610; // bool
    constexpr std::ptrdiff_t m_bPaused = 0x611; // bool
    constexpr std::ptrdiff_t m_bMultiplayer = 0x612; // bool
    constexpr std::ptrdiff_t m_bAutogenerated = 0x613; // bool
    constexpr std::ptrdiff_t m_flForceClientTime = 0x614; // float32
    constexpr std::ptrdiff_t m_nSceneStringIndex = 0x618; // uint16
    constexpr std::ptrdiff_t m_bClientOnly = 0x61a; // bool
    constexpr std::ptrdiff_t m_hOwner = 0x61c; // CHandle< C_BaseFlex >
    constexpr std::ptrdiff_t m_hActorList = 0x620; // C_NetworkUtlVectorBase< CHandle< C_BaseFlex > >
    constexpr std::ptrdiff_t m_bWasPlaying = 0x638; // bool
    constexpr std::ptrdiff_t m_QueuedEvents = 0x648; // CUtlVector< C_SceneEntity::QueuedEvents_t >
    constexpr std::ptrdiff_t m_flCurrentTime = 0x660; // float32
}

// CPulseCell_Inflow_Yield (size: 0x90)
namespace CPulseCell_Inflow_Yield {
    constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
}

// CPulseMathlib (size: 0x1)
namespace CPulseMathlib {
}

// C_NametagModule (size: 0x1178)
namespace C_NametagModule {
    constexpr std::ptrdiff_t m_strNametagString = 0x1170; // CUtlString
}

// C_EconEntity (size: 0x18c0)
namespace C_EconEntity {
    constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1360; // float32
    constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1368; // float32*
    constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1370; // bool
    constexpr std::ptrdiff_t m_AttributeManager = 0x1378; // C_AttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x1848; // uint32
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x184c; // uint32
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x1850; // int32
    constexpr std::ptrdiff_t m_nFallbackSeed = 0x1854; // int32
    constexpr std::ptrdiff_t m_flFallbackWear = 0x1858; // float32
    constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x185c; // int32
    constexpr std::ptrdiff_t m_bClientside = 0x1860; // bool
    constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x1861; // bool
    constexpr std::ptrdiff_t m_vecAttachedParticles = 0x1868; // CUtlVector< int32 >
    constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x1880; // CHandle< CBaseAnimGraph >
    constexpr std::ptrdiff_t m_iOldTeam = 0x1884; // int32
    constexpr std::ptrdiff_t m_bAttachmentDirty = 0x1888; // bool
    constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x188c; // int32
    constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x1890; // int32
    constexpr std::ptrdiff_t m_hOldProvidee = 0x18a0; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_vecAttachedModels = 0x18a8; // CUtlVector< C_EconEntity::AttachedModelData_t >
}

// CPlayer_UseServices (size: 0x48)
namespace CPlayer_UseServices {
}

// C_PointValueRemapper (size: 0x680)
namespace C_PointValueRemapper {
    constexpr std::ptrdiff_t m_bDisabled = 0x608; // bool
    constexpr std::ptrdiff_t m_bDisabledOld = 0x609; // bool
    constexpr std::ptrdiff_t m_bUpdateOnClient = 0x60a; // bool
    constexpr std::ptrdiff_t m_nInputType = 0x60c; // ValueRemapperInputType_t
    constexpr std::ptrdiff_t m_hRemapLineStart = 0x610; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_hRemapLineEnd = 0x614; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x618; // float32
    constexpr std::ptrdiff_t m_flDisengageDistance = 0x61c; // float32
    constexpr std::ptrdiff_t m_flEngageDistance = 0x620; // float32
    constexpr std::ptrdiff_t m_bRequiresUseKey = 0x624; // bool
    constexpr std::ptrdiff_t m_nOutputType = 0x628; // ValueRemapperOutputType_t
    constexpr std::ptrdiff_t m_hOutputEntities = 0x630; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
    constexpr std::ptrdiff_t m_nHapticsType = 0x648; // ValueRemapperHapticsType_t
    constexpr std::ptrdiff_t m_nMomentumType = 0x64c; // ValueRemapperMomentumType_t
    constexpr std::ptrdiff_t m_flMomentumModifier = 0x650; // float32
    constexpr std::ptrdiff_t m_flSnapValue = 0x654; // float32
    constexpr std::ptrdiff_t m_flCurrentMomentum = 0x658; // float32
    constexpr std::ptrdiff_t m_nRatchetType = 0x65c; // ValueRemapperRatchetType_t
    constexpr std::ptrdiff_t m_flRatchetOffset = 0x660; // float32
    constexpr std::ptrdiff_t m_flInputOffset = 0x664; // float32
    constexpr std::ptrdiff_t m_bEngaged = 0x668; // bool
    constexpr std::ptrdiff_t m_bFirstUpdate = 0x669; // bool
    constexpr std::ptrdiff_t m_flPreviousValue = 0x66c; // float32
    constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x670; // GameTime_t
    constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x674; // Vector
}

// CGameSceneNodeHandle (size: 0x10)
namespace CGameSceneNodeHandle {
    constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
    constexpr std::ptrdiff_t m_name = 0xc; // CUtlStringToken
}

// CPulseCell_Unknown (size: 0x58)
namespace CPulseCell_Unknown {
    constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
}

// C_WeaponMP7 (size: 0x1f70)
namespace C_WeaponMP7 {
}

// CSPerRoundStats_t (size: 0x68)
namespace CSPerRoundStats_t {
    constexpr std::ptrdiff_t m_iKills = 0x30; // int32
    constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32
    constexpr std::ptrdiff_t m_iAssists = 0x38; // int32
    constexpr std::ptrdiff_t m_iDamage = 0x3c; // int32
    constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32
    constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32
    constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32
    constexpr std::ptrdiff_t m_iLiveTime = 0x4c; // int32
    constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32
    constexpr std::ptrdiff_t m_iObjective = 0x54; // int32
    constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32
    constexpr std::ptrdiff_t m_iUtilityDamage = 0x5c; // int32
    constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32
}

// CPulseCell_Outflow_CycleRandom (size: 0x60)
namespace CPulseCell_Outflow_CycleRandom {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

// CPulseCell_Step_PublicOutput (size: 0x50)
namespace CPulseCell_Step_PublicOutput {
    constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
}

// C_CS2HudModelBase (size: 0x1230)
namespace C_CS2HudModelBase {
}

// C_CSGameRules (size: 0x4f60)
namespace C_CSGameRules {
    constexpr std::ptrdiff_t m_bFreezePeriod = 0x40; // bool
    constexpr std::ptrdiff_t m_bWarmupPeriod = 0x41; // bool
    constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x44; // GameTime_t
    constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x4c; // bool
    constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x4d; // bool
    constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x50; // float32
    constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x54; // float32
    constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x58; // int32
    constexpr std::ptrdiff_t m_nCTTimeOuts = 0x5c; // int32
    constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x60; // bool
    constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x61; // bool
    constexpr std::ptrdiff_t m_iFreezeTime = 0x64; // int32
    constexpr std::ptrdiff_t m_iRoundTime = 0x68; // int32
    constexpr std::ptrdiff_t m_fMatchStartTime = 0x6c; // float32
    constexpr std::ptrdiff_t m_fRoundStartTime = 0x70; // GameTime_t
    constexpr std::ptrdiff_t m_flRestartRoundTime = 0x74; // GameTime_t
    constexpr std::ptrdiff_t m_bGameRestart = 0x78; // bool
    constexpr std::ptrdiff_t m_flGameStartTime = 0x7c; // float32
    constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x80; // float32
    constexpr std::ptrdiff_t m_gamePhase = 0x84; // int32
    constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x88; // int32
    constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x8c; // int32
    constexpr std::ptrdiff_t m_nOvertimePlaying = 0x90; // int32
    constexpr std::ptrdiff_t m_iHostagesRemaining = 0x94; // int32
    constexpr std::ptrdiff_t m_bAnyHostageReached = 0x98; // bool
    constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x99; // bool
    constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x9a; // bool
    constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x9b; // bool
    constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x9c; // bool
    constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0xa0; // int32
    constexpr std::ptrdiff_t m_bIsValveDS = 0xa4; // bool
    constexpr std::ptrdiff_t m_bLogoMap = 0xa5; // bool
    constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0xa6; // bool
    constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0xa8; // int32
    constexpr std::ptrdiff_t m_MatchDevice = 0xac; // int32
    constexpr std::ptrdiff_t m_bHasMatchStarted = 0xb0; // bool
    constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xb4; // int32
    constexpr std::ptrdiff_t m_szTournamentEventName = 0xb8; // char[512]
    constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2b8; // char[512]
    constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4b8; // char[512]
    constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6b8; // char[512]
    constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8b8; // int32
    constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8bc; // GameTime_t
    constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8c0; // GameTime_t
    constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8c4; // bool
    constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8c5; // bool
    constexpr std::ptrdiff_t m_bIsHltvActive = 0x8c6; // bool
    constexpr std::ptrdiff_t m_bBombPlanted = 0x8c7; // bool
    constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8c8; // uint16[100]
    constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x990; // uint32[4]
    constexpr std::ptrdiff_t m_numBestOfMaps = 0x9a0; // int32
    constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9a4; // int32
    constexpr std::ptrdiff_t m_bBombDropped = 0x9a8; // bool
    constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9ac; // int32
    constexpr std::ptrdiff_t m_eRoundWinReason = 0x9b0; // int32
    constexpr std::ptrdiff_t m_bTCantBuy = 0x9b4; // bool
    constexpr std::ptrdiff_t m_bCTCantBuy = 0x9b5; // bool
    constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9b8; // int32[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xa30; // int32[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xaa8; // int32[30]
    constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xb20; // float32[32]
    constexpr std::ptrdiff_t m_flNextRespawnWave = 0xba0; // GameTime_t[32]
    constexpr std::ptrdiff_t m_vMinimapMins = 0xc20; // Vector
    constexpr std::ptrdiff_t m_vMinimapMaxs = 0xc2c; // Vector
    constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xc38; // float32[8]
    constexpr std::ptrdiff_t m_ullLocalMatchID = 0xc58; // uint64
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xc60; // int32[10]
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xc88; // int32[10]
    constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xcb0; // int32
    constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xcb4; // int32
    constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xcb8; // int32
    constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xd78; // int32
    constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xd7c; // bool
    constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xd7d; // bool
    constexpr std::ptrdiff_t m_pGameModeRules = 0xd98; // CCSGameModeRules*
    constexpr std::ptrdiff_t m_RetakeRules = 0xda0; // C_RetakeGameRules
    constexpr std::ptrdiff_t m_nMatchEndCount = 0xef8; // uint8
    constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xefc; // int32
    constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xf00; // int32
    constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xf04; // bool
    constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xf08; // int32
    constexpr std::ptrdiff_t m_eRoundEndReason = 0xf0c; // int32
    constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xf10; // bool
    constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xf14; // int32
    constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xf18; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xf20; // CPlayerSlot
    constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xf24; // int32
    constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xf28; // int32
    constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xf2c; // int32
    constexpr std::ptrdiff_t m_sRoundEndMessage = 0xf30; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xf38; // int32
    constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xf3c; // bool
    constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xf40; // int32
    constexpr std::ptrdiff_t m_nRoundEndCount = 0xf44; // uint8
    constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xf48; // int32
    constexpr std::ptrdiff_t m_nRoundStartCount = 0xf4c; // uint8
    constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4f58; // float64
}

// CGrenadeTracer (size: 0x1320)
namespace CGrenadeTracer {
    constexpr std::ptrdiff_t m_flTracerDuration = 0xea0; // float32
    constexpr std::ptrdiff_t m_nType = 0xea4; // GrenadeType_t
}

// CCSGameModeRules_Noop (size: 0x30)
namespace CCSGameModeRules_Noop {
}

// CPulse_BlackboardReference (size: 0x28)
namespace CPulse_BlackboardReference {
    constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CStrongHandle< InfoForResourceTypeIPulseGraphDef >
    constexpr std::ptrdiff_t m_BlackboardResource = 0x8; // PulseSymbol_t
    constexpr std::ptrdiff_t m_nNodeID = 0x18; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_NodeName = 0x20; // CGlobalSymbol
}

// C_BaseCSGrenadeProjectile (size: 0x1438)
namespace C_BaseCSGrenadeProjectile {
    constexpr std::ptrdiff_t m_vInitialPosition = 0x13a0; // Vector
    constexpr std::ptrdiff_t m_vInitialVelocity = 0x13ac; // Vector
    constexpr std::ptrdiff_t m_nBounces = 0x13b8; // int32
    constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x13c0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x13c8; // int32
    constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x13cc; // Vector
    constexpr std::ptrdiff_t m_flSpawnTime = 0x13d8; // GameTime_t
    constexpr std::ptrdiff_t vecLastTrailLinePos = 0x13dc; // Vector
    constexpr std::ptrdiff_t flNextTrailLineTime = 0x13e8; // GameTime_t
    constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x13ec; // bool
    constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x13ed; // bool
    constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x13f0; // ParticleIndex_t
    constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x13f8; // CStrongHandle< InfoForResourceTypeIParticleSnapshot >
    constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x1400; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x1418; // CUtlVector< float32 >
    constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x1430; // float32
}

// C_GradientFog (size: 0x6a0)
namespace C_GradientFog {
    constexpr std::ptrdiff_t m_hGradientFogTexture = 0x608; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_flFogStartDistance = 0x610; // float32
    constexpr std::ptrdiff_t m_flFogEndDistance = 0x614; // float32
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x618; // bool
    constexpr std::ptrdiff_t m_flFogStartHeight = 0x61c; // float32
    constexpr std::ptrdiff_t m_flFogEndHeight = 0x620; // float32
    constexpr std::ptrdiff_t m_flFarZ = 0x624; // float32
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x628; // float32
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x62c; // float32
    constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x630; // float32
    constexpr std::ptrdiff_t m_fogColor = 0x634; // Color
    constexpr std::ptrdiff_t m_flFogStrength = 0x638; // float32
    constexpr std::ptrdiff_t m_flFadeTime = 0x63c; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x640; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x641; // bool
    constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x642; // bool
}

// CCSPlayerController_InGameMoneyServices (size: 0x50)
namespace CCSPlayerController_InGameMoneyServices {
    constexpr std::ptrdiff_t m_iAccount = 0x40; // int32
    constexpr std::ptrdiff_t m_iStartAccount = 0x44; // int32
    constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48; // int32
    constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4c; // int32
}

// C_HEGrenadeProjectile (size: 0x1438)
namespace C_HEGrenadeProjectile {
}

// CAnimGraphNetworkedVariables (size: 0x1490)
namespace CAnimGraphNetworkedVariables {
    constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // C_NetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // C_NetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // C_NetworkUtlVectorBase< uint16 >
    constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // C_NetworkUtlVectorBase< int32 >
    constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // C_NetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // C_NetworkUtlVectorBase< uint64 >
    constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // C_NetworkUtlVectorBase< float32 >
    constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xb0; // C_NetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xc8; // C_NetworkUtlVectorBase< Quaternion >
    constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xe0; // C_NetworkUtlVectorBase< CGlobalSymbol >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xf8; // C_NetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // C_NetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // C_NetworkUtlVectorBase< uint16 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // C_NetworkUtlVectorBase< int32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // C_NetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // C_NetworkUtlVectorBase< uint64 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // C_NetworkUtlVectorBase< float32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1a0; // C_NetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1b8; // C_NetworkUtlVectorBase< Quaternion >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1d0; // C_NetworkUtlVectorBase< CGlobalSymbol >
    constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1e8; // int32
    constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1ec; // int32
    constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1f0; // int32
    constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1f4; // float32
}

// CFilterModel (size: 0x648)
namespace CFilterModel {
    constexpr std::ptrdiff_t m_iFilterModel = 0x640; // CUtlSymbolLarge
}

// C_SoundAreaEntityOrientedBox (size: 0x648)
namespace C_SoundAreaEntityOrientedBox {
    constexpr std::ptrdiff_t m_vMin = 0x630; // Vector
    constexpr std::ptrdiff_t m_vMax = 0x63c; // Vector
}

// C_SoundOpvarSetPointEntity (size: 0x628)
namespace C_SoundOpvarSetPointEntity {
}

// CPulseGameBlackboard (size: 0x620)
namespace CPulseGameBlackboard {
    constexpr std::ptrdiff_t m_strGraphName = 0x610; // CUtlString
    constexpr std::ptrdiff_t m_strStateBlob = 0x618; // CUtlString
}

// CPulseCell_Value_RandomInt (size: 0x48)
namespace CPulseCell_Value_RandomInt {
}

// C_CSWeaponBaseShotgun (size: 0x1f40)
namespace C_CSWeaponBaseShotgun {
}

// C_RagdollPropAttached (size: 0x1230)
namespace C_RagdollPropAttached {
    constexpr std::ptrdiff_t m_boneIndexAttached = 0x11f8; // uint32
    constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0x11fc; // uint32
    constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0x1200; // Vector
    constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0x120c; // Vector
    constexpr std::ptrdiff_t m_vecOffset = 0x1218; // Vector
    constexpr std::ptrdiff_t m_parentTime = 0x1224; // float32
    constexpr std::ptrdiff_t m_bHasParent = 0x1228; // bool
}

// C_ModelPointEntity (size: 0xe88)
namespace C_ModelPointEntity {
}

// C_CSGO_PreviewPlayer (size: 0x3fa0)
namespace C_CSGO_PreviewPlayer {
    constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x3ef0; // CGlobalSymbol
    constexpr std::ptrdiff_t m_flInitialModelScale = 0x3ef8; // float32
}

// C_RectLight (size: 0x11a0)
namespace C_RectLight {
    constexpr std::ptrdiff_t m_bShowLight = 0x1198; // bool
}

// CPathSimple (size: 0x710)
namespace CPathSimple {
    constexpr std::ptrdiff_t m_CPathQueryComponent = 0x610; // CPathQueryComponent
    constexpr std::ptrdiff_t m_pathString = 0x700; // CUtlString
    constexpr std::ptrdiff_t m_bClosedLoop = 0x708; // bool
}

// C_FuncTrackTrain (size: 0xe98)
namespace C_FuncTrackTrain {
    constexpr std::ptrdiff_t m_nLongAxis = 0xe88; // int32
    constexpr std::ptrdiff_t m_flRadius = 0xe8c; // float32
    constexpr std::ptrdiff_t m_flLineLength = 0xe90; // float32
}

// C_EconWearable (size: 0x18c8)
namespace C_EconWearable {
    constexpr std::ptrdiff_t m_nForceSkin = 0x18c0; // int32
    constexpr std::ptrdiff_t m_bAlwaysAllow = 0x18c4; // bool
}

// C_EnvDecal (size: 0xec0)
namespace C_EnvDecal {
    constexpr std::ptrdiff_t m_hDecalMaterial = 0xe88; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_flWidth = 0xe90; // float32
    constexpr std::ptrdiff_t m_flHeight = 0xe94; // float32
    constexpr std::ptrdiff_t m_flDepth = 0xe98; // float32
    constexpr std::ptrdiff_t m_nRenderOrder = 0xe9c; // uint32
    constexpr std::ptrdiff_t m_bProjectOnWorld = 0xea0; // bool
    constexpr std::ptrdiff_t m_bProjectOnCharacters = 0xea1; // bool
    constexpr std::ptrdiff_t m_bProjectOnWater = 0xea2; // bool
    constexpr std::ptrdiff_t m_flDepthSortBias = 0xea4; // float32
}

// EntitySpottedState_t (size: 0x18)
namespace EntitySpottedState_t {
    constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
    constexpr std::ptrdiff_t m_bSpottedByMask = 0xc; // uint32[2]
}

// fogparams_t (size: 0x68)
namespace fogparams_t {
    constexpr std::ptrdiff_t dirPrimary = 0x8; // Vector
    constexpr std::ptrdiff_t colorPrimary = 0x14; // Color
    constexpr std::ptrdiff_t colorSecondary = 0x18; // Color
    constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1c; // Color
    constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20; // Color
    constexpr std::ptrdiff_t start = 0x24; // float32
    constexpr std::ptrdiff_t end = 0x28; // float32
    constexpr std::ptrdiff_t farz = 0x2c; // float32
    constexpr std::ptrdiff_t maxdensity = 0x30; // float32
    constexpr std::ptrdiff_t exponent = 0x34; // float32
    constexpr std::ptrdiff_t HDRColorScale = 0x38; // float32
    constexpr std::ptrdiff_t skyboxFogFactor = 0x3c; // float32
    constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40; // float32
    constexpr std::ptrdiff_t startLerpTo = 0x44; // float32
    constexpr std::ptrdiff_t endLerpTo = 0x48; // float32
    constexpr std::ptrdiff_t maxdensityLerpTo = 0x4c; // float32
    constexpr std::ptrdiff_t lerptime = 0x50; // GameTime_t
    constexpr std::ptrdiff_t duration = 0x54; // float32
    constexpr std::ptrdiff_t blendtobackground = 0x58; // float32
    constexpr std::ptrdiff_t scattering = 0x5c; // float32
    constexpr std::ptrdiff_t locallightscale = 0x60; // float32
    constexpr std::ptrdiff_t enable = 0x64; // bool
    constexpr std::ptrdiff_t blend = 0x65; // bool
    constexpr std::ptrdiff_t m_bPadding2 = 0x66; // bool
    constexpr std::ptrdiff_t m_bPadding = 0x67; // bool
}

// C_WeaponM4A1 (size: 0x1f70)
namespace C_WeaponM4A1 {
}

// C_Item (size: 0x19c0)
namespace C_Item {
    constexpr std::ptrdiff_t m_pReticleHintTextName = 0x18c0; // char[256]
}

// C_CSPetPlacement (size: 0x608)
namespace C_CSPetPlacement {
}

// C_Beam (size: 0xf48)
namespace C_Beam {
    constexpr std::ptrdiff_t m_flFrameRate = 0xe88; // float32
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xe8c; // float32
    constexpr std::ptrdiff_t m_flFireTime = 0xe90; // GameTime_t
    constexpr std::ptrdiff_t m_flDamage = 0xe94; // float32
    constexpr std::ptrdiff_t m_nNumBeamEnts = 0xe98; // uint8
    constexpr std::ptrdiff_t m_queryHandleHalo = 0xe9c; // int32
    constexpr std::ptrdiff_t m_hBaseMaterial = 0xec0; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_nHaloIndex = 0xec8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_nBeamType = 0xed0; // BeamType_t
    constexpr std::ptrdiff_t m_nBeamFlags = 0xed4; // uint32
    constexpr std::ptrdiff_t m_hAttachEntity = 0xed8; // CHandle< C_BaseEntity >[10]
    constexpr std::ptrdiff_t m_nAttachIndex = 0xf00; // AttachmentHandle_t[10]
    constexpr std::ptrdiff_t m_fWidth = 0xf0c; // float32
    constexpr std::ptrdiff_t m_fEndWidth = 0xf10; // float32
    constexpr std::ptrdiff_t m_fFadeLength = 0xf14; // float32
    constexpr std::ptrdiff_t m_fHaloScale = 0xf18; // float32
    constexpr std::ptrdiff_t m_fAmplitude = 0xf1c; // float32
    constexpr std::ptrdiff_t m_fStartFrame = 0xf20; // float32
    constexpr std::ptrdiff_t m_fSpeed = 0xf24; // float32
    constexpr std::ptrdiff_t m_flFrame = 0xf28; // float32
    constexpr std::ptrdiff_t m_nClipStyle = 0xf2c; // BeamClipStyle_t
    constexpr std::ptrdiff_t m_bTurnedOff = 0xf30; // bool
    constexpr std::ptrdiff_t m_vecEndPos = 0xf34; // VectorWS
    constexpr std::ptrdiff_t m_hEndEntity = 0xf40; // CHandle< C_BaseEntity >
}

// C_EnvLightProbeVolume (size: 0x1698)
namespace C_EnvLightProbeVolume {
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1600; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1608; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1610; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1618; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1620; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1628; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1630; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1638; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1640; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1648; // Vector
    constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x1654; // Vector
    constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1660; // bool
    constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1664; // int32
    constexpr std::ptrdiff_t m_Entity_nPriority = 0x1668; // int32
    constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x166c; // bool
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1670; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1674; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1678; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x167c; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1680; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1684; // int32
    constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1691; // bool
}

// C_FuncConveyor (size: 0xed0)
namespace C_FuncConveyor {
    constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0xe90; // Vector
    constexpr std::ptrdiff_t m_flTargetSpeed = 0xe9c; // float32
    constexpr std::ptrdiff_t m_nTransitionStartTick = 0xea0; // GameTick_t
    constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0xea4; // int32
    constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0xea8; // float32
    constexpr std::ptrdiff_t m_hConveyorModels = 0xeb0; // C_NetworkUtlVectorBase< CHandle< C_BaseEntity > >
    constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0xec8; // float32
    constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0xecc; // float32
}

// CCSPlayer_WeaponServices (size: 0x15d0)
namespace CCSPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_flNextAttack = 0xd0; // GameTime_t
    constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xd4; // bool
    constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xd5; // bool
    constexpr std::ptrdiff_t m_nOldTotalShootPositionHistoryCount = 0xd8; // uint32
    constexpr std::ptrdiff_t m_nOldTotalInputHistoryCount = 0x370; // uint32
    constexpr std::ptrdiff_t m_networkAnimTiming = 0x1588; // C_NetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x15a0; // bool
}

// C_PhysMagnet (size: 0x1198)
namespace C_PhysMagnet {
    constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0x1168; // CUtlVector< int32 >
    constexpr std::ptrdiff_t m_aAttachedObjects = 0x1180; // CUtlVector< CHandle< C_BaseEntity > >
}

// CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable (size: 0x698)
namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
}

// C_Breakable (size: 0xe88)
namespace C_Breakable {
}

// C_PlantedC4 (size: 0x16e0)
namespace C_PlantedC4 {
    constexpr std::ptrdiff_t m_bBombTicking = 0x1170; // bool
    constexpr std::ptrdiff_t m_nBombSite = 0x1174; // int32
    constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x1178; // int32
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1180; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_flNextGlow = 0x1198; // GameTime_t
    constexpr std::ptrdiff_t m_flNextBeep = 0x119c; // GameTime_t
    constexpr std::ptrdiff_t m_flC4Blow = 0x11a0; // GameTime_t
    constexpr std::ptrdiff_t m_bCannotBeDefused = 0x11a4; // bool
    constexpr std::ptrdiff_t m_bHasExploded = 0x11a5; // bool
    constexpr std::ptrdiff_t m_flTimerLength = 0x11a8; // float32
    constexpr std::ptrdiff_t m_bBeingDefused = 0x11ac; // bool
    constexpr std::ptrdiff_t m_bTriggerWarning = 0x11b0; // float32
    constexpr std::ptrdiff_t m_bExplodeWarning = 0x11b4; // float32
    constexpr std::ptrdiff_t m_bC4Activated = 0x11b8; // bool
    constexpr std::ptrdiff_t m_bTenSecWarning = 0x11b9; // bool
    constexpr std::ptrdiff_t m_flDefuseLength = 0x11bc; // float32
    constexpr std::ptrdiff_t m_flDefuseCountDown = 0x11c0; // GameTime_t
    constexpr std::ptrdiff_t m_bBombDefused = 0x11c4; // bool
    constexpr std::ptrdiff_t m_hBombDefuser = 0x11c8; // CHandle< C_CSPlayerPawn >
    constexpr std::ptrdiff_t m_AttributeManager = 0x11d0; // C_AttributeContainer
    constexpr std::ptrdiff_t m_hDefuserMultimeter = 0x16a0; // CHandle< C_Multimeter >
    constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0x16a4; // GameTime_t
    constexpr std::ptrdiff_t m_bRadarFlash = 0x16a8; // bool
    constexpr std::ptrdiff_t m_pBombDefuser = 0x16ac; // CHandle< C_CSPlayerPawn >
    constexpr std::ptrdiff_t m_fLastDefuseTime = 0x16b0; // GameTime_t
    constexpr std::ptrdiff_t m_pPredictionOwner = 0x16b8; // CBasePlayerController*
    constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0x16c0; // Vector
    constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0x16cc; // QAngle
    constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0x16d8; // float32
}

// CCSGO_WingmanIntroCharacterPosition (size: 0x13a8)
namespace CCSGO_WingmanIntroCharacterPosition {
}

// CFilterName (size: 0x648)
namespace CFilterName {
    constexpr std::ptrdiff_t m_iFilterName = 0x640; // CUtlSymbolLarge
}

// C_RagdollProp (size: 0x11f8)
namespace C_RagdollProp {
    constexpr std::ptrdiff_t m_ragEnabled = 0x1170; // C_NetworkUtlVectorBase< bool >
    constexpr std::ptrdiff_t m_ragPos = 0x1188; // C_NetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_ragAngles = 0x11a0; // C_NetworkUtlVectorBase< QAngle >
    constexpr std::ptrdiff_t m_flBlendWeight = 0x11b8; // float32
    constexpr std::ptrdiff_t m_hRagdollSource = 0x11bc; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_iEyeAttachment = 0x11c0; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0x11c4; // float32
    constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0x11c8; // CUtlVector< int32 >
    constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0x11e0; // CUtlVector< int32 >
}

// CPulse_CallInfo (size: 0x58)
namespace CPulse_CallInfo {
    constexpr std::ptrdiff_t m_PortName = 0x0; // PulseSymbol_t
    constexpr std::ptrdiff_t m_nEditorNodeID = 0x10; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_RegisterMap = 0x18; // PulseRegisterMap_t
    constexpr std::ptrdiff_t m_CallMethodID = 0x48; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_nSrcChunk = 0x4c; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nSrcInstruction = 0x50; // int32
}

// C_MapPreviewParticleSystem (size: 0x1438)
namespace C_MapPreviewParticleSystem {
}

// CBaseAnimGraph (size: 0x1168)
namespace CBaseAnimGraph {
    constexpr std::ptrdiff_t m_graphControllerManager = 0xe88; // CAnimGraphControllerManager
    constexpr std::ptrdiff_t m_pMainGraphController = 0xf38; // CAnimGraphControllerBase*
    constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0xf40; // bool
    constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0xf42; // bool
    constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0xf50; // bool
    constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0xf54; // float32
    constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0xf58; // VectorWS
    constexpr std::ptrdiff_t m_nAnimGraphUpdateId = 0xf64; // uint32
    constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0xf68; // bool
    constexpr std::ptrdiff_t m_vecForce = 0xf6c; // Vector
    constexpr std::ptrdiff_t m_nForceBone = 0xf78; // int32
    constexpr std::ptrdiff_t m_pClientsideRagdoll = 0xf80; // CBaseAnimGraph*
    constexpr std::ptrdiff_t m_bBuiltRagdoll = 0xf88; // bool
    constexpr std::ptrdiff_t m_RagdollPose = 0xfa0; // PhysicsRagdollPose_t
    constexpr std::ptrdiff_t m_bRagdollEnabled = 0xfe8; // bool
    constexpr std::ptrdiff_t m_bRagdollClientSide = 0xfe9; // bool
    constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0xff8; // bool
}

// CPulseCell_InlineNodeSkipSelector (size: 0xb0)
namespace CPulseCell_InlineNodeSkipSelector {
    constexpr std::ptrdiff_t m_nFlowNodeID = 0x48; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_bAnd = 0x4c; // bool
    constexpr std::ptrdiff_t m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
    constexpr std::ptrdiff_t m_FailOutflow = 0x68; // CPulse_OutflowConnection
}

// C_LightEntity (size: 0xe90)
namespace C_LightEntity {
    constexpr std::ptrdiff_t m_CLightComponent = 0xe88; // CLightComponent*
}

// C_WeaponM249 (size: 0x1f70)
namespace C_WeaponM249 {
}

// C_LocalTempEntity (size: 0x1210)
namespace C_LocalTempEntity {
    constexpr std::ptrdiff_t flags = 0x1168; // int32
    constexpr std::ptrdiff_t die = 0x116c; // GameTime_t
    constexpr std::ptrdiff_t m_flFrameMax = 0x1170; // float32
    constexpr std::ptrdiff_t x = 0x1174; // float32
    constexpr std::ptrdiff_t y = 0x1178; // float32
    constexpr std::ptrdiff_t fadeSpeed = 0x117c; // float32
    constexpr std::ptrdiff_t bounceFactor = 0x1180; // float32
    constexpr std::ptrdiff_t hitSound = 0x1184; // int32
    constexpr std::ptrdiff_t priority = 0x1188; // int32
    constexpr std::ptrdiff_t tentOffset = 0x118c; // Vector
    constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0x1198; // QAngle
    constexpr std::ptrdiff_t tempent_renderamt = 0x11a4; // int32
    constexpr std::ptrdiff_t m_vecNormal = 0x11a8; // Vector
    constexpr std::ptrdiff_t m_flSpriteScale = 0x11b4; // float32
    constexpr std::ptrdiff_t m_nFlickerFrame = 0x11b8; // int32
    constexpr std::ptrdiff_t m_flFrameRate = 0x11bc; // float32
    constexpr std::ptrdiff_t m_flFrame = 0x11c0; // float32
    constexpr std::ptrdiff_t m_pszImpactEffect = 0x11c8; // char*
    constexpr std::ptrdiff_t m_pszParticleEffect = 0x11d0; // char*
    constexpr std::ptrdiff_t m_bParticleCollision = 0x11d8; // bool
    constexpr std::ptrdiff_t m_iLastCollisionFrame = 0x11dc; // int32
    constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0x11e0; // Vector
    constexpr std::ptrdiff_t m_vecTempEntVelocity = 0x11ec; // Vector
    constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0x11f8; // Vector
    constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0x1204; // Vector
}

// C_WeaponTaser (size: 0x1f80)
namespace C_WeaponTaser {
    constexpr std::ptrdiff_t m_fFireTime = 0x1f70; // GameTime_t
    constexpr std::ptrdiff_t m_nLastAttackTick = 0x1f74; // int32
}

// C_PointEntity (size: 0x608)
namespace C_PointEntity {
}

// C_SingleplayRules (size: 0x40)
namespace C_SingleplayRules {
}

// CLogicalEntity (size: 0x608)
namespace CLogicalEntity {
}

// C_PrecipitationBlocker (size: 0xe88)
namespace C_PrecipitationBlocker {
}

// C_CSGO_CounterTerroristTeamIntroCamera (size: 0x698)
namespace C_CSGO_CounterTerroristTeamIntroCamera {
}

// C_SoundOpvarSetPathCornerEntity (size: 0x628)
namespace C_SoundOpvarSetPathCornerEntity {
}

// CPlayer_WeaponServices (size: 0xa8)
namespace CPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_hMyWeapons = 0x48; // C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > >
    constexpr std::ptrdiff_t m_hActiveWeapon = 0x60; // CHandle< C_BasePlayerWeapon >
    constexpr std::ptrdiff_t m_hLastWeapon = 0x64; // CHandle< C_BasePlayerWeapon >
    constexpr std::ptrdiff_t m_iAmmo = 0x68; // uint16[32]
}

// C_WeaponNegev (size: 0x1f70)
namespace C_WeaponNegev {
}

// C_WeaponFiveSeven (size: 0x1f70)
namespace C_WeaponFiveSeven {
}

// C_WeaponSawedoff (size: 0x1f40)
namespace C_WeaponSawedoff {
}

// C_TriggerVolume (size: 0xe88)
namespace C_TriggerVolume {
}

// CPulseCell_LimitCount (size: 0x50)
namespace CPulseCell_LimitCount {
    constexpr std::ptrdiff_t m_nLimitCount = 0x48; // int32
}

// CPulseCell_Step_CallExternalMethod (size: 0xc8)
namespace CPulseCell_Step_CallExternalMethod {
    constexpr std::ptrdiff_t m_MethodName = 0x48; // PulseSymbol_t
    constexpr std::ptrdiff_t m_GameBlackboard = 0x58; // PulseSymbol_t
    constexpr std::ptrdiff_t m_ExpectedArgs = 0x68; // CUtlLeanVector< CPulseRuntimeMethodArg >
    constexpr std::ptrdiff_t m_nAsyncCallMode = 0x78; // PulseMethodCallMode_t
    constexpr std::ptrdiff_t m_OnFinished = 0x80; // CPulse_ResumePoint
}

// C_WeaponMP9 (size: 0x1f70)
namespace C_WeaponMP9 {
}

// C_DynamicPropAlias_prop_dynamic_override (size: 0x13a0)
namespace C_DynamicPropAlias_prop_dynamic_override {
}

// CEnvSoundscapeTriggerable (size: 0x698)
namespace CEnvSoundscapeTriggerable {
}

// C_PlayerPing (size: 0x658)
namespace C_PlayerPing {
    constexpr std::ptrdiff_t m_hPlayer = 0x638; // CHandle< C_CSPlayerPawn >
    constexpr std::ptrdiff_t m_hPingedEntity = 0x63c; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_iType = 0x640; // int32
    constexpr std::ptrdiff_t m_bUrgent = 0x644; // bool
    constexpr std::ptrdiff_t m_szPlaceName = 0x645; // char[18]
}

// C_AK47 (size: 0x1f70)
namespace C_AK47 {
}

// C_CSGO_MapPreviewCameraPathNode (size: 0x658)
namespace C_CSGO_MapPreviewCameraPathNode {
    constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x608; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nPathIndex = 0x610; // int32
    constexpr std::ptrdiff_t m_vInTangentLocal = 0x614; // Vector
    constexpr std::ptrdiff_t m_vOutTangentLocal = 0x620; // Vector
    constexpr std::ptrdiff_t m_flFOV = 0x62c; // float32
    constexpr std::ptrdiff_t m_flCameraSpeed = 0x630; // float32
    constexpr std::ptrdiff_t m_flEaseIn = 0x634; // float32
    constexpr std::ptrdiff_t m_flEaseOut = 0x638; // float32
    constexpr std::ptrdiff_t m_vInTangentWorld = 0x63c; // Vector
    constexpr std::ptrdiff_t m_vOutTangentWorld = 0x648; // Vector
}

// C_CSPlayerResource (size: 0x6a0)
namespace C_CSPlayerResource {
    constexpr std::ptrdiff_t m_bHostageAlive = 0x608; // bool[12]
    constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x614; // bool[12]
    constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x620; // CEntityIndex[12]
    constexpr std::ptrdiff_t m_bombsiteCenterA = 0x650; // Vector
    constexpr std::ptrdiff_t m_bombsiteCenterB = 0x65c; // Vector
    constexpr std::ptrdiff_t m_hostageRescueX = 0x668; // int32[4]
    constexpr std::ptrdiff_t m_hostageRescueY = 0x678; // int32[4]
    constexpr std::ptrdiff_t m_hostageRescueZ = 0x688; // int32[4]
    constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x698; // bool
    constexpr std::ptrdiff_t m_foundGoalPositions = 0x699; // bool
}

// CSkyboxReference (size: 0x610)
namespace CSkyboxReference {
    constexpr std::ptrdiff_t m_worldGroupId = 0x608; // WorldGroupId_t
    constexpr std::ptrdiff_t m_hSkyCamera = 0x60c; // CHandle< C_SkyCamera >
}

// C_IncendiaryGrenade (size: 0x2000)
namespace C_IncendiaryGrenade {
}

// CFilterClass (size: 0x648)
namespace CFilterClass {
    constexpr std::ptrdiff_t m_iFilterClass = 0x640; // CUtlSymbolLarge
}

// C_PointCameraVFOV (size: 0x670)
namespace C_PointCameraVFOV {
    constexpr std::ptrdiff_t m_flVerticalFOV = 0x668; // float32
}

// C_PointCamera (size: 0x668)
namespace C_PointCamera {
    constexpr std::ptrdiff_t m_FOV = 0x608; // float32
    constexpr std::ptrdiff_t m_Resolution = 0x60c; // float32
    constexpr std::ptrdiff_t m_bFogEnable = 0x610; // bool
    constexpr std::ptrdiff_t m_FogColor = 0x611; // Color
    constexpr std::ptrdiff_t m_flFogStart = 0x618; // float32
    constexpr std::ptrdiff_t m_flFogEnd = 0x61c; // float32
    constexpr std::ptrdiff_t m_flFogMaxDensity = 0x620; // float32
    constexpr std::ptrdiff_t m_bActive = 0x624; // bool
    constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x625; // bool
    constexpr std::ptrdiff_t m_flAspectRatio = 0x628; // float32
    constexpr std::ptrdiff_t m_bNoSky = 0x62c; // bool
    constexpr std::ptrdiff_t m_fBrightness = 0x630; // float32
    constexpr std::ptrdiff_t m_flZFar = 0x634; // float32
    constexpr std::ptrdiff_t m_flZNear = 0x638; // float32
    constexpr std::ptrdiff_t m_bCanHLTVUse = 0x63c; // bool
    constexpr std::ptrdiff_t m_bAlignWithParent = 0x63d; // bool
    constexpr std::ptrdiff_t m_bDofEnabled = 0x63e; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x640; // float32
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x644; // float32
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x648; // float32
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x64c; // float32
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x650; // float32
    constexpr std::ptrdiff_t m_TargetFOV = 0x654; // float32
    constexpr std::ptrdiff_t m_DegreesPerSecond = 0x658; // float32
    constexpr std::ptrdiff_t m_bIsOn = 0x65c; // bool
    constexpr std::ptrdiff_t m_pNext = 0x660; // C_PointCamera*
}

// CPathWithDynamicNodes (size: 0x750)
namespace CPathWithDynamicNodes {
    constexpr std::ptrdiff_t m_vecPathNodes = 0x710; // C_NetworkUtlVectorBase< CHandle< CPathNode > >
    constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x730; // CTransform
}

// CBaseFilter (size: 0x640)
namespace CBaseFilter {
    constexpr std::ptrdiff_t m_bNegated = 0x608; // bool
    constexpr std::ptrdiff_t m_OnPass = 0x610; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFail = 0x628; // CEntityIOOutput
}

// WeaponPurchaseTracker_t (size: 0x70)
namespace WeaponPurchaseTracker_t {
    constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t >
}

// PulseObservableBoolExpression_t (size: 0x78)
namespace PulseObservableBoolExpression_t {
    constexpr std::ptrdiff_t m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_DependentObservableVars = 0x48; // CUtlVector< PulseRuntimeVarIndex_t >
    constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60; // CUtlVector< PulseRuntimeBlackboardReferenceIndex_t >
}

// CMapInfo (size: 0x638)
namespace CMapInfo {
    constexpr std::ptrdiff_t m_iBuyingStatus = 0x608; // int32
    constexpr std::ptrdiff_t m_flBombRadius = 0x60c; // float32
    constexpr std::ptrdiff_t m_iPetPopulation = 0x610; // int32
    constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x614; // bool
    constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x615; // bool
    constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x618; // float32
    constexpr std::ptrdiff_t m_iHostageCount = 0x61c; // int32
    constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x620; // bool
    constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x621; // bool
    constexpr std::ptrdiff_t m_flEnvRainStrength = 0x624; // float32
    constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x628; // float32
    constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x62c; // float32
    constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x630; // float32
    constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x634; // float32
}

// C_CSGO_EndOfMatchCamera (size: 0x698)
namespace C_CSGO_EndOfMatchCamera {
}

// C_BaseGrenade (size: 0x13a0)
namespace C_BaseGrenade {
    constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1350; // bool
    constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1351; // bool
    constexpr std::ptrdiff_t m_bIsLive = 0x1352; // bool
    constexpr std::ptrdiff_t m_DmgRadius = 0x1354; // float32
    constexpr std::ptrdiff_t m_flDetonateTime = 0x1358; // GameTime_t
    constexpr std::ptrdiff_t m_flWarnAITime = 0x135c; // float32
    constexpr std::ptrdiff_t m_flDamage = 0x1360; // float32
    constexpr std::ptrdiff_t m_iszBounceSound = 0x1368; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExplosionSound = 0x1370; // CUtlString
    constexpr std::ptrdiff_t m_hThrower = 0x137c; // CHandle< C_CSPlayerPawn >
    constexpr std::ptrdiff_t m_flNextAttack = 0x1394; // GameTime_t
    constexpr std::ptrdiff_t m_hOriginalThrower = 0x1398; // CHandle< C_CSPlayerPawn >
}

// C_PlayerSprayDecal (size: 0xf98)
namespace C_PlayerSprayDecal {
    constexpr std::ptrdiff_t m_nUniqueID = 0xe88; // int32
    constexpr std::ptrdiff_t m_unAccountID = 0xe8c; // uint32
    constexpr std::ptrdiff_t m_unTraceID = 0xe90; // uint32
    constexpr std::ptrdiff_t m_rtGcTime = 0xe94; // uint32
    constexpr std::ptrdiff_t m_vecEndPos = 0xe98; // Vector
    constexpr std::ptrdiff_t m_vecStart = 0xea4; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0xeb0; // Vector
    constexpr std::ptrdiff_t m_vecNormal = 0xebc; // Vector
    constexpr std::ptrdiff_t m_nPlayer = 0xec8; // int32
    constexpr std::ptrdiff_t m_nEntity = 0xecc; // int32
    constexpr std::ptrdiff_t m_nHitbox = 0xed0; // int32
    constexpr std::ptrdiff_t m_flCreationTime = 0xed4; // float32
    constexpr std::ptrdiff_t m_nTintID = 0xed8; // int32
    constexpr std::ptrdiff_t m_nVersion = 0xedc; // uint8
    constexpr std::ptrdiff_t m_ubSignature = 0xedd; // uint8[128]
    constexpr std::ptrdiff_t m_SprayRenderHelper = 0xf68; // CPlayerSprayDecalRenderHelper
}

// CEntityIdentity (size: 0x70)
namespace CEntityIdentity {
    constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32
    constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flags = 0x30; // uint32
    constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
    constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3c; // uint32
    constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
    constexpr std::ptrdiff_t m_pAttributes = 0x48; // CEntityAttributeTable*
    constexpr std::ptrdiff_t m_pPrev = 0x50; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pNext = 0x58; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pPrevByClass = 0x60; // CEntityIdentity*
    constexpr std::ptrdiff_t m_pNextByClass = 0x68; // CEntityIdentity*
}

// CPulseCell_LimitCount::Criteria_t (size: 0x1)
namespace CPulseCell_LimitCount_Criteria_t {
    constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
}

// C_CS2HudModelArms (size: 0x1340)
namespace C_CS2HudModelArms {
}

// CBasePlayerVData (size: 0x178)
namespace CBasePlayerVData {
    constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108; // CSkillFloat
    constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118; // CSkillFloat
    constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128; // CSkillFloat
    constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138; // CSkillFloat
    constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148; // CSkillFloat
    constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158; // float32
    constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15c; // float32
    constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160; // int32
    constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164; // int32
    constexpr std::ptrdiff_t m_nWaterSpeed = 0x168; // int32
    constexpr std::ptrdiff_t m_flUseRange = 0x16c; // float32
    constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170; // float32
    constexpr std::ptrdiff_t m_flCrouchTime = 0x174; // float32
}

// C_LightSpotEntity (size: 0xe90)
namespace C_LightSpotEntity {
}

// CCSGameModeRules_Deathmatch (size: 0x40)
namespace CCSGameModeRules_Deathmatch {
    constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30; // GameTime_t
    constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34; // float32
    constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38; // CUtlString
}

// CPulseCell_CursorQueue (size: 0xa0)
namespace CPulseCell_CursorQueue {
    constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98; // int32
}

// CPulseCell_Value_RandomFloat (size: 0x48)
namespace CPulseCell_Value_RandomFloat {
}

// CPulseExecCursor (size: 0xd0)
namespace CPulseExecCursor {
}

// C_Sprite (size: 0xf00)
namespace C_Sprite {
    constexpr std::ptrdiff_t m_hSpriteMaterial = 0xe88; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hAttachedToEntity = 0xe90; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_nAttachment = 0xe94; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flSpriteFramerate = 0xe98; // float32
    constexpr std::ptrdiff_t m_flFrame = 0xe9c; // float32
    constexpr std::ptrdiff_t m_flDieTime = 0xea0; // GameTime_t
    constexpr std::ptrdiff_t m_nBrightness = 0xeb0; // uint32
    constexpr std::ptrdiff_t m_flBrightnessDuration = 0xeb4; // float32
    constexpr std::ptrdiff_t m_flSpriteScale = 0xeb8; // float32
    constexpr std::ptrdiff_t m_flScaleDuration = 0xebc; // float32
    constexpr std::ptrdiff_t m_bWorldSpaceScale = 0xec0; // bool
    constexpr std::ptrdiff_t m_flGlowProxySize = 0xec4; // float32
    constexpr std::ptrdiff_t m_flHDRColorScale = 0xec8; // float32
    constexpr std::ptrdiff_t m_flLastTime = 0xecc; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxFrame = 0xed0; // float32
    constexpr std::ptrdiff_t m_flStartScale = 0xed4; // float32
    constexpr std::ptrdiff_t m_flDestScale = 0xed8; // float32
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0xedc; // GameTime_t
    constexpr std::ptrdiff_t m_nStartBrightness = 0xee0; // int32
    constexpr std::ptrdiff_t m_nDestBrightness = 0xee4; // int32
    constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0xee8; // GameTime_t
    constexpr std::ptrdiff_t m_nSpriteWidth = 0xef8; // int32
    constexpr std::ptrdiff_t m_nSpriteHeight = 0xefc; // int32
}

// C_CsmFovOverride (size: 0x618)
namespace C_CsmFovOverride {
    constexpr std::ptrdiff_t m_cameraName = 0x608; // CUtlString
    constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x610; // float32
}

// C_WeaponGlock (size: 0x1f70)
namespace C_WeaponGlock {
}

// C_PhysicsProp (size: 0x12e0)
namespace C_PhysicsProp {
    constexpr std::ptrdiff_t m_bAwake = 0x12d0; // bool
}

// CFilterTeam (size: 0x648)
namespace CFilterTeam {
    constexpr std::ptrdiff_t m_iFilterTeam = 0x640; // int32
}

// CInfoInteraction (size: 0x658)
namespace CInfoInteraction {
    constexpr std::ptrdiff_t m_strSlotEntityName = 0x608; // CUtlSymbolLarge[8]
    constexpr std::ptrdiff_t m_strInteractVData = 0x648; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flInteractRadius = 0x650; // float32
}

// CBasePlayerWeaponVData (size: 0x440)
namespace CBasePlayerWeaponVData {
    constexpr std::ptrdiff_t m_szWorldModel = 0x28; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x108; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > >
    constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x1e8; // bool
    constexpr std::ptrdiff_t m_bAllowFlipping = 0x1e9; // bool
    constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x1f0; // CAttachmentNameSymbolWithStorage
    constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x210; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys
    constexpr std::ptrdiff_t m_szMuzzleFlashParticleConfig = 0x2f0; // CUtlString
    constexpr std::ptrdiff_t m_szBarrelSmokeParticle = 0x2f8; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSys
    constexpr std::ptrdiff_t m_nMuzzleSmokeShotThreshold = 0x3d8; // uint8
    constexpr std::ptrdiff_t m_flMuzzleSmokeTimeout = 0x3dc; // float32
    constexpr std::ptrdiff_t m_flMuzzleSmokeDecrementRate = 0x3e0; // float32
    constexpr std::ptrdiff_t m_bGenerateMuzzleLight = 0x3e4; // bool
    constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x3e5; // bool
    constexpr std::ptrdiff_t m_iFlags = 0x3e6; // ItemFlagTypes_t
    constexpr std::ptrdiff_t m_iWeight = 0x3e8; // int32
    constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x3ec; // bool
    constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x3ed; // bool
    constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x3ee; // AmmoIndex_t
    constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x3ef; // AmmoIndex_t
    constexpr std::ptrdiff_t m_iMaxClip1 = 0x3f0; // int32
    constexpr std::ptrdiff_t m_iMaxClip2 = 0x3f4; // int32
    constexpr std::ptrdiff_t m_iDefaultClip1 = 0x3f8; // int32
    constexpr std::ptrdiff_t m_iDefaultClip2 = 0x3fc; // int32
    constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x400; // bool
    constexpr std::ptrdiff_t m_bTreatAsSingleClip = 0x401; // bool
    constexpr std::ptrdiff_t m_bKeepLoadedAmmo = 0x402; // bool
    constexpr std::ptrdiff_t m_iRumbleEffect = 0x404; // RumbleEffect_t
    constexpr std::ptrdiff_t m_flDropSpeed = 0x408; // float32
    constexpr std::ptrdiff_t m_iSlot = 0x40c; // int32
    constexpr std::ptrdiff_t m_iPosition = 0x410; // int32
    constexpr std::ptrdiff_t m_aShootSounds = 0x418; // CUtlOrderedMap< WeaponSound_t, CSoundEventName >
}

// C_CSGO_EndOfMatchLineupEnd (size: 0x608)
namespace C_CSGO_EndOfMatchLineupEnd {
}

// C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel (size: 0x3fa0)
namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
}

// C_SmokeGrenade (size: 0x2000)
namespace C_SmokeGrenade {
}

// CInfoParticleTarget (size: 0x608)
namespace CInfoParticleTarget {
}

// CCSPlayer_DamageReactServices (size: 0x50)
namespace CCSPlayer_DamageReactServices {
}

// C_PointClientUIWorldPanel (size: 0x10e0)
namespace C_PointClientUIWorldPanel {
    constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0xec0; // bool
    constexpr std::ptrdiff_t m_bMoveViewToPlayerNextThink = 0xec1; // bool
    constexpr std::ptrdiff_t m_bCheckCSSClasses = 0xec2; // bool
    constexpr std::ptrdiff_t m_anchorDeltaTransform = 0xed0; // CTransform
    constexpr std::ptrdiff_t m_pOffScreenIndicator = 0x1060; // CPointOffScreenIndicatorUi*
    constexpr std::ptrdiff_t m_bIgnoreInput = 0x1088; // bool
    constexpr std::ptrdiff_t m_bLit = 0x1089; // bool
    constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x108a; // bool
    constexpr std::ptrdiff_t m_flWidth = 0x108c; // float32
    constexpr std::ptrdiff_t m_flHeight = 0x1090; // float32
    constexpr std::ptrdiff_t m_flDPI = 0x1094; // float32
    constexpr std::ptrdiff_t m_flInteractDistance = 0x1098; // float32
    constexpr std::ptrdiff_t m_flDepthOffset = 0x109c; // float32
    constexpr std::ptrdiff_t m_unOwnerContext = 0x10a0; // uint32
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0x10a4; // uint32
    constexpr std::ptrdiff_t m_unVerticalAlign = 0x10a8; // uint32
    constexpr std::ptrdiff_t m_unOrientation = 0x10ac; // uint32
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x10b0; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x10b8; // C_NetworkUtlVectorBase< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_bOpaque = 0x10d0; // bool
    constexpr std::ptrdiff_t m_bNoDepth = 0x10d1; // bool
    constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0x10d2; // bool
    constexpr std::ptrdiff_t m_bRenderBackface = 0x10d3; // bool
    constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x10d4; // bool
    constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x10d5; // bool
    constexpr std::ptrdiff_t m_bGrabbable = 0x10d6; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x10d7; // bool
    constexpr std::ptrdiff_t m_bDisableMipGen = 0x10d8; // bool
    constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x10dc; // int32
}

// C_EntityFlame (size: 0x650)
namespace C_EntityFlame {
    constexpr std::ptrdiff_t m_hEntAttached = 0x608; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_hOldAttached = 0x630; // CHandle< C_BaseEntity >
    constexpr std::ptrdiff_t m_bCheapEffect = 0x634; // bool
}

// CBasePlayerController (size: 0x7f8)
namespace CBasePlayerController {
    constexpr std::ptrdiff_t m_CommandContext = 0x610; // C_CommandContext
    constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x6b8; // uint64
    constexpr std::ptrdiff_t m_nTickBase = 0x6c0; // uint32
    constexpr std::ptrdiff_t m_hPawn = 0x6c4; // CHandle< C_BasePlayerPawn >
    constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x6c8; // bool
    constexpr std::ptrdiff_t m_hPredictedPawn = 0x6cc; // CHandle< C_BasePlayerPawn >
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x6d0; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_hSplitOwner = 0x6d4; // CHandle< CBasePlayerController >
    constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x6d8; // CUtlVector< CHandle< CBasePlayerController > >
    constexpr std::ptrdiff_t m_bIsHLTV = 0x6f0; // bool
    constexpr std::ptrdiff_t m_iConnected = 0x6f4; // PlayerConnectedState
    constexpr std::ptrdiff_t m_iszPlayerName = 0x6f8; // char[128]
    constexpr std::ptrdiff_t m_steamID = 0x780; // uint64
    constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x788; // bool
    constexpr std::ptrdiff_t m_bNoClipEnabled = 0x789; // bool
    constexpr std::ptrdiff_t m_iDesiredFOV = 0x78c; // uint32
}

// C_CSGO_EndOfMatchLineupEndpoint (size: 0x608)
namespace C_CSGO_EndOfMatchLineupEndpoint {
}

}
}
}

// Generated using CS2 ULTIMATE DUMPER
// 2026-02-09 22:45:12

#pragma once

#include <cstddef>

// Module: server.dll.dll
// Classes: 726

namespace cs2_dumper {
namespace schemas {
namespace server_dll {

// CWeaponNOVA (size: 0x1130)
namespace CWeaponNOVA {
}

// CPointWorldText (size: 0x9e0)
namespace CPointWorldText {
    constexpr std::ptrdiff_t m_messageText = 0x730; // char[512]
    constexpr std::ptrdiff_t m_FontName = 0x930; // char[64]
    constexpr std::ptrdiff_t m_BackgroundMaterialName = 0x970; // char[64]
    constexpr std::ptrdiff_t m_bEnabled = 0x9b0; // bool
    constexpr std::ptrdiff_t m_bFullbright = 0x9b1; // bool
    constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x9b4; // float32
    constexpr std::ptrdiff_t m_flFontSize = 0x9b8; // float32
    constexpr std::ptrdiff_t m_flDepthOffset = 0x9bc; // float32
    constexpr std::ptrdiff_t m_bDrawBackground = 0x9c0; // bool
    constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0x9c4; // float32
    constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0x9c8; // float32
    constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0x9cc; // float32
    constexpr std::ptrdiff_t m_Color = 0x9d0; // Color
    constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x9d4; // PointWorldTextJustifyHorizontal_t
    constexpr std::ptrdiff_t m_nJustifyVertical = 0x9d8; // PointWorldTextJustifyVertical_t
    constexpr std::ptrdiff_t m_nReorientMode = 0x9dc; // PointWorldTextReorientMode_t
}

// CAmbientGeneric (size: 0x550)
namespace CAmbientGeneric {
    constexpr std::ptrdiff_t m_radius = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flMaxRadius = 0x4ac; // float32
    constexpr std::ptrdiff_t m_iSoundLevel = 0x4b0; // soundlevel_t
    constexpr std::ptrdiff_t m_dpv = 0x4b4; // dynpitchvol_t
    constexpr std::ptrdiff_t m_fActive = 0x518; // bool
    constexpr std::ptrdiff_t m_fLooping = 0x519; // bool
    constexpr std::ptrdiff_t m_iszSound = 0x520; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sSourceEntName = 0x528; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSoundSource = 0x530; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x534; // CEntityIndex
}

// CEnvEntityMaker (size: 0x528)
namespace CEnvEntityMaker {
    constexpr std::ptrdiff_t m_vecEntityMins = 0x4a8; // Vector
    constexpr std::ptrdiff_t m_vecEntityMaxs = 0x4b4; // Vector
    constexpr std::ptrdiff_t m_hCurrentInstance = 0x4c0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hCurrentBlocker = 0x4c4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x4c8; // Vector
    constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x4d4; // QAngle
    constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x4e0; // float32
    constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x4e4; // float32
    constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x4e8; // bool
    constexpr std::ptrdiff_t m_iszTemplate = 0x4f0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x4f8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x510; // CEntityIOOutput
}

// CPulseGraphInstance_GameBlackboard (size: 0x1c8)
namespace CPulseGraphInstance_GameBlackboard {
}

// CPointEntity (size: 0x4a8)
namespace CPointEntity {
}

// CFilterEnemy (size: 0x500)
namespace CFilterEnemy {
    constexpr std::ptrdiff_t m_iszEnemyName = 0x4e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRadius = 0x4e8; // float32
    constexpr std::ptrdiff_t m_flOuterRadius = 0x4ec; // float32
    constexpr std::ptrdiff_t m_nMaxSquadmatesPerEnemy = 0x4f0; // int32
    constexpr std::ptrdiff_t m_iszPlayerName = 0x4f8; // CUtlSymbolLarge
}

// CCSGO_WingmanIntroCounterTerroristPosition (size: 0xcc0)
namespace CCSGO_WingmanIntroCounterTerroristPosition {
}

// CPulseCell_WaitForCursorsWithTag (size: 0xa0)
namespace CPulseCell_WaitForCursorsWithTag {
    constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
    constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9c; // PulseCursorCancelPriority_t
}

// CFuncTrackAuto (size: 0x838)
namespace CFuncTrackAuto {
}

// CScriptedSequence (size: 0x6f0)
namespace CScriptedSequence {
    constexpr std::ptrdiff_t m_iszEntry = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPreIdle = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPlay = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPostIdle = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszModifierToAddOnPlay = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszNextScript = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntity = 0x4d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSyncGroup = 0x4e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nMoveTo = 0x4e8; // ScriptedMoveTo_t
    constexpr std::ptrdiff_t m_nMoveToGait = 0x4ec; // SharedMovementGait_t
    constexpr std::ptrdiff_t m_nHeldWeaponBehavior = 0x4f0; // ScriptedHeldWeaponBehavior_t
    constexpr std::ptrdiff_t m_nForcedCrouchState = 0x4f4; // ForcedCrouchState_t
    constexpr std::ptrdiff_t m_bIsPlayingPreIdle = 0x4f8; // bool
    constexpr std::ptrdiff_t m_bIsPlayingEntry = 0x4f9; // bool
    constexpr std::ptrdiff_t m_bIsPlayingAction = 0x4fa; // bool
    constexpr std::ptrdiff_t m_bIsPlayingPostIdle = 0x4fb; // bool
    constexpr std::ptrdiff_t m_bDontRotateOther = 0x4fc; // bool
    constexpr std::ptrdiff_t m_bIsRepeatable = 0x4fd; // bool
    constexpr std::ptrdiff_t m_bShouldLeaveCorpse = 0x4fe; // bool
    constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4ff; // bool
    constexpr std::ptrdiff_t m_bDisallowInterrupts = 0x500; // bool
    constexpr std::ptrdiff_t m_bCanOverrideNPCState = 0x501; // bool
    constexpr std::ptrdiff_t m_bDontTeleportAtEnd = 0x502; // bool
    constexpr std::ptrdiff_t m_bHighPriority = 0x503; // bool
    constexpr std::ptrdiff_t m_bHideDebugComplaints = 0x504; // bool
    constexpr std::ptrdiff_t m_bContinueOnDeath = 0x505; // bool
    constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x506; // bool
    constexpr std::ptrdiff_t m_bLoopActionSequence = 0x507; // bool
    constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x508; // bool
    constexpr std::ptrdiff_t m_bSynchPostIdles = 0x509; // bool
    constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x50a; // bool
    constexpr std::ptrdiff_t m_bIgnoreGravity = 0x50b; // bool
    constexpr std::ptrdiff_t m_bDisableNPCCollisions = 0x50c; // bool
    constexpr std::ptrdiff_t m_bKeepAnimgraphLockedPost = 0x50d; // bool
    constexpr std::ptrdiff_t m_bDontAddModifiers = 0x50e; // bool
    constexpr std::ptrdiff_t m_bDisableAimingWhileMoving = 0x50f; // bool
    constexpr std::ptrdiff_t m_bIgnoreRotation = 0x510; // bool
    constexpr std::ptrdiff_t m_flRadius = 0x514; // float32
    constexpr std::ptrdiff_t m_flRepeat = 0x518; // float32
    constexpr std::ptrdiff_t m_flPlayAnimFadeInTime = 0x51c; // float32
    constexpr std::ptrdiff_t m_flMoveInterpTime = 0x520; // float32
    constexpr std::ptrdiff_t m_flAngRate = 0x524; // float32
    constexpr std::ptrdiff_t m_flMoveSpeed = 0x528; // float32
    constexpr std::ptrdiff_t m_bWaitUntilMoveCompletesToStartAnimation = 0x52c; // bool
    constexpr std::ptrdiff_t m_nNotReadySequenceCount = 0x530; // int32
    constexpr std::ptrdiff_t m_startTime = 0x534; // GameTime_t
    constexpr std::ptrdiff_t m_bWaitForBeginSequence = 0x538; // bool
    constexpr std::ptrdiff_t m_saved_effects = 0x53c; // int32
    constexpr std::ptrdiff_t m_savedFlags = 0x540; // int32
    constexpr std::ptrdiff_t m_savedCollisionGroup = 0x544; // int32
    constexpr std::ptrdiff_t m_bInterruptable = 0x548; // bool
    constexpr std::ptrdiff_t m_sequenceStarted = 0x549; // bool
    constexpr std::ptrdiff_t m_bPositionRelativeToOtherEntity = 0x54a; // bool
    constexpr std::ptrdiff_t m_hTargetEnt = 0x54c; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hNextCine = 0x550; // CHandle< CScriptedSequence >
    constexpr std::ptrdiff_t m_bThinking = 0x554; // bool
    constexpr std::ptrdiff_t m_bInitiatedSelfDelete = 0x555; // bool
    constexpr std::ptrdiff_t m_bIsTeleportingDueToMoveTo = 0x556; // bool
    constexpr std::ptrdiff_t m_bAllowCustomInterruptConditions = 0x557; // bool
    constexpr std::ptrdiff_t m_hForcedTarget = 0x558; // CHandle< CBaseAnimGraph >
    constexpr std::ptrdiff_t m_bDontCancelOtherSequences = 0x55c; // bool
    constexpr std::ptrdiff_t m_bForceSynch = 0x55d; // bool
    constexpr std::ptrdiff_t m_bPreventUpdateYawOnFinish = 0x55e; // bool
    constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x55f; // bool
    constexpr std::ptrdiff_t m_onDeathBehavior = 0x560; // ScriptedOnDeath_t
    constexpr std::ptrdiff_t m_ConflictResponse = 0x564; // ScriptedConflictResponse_t
    constexpr std::ptrdiff_t m_OnBeginSequence = 0x568; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnActionStartOrLoop = 0x580; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndSequence = 0x598; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPostIdleEndSequence = 0x5b0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCancelSequence = 0x5c8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCancelFailedSequence = 0x5e0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnScriptEvent = 0x5f8; // CEntityIOOutput[8]
    constexpr std::ptrdiff_t m_matOtherToMain = 0x6c0; // CTransform
    constexpr std::ptrdiff_t m_hInteractionMainEntity = 0x6e0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x6e4; // int32
    constexpr std::ptrdiff_t m_bSkipFadeIn = 0x6e8; // bool
}

// CFogTrigger (size: 0x8f8)
namespace CFogTrigger {
    constexpr std::ptrdiff_t m_fog = 0x890; // fogparams_t
}

// CInfoTeleportDestination (size: 0x4a8)
namespace CInfoTeleportDestination {
}

// CPointBroadcastClientCommand (size: 0x4a8)
namespace CPointBroadcastClientCommand {
}

// CCSPlayer_PingServices (size: 0x60)
namespace CCSPlayer_PingServices {
    constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x48; // GameTime_t[5]
    constexpr std::ptrdiff_t m_hPlayerPing = 0x5c; // CHandle< CPlayerPing >
}

// CHEGrenade (size: 0x1170)
namespace CHEGrenade {
}

// CPhysicsSpring (size: 0x4f0)
namespace CPhysicsSpring {
    constexpr std::ptrdiff_t m_flFrequency = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flDampingRatio = 0x4b4; // float32
    constexpr std::ptrdiff_t m_flRestLength = 0x4b8; // float32
    constexpr std::ptrdiff_t m_nameAttachStart = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttachEnd = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_start = 0x4d0; // VectorWS
    constexpr std::ptrdiff_t m_end = 0x4dc; // VectorWS
    constexpr std::ptrdiff_t m_teleportTick = 0x4e8; // uint32
}

// CEnvMuzzleFlash (size: 0x4b8)
namespace CEnvMuzzleFlash {
    constexpr std::ptrdiff_t m_flScale = 0x4a8; // float32
    constexpr std::ptrdiff_t m_iszParentAttachment = 0x4b0; // CUtlSymbolLarge
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

// CWeaponRevolver (size: 0x1150)
namespace CWeaponRevolver {
}

// CFuncTrainControls (size: 0x730)
namespace CFuncTrainControls {
}

// CBtActionCombatPositioning (size: 0xb0)
namespace CBtActionCombatPositioning {
    constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_szIsAttackingKey = 0x80; // CUtlString
    constexpr std::ptrdiff_t m_ActionTimer = 0x88; // CountdownTimer
    constexpr std::ptrdiff_t m_bCrouching = 0xa0; // bool
}

// PredictedDamageTag_t (size: 0x40)
namespace PredictedDamageTag_t {
    constexpr std::ptrdiff_t nTagTick = 0x30; // GameTick_t
    constexpr std::ptrdiff_t flFlinchModSmall = 0x34; // float32
    constexpr std::ptrdiff_t flFlinchModLarge = 0x38; // float32
    constexpr std::ptrdiff_t flFriendlyFireDamageReductionRatio = 0x3c; // float32
}

// CFuncRetakeBarrier (size: 0xc70)
namespace CFuncRetakeBarrier {
}

// CTriggerBuoyancy (size: 0x9b0)
namespace CTriggerBuoyancy {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0x890; // CBuoyancyHelper
    constexpr std::ptrdiff_t m_flFluidDensity = 0x9a8; // float32
}

// CTonemapController2Alias_env_tonemap_controller2 (size: 0x4c0)
namespace CTonemapController2Alias_env_tonemap_controller2 {
}

// CPathTrack (size: 0x4f0)
namespace CPathTrack {
    constexpr std::ptrdiff_t m_pnext = 0x4a8; // CPathTrack*
    constexpr std::ptrdiff_t m_pprevious = 0x4b0; // CPathTrack*
    constexpr std::ptrdiff_t m_paltpath = 0x4b8; // CPathTrack*
    constexpr std::ptrdiff_t m_flRadius = 0x4c0; // float32
    constexpr std::ptrdiff_t m_length = 0x4c4; // float32
    constexpr std::ptrdiff_t m_altName = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nIterVal = 0x4d0; // int32
    constexpr std::ptrdiff_t m_eOrientationType = 0x4d4; // TrackOrientationType_t
    constexpr std::ptrdiff_t m_OnPass = 0x4d8; // CEntityIOOutput
}

// CPulseCell_Base (size: 0x48)
namespace CPulseCell_Base {
    constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
}

// CTriggerProximity (size: 0x8c8)
namespace CTriggerProximity {
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x890; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iszMeasureTarget = 0x898; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fRadius = 0x8a0; // float32
    constexpr std::ptrdiff_t m_nTouchers = 0x8a4; // int32
    constexpr std::ptrdiff_t m_NearestEntityDistance = 0x8a8; // CEntityOutputTemplate< float32, float32 >
}

// CTankTrainAI (size: 0x4e8)
namespace CTankTrainAI {
    constexpr std::ptrdiff_t m_hTrain = 0x4a8; // CHandle< CFuncTrackTrain >
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4ac; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_soundPlaying = 0x4b0; // int32
    constexpr std::ptrdiff_t m_startSoundName = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_engineSoundName = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_movementSoundName = 0x4d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_targetEntityName = 0x4e0; // CUtlSymbolLarge
}

// CGameText (size: 0x760)
namespace CGameText {
    constexpr std::ptrdiff_t m_iszMessage = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_textParms = 0x748; // hudtextparms_t
}

// CGameEnd (size: 0x740)
namespace CGameEnd {
}

// CInfoDeathmatchSpawn (size: 0x4b8)
namespace CInfoDeathmatchSpawn {
}

// CCSPlayerController_InventoryServices (size: 0xfe0)
namespace CCSPlayerController_InventoryServices {
    constexpr std::ptrdiff_t m_unMusicID = 0x40; // uint16
    constexpr std::ptrdiff_t m_rank = 0x44; // MedalRank_t[6]
    constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5c; // int32
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60; // int32
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64; // int32
    constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68; // int32
    constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6c; // int32
    constexpr std::ptrdiff_t m_unEquippedPlayerSprayIDs = 0xf48; // uint32[1]
    constexpr std::ptrdiff_t m_unCurrentLoadoutHash = 0xf50; // uint64
    constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0xf58; // CUtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t >
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

// CPulse_ResumePoint (size: 0x48)
namespace CPulse_ResumePoint {
}

// CBaseFlex (size: 0xab0)
namespace CBaseFlex {
    constexpr std::ptrdiff_t m_flexWeight = 0xa20; // CNetworkUtlVectorBase< float32 >
    constexpr std::ptrdiff_t m_vLookTargetPosition = 0xa38; // VectorWS
    constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0xa98; // GameTime_t
    constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0xa9c; // GameTime_t
    constexpr std::ptrdiff_t m_nNextSceneEventId = 0xaa0; // SceneEventId_t
    constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0xaa4; // bool
}

// CTriggerFan (size: 0x950)
namespace CTriggerFan {
    constexpr std::ptrdiff_t m_vFanOriginOffset = 0x890; // Vector
    constexpr std::ptrdiff_t m_vDirection = 0x89c; // Vector
    constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x8a8; // bool
    constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x8a9; // bool
    constexpr std::ptrdiff_t m_qNoiseDelta = 0x8b0; // Quaternion
    constexpr std::ptrdiff_t m_hInfoFan = 0x8c0; // CHandle< CInfoFan >
    constexpr std::ptrdiff_t m_flForce = 0x8c4; // float32
    constexpr std::ptrdiff_t m_bFalloff = 0x8c8; // bool
    constexpr std::ptrdiff_t m_RampTimer = 0x8d0; // CountdownTimer
    constexpr std::ptrdiff_t m_vFanOriginWS = 0x8e8; // VectorWS
    constexpr std::ptrdiff_t m_vFanOriginLS = 0x8f4; // Vector
    constexpr std::ptrdiff_t m_vFanEndLS = 0x900; // Vector
    constexpr std::ptrdiff_t m_vNoiseDirectionTarget = 0x90c; // Vector
    constexpr std::ptrdiff_t m_iszInfoFan = 0x918; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRopeForceScale = 0x920; // float32
    constexpr std::ptrdiff_t m_flParticleForceScale = 0x924; // float32
    constexpr std::ptrdiff_t m_flPlayerForce = 0x928; // float32
    constexpr std::ptrdiff_t m_bPlayerWindblock = 0x92c; // bool
    constexpr std::ptrdiff_t m_flNPCForce = 0x930; // float32
    constexpr std::ptrdiff_t m_flRampTime = 0x934; // float32
    constexpr std::ptrdiff_t m_fNoiseDegrees = 0x938; // float32
    constexpr std::ptrdiff_t m_fNoiseSpeed = 0x93c; // float32
    constexpr std::ptrdiff_t m_bPushPlayer = 0x940; // bool
    constexpr std::ptrdiff_t m_bRampDown = 0x941; // bool
    constexpr std::ptrdiff_t m_nManagerFanIdx = 0x944; // int32
}

// CPhysHingeAlias_phys_hinge_local (size: 0x678)
namespace CPhysHingeAlias_phys_hinge_local {
}

// CLogicCase (size: 0x8f0)
namespace CLogicCase {
    constexpr std::ptrdiff_t m_nCase = 0x4a8; // CUtlSymbolLarge[32]
    constexpr std::ptrdiff_t m_nShuffleCases = 0x5a8; // int32
    constexpr std::ptrdiff_t m_nLastShuffleCase = 0x5ac; // int32
    constexpr std::ptrdiff_t m_uchShuffleCaseMap = 0x5b0; // uint8[32]
    constexpr std::ptrdiff_t m_OnCase = 0x5d0; // CEntityIOOutput[32]
    constexpr std::ptrdiff_t m_OnDefault = 0x8d0; // CEntityOutputTemplate< CUtlString, char* >
}

// CInfoGameEventProxy (size: 0x4b8)
namespace CInfoGameEventProxy {
    constexpr std::ptrdiff_t m_iszEventName = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRange = 0x4b0; // float32
}

// CWeaponBizon (size: 0x1150)
namespace CWeaponBizon {
}

// CGamePlayerZone (size: 0x7a8)
namespace CGamePlayerZone {
    constexpr std::ptrdiff_t m_OnPlayerInZone = 0x738; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerOutZone = 0x750; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayersInCount = 0x768; // CEntityOutputTemplate< int32, int32 >
    constexpr std::ptrdiff_t m_PlayersOutCount = 0x788; // CEntityOutputTemplate< int32, int32 >
}

// CBaseToggle (size: 0x7b0)
namespace CBaseToggle {
    constexpr std::ptrdiff_t m_toggle_state = 0x730; // TOGGLE_STATE
    constexpr std::ptrdiff_t m_flMoveDistance = 0x734; // float32
    constexpr std::ptrdiff_t m_flWait = 0x738; // float32
    constexpr std::ptrdiff_t m_flLip = 0x73c; // float32
    constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0x740; // bool
    constexpr std::ptrdiff_t m_vecPosition1 = 0x744; // Vector
    constexpr std::ptrdiff_t m_vecPosition2 = 0x750; // Vector
    constexpr std::ptrdiff_t m_vecMoveAng = 0x75c; // QAngle
    constexpr std::ptrdiff_t m_vecAngle1 = 0x768; // QAngle
    constexpr std::ptrdiff_t m_vecAngle2 = 0x774; // QAngle
    constexpr std::ptrdiff_t m_flHeight = 0x780; // float32
    constexpr std::ptrdiff_t m_hActivator = 0x784; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_vecFinalDest = 0x788; // Vector
    constexpr std::ptrdiff_t m_vecFinalAngle = 0x794; // QAngle
    constexpr std::ptrdiff_t m_movementType = 0x7a0; // int32
    constexpr std::ptrdiff_t m_sMaster = 0x7a8; // CUtlSymbolLarge
}

// CPulseServerCursor (size: 0xe0)
namespace CPulseServerCursor {
    constexpr std::ptrdiff_t m_hActivator = 0xd8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hCaller = 0xdc; // CHandle< CBaseEntity >
}

// CPulseCell_PlaySequence (size: 0xf8)
namespace CPulseCell_PlaySequence {
    constexpr std::ptrdiff_t m_SequenceName = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_PulseAnimEvents = 0x50; // PulseNodeDynamicOutflows_t
    constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0xb0; // CPulse_ResumePoint
}

// CInferno (size: 0x13b8)
namespace CInferno {
    constexpr std::ptrdiff_t m_firePositions = 0x730; // Vector[64]
    constexpr std::ptrdiff_t m_fireParentPositions = 0xa30; // Vector[64]
    constexpr std::ptrdiff_t m_bFireIsBurning = 0xd30; // bool[64]
    constexpr std::ptrdiff_t m_BurnNormal = 0xd70; // Vector[64]
    constexpr std::ptrdiff_t m_fireCount = 0x1070; // int32
    constexpr std::ptrdiff_t m_nInfernoType = 0x1074; // int32
    constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1078; // int32
    constexpr std::ptrdiff_t m_nFireLifetime = 0x107c; // float32
    constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1080; // bool
    constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x1081; // bool
    constexpr std::ptrdiff_t m_extent = 0x1288; // Extent
    constexpr std::ptrdiff_t m_damageTimer = 0x12a0; // CountdownTimer
    constexpr std::ptrdiff_t m_damageRampTimer = 0x12b8; // CountdownTimer
    constexpr std::ptrdiff_t m_splashVelocity = 0x12d0; // Vector
    constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x12dc; // Vector
    constexpr std::ptrdiff_t m_startPos = 0x12e8; // Vector
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x12f4; // Vector
    constexpr std::ptrdiff_t m_activeTimer = 0x1300; // IntervalTimer
    constexpr std::ptrdiff_t m_fireSpawnOffset = 0x1310; // int32
    constexpr std::ptrdiff_t m_nMaxFlames = 0x1314; // int32
    constexpr std::ptrdiff_t m_nSpreadCount = 0x1318; // int32
    constexpr std::ptrdiff_t m_BookkeepingTimer = 0x1320; // CountdownTimer
    constexpr std::ptrdiff_t m_NextSpreadTimer = 0x1338; // CountdownTimer
    constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x1350; // uint16
}

// CTouchExpansionComponent (size: 0x50)
namespace CTouchExpansionComponent {
}

// CPulseCell_Outflow_PlaySceneBase (size: 0xf0)
namespace CPulseCell_Outflow_PlaySceneBase {
    constexpr std::ptrdiff_t m_OnFinished = 0x48; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0x90; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_Triggers = 0xd8; // CUtlVector< CPulse_OutflowConnection >
}

// CPulseCell_LerpCameraSettings (size: 0xb8)
namespace CPulseCell_LerpCameraSettings {
    constexpr std::ptrdiff_t m_flSeconds = 0x90; // float32
    constexpr std::ptrdiff_t m_Start = 0x94; // PointCameraSettings_t
    constexpr std::ptrdiff_t m_End = 0xa4; // PointCameraSettings_t
}

// CWeaponSCAR20 (size: 0x1150)
namespace CWeaponSCAR20 {
}

// CFuncInteractionLayerClip (size: 0x748)
namespace CFuncInteractionLayerClip {
    constexpr std::ptrdiff_t m_bDisabled = 0x730; // bool
    constexpr std::ptrdiff_t m_iszInteractsAs = 0x738; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszInteractsWith = 0x740; // CUtlSymbolLarge
}

// CCSObserver_UseServices (size: 0x48)
namespace CCSObserver_UseServices {
}

// CTriggerDetectBulletFire (size: 0x8b0)
namespace CTriggerDetectBulletFire {
    constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x890; // bool
    constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x898; // CEntityIOOutput
}

// CCSPlayer_UseServices (size: 0x58)
namespace CCSPlayer_UseServices {
    constexpr std::ptrdiff_t m_hLastKnownUseEntity = 0x48; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flLastUseTimeStamp = 0x4c; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeLastUsedWindow = 0x50; // GameTime_t
}

// CWeaponAWP (size: 0x1150)
namespace CWeaponAWP {
}

// CPulseCell_PickBestOutflowSelector (size: 0x68)
namespace CPulseCell_PickBestOutflowSelector {
    constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
    constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
}

// CInfoFan (size: 0x500)
namespace CInfoFan {
    constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x4e8; // float32
    constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x4ec; // float32
    constexpr std::ptrdiff_t m_flCurveDistRange = 0x4f0; // float32
    constexpr std::ptrdiff_t m_FanForceCurveString = 0x4f8; // CUtlSymbolLarge
}

// CGameRules (size: 0xd0)
namespace CGameRules {
    constexpr std::ptrdiff_t _m_pChainEntity = 0x8; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_szQuestName = 0x30; // char[128]
    constexpr std::ptrdiff_t m_nQuestPhase = 0xb0; // int32
    constexpr std::ptrdiff_t m_nLastMatchTime = 0xb4; // uint32
    constexpr std::ptrdiff_t m_nLastMatchTime_MatchID64 = 0xb8; // uint64
    constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xc0; // int32
    constexpr std::ptrdiff_t m_nPauseStartTick = 0xc4; // int32
    constexpr std::ptrdiff_t m_bGamePaused = 0xc8; // bool
}

// CFish (size: 0xb30)
namespace CFish {
    constexpr std::ptrdiff_t m_pool = 0xa20; // CHandle< CFishPool >
    constexpr std::ptrdiff_t m_id = 0xa24; // uint32
    constexpr std::ptrdiff_t m_x = 0xa28; // float32
    constexpr std::ptrdiff_t m_y = 0xa2c; // float32
    constexpr std::ptrdiff_t m_z = 0xa30; // float32
    constexpr std::ptrdiff_t m_angle = 0xa34; // float32
    constexpr std::ptrdiff_t m_angleChange = 0xa38; // float32
    constexpr std::ptrdiff_t m_forward = 0xa3c; // Vector
    constexpr std::ptrdiff_t m_perp = 0xa48; // Vector
    constexpr std::ptrdiff_t m_poolOrigin = 0xa54; // Vector
    constexpr std::ptrdiff_t m_waterLevel = 0xa60; // float32
    constexpr std::ptrdiff_t m_speed = 0xa64; // float32
    constexpr std::ptrdiff_t m_desiredSpeed = 0xa68; // float32
    constexpr std::ptrdiff_t m_calmSpeed = 0xa6c; // float32
    constexpr std::ptrdiff_t m_panicSpeed = 0xa70; // float32
    constexpr std::ptrdiff_t m_avoidRange = 0xa74; // float32
    constexpr std::ptrdiff_t m_turnTimer = 0xa78; // CountdownTimer
    constexpr std::ptrdiff_t m_turnClockwise = 0xa90; // bool
    constexpr std::ptrdiff_t m_goTimer = 0xa98; // CountdownTimer
    constexpr std::ptrdiff_t m_moveTimer = 0xab0; // CountdownTimer
    constexpr std::ptrdiff_t m_panicTimer = 0xac8; // CountdownTimer
    constexpr std::ptrdiff_t m_disperseTimer = 0xae0; // CountdownTimer
    constexpr std::ptrdiff_t m_proximityTimer = 0xaf8; // CountdownTimer
    constexpr std::ptrdiff_t m_visible = 0xb10; // CUtlVector< CFish* >
}

// CCSBot (size: 0x6df8)
namespace CCSBot {
    constexpr std::ptrdiff_t m_eyePosition = 0x108; // VectorWS
    constexpr std::ptrdiff_t m_name = 0x114; // char[64]
    constexpr std::ptrdiff_t m_combatRange = 0x154; // float32
    constexpr std::ptrdiff_t m_isRogue = 0x158; // bool
    constexpr std::ptrdiff_t m_rogueTimer = 0x160; // CountdownTimer
    constexpr std::ptrdiff_t m_diedLastRound = 0x17c; // bool
    constexpr std::ptrdiff_t m_safeTime = 0x180; // float32
    constexpr std::ptrdiff_t m_wasSafe = 0x184; // bool
    constexpr std::ptrdiff_t m_blindFire = 0x18c; // bool
    constexpr std::ptrdiff_t m_surpriseTimer = 0x190; // CountdownTimer
    constexpr std::ptrdiff_t m_bAllowActive = 0x1a8; // bool
    constexpr std::ptrdiff_t m_isFollowing = 0x1a9; // bool
    constexpr std::ptrdiff_t m_leader = 0x1ac; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_followTimestamp = 0x1b0; // float32
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1b4; // float32
    constexpr std::ptrdiff_t m_hurryTimer = 0x1b8; // CountdownTimer
    constexpr std::ptrdiff_t m_alertTimer = 0x1d0; // CountdownTimer
    constexpr std::ptrdiff_t m_sneakTimer = 0x1e8; // CountdownTimer
    constexpr std::ptrdiff_t m_panicTimer = 0x200; // CountdownTimer
    constexpr std::ptrdiff_t m_stateTimestamp = 0x578; // float32
    constexpr std::ptrdiff_t m_isAttacking = 0x57c; // bool
    constexpr std::ptrdiff_t m_isOpeningDoor = 0x57d; // bool
    constexpr std::ptrdiff_t m_taskEntity = 0x584; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_goalPosition = 0x594; // VectorWS
    constexpr std::ptrdiff_t m_goalEntity = 0x5a0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_avoid = 0x5a4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_avoidTimestamp = 0x5a8; // float32
    constexpr std::ptrdiff_t m_isStopping = 0x5ac; // bool
    constexpr std::ptrdiff_t m_hasVisitedEnemySpawn = 0x5ad; // bool
    constexpr std::ptrdiff_t m_stillTimer = 0x5b0; // IntervalTimer
    constexpr std::ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x5c0; // bool
    constexpr std::ptrdiff_t m_pathIndex = 0x5ec0; // int32
    constexpr std::ptrdiff_t m_areaEnteredTimestamp = 0x5ec4; // GameTime_t
    constexpr std::ptrdiff_t m_repathTimer = 0x5ec8; // CountdownTimer
    constexpr std::ptrdiff_t m_avoidFriendTimer = 0x5ee0; // CountdownTimer
    constexpr std::ptrdiff_t m_isFriendInTheWay = 0x5ef8; // bool
    constexpr std::ptrdiff_t m_politeTimer = 0x5f00; // CountdownTimer
    constexpr std::ptrdiff_t m_isWaitingBehindFriend = 0x5f18; // bool
    constexpr std::ptrdiff_t m_pathLadderEnd = 0x5f44; // float32
    constexpr std::ptrdiff_t m_mustRunTimer = 0x5f90; // CountdownTimer
    constexpr std::ptrdiff_t m_waitTimer = 0x5fa8; // CountdownTimer
    constexpr std::ptrdiff_t m_updateTravelDistanceTimer = 0x5fc0; // CountdownTimer
    constexpr std::ptrdiff_t m_playerTravelDistance = 0x5fd8; // float32[64]
    constexpr std::ptrdiff_t m_travelDistancePhase = 0x60d8; // uint8
    constexpr std::ptrdiff_t m_hostageEscortCount = 0x6270; // uint8
    constexpr std::ptrdiff_t m_hostageEscortCountTimestamp = 0x6274; // float32
    constexpr std::ptrdiff_t m_desiredTeam = 0x6278; // int32
    constexpr std::ptrdiff_t m_hasJoined = 0x627c; // bool
    constexpr std::ptrdiff_t m_isWaitingForHostage = 0x627d; // bool
    constexpr std::ptrdiff_t m_inhibitWaitingForHostageTimer = 0x6280; // CountdownTimer
    constexpr std::ptrdiff_t m_waitForHostageTimer = 0x6298; // CountdownTimer
    constexpr std::ptrdiff_t m_noisePosition = 0x62b0; // Vector
    constexpr std::ptrdiff_t m_noiseTravelDistance = 0x62bc; // float32
    constexpr std::ptrdiff_t m_noiseTimestamp = 0x62c0; // float32
    constexpr std::ptrdiff_t m_noiseSource = 0x62c8; // CCSPlayerPawn*
    constexpr std::ptrdiff_t m_noiseBendTimer = 0x62e0; // CountdownTimer
    constexpr std::ptrdiff_t m_bentNoisePosition = 0x62f8; // Vector
    constexpr std::ptrdiff_t m_bendNoisePositionValid = 0x6304; // bool
    constexpr std::ptrdiff_t m_lookAroundStateTimestamp = 0x6308; // float32
    constexpr std::ptrdiff_t m_lookAheadAngle = 0x630c; // float32
    constexpr std::ptrdiff_t m_forwardAngle = 0x6310; // float32
    constexpr std::ptrdiff_t m_inhibitLookAroundTimestamp = 0x6314; // float32
    constexpr std::ptrdiff_t m_lookAtSpot = 0x631c; // Vector
    constexpr std::ptrdiff_t m_lookAtSpotDuration = 0x632c; // float32
    constexpr std::ptrdiff_t m_lookAtSpotTimestamp = 0x6330; // float32
    constexpr std::ptrdiff_t m_lookAtSpotAngleTolerance = 0x6334; // float32
    constexpr std::ptrdiff_t m_lookAtSpotClearIfClose = 0x6338; // bool
    constexpr std::ptrdiff_t m_lookAtSpotAttack = 0x6339; // bool
    constexpr std::ptrdiff_t m_lookAtDesc = 0x6340; // char*
    constexpr std::ptrdiff_t m_peripheralTimestamp = 0x6348; // float32
    constexpr std::ptrdiff_t m_approachPointCount = 0x64d0; // uint8
    constexpr std::ptrdiff_t m_approachPointViewPosition = 0x64d4; // Vector
    constexpr std::ptrdiff_t m_viewSteadyTimer = 0x64e0; // IntervalTimer
    constexpr std::ptrdiff_t m_tossGrenadeTimer = 0x64f8; // CountdownTimer
    constexpr std::ptrdiff_t m_isAvoidingGrenade = 0x6518; // CountdownTimer
    constexpr std::ptrdiff_t m_spotCheckTimestamp = 0x6538; // float32
    constexpr std::ptrdiff_t m_checkedHidingSpotCount = 0x6940; // int32
    constexpr std::ptrdiff_t m_lookPitch = 0x6944; // float32
    constexpr std::ptrdiff_t m_lookPitchVel = 0x6948; // float32
    constexpr std::ptrdiff_t m_lookYaw = 0x694c; // float32
    constexpr std::ptrdiff_t m_lookYawVel = 0x6950; // float32
    constexpr std::ptrdiff_t m_targetSpot = 0x6954; // Vector
    constexpr std::ptrdiff_t m_targetSpotVelocity = 0x6960; // Vector
    constexpr std::ptrdiff_t m_targetSpotPredicted = 0x696c; // Vector
    constexpr std::ptrdiff_t m_aimError = 0x6978; // QAngle
    constexpr std::ptrdiff_t m_aimGoal = 0x6984; // QAngle
    constexpr std::ptrdiff_t m_targetSpotTime = 0x6990; // GameTime_t
    constexpr std::ptrdiff_t m_aimFocus = 0x6994; // float32
    constexpr std::ptrdiff_t m_aimFocusInterval = 0x6998; // float32
    constexpr std::ptrdiff_t m_aimFocusNextUpdate = 0x699c; // GameTime_t
    constexpr std::ptrdiff_t m_ignoreEnemiesTimer = 0x69a8; // CountdownTimer
    constexpr std::ptrdiff_t m_enemy = 0x69c0; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_isEnemyVisible = 0x69c4; // bool
    constexpr std::ptrdiff_t m_visibleEnemyParts = 0x69c5; // uint8
    constexpr std::ptrdiff_t m_lastEnemyPosition = 0x69c8; // Vector
    constexpr std::ptrdiff_t m_lastSawEnemyTimestamp = 0x69d4; // float32
    constexpr std::ptrdiff_t m_firstSawEnemyTimestamp = 0x69d8; // float32
    constexpr std::ptrdiff_t m_currentEnemyAcquireTimestamp = 0x69dc; // float32
    constexpr std::ptrdiff_t m_enemyDeathTimestamp = 0x69e0; // float32
    constexpr std::ptrdiff_t m_friendDeathTimestamp = 0x69e4; // float32
    constexpr std::ptrdiff_t m_isLastEnemyDead = 0x69e8; // bool
    constexpr std::ptrdiff_t m_nearbyEnemyCount = 0x69ec; // int32
    constexpr std::ptrdiff_t m_bomber = 0x6bf8; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_nearbyFriendCount = 0x6bfc; // int32
    constexpr std::ptrdiff_t m_closestVisibleFriend = 0x6c00; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_closestVisibleHumanFriend = 0x6c04; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_attentionInterval = 0x6c08; // IntervalTimer
    constexpr std::ptrdiff_t m_attacker = 0x6c18; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_attackedTimestamp = 0x6c1c; // float32
    constexpr std::ptrdiff_t m_burnedByFlamesTimer = 0x6c20; // IntervalTimer
    constexpr std::ptrdiff_t m_lastVictimID = 0x6c30; // int32
    constexpr std::ptrdiff_t m_isAimingAtEnemy = 0x6c34; // bool
    constexpr std::ptrdiff_t m_isRapidFiring = 0x6c35; // bool
    constexpr std::ptrdiff_t m_equipTimer = 0x6c38; // IntervalTimer
    constexpr std::ptrdiff_t m_zoomTimer = 0x6c48; // CountdownTimer
    constexpr std::ptrdiff_t m_fireWeaponTimestamp = 0x6c60; // GameTime_t
    constexpr std::ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x6c68; // CountdownTimer
    constexpr std::ptrdiff_t m_bIsSleeping = 0x6c80; // bool
    constexpr std::ptrdiff_t m_isEnemySniperVisible = 0x6c81; // bool
    constexpr std::ptrdiff_t m_sawEnemySniperTimer = 0x6c88; // CountdownTimer
    constexpr std::ptrdiff_t m_enemyQueueIndex = 0x6d40; // uint8
    constexpr std::ptrdiff_t m_enemyQueueCount = 0x6d41; // uint8
    constexpr std::ptrdiff_t m_enemyQueueAttendIndex = 0x6d42; // uint8
    constexpr std::ptrdiff_t m_isStuck = 0x6d43; // bool
    constexpr std::ptrdiff_t m_stuckTimestamp = 0x6d44; // GameTime_t
    constexpr std::ptrdiff_t m_stuckSpot = 0x6d48; // Vector
    constexpr std::ptrdiff_t m_wiggleTimer = 0x6d58; // CountdownTimer
    constexpr std::ptrdiff_t m_stuckJumpTimer = 0x6d70; // CountdownTimer
    constexpr std::ptrdiff_t m_nextCleanupCheckTimestamp = 0x6d88; // GameTime_t
    constexpr std::ptrdiff_t m_avgVel = 0x6d8c; // float32[10]
    constexpr std::ptrdiff_t m_avgVelIndex = 0x6db4; // int32
    constexpr std::ptrdiff_t m_avgVelCount = 0x6db8; // int32
    constexpr std::ptrdiff_t m_lastOrigin = 0x6dbc; // Vector
    constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x6dcc; // float32
    constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x6dd0; // float32
    constexpr std::ptrdiff_t m_radioSubject = 0x6dd4; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_radioPosition = 0x6dd8; // Vector
    constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x6de4; // float32
    constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x6df0; // int32
}

// CHandleTest (size: 0x4b0)
namespace CHandleTest {
    constexpr std::ptrdiff_t m_Handle = 0x4a8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bSendHandle = 0x4ac; // bool
}

// CLogicNPCCounter (size: 0x728)
namespace CLogicNPCCounter {
    constexpr std::ptrdiff_t m_OnMinCountAll = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCountAll = 0x4c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactorAll = 0x4d8; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnMinPlayerDistAll = 0x4f8; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnMinCount_1 = 0x518; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_1 = 0x530; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_1 = 0x548; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnMinPlayerDist_1 = 0x568; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnMinCount_2 = 0x588; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_2 = 0x5a0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_2 = 0x5b8; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnMinPlayerDist_2 = 0x5d8; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnMinCount_3 = 0x5f8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMaxCount_3 = 0x610; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFactor_3 = 0x628; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnMinPlayerDist_3 = 0x648; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_hSource = 0x668; // CEntityHandle
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x670; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flDistanceMax = 0x678; // float32
    constexpr std::ptrdiff_t m_bDisabled = 0x67c; // bool
    constexpr std::ptrdiff_t m_nMinCountAll = 0x680; // int32
    constexpr std::ptrdiff_t m_nMaxCountAll = 0x684; // int32
    constexpr std::ptrdiff_t m_nMinFactorAll = 0x688; // int32
    constexpr std::ptrdiff_t m_nMaxFactorAll = 0x68c; // int32
    constexpr std::ptrdiff_t m_iszNPCClassname_1 = 0x698; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_1 = 0x6a0; // int32
    constexpr std::ptrdiff_t m_bInvertState_1 = 0x6a4; // bool
    constexpr std::ptrdiff_t m_nMinCount_1 = 0x6a8; // int32
    constexpr std::ptrdiff_t m_nMaxCount_1 = 0x6ac; // int32
    constexpr std::ptrdiff_t m_nMinFactor_1 = 0x6b0; // int32
    constexpr std::ptrdiff_t m_nMaxFactor_1 = 0x6b4; // int32
    constexpr std::ptrdiff_t m_flDefaultDist_1 = 0x6bc; // float32
    constexpr std::ptrdiff_t m_iszNPCClassname_2 = 0x6c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_2 = 0x6c8; // int32
    constexpr std::ptrdiff_t m_bInvertState_2 = 0x6cc; // bool
    constexpr std::ptrdiff_t m_nMinCount_2 = 0x6d0; // int32
    constexpr std::ptrdiff_t m_nMaxCount_2 = 0x6d4; // int32
    constexpr std::ptrdiff_t m_nMinFactor_2 = 0x6d8; // int32
    constexpr std::ptrdiff_t m_nMaxFactor_2 = 0x6dc; // int32
    constexpr std::ptrdiff_t m_flDefaultDist_2 = 0x6e4; // float32
    constexpr std::ptrdiff_t m_iszNPCClassname_3 = 0x6e8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nNPCState_3 = 0x6f0; // int32
    constexpr std::ptrdiff_t m_bInvertState_3 = 0x6f4; // bool
    constexpr std::ptrdiff_t m_nMinCount_3 = 0x6f8; // int32
    constexpr std::ptrdiff_t m_nMaxCount_3 = 0x6fc; // int32
    constexpr std::ptrdiff_t m_nMinFactor_3 = 0x700; // int32
    constexpr std::ptrdiff_t m_nMaxFactor_3 = 0x704; // int32
    constexpr std::ptrdiff_t m_flDefaultDist_3 = 0x70c; // float32
}

// CCSPlayer_RadioServices (size: 0x68)
namespace CCSPlayer_RadioServices {
    constexpr std::ptrdiff_t m_flGotHostageTalkTimer = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_flDefusingTalkTimer = 0x4c; // GameTime_t
    constexpr std::ptrdiff_t m_flC4PlantTalkTimer = 0x50; // GameTime_t
    constexpr std::ptrdiff_t m_flRadioTokenSlots = 0x54; // GameTime_t[3]
    constexpr std::ptrdiff_t m_bIgnoreRadio = 0x60; // bool
}

// CWeaponSG556 (size: 0x1150)
namespace CWeaponSG556 {
}

// CRagdollConstraint (size: 0x530)
namespace CRagdollConstraint {
    constexpr std::ptrdiff_t m_xmin = 0x508; // float32
    constexpr std::ptrdiff_t m_xmax = 0x50c; // float32
    constexpr std::ptrdiff_t m_ymin = 0x510; // float32
    constexpr std::ptrdiff_t m_ymax = 0x514; // float32
    constexpr std::ptrdiff_t m_zmin = 0x518; // float32
    constexpr std::ptrdiff_t m_zmax = 0x51c; // float32
    constexpr std::ptrdiff_t m_xfriction = 0x520; // float32
    constexpr std::ptrdiff_t m_yfriction = 0x524; // float32
    constexpr std::ptrdiff_t m_zfriction = 0x528; // float32
}

// CFuncVehicleClip (size: 0x730)
namespace CFuncVehicleClip {
}

// CDEagle (size: 0x1150)
namespace CDEagle {
}

// CWeaponFamas (size: 0x1150)
namespace CWeaponFamas {
}

// CEnvSplash (size: 0x4b0)
namespace CEnvSplash {
    constexpr std::ptrdiff_t m_flScale = 0x4a8; // float32
}

// CPointCameraVFOV (size: 0x510)
namespace CPointCameraVFOV {
    constexpr std::ptrdiff_t m_flVerticalFOV = 0x508; // float32
}

// CCSGO_WingmanIntroTerroristPosition (size: 0xcc0)
namespace CCSGO_WingmanIntroTerroristPosition {
}

// CTestPulseIOAPI (size: 0x8)
namespace CTestPulseIOAPI {
}

// CCSWeaponBaseShotgun (size: 0x1130)
namespace CCSWeaponBaseShotgun {
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

// CFuncMoveLinear (size: 0x838)
namespace CFuncMoveLinear {
    constexpr std::ptrdiff_t m_authoredPosition = 0x7b0; // MoveLinearAuthoredPos_t
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7b4; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7c0; // Vector
    constexpr std::ptrdiff_t m_soundStart = 0x7d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_soundStop = 0x7d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_currentSound = 0x7e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7e8; // float32
    constexpr std::ptrdiff_t m_flStartPosition = 0x7ec; // float32
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x7f8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x828; // bool
    constexpr std::ptrdiff_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x829; // bool
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x82a; // bool
}

// CPhysMotorAPI (size: 0x8)
namespace CPhysMotorAPI {
}

// CPulseCell_WaitForObservable (size: 0x108)
namespace CPulseCell_WaitForObservable {
    constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
    constexpr std::ptrdiff_t m_OnTrue = 0xc0; // CPulse_ResumePoint
}

// CScriptItem (size: 0xad0)
namespace CScriptItem {
    constexpr std::ptrdiff_t m_MoveTypeOverride = 0xac0; // MoveType_t
}

// CDynamicPropAlias_prop_dynamic_override (size: 0xc50)
namespace CDynamicPropAlias_prop_dynamic_override {
}

// CBaseTrigger (size: 0x890)
namespace CBaseTrigger {
    constexpr std::ptrdiff_t m_OnStartTouch = 0x7b0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartTouchAll = 0x7c8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouch = 0x7e0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouchAll = 0x7f8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTouching = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0x828; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNotTouching = 0x840; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hTouchingEntities = 0x858; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_iFilterName = 0x870; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x878; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_bDisabled = 0x87c; // bool
    constexpr std::ptrdiff_t m_bUseAsyncQueries = 0x888; // bool
}

// CPointPush (size: 0x4d0)
namespace CPointPush {
    constexpr std::ptrdiff_t m_bEnabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_flMagnitude = 0x4ac; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flInnerRadius = 0x4b4; // float32
    constexpr std::ptrdiff_t m_flConeOfInfluence = 0x4b8; // float32
    constexpr std::ptrdiff_t m_iszFilterName = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x4c8; // CHandle< CBaseFilter >
}

// CPulseCell_Step_EntFire (size: 0x50)
namespace CPulseCell_Step_EntFire {
    constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
}

// CCSObserver_ObserverServices (size: 0x80)
namespace CCSObserver_ObserverServices {
}

// CPlayerPing (size: 0x4d0)
namespace CPlayerPing {
    constexpr std::ptrdiff_t m_hPlayer = 0x4b0; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_hPingedEntity = 0x4b4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iType = 0x4b8; // int32
    constexpr std::ptrdiff_t m_bUrgent = 0x4bc; // bool
    constexpr std::ptrdiff_t m_szPlaceName = 0x4bd; // char[18]
}

// CHitboxComponent (size: 0x18)
namespace CHitboxComponent {
    constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14; // float32
}

// CRopeKeyframe (size: 0x788)
namespace CRopeKeyframe {
    constexpr std::ptrdiff_t m_RopeFlags = 0x738; // uint16
    constexpr std::ptrdiff_t m_iNextLinkName = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Slack = 0x748; // int16
    constexpr std::ptrdiff_t m_Width = 0x74c; // float32
    constexpr std::ptrdiff_t m_TextureScale = 0x750; // float32
    constexpr std::ptrdiff_t m_nSegments = 0x754; // uint8
    constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x755; // bool
    constexpr std::ptrdiff_t m_strRopeMaterialModel = 0x758; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x760; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_Subdiv = 0x768; // uint8
    constexpr std::ptrdiff_t m_nChangeCount = 0x769; // uint8
    constexpr std::ptrdiff_t m_RopeLength = 0x76a; // int16
    constexpr std::ptrdiff_t m_fLockedPoints = 0x76c; // uint8
    constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0x76d; // bool
    constexpr std::ptrdiff_t m_flScrollSpeed = 0x770; // float32
    constexpr std::ptrdiff_t m_bStartPointValid = 0x774; // bool
    constexpr std::ptrdiff_t m_bEndPointValid = 0x775; // bool
    constexpr std::ptrdiff_t m_hStartPoint = 0x778; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hEndPoint = 0x77c; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iStartAttachment = 0x780; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_iEndAttachment = 0x781; // AttachmentHandle_t
}

// CSmokeGrenade (size: 0x1180)
namespace CSmokeGrenade {
}

// CBaseCombatCharacter (size: 0xb70)
namespace CBaseCombatCharacter {
    constexpr std::ptrdiff_t m_bForceServerRagdoll = 0xab0; // bool
    constexpr std::ptrdiff_t m_hMyWearables = 0xab8; // CNetworkUtlVectorBase< CHandle< CEconWearable > >
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xad0; // float32
    constexpr std::ptrdiff_t m_bApplyStressDamage = 0xad4; // bool
    constexpr std::ptrdiff_t m_bDeathEventsDispatched = 0xad5; // bool
    constexpr std::ptrdiff_t m_pVecRelationships = 0xb18; // CUtlVector< RelationshipOverride_t >*
    constexpr std::ptrdiff_t m_strRelationships = 0xb20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_eHull = 0xb28; // Hull_t
    constexpr std::ptrdiff_t m_nNavHullIdx = 0xb2c; // uint32
    constexpr std::ptrdiff_t m_movementStats = 0xb30; // CMovementStatsProperty
}

// ServerAuthoritativeWeaponSlot_t (size: 0x38)
namespace ServerAuthoritativeWeaponSlot_t {
    constexpr std::ptrdiff_t unClass = 0x30; // uint16
    constexpr std::ptrdiff_t unSlot = 0x32; // uint16
    constexpr std::ptrdiff_t unItemDefIdx = 0x34; // uint16
}

// CPathQueryComponent (size: 0xa0)
namespace CPathQueryComponent {
}

// CLogicRelay (size: 0x4b0)
namespace CLogicRelay {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_bWaitForRefire = 0x4a9; // bool
    constexpr std::ptrdiff_t m_bTriggerOnce = 0x4aa; // bool
    constexpr std::ptrdiff_t m_bFastRetrigger = 0x4ab; // bool
    constexpr std::ptrdiff_t m_bPassthoughCaller = 0x4ac; // bool
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

// CTestPulseIO (size: 0x590)
namespace CTestPulseIO {
    constexpr std::ptrdiff_t m_OnVariantVoid = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnVariantBool = 0x4c0; // CEntityOutputTemplate< bool, bool >
    constexpr std::ptrdiff_t m_OnVariantInt = 0x4e0; // CEntityOutputTemplate< int32, int32 >
    constexpr std::ptrdiff_t m_OnVariantFloat = 0x500; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnVariantString = 0x520; // CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_OnVariantColor = 0x540; // CEntityOutputTemplate< Color, Color >
    constexpr std::ptrdiff_t m_OnVariantVector = 0x560; // CEntityOutputTemplate< Vector, Vector >
    constexpr std::ptrdiff_t m_bAllowEmptyInputs = 0x588; // bool
}

// CWeaponUMP45 (size: 0x1150)
namespace CWeaponUMP45 {
}

// CGamePlayerEquip (size: 0x758)
namespace CGamePlayerEquip {
}

// CPointEntityFinder (size: 0x4e8)
namespace CPointEntityFinder {
    constexpr std::ptrdiff_t m_hEntity = 0x4a8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iFilterName = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x4b8; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_iRefName = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hReference = 0x4c8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_FindMethod = 0x4cc; // EntFinderMethod_t
    constexpr std::ptrdiff_t m_OnFoundEntity = 0x4d0; // CEntityIOOutput
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

// CKnife (size: 0x1140)
namespace CKnife {
    constexpr std::ptrdiff_t m_bFirstAttack = 0x1130; // bool
}

// CLogicPlayerProxy (size: 0x518)
namespace CLogicPlayerProxy {
    constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x4c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_PlayerDied = 0x4d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x4f0; // CEntityOutputTemplate< int32, int32 >
    constexpr std::ptrdiff_t m_hPlayer = 0x510; // CHandle< CBaseEntity >
}

// CCSGO_TeamIntroCharacterPosition (size: 0xcc0)
namespace CCSGO_TeamIntroCharacterPosition {
}

// CBasePlayerControllerAPI (size: 0x8)
namespace CBasePlayerControllerAPI {
}

// CHostageRescueZoneShim (size: 0x890)
namespace CHostageRescueZoneShim {
}

// CSimpleMarkupVolumeTagged (size: 0x770)
namespace CSimpleMarkupVolumeTagged {
}

// CEnvSoundscapeAlias_snd_soundscape (size: 0x538)
namespace CEnvSoundscapeAlias_snd_soundscape {
}

// CCSPlayer_HostageServices (size: 0x50)
namespace CCSPlayer_HostageServices {
    constexpr std::ptrdiff_t m_hCarriedHostage = 0x48; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x4c; // CHandle< CBaseEntity >
}

// CRenderComponent (size: 0xb0)
namespace CRenderComponent {
    constexpr std::ptrdiff_t _m_pChainEntity = 0x10; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50; // bool
    constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54; // uint32
    constexpr std::ptrdiff_t m_bEnableRendering = 0x58; // bool
    constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xa8; // bool
}

// CWaterBullet (size: 0xa20)
namespace CWaterBullet {
}

// CTriggerSoundscape (size: 0x8b8)
namespace CTriggerSoundscape {
    constexpr std::ptrdiff_t m_hSoundscape = 0x890; // CHandle< CEnvSoundscapeTriggerable >
    constexpr std::ptrdiff_t m_SoundscapeName = 0x898; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_spectators = 0x8a0; // CUtlVector< CHandle< CBasePlayerPawn > >
}

// CPointTeleportAPI (size: 0x8)
namespace CPointTeleportAPI {
}

// CHostageExpresserShim (size: 0xb80)
namespace CHostageExpresserShim {
    constexpr std::ptrdiff_t m_pExpresser = 0xb70; // CAI_Expresser*
}

// CPointChildModifier (size: 0x4b0)
namespace CPointChildModifier {
    constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4a8; // bool
}

// CCSPlayerLegacyJump (size: 0x18)
namespace CCSPlayerLegacyJump {
    constexpr std::ptrdiff_t m_bOldJumpPressed = 0x10; // bool
    constexpr std::ptrdiff_t m_flJumpPressedTime = 0x14; // float32
}

// CWeaponHKP2000 (size: 0x1150)
namespace CWeaponHKP2000 {
}

// CShatterGlassShardPhysics (size: 0xd70)
namespace CShatterGlassShardPhysics {
    constexpr std::ptrdiff_t m_bDebris = 0xce0; // bool
    constexpr std::ptrdiff_t m_hParentShard = 0xce4; // uint32
    constexpr std::ptrdiff_t m_ShardDesc = 0xce8; // shard_model_desc_t
}

// CPathParticleRope (size: 0x590)
namespace CPathParticleRope {
    constexpr std::ptrdiff_t m_bStartActive = 0x4b0; // bool
    constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4b4; // float32
    constexpr std::ptrdiff_t m_iszEffectName = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PathNodes_Name = 0x4c0; // CUtlVector< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_flParticleSpacing = 0x4d8; // float32
    constexpr std::ptrdiff_t m_flSlack = 0x4dc; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x4e0; // float32
    constexpr std::ptrdiff_t m_ColorTint = 0x4e4; // Color
    constexpr std::ptrdiff_t m_nEffectState = 0x4e8; // int32
    constexpr std::ptrdiff_t m_iEffectIndex = 0x4f0; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_PathNodes_Position = 0x4f8; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x510; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x528; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_Color = 0x540; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x558; // CNetworkUtlVectorBase< bool >
    constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x570; // CNetworkUtlVectorBase< float32 >
}

// CCredits (size: 0x4c8)
namespace CCredits {
    constexpr std::ptrdiff_t m_OnCreditsDone = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bRolledOutroCredits = 0x4c0; // bool
    constexpr std::ptrdiff_t m_flLogoLength = 0x4c4; // float32
}

// CWeaponFiveSeven (size: 0x1150)
namespace CWeaponFiveSeven {
}

// CFishPool (size: 0x500)
namespace CFishPool {
    constexpr std::ptrdiff_t m_fishCount = 0x4b8; // int32
    constexpr std::ptrdiff_t m_maxRange = 0x4bc; // float32
    constexpr std::ptrdiff_t m_swimDepth = 0x4c0; // float32
    constexpr std::ptrdiff_t m_waterLevel = 0x4c4; // float32
    constexpr std::ptrdiff_t m_isDormant = 0x4c8; // bool
    constexpr std::ptrdiff_t m_fishes = 0x4d0; // CUtlVector< CHandle< CFish > >
    constexpr std::ptrdiff_t m_visTimer = 0x4e8; // CountdownTimer
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

// CRagdollPropAlias_physics_prop_ragdoll (size: 0xb70)
namespace CRagdollPropAlias_physics_prop_ragdoll {
}

// CBreakableProp (size: 0xba0)
namespace CBreakableProp {
    constexpr std::ptrdiff_t m_CPropDataComponent = 0xa58; // CPropDataComponent
    constexpr std::ptrdiff_t m_OnStartDeath = 0xa98; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBreak = 0xab0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0xac8; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnTakeDamage = 0xae8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_impactEnergyScale = 0xb00; // float32
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0xb04; // int32
    constexpr std::ptrdiff_t m_preferredCarryAngles = 0xb08; // QAngle
    constexpr std::ptrdiff_t m_flPressureDelay = 0xb14; // float32
    constexpr std::ptrdiff_t m_flDefBurstScale = 0xb18; // float32
    constexpr std::ptrdiff_t m_vDefBurstOffset = 0xb1c; // Vector
    constexpr std::ptrdiff_t m_hBreaker = 0xb28; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_PerformanceMode = 0xb2c; // PerformanceMode_t
    constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xb30; // GameTime_t
    constexpr std::ptrdiff_t m_BreakableContentsType = 0xb34; // BreakableContentsType_t
    constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0xb38; // CUtlString
    constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0xb40; // CUtlString
    constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xb48; // bool
    constexpr std::ptrdiff_t m_explodeDamage = 0xb4c; // float32
    constexpr std::ptrdiff_t m_explodeRadius = 0xb50; // float32
    constexpr std::ptrdiff_t m_nExplosionType = 0xb54; // BaseExplosionTypes_t
    constexpr std::ptrdiff_t m_explosionDelay = 0xb58; // float32
    constexpr std::ptrdiff_t m_explosionBuildupSound = 0xb60; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomEffect = 0xb68; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionCustomSound = 0xb70; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_explosionModifier = 0xb78; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xb80; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xb84; // GameTime_t
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xb88; // float32
    constexpr std::ptrdiff_t m_hLastAttacker = 0xb8c; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iszPuntSound = 0xb90; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bUsePuntSound = 0xb98; // bool
    constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xb99; // bool
}

// CLightEntity (size: 0x738)
namespace CLightEntity {
    constexpr std::ptrdiff_t m_CLightComponent = 0x730; // CLightComponent*
}

// CInfoDynamicShadowHintBox (size: 0x4d8)
namespace CInfoDynamicShadowHintBox {
    constexpr std::ptrdiff_t m_vBoxMins = 0x4c0; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4cc; // Vector
}

// CBaseAnimGraphController (size: 0x858)
namespace CBaseAnimGraphController {
    constexpr std::ptrdiff_t m_nAnimationAlgorithm = 0x18; // AnimationAlgorithm_t
    constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x20; // CAnimGraphNetworkedVariables
    constexpr std::ptrdiff_t m_pAnimGraphInstance = 0x228; // CSmartPtr< IAnimationGraphInstance >
    constexpr std::ptrdiff_t m_nNextExternalGraphHandle = 0x288; // ExternalAnimGraphHandle_t
    constexpr std::ptrdiff_t m_vecSecondarySkeletonNames = 0x290; // CUtlVector< CGlobalSymbol >
    constexpr std::ptrdiff_t m_vecSecondarySkeletons = 0x2a8; // CNetworkUtlVectorBase< CHandle< CBaseAnimGraph > >
    constexpr std::ptrdiff_t m_nSecondarySkeletonMasterCount = 0x2c0; // int32
    constexpr std::ptrdiff_t m_flSoundSyncTime = 0x2c4; // float32
    constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x2c8; // uint32
    constexpr std::ptrdiff_t m_hSequence = 0x2cc; // HSequence
    constexpr std::ptrdiff_t m_flSeqStartTime = 0x2d0; // GameTime_t
    constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x2d4; // float32
    constexpr std::ptrdiff_t m_nAnimLoopMode = 0x2d8; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_flPlaybackRate = 0x2dc; // CNetworkedQuantizedFloat
    constexpr std::ptrdiff_t m_nNotifyState = 0x2e8; // SequenceFinishNotifyState_t
    constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x2e9; // bool
    constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x2ea; // bool
    constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x2eb; // bool
    constexpr std::ptrdiff_t m_bSequenceFinished = 0x2ec; // bool
    constexpr std::ptrdiff_t m_nPrevAnimUpdateTick = 0x2f0; // GameTick_t
    constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x590; // CStrongHandle< InfoForResourceTypeCNmGraphDefinition >
    constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x598; // CNetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x5b0; // int32
    constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x5b4; // int32
    constexpr std::ptrdiff_t m_nServerGraphInstanceIteration = 0x5b8; // int32
    constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x5bc; // int32
    constexpr std::ptrdiff_t m_primaryGraphId = 0x5c0; // ResourceId_t
    constexpr std::ptrdiff_t m_vecExternalGraphIds = 0x5c8; // CNetworkUtlVectorBase< ResourceId_t >
    constexpr std::ptrdiff_t m_vecExternalClipIds = 0x5e0; // CNetworkUtlVectorBase< ResourceId_t >
    constexpr std::ptrdiff_t m_sAnimGraph2Identifier = 0x5f8; // CGlobalSymbol
    constexpr std::ptrdiff_t m_vecExternalGraphs = 0x820; // CUtlVector< ExternalAnimGraph_t >
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

// COrnamentProp (size: 0xc60)
namespace COrnamentProp {
    constexpr std::ptrdiff_t m_initialOwner = 0xc50; // CUtlSymbolLarge
}

// CCSPlayer_CameraServices (size: 0x1b0)
namespace CCSPlayer_CameraServices {
}

// CModelPointEntity (size: 0x730)
namespace CModelPointEntity {
}

// CRectLight (size: 0xa28)
namespace CRectLight {
    constexpr std::ptrdiff_t m_bShowLight = 0xa20; // bool
}

// CFilterMultiple (size: 0x560)
namespace CFilterMultiple {
    constexpr std::ptrdiff_t m_nFilterType = 0x4e0; // filter_t
    constexpr std::ptrdiff_t m_iFilterName = 0x4e8; // CUtlSymbolLarge[10]
    constexpr std::ptrdiff_t m_hFilter = 0x538; // CHandle< CBaseEntity >[10]
}

// CCSPlayerResource (size: 0x540)
namespace CCSPlayerResource {
    constexpr std::ptrdiff_t m_bHostageAlive = 0x4a8; // bool[12]
    constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x4b4; // bool[12]
    constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x4c0; // CEntityIndex[12]
    constexpr std::ptrdiff_t m_bombsiteCenterA = 0x4f0; // Vector
    constexpr std::ptrdiff_t m_bombsiteCenterB = 0x4fc; // Vector
    constexpr std::ptrdiff_t m_hostageRescueX = 0x508; // int32[4]
    constexpr std::ptrdiff_t m_hostageRescueY = 0x518; // int32[4]
    constexpr std::ptrdiff_t m_hostageRescueZ = 0x528; // int32[4]
    constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x538; // bool
    constexpr std::ptrdiff_t m_foundGoalPositions = 0x539; // bool
}

// CPulseCell_FireCursors (size: 0xf8)
namespace CPulseCell_FireCursors {
    constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector< CPulse_OutflowConnection >
    constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
    constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0xb0; // CPulse_ResumePoint
}

// CFuncNavBlocker (size: 0x748)
namespace CFuncNavBlocker {
    constexpr std::ptrdiff_t m_bDisabled = 0x738; // bool
    constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x73c; // int32
}

// CMoverPathNode (size: 0x5a0)
namespace CMoverPathNode {
    constexpr std::ptrdiff_t m_OnStartFromOrInSegment = 0x500; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_OnStoppedAtOrInSegment = 0x520; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_OnPassThrough = 0x540; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_OnPassThroughForward = 0x560; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_OnPassThroughReverse = 0x580; // CEntityOutputTemplate< CUtlString, char* >
}

// CEnvSoundscape (size: 0x538)
namespace CEnvSoundscape {
    constexpr std::ptrdiff_t m_OnPlay = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_flRadius = 0x4c0; // float32
    constexpr std::ptrdiff_t m_soundEventName = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x4d0; // bool
    constexpr std::ptrdiff_t m_soundscapeIndex = 0x4d4; // int32
    constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x4d8; // int32
    constexpr std::ptrdiff_t m_positionNames = 0x4e0; // CUtlSymbolLarge[8]
    constexpr std::ptrdiff_t m_hProxySoundscape = 0x520; // CHandle< CEnvSoundscape >
    constexpr std::ptrdiff_t m_bDisabled = 0x524; // bool
    constexpr std::ptrdiff_t m_soundscapeName = 0x528; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_soundEventHash = 0x530; // uint32
}

// CFuncBrush (size: 0x750)
namespace CFuncBrush {
    constexpr std::ptrdiff_t m_iSolidity = 0x730; // BrushSolidities_e
    constexpr std::ptrdiff_t m_iDisabled = 0x734; // int32
    constexpr std::ptrdiff_t m_bSolidBsp = 0x738; // bool
    constexpr std::ptrdiff_t m_iszExcludedClass = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bInvertExclusion = 0x748; // bool
    constexpr std::ptrdiff_t m_bScriptedMovement = 0x749; // bool
}

// CBodyComponentPoint (size: 0x1b0)
namespace CBodyComponentPoint {
    constexpr std::ptrdiff_t m_sceneNode = 0x80; // CGameSceneNode
}

// CPhysBox (size: 0x8d0)
namespace CPhysBox {
    constexpr std::ptrdiff_t m_damageType = 0x808; // int32
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0x80c; // int32
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0x810; // float32
    constexpr std::ptrdiff_t m_vHoverPosePosition = 0x814; // Vector
    constexpr std::ptrdiff_t m_angHoverPoseAngles = 0x820; // QAngle
    constexpr std::ptrdiff_t m_bNotSolidToWorld = 0x82c; // bool
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0x82d; // bool
    constexpr std::ptrdiff_t m_nHoverPoseFlags = 0x82e; // HoverPoseFlags_t
    constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0x830; // float32
    constexpr std::ptrdiff_t m_OnDamaged = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwakened = 0x850; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMotionEnabled = 0x868; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerUse = 0x880; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartTouch = 0x898; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hCarryingPlayer = 0x8b0; // CHandle< CBasePlayerPawn >
}

// CSoundEventAABBEntity (size: 0x570)
namespace CSoundEventAABBEntity {
    constexpr std::ptrdiff_t m_vMins = 0x558; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x564; // Vector
}

// CItemSoda (size: 0xa20)
namespace CItemSoda {
}

// CPulseCell_Timeline::TimelineEvent_t (size: 0x50)
namespace CPulseCell_Timeline_TimelineEvent_t {
    constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
    constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
}

// COmniLight (size: 0xa30)
namespace COmniLight {
    constexpr std::ptrdiff_t m_flInnerAngle = 0xa20; // float32
    constexpr std::ptrdiff_t m_flOuterAngle = 0xa24; // float32
    constexpr std::ptrdiff_t m_bShowLight = 0xa28; // bool
}

// CTriggerVolume (size: 0x740)
namespace CTriggerVolume {
    constexpr std::ptrdiff_t m_iFilterName = 0x730; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x738; // CHandle< CBaseFilter >
}

// CBtNodeCondition (size: 0x60)
namespace CBtNodeCondition {
    constexpr std::ptrdiff_t m_bNegated = 0x58; // bool
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

// CEnvExplosion (size: 0x788)
namespace CEnvExplosion {
    constexpr std::ptrdiff_t m_iMagnitude = 0x730; // int32
    constexpr std::ptrdiff_t m_flPlayerDamage = 0x734; // float32
    constexpr std::ptrdiff_t m_iRadiusOverride = 0x738; // int32
    constexpr std::ptrdiff_t m_flInnerRadius = 0x73c; // float32
    constexpr std::ptrdiff_t m_flDamageForce = 0x740; // float32
    constexpr std::ptrdiff_t m_hInflictor = 0x744; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iCustomDamageType = 0x748; // DamageTypes_t
    constexpr std::ptrdiff_t m_bCreateDebris = 0x74c; // bool
    constexpr std::ptrdiff_t m_iszCustomEffectName = 0x758; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCustomSoundName = 0x760; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bSuppressParticleImpulse = 0x768; // bool
    constexpr std::ptrdiff_t m_iClassIgnore = 0x76c; // Class_T
    constexpr std::ptrdiff_t m_iClassIgnore2 = 0x770; // Class_T
    constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0x778; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hEntityIgnore = 0x780; // CHandle< CBaseEntity >
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

// CFootstepControl (size: 0x8a0)
namespace CFootstepControl {
    constexpr std::ptrdiff_t m_source = 0x890; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_destination = 0x898; // CUtlSymbolLarge
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

// CParticleSystem (size: 0xca8)
namespace CParticleSystem {
    constexpr std::ptrdiff_t m_szSnapshotFileName = 0x730; // char[512]
    constexpr std::ptrdiff_t m_bActive = 0x930; // bool
    constexpr std::ptrdiff_t m_bFrozen = 0x931; // bool
    constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x934; // float32
    constexpr std::ptrdiff_t m_nStopType = 0x938; // int32
    constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x93c; // bool
    constexpr std::ptrdiff_t m_iEffectIndex = 0x940; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_flStartTime = 0x948; // GameTime_t
    constexpr std::ptrdiff_t m_flPreSimTime = 0x94c; // float32
    constexpr std::ptrdiff_t m_vServerControlPoints = 0x950; // Vector[4]
    constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x980; // uint8[4]
    constexpr std::ptrdiff_t m_hControlPointEnts = 0x984; // CHandle< CBaseEntity >[64]
    constexpr std::ptrdiff_t m_bNoSave = 0xa84; // bool
    constexpr std::ptrdiff_t m_bNoFreeze = 0xa85; // bool
    constexpr std::ptrdiff_t m_bNoRamp = 0xa86; // bool
    constexpr std::ptrdiff_t m_bStartActive = 0xa87; // bool
    constexpr std::ptrdiff_t m_iszEffectName = 0xa88; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszControlPointNames = 0xa90; // CUtlSymbolLarge[64]
    constexpr std::ptrdiff_t m_nDataCP = 0xc90; // int32
    constexpr std::ptrdiff_t m_vecDataCPValue = 0xc94; // Vector
    constexpr std::ptrdiff_t m_nTintCP = 0xca0; // int32
    constexpr std::ptrdiff_t m_clrTint = 0xca4; // Color
}

// CTriggerBrush (size: 0x780)
namespace CTriggerBrush {
    constexpr std::ptrdiff_t m_OnStartTouch = 0x730; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndTouch = 0x748; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUse = 0x760; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iInputFilter = 0x778; // int32
    constexpr std::ptrdiff_t m_iDontMessageParent = 0x77c; // int32
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

// CSoundAreaEntityBase (size: 0x4c8)
namespace CSoundAreaEntityBase {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_iszSoundAreaType = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vPos = 0x4b8; // Vector
}

// CWeaponM4A1Silencer (size: 0x1150)
namespace CWeaponM4A1Silencer {
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

// CItemAssaultSuit (size: 0xac0)
namespace CItemAssaultSuit {
}

// CBeam (size: 0x7d0)
namespace CBeam {
    constexpr std::ptrdiff_t m_flFrameRate = 0x730; // float32
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x734; // float32
    constexpr std::ptrdiff_t m_flFireTime = 0x738; // GameTime_t
    constexpr std::ptrdiff_t m_flDamage = 0x73c; // float32
    constexpr std::ptrdiff_t m_nNumBeamEnts = 0x740; // uint8
    constexpr std::ptrdiff_t m_hBaseMaterial = 0x748; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_nHaloIndex = 0x750; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_nBeamType = 0x758; // BeamType_t
    constexpr std::ptrdiff_t m_nBeamFlags = 0x75c; // uint32
    constexpr std::ptrdiff_t m_hAttachEntity = 0x760; // CHandle< CBaseEntity >[10]
    constexpr std::ptrdiff_t m_nAttachIndex = 0x788; // AttachmentHandle_t[10]
    constexpr std::ptrdiff_t m_fWidth = 0x794; // float32
    constexpr std::ptrdiff_t m_fEndWidth = 0x798; // float32
    constexpr std::ptrdiff_t m_fFadeLength = 0x79c; // float32
    constexpr std::ptrdiff_t m_fHaloScale = 0x7a0; // float32
    constexpr std::ptrdiff_t m_fAmplitude = 0x7a4; // float32
    constexpr std::ptrdiff_t m_fStartFrame = 0x7a8; // float32
    constexpr std::ptrdiff_t m_fSpeed = 0x7ac; // float32
    constexpr std::ptrdiff_t m_flFrame = 0x7b0; // float32
    constexpr std::ptrdiff_t m_nClipStyle = 0x7b4; // BeamClipStyle_t
    constexpr std::ptrdiff_t m_bTurnedOff = 0x7b8; // bool
    constexpr std::ptrdiff_t m_vecEndPos = 0x7bc; // VectorWS
    constexpr std::ptrdiff_t m_hEndEntity = 0x7c8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nDissolveType = 0x7cc; // int32
}

// CLogicEventListener (size: 0x4e8)
namespace CLogicEventListener {
    constexpr std::ptrdiff_t m_strEventName = 0x4b8; // CUtlString
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4c0; // bool
    constexpr std::ptrdiff_t m_nTeam = 0x4c4; // int32
    constexpr std::ptrdiff_t m_OnEventFired = 0x4c8; // CEntityOutputTemplate< CUtlString, char* >
}

// CCSGO_TeamSelectTerroristPosition (size: 0xcc0)
namespace CCSGO_TeamSelectTerroristPosition {
}

// CInfoData (size: 0x840)
namespace CInfoData {
}

// CWeaponNegev (size: 0x1150)
namespace CWeaponNegev {
}

// CWeaponElite (size: 0x1150)
namespace CWeaponElite {
}

// CBasePlayerPawn (size: 0xd20)
namespace CBasePlayerPawn {
    constexpr std::ptrdiff_t m_pWeaponServices = 0xb70; // CPlayer_WeaponServices*
    constexpr std::ptrdiff_t m_pItemServices = 0xb78; // CPlayer_ItemServices*
    constexpr std::ptrdiff_t m_pAutoaimServices = 0xb80; // CPlayer_AutoaimServices*
    constexpr std::ptrdiff_t m_pObserverServices = 0xb88; // CPlayer_ObserverServices*
    constexpr std::ptrdiff_t m_pWaterServices = 0xb90; // CPlayer_WaterServices*
    constexpr std::ptrdiff_t m_pUseServices = 0xb98; // CPlayer_UseServices*
    constexpr std::ptrdiff_t m_pFlashlightServices = 0xba0; // CPlayer_FlashlightServices*
    constexpr std::ptrdiff_t m_pCameraServices = 0xba8; // CPlayer_CameraServices*
    constexpr std::ptrdiff_t m_pMovementServices = 0xbb0; // CPlayer_MovementServices*
    constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xbc0; // CUtlVectorEmbeddedNetworkVar< ViewAngleServerChange_t >
    constexpr std::ptrdiff_t v_angle = 0xc28; // QAngle
    constexpr std::ptrdiff_t v_anglePrevious = 0xc34; // QAngle
    constexpr std::ptrdiff_t m_iHideHUD = 0xc40; // uint32
    constexpr std::ptrdiff_t m_skybox3d = 0xc48; // sky3dparams_t
    constexpr std::ptrdiff_t m_fTimeLastHurt = 0xcd8; // GameTime_t
    constexpr std::ptrdiff_t m_flDeathTime = 0xcdc; // GameTime_t
    constexpr std::ptrdiff_t m_fNextSuicideTime = 0xce0; // GameTime_t
    constexpr std::ptrdiff_t m_fInitHUD = 0xce4; // bool
    constexpr std::ptrdiff_t m_pExpresser = 0xce8; // CAI_Expresser*
    constexpr std::ptrdiff_t m_hController = 0xcf0; // CHandle< CBasePlayerController >
    constexpr std::ptrdiff_t m_hDefaultController = 0xcf4; // CHandle< CBasePlayerController >
    constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xcfc; // float32
    constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xd00; // float32
    constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xd04; // CEntityIndex
    constexpr std::ptrdiff_t m_sndOpvarLatchData = 0xd08; // CUtlVector< sndopvarlatchdata_t >
}

// WeaponPurchaseCount_t (size: 0x38)
namespace WeaponPurchaseCount_t {
    constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
    constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
}

// CBasePulseGraphInstance (size: 0x118)
namespace CBasePulseGraphInstance {
}

// FilterHealth (size: 0x4f0)
namespace FilterHealth {
    constexpr std::ptrdiff_t m_bAdrenalineActive = 0x4e0; // bool
    constexpr std::ptrdiff_t m_iHealthMin = 0x4e4; // int32
    constexpr std::ptrdiff_t m_iHealthMax = 0x4e8; // int32
}

// CCSSprite (size: 0x7a0)
namespace CCSSprite {
}

// CMathColorBlend (size: 0x4d8)
namespace CMathColorBlend {
    constexpr std::ptrdiff_t m_flInMin = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flInMax = 0x4ac; // float32
    constexpr std::ptrdiff_t m_OutColor1 = 0x4b0; // Color
    constexpr std::ptrdiff_t m_OutColor2 = 0x4b4; // Color
    constexpr std::ptrdiff_t m_OutValue = 0x4b8; // CEntityOutputTemplate< Color, Color >
}

// CShower (size: 0x730)
namespace CShower {
}

// CPulseCell_Inflow_GraphHook (size: 0x90)
namespace CPulseCell_Inflow_GraphHook {
    constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
}

// CScriptNavBlocker (size: 0x758)
namespace CScriptNavBlocker {
    constexpr std::ptrdiff_t m_vExtent = 0x748; // Vector
}

// CEntityBlocker (size: 0x730)
namespace CEntityBlocker {
}

// SignatureOutflow_Resume (size: 0x48)
namespace SignatureOutflow_Resume {
}

// CPathSimpleAPI (size: 0x8)
namespace CPathSimpleAPI {
}

// CCSObserverPawn (size: 0xea0)
namespace CCSObserverPawn {
}

// CTriggerActiveWeaponDetect (size: 0x8b0)
namespace CTriggerActiveWeaponDetect {
    constexpr std::ptrdiff_t m_OnTouchedActiveWeapon = 0x890; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszWeaponClassName = 0x8a8; // CUtlSymbolLarge
}

// CFuncLadderAlias_func_useableladder (size: 0x7c0)
namespace CFuncLadderAlias_func_useableladder {
}

// CSpriteOriented (size: 0x7a0)
namespace CSpriteOriented {
}

// CPointServerCommand (size: 0x4a8)
namespace CPointServerCommand {
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
    constexpr std::ptrdiff_t m_vecPanelVertices = 0x40; // CNetworkUtlVectorBase< Vector2D >
    constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58; // CNetworkUtlVectorBase< Vector4D >
    constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70; // float32
    constexpr std::ptrdiff_t m_bHasParent = 0x74; // bool
    constexpr std::ptrdiff_t m_bParentFrozen = 0x75; // bool
    constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
}

// CPlayerSprayDecal (size: 0x808)
namespace CPlayerSprayDecal {
    constexpr std::ptrdiff_t m_nUniqueID = 0x730; // int32
    constexpr std::ptrdiff_t m_unAccountID = 0x734; // uint32
    constexpr std::ptrdiff_t m_unTraceID = 0x738; // uint32
    constexpr std::ptrdiff_t m_rtGcTime = 0x73c; // uint32
    constexpr std::ptrdiff_t m_vecEndPos = 0x740; // Vector
    constexpr std::ptrdiff_t m_vecStart = 0x74c; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x758; // Vector
    constexpr std::ptrdiff_t m_vecNormal = 0x764; // Vector
    constexpr std::ptrdiff_t m_nPlayer = 0x770; // int32
    constexpr std::ptrdiff_t m_nEntity = 0x774; // int32
    constexpr std::ptrdiff_t m_nHitbox = 0x778; // int32
    constexpr std::ptrdiff_t m_flCreationTime = 0x77c; // float32
    constexpr std::ptrdiff_t m_nTintID = 0x780; // int32
    constexpr std::ptrdiff_t m_nVersion = 0x784; // uint8
    constexpr std::ptrdiff_t m_ubSignature = 0x785; // uint8[128]
}

// CFuncWater (size: 0x848)
namespace CFuncWater {
    constexpr std::ptrdiff_t m_BuoyancyHelper = 0x730; // CBuoyancyHelper
}

// CCSGameModeRules (size: 0x30)
namespace CCSGameModeRules {
    constexpr std::ptrdiff_t _m_pChainEntity = 0x8; // CNetworkVarChainer
}

// CEconEntity (size: 0xde0)
namespace CEconEntity {
    constexpr std::ptrdiff_t m_AttributeManager = 0xac0; // CAttributeContainer
    constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xdb8; // uint32
    constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xdbc; // uint32
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xdc0; // int32
    constexpr std::ptrdiff_t m_nFallbackSeed = 0xdc4; // int32
    constexpr std::ptrdiff_t m_flFallbackWear = 0xdc8; // float32
    constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xdcc; // int32
    constexpr std::ptrdiff_t m_hOldProvidee = 0xdd0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iOldOwnerClass = 0xdd4; // int32
}

// CTankTargetChange (size: 0x4c0)
namespace CTankTargetChange {
    constexpr std::ptrdiff_t m_newTarget = 0x4a8; // CVariantBase< CVariantDefaultAllocator >
    constexpr std::ptrdiff_t m_newTargetName = 0x4b8; // CUtlSymbolLarge
}

// CCSPlayer_WaterServices (size: 0x80)
namespace CCSPlayer_WaterServices {
    constexpr std::ptrdiff_t m_NextDrownDamageTime = 0x48; // GameTime_t
    constexpr std::ptrdiff_t m_nDrownDmgRate = 0x4c; // int32
    constexpr std::ptrdiff_t m_AirFinishedTime = 0x50; // GameTime_t
    constexpr std::ptrdiff_t m_flWaterJumpTime = 0x54; // float32
    constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x58; // Vector
    constexpr std::ptrdiff_t m_flSwimSoundTime = 0x64; // float32
}

// CLogicDistanceCheck (size: 0x508)
namespace CLogicDistanceCheck {
    constexpr std::ptrdiff_t m_iszEntityA = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityB = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flZone1Distance = 0x4b8; // float32
    constexpr std::ptrdiff_t m_flZone2Distance = 0x4bc; // float32
    constexpr std::ptrdiff_t m_InZone1 = 0x4c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_InZone2 = 0x4d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_InZone3 = 0x4f0; // CEntityIOOutput
}

// CEnvCombinedLightProbeVolume (size: 0x15f0)
namespace CEnvCombinedLightProbeVolume {
    constexpr std::ptrdiff_t m_Entity_Color = 0x1520; // Color
    constexpr std::ptrdiff_t m_Entity_flBrightness = 0x1524; // float32
    constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1528; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1530; // bool
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1538; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1540; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1548; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1550; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1558; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1560; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1568; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1570; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1578; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1580; // Vector
    constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x158c; // Vector
    constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1598; // bool
    constexpr std::ptrdiff_t m_Entity_nHandshake = 0x159c; // int32
    constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x15a0; // int32
    constexpr std::ptrdiff_t m_Entity_nPriority = 0x15a4; // int32
    constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x15a8; // bool
    constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x15ac; // float32
    constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x15b0; // Vector
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x15bc; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x15c0; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x15c4; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x15c8; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x15cc; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x15d0; // int32
    constexpr std::ptrdiff_t m_Entity_bEnabled = 0x15e9; // bool
}

// ViewAngleServerChange_t (size: 0x48)
namespace ViewAngleServerChange_t {
    constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
    constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
    constexpr std::ptrdiff_t nIndex = 0x40; // uint32
}

// CLogicDistanceAutosave (size: 0x4c0)
namespace CLogicDistanceAutosave {
    constexpr std::ptrdiff_t m_iszTargetEntity = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x4b0; // float32
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4b4; // bool
    constexpr std::ptrdiff_t m_bCheckCough = 0x4b5; // bool
    constexpr std::ptrdiff_t m_bThinkDangerous = 0x4b6; // bool
    constexpr std::ptrdiff_t m_flDangerousTime = 0x4b8; // float32
}

// CLogicBranch (size: 0x4f8)
namespace CLogicBranch {
    constexpr std::ptrdiff_t m_bInValue = 0x4a8; // bool
    constexpr std::ptrdiff_t m_Listeners = 0x4b0; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_OnTrue = 0x4c8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFalse = 0x4e0; // CEntityIOOutput
}

// CPulseCell_Outflow_ScriptedSequence (size: 0x150)
namespace CPulseCell_Outflow_ScriptedSequence {
    constexpr std::ptrdiff_t m_szSyncGroup = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_nExpectedNumSequencesInSyncGroup = 0x50; // int32
    constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x54; // bool
    constexpr std::ptrdiff_t m_bDontTeleportAtEnd = 0x55; // bool
    constexpr std::ptrdiff_t m_bDisallowInterrupts = 0x56; // bool
    constexpr std::ptrdiff_t m_scriptedSequenceDataMain = 0x58; // PulseScriptedSequenceData_t
    constexpr std::ptrdiff_t m_vecAdditionalActors = 0x90; // CUtlVector< PulseScriptedSequenceData_t >
    constexpr std::ptrdiff_t m_OnFinished = 0xa8; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0xf0; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_Triggers = 0x138; // CUtlVector< CPulse_OutflowConnection >
}

// CFuncTrackChange (size: 0x838)
namespace CFuncTrackChange {
    constexpr std::ptrdiff_t m_trackTop = 0x7f8; // CPathTrack*
    constexpr std::ptrdiff_t m_trackBottom = 0x800; // CPathTrack*
    constexpr std::ptrdiff_t m_train = 0x808; // CFuncTrackTrain*
    constexpr std::ptrdiff_t m_trackTopName = 0x810; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_trackBottomName = 0x818; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_trainName = 0x820; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_code = 0x828; // TRAIN_CODE
    constexpr std::ptrdiff_t m_targetState = 0x82c; // int32
    constexpr std::ptrdiff_t m_use = 0x830; // int32
}

// CFuncTrackTrain (size: 0x858)
namespace CFuncTrackTrain {
    constexpr std::ptrdiff_t m_ppath = 0x730; // CHandle< CPathTrack >
    constexpr std::ptrdiff_t m_length = 0x734; // float32
    constexpr std::ptrdiff_t m_vPosPrev = 0x738; // Vector
    constexpr std::ptrdiff_t m_angPrev = 0x744; // QAngle
    constexpr std::ptrdiff_t m_controlMins = 0x750; // Vector
    constexpr std::ptrdiff_t m_controlMaxs = 0x75c; // Vector
    constexpr std::ptrdiff_t m_lastBlockPos = 0x768; // Vector
    constexpr std::ptrdiff_t m_lastBlockTick = 0x774; // int32
    constexpr std::ptrdiff_t m_flVolume = 0x778; // float32
    constexpr std::ptrdiff_t m_flBank = 0x77c; // float32
    constexpr std::ptrdiff_t m_oldSpeed = 0x780; // float32
    constexpr std::ptrdiff_t m_flBlockDamage = 0x784; // float32
    constexpr std::ptrdiff_t m_height = 0x788; // float32
    constexpr std::ptrdiff_t m_maxSpeed = 0x78c; // float32
    constexpr std::ptrdiff_t m_dir = 0x790; // float32
    constexpr std::ptrdiff_t m_iszSoundMove = 0x798; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundMovePing = 0x7a0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundStart = 0x7a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundStop = 0x7b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strPathTarget = 0x7b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0x7c0; // float32
    constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0x7c4; // float32
    constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0x7c8; // GameTime_t
    constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0x7cc; // float32
    constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0x7d0; // float32
    constexpr std::ptrdiff_t m_eOrientationType = 0x7d4; // TrainOrientationType_t
    constexpr std::ptrdiff_t m_eVelocityType = 0x7d8; // TrainVelocityType_t
    constexpr std::ptrdiff_t m_OnStart = 0x7f0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNext = 0x808; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0x820; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bManualSpeedChanges = 0x838; // bool
    constexpr std::ptrdiff_t m_flDesiredSpeed = 0x83c; // float32
    constexpr std::ptrdiff_t m_flSpeedChangeTime = 0x840; // GameTime_t
    constexpr std::ptrdiff_t m_flAccelSpeed = 0x844; // float32
    constexpr std::ptrdiff_t m_flDecelSpeed = 0x848; // float32
    constexpr std::ptrdiff_t m_bAccelToSpeed = 0x84c; // bool
    constexpr std::ptrdiff_t m_flNextMPSoundTime = 0x850; // GameTime_t
}

// CEnvInstructorHint (size: 0x518)
namespace CEnvInstructorHint {
    constexpr std::ptrdiff_t m_iszName = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszReplace_Key = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iTimeout = 0x4c0; // int32
    constexpr std::ptrdiff_t m_iDisplayLimit = 0x4c4; // int32
    constexpr std::ptrdiff_t m_iszIcon_Onscreen = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszIcon_Offscreen = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCaption = 0x4d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszActivatorCaption = 0x4e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Color = 0x4e8; // Color
    constexpr std::ptrdiff_t m_fIconOffset = 0x4ec; // float32
    constexpr std::ptrdiff_t m_fRange = 0x4f0; // float32
    constexpr std::ptrdiff_t m_iPulseOption = 0x4f4; // uint8
    constexpr std::ptrdiff_t m_iAlphaOption = 0x4f5; // uint8
    constexpr std::ptrdiff_t m_iShakeOption = 0x4f6; // uint8
    constexpr std::ptrdiff_t m_bStatic = 0x4f7; // bool
    constexpr std::ptrdiff_t m_bNoOffscreen = 0x4f8; // bool
    constexpr std::ptrdiff_t m_bForceCaption = 0x4f9; // bool
    constexpr std::ptrdiff_t m_iInstanceType = 0x4fc; // int32
    constexpr std::ptrdiff_t m_bSuppressRest = 0x500; // bool
    constexpr std::ptrdiff_t m_iszBinding = 0x508; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAllowNoDrawTarget = 0x510; // bool
    constexpr std::ptrdiff_t m_bAutoStart = 0x511; // bool
    constexpr std::ptrdiff_t m_bLocalPlayerOnly = 0x512; // bool
}

// CEnvWind (size: 0x5d8)
namespace CEnvWind {
    constexpr std::ptrdiff_t m_EnvWindShared = 0x4a8; // CEnvWindShared
}

// CSoundEventPathCornerEntity (size: 0x5f8)
namespace CSoundEventPathCornerEntity {
    constexpr std::ptrdiff_t m_iszPathCorner = 0x558; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iCountMax = 0x560; // int32
    constexpr std::ptrdiff_t m_flDistanceMax = 0x564; // float32
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x568; // float32
    constexpr std::ptrdiff_t m_flDotProductMax = 0x56c; // float32
    constexpr std::ptrdiff_t m_bPlaying = 0x570; // bool
    constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x598; // CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t >
}

// CCSPlayerBase_CameraServices (size: 0x1b0)
namespace CCSPlayerBase_CameraServices {
    constexpr std::ptrdiff_t m_iFOV = 0x178; // uint32
    constexpr std::ptrdiff_t m_iFOVStart = 0x17c; // uint32
    constexpr std::ptrdiff_t m_flFOVTime = 0x180; // GameTime_t
    constexpr std::ptrdiff_t m_flFOVRate = 0x184; // float32
    constexpr std::ptrdiff_t m_hZoomOwner = 0x188; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTriggerFogList = 0x190; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1a8; // CHandle< CBaseEntity >
}

// CPulseCell_Inflow_BaseEntrypoint (size: 0x80)
namespace CPulseCell_Inflow_BaseEntrypoint {
    constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
}

// CDynamicNavConnectionsVolume (size: 0x8e0)
namespace CDynamicNavConnectionsVolume {
    constexpr std::ptrdiff_t m_iszConnectionTarget = 0x8a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vecConnections = 0x8b0; // CUtlVector< DynamicVolumeDef_t >
    constexpr std::ptrdiff_t m_sTransitionType = 0x8c8; // CGlobalSymbol
    constexpr std::ptrdiff_t m_bConnectionsEnabled = 0x8d0; // bool
    constexpr std::ptrdiff_t m_flTargetAreaSearchRadius = 0x8d4; // float32
    constexpr std::ptrdiff_t m_flUpdateDistance = 0x8d8; // float32
    constexpr std::ptrdiff_t m_flMaxConnectionDistance = 0x8dc; // float32
}

// CConstraintAnchor (size: 0xa30)
namespace CConstraintAnchor {
    constexpr std::ptrdiff_t m_massScale = 0xa20; // float32
}

// CPulseCell_WaitForCursorsWithTagBase (size: 0x98)
namespace CPulseCell_WaitForCursorsWithTagBase {
    constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
    constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
}

// CCSPlayerPawn (size: 0x1c30)
namespace CCSPlayerPawn {
    constexpr std::ptrdiff_t m_pBulletServices = 0xe78; // CCSPlayer_BulletServices*
    constexpr std::ptrdiff_t m_pHostageServices = 0xe80; // CCSPlayer_HostageServices*
    constexpr std::ptrdiff_t m_pBuyServices = 0xe88; // CCSPlayer_BuyServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0xe90; // CCSPlayer_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pRadioServices = 0xe98; // CCSPlayer_RadioServices*
    constexpr std::ptrdiff_t m_pDamageReactServices = 0xea0; // CCSPlayer_DamageReactServices*
    constexpr std::ptrdiff_t m_nCharacterDefIndex = 0xea8; // uint16
    constexpr std::ptrdiff_t m_bHasFemaleVoice = 0xeaa; // bool
    constexpr std::ptrdiff_t m_strVOPrefix = 0xeb0; // CUtlString
    constexpr std::ptrdiff_t m_szLastPlaceName = 0xeb8; // char[18]
    constexpr std::ptrdiff_t m_bInHostageResetZone = 0xfa8; // bool
    constexpr std::ptrdiff_t m_bInBuyZone = 0xfa9; // bool
    constexpr std::ptrdiff_t m_TouchingBuyZones = 0xfb0; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_bWasInBuyZone = 0xfc8; // bool
    constexpr std::ptrdiff_t m_bInHostageRescueZone = 0xfc9; // bool
    constexpr std::ptrdiff_t m_bInBombZone = 0xfca; // bool
    constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0xfcb; // bool
    constexpr std::ptrdiff_t m_iRetakesOffering = 0xfcc; // int32
    constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0xfd0; // int32
    constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0xfd4; // bool
    constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0xfd5; // bool
    constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0xfd8; // int32
    constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0xfdc; // loadout_slot_t
    constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0xfe0; // GameTime_t
    constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0xfe4; // float32
    constexpr std::ptrdiff_t m_aimPunchAngle = 0xfe8; // QAngle
    constexpr std::ptrdiff_t m_aimPunchAngleVel = 0xff4; // QAngle
    constexpr std::ptrdiff_t m_aimPunchTickBase = 0x1000; // GameTick_t
    constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1004; // float32
    constexpr std::ptrdiff_t m_aimPunchCache = 0x1008; // CUtlVector< QAngle >
    constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1020; // bool
    constexpr std::ptrdiff_t m_lastLandTime = 0x16c0; // GameTime_t
    constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x16c4; // bool
    constexpr std::ptrdiff_t m_iPlayerLocked = 0x16c8; // int32
    constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x16d0; // GameTime_t
    constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x16d4; // GameTime_t
    constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x16d8; // bool
    constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x16dc; // int32
    constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x16e0; // Vector
    constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x16ec; // Vector
    constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x16f8; // char[64]
    constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1738; // bool
    constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x173c; // Vector
    constexpr std::ptrdiff_t m_EconGloves = 0x1748; // CEconItemView
    constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x19f0; // uint8
    constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x19f4; // QAngle
    constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x1a00; // bool
    constexpr std::ptrdiff_t m_bLeftHanded = 0x1a01; // bool
    constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x1a04; // GameTime_t
    constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x1a08; // float32
    constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x1a0c; // float32
    constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x1a10; // float32
    constexpr std::ptrdiff_t m_flViewmodelFOV = 0x1a14; // float32
    constexpr std::ptrdiff_t m_bIsWalking = 0x1a18; // bool
    constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0x1a1c; // float32
    constexpr std::ptrdiff_t m_fLastGivenBombTime = 0x1a20; // float32
    constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0x1a24; // float32
    constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0x1a28; // uint32
    constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0x1a2c; // float32
    constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1a30; // GameTime_t
    constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0x1a34; // bool
    constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1a38; // CEntityIndex
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1a40; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x1a58; // int32
    constexpr std::ptrdiff_t m_bIsScoped = 0x1a5c; // bool
    constexpr std::ptrdiff_t m_bResumeZoom = 0x1a5d; // bool
    constexpr std::ptrdiff_t m_bIsDefusing = 0x1a5e; // bool
    constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1a5f; // bool
    constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1a60; // CSPlayerBlockingUseAction_t
    constexpr std::ptrdiff_t m_flEmitSoundTime = 0x1a64; // GameTime_t
    constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1a68; // bool
    constexpr std::ptrdiff_t m_iBombSiteIndex = 0x1a6c; // CEntityIndex
    constexpr std::ptrdiff_t m_nWhichBombZone = 0x1a70; // int32
    constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x1a74; // bool
    constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x1a75; // bool
    constexpr std::ptrdiff_t m_iShotsFired = 0x1a78; // int32
    constexpr std::ptrdiff_t m_flFlinchStack = 0x1a7c; // float32
    constexpr std::ptrdiff_t m_flVelocityModifier = 0x1a80; // float32
    constexpr std::ptrdiff_t m_flHitHeading = 0x1a84; // float32
    constexpr std::ptrdiff_t m_nHitBodyPart = 0x1a88; // int32
    constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x1a8c; // Vector
    constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1a98; // bool
    constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1a9c; // float32
    constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1aa0; // bool
    constexpr std::ptrdiff_t m_LastHitBox = 0x1aa4; // int32
    constexpr std::ptrdiff_t m_pBot = 0x1aa8; // CCSBot*
    constexpr std::ptrdiff_t m_bBotAllowActive = 0x1ab0; // bool
    constexpr std::ptrdiff_t m_thirdPersonHeading = 0x1ab4; // QAngle
    constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x1ac0; // float32
    constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1ac4; // float32
    constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x1ac8; // Vector
    constexpr std::ptrdiff_t m_nLastPickupPriority = 0x1ad4; // int32
    constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0x1ad8; // float32
    constexpr std::ptrdiff_t m_ArmorValue = 0x1adc; // int32
    constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1ae0; // uint16
    constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1ae2; // uint16
    constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1ae4; // uint16
    constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x1ae8; // int32
    constexpr std::ptrdiff_t m_bIsSpawning = 0x1aec; // bool
    constexpr std::ptrdiff_t m_iDeathFlags = 0x1af8; // int32
    constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1afc; // bool
    constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1b00; // float32
    constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1b04; // Vector
    constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1b10; // uint32[5]
    constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x1b24; // Color
    constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1b28; // GameTime_t
    constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x1b2c; // bool
    constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1b30; // QAngle
    constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x1b3c; // Vector
    constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1b48; // Vector
    constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1b54; // QAngle[2]
    constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1b6c; // Vector[2]
    constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1b84; // Vector[2]
    constexpr std::ptrdiff_t m_PredictedDamageTags = 0x1ba0; // CUtlVectorEmbeddedNetworkVar< PredictedDamageTag_t >
    constexpr std::ptrdiff_t m_nHighestAppliedDamageTagTick = 0x1c08; // int32
    constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x1c0c; // bool
    constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1c0d; // bool
    constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x1c10; // GameTime_t
    constexpr std::ptrdiff_t m_bGunGameImmunity = 0x1c14; // bool
    constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x1c18; // float32
    constexpr std::ptrdiff_t m_angEyeAngles = 0x1c1c; // QAngle
}

// CEnvLightProbeVolume (size: 0x1538)
namespace CEnvLightProbeVolume {
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x14a0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x14a8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x14b0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x14b8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x14c0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x14c8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x14d0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x14d8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x14e0; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x14e8; // Vector
    constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x14f4; // Vector
    constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1500; // bool
    constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1504; // int32
    constexpr std::ptrdiff_t m_Entity_nPriority = 0x1508; // int32
    constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x150c; // bool
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1510; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1514; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1518; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x151c; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1520; // int32
    constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1524; // int32
    constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1531; // bool
}

// SpawnPoint (size: 0x4b8)
namespace SpawnPoint {
    constexpr std::ptrdiff_t m_iPriority = 0x4a8; // int32
    constexpr std::ptrdiff_t m_bEnabled = 0x4ac; // bool
    constexpr std::ptrdiff_t m_nType = 0x4b0; // int32
}

// CFuncMoverAPI (size: 0x8)
namespace CFuncMoverAPI {
}

// CGameSceneNode (size: 0x130)
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
    constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xec; // int16
    constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xee; // bool
    constexpr std::ptrdiff_t m_bDormant = 0xef; // bool
    constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xf0; // bool
    constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0; // bitfield:2
    constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xf3; // uint8
    constexpr std::ptrdiff_t m_nHierarchyType = 0xf4; // uint8
    constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xf5; // uint8
    constexpr std::ptrdiff_t m_name = 0xf8; // CUtlStringToken
    constexpr std::ptrdiff_t m_hierarchyAttachName = 0x10c; // CUtlStringToken
    constexpr std::ptrdiff_t m_flZOffset = 0x110; // float32
    constexpr std::ptrdiff_t m_flClientLocalScale = 0x114; // float32
    constexpr std::ptrdiff_t m_vRenderOrigin = 0x118; // Vector
}

// CWeaponM249 (size: 0x1150)
namespace CWeaponM249 {
}

// CRopeKeyframeAlias_move_rope (size: 0x788)
namespace CRopeKeyframeAlias_move_rope {
}

// CPulseServerFuncs_Sounds (size: 0x1)
namespace CPulseServerFuncs_Sounds {
}

// CPulsePhysicsConstraintsFuncs (size: 0x1)
namespace CPulsePhysicsConstraintsFuncs {
}

// CPlayer_ObserverServices (size: 0x58)
namespace CPlayer_ObserverServices {
    constexpr std::ptrdiff_t m_iObserverMode = 0x48; // uint8
    constexpr std::ptrdiff_t m_hObserverTarget = 0x4c; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iObserverLastMode = 0x50; // ObserverMode_t
    constexpr std::ptrdiff_t m_bForcedObserverMode = 0x54; // bool
}

// CLogicScript (size: 0x4a8)
namespace CLogicScript {
}

// CAttributeManager::cached_attribute_float_t (size: 0x18)
namespace CAttributeManager_cached_attribute_float_t {
    constexpr std::ptrdiff_t flIn = 0x0; // float32
    constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t flOut = 0x10; // float32
}

// CPulseGraphInstance_ServerEntity (size: 0x1b8)
namespace CPulseGraphInstance_ServerEntity {
    constexpr std::ptrdiff_t m_hOwner = 0x190; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bActivated = 0x194; // bool
    constexpr std::ptrdiff_t m_sNameFixupStaticPrefix = 0x198; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sNameFixupParent = 0x1a0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sNameFixupLocal = 0x1a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sProceduralWorldNameForRelays = 0x1b0; // CUtlSymbolLarge
}

// CSceneEntityAlias_logic_choreographed_scene (size: 0x730)
namespace CSceneEntityAlias_logic_choreographed_scene {
}

// CRagdollManager (size: 0x4b8)
namespace CRagdollManager {
    constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4a8; // int8
    constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4ac; // int32
    constexpr std::ptrdiff_t m_bSaveImportant = 0x4b0; // bool
    constexpr std::ptrdiff_t m_bCanTakeDamage = 0x4b1; // bool
}

// CPostProcessingVolume (size: 0x8d0)
namespace CPostProcessingVolume {
    constexpr std::ptrdiff_t m_hPostSettings = 0x8a0; // CStrongHandle< InfoForResourceTypeCPostProcessingResource >
    constexpr std::ptrdiff_t m_flFadeDuration = 0x8a8; // float32
    constexpr std::ptrdiff_t m_flMinLogExposure = 0x8ac; // float32
    constexpr std::ptrdiff_t m_flMaxLogExposure = 0x8b0; // float32
    constexpr std::ptrdiff_t m_flMinExposure = 0x8b4; // float32
    constexpr std::ptrdiff_t m_flMaxExposure = 0x8b8; // float32
    constexpr std::ptrdiff_t m_flExposureCompensation = 0x8bc; // float32
    constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x8c0; // float32
    constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x8c4; // float32
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x8c8; // float32
    constexpr std::ptrdiff_t m_bMaster = 0x8cc; // bool
    constexpr std::ptrdiff_t m_bExposureControl = 0x8cd; // bool
}

// CPointProximitySensor (size: 0x4d0)
namespace CPointProximitySensor {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4ac; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_Distance = 0x4b0; // CEntityOutputTemplate< float32, float32 >
}

// CPulse_InvokeBinding (size: 0xb0)
namespace CPulse_InvokeBinding {
    constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
    constexpr std::ptrdiff_t m_FuncName = 0x30; // PulseSymbol_t
    constexpr std::ptrdiff_t m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
    constexpr std::ptrdiff_t m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nSrcInstruction = 0x48; // int32
}

// CTriggerLook (size: 0x910)
namespace CTriggerLook {
    constexpr std::ptrdiff_t m_hLookTarget = 0x8a8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flFieldOfView = 0x8ac; // float32
    constexpr std::ptrdiff_t m_flLookTime = 0x8b0; // float32
    constexpr std::ptrdiff_t m_flLookTimeTotal = 0x8b4; // float32
    constexpr std::ptrdiff_t m_flLookTimeLast = 0x8b8; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeoutDuration = 0x8bc; // float32
    constexpr std::ptrdiff_t m_bTimeoutFired = 0x8c0; // bool
    constexpr std::ptrdiff_t m_bIsLooking = 0x8c1; // bool
    constexpr std::ptrdiff_t m_b2DFOV = 0x8c2; // bool
    constexpr std::ptrdiff_t m_bUseVelocity = 0x8c3; // bool
    constexpr std::ptrdiff_t m_bTestOcclusion = 0x8c4; // bool
    constexpr std::ptrdiff_t m_bTestAllVisibleOcclusion = 0x8c5; // bool
    constexpr std::ptrdiff_t m_OnTimeout = 0x8c8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartLook = 0x8e0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEndLook = 0x8f8; // CEntityIOOutput
}

// CPulseCell_Outflow_PlayVCD (size: 0x188)
namespace CPulseCell_Outflow_PlayVCD {
    constexpr std::ptrdiff_t m_hChoreoScene = 0xf0; // CStrongHandle< InfoForResourceTypeCChoreoSceneResource >
    constexpr std::ptrdiff_t m_OnPaused = 0xf8; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_OnResumed = 0x140; // CPulse_OutflowConnection
}

// CMultiplayRules (size: 0xd0)
namespace CMultiplayRules {
}

// CMolotovGrenade (size: 0x1170)
namespace CMolotovGrenade {
}

// CPhysTorque (size: 0x518)
namespace CPhysTorque {
    constexpr std::ptrdiff_t m_axis = 0x508; // VectorWS
}

// CMultiSource (size: 0x5d0)
namespace CMultiSource {
    constexpr std::ptrdiff_t m_rgEntities = 0x4a8; // CHandle< CBaseEntity >[32]
    constexpr std::ptrdiff_t m_rgTriggered = 0x528; // int32[32]
    constexpr std::ptrdiff_t m_OnTrigger = 0x5a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iTotal = 0x5c0; // int32
    constexpr std::ptrdiff_t m_globalstate = 0x5c8; // CUtlSymbolLarge
}

// CBaseCSGrenade (size: 0x1170)
namespace CBaseCSGrenade {
    constexpr std::ptrdiff_t m_bRedraw = 0x1130; // bool
    constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1131; // bool
    constexpr std::ptrdiff_t m_bPinPulled = 0x1132; // bool
    constexpr std::ptrdiff_t m_bJumpThrow = 0x1133; // bool
    constexpr std::ptrdiff_t m_bThrowAnimating = 0x1134; // bool
    constexpr std::ptrdiff_t m_fThrowTime = 0x1138; // GameTime_t
    constexpr std::ptrdiff_t m_flThrowStrength = 0x113c; // float32
    constexpr std::ptrdiff_t m_fDropTime = 0x1140; // GameTime_t
    constexpr std::ptrdiff_t m_fPinPullTime = 0x1144; // GameTime_t
    constexpr std::ptrdiff_t m_bJustPulledPin = 0x1148; // bool
    constexpr std::ptrdiff_t m_nNextHoldTick = 0x114c; // GameTick_t
    constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1150; // float32
    constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1154; // CHandle< CCSWeaponBase >
}

// CLogicAuto (size: 0x5a0)
namespace CLogicAuto {
    constexpr std::ptrdiff_t m_OnMapSpawn = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDemoMapSpawn = 0x4c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNewGame = 0x4d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLoadGame = 0x4f0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMapTransition = 0x508; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBackgroundMap = 0x520; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMultiNewMap = 0x538; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMultiNewRound = 0x550; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnVREnabled = 0x568; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnVRNotEnabled = 0x580; // CEntityIOOutput
    constexpr std::ptrdiff_t m_globalstate = 0x598; // CUtlSymbolLarge
}

// CPhysicsWire (size: 0x4b0)
namespace CPhysicsWire {
    constexpr std::ptrdiff_t m_nDensity = 0x4a8; // int32
}

// CFuncIllusionary (size: 0x730)
namespace CFuncIllusionary {
}

// CInfoDynamicShadowHint (size: 0x4c0)
namespace CInfoDynamicShadowHint {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_flRange = 0x4ac; // float32
    constexpr std::ptrdiff_t m_nImportance = 0x4b0; // int32
    constexpr std::ptrdiff_t m_nLightChoice = 0x4b4; // int32
    constexpr std::ptrdiff_t m_hLight = 0x4b8; // CHandle< CBaseEntity >
}

// CMarkupVolume (size: 0x738)
namespace CMarkupVolume {
    constexpr std::ptrdiff_t m_bDisabled = 0x730; // bool
}

// CPathNode (size: 0x500)
namespace CPathNode {
    constexpr std::ptrdiff_t m_vInTangentLocal = 0x4a8; // Vector
    constexpr std::ptrdiff_t m_vOutTangentLocal = 0x4b4; // Vector
    constexpr std::ptrdiff_t m_strParentPathUniqueID = 0x4c0; // CUtlString
    constexpr std::ptrdiff_t m_strPathNodeParameter = 0x4c8; // CUtlString
    constexpr std::ptrdiff_t m_xWSPrevParent = 0x4d0; // CTransform
    constexpr std::ptrdiff_t m_hPath = 0x4f0; // CHandle< CPathWithDynamicNodes >
}

// CCSGO_TeamSelectCounterTerroristPosition (size: 0xcc0)
namespace CCSGO_TeamSelectCounterTerroristPosition {
}

// CTriggerRemove (size: 0x8a8)
namespace CTriggerRemove {
    constexpr std::ptrdiff_t m_OnRemove = 0x890; // CEntityIOOutput
}

// CLogicGameEventListener (size: 0x4e8)
namespace CLogicGameEventListener {
    constexpr std::ptrdiff_t m_OnEventFired = 0x4b8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszGameEventName = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszGameEventItem = 0x4d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bEnabled = 0x4e0; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4e1; // bool
}

// CServerOnlyModelEntity (size: 0x730)
namespace CServerOnlyModelEntity {
}

// CPulseCell_IntervalTimer (size: 0xd8)
namespace CPulseCell_IntervalTimer {
    constexpr std::ptrdiff_t m_Completed = 0x48; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnInterval = 0x90; // SignatureOutflow_Continue
}

// CMarkupVolumeTagged_Nav (size: 0x778)
namespace CMarkupVolumeTagged_Nav {
    constexpr std::ptrdiff_t m_nScopes = 0x770; // NavScopeFlags_t
}

// CInfoPlayerTerrorist (size: 0x4b8)
namespace CInfoPlayerTerrorist {
}

// CLogicAutosave (size: 0x4b8)
namespace CLogicAutosave {
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4a8; // bool
    constexpr std::ptrdiff_t m_minHitPoints = 0x4ac; // int32
    constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x4b0; // int32
}

// CCSGO_TeamIntroTerroristPosition (size: 0xcc0)
namespace CCSGO_TeamIntroTerroristPosition {
}

// CPulseTestScriptLib (size: 0x1)
namespace CPulseTestScriptLib {
}

// CSingleplayRules (size: 0xd8)
namespace CSingleplayRules {
    constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0xd0; // bool
}

// CEnvWindShared (size: 0x130)
namespace CEnvWindShared {
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
    constexpr std::ptrdiff_t m_OnGustStart = 0x40; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGustEnd = 0x58; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hEntOwner = 0x70; // CHandle< CBaseEntity >
}

// CPointPrefab (size: 0x510)
namespace CPointPrefab {
    constexpr std::ptrdiff_t m_targetMapName = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_forceWorldGroupID = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_associatedRelayTargetName = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_fixupNames = 0x4c0; // bool
    constexpr std::ptrdiff_t m_bLoadDynamic = 0x4c1; // bool
    constexpr std::ptrdiff_t m_associatedRelayEntity = 0x4c4; // CHandle< CPointPrefab >
}

// CPulseCell_BaseLerp (size: 0x90)
namespace CPulseCell_BaseLerp {
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
}

// CEnvInstructorVRHint (size: 0x4e8)
namespace CEnvInstructorVRHint {
    constexpr std::ptrdiff_t m_iszName = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iTimeout = 0x4b8; // int32
    constexpr std::ptrdiff_t m_iszCaption = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszStartSound = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iLayoutFileType = 0x4d0; // int32
    constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x4d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iAttachType = 0x4e0; // int32
    constexpr std::ptrdiff_t m_flHeightOffset = 0x4e4; // float32
}

// CCSGameRulesProxy (size: 0x4b0)
namespace CCSGameRulesProxy {
    constexpr std::ptrdiff_t m_pGameRules = 0x4a8; // CCSGameRules*
}

// CPrecipitation (size: 0x890)
namespace CPrecipitation {
}

// CCommentaryViewPosition (size: 0x7a0)
namespace CCommentaryViewPosition {
}

// CEnvGlobal (size: 0x4e0)
namespace CEnvGlobal {
    constexpr std::ptrdiff_t m_outCounter = 0x4a8; // CEntityOutputTemplate< int32, int32 >
    constexpr std::ptrdiff_t m_globalstate = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_triggermode = 0x4d0; // int32
    constexpr std::ptrdiff_t m_initialstate = 0x4d4; // int32
    constexpr std::ptrdiff_t m_counter = 0x4d8; // int32
}

// CLogicNPCCounterOBB (size: 0x758)
namespace CLogicNPCCounterOBB {
}

// CPlatTrigger (size: 0x738)
namespace CPlatTrigger {
    constexpr std::ptrdiff_t m_pPlatform = 0x730; // CHandle< CFuncPlat >
}

// CSceneEntity (size: 0x730)
namespace CSceneEntity {
    constexpr std::ptrdiff_t m_iszSceneFile = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget1 = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget2 = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget3 = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget4 = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget5 = 0x4d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget6 = 0x4e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget7 = 0x4e8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszTarget8 = 0x4f0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTarget1 = 0x4f8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget2 = 0x4fc; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget3 = 0x500; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget4 = 0x504; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget5 = 0x508; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget6 = 0x50c; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget7 = 0x510; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget8 = 0x514; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_sTargetAttachment = 0x518; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bIsPlayingBack = 0x520; // bool
    constexpr std::ptrdiff_t m_bPaused = 0x521; // bool
    constexpr std::ptrdiff_t m_bMultiplayer = 0x522; // bool
    constexpr std::ptrdiff_t m_bAutogenerated = 0x523; // bool
    constexpr std::ptrdiff_t m_flForceClientTime = 0x524; // float32
    constexpr std::ptrdiff_t m_flCurrentTime = 0x528; // float32
    constexpr std::ptrdiff_t m_flFrameTime = 0x52c; // float32
    constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x530; // bool
    constexpr std::ptrdiff_t m_fPitch = 0x534; // float32
    constexpr std::ptrdiff_t m_bAutomated = 0x538; // bool
    constexpr std::ptrdiff_t m_nAutomatedAction = 0x53c; // int32
    constexpr std::ptrdiff_t m_flAutomationDelay = 0x540; // float32
    constexpr std::ptrdiff_t m_flAutomationTime = 0x544; // float32
    constexpr std::ptrdiff_t m_nSpeechPriority = 0x548; // int32
    constexpr std::ptrdiff_t m_bPausedViaInput = 0x54c; // bool
    constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x54d; // bool
    constexpr std::ptrdiff_t m_bWaitingForActor = 0x54e; // bool
    constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x54f; // bool
    constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x550; // bool
    constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x551; // bool
    constexpr std::ptrdiff_t m_bSceneFinished = 0x552; // bool
    constexpr std::ptrdiff_t m_hActorList = 0x558; // CNetworkUtlVectorBase< CHandle< CBaseFlex > >
    constexpr std::ptrdiff_t m_hRemoveActorList = 0x570; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_nSceneStringIndex = 0x5b8; // uint16
    constexpr std::ptrdiff_t m_OnStart = 0x5c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCompletion = 0x5d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCanceled = 0x5f0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPaused = 0x608; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnResumed = 0x620; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hInterruptScene = 0x6c8; // CHandle< CSceneEntity >
    constexpr std::ptrdiff_t m_nInterruptCount = 0x6cc; // int32
    constexpr std::ptrdiff_t m_bSceneMissing = 0x6d0; // bool
    constexpr std::ptrdiff_t m_bInterrupted = 0x6d1; // bool
    constexpr std::ptrdiff_t m_bCompletedEarly = 0x6d2; // bool
    constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0x6d3; // bool
    constexpr std::ptrdiff_t m_bRestoring = 0x6d4; // bool
    constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0x6d8; // CUtlVector< CHandle< CSceneEntity > >
    constexpr std::ptrdiff_t m_hListManagers = 0x6f0; // CUtlVector< CHandle< CSceneListManager > >
    constexpr std::ptrdiff_t m_iszSoundName = 0x708; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSequenceName = 0x710; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hActor = 0x718; // CHandle< CBaseFlex >
    constexpr std::ptrdiff_t m_hActivator = 0x71c; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_BusyActor = 0x720; // int32
    constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x724; // SceneOnPlayerDeath_t
}

// CChoreoInfoTarget (size: 0x4a8)
namespace CChoreoInfoTarget {
}

// CTonemapController2 (size: 0x4c0)
namespace CTonemapController2 {
    constexpr std::ptrdiff_t m_flAutoExposureMin = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flAutoExposureMax = 0x4ac; // float32
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x4b4; // float32
    constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x4b8; // float32
}

// CMapSharedEnvironment (size: 0x4b8)
namespace CMapSharedEnvironment {
    constexpr std::ptrdiff_t m_targetMapName = 0x4a8; // CUtlSymbolLarge
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

// CPhysMagnet (size: 0xa90)
namespace CPhysMagnet {
    constexpr std::ptrdiff_t m_OnMagnetAttach = 0xa20; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMagnetDetach = 0xa38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_massScale = 0xa50; // float32
    constexpr std::ptrdiff_t m_forceLimit = 0xa54; // float32
    constexpr std::ptrdiff_t m_torqueLimit = 0xa58; // float32
    constexpr std::ptrdiff_t m_MagnettedEntities = 0xa60; // CUtlVector< magnetted_objects_t >
    constexpr std::ptrdiff_t m_bActive = 0xa78; // bool
    constexpr std::ptrdiff_t m_bHasHitSomething = 0xa79; // bool
    constexpr std::ptrdiff_t m_flTotalMass = 0xa7c; // float32
    constexpr std::ptrdiff_t m_flRadius = 0xa80; // float32
    constexpr std::ptrdiff_t m_flNextSuckTime = 0xa84; // GameTime_t
    constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0xa88; // int32
}

// CEntityInstance (size: 0x38)
namespace CEntityInstance {
    constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
    constexpr std::ptrdiff_t m_CScriptComponent = 0x30; // CScriptComponent*
}

// CGameGibManager (size: 0x4d0)
namespace CGameGibManager {
    constexpr std::ptrdiff_t m_bAllowNewGibs = 0x4c0; // bool
    constexpr std::ptrdiff_t m_iCurrentMaxPieces = 0x4c4; // int32
    constexpr std::ptrdiff_t m_iMaxPieces = 0x4c8; // int32
    constexpr std::ptrdiff_t m_iLastFrame = 0x4cc; // int32
}

// CHandleDummy (size: 0x4a8)
namespace CHandleDummy {
}

// CFuncWallToggle (size: 0x738)
namespace CFuncWallToggle {
}

// CCSPlayer_BulletServices (size: 0x70)
namespace CCSPlayer_BulletServices {
    constexpr std::ptrdiff_t m_totalHitsOnServer = 0x48; // int32
}

// CSkyCamera (size: 0x548)
namespace CSkyCamera {
    constexpr std::ptrdiff_t m_skyboxData = 0x4a8; // sky3dparams_t
    constexpr std::ptrdiff_t m_skyboxSlotToken = 0x538; // CUtlStringToken
    constexpr std::ptrdiff_t m_bUseAngles = 0x53c; // bool
    constexpr std::ptrdiff_t m_pNext = 0x540; // CSkyCamera*
}

// CPlayer_AutoaimServices (size: 0x48)
namespace CPlayer_AutoaimServices {
}

// CItemDefuserAlias_item_defuser (size: 0xae0)
namespace CItemDefuserAlias_item_defuser {
}

// CPathCornerCrash (size: 0x4c8)
namespace CPathCornerCrash {
}

// CPhysPulley (size: 0x538)
namespace CPhysPulley {
    constexpr std::ptrdiff_t m_position2 = 0x508; // VectorWS
    constexpr std::ptrdiff_t m_offset = 0x514; // Vector[2]
    constexpr std::ptrdiff_t m_addLength = 0x52c; // float32
    constexpr std::ptrdiff_t m_gearRatio = 0x530; // float32
}

// CCSPetPlacement (size: 0x4a8)
namespace CCSPetPlacement {
}

// CWeaponMP5SD (size: 0x1150)
namespace CWeaponMP5SD {
}

// CWeaponBaseItem (size: 0x1140)
namespace CWeaponBaseItem {
    constexpr std::ptrdiff_t m_bSequenceInProgress = 0x1130; // bool
    constexpr std::ptrdiff_t m_bRedraw = 0x1131; // bool
}

// CCommentaryAuto (size: 0x4f0)
namespace CCommentaryAuto {
    constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x4c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x4d8; // CEntityIOOutput
}

// CPulseCell_Outflow_ListenForEntityOutput::CursorState_t (size: 0x4)
namespace CPulseCell_Outflow_ListenForEntityOutput_CursorState_t {
    constexpr std::ptrdiff_t m_entity = 0x0; // CHandle< CBaseEntity >
}

// ActiveModelConfig_t (size: 0x70)
namespace ActiveModelConfig_t {
    constexpr std::ptrdiff_t m_Handle = 0x30; // ModelConfigHandle_t
    constexpr std::ptrdiff_t m_Name = 0x38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AssociatedEntities = 0x40; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x58; // CNetworkUtlVectorBase< CUtlSymbolLarge >
}

// CWeaponUSPSilencer (size: 0x1150)
namespace CWeaponUSPSilencer {
}

// CSoundStackSave (size: 0x4b0)
namespace CSoundStackSave {
    constexpr std::ptrdiff_t m_iszStackName = 0x4a8; // CUtlSymbolLarge
}

// CPulseCell_Value_Curve (size: 0x88)
namespace CPulseCell_Value_Curve {
    constexpr std::ptrdiff_t m_Curve = 0x48; // CPiecewiseCurve
}

// CWeaponMag7 (size: 0x1150)
namespace CWeaponMag7 {
}

// CLogicMeasureMovement (size: 0x4d8)
namespace CLogicMeasureMovement {
    constexpr std::ptrdiff_t m_strMeasureTarget = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strMeasureReference = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strTargetReference = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hMeasureTarget = 0x4c0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hMeasureReference = 0x4c4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTarget = 0x4c8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTargetReference = 0x4cc; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flScale = 0x4d0; // float32
    constexpr std::ptrdiff_t m_nMeasureType = 0x4d4; // int32
}

// CC4 (size: 0x11b0)
namespace CC4 {
    constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0x1160; // Vector
    constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0x116c; // Vector
    constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0x1178; // bool
    constexpr std::ptrdiff_t m_bStartedArming = 0x1179; // bool
    constexpr std::ptrdiff_t m_fArmedTime = 0x117c; // GameTime_t
    constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1180; // bool
    constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1181; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0x1188; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0x11a0; // int32
    constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x11a4; // bool[7]
    constexpr std::ptrdiff_t m_bBombPlanted = 0x11ab; // bool
}

// CHostageCarriableProp (size: 0xa20)
namespace CHostageCarriableProp {
}

// CDynamicPropAlias_cable_dynamic (size: 0xc50)
namespace CDynamicPropAlias_cable_dynamic {
}

// CBaseFlexAlias_funCBaseFlex (size: 0xab0)
namespace CBaseFlexAlias_funCBaseFlex {
}

// CCSObserver_CameraServices (size: 0x1b0)
namespace CCSObserver_CameraServices {
}

// CEnvDetailController (size: 0x4b0)
namespace CEnvDetailController {
    constexpr std::ptrdiff_t m_flFadeStartDist = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flFadeEndDist = 0x4ac; // float32
}

// CTakeDamageInfoAPI (size: 0x8)
namespace CTakeDamageInfoAPI {
}

// CCSPlayerPawnBase (size: 0xe70)
namespace CCSPlayerPawnBase {
    constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xd30; // CTouchExpansionComponent
    constexpr std::ptrdiff_t m_pPingServices = 0xd80; // CCSPlayer_PingServices*
    constexpr std::ptrdiff_t m_blindUntilTime = 0xd88; // GameTime_t
    constexpr std::ptrdiff_t m_blindStartTime = 0xd8c; // GameTime_t
    constexpr std::ptrdiff_t m_iPlayerState = 0xd90; // CSPlayerState
    constexpr std::ptrdiff_t m_bRespawning = 0xe40; // bool
    constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xe41; // bool
    constexpr std::ptrdiff_t m_iNumSpawns = 0xe44; // int32
    constexpr std::ptrdiff_t m_flIdleTimeSinceLastAction = 0xe4c; // float32
    constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xe50; // float32
    constexpr std::ptrdiff_t m_flFlashDuration = 0xe54; // float32
    constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0xe58; // float32
    constexpr std::ptrdiff_t m_flProgressBarStartTime = 0xe5c; // float32
    constexpr std::ptrdiff_t m_iProgressBarDuration = 0xe60; // int32
    constexpr std::ptrdiff_t m_hOriginalController = 0xe64; // CHandle< CCSPlayerController >
}

// CEnvSoundscapeProxy (size: 0x540)
namespace CEnvSoundscapeProxy {
    constexpr std::ptrdiff_t m_MainSoundscapeName = 0x538; // CUtlSymbolLarge
}

// CPulseCell_Inflow_EventHandler (size: 0x90)
namespace CPulseCell_Inflow_EventHandler {
    constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
}

// CCSPointScriptEntity (size: 0x610)
namespace CCSPointScriptEntity {
}

// CPulseCell_BaseFlow (size: 0x48)
namespace CPulseCell_BaseFlow {
}

// CBombTarget (size: 0x8f0)
namespace CBombTarget {
    constexpr std::ptrdiff_t m_OnBombExplode = 0x890; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombPlanted = 0x8a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombDefused = 0x8c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bIsBombSiteB = 0x8d8; // bool
    constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0x8d9; // bool
    constexpr std::ptrdiff_t m_bBombPlantedHere = 0x8da; // bool
    constexpr std::ptrdiff_t m_szMountTarget = 0x8e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hInstructorHint = 0x8e8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nBombSiteDesignation = 0x8ec; // int32
}

// CRuleEntity (size: 0x738)
namespace CRuleEntity {
    constexpr std::ptrdiff_t m_iszMaster = 0x730; // CUtlSymbolLarge
}

// CPhysThruster (size: 0x518)
namespace CPhysThruster {
    constexpr std::ptrdiff_t m_localOrigin = 0x508; // Vector
}

// CInfoPlayerStart (size: 0x4b8)
namespace CInfoPlayerStart {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_bIsMaster = 0x4a9; // bool
    constexpr std::ptrdiff_t m_pPawnSubclass = 0x4b0; // CGlobalSymbol
}

// CEntityFlame (size: 0x4e8)
namespace CEntityFlame {
    constexpr std::ptrdiff_t m_hEntAttached = 0x4a8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bCheapEffect = 0x4ac; // bool
    constexpr std::ptrdiff_t m_flSize = 0x4b0; // float32
    constexpr std::ptrdiff_t m_bUseHitboxes = 0x4b4; // bool
    constexpr std::ptrdiff_t m_iNumHitboxFires = 0x4b8; // int32
    constexpr std::ptrdiff_t m_flHitboxFireScale = 0x4bc; // float32
    constexpr std::ptrdiff_t m_flLifetime = 0x4c0; // GameTime_t
    constexpr std::ptrdiff_t m_hAttacker = 0x4c4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x4c8; // float32
    constexpr std::ptrdiff_t m_iCustomDamageType = 0x4cc; // int32
}

// CSkeletonInstance (size: 0x430)
namespace CSkeletonInstance {
    constexpr std::ptrdiff_t m_modelState = 0x140; // CModelState
    constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x390; // bool
    constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x391; // bool
    constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x392; // bool
    constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0; // bitfield:1
    constexpr std::ptrdiff_t m_materialGroup = 0x394; // CUtlStringToken
    constexpr std::ptrdiff_t m_nHitboxSet = 0x398; // uint8
    constexpr std::ptrdiff_t m_bForceServerConstraintsEnabled = 0x3f4; // bool
}

// CEntityComponent (size: 0x8)
namespace CEntityComponent {
}

// CBasePlatTrain (size: 0x7d8)
namespace CBasePlatTrain {
    constexpr std::ptrdiff_t m_NoiseMoving = 0x7b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrived = 0x7b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_volume = 0x7c8; // float32
    constexpr std::ptrdiff_t m_flTWidth = 0x7cc; // float32
    constexpr std::ptrdiff_t m_flTLength = 0x7d0; // float32
}

// CPointTeleport (size: 0x4c8)
namespace CPointTeleport {
    constexpr std::ptrdiff_t m_vSaveOrigin = 0x4a8; // Vector
    constexpr std::ptrdiff_t m_vSaveAngles = 0x4b4; // QAngle
    constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x4c0; // bool
    constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x4c1; // bool
}

// CTriggerGameEvent (size: 0x8a8)
namespace CTriggerGameEvent {
    constexpr std::ptrdiff_t m_strStartTouchEventName = 0x890; // CUtlString
    constexpr std::ptrdiff_t m_strEndTouchEventName = 0x898; // CUtlString
    constexpr std::ptrdiff_t m_strTriggerID = 0x8a0; // CUtlString
}

// CMessageEntity (size: 0x4c0)
namespace CMessageEntity {
    constexpr std::ptrdiff_t m_radius = 0x4a8; // int32
    constexpr std::ptrdiff_t m_messageText = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_drawText = 0x4b8; // bool
    constexpr std::ptrdiff_t m_bDeveloperOnly = 0x4b9; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x4ba; // bool
}

// CEnvEntityIgniter (size: 0x4b0)
namespace CEnvEntityIgniter {
    constexpr std::ptrdiff_t m_flLifetime = 0x4a8; // float32
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

// CMarkupVolumeTagged_NavGame (size: 0x7a0)
namespace CMarkupVolumeTagged_NavGame {
    constexpr std::ptrdiff_t m_nScopes = 0x798; // NavScopeFlags_t
    constexpr std::ptrdiff_t m_bFloodFillAttribute = 0x799; // bool
    constexpr std::ptrdiff_t m_bSplitNavSpace = 0x79a; // bool
}

// CMultiLightProxy (size: 0x4e8)
namespace CMultiLightProxy {
    constexpr std::ptrdiff_t m_iszLightNameFilter = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLightClassFilter = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x4b8; // float32
    constexpr std::ptrdiff_t m_flBrightnessDelta = 0x4bc; // float32
    constexpr std::ptrdiff_t m_bPerformScreenFade = 0x4c0; // bool
    constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x4c4; // float32
    constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x4c8; // float32
    constexpr std::ptrdiff_t m_vecLights = 0x4d0; // CUtlVector< CHandle< CLightEntity > >
}

// CWeaponM4A1 (size: 0x1150)
namespace CWeaponM4A1 {
}

// CTriggerHostageReset (size: 0x890)
namespace CTriggerHostageReset {
}

// CPulseAnimFuncs (size: 0x8)
namespace CPulseAnimFuncs {
}

// CEconWearable (size: 0xdf0)
namespace CEconWearable {
    constexpr std::ptrdiff_t m_nForceSkin = 0xde0; // int32
    constexpr std::ptrdiff_t m_bAlwaysAllow = 0xde4; // bool
}

// CPulseCell_WaitForCursorsWithTagBase::CursorState_t (size: 0x30)
namespace CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
}

// CPulseArraylib (size: 0x1)
namespace CPulseArraylib {
}

// CWeaponMAC10 (size: 0x1150)
namespace CWeaponMAC10 {
}

// CFuncLadder (size: 0x7c0)
namespace CFuncLadder {
    constexpr std::ptrdiff_t m_vecLadderDir = 0x730; // Vector
    constexpr std::ptrdiff_t m_Dismounts = 0x740; // CUtlVector< CHandle< CInfoLadderDismount > >
    constexpr std::ptrdiff_t m_vecLocalTop = 0x758; // Vector
    constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x764; // VectorWS
    constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x770; // VectorWS
    constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x77c; // float32
    constexpr std::ptrdiff_t m_bDisabled = 0x780; // bool
    constexpr std::ptrdiff_t m_bFakeLadder = 0x781; // bool
    constexpr std::ptrdiff_t m_bHasSlack = 0x782; // bool
    constexpr std::ptrdiff_t m_surfacePropName = 0x788; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0x790; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0x7a8; // CEntityIOOutput
}

// CFogController (size: 0x518)
namespace CFogController {
    constexpr std::ptrdiff_t m_fog = 0x4a8; // fogparams_t
    constexpr std::ptrdiff_t m_bUseAngles = 0x510; // bool
    constexpr std::ptrdiff_t m_iChangedVariables = 0x514; // int32
}

// CPointTemplateAPI (size: 0x8)
namespace CPointTemplateAPI {
}

// CItem (size: 0xac0)
namespace CItem {
    constexpr std::ptrdiff_t m_OnPlayerTouch = 0xa28; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xa40; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0xa58; // bool
    constexpr std::ptrdiff_t m_OnCacheInteraction = 0xa60; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGlovePulled = 0xa78; // CEntityIOOutput
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xa90; // VectorWS
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xa9c; // QAngle
    constexpr std::ptrdiff_t m_bPhysStartAsleep = 0xaa8; // bool
}

// CTriggerPush (size: 0x8c8)
namespace CTriggerPush {
    constexpr std::ptrdiff_t m_angPushEntitySpace = 0x890; // QAngle
    constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0x89c; // Vector
    constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0x8a8; // bool
    constexpr std::ptrdiff_t m_bUsePathSimple = 0x8a9; // bool
    constexpr std::ptrdiff_t m_iszPathSimpleName = 0x8b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PathSimple = 0x8b8; // CPathSimple*
    constexpr std::ptrdiff_t m_splinePushType = 0x8c0; // uint32
}

// CBaseProp (size: 0xa50)
namespace CBaseProp {
    constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xa20; // bool
    constexpr std::ptrdiff_t m_iShapeType = 0xa24; // int32
    constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xa28; // bool
    constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xa30; // CTransform
}

// CInfoOffscreenPanoramaTexture (size: 0x528)
namespace CInfoOffscreenPanoramaTexture {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_nResolutionX = 0x4ac; // int32
    constexpr std::ptrdiff_t m_nResolutionY = 0x4b0; // int32
    constexpr std::ptrdiff_t m_szPanelType = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szLayoutFileName = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_RenderAttrName = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_TargetEntities = 0x4d0; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    constexpr std::ptrdiff_t m_nTargetChangeCount = 0x4e8; // int32
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x4f0; // CNetworkUtlVectorBase< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_szTargetsName = 0x508; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x510; // CUtlVector< CHandle< CBaseModelEntity > >
}

// CPointAngularVelocitySensor (size: 0x578)
namespace CPointAngularVelocitySensor {
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4a8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flThreshold = 0x4ac; // float32
    constexpr std::ptrdiff_t m_nLastCompareResult = 0x4b0; // int32
    constexpr std::ptrdiff_t m_nLastFireResult = 0x4b4; // int32
    constexpr std::ptrdiff_t m_flFireTime = 0x4b8; // GameTime_t
    constexpr std::ptrdiff_t m_flFireInterval = 0x4bc; // float32
    constexpr std::ptrdiff_t m_flLastAngVelocity = 0x4c0; // float32
    constexpr std::ptrdiff_t m_lastOrientation = 0x4c4; // QAngle
    constexpr std::ptrdiff_t m_vecAxis = 0x4d0; // VectorWS
    constexpr std::ptrdiff_t m_bUseHelper = 0x4dc; // bool
    constexpr std::ptrdiff_t m_AngularVelocity = 0x4e0; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnLessThan = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x518; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x530; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x548; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEqualTo = 0x560; // CEntityIOOutput
}

// CPlayerVisibility (size: 0x4c0)
namespace CPlayerVisibility {
    constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4ac; // float32
    constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flFadeTime = 0x4b4; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4b8; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4b9; // bool
}

// CPulseCell_Step_FollowEntity (size: 0x58)
namespace CPulseCell_Step_FollowEntity {
    constexpr std::ptrdiff_t m_ParamBoneOrAttachName = 0x48; // CUtlString
    constexpr std::ptrdiff_t m_ParamBoneOrAttachNameChild = 0x50; // CUtlString
}

// CFlashbang (size: 0x1170)
namespace CFlashbang {
}

// CBasePlayerWeapon (size: 0xe20)
namespace CBasePlayerWeapon {
    constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xde0; // GameTick_t
    constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xde4; // float32
    constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xde8; // GameTick_t
    constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xdec; // float32
    constexpr std::ptrdiff_t m_iClip1 = 0xdf0; // int32
    constexpr std::ptrdiff_t m_iClip2 = 0xdf4; // int32
    constexpr std::ptrdiff_t m_pReserveAmmo = 0xdf8; // int32[2]
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xe00; // CEntityIOOutput
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

// CPhysForce (size: 0x508)
namespace CPhysForce {
    constexpr std::ptrdiff_t m_nameAttach = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_force = 0x4b8; // float32
    constexpr std::ptrdiff_t m_forceTime = 0x4bc; // float32
    constexpr std::ptrdiff_t m_attachedObject = 0x4c0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_wasRestored = 0x4c4; // bool
    constexpr std::ptrdiff_t m_integrator = 0x4c8; // CConstantForceController
}

// CAttributeManager (size: 0x50)
namespace CAttributeManager {
    constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
    constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
    constexpr std::ptrdiff_t m_ProviderType = 0x2c; // attributeprovidertypes_t
    constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector< CAttributeManager::cached_attribute_float_t >
}

// SignatureOutflow_Continue (size: 0x48)
namespace SignatureOutflow_Continue {
}

// CInfoTarget (size: 0x4a8)
namespace CInfoTarget {
}

// CPlayer_CameraServices (size: 0x178)
namespace CPlayer_CameraServices {
    constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x48; // QAngle
    constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x54; // GameTick_t
    constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x58; // float32
    constexpr std::ptrdiff_t m_PlayerFog = 0x60; // fogplayerparams_t
    constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0xa0; // CHandle< CColorCorrection >
    constexpr std::ptrdiff_t m_hViewEntity = 0xa4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hTonemapController = 0xa8; // CHandle< CTonemapController2 >
    constexpr std::ptrdiff_t m_audio = 0xb0; // audioparams_t
    constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x128; // CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > >
    constexpr std::ptrdiff_t m_flOldPlayerZ = 0x140; // float32
    constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x144; // float32
    constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x160; // CUtlVector< CHandle< CEnvSoundscapeTriggerable > >
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

// CScenePayloadVData (size: 0xe0)
namespace CScenePayloadVData {
    constexpr std::ptrdiff_t m_sSceneFile = 0x0; // CResourceNameTyped< CWeakHandle< InfoForResourceTypeCChoreoScene
}

// CPulseFuncs_GameParticleManager (size: 0x1)
namespace CPulseFuncs_GameParticleManager {
}

// CFilterAttributeInt (size: 0x4e8)
namespace CFilterAttributeInt {
    constexpr std::ptrdiff_t m_sAttributeName = 0x4e0; // CUtlSymbolLarge
}

// CKeepUpright (size: 0x4e8)
namespace CKeepUpright {
    constexpr std::ptrdiff_t m_worldGoalAxis = 0x4b0; // Vector
    constexpr std::ptrdiff_t m_localTestAxis = 0x4bc; // Vector
    constexpr std::ptrdiff_t m_nameAttach = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_attachedObject = 0x4d8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_angularLimit = 0x4dc; // float32
    constexpr std::ptrdiff_t m_bActive = 0x4e0; // bool
    constexpr std::ptrdiff_t m_bDampAllRotation = 0x4e1; // bool
}

// CPointTemplate (size: 0x510)
namespace CPointTemplate {
    constexpr std::ptrdiff_t m_iszWorldName = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEntityFilterName = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x4c0; // float32
    constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x4c4; // bool
    constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x4c8; // PointTemplateClientOnlyEntityBehavior_t
    constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x4cc; // PointTemplateOwnerSpawnGroupType_t
    constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x4d0; // CUtlVector< uint32 >
    constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x4e8; // CUtlVector< CEntityHandle >
    constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x500; // HSCRIPT
    constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x508; // HSCRIPT
}

// CEnvVolumetricFogController (size: 0x558)
namespace CEnvVolumetricFogController {
    constexpr std::ptrdiff_t m_flScattering = 0x4a8; // float32
    constexpr std::ptrdiff_t m_TintColor = 0x4ac; // Color
    constexpr std::ptrdiff_t m_flAnisotropy = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flFadeSpeed = 0x4b4; // float32
    constexpr std::ptrdiff_t m_flDrawDistance = 0x4b8; // float32
    constexpr std::ptrdiff_t m_flFadeInStart = 0x4bc; // float32
    constexpr std::ptrdiff_t m_flFadeInEnd = 0x4c0; // float32
    constexpr std::ptrdiff_t m_flIndirectStrength = 0x4c4; // float32
    constexpr std::ptrdiff_t m_nVolumeDepth = 0x4c8; // int32
    constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x4cc; // float32
    constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x4d0; // int32
    constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x4d4; // int32
    constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x4d8; // int32
    constexpr std::ptrdiff_t m_vBoxMins = 0x4dc; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4e8; // Vector
    constexpr std::ptrdiff_t m_bActive = 0x4f4; // bool
    constexpr std::ptrdiff_t m_flStartAnisoTime = 0x4f8; // GameTime_t
    constexpr std::ptrdiff_t m_flStartScatterTime = 0x4fc; // GameTime_t
    constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x500; // GameTime_t
    constexpr std::ptrdiff_t m_flStartAnisotropy = 0x504; // float32
    constexpr std::ptrdiff_t m_flStartScattering = 0x508; // float32
    constexpr std::ptrdiff_t m_flStartDrawDistance = 0x50c; // float32
    constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x510; // float32
    constexpr std::ptrdiff_t m_flDefaultScattering = 0x514; // float32
    constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x518; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x51c; // bool
    constexpr std::ptrdiff_t m_bEnableIndirect = 0x51d; // bool
    constexpr std::ptrdiff_t m_bIsMaster = 0x51e; // bool
    constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x520; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_nForceRefreshCount = 0x528; // int32
    constexpr std::ptrdiff_t m_fNoiseSpeed = 0x52c; // float32
    constexpr std::ptrdiff_t m_fNoiseStrength = 0x530; // float32
    constexpr std::ptrdiff_t m_vNoiseScale = 0x534; // Vector
    constexpr std::ptrdiff_t m_fWindSpeed = 0x540; // float32
    constexpr std::ptrdiff_t m_vWindDirection = 0x544; // Vector
    constexpr std::ptrdiff_t m_bFirstTime = 0x550; // bool
}

// CBot (size: 0x100)
namespace CBot {
    constexpr std::ptrdiff_t m_pController = 0x10; // CCSPlayerController*
    constexpr std::ptrdiff_t m_pPlayer = 0x18; // CCSPlayerPawn*
    constexpr std::ptrdiff_t m_bHasSpawned = 0x20; // bool
    constexpr std::ptrdiff_t m_id = 0x24; // uint32
    constexpr std::ptrdiff_t m_isRunning = 0xc0; // bool
    constexpr std::ptrdiff_t m_isCrouching = 0xc1; // bool
    constexpr std::ptrdiff_t m_forwardSpeed = 0xc4; // float32
    constexpr std::ptrdiff_t m_leftSpeed = 0xc8; // float32
    constexpr std::ptrdiff_t m_verticalSpeed = 0xcc; // float32
    constexpr std::ptrdiff_t m_buttonFlags = 0xd0; // uint64
    constexpr std::ptrdiff_t m_jumpTimestamp = 0xd8; // float32
    constexpr std::ptrdiff_t m_viewForward = 0xdc; // Vector
    constexpr std::ptrdiff_t m_postureStackIndex = 0xf8; // int32
}

// CPulseCell_Step_SetAnimGraphParam (size: 0x50)
namespace CPulseCell_Step_SetAnimGraphParam {
    constexpr std::ptrdiff_t m_ParamName = 0x48; // CUtlString
}

// CPlayer_FlashlightServices (size: 0x48)
namespace CPlayer_FlashlightServices {
}

// CCSPlayerController (size: 0xaa0)
namespace CCSPlayerController {
    constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x7d8; // CCSPlayerController_InGameMoneyServices*
    constexpr std::ptrdiff_t m_pInventoryServices = 0x7e0; // CCSPlayerController_InventoryServices*
    constexpr std::ptrdiff_t m_pActionTrackingServices = 0x7e8; // CCSPlayerController_ActionTrackingServices*
    constexpr std::ptrdiff_t m_pDamageServices = 0x7f0; // CCSPlayerController_DamageServices*
    constexpr std::ptrdiff_t m_iPing = 0x7f8; // uint32
    constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x7fc; // bool
    constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x800; // uint32
    constexpr std::ptrdiff_t m_szCrosshairCodes = 0x808; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iPendingTeamNum = 0x810; // uint8
    constexpr std::ptrdiff_t m_flForceTeamTime = 0x814; // GameTime_t
    constexpr std::ptrdiff_t m_iCompTeammateColor = 0x818; // int32
    constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x81c; // bool
    constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x81d; // bool
    constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x820; // int32
    constexpr std::ptrdiff_t m_bTeamChanged = 0x824; // bool
    constexpr std::ptrdiff_t m_bInSwitchTeam = 0x825; // bool
    constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x826; // bool
    constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x827; // bool
    constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x828; // bool
    constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x829; // bool
    constexpr std::ptrdiff_t m_flLastJoinTeamTime = 0x82c; // GameTime_t
    constexpr std::ptrdiff_t m_szClan = 0x830; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iCoachingTeam = 0x838; // int32
    constexpr std::ptrdiff_t m_nPlayerDominated = 0x840; // uint64
    constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x848; // uint64
    constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x850; // int32
    constexpr std::ptrdiff_t m_iCompetitiveWins = 0x854; // int32
    constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x858; // int8
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x85c; // int32
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x860; // int32
    constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x864; // int32
    constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x868; // int32
    constexpr std::ptrdiff_t m_unActiveQuestId = 0x86c; // uint16
    constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x870; // uint32
    constexpr std::ptrdiff_t m_nQuestProgressReason = 0x874; // QuestProgress::Reason
    constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x878; // uint32
    constexpr std::ptrdiff_t m_iDraftIndex = 0x8a8; // int32
    constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x8ac; // uint32
    constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x8b0; // uint32
    constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x8b4; // uint32
    constexpr std::ptrdiff_t m_bCannotBeKicked = 0x8b8; // bool
    constexpr std::ptrdiff_t m_bEverFullyConnected = 0x8b9; // bool
    constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x8ba; // bool
    constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x8bb; // bool
    constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x8bc; // bool
    constexpr std::ptrdiff_t m_bScoreReported = 0x8bd; // bool
    constexpr std::ptrdiff_t m_nDisconnectionTick = 0x8c0; // int32
    constexpr std::ptrdiff_t m_bControllingBot = 0x8d0; // bool
    constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x8d1; // bool
    constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x8d2; // bool
    constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x8d4; // int32
    constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x8d8; // bool
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x8dc; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_hObserverPawn = 0x8e0; // CHandle< CCSObserverPawn >
    constexpr std::ptrdiff_t m_DesiredObserverMode = 0x8e4; // int32
    constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x8e8; // CEntityHandle
    constexpr std::ptrdiff_t m_bPawnIsAlive = 0x8ec; // bool
    constexpr std::ptrdiff_t m_iPawnHealth = 0x8f0; // uint32
    constexpr std::ptrdiff_t m_iPawnArmor = 0x8f4; // int32
    constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x8f8; // bool
    constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x8f9; // bool
    constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x8fa; // uint16
    constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x8fc; // int32
    constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x900; // int32
    constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x904; // int32
    constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x908; // CHandle< CCSPlayerController >
    constexpr std::ptrdiff_t m_iScore = 0x90c; // int32
    constexpr std::ptrdiff_t m_iRoundScore = 0x910; // int32
    constexpr std::ptrdiff_t m_iRoundsWon = 0x914; // int32
    constexpr std::ptrdiff_t m_recentKillQueue = 0x918; // uint8[8]
    constexpr std::ptrdiff_t m_nFirstKill = 0x920; // uint8
    constexpr std::ptrdiff_t m_nKillCount = 0x921; // uint8
    constexpr std::ptrdiff_t m_bMvpNoMusic = 0x922; // bool
    constexpr std::ptrdiff_t m_eMvpReason = 0x924; // int32
    constexpr std::ptrdiff_t m_iMusicKitID = 0x928; // int32
    constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x92c; // int32
    constexpr std::ptrdiff_t m_iMVPs = 0x930; // int32
    constexpr std::ptrdiff_t m_nUpdateCounter = 0x934; // int32
    constexpr std::ptrdiff_t m_flSmoothedPing = 0x938; // float32
    constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0x940; // IntervalTimer
    constexpr std::ptrdiff_t m_bShowHints = 0x958; // bool
    constexpr std::ptrdiff_t m_iNextTimeCheck = 0x95c; // int32
    constexpr std::ptrdiff_t m_bJustDidTeamKill = 0x960; // bool
    constexpr std::ptrdiff_t m_bPunishForTeamKill = 0x961; // bool
    constexpr std::ptrdiff_t m_bGaveTeamDamageWarning = 0x962; // bool
    constexpr std::ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0x963; // bool
    constexpr std::ptrdiff_t m_dblLastReceivedPacketPlatFloatTime = 0x968; // float64
    constexpr std::ptrdiff_t m_LastTeamDamageWarningTime = 0x970; // GameTime_t
    constexpr std::ptrdiff_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0x974; // GameTime_t
    constexpr std::ptrdiff_t m_nSuspiciousHitCount = 0x978; // uint32
    constexpr std::ptrdiff_t m_nNonSuspiciousHitStreak = 0x97c; // uint32
    constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0xa21; // bool
}

// CPhysLength (size: 0x538)
namespace CPhysLength {
    constexpr std::ptrdiff_t m_offset = 0x508; // Vector[2]
    constexpr std::ptrdiff_t m_vecAttach = 0x520; // VectorWS
    constexpr std::ptrdiff_t m_addLength = 0x52c; // float32
    constexpr std::ptrdiff_t m_minLength = 0x530; // float32
    constexpr std::ptrdiff_t m_totalLength = 0x534; // float32
}

// CTeam (size: 0x560)
namespace CTeam {
    constexpr std::ptrdiff_t m_aPlayerControllers = 0x4a8; // CNetworkUtlVectorBase< CHandle< CBasePlayerController > >
    constexpr std::ptrdiff_t m_aPlayers = 0x4c0; // CNetworkUtlVectorBase< CHandle< CBasePlayerPawn > >
    constexpr std::ptrdiff_t m_iScore = 0x4d8; // int32
    constexpr std::ptrdiff_t m_szTeamname = 0x4dc; // char[129]
}

// CLogicNPCCounterAABB (size: 0x758)
namespace CLogicNPCCounterAABB {
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x728; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x734; // Vector
    constexpr std::ptrdiff_t m_vOuterMins = 0x740; // Vector
    constexpr std::ptrdiff_t m_vOuterMaxs = 0x74c; // Vector
}

// CPulseCell_Outflow_CycleOrdered::InstanceState_t (size: 0x4)
namespace CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
}

// CChicken (size: 0x3190)
namespace CChicken {
    constexpr std::ptrdiff_t m_AttributeManager = 0xc70; // CAttributeContainer
    constexpr std::ptrdiff_t m_updateTimer = 0xf68; // CountdownTimer
    constexpr std::ptrdiff_t m_stuckAnchor = 0xf80; // Vector
    constexpr std::ptrdiff_t m_stuckTimer = 0xf90; // CountdownTimer
    constexpr std::ptrdiff_t m_collisionStuckTimer = 0xfa8; // CountdownTimer
    constexpr std::ptrdiff_t m_isOnGround = 0xfc0; // bool
    constexpr std::ptrdiff_t m_vFallVelocity = 0xfc4; // Vector
    constexpr std::ptrdiff_t m_desiredActivity = 0xfd0; // ChickenActivity
    constexpr std::ptrdiff_t m_currentActivity = 0xfd4; // ChickenActivity
    constexpr std::ptrdiff_t m_activityTimer = 0xfd8; // CountdownTimer
    constexpr std::ptrdiff_t m_turnRate = 0xff0; // float32
    constexpr std::ptrdiff_t m_fleeFrom = 0xff4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0xff8; // CountdownTimer
    constexpr std::ptrdiff_t m_startleTimer = 0x1010; // CountdownTimer
    constexpr std::ptrdiff_t m_vocalizeTimer = 0x1028; // CountdownTimer
    constexpr std::ptrdiff_t m_flWhenZombified = 0x1040; // GameTime_t
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1044; // bool
    constexpr std::ptrdiff_t m_leader = 0x1048; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_reuseTimer = 0x1060; // CountdownTimer
    constexpr std::ptrdiff_t m_hasBeenUsed = 0x1078; // bool
    constexpr std::ptrdiff_t m_jumpTimer = 0x1080; // CountdownTimer
    constexpr std::ptrdiff_t m_flLastJumpTime = 0x1098; // float32
    constexpr std::ptrdiff_t m_bInJump = 0x109c; // bool
    constexpr std::ptrdiff_t m_repathTimer = 0x30a8; // CountdownTimer
    constexpr std::ptrdiff_t m_vecPathGoal = 0x3140; // Vector
    constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x314c; // GameTime_t
    constexpr std::ptrdiff_t m_followMinuteTimer = 0x3150; // CountdownTimer
    constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x3170; // CountdownTimer
}

// CPhysicsPropRespawnable (size: 0xd20)
namespace CPhysicsPropRespawnable {
    constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xce0; // VectorWS
    constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xcec; // QAngle
    constexpr std::ptrdiff_t m_vOriginalMins = 0xcf8; // Vector
    constexpr std::ptrdiff_t m_vOriginalMaxs = 0xd04; // Vector
    constexpr std::ptrdiff_t m_flRespawnDuration = 0xd10; // float32
}

// CEnvBeam (size: 0x868)
namespace CEnvBeam {
    constexpr std::ptrdiff_t m_active = 0x7d0; // int32
    constexpr std::ptrdiff_t m_spriteTexture = 0x7d8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_iszStartEntity = 0x7e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEndEntity = 0x7e8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_life = 0x7f0; // float32
    constexpr std::ptrdiff_t m_boltWidth = 0x7f4; // float32
    constexpr std::ptrdiff_t m_noiseAmplitude = 0x7f8; // float32
    constexpr std::ptrdiff_t m_speed = 0x7fc; // int32
    constexpr std::ptrdiff_t m_restrike = 0x800; // float32
    constexpr std::ptrdiff_t m_iszSpriteName = 0x808; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_frameStart = 0x810; // int32
    constexpr std::ptrdiff_t m_vEndPointWorld = 0x814; // VectorWS
    constexpr std::ptrdiff_t m_vEndPointRelative = 0x820; // Vector
    constexpr std::ptrdiff_t m_radius = 0x82c; // float32
    constexpr std::ptrdiff_t m_TouchType = 0x830; // Touch_t
    constexpr std::ptrdiff_t m_iFilterName = 0x838; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFilter = 0x840; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iszDecal = 0x848; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnTouchedByEntity = 0x850; // CEntityIOOutput
}

// CLightSpotEntity (size: 0x738)
namespace CLightSpotEntity {
}

// CWeaponSawedoff (size: 0x1130)
namespace CWeaponSawedoff {
}

// CTonemapTrigger (size: 0x8a0)
namespace CTonemapTrigger {
    constexpr std::ptrdiff_t m_tonemapControllerName = 0x890; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTonemapController = 0x898; // CEntityHandle
}

// CEnvShake (size: 0x4f8)
namespace CEnvShake {
    constexpr std::ptrdiff_t m_limitToEntity = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Amplitude = 0x4b0; // float32
    constexpr std::ptrdiff_t m_Frequency = 0x4b4; // float32
    constexpr std::ptrdiff_t m_Duration = 0x4b8; // float32
    constexpr std::ptrdiff_t m_Radius = 0x4bc; // float32
    constexpr std::ptrdiff_t m_stopTime = 0x4c0; // GameTime_t
    constexpr std::ptrdiff_t m_nextShake = 0x4c4; // GameTime_t
    constexpr std::ptrdiff_t m_currentAmp = 0x4c8; // float32
    constexpr std::ptrdiff_t m_maxForce = 0x4cc; // Vector
    constexpr std::ptrdiff_t m_shakeCallback = 0x4e0; // CPhysicsShake
}

// CCSPlayer_MovementServices (size: 0xe68)
namespace CCSPlayer_MovementServices {
    constexpr std::ptrdiff_t m_vecLadderNormal = 0x278; // Vector
    constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x284; // int32
    constexpr std::ptrdiff_t m_bDucked = 0x288; // bool
    constexpr std::ptrdiff_t m_flDuckAmount = 0x28c; // float32
    constexpr std::ptrdiff_t m_flDuckSpeed = 0x290; // float32
    constexpr std::ptrdiff_t m_bDuckOverride = 0x294; // bool
    constexpr std::ptrdiff_t m_bDesiresDuck = 0x295; // bool
    constexpr std::ptrdiff_t m_bDucking = 0x296; // bool
    constexpr std::ptrdiff_t m_flDuckOffset = 0x298; // float32
    constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x29c; // uint32
    constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x2a0; // uint32
    constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x2a4; // uint32
    constexpr std::ptrdiff_t m_flLastDuckTime = 0x2a8; // float32
    constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x2b8; // Vector2D
    constexpr std::ptrdiff_t m_duckUntilOnGround = 0x2c0; // bool
    constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x2c1; // bool
    constexpr std::ptrdiff_t m_bInStuckTest = 0x2c2; // bool
    constexpr std::ptrdiff_t m_nTraceCount = 0x4d0; // int32
    constexpr std::ptrdiff_t m_StuckLast = 0x4d4; // int32
    constexpr std::ptrdiff_t m_bSpeedCropped = 0x4d8; // bool
    constexpr std::ptrdiff_t m_nOldWaterLevel = 0x4dc; // int32
    constexpr std::ptrdiff_t m_flWaterEntryTime = 0x4e0; // float32
    constexpr std::ptrdiff_t m_vecForward = 0x4e4; // Vector
    constexpr std::ptrdiff_t m_vecLeft = 0x4f0; // Vector
    constexpr std::ptrdiff_t m_vecUp = 0x4fc; // Vector
    constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x508; // int32
    constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x50c; // bool
    constexpr std::ptrdiff_t m_iFootsteps = 0x510; // int32
    constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x514; // GameTime_t
    constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x518; // uint64
    constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x520; // float32
    constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x524; // float32
    constexpr std::ptrdiff_t m_flStamina = 0x528; // float32
    constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x52c; // float32
    constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x530; // float32
    constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x534; // float32
    constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x538; // float32
    constexpr std::ptrdiff_t m_flVelMulAtJumpStart = 0x53c; // float32
    constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x540; // float32
    constexpr std::ptrdiff_t m_LegacyJump = 0x548; // CCSPlayerLegacyJump
    constexpr std::ptrdiff_t m_ModernJump = 0x560; // CCSPlayerModernJump
    constexpr std::ptrdiff_t m_nLastJumpTick = 0x598; // GameTick_t
    constexpr std::ptrdiff_t m_flLastJumpFrac = 0x59c; // float32
    constexpr std::ptrdiff_t m_flLastJumpVelocityZ = 0x5a0; // float32
    constexpr std::ptrdiff_t m_bJumpApexPending = 0x5a4; // bool
    constexpr std::ptrdiff_t m_flTicksSinceLastSurfingDetected = 0x5a8; // float32
    constexpr std::ptrdiff_t m_bWasSurfing = 0x5ac; // bool
    constexpr std::ptrdiff_t m_vecInputRotated = 0x63c; // Vector
}

// SellbackPurchaseEntry_t (size: 0x48)
namespace SellbackPurchaseEntry_t {
    constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16
    constexpr std::ptrdiff_t m_nCost = 0x34; // int32
    constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32
    constexpr std::ptrdiff_t m_bPrevHelmet = 0x3c; // bool
    constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
}

// CTriggerCallback (size: 0x898)
namespace CTriggerCallback {
}

// CSoundOpvarSetAutoRoomEntity (size: 0x680)
namespace CSoundOpvarSetAutoRoomEntity {
    constexpr std::ptrdiff_t m_traceResults = 0x640; // CUtlVector< SoundOpvarTraceResult_t >
    constexpr std::ptrdiff_t m_doorwayPairs = 0x658; // CUtlVector< AutoRoomDoorwayPairs_t >
    constexpr std::ptrdiff_t m_flSize = 0x670; // float32
    constexpr std::ptrdiff_t m_flHeightTolerance = 0x674; // float32
    constexpr std::ptrdiff_t m_flSizeSqr = 0x678; // float32
}

// CPulseCell_Outflow_ListenForEntityOutput (size: 0xf0)
namespace CPulseCell_Outflow_ListenForEntityOutput {
    constexpr std::ptrdiff_t m_OnFired = 0x48; // SignatureOutflow_Resume
    constexpr std::ptrdiff_t m_OnCanceled = 0x90; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_strEntityOutput = 0xd8; // CGlobalSymbol
    constexpr std::ptrdiff_t m_strEntityOutputParam = 0xe0; // CUtlString
    constexpr std::ptrdiff_t m_bListenUntilCanceled = 0xe8; // bool
}

// CPushable (size: 0x808)
namespace CPushable {
}

// CRotatorTarget (size: 0x4c8)
namespace CRotatorTarget {
    constexpr std::ptrdiff_t m_OnArrivedAt = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_eSpace = 0x4c0; // RotatorTargetSpace_t
}

// CPhysicsEntitySolver (size: 0x4d0)
namespace CPhysicsEntitySolver {
    constexpr std::ptrdiff_t m_hMovingEntity = 0x4c0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x4c4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_separationDuration = 0x4c8; // float32
    constexpr std::ptrdiff_t m_cancelTime = 0x4cc; // GameTime_t
}

// CLogicCollisionPair (size: 0x4c0)
namespace CLogicCollisionPair {
    constexpr std::ptrdiff_t m_nameAttach1 = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttach2 = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_includeHierarchy = 0x4b8; // bool
    constexpr std::ptrdiff_t m_supportMultipleEntitiesWithSameName = 0x4b9; // bool
    constexpr std::ptrdiff_t m_disabled = 0x4ba; // bool
    constexpr std::ptrdiff_t m_succeeded = 0x4bb; // bool
}

// CTestEffect (size: 0x578)
namespace CTestEffect {
    constexpr std::ptrdiff_t m_iLoop = 0x4a8; // int32
    constexpr std::ptrdiff_t m_iBeam = 0x4ac; // int32
    constexpr std::ptrdiff_t m_pBeam = 0x4b0; // CHandle< CBeam >[24]
    constexpr std::ptrdiff_t m_flBeamTime = 0x510; // GameTime_t[24]
    constexpr std::ptrdiff_t m_flStartTime = 0x570; // GameTime_t
}

// CPulseCell_Outflow_ScriptedSequence::CursorState_t (size: 0x4)
namespace CPulseCell_Outflow_ScriptedSequence_CursorState_t {
    constexpr std::ptrdiff_t m_scriptedSequence = 0x0; // CHandle< CBaseEntity >
}

// CPropDoorRotating (size: 0xef0)
namespace CPropDoorRotating {
    constexpr std::ptrdiff_t m_vecAxis = 0xe50; // Vector
    constexpr std::ptrdiff_t m_flDistance = 0xe5c; // float32
    constexpr std::ptrdiff_t m_eSpawnPosition = 0xe60; // PropDoorRotatingSpawnPos_t
    constexpr std::ptrdiff_t m_eOpenDirection = 0xe64; // PropDoorRotatingOpenDirection_e
    constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0xe68; // PropDoorRotatingOpenDirection_e
    constexpr std::ptrdiff_t m_eDefaultCheckDirection = 0xe6c; // doorCheck_e
    constexpr std::ptrdiff_t m_flAjarAngle = 0xe70; // float32
    constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0xe74; // QAngle
    constexpr std::ptrdiff_t m_angRotationClosed = 0xe80; // QAngle
    constexpr std::ptrdiff_t m_angRotationOpenForward = 0xe8c; // QAngle
    constexpr std::ptrdiff_t m_angRotationOpenBack = 0xe98; // QAngle
    constexpr std::ptrdiff_t m_angGoal = 0xea4; // QAngle
    constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0xeb0; // Vector
    constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0xebc; // Vector
    constexpr std::ptrdiff_t m_vecBackBoundsMin = 0xec8; // Vector
    constexpr std::ptrdiff_t m_vecBackBoundsMax = 0xed4; // Vector
    constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0xee0; // bool
    constexpr std::ptrdiff_t m_hEntityBlocker = 0xee4; // CHandle< CEntityBlocker >
}

// CEnvParticleGlow (size: 0xcc0)
namespace CEnvParticleGlow {
    constexpr std::ptrdiff_t m_flAlphaScale = 0xca8; // float32
    constexpr std::ptrdiff_t m_flRadiusScale = 0xcac; // float32
    constexpr std::ptrdiff_t m_flSelfIllumScale = 0xcb0; // float32
    constexpr std::ptrdiff_t m_ColorTint = 0xcb4; // Color
    constexpr std::ptrdiff_t m_hTextureOverride = 0xcb8; // CStrongHandle< InfoForResourceTypeCTextureBase >
}

// CMathRemap (size: 0x540)
namespace CMathRemap {
    constexpr std::ptrdiff_t m_flInMin = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flInMax = 0x4ac; // float32
    constexpr std::ptrdiff_t m_flOut1 = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flOut2 = 0x4b4; // float32
    constexpr std::ptrdiff_t m_flOldInValue = 0x4b8; // float32
    constexpr std::ptrdiff_t m_bEnabled = 0x4bc; // bool
    constexpr std::ptrdiff_t m_OutValue = 0x4c0; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x4e0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x4f8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFellBelowMin = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFellBelowMax = 0x528; // CEntityIOOutput
}

// CSoundOpvarSetOBBWindEntity (size: 0x590)
namespace CSoundOpvarSetOBBWindEntity {
    constexpr std::ptrdiff_t m_vMins = 0x550; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x55c; // Vector
    constexpr std::ptrdiff_t m_vDistanceMins = 0x568; // Vector
    constexpr std::ptrdiff_t m_vDistanceMaxs = 0x574; // Vector
    constexpr std::ptrdiff_t m_flWindMin = 0x580; // float32
    constexpr std::ptrdiff_t m_flWindMax = 0x584; // float32
    constexpr std::ptrdiff_t m_flWindMapMin = 0x588; // float32
    constexpr std::ptrdiff_t m_flWindMapMax = 0x58c; // float32
}

// PhysicsRagdollPose_t (size: 0x28)
namespace PhysicsRagdollPose_t {
    constexpr std::ptrdiff_t m_Transforms = 0x8; // CNetworkUtlVectorBase< CTransform >
    constexpr std::ptrdiff_t m_hOwner = 0x20; // CHandle< CBaseEntity >
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

// CScriptTriggerOnce (size: 0x8b8)
namespace CScriptTriggerOnce {
    constexpr std::ptrdiff_t m_vExtent = 0x8a8; // Vector
}

// CLightOrthoEntity (size: 0x738)
namespace CLightOrthoEntity {
}

// CInfoInstructorHintHostageRescueZone (size: 0x4a8)
namespace CInfoInstructorHintHostageRescueZone {
}

// CPulseCell_LimitCount::InstanceState_t (size: 0x4)
namespace CPulseCell_LimitCount_InstanceState_t {
    constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
}

// CTriggerTeleport (size: 0x8a0)
namespace CTriggerTeleport {
    constexpr std::ptrdiff_t m_iLandmark = 0x890; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x898; // bool
    constexpr std::ptrdiff_t m_bMirrorPlayer = 0x899; // bool
    constexpr std::ptrdiff_t m_bCheckDestIfClearForPlayer = 0x89a; // bool
}

// CFuncWall (size: 0x738)
namespace CFuncWall {
    constexpr std::ptrdiff_t m_nState = 0x730; // int32
}

// CBtActionAim (size: 0xf8)
namespace CBtActionAim {
    constexpr std::ptrdiff_t m_szSensorInputKey = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_szAimReadyKey = 0x80; // CUtlString
    constexpr std::ptrdiff_t m_flZoomCooldownTimestamp = 0x88; // float32
    constexpr std::ptrdiff_t m_bDoneAiming = 0x8c; // bool
    constexpr std::ptrdiff_t m_flLerpStartTime = 0x90; // float32
    constexpr std::ptrdiff_t m_flNextLookTargetLerpTime = 0x94; // float32
    constexpr std::ptrdiff_t m_flPenaltyReductionRatio = 0x98; // float32
    constexpr std::ptrdiff_t m_NextLookTarget = 0x9c; // QAngle
    constexpr std::ptrdiff_t m_AimTimer = 0xa8; // CountdownTimer
    constexpr std::ptrdiff_t m_SniperHoldTimer = 0xc0; // CountdownTimer
    constexpr std::ptrdiff_t m_FocusIntervalTimer = 0xd8; // CountdownTimer
    constexpr std::ptrdiff_t m_bAcquired = 0xf0; // bool
}

// CCSGO_TeamPreviewCharacterPosition (size: 0xcc0)
namespace CCSGO_TeamPreviewCharacterPosition {
    constexpr std::ptrdiff_t m_nVariant = 0x4a8; // int32
    constexpr std::ptrdiff_t m_nRandom = 0x4ac; // int32
    constexpr std::ptrdiff_t m_nOrdinal = 0x4b0; // int32
    constexpr std::ptrdiff_t m_sWeaponName = 0x4b8; // CUtlString
    constexpr std::ptrdiff_t m_xuid = 0x4c0; // uint64
    constexpr std::ptrdiff_t m_agentItem = 0x4c8; // CEconItemView
    constexpr std::ptrdiff_t m_glovesItem = 0x770; // CEconItemView
    constexpr std::ptrdiff_t m_weaponItem = 0xa18; // CEconItemView
}

// CGameRulesProxy (size: 0x4a8)
namespace CGameRulesProxy {
}

// CInfoLadderDismount (size: 0x4a8)
namespace CInfoLadderDismount {
}

// CPulseServerFuncs (size: 0x1)
namespace CPulseServerFuncs {
}

// CMessage (size: 0x4e0)
namespace CMessage {
    constexpr std::ptrdiff_t m_iszMessage = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_MessageVolume = 0x4b0; // float32
    constexpr std::ptrdiff_t m_MessageAttenuation = 0x4b4; // int32
    constexpr std::ptrdiff_t m_Radius = 0x4b8; // float32
    constexpr std::ptrdiff_t m_sNoise = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnShowMessage = 0x4c8; // CEntityIOOutput
}

// CPointVelocitySensor (size: 0x4e8)
namespace CPointVelocitySensor {
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4a8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_vecAxis = 0x4ac; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x4b8; // bool
    constexpr std::ptrdiff_t m_fPrevVelocity = 0x4bc; // float32
    constexpr std::ptrdiff_t m_flAvgInterval = 0x4c0; // float32
    constexpr std::ptrdiff_t m_Velocity = 0x4c8; // CEntityOutputTemplate< float32, float32 >
}

// EngineCountdownTimer (size: 0x18)
namespace EngineCountdownTimer {
    constexpr std::ptrdiff_t m_duration = 0x8; // float32
    constexpr std::ptrdiff_t m_timestamp = 0xc; // float32
    constexpr std::ptrdiff_t m_timescale = 0x10; // float32
}

// CBaseModelEntityAPI (size: 0x8)
namespace CBaseModelEntityAPI {
}

// CHostage (size: 0x2e00)
namespace CHostage {
    constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xb98; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xbb0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xbc8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnRescued = 0xbe0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_entitySpottedState = 0xbf8; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xc10; // int32
    constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xc14; // uint32
    constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xc18; // uint32
    constexpr std::ptrdiff_t m_bRemove = 0xc1c; // bool
    constexpr std::ptrdiff_t m_vel = 0xc20; // Vector
    constexpr std::ptrdiff_t m_isRescued = 0xc2c; // bool
    constexpr std::ptrdiff_t m_jumpedThisFrame = 0xc2d; // bool
    constexpr std::ptrdiff_t m_nHostageState = 0xc30; // int32
    constexpr std::ptrdiff_t m_leader = 0xc34; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_lastLeader = 0xc38; // CHandle< CCSPlayerPawnBase >
    constexpr std::ptrdiff_t m_reuseTimer = 0xc40; // CountdownTimer
    constexpr std::ptrdiff_t m_hasBeenUsed = 0xc58; // bool
    constexpr std::ptrdiff_t m_accel = 0xc5c; // Vector
    constexpr std::ptrdiff_t m_isRunning = 0xc68; // bool
    constexpr std::ptrdiff_t m_isCrouching = 0xc69; // bool
    constexpr std::ptrdiff_t m_jumpTimer = 0xc70; // CountdownTimer
    constexpr std::ptrdiff_t m_isWaitingForLeader = 0xc88; // bool
    constexpr std::ptrdiff_t m_repathTimer = 0x2c98; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2cb0; // CountdownTimer
    constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2d40; // CountdownTimer
    constexpr std::ptrdiff_t m_wiggleTimer = 0x2d60; // CountdownTimer
    constexpr std::ptrdiff_t m_isAdjusted = 0x2d7c; // bool
    constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2d7d; // bool
    constexpr std::ptrdiff_t m_hHostageGrabber = 0x2d80; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_fLastGrabTime = 0x2d84; // GameTime_t
    constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2d88; // Vector
    constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2d94; // Vector
    constexpr std::ptrdiff_t m_flRescueStartTime = 0x2da0; // GameTime_t
    constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2da4; // GameTime_t
    constexpr std::ptrdiff_t m_flDropStartTime = 0x2da8; // GameTime_t
    constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2dac; // int32
    constexpr std::ptrdiff_t m_nPickupEventCount = 0x2db0; // int32
    constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2db4; // Vector
    constexpr std::ptrdiff_t m_vecHostageResetPosition = 0x2dec; // VectorWS
}

// CScriptTriggerMultiple (size: 0x8b8)
namespace CScriptTriggerMultiple {
    constexpr std::ptrdiff_t m_vExtent = 0x8a8; // Vector
}

// CEnvSpark (size: 0x4d0)
namespace CEnvSpark {
    constexpr std::ptrdiff_t m_flDelay = 0x4a8; // float32
    constexpr std::ptrdiff_t m_nMagnitude = 0x4ac; // int32
    constexpr std::ptrdiff_t m_nTrailLength = 0x4b0; // int32
    constexpr std::ptrdiff_t m_nType = 0x4b4; // int32
    constexpr std::ptrdiff_t m_OnSpark = 0x4b8; // CEntityIOOutput
}

// CCSPlayerController_DamageServices (size: 0xd0)
namespace CCSPlayerController_DamageServices {
    constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
    constexpr std::ptrdiff_t m_DamageList = 0x48; // CUtlVectorEmbeddedNetworkVar< CDamageRecord >
}

// CFilterLOS (size: 0x4e0)
namespace CFilterLOS {
}

// CPointOrient (size: 0x4c8)
namespace CPointOrient {
    constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTarget = 0x4b0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bActive = 0x4b4; // bool
    constexpr std::ptrdiff_t m_nGoalDirection = 0x4b8; // PointOrientGoalDirectionType_t
    constexpr std::ptrdiff_t m_nConstraint = 0x4bc; // PointOrientConstraint_t
    constexpr std::ptrdiff_t m_flMaxTurnRate = 0x4c0; // float32
    constexpr std::ptrdiff_t m_flLastGameTime = 0x4c4; // GameTime_t
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

// CWeaponP250 (size: 0x1150)
namespace CWeaponP250 {
}

// CDestructiblePartsComponent (size: 0x70)
namespace CDestructiblePartsComponent {
    constexpr std::ptrdiff_t _m_pChainEntity = 0x0; // CNetworkVarChainer
    constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48; // CUtlVector< uint16 >
    constexpr std::ptrdiff_t m_hOwner = 0x60; // CHandle< CBaseModelEntity >
}

// CChangeLevel (size: 0x8c0)
namespace CChangeLevel {
    constexpr std::ptrdiff_t m_sMapName = 0x890; // CUtlString
    constexpr std::ptrdiff_t m_sLandmarkName = 0x898; // CUtlString
    constexpr std::ptrdiff_t m_OnChangeLevel = 0x8a0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bTouched = 0x8b8; // bool
    constexpr std::ptrdiff_t m_bNoTouch = 0x8b9; // bool
    constexpr std::ptrdiff_t m_bNewChapter = 0x8ba; // bool
    constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0x8bb; // bool
}

// CBaseButton (size: 0x8b0)
namespace CBaseButton {
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7b0; // QAngle
    constexpr std::ptrdiff_t m_fStayPushed = 0x7bc; // bool
    constexpr std::ptrdiff_t m_fRotating = 0x7bd; // bool
    constexpr std::ptrdiff_t m_ls = 0x7c0; // locksound_t
    constexpr std::ptrdiff_t m_sUseSound = 0x7e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sLockedSound = 0x7e8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sUnlockedSound = 0x7f0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sOverrideAnticipationName = 0x7f8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bLocked = 0x800; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0x801; // bool
    constexpr std::ptrdiff_t m_flUseLockedTime = 0x804; // GameTime_t
    constexpr std::ptrdiff_t m_bSolidBsp = 0x808; // bool
    constexpr std::ptrdiff_t m_OnDamaged = 0x810; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPressed = 0x828; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUseLocked = 0x840; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnIn = 0x858; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOut = 0x870; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nState = 0x888; // int32
    constexpr std::ptrdiff_t m_hConstraint = 0x88c; // CEntityHandle
    constexpr std::ptrdiff_t m_hConstraintParent = 0x890; // CEntityHandle
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0x894; // bool
    constexpr std::ptrdiff_t m_sGlowEntity = 0x898; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_glowEntity = 0x8a0; // CHandle< CBaseModelEntity >
    constexpr std::ptrdiff_t m_usable = 0x8a4; // bool
    constexpr std::ptrdiff_t m_szDisplayText = 0x8a8; // CUtlSymbolLarge
}

// CPulseCell_SoundEventStart (size: 0x50)
namespace CPulseCell_SoundEventStart {
    constexpr std::ptrdiff_t m_Type = 0x48; // SoundEventStartType_t
}

// CPulseCell_Step_DebugLog (size: 0x48)
namespace CPulseCell_Step_DebugLog {
}

// CItem_Healthshot (size: 0x1140)
namespace CItem_Healthshot {
}

// CBaseGrenade (size: 0xb40)
namespace CBaseGrenade {
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xab8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExplode = 0xad0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bHasWarnedAI = 0xae8; // bool
    constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0xae9; // bool
    constexpr std::ptrdiff_t m_bIsLive = 0xaea; // bool
    constexpr std::ptrdiff_t m_DmgRadius = 0xaec; // float32
    constexpr std::ptrdiff_t m_flDetonateTime = 0xaf0; // GameTime_t
    constexpr std::ptrdiff_t m_flWarnAITime = 0xaf4; // float32
    constexpr std::ptrdiff_t m_flDamage = 0xaf8; // float32
    constexpr std::ptrdiff_t m_iszBounceSound = 0xb00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ExplosionSound = 0xb08; // CUtlString
    constexpr std::ptrdiff_t m_hThrower = 0xb14; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_flNextAttack = 0xb2c; // GameTime_t
    constexpr std::ptrdiff_t m_hOriginalThrower = 0xb30; // CHandle< CCSPlayerPawn >
}

// CColorCorrectionVolume (size: 0xab0)
namespace CColorCorrectionVolume {
    constexpr std::ptrdiff_t m_MaxWeight = 0x890; // float32
    constexpr std::ptrdiff_t m_FadeDuration = 0x894; // float32
    constexpr std::ptrdiff_t m_Weight = 0x898; // float32
    constexpr std::ptrdiff_t m_lookupFilename = 0x89c; // char[512]
    constexpr std::ptrdiff_t m_LastEnterWeight = 0xa9c; // float32
    constexpr std::ptrdiff_t m_LastEnterTime = 0xaa0; // GameTime_t
    constexpr std::ptrdiff_t m_LastExitWeight = 0xaa4; // float32
    constexpr std::ptrdiff_t m_LastExitTime = 0xaa8; // GameTime_t
}

// CCSPlayerController_ActionTrackingServices (size: 0x420)
namespace CCSPlayerController_ActionTrackingServices {
    constexpr std::ptrdiff_t m_perRoundStats = 0x40; // CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t >
    constexpr std::ptrdiff_t m_matchStats = 0xc8; // CSMatchStats_t
    constexpr std::ptrdiff_t m_iNumRoundKills = 0x188; // int32
    constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x18c; // int32
    constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x190; // float32
}

// CBodyComponentBaseAnimGraph (size: 0xd10)
namespace CBodyComponentBaseAnimGraph {
    constexpr std::ptrdiff_t m_animationController = 0x4b0; // CBaseAnimGraphController
}

// CPulseCell_BaseYieldingInflow (size: 0x48)
namespace CPulseCell_BaseYieldingInflow {
}

// PulseNodeDynamicOutflows_t (size: 0x18)
namespace PulseNodeDynamicOutflows_t {
    constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t >
}

// CFogVolume (size: 0x758)
namespace CFogVolume {
    constexpr std::ptrdiff_t m_fogName = 0x730; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_postProcessName = 0x738; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_colorCorrectionName = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bDisabled = 0x750; // bool
    constexpr std::ptrdiff_t m_bInFogVolumesList = 0x751; // bool
}

// CFuncRotating (size: 0x7f8)
namespace CFuncRotating {
    constexpr std::ptrdiff_t m_OnStopped = 0x730; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStarted = 0x748; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedStart = 0x760; // CEntityIOOutput
    constexpr std::ptrdiff_t m_localRotationVector = 0x778; // RotationVector
    constexpr std::ptrdiff_t m_flFanFriction = 0x784; // float32
    constexpr std::ptrdiff_t m_flAttenuation = 0x788; // float32
    constexpr std::ptrdiff_t m_flVolume = 0x78c; // float32
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x790; // float32
    constexpr std::ptrdiff_t m_flMaxSpeed = 0x794; // float32
    constexpr std::ptrdiff_t m_flBlockDamage = 0x798; // float32
    constexpr std::ptrdiff_t m_NoiseRunning = 0x7a0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bReversed = 0x7a8; // bool
    constexpr std::ptrdiff_t m_bAccelDecel = 0x7a9; // bool
    constexpr std::ptrdiff_t m_prevLocalAngles = 0x7c0; // QAngle
    constexpr std::ptrdiff_t m_angStart = 0x7cc; // QAngle
    constexpr std::ptrdiff_t m_bStopAtStartPos = 0x7d8; // bool
    constexpr std::ptrdiff_t m_vecClientOrigin = 0x7dc; // Vector
    constexpr std::ptrdiff_t m_vecClientAngles = 0x7e8; // QAngle
}

// CTimerEntity (size: 0x518)
namespace CTimerEntity {
    constexpr std::ptrdiff_t m_OnTimer = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimerHigh = 0x4c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimerLow = 0x4d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iDisabled = 0x4f0; // int32
    constexpr std::ptrdiff_t m_flInitialDelay = 0x4f4; // float32
    constexpr std::ptrdiff_t m_flRefireTime = 0x4f8; // float32
    constexpr std::ptrdiff_t m_bUpDownState = 0x4fc; // bool
    constexpr std::ptrdiff_t m_iUseRandomTime = 0x500; // int32
    constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x504; // bool
    constexpr std::ptrdiff_t m_flLowerRandomBound = 0x508; // float32
    constexpr std::ptrdiff_t m_flUpperRandomBound = 0x50c; // float32
    constexpr std::ptrdiff_t m_flRemainingTime = 0x510; // float32
    constexpr std::ptrdiff_t m_bPaused = 0x514; // bool
}

// CBtActionMoveTo (size: 0xe8)
namespace CBtActionMoveTo {
    constexpr std::ptrdiff_t m_szDestinationInputKey = 0x60; // CUtlString
    constexpr std::ptrdiff_t m_szHidingSpotInputKey = 0x68; // CUtlString
    constexpr std::ptrdiff_t m_szThreatInputKey = 0x70; // CUtlString
    constexpr std::ptrdiff_t m_vecDestination = 0x78; // Vector
    constexpr std::ptrdiff_t m_bAutoLookAdjust = 0x84; // bool
    constexpr std::ptrdiff_t m_bComputePath = 0x85; // bool
    constexpr std::ptrdiff_t m_flDamagingAreasPenaltyCost = 0x88; // float32
    constexpr std::ptrdiff_t m_CheckApproximateCornersTimer = 0x90; // CountdownTimer
    constexpr std::ptrdiff_t m_CheckHighPriorityItem = 0xa8; // CountdownTimer
    constexpr std::ptrdiff_t m_RepathTimer = 0xc0; // CountdownTimer
    constexpr std::ptrdiff_t m_flArrivalEpsilon = 0xd8; // float32
    constexpr std::ptrdiff_t m_flAdditionalArrivalEpsilon2D = 0xdc; // float32
    constexpr std::ptrdiff_t m_flHidingSpotCheckDistanceThreshold = 0xe0; // float32
    constexpr std::ptrdiff_t m_flNearestAreaDistanceThreshold = 0xe4; // float32
}

// CPlayer_MovementServices_Humanoid (size: 0x278)
namespace CPlayer_MovementServices_Humanoid {
    constexpr std::ptrdiff_t m_flStepSoundTime = 0x240; // float32
    constexpr std::ptrdiff_t m_flFallVelocity = 0x244; // float32
    constexpr std::ptrdiff_t m_groundNormal = 0x248; // Vector
    constexpr std::ptrdiff_t m_flSurfaceFriction = 0x254; // float32
    constexpr std::ptrdiff_t m_surfaceProps = 0x258; // CUtlStringToken
    constexpr std::ptrdiff_t m_nStepside = 0x268; // int32
    constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x26c; // Vector
}

// CBaseEntityAPI (size: 0x8)
namespace CBaseEntityAPI {
}

// CPulseCell_IsRequirementValid::Criteria_t (size: 0x1)
namespace CPulseCell_IsRequirementValid_Criteria_t {
    constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
}

// CWeaponG3SG1 (size: 0x1150)
namespace CWeaponG3SG1 {
}

// CTriggerOnce (size: 0x8a8)
namespace CTriggerOnce {
}

// CSMatchStats_t (size: 0xc0)
namespace CSMatchStats_t {
    constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
    constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6c; // int32
    constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
    constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32
    constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32
    constexpr std::ptrdiff_t m_iEnemy2Ks = 0x7c; // int32
    constexpr std::ptrdiff_t m_iUtility_Count = 0x80; // int32
    constexpr std::ptrdiff_t m_iUtility_Successes = 0x84; // int32
    constexpr std::ptrdiff_t m_iUtility_Enemies = 0x88; // int32
    constexpr std::ptrdiff_t m_iFlash_Count = 0x8c; // int32
    constexpr std::ptrdiff_t m_iFlash_Successes = 0x90; // int32
    constexpr std::ptrdiff_t m_flHealthPointsRemovedTotal = 0x94; // float32
    constexpr std::ptrdiff_t m_flHealthPointsDealtTotal = 0x98; // float32
    constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x9c; // int32
    constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0xa0; // int32
    constexpr std::ptrdiff_t m_i1v1Count = 0xa4; // int32
    constexpr std::ptrdiff_t m_i1v1Wins = 0xa8; // int32
    constexpr std::ptrdiff_t m_i1v2Count = 0xac; // int32
    constexpr std::ptrdiff_t m_i1v2Wins = 0xb0; // int32
    constexpr std::ptrdiff_t m_iEntryCount = 0xb4; // int32
    constexpr std::ptrdiff_t m_iEntryWins = 0xb8; // int32
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

// CFuncMonitor (size: 0x770)
namespace CFuncMonitor {
    constexpr std::ptrdiff_t m_targetCamera = 0x750; // CUtlString
    constexpr std::ptrdiff_t m_nResolutionEnum = 0x758; // int32
    constexpr std::ptrdiff_t m_bRenderShadows = 0x75c; // bool
    constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x75d; // bool
    constexpr std::ptrdiff_t m_brushModelName = 0x760; // CUtlString
    constexpr std::ptrdiff_t m_hTargetCamera = 0x768; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bEnabled = 0x76c; // bool
    constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x76d; // bool
    constexpr std::ptrdiff_t m_bStartEnabled = 0x76e; // bool
}

// CInfoVisibilityBox (size: 0x4c0)
namespace CInfoVisibilityBox {
    constexpr std::ptrdiff_t m_nMode = 0x4ac; // int32
    constexpr std::ptrdiff_t m_vBoxSize = 0x4b0; // Vector
    constexpr std::ptrdiff_t m_bEnabled = 0x4bc; // bool
}

// CGunTarget (size: 0x7d0)
namespace CGunTarget {
    constexpr std::ptrdiff_t m_on = 0x7b0; // bool
    constexpr std::ptrdiff_t m_hTargetEnt = 0x7b4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_OnDeath = 0x7b8; // CEntityIOOutput
}

// CSoundEventConeEntity (size: 0x570)
namespace CSoundEventConeEntity {
    constexpr std::ptrdiff_t m_flEmitterAngle = 0x558; // float32
    constexpr std::ptrdiff_t m_flSweetSpotAngle = 0x55c; // float32
    constexpr std::ptrdiff_t m_flAttenMin = 0x560; // float32
    constexpr std::ptrdiff_t m_flAttenMax = 0x564; // float32
    constexpr std::ptrdiff_t m_iszParameterName = 0x568; // CUtlSymbolLarge
}

// CSoundOpvarSetOBBEntity (size: 0x6a8)
namespace CSoundOpvarSetOBBEntity {
}

// CFilterMultipleAPI (size: 0x8)
namespace CFilterMultipleAPI {
}

// CDecoyProjectile (size: 0xbf0)
namespace CDecoyProjectile {
    constexpr std::ptrdiff_t m_nDecoyShotTick = 0xbc8; // int32
    constexpr std::ptrdiff_t m_shotsRemaining = 0xbcc; // int32
    constexpr std::ptrdiff_t m_fExpireTime = 0xbd0; // GameTime_t
    constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xbe0; // uint16
}

// CPrecipitationBlocker (size: 0x730)
namespace CPrecipitationBlocker {
}

// CSoundOpvarSetPathCornerEntity (size: 0x670)
namespace CSoundOpvarSetPathCornerEntity {
    constexpr std::ptrdiff_t m_bUseParentedPath = 0x658; // bool
    constexpr std::ptrdiff_t m_flDistMinSqr = 0x65c; // float32
    constexpr std::ptrdiff_t m_flDistMaxSqr = 0x660; // float32
    constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x668; // CUtlSymbolLarge
}

// CPointClientCommand (size: 0x4a8)
namespace CPointClientCommand {
}

// CHostageRescueZone (size: 0x8b0)
namespace CHostageRescueZone {
}

// CWorld (size: 0x730)
namespace CWorld {
}

// CPathMoverEntitySpawner (size: 0x508)
namespace CPathMoverEntitySpawner {
    constexpr std::ptrdiff_t m_szSpawnTemplates = 0x4a8; // CUtlSymbolLarge[4]
    constexpr std::ptrdiff_t m_nSpawnIndex = 0x4c8; // int32
    constexpr std::ptrdiff_t m_hPathMover = 0x4cc; // CHandle< CPathMover >
    constexpr std::ptrdiff_t m_flSpawnFrequencySeconds = 0x4d0; // float32
    constexpr std::ptrdiff_t m_flSpawnFrequencyDistToNearestMover = 0x4d4; // float32
    constexpr std::ptrdiff_t m_mapSpawnedMoverTemplates = 0x4d8; // CUtlHashtable< CHandle< CFuncMover >, CPathMoverEntitySpawn >
    constexpr std::ptrdiff_t m_nMaxActive = 0x4f8; // int32
    constexpr std::ptrdiff_t m_flLastSpawnTime = 0x4fc; // GameTime_t
    constexpr std::ptrdiff_t m_bEnabled = 0x500; // bool
}

// CModelState (size: 0x250)
namespace CModelState {
    constexpr std::ptrdiff_t m_hModel = 0xa0; // CStrongHandle< InfoForResourceTypeCModel >
    constexpr std::ptrdiff_t m_ModelName = 0xa8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xf5; // bool
    constexpr std::ptrdiff_t m_MeshGroupMask = 0x1a0; // uint64
    constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x1f0; // CNetworkUtlVectorBase< int32 >
    constexpr std::ptrdiff_t m_nIdealMotionType = 0x23a; // int8
    constexpr std::ptrdiff_t m_nForceLOD = 0x23b; // int8
    constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x23c; // int8
}

// CPulseCell_LerpCameraSettings::CursorState_t (size: 0x2c)
namespace CPulseCell_LerpCameraSettings_CursorState_t {
    constexpr std::ptrdiff_t m_hCamera = 0x8; // CHandle< CPointCamera >
    constexpr std::ptrdiff_t m_OverlaidStart = 0xc; // PointCameraSettings_t
    constexpr std::ptrdiff_t m_OverlaidEnd = 0x1c; // PointCameraSettings_t
}

// CPulseCell_Outflow_CycleOrdered (size: 0x60)
namespace CPulseCell_Outflow_CycleOrdered {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

// CWeaponGlock (size: 0x1150)
namespace CWeaponGlock {
}

// CHEGrenadeProjectile (size: 0xbb0)
namespace CHEGrenadeProjectile {
}

// CTriggerGravity (size: 0x890)
namespace CTriggerGravity {
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

// CWeaponGalilAR (size: 0x1150)
namespace CWeaponGalilAR {
}

// CFilterMassGreater (size: 0x4e8)
namespace CFilterMassGreater {
    constexpr std::ptrdiff_t m_fFilterMass = 0x4e0; // float32
}

// CWeaponMP7 (size: 0x1150)
namespace CWeaponMP7 {
}

// CCSWeaponBaseGun (size: 0x1150)
namespace CCSWeaponBaseGun {
    constexpr std::ptrdiff_t m_zoomLevel = 0x1130; // int32
    constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1134; // int32
    constexpr std::ptrdiff_t m_silencedModelIndex = 0x1140; // int32
    constexpr std::ptrdiff_t m_inPrecache = 0x1144; // bool
    constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1145; // bool
    constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x1148; // int32
    constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0x114c; // bool
    constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0x114d; // bool
    constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0x114e; // bool
    constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0x114f; // bool
}

// CEnableMotionFixup (size: 0x4a8)
namespace CEnableMotionFixup {
}

// CLogicActiveAutosave (size: 0x4c8)
namespace CLogicActiveAutosave {
    constexpr std::ptrdiff_t m_TriggerHitPoints = 0x4b8; // int32
    constexpr std::ptrdiff_t m_flTimeToTrigger = 0x4bc; // float32
    constexpr std::ptrdiff_t m_flStartTime = 0x4c0; // GameTime_t
    constexpr std::ptrdiff_t m_flDangerousTime = 0x4c4; // float32
}

// CMathCounter (size: 0x558)
namespace CMathCounter {
    constexpr std::ptrdiff_t m_flMin = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flMax = 0x4ac; // float32
    constexpr std::ptrdiff_t m_bHitMin = 0x4b0; // bool
    constexpr std::ptrdiff_t m_bHitMax = 0x4b1; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0x4b2; // bool
    constexpr std::ptrdiff_t m_OutValue = 0x4b8; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnGetValue = 0x4d8; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnHitMin = 0x4f8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHitMax = 0x510; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnChangedFromMin = 0x528; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnChangedFromMax = 0x540; // CEntityIOOutput
}

// CCSGameModeRules_ArmsRace (size: 0x88)
namespace CCSGameModeRules_ArmsRace {
    constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // CNetworkUtlVectorBase< CUtlString >
}

// CAttributeContainer (size: 0x2f8)
namespace CAttributeContainer {
    constexpr std::ptrdiff_t m_Item = 0x50; // CEconItemView
}

// CCSPlace (size: 0x750)
namespace CCSPlace {
    constexpr std::ptrdiff_t m_name = 0x748; // CUtlSymbolLarge
}

// PulseSelectorOutflowList_t (size: 0x18)
namespace PulseSelectorOutflowList_t {
    constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector< OutflowWithRequirements_t >
}

// CFilterContext (size: 0x4e8)
namespace CFilterContext {
    constexpr std::ptrdiff_t m_iFilterContext = 0x4e0; // CUtlSymbolLarge
}

// CLightEnvironmentEntity (size: 0x738)
namespace CLightEnvironmentEntity {
}

// CEnvDecal (size: 0x750)
namespace CEnvDecal {
    constexpr std::ptrdiff_t m_hDecalMaterial = 0x730; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_flWidth = 0x738; // float32
    constexpr std::ptrdiff_t m_flHeight = 0x73c; // float32
    constexpr std::ptrdiff_t m_flDepth = 0x740; // float32
    constexpr std::ptrdiff_t m_nRenderOrder = 0x744; // uint32
    constexpr std::ptrdiff_t m_bProjectOnWorld = 0x748; // bool
    constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x749; // bool
    constexpr std::ptrdiff_t m_bProjectOnWater = 0x74a; // bool
    constexpr std::ptrdiff_t m_flDepthSortBias = 0x74c; // float32
}

// CEnvVolumetricFogVolume (size: 0x4f0)
namespace CEnvVolumetricFogVolume {
    constexpr std::ptrdiff_t m_bActive = 0x4a8; // bool
    constexpr std::ptrdiff_t m_vBoxMins = 0x4ac; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4b8; // Vector
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4c4; // bool
    constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x4c5; // bool
    constexpr std::ptrdiff_t m_flStrength = 0x4c8; // float32
    constexpr std::ptrdiff_t m_nFalloffShape = 0x4cc; // int32
    constexpr std::ptrdiff_t m_flFalloffExponent = 0x4d0; // float32
    constexpr std::ptrdiff_t m_flHeightFogDepth = 0x4d4; // float32
    constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x4d8; // float32
    constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x4dc; // float32
    constexpr std::ptrdiff_t m_fSunLightStrength = 0x4e0; // float32
    constexpr std::ptrdiff_t m_fNoiseStrength = 0x4e4; // float32
    constexpr std::ptrdiff_t m_TintColor = 0x4e8; // Color
    constexpr std::ptrdiff_t m_bOverrideTintColor = 0x4ec; // bool
    constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x4ed; // bool
    constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x4ee; // bool
    constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x4ef; // bool
}

// CServerOnlyEntity (size: 0x4a8)
namespace CServerOnlyEntity {
}

// CPulseCell_PlaySequence::CursorState_t (size: 0x4)
namespace CPulseCell_PlaySequence_CursorState_t {
    constexpr std::ptrdiff_t m_hTarget = 0x0; // CHandle< CBaseAnimGraph >
}

// CBodyComponentSkeletonInstance (size: 0x4b0)
namespace CBodyComponentSkeletonInstance {
    constexpr std::ptrdiff_t m_skeletonInstance = 0x80; // CSkeletonInstance
}

// CItemGeneric (size: 0xbf0)
namespace CItemGeneric {
    constexpr std::ptrdiff_t m_bHasTriggerRadius = 0xad4; // bool
    constexpr std::ptrdiff_t m_bHasPickupRadius = 0xad5; // bool
    constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0xad8; // float32
    constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0xadc; // float32
    constexpr std::ptrdiff_t m_flLastPickupCheck = 0xae0; // GameTime_t
    constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0xae4; // bool
    constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0xae5; // bool
    constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0xae8; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0xaf0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0xaf8; // bool
    constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0xb00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPickupParticleEffect = 0xb08; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_pPickupSoundEffect = 0xb10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pPickupScriptFunction = 0xb18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0xb20; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0xb28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0xb30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pPickupFilterName = 0xb38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPickupFilter = 0xb40; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_OnPickup = 0xb48; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTimeout = 0xb60; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xb78; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerTouch = 0xb90; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xba8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xbc0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPickupRadius = 0xbc8; // float32
    constexpr std::ptrdiff_t m_flTriggerRadius = 0xbcc; // float32
    constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xbd0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xbd8; // bool
    constexpr std::ptrdiff_t m_glowColor = 0xbd9; // Color
    constexpr std::ptrdiff_t m_bUseable = 0xbdd; // bool
    constexpr std::ptrdiff_t m_hTriggerHelper = 0xbe0; // CHandle< CItemGenericTriggerHelper >
}

// CPointValueRemapper (size: 0x650)
namespace CPointValueRemapper {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4a9; // bool
    constexpr std::ptrdiff_t m_nInputType = 0x4ac; // ValueRemapperInputType_t
    constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hRemapLineStart = 0x4c0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hRemapLineEnd = 0x4c4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x4c8; // float32
    constexpr std::ptrdiff_t m_flDisengageDistance = 0x4cc; // float32
    constexpr std::ptrdiff_t m_flEngageDistance = 0x4d0; // float32
    constexpr std::ptrdiff_t m_bRequiresUseKey = 0x4d4; // bool
    constexpr std::ptrdiff_t m_nOutputType = 0x4d8; // ValueRemapperOutputType_t
    constexpr std::ptrdiff_t m_iszOutputEntityName = 0x4e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x4e8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x4f0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x4f8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hOutputEntities = 0x500; // CNetworkUtlVectorBase< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_nHapticsType = 0x518; // ValueRemapperHapticsType_t
    constexpr std::ptrdiff_t m_nMomentumType = 0x51c; // ValueRemapperMomentumType_t
    constexpr std::ptrdiff_t m_flMomentumModifier = 0x520; // float32
    constexpr std::ptrdiff_t m_flSnapValue = 0x524; // float32
    constexpr std::ptrdiff_t m_flCurrentMomentum = 0x528; // float32
    constexpr std::ptrdiff_t m_nRatchetType = 0x52c; // ValueRemapperRatchetType_t
    constexpr std::ptrdiff_t m_flRatchetOffset = 0x530; // float32
    constexpr std::ptrdiff_t m_flInputOffset = 0x534; // float32
    constexpr std::ptrdiff_t m_bEngaged = 0x538; // bool
    constexpr std::ptrdiff_t m_bFirstUpdate = 0x539; // bool
    constexpr std::ptrdiff_t m_flPreviousValue = 0x53c; // float32
    constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x540; // GameTime_t
    constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x544; // Vector
    constexpr std::ptrdiff_t m_hUsingPlayer = 0x550; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_flCustomOutputValue = 0x554; // float32
    constexpr std::ptrdiff_t m_iszSoundEngage = 0x558; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundDisengage = 0x560; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x568; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x570; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x578; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_Position = 0x598; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_PositionDelta = 0x5b8; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnReachedValueZero = 0x5d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedValueOne = 0x5f0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x608; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnEngage = 0x620; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDisengage = 0x638; // CEntityIOOutput
}

// CBtNodeConditionInactive (size: 0x98)
namespace CBtNodeConditionInactive {
    constexpr std::ptrdiff_t m_flRoundStartThresholdSeconds = 0x78; // float32
    constexpr std::ptrdiff_t m_flSensorInactivityThresholdSeconds = 0x7c; // float32
    constexpr std::ptrdiff_t m_SensorInactivityTimer = 0x80; // CountdownTimer
}

// CCSGO_TeamIntroCounterTerroristPosition (size: 0xcc0)
namespace CCSGO_TeamIntroCounterTerroristPosition {
}

// CRagdollProp (size: 0xb70)
namespace CRagdollProp {
    constexpr std::ptrdiff_t m_ragdoll = 0xa30; // ragdoll_t
    constexpr std::ptrdiff_t m_bStartDisabled = 0xa80; // bool
    constexpr std::ptrdiff_t m_ragEnabled = 0xa88; // CNetworkUtlVectorBase< bool >
    constexpr std::ptrdiff_t m_ragPos = 0xaa0; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_ragAngles = 0xab8; // CNetworkUtlVectorBase< QAngle >
    constexpr std::ptrdiff_t m_lastUpdateTickCount = 0xad0; // uint32
    constexpr std::ptrdiff_t m_allAsleep = 0xad4; // bool
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xad5; // bool
    constexpr std::ptrdiff_t m_hDamageEntity = 0xad8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hKiller = 0xadc; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xae0; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xae4; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeOutStartTime = 0xae8; // GameTime_t
    constexpr std::ptrdiff_t m_flFadeTime = 0xaec; // float32
    constexpr std::ptrdiff_t m_vecLastOrigin = 0xaf0; // VectorWS
    constexpr std::ptrdiff_t m_flAwakeTime = 0xafc; // GameTime_t
    constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0xb00; // GameTime_t
    constexpr std::ptrdiff_t m_strOriginClassName = 0xb08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strSourceClassName = 0xb10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0xb18; // bool
    constexpr std::ptrdiff_t m_bAllowStretch = 0xb19; // bool
    constexpr std::ptrdiff_t m_flBlendWeight = 0xb1c; // float32
    constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xb20; // float32
    constexpr std::ptrdiff_t m_ragdollMins = 0xb28; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_ragdollMaxs = 0xb40; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0xb58; // bool
}

// CScriptComponent (size: 0x38)
namespace CScriptComponent {
    constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
}

// CFuncTrain (size: 0x7f8)
namespace CFuncTrain {
    constexpr std::ptrdiff_t m_hCurrentTarget = 0x7d8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_activated = 0x7dc; // bool
    constexpr std::ptrdiff_t m_hEnemy = 0x7e0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flBlockDamage = 0x7e4; // float32
    constexpr std::ptrdiff_t m_flNextBlockTime = 0x7e8; // GameTime_t
    constexpr std::ptrdiff_t m_iszLastTarget = 0x7f0; // CUtlSymbolLarge
}

// CAI_ChangeHintGroup (size: 0x4c8)
namespace CAI_ChangeHintGroup {
    constexpr std::ptrdiff_t m_iSearchType = 0x4a8; // int32
    constexpr std::ptrdiff_t m_strSearchName = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_strNewHintGroup = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flRadius = 0x4c0; // float32
}

// CCSPlayer_BuyServices (size: 0x158)
namespace CCSPlayer_BuyServices {
    constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xd0; // CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t >
}

// CWeaponAug (size: 0x1150)
namespace CWeaponAug {
}

// CPhysHinge (size: 0x678)
namespace CPhysHinge {
    constexpr std::ptrdiff_t m_soundInfo = 0x510; // ConstraintSoundInfo
    constexpr std::ptrdiff_t m_NotifyMinLimitReached = 0x5a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyMaxLimitReached = 0x5c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bAtMinLimit = 0x5d8; // bool
    constexpr std::ptrdiff_t m_bAtMaxLimit = 0x5d9; // bool
    constexpr std::ptrdiff_t m_hinge = 0x5dc; // constraint_hingeparams_t
    constexpr std::ptrdiff_t m_hingeFriction = 0x61c; // float32
    constexpr std::ptrdiff_t m_systemLoadScale = 0x620; // float32
    constexpr std::ptrdiff_t m_bIsAxisLocal = 0x624; // bool
    constexpr std::ptrdiff_t m_flMinRotation = 0x628; // float32
    constexpr std::ptrdiff_t m_flMaxRotation = 0x62c; // float32
    constexpr std::ptrdiff_t m_flInitialRotation = 0x630; // float32
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x634; // float32
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x638; // float32
    constexpr std::ptrdiff_t m_flAngleSpeed = 0x63c; // float32
    constexpr std::ptrdiff_t m_flAngleSpeedThreshold = 0x640; // float32
    constexpr std::ptrdiff_t m_flLimitsDebugVisRotation = 0x644; // float32
    constexpr std::ptrdiff_t m_OnStartMoving = 0x648; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStopMoving = 0x660; // CEntityIOOutput
}

// CBuyZone (size: 0x898)
namespace CBuyZone {
    constexpr std::ptrdiff_t m_LegacyTeamNum = 0x890; // int32
}

// CWeaponSSG08 (size: 0x1150)
namespace CWeaponSSG08 {
}

// CLogicRelayAPI (size: 0x8)
namespace CLogicRelayAPI {
}

// CInfoWorldLayer (size: 0x4d8)
namespace CInfoWorldLayer {
    constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_worldName = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_layerName = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x4d0; // bool
    constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x4d1; // bool
    constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x4d2; // bool
    constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x4d4; // uint32
}

// CBodyComponentBaseModelEntity (size: 0x4b0)
namespace CBodyComponentBaseModelEntity {
}

// CLogicProximity (size: 0x4a8)
namespace CLogicProximity {
}

// CPointGiveAmmo (size: 0x4b0)
namespace CPointGiveAmmo {
    constexpr std::ptrdiff_t m_pActivator = 0x4a8; // CHandle< CBaseEntity >
}

// FilterDamageType (size: 0x4e8)
namespace FilterDamageType {
    constexpr std::ptrdiff_t m_iDamageType = 0x4e0; // int32
}

// CPointCamera (size: 0x508)
namespace CPointCamera {
    constexpr std::ptrdiff_t m_FOV = 0x4a8; // float32
    constexpr std::ptrdiff_t m_Resolution = 0x4ac; // float32
    constexpr std::ptrdiff_t m_bFogEnable = 0x4b0; // bool
    constexpr std::ptrdiff_t m_FogColor = 0x4b1; // Color
    constexpr std::ptrdiff_t m_flFogStart = 0x4b8; // float32
    constexpr std::ptrdiff_t m_flFogEnd = 0x4bc; // float32
    constexpr std::ptrdiff_t m_flFogMaxDensity = 0x4c0; // float32
    constexpr std::ptrdiff_t m_bActive = 0x4c4; // bool
    constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x4c5; // bool
    constexpr std::ptrdiff_t m_flAspectRatio = 0x4c8; // float32
    constexpr std::ptrdiff_t m_bNoSky = 0x4cc; // bool
    constexpr std::ptrdiff_t m_fBrightness = 0x4d0; // float32
    constexpr std::ptrdiff_t m_flZFar = 0x4d4; // float32
    constexpr std::ptrdiff_t m_flZNear = 0x4d8; // float32
    constexpr std::ptrdiff_t m_bCanHLTVUse = 0x4dc; // bool
    constexpr std::ptrdiff_t m_bAlignWithParent = 0x4dd; // bool
    constexpr std::ptrdiff_t m_bDofEnabled = 0x4de; // bool
    constexpr std::ptrdiff_t m_flDofNearBlurry = 0x4e0; // float32
    constexpr std::ptrdiff_t m_flDofNearCrisp = 0x4e4; // float32
    constexpr std::ptrdiff_t m_flDofFarCrisp = 0x4e8; // float32
    constexpr std::ptrdiff_t m_flDofFarBlurry = 0x4ec; // float32
    constexpr std::ptrdiff_t m_flDofTiltToGround = 0x4f0; // float32
    constexpr std::ptrdiff_t m_TargetFOV = 0x4f4; // float32
    constexpr std::ptrdiff_t m_DegreesPerSecond = 0x4f8; // float32
    constexpr std::ptrdiff_t m_bIsOn = 0x4fc; // bool
    constexpr std::ptrdiff_t m_pNext = 0x500; // CPointCamera*
}

// CAttributeList (size: 0x78)
namespace CAttributeList {
    constexpr std::ptrdiff_t m_Attributes = 0x8; // CUtlVectorEmbeddedNetworkVar< CEconItemAttribute >
    constexpr std::ptrdiff_t m_pManager = 0x70; // CAttributeManager*
}

// CPulseCell_Inflow_Wait (size: 0x90)
namespace CPulseCell_Inflow_Wait {
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
}

// CFilterProximity (size: 0x4e8)
namespace CFilterProximity {
    constexpr std::ptrdiff_t m_flRadius = 0x4e0; // float32
}

// CCS2WeaponGraphController (size: 0x5d8)
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

// CEffectData (size: 0x70)
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

// CEntityDissolve (size: 0x760)
namespace CEntityDissolve {
    constexpr std::ptrdiff_t m_flFadeInStart = 0x730; // float32
    constexpr std::ptrdiff_t m_flFadeInLength = 0x734; // float32
    constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x738; // float32
    constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x73c; // float32
    constexpr std::ptrdiff_t m_flFadeOutStart = 0x740; // float32
    constexpr std::ptrdiff_t m_flFadeOutLength = 0x744; // float32
    constexpr std::ptrdiff_t m_flStartTime = 0x748; // GameTime_t
    constexpr std::ptrdiff_t m_nDissolveType = 0x74c; // EntityDisolveType_t
    constexpr std::ptrdiff_t m_vDissolverOrigin = 0x750; // Vector
    constexpr std::ptrdiff_t m_nMagnitude = 0x75c; // uint32
}

// CCSGameRules (size: 0x11440)
namespace CCSGameRules {
    constexpr std::ptrdiff_t m_bFreezePeriod = 0xd8; // bool
    constexpr std::ptrdiff_t m_bWarmupPeriod = 0xd9; // bool
    constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xdc; // GameTime_t
    constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xe0; // GameTime_t
    constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xe4; // bool
    constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xe5; // bool
    constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xe8; // float32
    constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xec; // float32
    constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xf0; // int32
    constexpr std::ptrdiff_t m_nCTTimeOuts = 0xf4; // int32
    constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xf8; // bool
    constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xf9; // bool
    constexpr std::ptrdiff_t m_iFreezeTime = 0xfc; // int32
    constexpr std::ptrdiff_t m_iRoundTime = 0x100; // int32
    constexpr std::ptrdiff_t m_fMatchStartTime = 0x104; // float32
    constexpr std::ptrdiff_t m_fRoundStartTime = 0x108; // GameTime_t
    constexpr std::ptrdiff_t m_flRestartRoundTime = 0x10c; // GameTime_t
    constexpr std::ptrdiff_t m_bGameRestart = 0x110; // bool
    constexpr std::ptrdiff_t m_flGameStartTime = 0x114; // float32
    constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x118; // float32
    constexpr std::ptrdiff_t m_gamePhase = 0x11c; // int32
    constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x120; // int32
    constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x124; // int32
    constexpr std::ptrdiff_t m_nOvertimePlaying = 0x128; // int32
    constexpr std::ptrdiff_t m_iHostagesRemaining = 0x12c; // int32
    constexpr std::ptrdiff_t m_bAnyHostageReached = 0x130; // bool
    constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x131; // bool
    constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x132; // bool
    constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x133; // bool
    constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x134; // bool
    constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x138; // int32
    constexpr std::ptrdiff_t m_bIsValveDS = 0x13c; // bool
    constexpr std::ptrdiff_t m_bLogoMap = 0x13d; // bool
    constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x13e; // bool
    constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x140; // int32
    constexpr std::ptrdiff_t m_MatchDevice = 0x144; // int32
    constexpr std::ptrdiff_t m_bHasMatchStarted = 0x148; // bool
    constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x14c; // int32
    constexpr std::ptrdiff_t m_szTournamentEventName = 0x150; // char[512]
    constexpr std::ptrdiff_t m_szTournamentEventStage = 0x350; // char[512]
    constexpr std::ptrdiff_t m_szMatchStatTxt = 0x550; // char[512]
    constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x750; // char[512]
    constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x950; // int32
    constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x954; // GameTime_t
    constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x958; // GameTime_t
    constexpr std::ptrdiff_t m_bIsDroppingItems = 0x95c; // bool
    constexpr std::ptrdiff_t m_bIsQuestEligible = 0x95d; // bool
    constexpr std::ptrdiff_t m_bIsHltvActive = 0x95e; // bool
    constexpr std::ptrdiff_t m_bBombPlanted = 0x95f; // bool
    constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x960; // uint16[100]
    constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xa28; // uint32[4]
    constexpr std::ptrdiff_t m_numBestOfMaps = 0xa38; // int32
    constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xa3c; // int32
    constexpr std::ptrdiff_t m_bBombDropped = 0xa40; // bool
    constexpr std::ptrdiff_t m_iRoundWinStatus = 0xa44; // int32
    constexpr std::ptrdiff_t m_eRoundWinReason = 0xa48; // int32
    constexpr std::ptrdiff_t m_bTCantBuy = 0xa4c; // bool
    constexpr std::ptrdiff_t m_bCTCantBuy = 0xa4d; // bool
    constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xa50; // int32[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xac8; // int32[30]
    constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xb40; // int32[30]
    constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xbb8; // float32[32]
    constexpr std::ptrdiff_t m_flNextRespawnWave = 0xc38; // GameTime_t[32]
    constexpr std::ptrdiff_t m_vMinimapMins = 0xcb8; // Vector
    constexpr std::ptrdiff_t m_vMinimapMaxs = 0xcc4; // Vector
    constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xcd0; // float32[8]
    constexpr std::ptrdiff_t m_ullLocalMatchID = 0xcf0; // uint64
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xcf8; // int32[10]
    constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xd20; // int32[10]
    constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xd48; // int32
    constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xd4c; // int32
    constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xd50; // int32
    constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xd70; // bool
    constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xd74; // GameTime_t
    constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xd78; // GameTime_t
    constexpr std::ptrdiff_t m_bLevelInitialized = 0xd7c; // bool
    constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xd80; // int32
    constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xd84; // int32
    constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xd88; // bool
    constexpr std::ptrdiff_t m_endMatchOnThink = 0xd89; // bool
    constexpr std::ptrdiff_t m_iNumTerrorist = 0xd8c; // int32
    constexpr std::ptrdiff_t m_iNumCT = 0xd90; // int32
    constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xd94; // int32
    constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xd98; // int32
    constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xda0; // CUtlVector< int32 >
    constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xdb8; // int32
    constexpr std::ptrdiff_t m_bFirstConnected = 0xdbc; // bool
    constexpr std::ptrdiff_t m_bCompleteReset = 0xdbd; // bool
    constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xdbe; // bool
    constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xdbf; // bool
    constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xdc0; // bool
    constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xdc8; // CUtlVector< int32 >
    constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xde4; // bool
    constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xde8; // uint32
    constexpr std::ptrdiff_t m_fAvgPlayerRank = 0xdec; // float32
    constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xdf0; // char*
    constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xdf8; // uint32
    constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xdfc; // uint32
    constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xe00; // uint32
    constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xe04; // uint32
    constexpr std::ptrdiff_t m_nCTsAliveAtFreezetimeEnd = 0xe10; // int32
    constexpr std::ptrdiff_t m_nTerroristsAliveAtFreezetimeEnd = 0xe14; // int32
    constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xe18; // bool
    constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xe19; // bool
    constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xe50; // int32
    constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xe54; // float32
    constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xe70; // int32
    constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xe74; // float32
    constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xe78; // float32
    constexpr std::ptrdiff_t m_iAccountTerrorist = 0xe7c; // int32
    constexpr std::ptrdiff_t m_iAccountCT = 0xe80; // int32
    constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xe84; // int32
    constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xe88; // int32
    constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xe8c; // int32
    constexpr std::ptrdiff_t m_iMaxNumCTs = 0xe90; // int32
    constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xe94; // int32
    constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xe98; // float32
    constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xe9c; // bool
    constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xea0; // float32
    constexpr std::ptrdiff_t m_iHostagesRescued = 0xea8; // int32
    constexpr std::ptrdiff_t m_iHostagesTouched = 0xeac; // int32
    constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xeb0; // float32
    constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xeb4; // bool
    constexpr std::ptrdiff_t m_bNoCTsKilled = 0xeb5; // bool
    constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xeb6; // bool
    constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xeb7; // bool
    constexpr std::ptrdiff_t m_firstKillTime = 0xebc; // float32
    constexpr std::ptrdiff_t m_firstBloodTime = 0xec4; // float32
    constexpr std::ptrdiff_t m_hostageWasInjured = 0xee0; // bool
    constexpr std::ptrdiff_t m_hostageWasKilled = 0xee1; // bool
    constexpr std::ptrdiff_t m_bVoteCalled = 0xef0; // bool
    constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xef1; // bool
    constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xef4; // float32
    constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xef8; // bool
    constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xefc; // int32
    constexpr std::ptrdiff_t m_bTargetBombed = 0xf00; // bool
    constexpr std::ptrdiff_t m_bBombDefused = 0xf01; // bool
    constexpr std::ptrdiff_t m_bMapHasBombZone = 0xf02; // bool
    constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xf50; // Vector
    constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xf60; // CUtlVector< CHandle< SpawnPoint > >
    constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xf78; // CUtlVector< CHandle< SpawnPoint > >
    constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xf90; // bool
    constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xf94; // int32
    constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xf98; // float32
    constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xf9c; // int32
    constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xfa0; // float32
    constexpr std::ptrdiff_t m_CTSpawnPoints = 0xfa8; // CUtlVector< CHandle< SpawnPoint > >
    constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xfc0; // CUtlVector< CHandle< SpawnPoint > >
    constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xfd8; // bool
    constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xfdc; // float32
    constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1018; // bool
    constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1019; // bool
    constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x101c; // GameTime_t
    constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1020; // float32
    constexpr std::ptrdiff_t m_flLastThinkTime = 0x1024; // GameTime_t
    constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1028; // float32
    constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x102c; // int32
    constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x1078; // int32
    constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x107c; // bool
    constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x107d; // bool
    constexpr std::ptrdiff_t m_pGameModeRules = 0x1098; // CCSGameModeRules*
    constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x10a0; // KeyValues3
    constexpr std::ptrdiff_t m_hPlayerResource = 0x1138; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_RetakeRules = 0x1140; // CRetakeGameRules
    constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1330; // CUtlVector< int32 >[4]
    constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x1390; // bool[4]
    constexpr std::ptrdiff_t m_nMatchEndCount = 0x13b8; // uint8
    constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x13bc; // int32
    constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x13c0; // int32
    constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x13c4; // bool
    constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x13c8; // GameTime_t
    constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x13cc; // bool
    constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x13d0; // int32
    constexpr std::ptrdiff_t m_eRoundEndReason = 0x13d4; // int32
    constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x13d8; // bool
    constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x13dc; // int32
    constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x13e0; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x13e8; // CPlayerSlot
    constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x13ec; // int32
    constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x13f0; // int32
    constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x13f4; // int32
    constexpr std::ptrdiff_t m_sRoundEndMessage = 0x13f8; // CUtlString
    constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x1400; // int32
    constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x1404; // bool
    constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x1408; // int32
    constexpr std::ptrdiff_t m_nRoundEndCount = 0x140c; // uint8
    constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x1410; // int32
    constexpr std::ptrdiff_t m_nRoundStartCount = 0x1414; // uint8
    constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x5420; // float64
}

// CPulseCell_Outflow_CycleShuffled (size: 0x60)
namespace CPulseCell_Outflow_CycleShuffled {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

// CBaseCSGrenadeProjectile (size: 0xbb0)
namespace CBaseCSGrenadeProjectile {
    constexpr std::ptrdiff_t m_vInitialPosition = 0xb40; // Vector
    constexpr std::ptrdiff_t m_vInitialVelocity = 0xb4c; // Vector
    constexpr std::ptrdiff_t m_nBounces = 0xb58; // int32
    constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xb60; // CStrongHandle< InfoForResourceTypeIParticleSystemDefinition >
    constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xb68; // int32
    constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xb6c; // Vector
    constexpr std::ptrdiff_t m_flSpawnTime = 0xb78; // GameTime_t
    constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xb7c; // uint8
    constexpr std::ptrdiff_t m_bDetonationRecorded = 0xb7d; // bool
    constexpr std::ptrdiff_t m_nItemIndex = 0xb7e; // uint16
    constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xb80; // Vector
    constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xb8c; // GameTime_t
    constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xb90; // RotationVector
    constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xb9c; // Vector
    constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xba8; // int32
    constexpr std::ptrdiff_t m_bHasEverHitEnemy = 0xbac; // bool
}

// CPhysConstraint (size: 0x508)
namespace CPhysConstraint {
    constexpr std::ptrdiff_t m_nameAttach1 = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttach2 = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hAttach1 = 0x4c0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hAttach2 = 0x4c4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nameAttachment1 = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAttachment2 = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_breakSound = 0x4d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_forceLimit = 0x4e0; // float32
    constexpr std::ptrdiff_t m_torqueLimit = 0x4e4; // float32
    constexpr std::ptrdiff_t m_minTeleportDistance = 0x4e8; // float32
    constexpr std::ptrdiff_t m_bSnapObjectPositions = 0x4ec; // bool
    constexpr std::ptrdiff_t m_bTreatEntity1AsInfiniteMass = 0x4ed; // bool
    constexpr std::ptrdiff_t m_OnBreak = 0x4f0; // CEntityIOOutput
}

// CLogicAchievement (size: 0x4d0)
namespace CLogicAchievement {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_iszAchievementEventID = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnFired = 0x4b8; // CEntityIOOutput
}

// CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t (size: 0x10)
namespace CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t {
    constexpr std::ptrdiff_t pItem = 0x0; // CEconItemView*
    constexpr std::ptrdiff_t team = 0x8; // uint16
    constexpr std::ptrdiff_t slot = 0xa; // uint16
}

// CLightComponent (size: 0x1c0)
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
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1b8; // bool
}

// CCSWeaponBase (size: 0x1130)
namespace CCSWeaponBase {
    constexpr std::ptrdiff_t m_bRemoveable = 0xe20; // bool
    constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xe21; // bool
    constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xe22; // bool
    constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0xe24; // WeaponGameplayAnimState
    constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0xe28; // GameTime_t
    constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0xe2c; // GameTime_t
    constexpr std::ptrdiff_t m_bInspectPending = 0xe30; // bool
    constexpr std::ptrdiff_t m_bInspectShouldLoop = 0xe31; // bool
    constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0xe5c; // int32
    constexpr std::ptrdiff_t m_bFireOnEmpty = 0xe78; // bool
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xe80; // CEntityIOOutput
    constexpr std::ptrdiff_t m_weaponMode = 0xe98; // CSWeaponMode
    constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xe9c; // float32
    constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xea0; // Vector
    constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xeac; // float32
    constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xeb0; // float32
    constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xeb4; // GameTime_t
    constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xeb8; // float32
    constexpr std::ptrdiff_t m_iRecoilIndex = 0xebc; // int32
    constexpr std::ptrdiff_t m_flRecoilIndex = 0xec0; // float32
    constexpr std::ptrdiff_t m_bBurstMode = 0xec4; // bool
    constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0xec8; // GameTick_t
    constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0xecc; // float32
    constexpr std::ptrdiff_t m_bInReload = 0xed0; // bool
    constexpr std::ptrdiff_t m_flDroppedAtTime = 0xed4; // GameTime_t
    constexpr std::ptrdiff_t m_bIsHauledBack = 0xed8; // bool
    constexpr std::ptrdiff_t m_bSilencerOn = 0xed9; // bool
    constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xedc; // GameTime_t
    constexpr std::ptrdiff_t m_flWeaponActionPlaybackRate = 0xee0; // float32
    constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xee4; // int32
    constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0xee8; // int32
    constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0xeec; // bool
    constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xef0; // float32
    constexpr std::ptrdiff_t m_bCanBePickedUp = 0xf08; // bool
    constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xf09; // bool
    constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xf0c; // GameTime_t
    constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xf10; // GameTime_t
    constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0xf18; // GameTime_t
    constexpr std::ptrdiff_t m_hPrevOwner = 0xf1c; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_nDropTick = 0xf20; // GameTick_t
    constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0xf24; // bool
    constexpr std::ptrdiff_t m_donated = 0xf44; // bool
    constexpr std::ptrdiff_t m_fLastShotTime = 0xf48; // GameTime_t
    constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xf4c; // bool
    constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xf4d; // bool
    constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xf50; // int32
    constexpr std::ptrdiff_t m_IronSightController = 0xf58; // CIronSightController
    constexpr std::ptrdiff_t m_iIronSightMode = 0xf70; // int32
    constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0xf74; // GameTime_t
    constexpr std::ptrdiff_t m_flWatTickOffset = 0xf78; // float32
    constexpr std::ptrdiff_t m_flLastShakeTime = 0xf88; // GameTime_t
}

// CPointClientUIDialog (size: 0x898)
namespace CPointClientUIDialog {
    constexpr std::ptrdiff_t m_hActivator = 0x890; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bStartEnabled = 0x894; // bool
}

// CLogicLineToEntity (size: 0x4e0)
namespace CLogicLineToEntity {
    constexpr std::ptrdiff_t m_Line = 0x4a8; // CEntityOutputTemplate< Vector, Vector >
    constexpr std::ptrdiff_t m_SourceName = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_StartEntity = 0x4d8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_EndEntity = 0x4dc; // CHandle< CBaseEntity >
}

// CSoundAreaEntitySphere (size: 0x4d0)
namespace CSoundAreaEntitySphere {
    constexpr std::ptrdiff_t m_flRadius = 0x4c8; // float32
}

// CCSPlayer_ActionTrackingServices (size: 0x310)
namespace CCSPlayer_ActionTrackingServices {
    constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x1f8; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_bIsRescuing = 0x224; // bool
    constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x228; // WeaponPurchaseTracker_t
    constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x298; // WeaponPurchaseTracker_t
}

// CPhysicalButton (size: 0x8b0)
namespace CPhysicalButton {
}

// CInfoSpawnGroupLoadUnload (size: 0x580)
namespace CInfoSpawnGroupLoadUnload {
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadStarted = 0x4a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupLoadFinished = 0x4c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadStarted = 0x4d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnSpawnGroupUnloadFinished = 0x4f0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszSpawnGroupName = 0x508; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpawnGroupFilterName = 0x510; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLandmarkName = 0x518; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sFixedSpawnGroupName = 0x520; // CUtlString
    constexpr std::ptrdiff_t m_flTimeoutInterval = 0x528; // float32
    constexpr std::ptrdiff_t m_bAutoActivate = 0x52c; // bool
    constexpr std::ptrdiff_t m_bUnloadingStarted = 0x52d; // bool
    constexpr std::ptrdiff_t m_bQueueActiveSpawnGroupChange = 0x52e; // bool
    constexpr std::ptrdiff_t m_bQueueFinishLoading = 0x52f; // bool
}

// CSoundAreaEntityOrientedBox (size: 0x4e0)
namespace CSoundAreaEntityOrientedBox {
    constexpr std::ptrdiff_t m_vMin = 0x4c8; // Vector
    constexpr std::ptrdiff_t m_vMax = 0x4d4; // Vector
}

// CCSObserver_MovementServices (size: 0x240)
namespace CCSObserver_MovementServices {
}

// CPulseCell_Outflow_ListenForAnimgraphTag (size: 0x128)
namespace CPulseCell_Outflow_ListenForAnimgraphTag {
    constexpr std::ptrdiff_t m_OnStart = 0x48; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnEnd = 0x90; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0xd8; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_TagName = 0x120; // CGlobalSymbol
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

// CDecoyGrenade (size: 0x1170)
namespace CDecoyGrenade {
}

// CEconItemView (size: 0x2a8)
namespace CEconItemView {
    constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x38; // uint16
    constexpr std::ptrdiff_t m_iEntityQuality = 0x3c; // int32
    constexpr std::ptrdiff_t m_iEntityLevel = 0x40; // uint32
    constexpr std::ptrdiff_t m_iItemID = 0x48; // uint64
    constexpr std::ptrdiff_t m_iItemIDHigh = 0x50; // uint32
    constexpr std::ptrdiff_t m_iItemIDLow = 0x54; // uint32
    constexpr std::ptrdiff_t m_iAccountID = 0x58; // uint32
    constexpr std::ptrdiff_t m_iInventoryPosition = 0x5c; // uint32
    constexpr std::ptrdiff_t m_bInitialized = 0x68; // bool
    constexpr std::ptrdiff_t m_AttributeList = 0x70; // CAttributeList
    constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xe8; // CAttributeList
    constexpr std::ptrdiff_t m_szCustomName = 0x160; // char[161]
    constexpr std::ptrdiff_t m_szCustomNameOverride = 0x201; // char[161]
}

// CIncendiaryGrenade (size: 0x1170)
namespace CIncendiaryGrenade {
}

// CBaseDMStart (size: 0x4b0)
namespace CBaseDMStart {
    constexpr std::ptrdiff_t m_Master = 0x4a8; // CUtlSymbolLarge
}

// CBaseModelEntity (size: 0x730)
namespace CBaseModelEntity {
    constexpr std::ptrdiff_t m_CRenderComponent = 0x4a8; // CRenderComponent*
    constexpr std::ptrdiff_t m_CHitboxComponent = 0x4b0; // CHitboxComponent
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0 = 0x4c8; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1 = 0x4cc; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2 = 0x4d0; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3 = 0x4d4; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4 = 0x4d8; // HitGroup_t
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0x4dc; // int32
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0x4e0; // int32
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0x4e4; // int32
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0x4e8; // int32
    constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0x4ec; // int32
    constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0x4f0; // CDestructiblePartsComponent*
    constexpr std::ptrdiff_t m_flDissolveStartTime = 0x4f8; // GameTime_t
    constexpr std::ptrdiff_t m_OnIgnite = 0x500; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nRenderMode = 0x518; // RenderMode_t
    constexpr std::ptrdiff_t m_nRenderFX = 0x519; // RenderFx_t
    constexpr std::ptrdiff_t m_bAllowFadeInView = 0x51a; // bool
    constexpr std::ptrdiff_t m_clrRender = 0x538; // Color
    constexpr std::ptrdiff_t m_vecRenderAttributes = 0x540; // CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
    constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x5a8; // bool
    constexpr std::ptrdiff_t m_bNoInterpolate = 0x5a9; // bool
    constexpr std::ptrdiff_t m_Collision = 0x5b0; // CCollisionProperty
    constexpr std::ptrdiff_t m_Glow = 0x660; // CGlowProperty
    constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x6b8; // float32
    constexpr std::ptrdiff_t m_fadeMinDist = 0x6bc; // float32
    constexpr std::ptrdiff_t m_fadeMaxDist = 0x6c0; // float32
    constexpr std::ptrdiff_t m_flFadeScale = 0x6c4; // float32
    constexpr std::ptrdiff_t m_flShadowStrength = 0x6c8; // float32
    constexpr std::ptrdiff_t m_nObjectCulling = 0x6cc; // uint8
    constexpr std::ptrdiff_t m_vecViewOffset = 0x6f8; // CNetworkViewOffsetVector
    constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x728; // uint32[1]
}

// fogplayerparams_t (size: 0x40)
namespace fogplayerparams_t {
    constexpr std::ptrdiff_t m_hCtrl = 0x8; // CHandle< CFogController >
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

// CInstancedSceneEntity (size: 0x748)
namespace CInstancedSceneEntity {
    constexpr std::ptrdiff_t m_hOwner = 0x730; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bHadOwner = 0x734; // bool
    constexpr std::ptrdiff_t m_flPostSpeakDelay = 0x738; // float32
    constexpr std::ptrdiff_t m_flPreDelay = 0x73c; // float32
    constexpr std::ptrdiff_t m_bIsBackground = 0x740; // bool
    constexpr std::ptrdiff_t m_bRemoveOnCompletion = 0x741; // bool
    constexpr std::ptrdiff_t m_hTarget = 0x744; // CHandle< CBaseEntity >
}

// CPulseCell_BaseValue (size: 0x48)
namespace CPulseCell_BaseValue {
}

// CCitadelSoundOpvarSetOBB (size: 0x4f8)
namespace CCitadelSoundOpvarSetOBB {
    constexpr std::ptrdiff_t m_iszStackName = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x4c0; // Vector
    constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x4cc; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x4d8; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x4e4; // Vector
    constexpr std::ptrdiff_t m_nAABBDirection = 0x4f0; // int32
}

// CSoundEventParameter (size: 0x4d0)
namespace CSoundEventParameter {
    constexpr std::ptrdiff_t m_iszParamName = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flFloatValue = 0x4c8; // float32
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

// CRotButton (size: 0x8b0)
namespace CRotButton {
}

// CEnvViewPunch (size: 0x4b8)
namespace CEnvViewPunch {
    constexpr std::ptrdiff_t m_flRadius = 0x4a8; // float32
    constexpr std::ptrdiff_t m_angViewPunch = 0x4ac; // QAngle
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

// CItemKevlar (size: 0xac0)
namespace CItemKevlar {
}

// CFuncShatterglass (size: 0x860)
namespace CFuncShatterglass {
    constexpr std::ptrdiff_t m_matPanelTransform = 0x730; // matrix3x4_t
    constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x760; // matrix3x4_t
    constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x790; // CUtlVector< uint32 >
    constexpr std::ptrdiff_t m_PanelSize = 0x7a8; // Vector2D
    constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x7b0; // GameTime_t
    constexpr std::ptrdiff_t m_flLastCleanupTime = 0x7b4; // GameTime_t
    constexpr std::ptrdiff_t m_flInitAtTime = 0x7b8; // GameTime_t
    constexpr std::ptrdiff_t m_flGlassThickness = 0x7bc; // float32
    constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x7c0; // float32
    constexpr std::ptrdiff_t m_bBreakSilent = 0x7c4; // bool
    constexpr std::ptrdiff_t m_bBreakShardless = 0x7c5; // bool
    constexpr std::ptrdiff_t m_bBroken = 0x7c6; // bool
    constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x7c7; // bool
    constexpr std::ptrdiff_t m_bGlassInFrame = 0x7c8; // bool
    constexpr std::ptrdiff_t m_bStartBroken = 0x7c9; // bool
    constexpr std::ptrdiff_t m_iInitialDamageType = 0x7ca; // uint8
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x7d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x7d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x7e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x7e8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x7f0; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x808; // CUtlVector< Vector >
    constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x820; // CUtlVector< Vector4D >
    constexpr std::ptrdiff_t m_OnBroken = 0x838; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iSurfaceType = 0x850; // uint8
    constexpr std::ptrdiff_t m_hMaterialDamageBase = 0x858; // CStrongHandle< InfoForResourceTypeIMaterial2 >
}

// CNavWalkable (size: 0x4a8)
namespace CNavWalkable {
}

// CPlantedC4 (size: 0xdf0)
namespace CPlantedC4 {
    constexpr std::ptrdiff_t m_bBombTicking = 0xa28; // bool
    constexpr std::ptrdiff_t m_flC4Blow = 0xa2c; // GameTime_t
    constexpr std::ptrdiff_t m_nBombSite = 0xa30; // int32
    constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xa34; // int32
    constexpr std::ptrdiff_t m_bAbortDetonationBecauseWorldIsFrozen = 0xa38; // bool
    constexpr std::ptrdiff_t m_AttributeManager = 0xa40; // CAttributeContainer
    constexpr std::ptrdiff_t m_OnBombDefused = 0xd38; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0xd50; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0xd68; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bCannotBeDefused = 0xd80; // bool
    constexpr std::ptrdiff_t m_entitySpottedState = 0xd88; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xda0; // int32
    constexpr std::ptrdiff_t m_bHasExploded = 0xda4; // bool
    constexpr std::ptrdiff_t m_bBombDefused = 0xda5; // bool
    constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0xda6; // bool
    constexpr std::ptrdiff_t m_flTimerLength = 0xda8; // float32
    constexpr std::ptrdiff_t m_bBeingDefused = 0xdac; // bool
    constexpr std::ptrdiff_t m_fLastDefuseTime = 0xdb4; // GameTime_t
    constexpr std::ptrdiff_t m_flDefuseLength = 0xdbc; // float32
    constexpr std::ptrdiff_t m_flDefuseCountDown = 0xdc0; // GameTime_t
    constexpr std::ptrdiff_t m_hBombDefuser = 0xdc4; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_iProgressBarTime = 0xdc8; // int32
    constexpr std::ptrdiff_t m_bVoiceAlertFired = 0xdcc; // bool
    constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0xdcd; // bool[4]
    constexpr std::ptrdiff_t m_flNextBotBeepTime = 0xdd4; // GameTime_t
    constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0xddc; // QAngle
    constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0xde8; // GameTime_t
}

// CEnvSoundscapeProxyAlias_snd_soundscape_proxy (size: 0x540)
namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
}

// CVoteController (size: 0x658)
namespace CVoteController {
    constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x4a8; // int32
    constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x4ac; // int32
    constexpr std::ptrdiff_t m_nVoteOptionCount = 0x4b0; // int32[5]
    constexpr std::ptrdiff_t m_nPotentialVotes = 0x4c4; // int32
    constexpr std::ptrdiff_t m_bIsYesNoVote = 0x4c8; // bool
    constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x4d0; // CountdownTimer
    constexpr std::ptrdiff_t m_executeCommandTimer = 0x4e8; // CountdownTimer
    constexpr std::ptrdiff_t m_resetVoteTimer = 0x500; // CountdownTimer
    constexpr std::ptrdiff_t m_nVotesCast = 0x518; // int32[64]
    constexpr std::ptrdiff_t m_playerHoldingVote = 0x618; // CPlayerSlot
    constexpr std::ptrdiff_t m_playerOverrideForVote = 0x61c; // CPlayerSlot
    constexpr std::ptrdiff_t m_nHighestCountIndex = 0x620; // int32
    constexpr std::ptrdiff_t m_potentialIssues = 0x628; // CUtlVector< CBaseIssue* >
    constexpr std::ptrdiff_t m_VoteOptions = 0x640; // CUtlVector< char* >
}

// CPulseCell_Inflow_Yield (size: 0x90)
namespace CPulseCell_Inflow_Yield {
    constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
}

// CPulseMathlib (size: 0x1)
namespace CPulseMathlib {
}

// CPhysImpact (size: 0x4b8)
namespace CPhysImpact {
    constexpr std::ptrdiff_t m_damage = 0x4a8; // float32
    constexpr std::ptrdiff_t m_distance = 0x4ac; // float32
    constexpr std::ptrdiff_t m_directionEntityName = 0x4b0; // CUtlSymbolLarge
}

// CBaseEntity (size: 0x4a8)
namespace CBaseEntity {
    constexpr std::ptrdiff_t m_CBodyComponent = 0x38; // CBodyComponent*
    constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40; // CNetworkTransmitComponent
    constexpr std::ptrdiff_t m_aThinkFunctions = 0x250; // CUtlVector< thinkfunc_t >
    constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x268; // int32
    constexpr std::ptrdiff_t m_nLastThinkTick = 0x26c; // GameTick_t
    constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x270; // bool
    constexpr std::ptrdiff_t m_isSteadyState = 0x280; // CTypedBitVec< 64 >
    constexpr std::ptrdiff_t m_lastNetworkChange = 0x288; // float32
    constexpr std::ptrdiff_t m_ResponseContexts = 0x298; // CUtlVector< ResponseContext_t >
    constexpr std::ptrdiff_t m_iszResponseContext = 0x2b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iHealth = 0x2d8; // int32
    constexpr std::ptrdiff_t m_iMaxHealth = 0x2dc; // int32
    constexpr std::ptrdiff_t m_lifeState = 0x2e0; // uint8
    constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2e4; // float32
    constexpr std::ptrdiff_t m_bTakesDamage = 0x2e8; // bool
    constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2f0; // TakeDamageFlags_t
    constexpr std::ptrdiff_t m_nPlatformType = 0x2f8; // EntityPlatformTypes_t
    constexpr std::ptrdiff_t m_MoveCollide = 0x2fa; // MoveCollide_t
    constexpr std::ptrdiff_t m_MoveType = 0x2fb; // MoveType_t
    constexpr std::ptrdiff_t m_nActualMoveType = 0x2fc; // MoveType_t
    constexpr std::ptrdiff_t m_nWaterTouch = 0x2fd; // uint8
    constexpr std::ptrdiff_t m_nSlimeTouch = 0x2fe; // uint8
    constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2ff; // bool
    constexpr std::ptrdiff_t m_target = 0x300; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hDamageFilter = 0x308; // CHandle< CBaseFilter >
    constexpr std::ptrdiff_t m_iszDamageFilterName = 0x310; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flMoveDoneTime = 0x318; // float32
    constexpr std::ptrdiff_t m_nSubclassID = 0x31c; // CUtlStringToken
    constexpr std::ptrdiff_t m_flAnimTime = 0x328; // float32
    constexpr std::ptrdiff_t m_flSimulationTime = 0x32c; // float32
    constexpr std::ptrdiff_t m_flCreateTime = 0x330; // GameTime_t
    constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x334; // bool
    constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x335; // uint8
    constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x338; // Vector
    constexpr std::ptrdiff_t m_iTeamNum = 0x344; // uint8
    constexpr std::ptrdiff_t m_iGlobalname = 0x348; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iSentToClients = 0x350; // int32
    constexpr std::ptrdiff_t m_flSpeed = 0x354; // float32
    constexpr std::ptrdiff_t m_sUniqueHammerID = 0x358; // CUtlString
    constexpr std::ptrdiff_t m_spawnflags = 0x360; // uint32
    constexpr std::ptrdiff_t m_nNextThinkTick = 0x364; // GameTick_t
    constexpr std::ptrdiff_t m_nSimulationTick = 0x368; // int32
    constexpr std::ptrdiff_t m_OnKilled = 0x370; // CEntityIOOutput
    constexpr std::ptrdiff_t m_fFlags = 0x388; // uint32
    constexpr std::ptrdiff_t m_vecAbsVelocity = 0x38c; // Vector
    constexpr std::ptrdiff_t m_vecVelocity = 0x398; // CNetworkVelocityVector
    constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3c8; // Vector
    constexpr std::ptrdiff_t m_nPushEnumCount = 0x3d4; // int32
    constexpr std::ptrdiff_t m_pCollision = 0x3d8; // CCollisionProperty*
    constexpr std::ptrdiff_t m_hEffectEntity = 0x3e0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hOwnerEntity = 0x3e4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_fEffects = 0x3e8; // uint32
    constexpr std::ptrdiff_t m_hGroundEntity = 0x3ec; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x3f0; // int32
    constexpr std::ptrdiff_t m_flFriction = 0x3f4; // float32
    constexpr std::ptrdiff_t m_flElasticity = 0x3f8; // float32
    constexpr std::ptrdiff_t m_flGravityScale = 0x3fc; // float32
    constexpr std::ptrdiff_t m_flTimeScale = 0x400; // float32
    constexpr std::ptrdiff_t m_flWaterLevel = 0x404; // float32
    constexpr std::ptrdiff_t m_bGravityDisabled = 0x408; // bool
    constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x409; // bool
    constexpr std::ptrdiff_t m_flActualGravityScale = 0x40c; // float32
    constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x410; // bool
    constexpr std::ptrdiff_t m_bDisableLowViolence = 0x411; // bool
    constexpr std::ptrdiff_t m_nWaterType = 0x412; // uint8
    constexpr std::ptrdiff_t m_iEFlags = 0x414; // int32
    constexpr std::ptrdiff_t m_OnUser1 = 0x418; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser2 = 0x430; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser3 = 0x448; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUser4 = 0x460; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iInitialTeamNum = 0x478; // int32
    constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x47c; // GameTime_t
    constexpr std::ptrdiff_t m_vecAngVelocity = 0x480; // QAngle
    constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x48c; // bool
    constexpr std::ptrdiff_t m_bLagCompensate = 0x48d; // bool
    constexpr std::ptrdiff_t m_pBlocker = 0x490; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flLocalTime = 0x494; // float32
    constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x498; // float32
    constexpr std::ptrdiff_t m_nBloodType = 0x49c; // BloodType
    constexpr std::ptrdiff_t m_pPulseGraphInstance = 0x4a0; // CPulseGraphInstance_ServerEntity*
}

// CPlayer_UseServices (size: 0x48)
namespace CPlayer_UseServices {
}

// CGameSceneNodeHandle (size: 0x10)
namespace CGameSceneNodeHandle {
    constexpr std::ptrdiff_t m_hOwner = 0x8; // CEntityHandle
    constexpr std::ptrdiff_t m_name = 0xc; // CUtlStringToken
}

// CMarkupVolumeWithRef (size: 0x798)
namespace CMarkupVolumeWithRef {
    constexpr std::ptrdiff_t m_bUseRef = 0x778; // bool
    constexpr std::ptrdiff_t m_vRefPosEntitySpace = 0x77c; // Vector
    constexpr std::ptrdiff_t m_vRefPosWorldSpace = 0x788; // VectorWS
    constexpr std::ptrdiff_t m_flRefDot = 0x794; // float32
}

// CCSGO_TeamSelectCharacterPosition (size: 0xcc0)
namespace CCSGO_TeamSelectCharacterPosition {
}

// CPulseCell_Unknown (size: 0x58)
namespace CPulseCell_Unknown {
    constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
}

// CFuncPlatRot (size: 0x7f8)
namespace CFuncPlatRot {
    constexpr std::ptrdiff_t m_end = 0x7e0; // QAngle
    constexpr std::ptrdiff_t m_start = 0x7ec; // QAngle
}

// CRagdollMagnet (size: 0x4c0)
namespace CRagdollMagnet {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_radius = 0x4ac; // float32
    constexpr std::ptrdiff_t m_force = 0x4b0; // float32
    constexpr std::ptrdiff_t m_axis = 0x4b4; // VectorWS
}

// CInfoInstructorHintTarget (size: 0x4a8)
namespace CInfoInstructorHintTarget {
}

// CSpriteAlias_env_glow (size: 0x7a0)
namespace CSpriteAlias_env_glow {
}

// CFireCrackerBlast (size: 0x13b8)
namespace CFireCrackerBlast {
}

// CSpotlightEnd (size: 0x750)
namespace CSpotlightEnd {
    constexpr std::ptrdiff_t m_flLightScale = 0x730; // float32
    constexpr std::ptrdiff_t m_Radius = 0x734; // float32
    constexpr std::ptrdiff_t m_vSpotlightDir = 0x738; // Vector
    constexpr std::ptrdiff_t m_vSpotlightOrg = 0x744; // VectorWS
}

// CEnvSky (size: 0x790)
namespace CEnvSky {
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x730; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x738; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_bStartDisabled = 0x740; // bool
    constexpr std::ptrdiff_t m_vTintColor = 0x741; // Color
    constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x745; // Color
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x74c; // float32
    constexpr std::ptrdiff_t m_nFogType = 0x750; // int32
    constexpr std::ptrdiff_t m_flFogMinStart = 0x754; // float32
    constexpr std::ptrdiff_t m_flFogMinEnd = 0x758; // float32
    constexpr std::ptrdiff_t m_flFogMaxStart = 0x75c; // float32
    constexpr std::ptrdiff_t m_flFogMaxEnd = 0x760; // float32
    constexpr std::ptrdiff_t m_bEnabled = 0x764; // bool
}

// CInfoSpawnGroupLandmark (size: 0x4a8)
namespace CInfoSpawnGroupLandmark {
}

// CPointAngleSensor (size: 0x548)
namespace CPointAngleSensor {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_nLookAtName = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTargetEntity = 0x4b8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hLookAtEntity = 0x4bc; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flDuration = 0x4c0; // float32
    constexpr std::ptrdiff_t m_flDotTolerance = 0x4c4; // float32
    constexpr std::ptrdiff_t m_flFacingTime = 0x4c8; // GameTime_t
    constexpr std::ptrdiff_t m_bFired = 0x4cc; // bool
    constexpr std::ptrdiff_t m_OnFacingLookat = 0x4d0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x4e8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_TargetDir = 0x500; // CEntityOutputTemplate< Vector, Vector >
    constexpr std::ptrdiff_t m_FacingPercentage = 0x528; // CEntityOutputTemplate< float32, float32 >
}

// CEnvWindController (size: 0x600)
namespace CEnvWindController {
    constexpr std::ptrdiff_t m_EnvWindShared = 0x4a8; // CEnvWindShared
    constexpr std::ptrdiff_t m_fDirectionVariation = 0x5d8; // float32
    constexpr std::ptrdiff_t m_fSpeedVariation = 0x5dc; // float32
    constexpr std::ptrdiff_t m_fTurbulence = 0x5e0; // float32
    constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x5e4; // float32
    constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x5e8; // float32
    constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x5ec; // int32
    constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x5f0; // int32
    constexpr std::ptrdiff_t m_nClipmapLevels = 0x5f4; // int32
    constexpr std::ptrdiff_t m_bIsMaster = 0x5f8; // bool
    constexpr std::ptrdiff_t m_bFirstTime = 0x5f9; // bool
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

// CGenericConstraint (size: 0x608)
namespace CGenericConstraint {
    constexpr std::ptrdiff_t m_nLinearMotionX = 0x510; // JointMotion_t
    constexpr std::ptrdiff_t m_nLinearMotionY = 0x514; // JointMotion_t
    constexpr std::ptrdiff_t m_nLinearMotionZ = 0x518; // JointMotion_t
    constexpr std::ptrdiff_t m_flLinearFrequencyX = 0x51c; // float32
    constexpr std::ptrdiff_t m_flLinearFrequencyY = 0x520; // float32
    constexpr std::ptrdiff_t m_flLinearFrequencyZ = 0x524; // float32
    constexpr std::ptrdiff_t m_flLinearDampingRatioX = 0x528; // float32
    constexpr std::ptrdiff_t m_flLinearDampingRatioY = 0x52c; // float32
    constexpr std::ptrdiff_t m_flLinearDampingRatioZ = 0x530; // float32
    constexpr std::ptrdiff_t m_flMaxLinearImpulseX = 0x534; // float32
    constexpr std::ptrdiff_t m_flMaxLinearImpulseY = 0x538; // float32
    constexpr std::ptrdiff_t m_flMaxLinearImpulseZ = 0x53c; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeX = 0x540; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeY = 0x544; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeZ = 0x548; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeX = 0x54c; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeY = 0x550; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeZ = 0x554; // GameTime_t
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdX = 0x558; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdY = 0x55c; // float32
    constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdZ = 0x560; // float32
    constexpr std::ptrdiff_t m_flNotifyForceX = 0x564; // float32
    constexpr std::ptrdiff_t m_flNotifyForceY = 0x568; // float32
    constexpr std::ptrdiff_t m_flNotifyForceZ = 0x56c; // float32
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeX = 0x570; // float32
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeY = 0x574; // float32
    constexpr std::ptrdiff_t m_flNotifyForceMinTimeZ = 0x578; // float32
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeX = 0x57c; // GameTime_t
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeY = 0x580; // GameTime_t
    constexpr std::ptrdiff_t m_flNotifyForceLastTimeZ = 0x584; // GameTime_t
    constexpr std::ptrdiff_t m_bAxisNotifiedX = 0x588; // bool
    constexpr std::ptrdiff_t m_bAxisNotifiedY = 0x589; // bool
    constexpr std::ptrdiff_t m_bAxisNotifiedZ = 0x58a; // bool
    constexpr std::ptrdiff_t m_nAngularMotionX = 0x58c; // JointMotion_t
    constexpr std::ptrdiff_t m_nAngularMotionY = 0x590; // JointMotion_t
    constexpr std::ptrdiff_t m_nAngularMotionZ = 0x594; // JointMotion_t
    constexpr std::ptrdiff_t m_flAngularFrequencyX = 0x598; // float32
    constexpr std::ptrdiff_t m_flAngularFrequencyY = 0x59c; // float32
    constexpr std::ptrdiff_t m_flAngularFrequencyZ = 0x5a0; // float32
    constexpr std::ptrdiff_t m_flAngularDampingRatioX = 0x5a4; // float32
    constexpr std::ptrdiff_t m_flAngularDampingRatioY = 0x5a8; // float32
    constexpr std::ptrdiff_t m_flAngularDampingRatioZ = 0x5ac; // float32
    constexpr std::ptrdiff_t m_flMaxAngularImpulseX = 0x5b0; // float32
    constexpr std::ptrdiff_t m_flMaxAngularImpulseY = 0x5b4; // float32
    constexpr std::ptrdiff_t m_flMaxAngularImpulseZ = 0x5b8; // float32
    constexpr std::ptrdiff_t m_NotifyForceReachedX = 0x5c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyForceReachedY = 0x5d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_NotifyForceReachedZ = 0x5f0; // CEntityIOOutput
}

// CPulseCell_Outflow_CycleRandom (size: 0x60)
namespace CPulseCell_Outflow_CycleRandom {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

// CPulseCell_Step_PublicOutput (size: 0x50)
namespace CPulseCell_Step_PublicOutput {
    constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
}

// CEnvLaser (size: 0x7f8)
namespace CEnvLaser {
    constexpr std::ptrdiff_t m_iszLaserTarget = 0x7d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pSprite = 0x7d8; // CSprite*
    constexpr std::ptrdiff_t m_iszSpriteName = 0x7e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_firePosition = 0x7e8; // Vector
    constexpr std::ptrdiff_t m_flStartFrame = 0x7f4; // float32
}

// CSoundOpvarSetEntity (size: 0x500)
namespace CSoundOpvarSetEntity {
    constexpr std::ptrdiff_t m_iszStackName = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nOpvarType = 0x4d8; // int32
    constexpr std::ptrdiff_t m_nOpvarIndex = 0x4dc; // int32
    constexpr std::ptrdiff_t m_flOpvarValue = 0x4e0; // float32
    constexpr std::ptrdiff_t m_OpvarValueString = 0x4e8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bSetOnSpawn = 0x4f0; // bool
}

// CEnvBeverage (size: 0x4b0)
namespace CEnvBeverage {
    constexpr std::ptrdiff_t m_CanInDispenser = 0x4a8; // bool
    constexpr std::ptrdiff_t m_nBeverageType = 0x4ac; // int32
}

// CPhysMotor (size: 0x510)
namespace CPhysMotor {
    constexpr std::ptrdiff_t m_nameAttach = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nameAnchor = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hAttachedObject = 0x4b8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hAnchorObject = 0x4bc; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_spinUp = 0x4c0; // float32
    constexpr std::ptrdiff_t m_spinDown = 0x4c4; // float32
    constexpr std::ptrdiff_t m_flMotorFriction = 0x4c8; // float32
    constexpr std::ptrdiff_t m_additionalAcceleration = 0x4cc; // float32
    constexpr std::ptrdiff_t m_angularAcceleration = 0x4d0; // float32
    constexpr std::ptrdiff_t m_flTorqueScale = 0x4d4; // float32
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x4d8; // float32
    constexpr std::ptrdiff_t m_flSpeedWhenSpinUpOrSpinDownStarted = 0x4dc; // float32
    constexpr std::ptrdiff_t m_motor = 0x4f0; // CMotorController
}

// CLogicGameEvent (size: 0x4b0)
namespace CLogicGameEvent {
    constexpr std::ptrdiff_t m_iszEventName = 0x4a8; // CUtlSymbolLarge
}

// CPhysicsPropMultiplayer (size: 0xce0)
namespace CPhysicsPropMultiplayer {
}

// CPhysExplosion (size: 0x4e8)
namespace CPhysExplosion {
    constexpr std::ptrdiff_t m_bExplodeOnSpawn = 0x4a8; // bool
    constexpr std::ptrdiff_t m_flMagnitude = 0x4ac; // float32
    constexpr std::ptrdiff_t m_flDamage = 0x4b0; // float32
    constexpr std::ptrdiff_t m_radius = 0x4b4; // float32
    constexpr std::ptrdiff_t m_targetEntityName = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flInnerRadius = 0x4c0; // float32
    constexpr std::ptrdiff_t m_flPushScale = 0x4c4; // float32
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x4c8; // bool
    constexpr std::ptrdiff_t m_bAffectInvulnerableEnts = 0x4c9; // bool
    constexpr std::ptrdiff_t m_OnPushedPlayer = 0x4d0; // CEntityIOOutput
}

// CSplineConstraint (size: 0x5b8)
namespace CSplineConstraint {
    constexpr std::ptrdiff_t m_vAnchorOffsetRestore = 0x558; // Vector
    constexpr std::ptrdiff_t m_hSplineEntity = 0x564; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bEnableLateralConstraint = 0x570; // bool
    constexpr std::ptrdiff_t m_bEnableVerticalConstraint = 0x571; // bool
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x572; // bool
    constexpr std::ptrdiff_t m_bEnableLimit = 0x573; // bool
    constexpr std::ptrdiff_t m_bFireEventsOnPath = 0x574; // bool
    constexpr std::ptrdiff_t m_flLinearFrequency = 0x578; // float32
    constexpr std::ptrdiff_t m_flLinarDampingRatio = 0x57c; // float32
    constexpr std::ptrdiff_t m_flJointFriction = 0x580; // float32
    constexpr std::ptrdiff_t m_flTransitionTime = 0x584; // float32
    constexpr std::ptrdiff_t m_vPreSolveAnchorPos = 0x598; // VectorWS
    constexpr std::ptrdiff_t m_StartTransitionTime = 0x5a4; // GameTime_t
    constexpr std::ptrdiff_t m_vTangentSpaceAnchorAtTransitionStart = 0x5a8; // Vector
}

// CLogicCompare (size: 0x530)
namespace CLogicCompare {
    constexpr std::ptrdiff_t m_flInValue = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flCompareValue = 0x4ac; // float32
    constexpr std::ptrdiff_t m_OnLessThan = 0x4b0; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnEqualTo = 0x4d0; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnNotEqualTo = 0x4f0; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnGreaterThan = 0x510; // CEntityOutputTemplate< float32, float32 >
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

// CFuncTankTrain (size: 0x870)
namespace CFuncTankTrain {
    constexpr std::ptrdiff_t m_OnDeath = 0x858; // CEntityIOOutput
}

// CPointClientUIWorldPanel (size: 0x8e8)
namespace CPointClientUIWorldPanel {
    constexpr std::ptrdiff_t m_bIgnoreInput = 0x890; // bool
    constexpr std::ptrdiff_t m_bLit = 0x891; // bool
    constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x892; // bool
    constexpr std::ptrdiff_t m_flWidth = 0x894; // float32
    constexpr std::ptrdiff_t m_flHeight = 0x898; // float32
    constexpr std::ptrdiff_t m_flDPI = 0x89c; // float32
    constexpr std::ptrdiff_t m_flInteractDistance = 0x8a0; // float32
    constexpr std::ptrdiff_t m_flDepthOffset = 0x8a4; // float32
    constexpr std::ptrdiff_t m_unOwnerContext = 0x8a8; // uint32
    constexpr std::ptrdiff_t m_unHorizontalAlign = 0x8ac; // uint32
    constexpr std::ptrdiff_t m_unVerticalAlign = 0x8b0; // uint32
    constexpr std::ptrdiff_t m_unOrientation = 0x8b4; // uint32
    constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x8b8; // bool
    constexpr std::ptrdiff_t m_vecCSSClasses = 0x8c0; // CNetworkUtlVectorBase< CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_bOpaque = 0x8d8; // bool
    constexpr std::ptrdiff_t m_bNoDepth = 0x8d9; // bool
    constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0x8da; // bool
    constexpr std::ptrdiff_t m_bRenderBackface = 0x8db; // bool
    constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x8dc; // bool
    constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x8dd; // bool
    constexpr std::ptrdiff_t m_bGrabbable = 0x8de; // bool
    constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x8df; // bool
    constexpr std::ptrdiff_t m_bDisableMipGen = 0x8e0; // bool
    constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x8e4; // int32
}

// CSoundEventSphereEntity (size: 0x560)
namespace CSoundEventSphereEntity {
    constexpr std::ptrdiff_t m_flRadius = 0x558; // float32
}

// CCSPlayerController_InGameMoneyServices (size: 0x58)
namespace CCSPlayerController_InGameMoneyServices {
    constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40; // bool
    constexpr std::ptrdiff_t m_iMoneyEarnedForNextRound = 0x44; // int32
    constexpr std::ptrdiff_t m_iAccount = 0x48; // int32
    constexpr std::ptrdiff_t m_iStartAccount = 0x4c; // int32
    constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50; // int32
    constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54; // int32
}

// CRuleBrushEntity (size: 0x738)
namespace CRuleBrushEntity {
}

// CMapVetoPickController (size: 0xea8)
namespace CMapVetoPickController {
    constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x4a8; // bool
    constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x4a9; // bool
    constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x4c8; // float64
    constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x4d0; // bool
    constexpr std::ptrdiff_t m_nDraftType = 0x4d4; // int32
    constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x4d8; // int32
    constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x4dc; // int32[64]
    constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x5dc; // int32[7]
    constexpr std::ptrdiff_t m_nAccountIDs = 0x5f8; // int32[64]
    constexpr std::ptrdiff_t m_nMapId0 = 0x6f8; // int32[64]
    constexpr std::ptrdiff_t m_nMapId1 = 0x7f8; // int32[64]
    constexpr std::ptrdiff_t m_nMapId2 = 0x8f8; // int32[64]
    constexpr std::ptrdiff_t m_nMapId3 = 0x9f8; // int32[64]
    constexpr std::ptrdiff_t m_nMapId4 = 0xaf8; // int32[64]
    constexpr std::ptrdiff_t m_nMapId5 = 0xbf8; // int32[64]
    constexpr std::ptrdiff_t m_nStartingSide0 = 0xcf8; // int32[64]
    constexpr std::ptrdiff_t m_nCurrentPhase = 0xdf8; // int32
    constexpr std::ptrdiff_t m_nPhaseStartTick = 0xdfc; // int32
    constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xe00; // int32
    constexpr std::ptrdiff_t m_OnMapVetoed = 0xe08; // CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_OnMapPicked = 0xe28; // CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge >
    constexpr std::ptrdiff_t m_OnSidesPicked = 0xe48; // CEntityOutputTemplate< int32, int32 >
    constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0xe68; // CEntityOutputTemplate< int32, int32 >
    constexpr std::ptrdiff_t m_OnLevelTransition = 0xe88; // CEntityOutputTemplate< int32, int32 >
}

// CAnimGraphNetworkedVariables (size: 0x208)
namespace CAnimGraphNetworkedVariables {
    constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8; // CNetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20; // CNetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38; // CNetworkUtlVectorBase< uint16 >
    constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50; // CNetworkUtlVectorBase< int32 >
    constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68; // CNetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80; // CNetworkUtlVectorBase< uint64 >
    constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98; // CNetworkUtlVectorBase< float32 >
    constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xb0; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xc8; // CNetworkUtlVectorBase< Quaternion >
    constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xe0; // CNetworkUtlVectorBase< CGlobalSymbol >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xf8; // CNetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110; // CNetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128; // CNetworkUtlVectorBase< uint16 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140; // CNetworkUtlVectorBase< int32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158; // CNetworkUtlVectorBase< uint32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170; // CNetworkUtlVectorBase< uint64 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188; // CNetworkUtlVectorBase< float32 >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1a0; // CNetworkUtlVectorBase< Vector >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1b8; // CNetworkUtlVectorBase< Quaternion >
    constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1d0; // CNetworkUtlVectorBase< CGlobalSymbol >
    constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1e8; // int32
    constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1ec; // int32
    constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1f0; // int32
    constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1f4; // float32
}

// CFuncPropRespawnZone (size: 0x4a8)
namespace CFuncPropRespawnZone {
}

// CFilterModel (size: 0x4e8)
namespace CFilterModel {
    constexpr std::ptrdiff_t m_iFilterModel = 0x4e0; // CUtlSymbolLarge
}

// CWeaponP90 (size: 0x1150)
namespace CWeaponP90 {
}

// CNavSpaceInfo (size: 0x4a8)
namespace CNavSpaceInfo {
}

// CPhysSlideConstraint (size: 0x5d0)
namespace CPhysSlideConstraint {
    constexpr std::ptrdiff_t m_axisEnd = 0x510; // VectorWS
    constexpr std::ptrdiff_t m_slideFriction = 0x51c; // float32
    constexpr std::ptrdiff_t m_systemLoadScale = 0x520; // float32
    constexpr std::ptrdiff_t m_initialOffset = 0x524; // float32
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x528; // bool
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x529; // bool
    constexpr std::ptrdiff_t m_flMotorFrequency = 0x52c; // float32
    constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x530; // float32
    constexpr std::ptrdiff_t m_bUseEntityPivot = 0x534; // bool
    constexpr std::ptrdiff_t m_soundInfo = 0x538; // ConstraintSoundInfo
}

// CPulseGameBlackboard (size: 0x4c0)
namespace CPulseGameBlackboard {
    constexpr std::ptrdiff_t m_strGraphName = 0x4b0; // CUtlString
    constexpr std::ptrdiff_t m_strStateBlob = 0x4b8; // CUtlString
}

// CSoundEventEntityAlias_snd_event_point (size: 0x558)
namespace CSoundEventEntityAlias_snd_event_point {
}

// CPulseCell_Value_RandomInt (size: 0x48)
namespace CPulseCell_Value_RandomInt {
}

// CPointGamestatsCounter (size: 0x4b8)
namespace CPointGamestatsCounter {
    constexpr std::ptrdiff_t m_strStatisticName = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bDisabled = 0x4b0; // bool
}

// CTextureBasedAnimatable (size: 0x768)
namespace CTextureBasedAnimatable {
    constexpr std::ptrdiff_t m_bLoop = 0x730; // bool
    constexpr std::ptrdiff_t m_flFPS = 0x734; // float32
    constexpr std::ptrdiff_t m_hPositionKeys = 0x738; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_hRotationKeys = 0x740; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x748; // Vector
    constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x754; // Vector
    constexpr std::ptrdiff_t m_flStartTime = 0x760; // float32
    constexpr std::ptrdiff_t m_flStartFrame = 0x764; // float32
}

// CSprite (size: 0x7a0)
namespace CSprite {
    constexpr std::ptrdiff_t m_hSpriteMaterial = 0x730; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_hAttachedToEntity = 0x738; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_nAttachment = 0x73c; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flSpriteFramerate = 0x740; // float32
    constexpr std::ptrdiff_t m_flFrame = 0x744; // float32
    constexpr std::ptrdiff_t m_flDieTime = 0x748; // GameTime_t
    constexpr std::ptrdiff_t m_nBrightness = 0x758; // uint32
    constexpr std::ptrdiff_t m_flBrightnessDuration = 0x75c; // float32
    constexpr std::ptrdiff_t m_flSpriteScale = 0x760; // float32
    constexpr std::ptrdiff_t m_flScaleDuration = 0x764; // float32
    constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x768; // bool
    constexpr std::ptrdiff_t m_flGlowProxySize = 0x76c; // float32
    constexpr std::ptrdiff_t m_flHDRColorScale = 0x770; // float32
    constexpr std::ptrdiff_t m_flLastTime = 0x774; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxFrame = 0x778; // float32
    constexpr std::ptrdiff_t m_flStartScale = 0x77c; // float32
    constexpr std::ptrdiff_t m_flDestScale = 0x780; // float32
    constexpr std::ptrdiff_t m_flScaleTimeStart = 0x784; // GameTime_t
    constexpr std::ptrdiff_t m_nStartBrightness = 0x788; // int32
    constexpr std::ptrdiff_t m_nDestBrightness = 0x78c; // int32
    constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x790; // GameTime_t
    constexpr std::ptrdiff_t m_nSpriteWidth = 0x794; // int32
    constexpr std::ptrdiff_t m_nSpriteHeight = 0x798; // int32
}

// CBaseMoveBehavior (size: 0x540)
namespace CBaseMoveBehavior {
    constexpr std::ptrdiff_t m_iPositionInterpolator = 0x500; // int32
    constexpr std::ptrdiff_t m_iRotationInterpolator = 0x504; // int32
    constexpr std::ptrdiff_t m_flAnimStartTime = 0x508; // float32
    constexpr std::ptrdiff_t m_flAnimEndTime = 0x50c; // float32
    constexpr std::ptrdiff_t m_flAverageSpeedAcrossFrame = 0x510; // float32
    constexpr std::ptrdiff_t m_pCurrentKeyFrame = 0x518; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pTargetKeyFrame = 0x520; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPreKeyFrame = 0x528; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPostKeyFrame = 0x530; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_flTimeIntoFrame = 0x538; // float32
    constexpr std::ptrdiff_t m_iDirection = 0x53c; // int32
}

// CDynamicLight (size: 0x748)
namespace CDynamicLight {
    constexpr std::ptrdiff_t m_ActualFlags = 0x730; // uint8
    constexpr std::ptrdiff_t m_Flags = 0x731; // uint8
    constexpr std::ptrdiff_t m_LightStyle = 0x732; // uint8
    constexpr std::ptrdiff_t m_On = 0x733; // bool
    constexpr std::ptrdiff_t m_Radius = 0x734; // float32
    constexpr std::ptrdiff_t m_Exponent = 0x738; // int32
    constexpr std::ptrdiff_t m_InnerAngle = 0x73c; // float32
    constexpr std::ptrdiff_t m_OuterAngle = 0x740; // float32
    constexpr std::ptrdiff_t m_SpotRadius = 0x744; // float32
}

// CWeaponTaser (size: 0x1160)
namespace CWeaponTaser {
    constexpr std::ptrdiff_t m_fFireTime = 0x1150; // GameTime_t
    constexpr std::ptrdiff_t m_nLastAttackTick = 0x1154; // int32
}

// CEnvCubemapBox (size: 0x590)
namespace CEnvCubemapBox {
}

// CRotDoor (size: 0x938)
namespace CRotDoor {
    constexpr std::ptrdiff_t m_bSolidBsp = 0x930; // bool
}

// CPathMover (size: 0x620)
namespace CPathMover {
    constexpr std::ptrdiff_t m_vecMovers = 0x5f0; // CUtlVector< CHandle< CFuncMover > >
    constexpr std::ptrdiff_t m_hMoverSpawner = 0x608; // CHandle< CPathMoverEntitySpawner >
    constexpr std::ptrdiff_t m_iszMoverSpawnerName = 0x610; // CUtlSymbolLarge
}

// CFuncVPhysicsClip (size: 0x738)
namespace CFuncVPhysicsClip {
    constexpr std::ptrdiff_t m_bDisabled = 0x730; // bool
}

// CPhysFixed (size: 0x530)
namespace CPhysFixed {
    constexpr std::ptrdiff_t m_flLinearFrequency = 0x508; // float32
    constexpr std::ptrdiff_t m_flLinearDampingRatio = 0x50c; // float32
    constexpr std::ptrdiff_t m_flAngularFrequency = 0x510; // float32
    constexpr std::ptrdiff_t m_flAngularDampingRatio = 0x514; // float32
    constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x518; // bool
    constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x519; // bool
    constexpr std::ptrdiff_t m_sBoneName1 = 0x520; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_sBoneName2 = 0x528; // CUtlSymbolLarge
}

// CLogicNavigation (size: 0x4b8)
namespace CLogicNavigation {
    constexpr std::ptrdiff_t m_isOn = 0x4b0; // bool
    constexpr std::ptrdiff_t m_navProperty = 0x4b4; // navproperties_t
}

// CPathSimple (size: 0x5b0)
namespace CPathSimple {
    constexpr std::ptrdiff_t m_CPathQueryComponent = 0x4b0; // CPathQueryComponent
    constexpr std::ptrdiff_t m_pathString = 0x5a0; // CUtlString
    constexpr std::ptrdiff_t m_bClosedLoop = 0x5a8; // bool
}

// CPathParticleRopeAlias_path_particle_rope_clientside (size: 0x590)
namespace CPathParticleRopeAlias_path_particle_rope_clientside {
}

// CCSPointPulseAPI (size: 0x1)
namespace CCSPointPulseAPI {
}

// CEnvWindVolume (size: 0x4e0)
namespace CEnvWindVolume {
    constexpr std::ptrdiff_t m_bActive = 0x4a8; // bool
    constexpr std::ptrdiff_t m_vBoxMins = 0x4ac; // Vector
    constexpr std::ptrdiff_t m_vBoxMaxs = 0x4b8; // Vector
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4c4; // bool
    constexpr std::ptrdiff_t m_nShape = 0x4c8; // int32
    constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x4cc; // float32
    constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x4d0; // float32
    constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x4d4; // float32
    constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x4d8; // float32
}

// CFuncElectrifiedVolume (size: 0x788)
namespace CFuncElectrifiedVolume {
    constexpr std::ptrdiff_t m_EffectName = 0x750; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x758; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_EffectZapName = 0x760; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszEffectSource = 0x768; // CUtlSymbolLarge
}

// CCSMinimapBoundary (size: 0x4a8)
namespace CCSMinimapBoundary {
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

// CSoundEventOBBEntity (size: 0x580)
namespace CSoundEventOBBEntity {
    constexpr std::ptrdiff_t m_vMins = 0x558; // Vector
    constexpr std::ptrdiff_t m_vMaxs = 0x564; // Vector
}

// CFlashbangProjectile (size: 0xbc0)
namespace CFlashbangProjectile {
    constexpr std::ptrdiff_t m_flTimeToDetonate = 0xbb0; // float32
    constexpr std::ptrdiff_t m_numOpponentsHit = 0xbb4; // uint8
    constexpr std::ptrdiff_t m_numTeammatesHit = 0xbb5; // uint8
}

// CTriggerMultiple (size: 0x8a8)
namespace CTriggerMultiple {
    constexpr std::ptrdiff_t m_OnTrigger = 0x890; // CEntityIOOutput
}

// CPhysBallSocket (size: 0x520)
namespace CPhysBallSocket {
    constexpr std::ptrdiff_t m_flJointFriction = 0x508; // float32
    constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x50c; // bool
    constexpr std::ptrdiff_t m_flSwingLimit = 0x510; // float32
    constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x514; // bool
    constexpr std::ptrdiff_t m_flMinTwistAngle = 0x518; // float32
    constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x51c; // float32
}

// CDebugHistory (size: 0x3e9490)
namespace CDebugHistory {
    constexpr std::ptrdiff_t m_nNpcEvents = 0x3e84e8; // int32
}

// CSoundOpvarSetPointBase (size: 0x550)
namespace CSoundOpvarSetPointBase {
    constexpr std::ptrdiff_t m_bDisabled = 0x4a8; // bool
    constexpr std::ptrdiff_t m_hSource = 0x4ac; // CEntityHandle
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_vLastPosition = 0x520; // Vector
    constexpr std::ptrdiff_t m_flRefreshTime = 0x52c; // float32
    constexpr std::ptrdiff_t m_iszStackName = 0x530; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOperatorName = 0x538; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszOpvarName = 0x540; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iOpvarIndex = 0x548; // int32
    constexpr std::ptrdiff_t m_bUseAutoCompare = 0x54c; // bool
    constexpr std::ptrdiff_t m_bFastRefresh = 0x54d; // bool
}

// CPathKeyFrame (size: 0x500)
namespace CPathKeyFrame {
    constexpr std::ptrdiff_t m_Origin = 0x4a8; // Vector
    constexpr std::ptrdiff_t m_Angles = 0x4b4; // QAngle
    constexpr std::ptrdiff_t m_qAngle = 0x4c0; // Quaternion
    constexpr std::ptrdiff_t m_iNextKey = 0x4d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flNextTime = 0x4d8; // float32
    constexpr std::ptrdiff_t m_pNextKey = 0x4e0; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_pPrevKey = 0x4e8; // CPathKeyFrame*
    constexpr std::ptrdiff_t m_flMoveSpeed = 0x4f0; // float32
}

// CWeaponCZ75a (size: 0x1160)
namespace CWeaponCZ75a {
    constexpr std::ptrdiff_t m_bMagazineRemoved = 0x1150; // bool
}

// CScriptTriggerPush (size: 0x8d8)
namespace CScriptTriggerPush {
    constexpr std::ptrdiff_t m_vExtent = 0x8c8; // Vector
}

// CRevertSaved (size: 0x740)
namespace CRevertSaved {
    constexpr std::ptrdiff_t m_loadTime = 0x730; // float32
    constexpr std::ptrdiff_t m_Duration = 0x734; // float32
    constexpr std::ptrdiff_t m_HoldTime = 0x738; // float32
}

// CTriggerBombReset (size: 0x890)
namespace CTriggerBombReset {
}

// CTriggerHurt (size: 0x910)
namespace CTriggerHurt {
    constexpr std::ptrdiff_t m_flOriginalDamage = 0x890; // float32
    constexpr std::ptrdiff_t m_flDamage = 0x894; // float32
    constexpr std::ptrdiff_t m_flDamageCap = 0x898; // float32
    constexpr std::ptrdiff_t m_flLastDmgTime = 0x89c; // GameTime_t
    constexpr std::ptrdiff_t m_flForgivenessDelay = 0x8a0; // float32
    constexpr std::ptrdiff_t m_bitsDamageInflict = 0x8a4; // DamageTypes_t
    constexpr std::ptrdiff_t m_damageModel = 0x8a8; // int32
    constexpr std::ptrdiff_t m_bNoDmgForce = 0x8ac; // bool
    constexpr std::ptrdiff_t m_vDamageForce = 0x8b0; // Vector
    constexpr std::ptrdiff_t m_thinkAlways = 0x8bc; // bool
    constexpr std::ptrdiff_t m_hurtThinkPeriod = 0x8c0; // float32
    constexpr std::ptrdiff_t m_OnHurt = 0x8c8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHurtPlayer = 0x8e0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_hurtEntities = 0x8f8; // CUtlVector< CHandle< CBaseEntity > >
}

// CCSPlayer_WeaponServices (size: 0x18d8)
namespace CCSPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_flNextAttack = 0xc0; // GameTime_t
    constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xc4; // bool
    constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xc5; // bool
    constexpr std::ptrdiff_t m_hSavedWeapon = 0xc8; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_nTimeToMelee = 0xcc; // int32
    constexpr std::ptrdiff_t m_nTimeToSecondary = 0xd0; // int32
    constexpr std::ptrdiff_t m_nTimeToPrimary = 0xd4; // int32
    constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xd8; // int32
    constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xdc; // bool
    constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xdd; // bool
    constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xde; // bool
    constexpr std::ptrdiff_t m_bDisableAutoDeploy = 0xdf; // bool
    constexpr std::ptrdiff_t m_bIsPickingUpGroundWeapon = 0xe0; // bool
    constexpr std::ptrdiff_t m_networkAnimTiming = 0x18b8; // CNetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x18d0; // bool
}

// CRetakeGameRules (size: 0x1f0)
namespace CRetakeGameRules {
    constexpr std::ptrdiff_t m_nMatchSeed = 0x138; // int32
    constexpr std::ptrdiff_t m_bBlockersPresent = 0x13c; // bool
    constexpr std::ptrdiff_t m_bRoundInProgress = 0x13d; // bool
    constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x140; // int32
    constexpr std::ptrdiff_t m_iBombSite = 0x144; // int32
    constexpr std::ptrdiff_t m_hBombPlanter = 0x148; // CHandle< CCSPlayerPawn >
}

// CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable (size: 0x538)
namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
}

// CInfoInstructorHintBombTargetA (size: 0x4a8)
namespace CInfoInstructorHintBombTargetA {
}

// CTeamplayRules (size: 0xd0)
namespace CTeamplayRules {
}

// CScriptTriggerHurt (size: 0x920)
namespace CScriptTriggerHurt {
    constexpr std::ptrdiff_t m_vExtent = 0x910; // Vector
}

// CCSGO_WingmanIntroCharacterPosition (size: 0xcc0)
namespace CCSGO_WingmanIntroCharacterPosition {
}

// CWeaponMP9 (size: 0x1150)
namespace CWeaponMP9 {
}

// CTriggerDetectExplosion (size: 0x8d0)
namespace CTriggerDetectExplosion {
    constexpr std::ptrdiff_t m_OnDetectedExplosion = 0x8b8; // CEntityIOOutput
}

// CFilterName (size: 0x4e8)
namespace CFilterName {
    constexpr std::ptrdiff_t m_iFilterName = 0x4e0; // CUtlSymbolLarge
}

// CSmokeGrenadeProjectile (size: 0x2eb0)
namespace CSmokeGrenadeProjectile {
    constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xbd8; // int32
    constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xbdc; // bool
    constexpr std::ptrdiff_t m_nRandomSeed = 0xbe0; // int32
    constexpr std::ptrdiff_t m_vSmokeColor = 0xbe4; // Vector
    constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xbf0; // Vector
    constexpr std::ptrdiff_t m_VoxelFrameData = 0xc00; // CNetworkUtlVectorBase< uint8 >
    constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0xc18; // int32
    constexpr std::ptrdiff_t m_nVoxelUpdate = 0xc1c; // int32
    constexpr std::ptrdiff_t m_flLastBounce = 0xc20; // GameTime_t
    constexpr std::ptrdiff_t m_fllastSimulationTime = 0xc24; // GameTime_t
    constexpr std::ptrdiff_t m_bExplodeFromInferno = 0x2ea8; // bool
    constexpr std::ptrdiff_t m_bDidGroundScorch = 0x2ea9; // bool
}

// CBlood (size: 0x4c8)
namespace CBlood {
    constexpr std::ptrdiff_t m_vecSprayAngles = 0x4a8; // QAngle
    constexpr std::ptrdiff_t m_vecSprayDir = 0x4b4; // Vector
    constexpr std::ptrdiff_t m_flAmount = 0x4c0; // float32
    constexpr std::ptrdiff_t m_Color = 0x4c4; // BloodType
}

// CCSTeam (size: 0x820)
namespace CCSTeam {
    constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x560; // int32
    constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x564; // int32
    constexpr std::ptrdiff_t m_bSurrendered = 0x568; // bool
    constexpr std::ptrdiff_t m_szTeamMatchStat = 0x569; // char[512]
    constexpr std::ptrdiff_t m_numMapVictories = 0x76c; // int32
    constexpr std::ptrdiff_t m_scoreFirstHalf = 0x770; // int32
    constexpr std::ptrdiff_t m_scoreSecondHalf = 0x774; // int32
    constexpr std::ptrdiff_t m_scoreOvertime = 0x778; // int32
    constexpr std::ptrdiff_t m_szClanTeamname = 0x77c; // char[129]
    constexpr std::ptrdiff_t m_iClanID = 0x800; // uint32
    constexpr std::ptrdiff_t m_szTeamFlagImage = 0x804; // char[8]
    constexpr std::ptrdiff_t m_szTeamLogoImage = 0x80c; // char[8]
    constexpr std::ptrdiff_t m_flNextResourceTime = 0x814; // float32
    constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x818; // int32
}

// CRulePointEntity (size: 0x740)
namespace CRulePointEntity {
    constexpr std::ptrdiff_t m_Score = 0x738; // int32
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

// CFuncMoveLinearAlias_momentary_door (size: 0x838)
namespace CFuncMoveLinearAlias_momentary_door {
}

// CBaseAnimGraph (size: 0xa20)
namespace CBaseAnimGraph {
    constexpr std::ptrdiff_t m_graphControllerManager = 0x730; // CAnimGraphControllerManager
    constexpr std::ptrdiff_t m_pMainGraphController = 0x7e0; // CAnimGraphControllerBase*
    constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x7e8; // bool
    constexpr std::ptrdiff_t m_pChoreoServices = 0x7f0; // IChoreoServices*
    constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x7f8; // bool
    constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0x7fc; // float32
    constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0x800; // VectorWS
    constexpr std::ptrdiff_t m_nAnimGraphUpdateId = 0x80c; // uint32
    constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x810; // bool
    constexpr std::ptrdiff_t m_vecForce = 0x814; // Vector
    constexpr std::ptrdiff_t m_nForceBone = 0x820; // int32
    constexpr std::ptrdiff_t m_RagdollPose = 0x838; // PhysicsRagdollPose_t
    constexpr std::ptrdiff_t m_bRagdollEnabled = 0x860; // bool
    constexpr std::ptrdiff_t m_bRagdollClientSide = 0x861; // bool
    constexpr std::ptrdiff_t m_xParentedRagdollRootInEntitySpace = 0x870; // CTransform
}

// CEnvCubemapFog (size: 0x4f8)
namespace CEnvCubemapFog {
    constexpr std::ptrdiff_t m_flEndDistance = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flStartDistance = 0x4ac; // float32
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4b0; // float32
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4b4; // bool
    constexpr std::ptrdiff_t m_flFogHeightWidth = 0x4b8; // float32
    constexpr std::ptrdiff_t m_flFogHeightEnd = 0x4bc; // float32
    constexpr std::ptrdiff_t m_flFogHeightStart = 0x4c0; // float32
    constexpr std::ptrdiff_t m_flFogHeightExponent = 0x4c4; // float32
    constexpr std::ptrdiff_t m_flLODBias = 0x4c8; // float32
    constexpr std::ptrdiff_t m_bActive = 0x4cc; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4cd; // bool
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4d0; // float32
    constexpr std::ptrdiff_t m_nCubemapSourceType = 0x4d4; // int32
    constexpr std::ptrdiff_t m_hSkyMaterial = 0x4d8; // CStrongHandle< InfoForResourceTypeIMaterial2 >
    constexpr std::ptrdiff_t m_iszSkyEntity = 0x4e0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x4e8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x4f0; // bool
    constexpr std::ptrdiff_t m_bFirstTime = 0x4f1; // bool
}

// CPulseCell_InlineNodeSkipSelector (size: 0xb0)
namespace CPulseCell_InlineNodeSkipSelector {
    constexpr std::ptrdiff_t m_nFlowNodeID = 0x48; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_bAnd = 0x4c; // bool
    constexpr std::ptrdiff_t m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
    constexpr std::ptrdiff_t m_FailOutflow = 0x68; // CPulse_OutflowConnection
}

// CBaseDoor (size: 0x930)
namespace CBaseDoor {
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7c0; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7cc; // Vector
    constexpr std::ptrdiff_t m_ls = 0x7d8; // locksound_t
    constexpr std::ptrdiff_t m_bForceClosed = 0x7f8; // bool
    constexpr std::ptrdiff_t m_bDoorGroup = 0x7f9; // bool
    constexpr std::ptrdiff_t m_bLocked = 0x7fa; // bool
    constexpr std::ptrdiff_t m_bIgnoreDebris = 0x7fb; // bool
    constexpr std::ptrdiff_t m_bNoNPCs = 0x7fc; // bool
    constexpr std::ptrdiff_t m_eSpawnPosition = 0x800; // FuncDoorSpawnPos_t
    constexpr std::ptrdiff_t m_flBlockDamage = 0x804; // float32
    constexpr std::ptrdiff_t m_NoiseMoving = 0x808; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrived = 0x810; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x818; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x820; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_ChainTarget = 0x828; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0x830; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0x848; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x860; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x878; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x890; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x8a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnClose = 0x8c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOpen = 0x8d8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLockedUse = 0x8f0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bLoopMoveSound = 0x908; // bool
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x928; // bool
    constexpr std::ptrdiff_t m_isChaining = 0x929; // bool
    constexpr std::ptrdiff_t m_bIsUsable = 0x92a; // bool
}

// CServerOnlyPointEntity (size: 0x4a8)
namespace CServerOnlyPointEntity {
}

// CGameMoney (size: 0x780)
namespace CGameMoney {
    constexpr std::ptrdiff_t m_OnMoneySpent = 0x740; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMoneySpentFail = 0x758; // CEntityIOOutput
    constexpr std::ptrdiff_t m_nMoney = 0x770; // int32
    constexpr std::ptrdiff_t m_strAwardText = 0x778; // CUtlString
}

// CEnvHudHint (size: 0x4b0)
namespace CEnvHudHint {
    constexpr std::ptrdiff_t m_iszMessage = 0x4a8; // CUtlSymbolLarge
}

// CNullEntity (size: 0x4a8)
namespace CNullEntity {
}

// CLogicalEntity (size: 0x4a8)
namespace CLogicalEntity {
}

// CItemDefuser (size: 0xae0)
namespace CItemDefuser {
    constexpr std::ptrdiff_t m_entitySpottedState = 0xac0; // EntitySpottedState_t
    constexpr std::ptrdiff_t m_nSpotRules = 0xad8; // int32
}

// CItemGenericTriggerHelper (size: 0x738)
namespace CItemGenericTriggerHelper {
    constexpr std::ptrdiff_t m_hParentItem = 0x730; // CHandle< CItemGeneric >
}

// CPlayer_WeaponServices (size: 0xb0)
namespace CPlayer_WeaponServices {
    constexpr std::ptrdiff_t m_hMyWeapons = 0x48; // CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > >
    constexpr std::ptrdiff_t m_hActiveWeapon = 0x60; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_hLastWeapon = 0x64; // CHandle< CBasePlayerWeapon >
    constexpr std::ptrdiff_t m_iAmmo = 0x68; // uint16[32]
    constexpr std::ptrdiff_t m_bPreventWeaponPickup = 0xa8; // bool
}

// CRagdollPropAttached (size: 0xbb0)
namespace CRagdollPropAttached {
    constexpr std::ptrdiff_t m_boneIndexAttached = 0xb70; // uint32
    constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xb74; // uint32
    constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xb78; // Vector
    constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xb84; // Vector
    constexpr std::ptrdiff_t m_bShouldDetach = 0xb90; // bool
    constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xba0; // bool
}

// CItemDogtags (size: 0xad0)
namespace CItemDogtags {
    constexpr std::ptrdiff_t m_OwningPlayer = 0xac0; // CHandle< CCSPlayerPawn >
    constexpr std::ptrdiff_t m_KillingPlayer = 0xac4; // CHandle< CCSPlayerPawn >
}

// CFuncPlat (size: 0x7e0)
namespace CFuncPlat {
    constexpr std::ptrdiff_t m_sNoise = 0x7d8; // CUtlSymbolLarge
}

// CBarnLight (size: 0xa20)
namespace CBarnLight {
    constexpr std::ptrdiff_t m_bEnabled = 0x730; // bool
    constexpr std::ptrdiff_t m_nColorMode = 0x734; // int32
    constexpr std::ptrdiff_t m_Color = 0x738; // Color
    constexpr std::ptrdiff_t m_flColorTemperature = 0x73c; // float32
    constexpr std::ptrdiff_t m_flBrightness = 0x740; // float32
    constexpr std::ptrdiff_t m_flBrightnessScale = 0x744; // float32
    constexpr std::ptrdiff_t m_nDirectLight = 0x748; // int32
    constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x74c; // int32
    constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x750; // int32
    constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x754; // int32
    constexpr std::ptrdiff_t m_nLuminaireShape = 0x758; // int32
    constexpr std::ptrdiff_t m_flLuminaireSize = 0x75c; // float32
    constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x760; // float32
    constexpr std::ptrdiff_t m_LightStyleString = 0x768; // CUtlString
    constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x770; // GameTime_t
    constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x778; // CNetworkUtlVectorBase< CUtlString >
    constexpr std::ptrdiff_t m_LightStyleEvents = 0x790; // CNetworkUtlVectorBase< CUtlString >
    constexpr std::ptrdiff_t m_LightStyleTargets = 0x7a8; // CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
    constexpr std::ptrdiff_t m_StyleEvent = 0x7c0; // CEntityIOOutput[4]
    constexpr std::ptrdiff_t m_hLightCookie = 0x840; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_flShape = 0x848; // float32
    constexpr std::ptrdiff_t m_flSoftX = 0x84c; // float32
    constexpr std::ptrdiff_t m_flSoftY = 0x850; // float32
    constexpr std::ptrdiff_t m_flSkirt = 0x854; // float32
    constexpr std::ptrdiff_t m_flSkirtNear = 0x858; // float32
    constexpr std::ptrdiff_t m_vSizeParams = 0x85c; // Vector
    constexpr std::ptrdiff_t m_flRange = 0x868; // float32
    constexpr std::ptrdiff_t m_vShear = 0x86c; // Vector
    constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x878; // int32
    constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x87c; // Vector
    constexpr std::ptrdiff_t m_nCastShadows = 0x888; // int32
    constexpr std::ptrdiff_t m_nShadowMapSize = 0x88c; // int32
    constexpr std::ptrdiff_t m_nShadowPriority = 0x890; // int32
    constexpr std::ptrdiff_t m_bContactShadow = 0x894; // bool
    constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x895; // bool
    constexpr std::ptrdiff_t m_nBounceLight = 0x898; // int32
    constexpr std::ptrdiff_t m_flBounceScale = 0x89c; // float32
    constexpr std::ptrdiff_t m_bDynamicBounce = 0x8a0; // bool
    constexpr std::ptrdiff_t m_flMinRoughness = 0x8a4; // float32
    constexpr std::ptrdiff_t m_vAlternateColor = 0x8a8; // Vector
    constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x8b4; // float32
    constexpr std::ptrdiff_t m_nFog = 0x8b8; // int32
    constexpr std::ptrdiff_t m_flFogStrength = 0x8bc; // float32
    constexpr std::ptrdiff_t m_nFogShadows = 0x8c0; // int32
    constexpr std::ptrdiff_t m_flFogScale = 0x8c4; // float32
    constexpr std::ptrdiff_t m_bFogMixedShadows = 0x8c8; // bool
    constexpr std::ptrdiff_t m_flFadeSizeStart = 0x8cc; // float32
    constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x8d0; // float32
    constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x8d4; // float32
    constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x8d8; // float32
    constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x8dc; // bool
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x8e0; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x8ec; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x8f8; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x904; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x910; // Vector
    constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x91c; // int32
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x920; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x92c; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x938; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x944; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x950; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x95c; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x968; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x974; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x980; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x98c; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x998; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x9a4; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0x9b0; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0x9bc; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0x9c8; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0x9d4; // Vector
    constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0x9e0; // QAngle
    constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0x9ec; // Vector
    constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x9f8; // bool
    constexpr std::ptrdiff_t m_VisClusters = 0xa00; // CNetworkUtlVectorBase< uint16 >
}

// CInstructorEventEntity (size: 0x4c0)
namespace CInstructorEventEntity {
    constexpr std::ptrdiff_t m_iszName = 0x4a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hTargetPlayer = 0x4b8; // CHandle< CBasePlayerPawn >
}

// CWeaponTec9 (size: 0x1150)
namespace CWeaponTec9 {
}

// CPathCorner (size: 0x4c8)
namespace CPathCorner {
    constexpr std::ptrdiff_t m_flWait = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flRadius = 0x4ac; // float32
    constexpr std::ptrdiff_t m_OnPass = 0x4b0; // CEntityIOOutput
}

// CTriggerSndSosOpvar (size: 0xbf0)
namespace CTriggerSndSosOpvar {
    constexpr std::ptrdiff_t m_hTouchingPlayers = 0x890; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_flPosition = 0x8a8; // Vector
    constexpr std::ptrdiff_t m_flCenterSize = 0x8b4; // float32
    constexpr std::ptrdiff_t m_flMinVal = 0x8b8; // float32
    constexpr std::ptrdiff_t m_flMaxVal = 0x8bc; // float32
    constexpr std::ptrdiff_t m_opvarName = 0x8c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_stackName = 0x8c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_operatorName = 0x8d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bVolIs2D = 0x8d8; // bool
    constexpr std::ptrdiff_t m_opvarNameChar = 0x8d9; // char[256]
    constexpr std::ptrdiff_t m_stackNameChar = 0x9d9; // char[256]
    constexpr std::ptrdiff_t m_operatorNameChar = 0xad9; // char[256]
    constexpr std::ptrdiff_t m_VecNormPos = 0xbdc; // Vector
    constexpr std::ptrdiff_t m_flNormCenterSize = 0xbe8; // float32
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

// CPointCommentaryNode (size: 0xb00)
namespace CPointCommentaryNode {
    constexpr std::ptrdiff_t m_iszPreCommands = 0xa20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPostCommands = 0xa28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszCommentaryFile = 0xa30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszViewTarget = 0xa38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hViewTarget = 0xa40; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hViewTargetAngles = 0xa44; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iszViewPosition = 0xa48; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hViewPosition = 0xa50; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_hViewPositionMover = 0xa54; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bPreventMovement = 0xa58; // bool
    constexpr std::ptrdiff_t m_bUnderCrosshair = 0xa59; // bool
    constexpr std::ptrdiff_t m_bUnstoppable = 0xa5a; // bool
    constexpr std::ptrdiff_t m_flFinishedTime = 0xa5c; // GameTime_t
    constexpr std::ptrdiff_t m_vecFinishOrigin = 0xa60; // Vector
    constexpr std::ptrdiff_t m_vecOriginalAngles = 0xa6c; // QAngle
    constexpr std::ptrdiff_t m_vecFinishAngles = 0xa78; // QAngle
    constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0xa84; // bool
    constexpr std::ptrdiff_t m_bDisabled = 0xa85; // bool
    constexpr std::ptrdiff_t m_vecTeleportOrigin = 0xa88; // VectorWS
    constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0xa94; // GameTime_t
    constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0xa98; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0xab0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bActive = 0xac8; // bool
    constexpr std::ptrdiff_t m_flStartTime = 0xacc; // GameTime_t
    constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xad0; // float32
    constexpr std::ptrdiff_t m_iszTitle = 0xad8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszSpeakers = 0xae0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iNodeNumber = 0xae8; // int32
    constexpr std::ptrdiff_t m_iNodeNumberMax = 0xaec; // int32
    constexpr std::ptrdiff_t m_bListenedTo = 0xaf0; // bool
}

// CMomentaryRotButton (size: 0x968)
namespace CMomentaryRotButton {
    constexpr std::ptrdiff_t m_Position = 0x8b0; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_OnUnpressed = 0x8d0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0x8e8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0x900; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnReachedPosition = 0x918; // CEntityIOOutput
    constexpr std::ptrdiff_t m_lastUsed = 0x930; // int32
    constexpr std::ptrdiff_t m_start = 0x934; // QAngle
    constexpr std::ptrdiff_t m_end = 0x940; // QAngle
    constexpr std::ptrdiff_t m_IdealYaw = 0x94c; // float32
    constexpr std::ptrdiff_t m_sNoise = 0x950; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bUpdateTarget = 0x958; // bool
    constexpr std::ptrdiff_t m_direction = 0x95c; // int32
    constexpr std::ptrdiff_t m_returnSpeed = 0x960; // float32
    constexpr std::ptrdiff_t m_flStartPosition = 0x964; // float32
}

// CSceneListManager (size: 0x580)
namespace CSceneListManager {
    constexpr std::ptrdiff_t m_hListManagers = 0x4a8; // CUtlVector< CHandle< CSceneListManager > >
    constexpr std::ptrdiff_t m_iszScenes = 0x4c0; // CUtlSymbolLarge[16]
    constexpr std::ptrdiff_t m_hScenes = 0x540; // CHandle< CBaseEntity >[16]
}

// CEnvTilt (size: 0x4b8)
namespace CEnvTilt {
    constexpr std::ptrdiff_t m_Duration = 0x4a8; // float32
    constexpr std::ptrdiff_t m_Radius = 0x4ac; // float32
    constexpr std::ptrdiff_t m_TiltTime = 0x4b0; // float32
    constexpr std::ptrdiff_t m_stopTime = 0x4b4; // GameTime_t
}

// CEnvSoundscapeTriggerable (size: 0x538)
namespace CEnvSoundscapeTriggerable {
}

// CFuncMover (size: 0x998)
namespace CFuncMover {
    constexpr std::ptrdiff_t m_iszPathName = 0x730; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hPathMover = 0x738; // CHandle< CPathMover >
    constexpr std::ptrdiff_t m_hPrevPathMover = 0x73c; // CHandle< CPathMover >
    constexpr std::ptrdiff_t m_iszPathNodeStart = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszPathNodeEnd = 0x748; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_eMoveType = 0x750; // CFuncMover::Move_t
    constexpr std::ptrdiff_t m_bIsReversing = 0x754; // bool
    constexpr std::ptrdiff_t m_flStartSpeed = 0x758; // float32
    constexpr std::ptrdiff_t m_flPathLocation = 0x75c; // float32
    constexpr std::ptrdiff_t m_flT = 0x760; // float32
    constexpr std::ptrdiff_t m_nCurrentNodeIndex = 0x764; // int32
    constexpr std::ptrdiff_t m_nPreviousNodeIndex = 0x768; // int32
    constexpr std::ptrdiff_t m_eSolidType = 0x76c; // SolidType_t
    constexpr std::ptrdiff_t m_bIsMoving = 0x76d; // bool
    constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x770; // float32
    constexpr std::ptrdiff_t m_flDistanceToReachMaxSpeed = 0x774; // float32
    constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x778; // float32
    constexpr std::ptrdiff_t m_flComputedDistanceToReachMaxSpeed = 0x77c; // float32
    constexpr std::ptrdiff_t m_flComputedDistanceToReachZeroSpeed = 0x780; // float32
    constexpr std::ptrdiff_t m_flStartCurveScale = 0x784; // float32
    constexpr std::ptrdiff_t m_flStopCurveScale = 0x788; // float32
    constexpr std::ptrdiff_t m_flDistanceToReachZeroSpeed = 0x78c; // float32
    constexpr std::ptrdiff_t m_flTimeMovementStart = 0x790; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeMovementStop = 0x794; // GameTime_t
    constexpr std::ptrdiff_t m_hStopAtNode = 0x798; // CHandle< CMoverPathNode >
    constexpr std::ptrdiff_t m_flPathLocationToBeginStop = 0x79c; // float32
    constexpr std::ptrdiff_t m_flPathLocationStart = 0x7a0; // float32
    constexpr std::ptrdiff_t m_flBeginStopT = 0x7a4; // float32
    constexpr std::ptrdiff_t m_iszStartForwardSound = 0x7a8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLoopForwardSound = 0x7b0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszStopForwardSound = 0x7b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszStartReverseSound = 0x7c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLoopReverseSound = 0x7c8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszStopReverseSound = 0x7d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszArriveAtDestinationSound = 0x7d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_OnMovementEnd = 0x7f8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bStartAtClosestPoint = 0x810; // bool
    constexpr std::ptrdiff_t m_bStartAtEnd = 0x811; // bool
    constexpr std::ptrdiff_t m_bStartFollowingClosestMover = 0x812; // bool
    constexpr std::ptrdiff_t m_eOrientationUpdate = 0x814; // CFuncMover::OrientationUpdate_t
    constexpr std::ptrdiff_t m_flTimeStartOrientationChange = 0x818; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeToBlendToNewOrientation = 0x81c; // float32
    constexpr std::ptrdiff_t m_flDurationBlendToNewOrientationRan = 0x820; // float32
    constexpr std::ptrdiff_t m_nOriginalOrientationIndex = 0x824; // int32
    constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x828; // bool
    constexpr std::ptrdiff_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x829; // bool
    constexpr std::ptrdiff_t m_OnNodePassed = 0x830; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_iszOrientationMatchEntityName = 0x850; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hOrientationMatchEntity = 0x858; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flTimeToTraverseToNextNode = 0x85c; // float32
    constexpr std::ptrdiff_t m_vLerpToNewPosStartInPathEntitySpace = 0x860; // Vector
    constexpr std::ptrdiff_t m_vLerpToNewPosEndInPathEntitySpace = 0x86c; // Vector
    constexpr std::ptrdiff_t m_flLerpToPositionT = 0x878; // float32
    constexpr std::ptrdiff_t m_flLerpToPositionDeltaT = 0x87c; // float32
    constexpr std::ptrdiff_t m_OnLerpToPositionComplete = 0x880; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bIsPaused = 0x898; // bool
    constexpr std::ptrdiff_t m_eTransitionedToPathNodeAction = 0x89c; // CFuncMover::TransitionToPathNodeAction_t
    constexpr std::ptrdiff_t m_nDelayedTeleportToNode = 0x8a0; // int32
    constexpr std::ptrdiff_t m_bIsVerboseLogging = 0x8a4; // bool
    constexpr std::ptrdiff_t m_hFollowEntity = 0x8a8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_flFollowDistance = 0x8ac; // float32
    constexpr std::ptrdiff_t m_flFollowMinimumSpeed = 0x8b0; // float32
    constexpr std::ptrdiff_t m_flCurFollowEntityT = 0x8b4; // float32
    constexpr std::ptrdiff_t m_flCurFollowSpeed = 0x8b8; // float32
    constexpr std::ptrdiff_t m_strOrientationFaceEntityName = 0x8c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hOrientationFaceEntity = 0x8c8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_OnStart = 0x8d0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartForward = 0x8e8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStartReverse = 0x900; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStop = 0x918; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnStopped = 0x930; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bNextNodeReturnsCurrent = 0x948; // bool
    constexpr std::ptrdiff_t m_bStartedMoving = 0x949; // bool
    constexpr std::ptrdiff_t m_eFollowEntityDirection = 0x968; // CFuncMover::FollowEntityDirection_t
    constexpr std::ptrdiff_t m_hFollowMover = 0x96c; // CHandle< CFuncMover >
    constexpr std::ptrdiff_t m_iszFollowMoverEntityName = 0x970; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flFollowMoverDistance = 0x978; // float32
    constexpr std::ptrdiff_t m_flFollowMoverCalculatedDistance = 0x97c; // float32
    constexpr std::ptrdiff_t m_flFollowMoverSpringStrength = 0x980; // float32
    constexpr std::ptrdiff_t m_bFollowConstraintsInitialized = 0x984; // bool
    constexpr std::ptrdiff_t m_eFollowConstraint = 0x988; // CFuncMover::FollowConstraint_t
    constexpr std::ptrdiff_t m_flFollowMoverSpeed = 0x98c; // float32
    constexpr std::ptrdiff_t m_flFollowMoverVelocity = 0x990; // float32
    constexpr std::ptrdiff_t m_nTickMovementRan = 0x994; // GameTick_t
}

// CPhysicsProp (size: 0xce0)
namespace CPhysicsProp {
    constexpr std::ptrdiff_t m_MotionEnabled = 0xbb0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwakened = 0xbc8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAwake = 0xbe0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAsleep = 0xbf8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerUse = 0xc10; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOutOfWorld = 0xc28; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnPlayerPickup = 0xc40; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bForceNavIgnore = 0xc58; // bool
    constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xc59; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xc5a; // bool
    constexpr std::ptrdiff_t m_massScale = 0xc5c; // float32
    constexpr std::ptrdiff_t m_buoyancyScale = 0xc60; // float32
    constexpr std::ptrdiff_t m_damageType = 0xc64; // int32
    constexpr std::ptrdiff_t m_damageToEnableMotion = 0xc68; // int32
    constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xc6c; // float32
    constexpr std::ptrdiff_t m_bThrownByPlayer = 0xc70; // bool
    constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xc71; // bool
    constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xc72; // bool
    constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xc73; // bool
    constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xc74; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xc75; // bool
    constexpr std::ptrdiff_t m_flLastBurn = 0xc78; // GameTime_t
    constexpr std::ptrdiff_t m_nDynamicContinuousContactBehavior = 0xc7c; // DynamicContinuousContactBehavior_t
    constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xc80; // GameTime_t
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xc84; // int32
    constexpr std::ptrdiff_t m_nGlowRange = 0xc88; // int32
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xc8c; // int32
    constexpr std::ptrdiff_t m_glowColor = 0xc90; // Color
    constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xc94; // bool
    constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xc95; // bool
    constexpr std::ptrdiff_t m_bUpdateNavWhenMoving = 0xc9c; // bool
    constexpr std::ptrdiff_t m_bForceNavObstacleCut = 0xc9d; // bool
    constexpr std::ptrdiff_t m_bAllowObstacleConvexHullMerging = 0xc9e; // bool
    constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xc9f; // bool
    constexpr std::ptrdiff_t m_bEnableUseOutput = 0xca0; // bool
    constexpr std::ptrdiff_t m_CrateType = 0xca4; // CPhysicsProp::CrateType_t
    constexpr std::ptrdiff_t m_strItemClass = 0xca8; // CUtlSymbolLarge[4]
    constexpr std::ptrdiff_t m_nItemCount = 0xcc8; // int32[4]
    constexpr std::ptrdiff_t m_bRemovableForAmmoBalancing = 0xcd8; // bool
    constexpr std::ptrdiff_t m_bAwake = 0xcd9; // bool
    constexpr std::ptrdiff_t m_bAttachedToReferenceFrame = 0xcda; // bool
}

// CFuncNavObstruction (size: 0x750)
namespace CFuncNavObstruction {
    constexpr std::ptrdiff_t m_bDisabled = 0x748; // bool
    constexpr std::ptrdiff_t m_bUseAsyncObstacleUpdate = 0x749; // bool
}

// CPhysWheelConstraint (size: 0x540)
namespace CPhysWheelConstraint {
    constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x508; // float32
    constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x50c; // float32
    constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x510; // float32
    constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x514; // bool
    constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x518; // float32
    constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x51c; // float32
    constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x520; // bool
    constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x524; // float32
    constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x528; // float32
    constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x52c; // float32
    constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x530; // float32
    constexpr std::ptrdiff_t m_hSteeringMimicsEntity = 0x534; // CHandle< CBaseEntity >
}

// CSkyboxReference (size: 0x4b0)
namespace CSkyboxReference {
    constexpr std::ptrdiff_t m_worldGroupId = 0x4a8; // WorldGroupId_t
    constexpr std::ptrdiff_t m_hSkyCamera = 0x4ac; // CHandle< CSkyCamera >
}

// CPointPulse (size: 0x4a8)
namespace CPointPulse {
}

// CMolotovProjectile (size: 0xcb0)
namespace CMolotovProjectile {
    constexpr std::ptrdiff_t m_bIsIncGrenade = 0xbb0; // bool
    constexpr std::ptrdiff_t m_bDetonated = 0xbc8; // bool
    constexpr std::ptrdiff_t m_stillTimer = 0xbd0; // IntervalTimer
}

// CFilterClass (size: 0x4e8)
namespace CFilterClass {
    constexpr std::ptrdiff_t m_iFilterClass = 0x4e0; // CUtlSymbolLarge
}

// CTriggerToggleSave (size: 0x890)
namespace CTriggerToggleSave {
}

// CPathWithDynamicNodes (size: 0x5f0)
namespace CPathWithDynamicNodes {
    constexpr std::ptrdiff_t m_vecPathNodes = 0x5b0; // CNetworkUtlVectorBase< CHandle< CPathNode > >
    constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x5d0; // CTransform
}

// CColorCorrection (size: 0x6e0)
namespace CColorCorrection {
    constexpr std::ptrdiff_t m_flFadeInDuration = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4ac; // float32
    constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4b4; // float32
    constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x4b8; // GameTime_t
    constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x4bc; // GameTime_t
    constexpr std::ptrdiff_t m_flMaxWeight = 0x4c0; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4c4; // bool
    constexpr std::ptrdiff_t m_bEnabled = 0x4c5; // bool
    constexpr std::ptrdiff_t m_bMaster = 0x4c6; // bool
    constexpr std::ptrdiff_t m_bClientSide = 0x4c7; // bool
    constexpr std::ptrdiff_t m_bExclusive = 0x4c8; // bool
    constexpr std::ptrdiff_t m_MinFalloff = 0x4cc; // float32
    constexpr std::ptrdiff_t m_MaxFalloff = 0x4d0; // float32
    constexpr std::ptrdiff_t m_flCurWeight = 0x4d4; // float32
    constexpr std::ptrdiff_t m_netlookupFilename = 0x4d8; // char[512]
    constexpr std::ptrdiff_t m_lookupFilename = 0x6d8; // CUtlSymbolLarge
}

// CPropDoorRotatingBreakable (size: 0xf10)
namespace CPropDoorRotatingBreakable {
    constexpr std::ptrdiff_t m_bBreakable = 0xef0; // bool
    constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0xef1; // bool
    constexpr std::ptrdiff_t m_currentDamageState = 0xef4; // int32
    constexpr std::ptrdiff_t m_damageStates = 0xef8; // CUtlVector< CUtlSymbolLarge >
}

// CLightDirectionalEntity (size: 0x738)
namespace CLightDirectionalEntity {
}

// CBaseClientUIEntity (size: 0x890)
namespace CBaseClientUIEntity {
    constexpr std::ptrdiff_t m_bEnabled = 0x730; // bool
    constexpr std::ptrdiff_t m_DialogXMLName = 0x738; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelClassName = 0x740; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_PanelID = 0x748; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_CustomOutput0 = 0x750; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_CustomOutput1 = 0x770; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_CustomOutput2 = 0x790; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_CustomOutput3 = 0x7b0; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_CustomOutput4 = 0x7d0; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_CustomOutput5 = 0x7f0; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_CustomOutput6 = 0x810; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_CustomOutput7 = 0x830; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_CustomOutput8 = 0x850; // CEntityOutputTemplate< CUtlString, char* >
    constexpr std::ptrdiff_t m_CustomOutput9 = 0x870; // CEntityOutputTemplate< CUtlString, char* >
}

// CBreakable (size: 0x808)
namespace CBreakable {
    constexpr std::ptrdiff_t m_CPropDataComponent = 0x738; // CPropDataComponent
    constexpr std::ptrdiff_t m_Material = 0x778; // Materials
    constexpr std::ptrdiff_t m_hBreaker = 0x77c; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_Explosion = 0x780; // Explosions
    constexpr std::ptrdiff_t m_iszSpawnObject = 0x788; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPressureDelay = 0x790; // float32
    constexpr std::ptrdiff_t m_iMinHealthDmg = 0x794; // int32
    constexpr std::ptrdiff_t m_iszPropData = 0x798; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_impactEnergyScale = 0x7a0; // float32
    constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0x7a4; // EOverrideBlockLOS_t
    constexpr std::ptrdiff_t m_OnStartDeath = 0x7a8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBreak = 0x7c0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnHealthChanged = 0x7d8; // CEntityOutputTemplate< float32, float32 >
    constexpr std::ptrdiff_t m_PerformanceMode = 0x7f8; // PerformanceMode_t
    constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x7fc; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x800; // GameTime_t
}

// CInfoLandmark (size: 0x4a8)
namespace CInfoLandmark {
}

// CBaseFilter (size: 0x4e0)
namespace CBaseFilter {
    constexpr std::ptrdiff_t m_bNegated = 0x4a8; // bool
    constexpr std::ptrdiff_t m_OnPass = 0x4b0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFail = 0x4c8; // CEntityIOOutput
}

// WeaponPurchaseTracker_t (size: 0x70)
namespace WeaponPurchaseTracker_t {
    constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // CUtlVectorEmbeddedNetworkVar< WeaponPurchaseCount_t >
}

// CPulseCell_Outflow_PlaySceneBase::CursorState_t (size: 0x8)
namespace CPulseCell_Outflow_PlaySceneBase_CursorState_t {
    constexpr std::ptrdiff_t m_sceneInstance = 0x0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_mainActor = 0x4; // CHandle< CBaseEntity >
}

// PulseObservableBoolExpression_t (size: 0x78)
namespace PulseObservableBoolExpression_t {
    constexpr std::ptrdiff_t m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_DependentObservableVars = 0x48; // CUtlVector< PulseRuntimeVarIndex_t >
    constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60; // CUtlVector< PulseRuntimeBlackboardReferenceIndex_t >
}

// CMapInfo (size: 0x4d8)
namespace CMapInfo {
    constexpr std::ptrdiff_t m_iBuyingStatus = 0x4a8; // int32
    constexpr std::ptrdiff_t m_flBombRadius = 0x4ac; // float32
    constexpr std::ptrdiff_t m_iPetPopulation = 0x4b0; // int32
    constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4b4; // bool
    constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4b5; // bool
    constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x4b8; // float32
    constexpr std::ptrdiff_t m_iHostageCount = 0x4bc; // int32
    constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x4c0; // bool
    constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x4c1; // bool
    constexpr std::ptrdiff_t m_flEnvRainStrength = 0x4c4; // float32
    constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x4c8; // float32
    constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x4cc; // float32
    constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x4d0; // float32
    constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x4d4; // float32
}

// CGradientFog (size: 0x4e8)
namespace CGradientFog {
    constexpr std::ptrdiff_t m_hGradientFogTexture = 0x4a8; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_flFogStartDistance = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flFogEndDistance = 0x4b4; // float32
    constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4b8; // bool
    constexpr std::ptrdiff_t m_flFogStartHeight = 0x4bc; // float32
    constexpr std::ptrdiff_t m_flFogEndHeight = 0x4c0; // float32
    constexpr std::ptrdiff_t m_flFarZ = 0x4c4; // float32
    constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4c8; // float32
    constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4cc; // float32
    constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x4d0; // float32
    constexpr std::ptrdiff_t m_fogColor = 0x4d4; // Color
    constexpr std::ptrdiff_t m_flFogStrength = 0x4d8; // float32
    constexpr std::ptrdiff_t m_flFadeTime = 0x4dc; // float32
    constexpr std::ptrdiff_t m_bStartDisabled = 0x4e0; // bool
    constexpr std::ptrdiff_t m_bIsEnabled = 0x4e1; // bool
    constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x4e2; // bool
}

// CSoundOpvarSetAABBEntity (size: 0x6a8)
namespace CSoundOpvarSetAABBEntity {
    constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x640; // Vector
    constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x64c; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x658; // Vector
    constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x664; // Vector
    constexpr std::ptrdiff_t m_nAABBDirection = 0x670; // int32
    constexpr std::ptrdiff_t m_vInnerMins = 0x674; // Vector
    constexpr std::ptrdiff_t m_vInnerMaxs = 0x680; // Vector
    constexpr std::ptrdiff_t m_vOuterMins = 0x68c; // Vector
    constexpr std::ptrdiff_t m_vOuterMaxs = 0x698; // Vector
}

// CPulseCell_Outflow_PlaySequence (size: 0xf8)
namespace CPulseCell_Outflow_PlaySequence {
    constexpr std::ptrdiff_t m_ParamSequenceName = 0xf0; // CUtlString
}

// CPointClientUIWorldTextPanel (size: 0xae8)
namespace CPointClientUIWorldTextPanel {
    constexpr std::ptrdiff_t m_messageText = 0x8e8; // char[512]
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

// CFuncRotator (size: 0x910)
namespace CFuncRotator {
    constexpr std::ptrdiff_t m_hRotatorTarget = 0x730; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bIsRotating = 0x734; // bool
    constexpr std::ptrdiff_t m_bIsReversing = 0x735; // bool
    constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x738; // float32
    constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x73c; // float32
    constexpr std::ptrdiff_t m_flDistanceAlongArcTraveled = 0x740; // float32
    constexpr std::ptrdiff_t m_flTimeToWaitOscillate = 0x744; // float32
    constexpr std::ptrdiff_t m_flTimeRotationStart = 0x748; // GameTime_t
    constexpr std::ptrdiff_t m_qLSPrevChange = 0x750; // Quaternion
    constexpr std::ptrdiff_t m_qWSPrev = 0x760; // Quaternion
    constexpr std::ptrdiff_t m_qWSInit = 0x770; // Quaternion
    constexpr std::ptrdiff_t m_qLSInit = 0x780; // Quaternion
    constexpr std::ptrdiff_t m_qLSOrientation = 0x790; // Quaternion
    constexpr std::ptrdiff_t m_OnRotationStarted = 0x7a0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnRotationCompleted = 0x7b8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOscillate = 0x7d0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOscillateStartArrive = 0x7e8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOscillateStartDepart = 0x800; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOscillateEndArrive = 0x818; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOscillateEndDepart = 0x830; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bOscillateDepart = 0x848; // bool
    constexpr std::ptrdiff_t m_nOscillateCount = 0x84c; // int32
    constexpr std::ptrdiff_t m_eRotateType = 0x850; // CFuncRotator::Rotate_t
    constexpr std::ptrdiff_t m_ePrevRotateType = 0x854; // CFuncRotator::Rotate_t
    constexpr std::ptrdiff_t m_bHasTargetOverride = 0x858; // bool
    constexpr std::ptrdiff_t m_qOrientationOverride = 0x860; // Quaternion
    constexpr std::ptrdiff_t m_eSpaceOverride = 0x870; // RotatorTargetSpace_t
    constexpr std::ptrdiff_t m_qAngularVelocity = 0x874; // QAngle
    constexpr std::ptrdiff_t m_vLookAtForcedUp = 0x880; // Vector
    constexpr std::ptrdiff_t m_strRotatorTarget = 0x890; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bRecordHistory = 0x898; // bool
    constexpr std::ptrdiff_t m_vecRotatorHistory = 0x8a0; // CUtlVector< RotatorHistoryEntry_t >
    constexpr std::ptrdiff_t m_bReturningToPreviousOrientation = 0x8b8; // bool
    constexpr std::ptrdiff_t m_vecRotatorQueue = 0x8c0; // CUtlVector< RotatorQueueEntry_t >
    constexpr std::ptrdiff_t m_vecRotatorQueueHistory = 0x8d8; // CUtlVector< RotatorHistoryEntry_t >
    constexpr std::ptrdiff_t m_eSolidType = 0x8f0; // SolidType_t
    constexpr std::ptrdiff_t m_hSpeedFromMover = 0x8f4; // CHandle< CFuncMover >
    constexpr std::ptrdiff_t m_iszSpeedFromMover = 0x8f8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flSpeedScale = 0x900; // float32
    constexpr std::ptrdiff_t m_flMinYawRotation = 0x904; // float32
    constexpr std::ptrdiff_t m_flMaxYawRotation = 0x908; // float32
}

// CSoundEventEntity (size: 0x558)
namespace CSoundEventEntity {
    constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4a8; // bool
    constexpr std::ptrdiff_t m_bToLocalPlayer = 0x4a9; // bool
    constexpr std::ptrdiff_t m_bStopOnNew = 0x4aa; // bool
    constexpr std::ptrdiff_t m_bSaveRestore = 0x4ab; // bool
    constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x4ac; // bool
    constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x4b0; // float32
    constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszAttachmentName = 0x4c0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_onGUIDChanged = 0x4c8; // CEntityOutputTemplate< uint64, uint64 >
    constexpr std::ptrdiff_t m_onSoundFinished = 0x4e8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_flClientCullRadius = 0x500; // float32
    constexpr std::ptrdiff_t m_iszSoundName = 0x530; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hSource = 0x54c; // CEntityHandle
    constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x550; // int32
}

// CInfoPlayerCounterterrorist (size: 0x4b8)
namespace CInfoPlayerCounterterrorist {
}

// CEnvFade (size: 0x4d0)
namespace CEnvFade {
    constexpr std::ptrdiff_t m_fadeColor = 0x4a8; // Color
    constexpr std::ptrdiff_t m_Duration = 0x4ac; // float32
    constexpr std::ptrdiff_t m_HoldDuration = 0x4b0; // float32
    constexpr std::ptrdiff_t m_OnBeginFade = 0x4b8; // CEntityIOOutput
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

// CTriggerImpact (size: 0x8e0)
namespace CTriggerImpact {
    constexpr std::ptrdiff_t m_flMagnitude = 0x8a8; // float32
    constexpr std::ptrdiff_t m_flNoise = 0x8ac; // float32
    constexpr std::ptrdiff_t m_flViewkick = 0x8b0; // float32
    constexpr std::ptrdiff_t m_pOutputForce = 0x8b8; // CEntityOutputTemplate< Vector, Vector >
}

// CCSGameModeRules_Deathmatch (size: 0x88)
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

// CBasePropDoor (size: 0xe50)
namespace CBasePropDoor {
    constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xc60; // float32
    constexpr std::ptrdiff_t m_hDoorList = 0xc68; // CUtlVector< CHandle< CBasePropDoor > >
    constexpr std::ptrdiff_t m_nHardwareType = 0xc80; // int32
    constexpr std::ptrdiff_t m_bNeedsHardware = 0xc84; // bool
    constexpr std::ptrdiff_t m_eDoorState = 0xc88; // DoorState_t
    constexpr std::ptrdiff_t m_bLocked = 0xc8c; // bool
    constexpr std::ptrdiff_t m_bNoNPCs = 0xc8d; // bool
    constexpr std::ptrdiff_t m_closedPosition = 0xc90; // Vector
    constexpr std::ptrdiff_t m_closedAngles = 0xc9c; // QAngle
    constexpr std::ptrdiff_t m_hBlocker = 0xca8; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_bFirstBlocked = 0xcac; // bool
    constexpr std::ptrdiff_t m_ls = 0xcb0; // locksound_t
    constexpr std::ptrdiff_t m_bForceClosed = 0xcd0; // bool
    constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xcd4; // VectorWS
    constexpr std::ptrdiff_t m_hActivator = 0xce0; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_SoundMoving = 0xcf8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundOpen = 0xd00; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundClose = 0xd08; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLock = 0xd10; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundUnlock = 0xd18; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLatch = 0xd20; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundPound = 0xd28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundJiggle = 0xd30; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_SoundLockedAnim = 0xd38; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_numCloseAttempts = 0xd40; // int32
    constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xd44; // CUtlStringToken
    constexpr std::ptrdiff_t m_SlaveName = 0xd48; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hMaster = 0xd50; // CHandle< CBasePropDoor >
    constexpr std::ptrdiff_t m_OnBlockedClosing = 0xd58; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnBlockedOpening = 0xd70; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xd88; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xda0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyClosed = 0xdb8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnFullyOpen = 0xdd0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnClose = 0xde8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnOpen = 0xe00; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLockedUse = 0xe18; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAjarOpen = 0xe30; // CEntityIOOutput
}

// CLogicBranchList (size: 0x590)
namespace CLogicBranchList {
    constexpr std::ptrdiff_t m_nLogicBranchNames = 0x4a8; // CUtlSymbolLarge[16]
    constexpr std::ptrdiff_t m_LogicBranchList = 0x528; // CUtlVector< CHandle< CBaseEntity > >
    constexpr std::ptrdiff_t m_eLastState = 0x540; // CLogicBranchList::LogicBranchListenerLastState_t
    constexpr std::ptrdiff_t m_OnAllTrue = 0x548; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAllFalse = 0x560; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnMixed = 0x578; // CEntityIOOutput
}

// CBtActionParachutePositioning (size: 0x78)
namespace CBtActionParachutePositioning {
    constexpr std::ptrdiff_t m_ActionTimer = 0x58; // CountdownTimer
}

// CAK47 (size: 0x1150)
namespace CAK47 {
}

// CDynamicProp (size: 0xc50)
namespace CDynamicProp {
    constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xba8; // bool
    constexpr std::ptrdiff_t m_bNavObstacleUpdatesOverridden = 0xba9; // bool
    constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xbaa; // bool
    constexpr std::ptrdiff_t m_bUseAnimGraph = 0xbab; // bool
    constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xbb0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimOver = 0xbc8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xbe0; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xbf8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xc10; // CEntityIOOutput
    constexpr std::ptrdiff_t m_iszIdleAnim = 0xc28; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xc30; // AnimLoopMode_t
    constexpr std::ptrdiff_t m_bRandomizeCycle = 0xc34; // bool
    constexpr std::ptrdiff_t m_bStartDisabled = 0xc35; // bool
    constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xc36; // bool
    constexpr std::ptrdiff_t m_bForceNpcExclude = 0xc37; // bool
    constexpr std::ptrdiff_t m_bCreateNonSolid = 0xc38; // bool
    constexpr std::ptrdiff_t m_bIsOverrideProp = 0xc39; // bool
    constexpr std::ptrdiff_t m_iInitialGlowState = 0xc3c; // int32
    constexpr std::ptrdiff_t m_nGlowRange = 0xc40; // int32
    constexpr std::ptrdiff_t m_nGlowRangeMin = 0xc44; // int32
    constexpr std::ptrdiff_t m_glowColor = 0xc48; // Color
    constexpr std::ptrdiff_t m_nGlowTeam = 0xc4c; // int32
}

// CHostageAlias_info_hostage_spawn (size: 0x2e00)
namespace CHostageAlias_info_hostage_spawn {
}

// CFilterTeam (size: 0x4e8)
namespace CFilterTeam {
    constexpr std::ptrdiff_t m_iFilterTeam = 0x4e0; // int32
}

// CFuncConveyor (size: 0x780)
namespace CFuncConveyor {
    constexpr std::ptrdiff_t m_szConveyorModels = 0x730; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x738; // float32
    constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x73c; // QAngle
    constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x748; // Vector
    constexpr std::ptrdiff_t m_flTargetSpeed = 0x754; // float32
    constexpr std::ptrdiff_t m_nTransitionStartTick = 0x758; // GameTick_t
    constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x75c; // int32
    constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x760; // float32
    constexpr std::ptrdiff_t m_hConveyorModels = 0x768; // CNetworkUtlVectorBase< CHandle< CBaseEntity > >
}

// CTriggerPhysics (size: 0x8f0)
namespace CTriggerPhysics {
    constexpr std::ptrdiff_t m_gravityScale = 0x8a0; // float32
    constexpr std::ptrdiff_t m_linearLimit = 0x8a4; // float32
    constexpr std::ptrdiff_t m_linearDamping = 0x8a8; // float32
    constexpr std::ptrdiff_t m_angularLimit = 0x8ac; // float32
    constexpr std::ptrdiff_t m_angularDamping = 0x8b0; // float32
    constexpr std::ptrdiff_t m_linearForce = 0x8b4; // float32
    constexpr std::ptrdiff_t m_flFrequency = 0x8b8; // float32
    constexpr std::ptrdiff_t m_flDampingRatio = 0x8bc; // float32
    constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x8c0; // Vector
    constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x8cc; // bool
    constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x8d0; // Vector
    constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x8dc; // Vector
    constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x8e8; // bool
}

// CInfoInstructorHintBombTargetB (size: 0x4a8)
namespace CInfoInstructorHintBombTargetB {
}

// CFuncTimescale (size: 0x4c0)
namespace CFuncTimescale {
    constexpr std::ptrdiff_t m_flDesiredTimescale = 0x4a8; // float32
    constexpr std::ptrdiff_t m_flAcceleration = 0x4ac; // float32
    constexpr std::ptrdiff_t m_flMinBlendRate = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flBlendDeltaMultiplier = 0x4b4; // float32
    constexpr std::ptrdiff_t m_isStarted = 0x4b8; // bool
}

// CInfoInteraction (size: 0x4f8)
namespace CInfoInteraction {
    constexpr std::ptrdiff_t m_strSlotEntityName = 0x4a8; // CUtlSymbolLarge[8]
    constexpr std::ptrdiff_t m_strInteractVData = 0x4e8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flInteractRadius = 0x4f0; // float32
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

// CSoundOpvarSetPointEntity (size: 0x640)
namespace CSoundOpvarSetPointEntity {
    constexpr std::ptrdiff_t m_OnEnter = 0x550; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnExit = 0x568; // CEntityIOOutput
    constexpr std::ptrdiff_t m_bAutoDisable = 0x580; // bool
    constexpr std::ptrdiff_t m_flDistanceMin = 0x5c4; // float32
    constexpr std::ptrdiff_t m_flDistanceMax = 0x5c8; // float32
    constexpr std::ptrdiff_t m_flDistanceMapMin = 0x5cc; // float32
    constexpr std::ptrdiff_t m_flDistanceMapMax = 0x5d0; // float32
    constexpr std::ptrdiff_t m_flOcclusionRadius = 0x5d4; // float32
    constexpr std::ptrdiff_t m_flOcclusionMin = 0x5d8; // float32
    constexpr std::ptrdiff_t m_flOcclusionMax = 0x5dc; // float32
    constexpr std::ptrdiff_t m_flValSetOnDisable = 0x5e0; // float32
    constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x5e4; // bool
    constexpr std::ptrdiff_t m_bReloading = 0x5e5; // bool
    constexpr std::ptrdiff_t m_nSimulationMode = 0x5e8; // int32
    constexpr std::ptrdiff_t m_nVisibilitySamples = 0x5ec; // int32
    constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x5f0; // Vector
    constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x5fc; // float32
    constexpr std::ptrdiff_t m_hDynamicEntity = 0x600; // CEntityHandle
    constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x608; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x610; // float32
    constexpr std::ptrdiff_t m_vPathingSourcePos = 0x614; // Vector
    constexpr std::ptrdiff_t m_vPathingListenerPos = 0x620; // Vector
    constexpr std::ptrdiff_t m_vPathingDirection = 0x62c; // Vector
    constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x638; // int32
}

// CInfoTargetServerOnly (size: 0x4a8)
namespace CInfoTargetServerOnly {
}

// CServerRagdollTrigger (size: 0x890)
namespace CServerRagdollTrigger {
}

// CDynamicPropAlias_dynamic_prop (size: 0xc50)
namespace CDynamicPropAlias_dynamic_prop {
}

// CMarkupVolumeTagged (size: 0x770)
namespace CMarkupVolumeTagged {
    constexpr std::ptrdiff_t m_GroupNames = 0x738; // CUtlVector< CGlobalSymbol >
    constexpr std::ptrdiff_t m_Tags = 0x750; // CUtlVector< CGlobalSymbol >
    constexpr std::ptrdiff_t m_bIsGroup = 0x768; // bool
    constexpr std::ptrdiff_t m_bGroupByPrefab = 0x769; // bool
    constexpr std::ptrdiff_t m_bGroupByVolume = 0x76a; // bool
    constexpr std::ptrdiff_t m_bGroupOtherGroups = 0x76b; // bool
    constexpr std::ptrdiff_t m_bIsInGroup = 0x76c; // bool
}

// CInfoParticleTarget (size: 0x4a8)
namespace CInfoParticleTarget {
}

// CEnvCubemap (size: 0x590)
namespace CEnvCubemap {
    constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x528; // CStrongHandle< InfoForResourceTypeCTextureBase >
    constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x530; // bool
    constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x534; // float32
    constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x538; // Vector
    constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x544; // Vector
    constexpr std::ptrdiff_t m_Entity_bMoveable = 0x550; // bool
    constexpr std::ptrdiff_t m_Entity_nHandshake = 0x554; // int32
    constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x558; // int32
    constexpr std::ptrdiff_t m_Entity_nPriority = 0x55c; // int32
    constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x560; // float32
    constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x564; // Vector
    constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x570; // float32
    constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x574; // bool
    constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x575; // bool
    constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x576; // bool
    constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x577; // bool
    constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x578; // bool
    constexpr std::ptrdiff_t m_Entity_bEnabled = 0x588; // bool
}

// CCSPlayer_DamageReactServices (size: 0x50)
namespace CCSPlayer_DamageReactServices {
}

// CWeaponXM1014 (size: 0x1130)
namespace CWeaponXM1014 {
}

// CTriggerLerpObject (size: 0x930)
namespace CTriggerLerpObject {
    constexpr std::ptrdiff_t m_iszLerpTarget = 0x890; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hLerpTarget = 0x898; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0x8a0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0x8a8; // AttachmentHandle_t
    constexpr std::ptrdiff_t m_flLerpDuration = 0x8ac; // float32
    constexpr std::ptrdiff_t m_bAttachedEntityWasParented = 0x8b0; // bool
    constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0x8b1; // bool
    constexpr std::ptrdiff_t m_bSingleLerpObject = 0x8b2; // bool
    constexpr std::ptrdiff_t m_vecLerpingObjects = 0x8b8; // CUtlVector< lerpdata_t >
    constexpr std::ptrdiff_t m_iszLerpEffect = 0x8d0; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_iszLerpSound = 0x8d8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_bAttachTouchingObject = 0x8e0; // bool
    constexpr std::ptrdiff_t m_hEntityToWaitForDisconnect = 0x8e4; // CHandle< CBaseEntity >
    constexpr std::ptrdiff_t m_OnLerpStarted = 0x8e8; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnLerpFinished = 0x900; // CEntityIOOutput
    constexpr std::ptrdiff_t m_OnDetached = 0x918; // CEntityIOOutput
}

// CPhysicsPropOverride (size: 0xce0)
namespace CPhysicsPropOverride {
}

// CTriggerSave (size: 0x8a0)
namespace CTriggerSave {
    constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x890; // bool
    constexpr std::ptrdiff_t m_fDangerousTimer = 0x894; // float32
    constexpr std::ptrdiff_t m_minHitPoints = 0x898; // int32
}

// CPointHurt (size: 0x4c8)
namespace CPointHurt {
    constexpr std::ptrdiff_t m_nDamage = 0x4a8; // int32
    constexpr std::ptrdiff_t m_bitsDamageType = 0x4ac; // DamageTypes_t
    constexpr std::ptrdiff_t m_flRadius = 0x4b0; // float32
    constexpr std::ptrdiff_t m_flDelay = 0x4b4; // float32
    constexpr std::ptrdiff_t m_strTarget = 0x4b8; // CUtlSymbolLarge
    constexpr std::ptrdiff_t m_pActivator = 0x4c0; // CHandle< CBaseEntity >
}

// CBasePlayerController (size: 0x7c8)
namespace CBasePlayerController {
    constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x4b0; // uint64
    constexpr std::ptrdiff_t m_nTickBase = 0x4b8; // uint32
    constexpr std::ptrdiff_t m_hPawn = 0x4e0; // CHandle< CBasePlayerPawn >
    constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x4e4; // bool
    constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x4e8; // CSplitScreenSlot
    constexpr std::ptrdiff_t m_hSplitOwner = 0x4ec; // CHandle< CBasePlayerController >
    constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x4f0; // CUtlVector< CHandle< CBasePlayerController > >
    constexpr std::ptrdiff_t m_bIsHLTV = 0x508; // bool
    constexpr std::ptrdiff_t m_iConnected = 0x50c; // PlayerConnectedState
    constexpr std::ptrdiff_t m_iszPlayerName = 0x510; // char[128]
    constexpr std::ptrdiff_t m_szNetworkIDString = 0x590; // CUtlString
    constexpr std::ptrdiff_t m_fLerpTime = 0x598; // float32
    constexpr std::ptrdiff_t m_bLagCompensation = 0x59c; // bool
    constexpr std::ptrdiff_t m_bPredict = 0x59d; // bool
    constexpr std::ptrdiff_t m_bIsLowViolence = 0x5a4; // bool
    constexpr std::ptrdiff_t m_bGamePaused = 0x5a5; // bool
    constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x6e0; // ChatIgnoreType_t
    constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x6e4; // float32
    constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x6e8; // float32
    constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x6ec; // int32
    constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x6f0; // bool
    constexpr std::ptrdiff_t m_steamID = 0x700; // uint64
    constexpr std::ptrdiff_t m_bNoClipEnabled = 0x708; // bool
    constexpr std::ptrdiff_t m_iDesiredFOV = 0x70c; // uint32
}

}
}
}

// Generated using CS2 ULTIMATE DUMPER
// 2026-02-10 19:56:33

#pragma once

#include <cstdint>
#include <cstddef>

namespace cs2 {
namespace server_dll {

// CWeaponNOVA (size: 0x1130)
struct CWeaponNOVA {
};

// CPointWorldText (size: 0x9e0)
struct CPointWorldText {
    char[512] m_messageText; // 0x730
    char[64] m_FontName; // 0x930
    char[64] m_BackgroundMaterialName; // 0x970
    bool m_bEnabled; // 0x9b0
    bool m_bFullbright; // 0x9b1
    float m_flWorldUnitsPerPx; // 0x9b4
    float m_flFontSize; // 0x9b8
    float m_flDepthOffset; // 0x9bc
    bool m_bDrawBackground; // 0x9c0
    float m_flBackgroundBorderWidth; // 0x9c4
    float m_flBackgroundBorderHeight; // 0x9c8
    float m_flBackgroundWorldToUV; // 0x9cc
    Color m_Color; // 0x9d0
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x9d4
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x9d8
    PointWorldTextReorientMode_t m_nReorientMode; // 0x9dc
};

// CAmbientGeneric (size: 0x550)
struct CAmbientGeneric {
    float m_radius; // 0x4a8
    float m_flMaxRadius; // 0x4ac
    soundlevel_t m_iSoundLevel; // 0x4b0
    dynpitchvol_t m_dpv; // 0x4b4
    bool m_fActive; // 0x518
    bool m_fLooping; // 0x519
    CUtlSymbolLarge m_iszSound; // 0x520
    CUtlSymbolLarge m_sSourceEntName; // 0x528
    CHandle<T> m_hSoundSource; // 0x530
    CEntityIndex m_nSoundSourceEntIndex; // 0x534
};

// CEnvEntityMaker (size: 0x528)
struct CEnvEntityMaker {
    Vector m_vecEntityMins; // 0x4a8
    Vector m_vecEntityMaxs; // 0x4b4
    CHandle<T> m_hCurrentInstance; // 0x4c0
    CHandle<T> m_hCurrentBlocker; // 0x4c4
    Vector m_vecBlockerOrigin; // 0x4c8
    QAngle m_angPostSpawnDirection; // 0x4d4
    float m_flPostSpawnDirectionVariance; // 0x4e0
    float m_flPostSpawnSpeed; // 0x4e4
    bool m_bPostSpawnUseAngles; // 0x4e8
    CUtlSymbolLarge m_iszTemplate; // 0x4f0
    CEntityIOOutput m_pOutputOnSpawned; // 0x4f8
    CEntityIOOutput m_pOutputOnFailedSpawn; // 0x510
};

// CPulseGraphInstance_GameBlackboard (size: 0x1c8)
struct CPulseGraphInstance_GameBlackboard {
};

// CPointEntity (size: 0x4a8)
struct CPointEntity {
};

// CFilterEnemy (size: 0x500)
struct CFilterEnemy {
    CUtlSymbolLarge m_iszEnemyName; // 0x4e0
    float m_flRadius; // 0x4e8
    float m_flOuterRadius; // 0x4ec
    int32_t m_nMaxSquadmatesPerEnemy; // 0x4f0
    CUtlSymbolLarge m_iszPlayerName; // 0x4f8
};

// CCSGO_WingmanIntroCounterTerroristPosition (size: 0xcc0)
struct CCSGO_WingmanIntroCounterTerroristPosition {
};

// CPulseCell_WaitForCursorsWithTag (size: 0xa0)
struct CPulseCell_WaitForCursorsWithTag {
    bool m_bTagSelfWhenComplete; // 0x98
    PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x9c
};

// CFuncTrackAuto (size: 0x838)
struct CFuncTrackAuto {
};

// CScriptedSequence (size: 0x6f0)
struct CScriptedSequence {
    CUtlSymbolLarge m_iszEntry; // 0x4a8
    CUtlSymbolLarge m_iszPreIdle; // 0x4b0
    CUtlSymbolLarge m_iszPlay; // 0x4b8
    CUtlSymbolLarge m_iszPostIdle; // 0x4c0
    CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4c8
    CUtlSymbolLarge m_iszNextScript; // 0x4d0
    CUtlSymbolLarge m_iszEntity; // 0x4d8
    CUtlSymbolLarge m_iszSyncGroup; // 0x4e0
    ScriptedMoveTo_t m_nMoveTo; // 0x4e8
    SharedMovementGait_t m_nMoveToGait; // 0x4ec
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x4f0
    ForcedCrouchState_t m_nForcedCrouchState; // 0x4f4
    bool m_bIsPlayingPreIdle; // 0x4f8
    bool m_bIsPlayingEntry; // 0x4f9
    bool m_bIsPlayingAction; // 0x4fa
    bool m_bIsPlayingPostIdle; // 0x4fb
    bool m_bDontRotateOther; // 0x4fc
    bool m_bIsRepeatable; // 0x4fd
    bool m_bShouldLeaveCorpse; // 0x4fe
    bool m_bStartOnSpawn; // 0x4ff
    bool m_bDisallowInterrupts; // 0x500
    bool m_bCanOverrideNPCState; // 0x501
    bool m_bDontTeleportAtEnd; // 0x502
    bool m_bHighPriority; // 0x503
    bool m_bHideDebugComplaints; // 0x504
    bool m_bContinueOnDeath; // 0x505
    bool m_bLoopPreIdleSequence; // 0x506
    bool m_bLoopActionSequence; // 0x507
    bool m_bLoopPostIdleSequence; // 0x508
    bool m_bSynchPostIdles; // 0x509
    bool m_bIgnoreLookAt; // 0x50a
    bool m_bIgnoreGravity; // 0x50b
    bool m_bDisableNPCCollisions; // 0x50c
    bool m_bKeepAnimgraphLockedPost; // 0x50d
    bool m_bDontAddModifiers; // 0x50e
    bool m_bDisableAimingWhileMoving; // 0x50f
    bool m_bIgnoreRotation; // 0x510
    float m_flRadius; // 0x514
    float m_flRepeat; // 0x518
    float m_flPlayAnimFadeInTime; // 0x51c
    float m_flMoveInterpTime; // 0x520
    float m_flAngRate; // 0x524
    float m_flMoveSpeed; // 0x528
    bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x52c
    int32_t m_nNotReadySequenceCount; // 0x530
    GameTime_t m_startTime; // 0x534
    bool m_bWaitForBeginSequence; // 0x538
    int32_t m_saved_effects; // 0x53c
    int32_t m_savedFlags; // 0x540
    int32_t m_savedCollisionGroup; // 0x544
    bool m_bInterruptable; // 0x548
    bool m_sequenceStarted; // 0x549
    bool m_bPositionRelativeToOtherEntity; // 0x54a
    CHandle<T> m_hTargetEnt; // 0x54c
    CHandle<T> m_hNextCine; // 0x550
    bool m_bThinking; // 0x554
    bool m_bInitiatedSelfDelete; // 0x555
    bool m_bIsTeleportingDueToMoveTo; // 0x556
    bool m_bAllowCustomInterruptConditions; // 0x557
    CHandle<T> m_hForcedTarget; // 0x558
    bool m_bDontCancelOtherSequences; // 0x55c
    bool m_bForceSynch; // 0x55d
    bool m_bPreventUpdateYawOnFinish; // 0x55e
    bool m_bEnsureOnNavmeshOnFinish; // 0x55f
    ScriptedOnDeath_t m_onDeathBehavior; // 0x560
    ScriptedConflictResponse_t m_ConflictResponse; // 0x564
    CEntityIOOutput m_OnBeginSequence; // 0x568
    CEntityIOOutput m_OnActionStartOrLoop; // 0x580
    CEntityIOOutput m_OnEndSequence; // 0x598
    CEntityIOOutput m_OnPostIdleEndSequence; // 0x5b0
    CEntityIOOutput m_OnCancelSequence; // 0x5c8
    CEntityIOOutput m_OnCancelFailedSequence; // 0x5e0
    CEntityIOOutput[8] m_OnScriptEvent; // 0x5f8
    CTransform m_matOtherToMain; // 0x6c0
    CHandle<T> m_hInteractionMainEntity; // 0x6e0
    int32_t m_iPlayerDeathBehavior; // 0x6e4
    bool m_bSkipFadeIn; // 0x6e8
};

// CFogTrigger (size: 0x8f8)
struct CFogTrigger {
    fogparams_t m_fog; // 0x890
};

// CInfoTeleportDestination (size: 0x4a8)
struct CInfoTeleportDestination {
};

// CPointBroadcastClientCommand (size: 0x4a8)
struct CPointBroadcastClientCommand {
};

// CCSPlayer_PingServices (size: 0x60)
struct CCSPlayer_PingServices {
    GameTime_t[5] m_flPlayerPingTokens; // 0x48
    CHandle<T> m_hPlayerPing; // 0x5c
};

// CHEGrenade (size: 0x1170)
struct CHEGrenade {
};

// CPhysicsSpring (size: 0x4f0)
struct CPhysicsSpring {
    float m_flFrequency; // 0x4b0
    float m_flDampingRatio; // 0x4b4
    float m_flRestLength; // 0x4b8
    CUtlSymbolLarge m_nameAttachStart; // 0x4c0
    CUtlSymbolLarge m_nameAttachEnd; // 0x4c8
    VectorWS m_start; // 0x4d0
    VectorWS m_end; // 0x4dc
    uint32_t m_teleportTick; // 0x4e8
};

// CEnvMuzzleFlash (size: 0x4b8)
struct CEnvMuzzleFlash {
    float m_flScale; // 0x4a8
    CUtlSymbolLarge m_iszParentAttachment; // 0x4b0
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

// CWeaponRevolver (size: 0x1150)
struct CWeaponRevolver {
};

// CFuncTrainControls (size: 0x730)
struct CFuncTrainControls {
};

// CBtActionCombatPositioning (size: 0xb0)
struct CBtActionCombatPositioning {
    CUtlString m_szSensorInputKey; // 0x68
    CUtlString m_szIsAttackingKey; // 0x80
    CountdownTimer m_ActionTimer; // 0x88
    bool m_bCrouching; // 0xa0
};

// PredictedDamageTag_t (size: 0x40)
struct PredictedDamageTag_t {
    GameTick_t nTagTick; // 0x30
    float flFlinchModSmall; // 0x34
    float flFlinchModLarge; // 0x38
    float flFriendlyFireDamageReductionRatio; // 0x3c
};

// CFuncRetakeBarrier (size: 0xc70)
struct CFuncRetakeBarrier {
};

// CTriggerBuoyancy (size: 0x9b0)
struct CTriggerBuoyancy {
    CBuoyancyHelper m_BuoyancyHelper; // 0x890
    float m_flFluidDensity; // 0x9a8
};

// CTonemapController2Alias_env_tonemap_controller2 (size: 0x4c0)
struct CTonemapController2Alias_env_tonemap_controller2 {
};

// CPathTrack (size: 0x4f0)
struct CPathTrack {
    CPathTrack* m_pnext; // 0x4a8
    CPathTrack* m_pprevious; // 0x4b0
    CPathTrack* m_paltpath; // 0x4b8
    float m_flRadius; // 0x4c0
    float m_length; // 0x4c4
    CUtlSymbolLarge m_altName; // 0x4c8
    int32_t m_nIterVal; // 0x4d0
    TrackOrientationType_t m_eOrientationType; // 0x4d4
    CEntityIOOutput m_OnPass; // 0x4d8
};

// CPulseCell_Base (size: 0x48)
struct CPulseCell_Base {
    PulseDocNodeID_t m_nEditorNodeID; // 0x8
};

// CTriggerProximity (size: 0x8c8)
struct CTriggerProximity {
    CHandle<T> m_hMeasureTarget; // 0x890
    CUtlSymbolLarge m_iszMeasureTarget; // 0x898
    float m_fRadius; // 0x8a0
    int32_t m_nTouchers; // 0x8a4
    CEntityOutputTemplate< float32, float32 > m_NearestEntityDistance; // 0x8a8
};

// CTankTrainAI (size: 0x4e8)
struct CTankTrainAI {
    CHandle<T> m_hTrain; // 0x4a8
    CHandle<T> m_hTargetEntity; // 0x4ac
    int32_t m_soundPlaying; // 0x4b0
    CUtlSymbolLarge m_startSoundName; // 0x4c8
    CUtlSymbolLarge m_engineSoundName; // 0x4d0
    CUtlSymbolLarge m_movementSoundName; // 0x4d8
    CUtlSymbolLarge m_targetEntityName; // 0x4e0
};

// CGameText (size: 0x760)
struct CGameText {
    CUtlSymbolLarge m_iszMessage; // 0x740
    hudtextparms_t m_textParms; // 0x748
};

// CGameEnd (size: 0x740)
struct CGameEnd {
};

// CInfoDeathmatchSpawn (size: 0x4b8)
struct CInfoDeathmatchSpawn {
};

// CCSPlayerController_InventoryServices (size: 0xfe0)
struct CCSPlayerController_InventoryServices {
    uint16_t m_unMusicID; // 0x40
    MedalRank_t[6] m_rank; // 0x44
    int32_t m_nPersonaDataPublicLevel; // 0x5c
    int32_t m_nPersonaDataPublicCommendsLeader; // 0x60
    int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64
    int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68
    int32_t m_nPersonaDataXpTrailLevel; // 0x6c
    uint32[1] m_unEquippedPlayerSprayIDs; // 0xf48
    uint64_t m_unCurrentLoadoutHash; // 0xf50
    CUtlVector<T> m_vecServerAuthoritativeWeaponSlots; // 0xf58
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

// CPulse_ResumePoint (size: 0x48)
struct CPulse_ResumePoint {
};

// CBaseFlex (size: 0xab0)
struct CBaseFlex {
    CNetworkUtlVectorBase< float32 > m_flexWeight; // 0xa20
    VectorWS m_vLookTargetPosition; // 0xa38
    GameTime_t m_flAllowResponsesEndTime; // 0xa98
    GameTime_t m_flLastFlexAnimationTime; // 0xa9c
    SceneEventId_t m_nNextSceneEventId; // 0xaa0
    bool m_bUpdateLayerPriorities; // 0xaa4
};

// CTriggerFan (size: 0x950)
struct CTriggerFan {
    Vector m_vFanOriginOffset; // 0x890
    Vector m_vDirection; // 0x89c
    bool m_bPushTowardsInfoTarget; // 0x8a8
    bool m_bPushAwayFromInfoTarget; // 0x8a9
    Quaternion m_qNoiseDelta; // 0x8b0
    CHandle<T> m_hInfoFan; // 0x8c0
    float m_flForce; // 0x8c4
    bool m_bFalloff; // 0x8c8
    CountdownTimer m_RampTimer; // 0x8d0
    VectorWS m_vFanOriginWS; // 0x8e8
    Vector m_vFanOriginLS; // 0x8f4
    Vector m_vFanEndLS; // 0x900
    Vector m_vNoiseDirectionTarget; // 0x90c
    CUtlSymbolLarge m_iszInfoFan; // 0x918
    float m_flRopeForceScale; // 0x920
    float m_flParticleForceScale; // 0x924
    float m_flPlayerForce; // 0x928
    bool m_bPlayerWindblock; // 0x92c
    float m_flNPCForce; // 0x930
    float m_flRampTime; // 0x934
    float m_fNoiseDegrees; // 0x938
    float m_fNoiseSpeed; // 0x93c
    bool m_bPushPlayer; // 0x940
    bool m_bRampDown; // 0x941
    int32_t m_nManagerFanIdx; // 0x944
};

// CPhysHingeAlias_phys_hinge_local (size: 0x678)
struct CPhysHingeAlias_phys_hinge_local {
};

// CLogicCase (size: 0x8f0)
struct CLogicCase {
    CUtlSymbolLarge[32] m_nCase; // 0x4a8
    int32_t m_nShuffleCases; // 0x5a8
    int32_t m_nLastShuffleCase; // 0x5ac
    uint8[32] m_uchShuffleCaseMap; // 0x5b0
    CEntityIOOutput[32] m_OnCase; // 0x5d0
    CUtlString m_OnDefault; // 0x8d0
};

// CInfoGameEventProxy (size: 0x4b8)
struct CInfoGameEventProxy {
    CUtlSymbolLarge m_iszEventName; // 0x4a8
    float m_flRange; // 0x4b0
};

// CWeaponBizon (size: 0x1150)
struct CWeaponBizon {
};

// CGamePlayerZone (size: 0x7a8)
struct CGamePlayerZone {
    CEntityIOOutput m_OnPlayerInZone; // 0x738
    CEntityIOOutput m_OnPlayerOutZone; // 0x750
    CEntityOutputTemplate< int32, int32 > m_PlayersInCount; // 0x768
    CEntityOutputTemplate< int32, int32 > m_PlayersOutCount; // 0x788
};

// CBaseToggle (size: 0x7b0)
struct CBaseToggle {
    TOGGLE_STATE m_toggle_state; // 0x730
    float m_flMoveDistance; // 0x734
    float m_flWait; // 0x738
    float m_flLip; // 0x73c
    bool m_bAlwaysFireBlockedOutputs; // 0x740
    Vector m_vecPosition1; // 0x744
    Vector m_vecPosition2; // 0x750
    QAngle m_vecMoveAng; // 0x75c
    QAngle m_vecAngle1; // 0x768
    QAngle m_vecAngle2; // 0x774
    float m_flHeight; // 0x780
    CHandle<T> m_hActivator; // 0x784
    Vector m_vecFinalDest; // 0x788
    QAngle m_vecFinalAngle; // 0x794
    int32_t m_movementType; // 0x7a0
    CUtlSymbolLarge m_sMaster; // 0x7a8
};

// CPulseServerCursor (size: 0xe0)
struct CPulseServerCursor {
    CHandle<T> m_hActivator; // 0xd8
    CHandle<T> m_hCaller; // 0xdc
};

// CPulseCell_PlaySequence (size: 0xf8)
struct CPulseCell_PlaySequence {
    CUtlString m_SequenceName; // 0x48
    PulseNodeDynamicOutflows_t m_PulseAnimEvents; // 0x50
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
};

// CInferno (size: 0x13b8)
struct CInferno {
    Vector[64] m_firePositions; // 0x730
    Vector[64] m_fireParentPositions; // 0xa30
    bool[64] m_bFireIsBurning; // 0xd30
    Vector[64] m_BurnNormal; // 0xd70
    int32_t m_fireCount; // 0x1070
    int32_t m_nInfernoType; // 0x1074
    int32_t m_nFireEffectTickBegin; // 0x1078
    float m_nFireLifetime; // 0x107c
    bool m_bInPostEffectTime; // 0x1080
    bool m_bWasCreatedInSmoke; // 0x1081
    Extent m_extent; // 0x1288
    CountdownTimer m_damageTimer; // 0x12a0
    CountdownTimer m_damageRampTimer; // 0x12b8
    Vector m_splashVelocity; // 0x12d0
    Vector m_InitialSplashVelocity; // 0x12dc
    Vector m_startPos; // 0x12e8
    Vector m_vecOriginalSpawnLocation; // 0x12f4
    IntervalTimer m_activeTimer; // 0x1300
    int32_t m_fireSpawnOffset; // 0x1310
    int32_t m_nMaxFlames; // 0x1314
    int32_t m_nSpreadCount; // 0x1318
    CountdownTimer m_BookkeepingTimer; // 0x1320
    CountdownTimer m_NextSpreadTimer; // 0x1338
    uint16_t m_nSourceItemDefIndex; // 0x1350
};

// CTouchExpansionComponent (size: 0x50)
struct CTouchExpansionComponent {
};

// CPulseCell_Outflow_PlaySceneBase (size: 0xf0)
struct CPulseCell_Outflow_PlaySceneBase {
    CPulse_ResumePoint m_OnFinished; // 0x48
    CPulse_ResumePoint m_OnCanceled; // 0x90
    CUtlVector<T> m_Triggers; // 0xd8
};

// CPulseCell_LerpCameraSettings (size: 0xb8)
struct CPulseCell_LerpCameraSettings {
    float m_flSeconds; // 0x90
    PointCameraSettings_t m_Start; // 0x94
    PointCameraSettings_t m_End; // 0xa4
};

// CWeaponSCAR20 (size: 0x1150)
struct CWeaponSCAR20 {
};

// CFuncInteractionLayerClip (size: 0x748)
struct CFuncInteractionLayerClip {
    bool m_bDisabled; // 0x730
    CUtlSymbolLarge m_iszInteractsAs; // 0x738
    CUtlSymbolLarge m_iszInteractsWith; // 0x740
};

// CCSObserver_UseServices (size: 0x48)
struct CCSObserver_UseServices {
};

// CTriggerDetectBulletFire (size: 0x8b0)
struct CTriggerDetectBulletFire {
    bool m_bPlayerFireOnly; // 0x890
    CEntityIOOutput m_OnDetectedBulletFire; // 0x898
};

// CCSPlayer_UseServices (size: 0x58)
struct CCSPlayer_UseServices {
    CHandle<T> m_hLastKnownUseEntity; // 0x48
    GameTime_t m_flLastUseTimeStamp; // 0x4c
    GameTime_t m_flTimeLastUsedWindow; // 0x50
};

// CWeaponAWP (size: 0x1150)
struct CWeaponAWP {
};

// CPulseCell_PickBestOutflowSelector (size: 0x68)
struct CPulseCell_PickBestOutflowSelector {
    PulseBestOutflowRules_t m_nCheckType; // 0x48
    PulseSelectorOutflowList_t m_OutflowList; // 0x50
};

// CInfoFan (size: 0x500)
struct CInfoFan {
    float m_fFanForceMaxRadius; // 0x4e8
    float m_fFanForceMinRadius; // 0x4ec
    float m_flCurveDistRange; // 0x4f0
    CUtlSymbolLarge m_FanForceCurveString; // 0x4f8
};

// CGameRules (size: 0xd0)
struct CGameRules {
    CNetworkVarChainer _m_pChainEntity; // 0x8
    char[128] m_szQuestName; // 0x30
    int32_t m_nQuestPhase; // 0xb0
    uint32_t m_nLastMatchTime; // 0xb4
    uint64_t m_nLastMatchTime_MatchID64; // 0xb8
    int32_t m_nTotalPausedTicks; // 0xc0
    int32_t m_nPauseStartTick; // 0xc4
    bool m_bGamePaused; // 0xc8
};

// CFish (size: 0xb30)
struct CFish {
    CHandle<T> m_pool; // 0xa20
    uint32_t m_id; // 0xa24
    float m_x; // 0xa28
    float m_y; // 0xa2c
    float m_z; // 0xa30
    float m_angle; // 0xa34
    float m_angleChange; // 0xa38
    Vector m_forward; // 0xa3c
    Vector m_perp; // 0xa48
    Vector m_poolOrigin; // 0xa54
    float m_waterLevel; // 0xa60
    float m_speed; // 0xa64
    float m_desiredSpeed; // 0xa68
    float m_calmSpeed; // 0xa6c
    float m_panicSpeed; // 0xa70
    float m_avoidRange; // 0xa74
    CountdownTimer m_turnTimer; // 0xa78
    bool m_turnClockwise; // 0xa90
    CountdownTimer m_goTimer; // 0xa98
    CountdownTimer m_moveTimer; // 0xab0
    CountdownTimer m_panicTimer; // 0xac8
    CountdownTimer m_disperseTimer; // 0xae0
    CountdownTimer m_proximityTimer; // 0xaf8
    CUtlVector<T> m_visible; // 0xb10
};

// CCSBot (size: 0x6df8)
struct CCSBot {
    VectorWS m_eyePosition; // 0x108
    char[64] m_name; // 0x114
    float m_combatRange; // 0x154
    bool m_isRogue; // 0x158
    CountdownTimer m_rogueTimer; // 0x160
    bool m_diedLastRound; // 0x17c
    float m_safeTime; // 0x180
    bool m_wasSafe; // 0x184
    bool m_blindFire; // 0x18c
    CountdownTimer m_surpriseTimer; // 0x190
    bool m_bAllowActive; // 0x1a8
    bool m_isFollowing; // 0x1a9
    CHandle<T> m_leader; // 0x1ac
    float m_followTimestamp; // 0x1b0
    float m_allowAutoFollowTime; // 0x1b4
    CountdownTimer m_hurryTimer; // 0x1b8
    CountdownTimer m_alertTimer; // 0x1d0
    CountdownTimer m_sneakTimer; // 0x1e8
    CountdownTimer m_panicTimer; // 0x200
    float m_stateTimestamp; // 0x578
    bool m_isAttacking; // 0x57c
    bool m_isOpeningDoor; // 0x57d
    CHandle<T> m_taskEntity; // 0x584
    VectorWS m_goalPosition; // 0x594
    CHandle<T> m_goalEntity; // 0x5a0
    CHandle<T> m_avoid; // 0x5a4
    float m_avoidTimestamp; // 0x5a8
    bool m_isStopping; // 0x5ac
    bool m_hasVisitedEnemySpawn; // 0x5ad
    IntervalTimer m_stillTimer; // 0x5b0
    bool m_bEyeAnglesUnderPathFinderControl; // 0x5c0
    int32_t m_pathIndex; // 0x5ec0
    GameTime_t m_areaEnteredTimestamp; // 0x5ec4
    CountdownTimer m_repathTimer; // 0x5ec8
    CountdownTimer m_avoidFriendTimer; // 0x5ee0
    bool m_isFriendInTheWay; // 0x5ef8
    CountdownTimer m_politeTimer; // 0x5f00
    bool m_isWaitingBehindFriend; // 0x5f18
    float m_pathLadderEnd; // 0x5f44
    CountdownTimer m_mustRunTimer; // 0x5f90
    CountdownTimer m_waitTimer; // 0x5fa8
    CountdownTimer m_updateTravelDistanceTimer; // 0x5fc0
    float32[64] m_playerTravelDistance; // 0x5fd8
    uint8_t m_travelDistancePhase; // 0x60d8
    uint8_t m_hostageEscortCount; // 0x6270
    float m_hostageEscortCountTimestamp; // 0x6274
    int32_t m_desiredTeam; // 0x6278
    bool m_hasJoined; // 0x627c
    bool m_isWaitingForHostage; // 0x627d
    CountdownTimer m_inhibitWaitingForHostageTimer; // 0x6280
    CountdownTimer m_waitForHostageTimer; // 0x6298
    Vector m_noisePosition; // 0x62b0
    float m_noiseTravelDistance; // 0x62bc
    float m_noiseTimestamp; // 0x62c0
    CCSPlayerPawn* m_noiseSource; // 0x62c8
    CountdownTimer m_noiseBendTimer; // 0x62e0
    Vector m_bentNoisePosition; // 0x62f8
    bool m_bendNoisePositionValid; // 0x6304
    float m_lookAroundStateTimestamp; // 0x6308
    float m_lookAheadAngle; // 0x630c
    float m_forwardAngle; // 0x6310
    float m_inhibitLookAroundTimestamp; // 0x6314
    Vector m_lookAtSpot; // 0x631c
    float m_lookAtSpotDuration; // 0x632c
    float m_lookAtSpotTimestamp; // 0x6330
    float m_lookAtSpotAngleTolerance; // 0x6334
    bool m_lookAtSpotClearIfClose; // 0x6338
    bool m_lookAtSpotAttack; // 0x6339
    char* m_lookAtDesc; // 0x6340
    float m_peripheralTimestamp; // 0x6348
    uint8_t m_approachPointCount; // 0x64d0
    Vector m_approachPointViewPosition; // 0x64d4
    IntervalTimer m_viewSteadyTimer; // 0x64e0
    CountdownTimer m_tossGrenadeTimer; // 0x64f8
    CountdownTimer m_isAvoidingGrenade; // 0x6518
    float m_spotCheckTimestamp; // 0x6538
    int32_t m_checkedHidingSpotCount; // 0x6940
    float m_lookPitch; // 0x6944
    float m_lookPitchVel; // 0x6948
    float m_lookYaw; // 0x694c
    float m_lookYawVel; // 0x6950
    Vector m_targetSpot; // 0x6954
    Vector m_targetSpotVelocity; // 0x6960
    Vector m_targetSpotPredicted; // 0x696c
    QAngle m_aimError; // 0x6978
    QAngle m_aimGoal; // 0x6984
    GameTime_t m_targetSpotTime; // 0x6990
    float m_aimFocus; // 0x6994
    float m_aimFocusInterval; // 0x6998
    GameTime_t m_aimFocusNextUpdate; // 0x699c
    CountdownTimer m_ignoreEnemiesTimer; // 0x69a8
    CHandle<T> m_enemy; // 0x69c0
    bool m_isEnemyVisible; // 0x69c4
    uint8_t m_visibleEnemyParts; // 0x69c5
    Vector m_lastEnemyPosition; // 0x69c8
    float m_lastSawEnemyTimestamp; // 0x69d4
    float m_firstSawEnemyTimestamp; // 0x69d8
    float m_currentEnemyAcquireTimestamp; // 0x69dc
    float m_enemyDeathTimestamp; // 0x69e0
    float m_friendDeathTimestamp; // 0x69e4
    bool m_isLastEnemyDead; // 0x69e8
    int32_t m_nearbyEnemyCount; // 0x69ec
    CHandle<T> m_bomber; // 0x6bf8
    int32_t m_nearbyFriendCount; // 0x6bfc
    CHandle<T> m_closestVisibleFriend; // 0x6c00
    CHandle<T> m_closestVisibleHumanFriend; // 0x6c04
    IntervalTimer m_attentionInterval; // 0x6c08
    CHandle<T> m_attacker; // 0x6c18
    float m_attackedTimestamp; // 0x6c1c
    IntervalTimer m_burnedByFlamesTimer; // 0x6c20
    int32_t m_lastVictimID; // 0x6c30
    bool m_isAimingAtEnemy; // 0x6c34
    bool m_isRapidFiring; // 0x6c35
    IntervalTimer m_equipTimer; // 0x6c38
    CountdownTimer m_zoomTimer; // 0x6c48
    GameTime_t m_fireWeaponTimestamp; // 0x6c60
    CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x6c68
    bool m_bIsSleeping; // 0x6c80
    bool m_isEnemySniperVisible; // 0x6c81
    CountdownTimer m_sawEnemySniperTimer; // 0x6c88
    uint8_t m_enemyQueueIndex; // 0x6d40
    uint8_t m_enemyQueueCount; // 0x6d41
    uint8_t m_enemyQueueAttendIndex; // 0x6d42
    bool m_isStuck; // 0x6d43
    GameTime_t m_stuckTimestamp; // 0x6d44
    Vector m_stuckSpot; // 0x6d48
    CountdownTimer m_wiggleTimer; // 0x6d58
    CountdownTimer m_stuckJumpTimer; // 0x6d70
    GameTime_t m_nextCleanupCheckTimestamp; // 0x6d88
    float32[10] m_avgVel; // 0x6d8c
    int32_t m_avgVelIndex; // 0x6db4
    int32_t m_avgVelCount; // 0x6db8
    Vector m_lastOrigin; // 0x6dbc
    float m_lastRadioRecievedTimestamp; // 0x6dcc
    float m_lastRadioSentTimestamp; // 0x6dd0
    CHandle<T> m_radioSubject; // 0x6dd4
    Vector m_radioPosition; // 0x6dd8
    float m_voiceEndTimestamp; // 0x6de4
    int32_t m_lastValidReactionQueueFrame; // 0x6df0
};

// CHandleTest (size: 0x4b0)
struct CHandleTest {
    CHandle<T> m_Handle; // 0x4a8
    bool m_bSendHandle; // 0x4ac
};

// CLogicNPCCounter (size: 0x728)
struct CLogicNPCCounter {
    CEntityIOOutput m_OnMinCountAll; // 0x4a8
    CEntityIOOutput m_OnMaxCountAll; // 0x4c0
    CEntityOutputTemplate< float32, float32 > m_OnFactorAll; // 0x4d8
    CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDistAll; // 0x4f8
    CEntityIOOutput m_OnMinCount_1; // 0x518
    CEntityIOOutput m_OnMaxCount_1; // 0x530
    CEntityOutputTemplate< float32, float32 > m_OnFactor_1; // 0x548
    CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_1; // 0x568
    CEntityIOOutput m_OnMinCount_2; // 0x588
    CEntityIOOutput m_OnMaxCount_2; // 0x5a0
    CEntityOutputTemplate< float32, float32 > m_OnFactor_2; // 0x5b8
    CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_2; // 0x5d8
    CEntityIOOutput m_OnMinCount_3; // 0x5f8
    CEntityIOOutput m_OnMaxCount_3; // 0x610
    CEntityOutputTemplate< float32, float32 > m_OnFactor_3; // 0x628
    CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_3; // 0x648
    CEntityHandle m_hSource; // 0x668
    CUtlSymbolLarge m_iszSourceEntityName; // 0x670
    float m_flDistanceMax; // 0x678
    bool m_bDisabled; // 0x67c
    int32_t m_nMinCountAll; // 0x680
    int32_t m_nMaxCountAll; // 0x684
    int32_t m_nMinFactorAll; // 0x688
    int32_t m_nMaxFactorAll; // 0x68c
    CUtlSymbolLarge m_iszNPCClassname_1; // 0x698
    int32_t m_nNPCState_1; // 0x6a0
    bool m_bInvertState_1; // 0x6a4
    int32_t m_nMinCount_1; // 0x6a8
    int32_t m_nMaxCount_1; // 0x6ac
    int32_t m_nMinFactor_1; // 0x6b0
    int32_t m_nMaxFactor_1; // 0x6b4
    float m_flDefaultDist_1; // 0x6bc
    CUtlSymbolLarge m_iszNPCClassname_2; // 0x6c0
    int32_t m_nNPCState_2; // 0x6c8
    bool m_bInvertState_2; // 0x6cc
    int32_t m_nMinCount_2; // 0x6d0
    int32_t m_nMaxCount_2; // 0x6d4
    int32_t m_nMinFactor_2; // 0x6d8
    int32_t m_nMaxFactor_2; // 0x6dc
    float m_flDefaultDist_2; // 0x6e4
    CUtlSymbolLarge m_iszNPCClassname_3; // 0x6e8
    int32_t m_nNPCState_3; // 0x6f0
    bool m_bInvertState_3; // 0x6f4
    int32_t m_nMinCount_3; // 0x6f8
    int32_t m_nMaxCount_3; // 0x6fc
    int32_t m_nMinFactor_3; // 0x700
    int32_t m_nMaxFactor_3; // 0x704
    float m_flDefaultDist_3; // 0x70c
};

// CCSPlayer_RadioServices (size: 0x68)
struct CCSPlayer_RadioServices {
    GameTime_t m_flGotHostageTalkTimer; // 0x48
    GameTime_t m_flDefusingTalkTimer; // 0x4c
    GameTime_t m_flC4PlantTalkTimer; // 0x50
    GameTime_t[3] m_flRadioTokenSlots; // 0x54
    bool m_bIgnoreRadio; // 0x60
};

// CWeaponSG556 (size: 0x1150)
struct CWeaponSG556 {
};

// CRagdollConstraint (size: 0x530)
struct CRagdollConstraint {
    float m_xmin; // 0x508
    float m_xmax; // 0x50c
    float m_ymin; // 0x510
    float m_ymax; // 0x514
    float m_zmin; // 0x518
    float m_zmax; // 0x51c
    float m_xfriction; // 0x520
    float m_yfriction; // 0x524
    float m_zfriction; // 0x528
};

// CFuncVehicleClip (size: 0x730)
struct CFuncVehicleClip {
};

// CDEagle (size: 0x1150)
struct CDEagle {
};

// CWeaponFamas (size: 0x1150)
struct CWeaponFamas {
};

// CEnvSplash (size: 0x4b0)
struct CEnvSplash {
    float m_flScale; // 0x4a8
};

// CPointCameraVFOV (size: 0x510)
struct CPointCameraVFOV {
    float m_flVerticalFOV; // 0x508
};

// CCSGO_WingmanIntroTerroristPosition (size: 0xcc0)
struct CCSGO_WingmanIntroTerroristPosition {
};

// CTestPulseIOAPI (size: 0x8)
struct CTestPulseIOAPI {
};

// CCSWeaponBaseShotgun (size: 0x1130)
struct CCSWeaponBaseShotgun {
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

// CFuncMoveLinear (size: 0x838)
struct CFuncMoveLinear {
    MoveLinearAuthoredPos_t m_authoredPosition; // 0x7b0
    QAngle m_angMoveEntitySpace; // 0x7b4
    Vector m_vecMoveDirParentSpace; // 0x7c0
    CUtlSymbolLarge m_soundStart; // 0x7d0
    CUtlSymbolLarge m_soundStop; // 0x7d8
    CUtlSymbolLarge m_currentSound; // 0x7e0
    float m_flBlockDamage; // 0x7e8
    float m_flStartPosition; // 0x7ec
    CEntityIOOutput m_OnFullyOpen; // 0x7f8
    CEntityIOOutput m_OnFullyClosed; // 0x810
    bool m_bCreateMovableNavMesh; // 0x828
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x829
    bool m_bCreateNavObstacle; // 0x82a
};

// CPhysMotorAPI (size: 0x8)
struct CPhysMotorAPI {
};

// CPulseCell_WaitForObservable (size: 0x108)
struct CPulseCell_WaitForObservable {
    PulseObservableBoolExpression_t m_Condition; // 0x48
    CPulse_ResumePoint m_OnTrue; // 0xc0
};

// CScriptItem (size: 0xad0)
struct CScriptItem {
    MoveType_t m_MoveTypeOverride; // 0xac0
};

// CDynamicPropAlias_prop_dynamic_override (size: 0xc50)
struct CDynamicPropAlias_prop_dynamic_override {
};

// CBaseTrigger (size: 0x890)
struct CBaseTrigger {
    CEntityIOOutput m_OnStartTouch; // 0x7b0
    CEntityIOOutput m_OnStartTouchAll; // 0x7c8
    CEntityIOOutput m_OnEndTouch; // 0x7e0
    CEntityIOOutput m_OnEndTouchAll; // 0x7f8
    CEntityIOOutput m_OnTouching; // 0x810
    CEntityIOOutput m_OnTouchingEachEntity; // 0x828
    CEntityIOOutput m_OnNotTouching; // 0x840
    CUtlVector<T> m_hTouchingEntities; // 0x858
    CUtlSymbolLarge m_iFilterName; // 0x870
    CHandle<T> m_hFilter; // 0x878
    bool m_bDisabled; // 0x87c
    bool m_bUseAsyncQueries; // 0x888
};

// CPointPush (size: 0x4d0)
struct CPointPush {
    bool m_bEnabled; // 0x4a8
    float m_flMagnitude; // 0x4ac
    float m_flRadius; // 0x4b0
    float m_flInnerRadius; // 0x4b4
    float m_flConeOfInfluence; // 0x4b8
    CUtlSymbolLarge m_iszFilterName; // 0x4c0
    CHandle<T> m_hFilter; // 0x4c8
};

// CPulseCell_Step_EntFire (size: 0x50)
struct CPulseCell_Step_EntFire {
    CUtlString m_Input; // 0x48
};

// CCSObserver_ObserverServices (size: 0x80)
struct CCSObserver_ObserverServices {
};

// CPlayerPing (size: 0x4d0)
struct CPlayerPing {
    CHandle<T> m_hPlayer; // 0x4b0
    CHandle<T> m_hPingedEntity; // 0x4b4
    int32_t m_iType; // 0x4b8
    bool m_bUrgent; // 0x4bc
    char[18] m_szPlaceName; // 0x4bd
};

// CHitboxComponent (size: 0x18)
struct CHitboxComponent {
    float m_flBoundsExpandRadius; // 0x14
};

// CRopeKeyframe (size: 0x788)
struct CRopeKeyframe {
    uint16_t m_RopeFlags; // 0x738
    CUtlSymbolLarge m_iNextLinkName; // 0x740
    int16 m_Slack; // 0x748
    float m_Width; // 0x74c
    float m_TextureScale; // 0x750
    uint8_t m_nSegments; // 0x754
    bool m_bConstrainBetweenEndpoints; // 0x755
    CUtlSymbolLarge m_strRopeMaterialModel; // 0x758
    CStrongHandle<T> m_iRopeMaterialModelIndex; // 0x760
    uint8_t m_Subdiv; // 0x768
    uint8_t m_nChangeCount; // 0x769
    int16 m_RopeLength; // 0x76a
    uint8_t m_fLockedPoints; // 0x76c
    bool m_bCreatedFromMapFile; // 0x76d
    float m_flScrollSpeed; // 0x770
    bool m_bStartPointValid; // 0x774
    bool m_bEndPointValid; // 0x775
    CHandle<T> m_hStartPoint; // 0x778
    CHandle<T> m_hEndPoint; // 0x77c
    AttachmentHandle_t m_iStartAttachment; // 0x780
    AttachmentHandle_t m_iEndAttachment; // 0x781
};

// CSmokeGrenade (size: 0x1180)
struct CSmokeGrenade {
};

// CBaseCombatCharacter (size: 0xb70)
struct CBaseCombatCharacter {
    bool m_bForceServerRagdoll; // 0xab0
    CHandle<T> m_hMyWearables; // 0xab8
    float m_impactEnergyScale; // 0xad0
    bool m_bApplyStressDamage; // 0xad4
    bool m_bDeathEventsDispatched; // 0xad5
    CUtlVector<T> m_pVecRelationships; // 0xb18
    CUtlSymbolLarge m_strRelationships; // 0xb20
    Hull_t m_eHull; // 0xb28
    uint32_t m_nNavHullIdx; // 0xb2c
    CMovementStatsProperty m_movementStats; // 0xb30
};

// ServerAuthoritativeWeaponSlot_t (size: 0x38)
struct ServerAuthoritativeWeaponSlot_t {
    uint16_t unClass; // 0x30
    uint16_t unSlot; // 0x32
    uint16_t unItemDefIdx; // 0x34
};

// CPathQueryComponent (size: 0xa0)
struct CPathQueryComponent {
};

// CLogicRelay (size: 0x4b0)
struct CLogicRelay {
    bool m_bDisabled; // 0x4a8
    bool m_bWaitForRefire; // 0x4a9
    bool m_bTriggerOnce; // 0x4aa
    bool m_bFastRetrigger; // 0x4ab
    bool m_bPassthoughCaller; // 0x4ac
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

// CTestPulseIO (size: 0x590)
struct CTestPulseIO {
    CEntityIOOutput m_OnVariantVoid; // 0x4a8
    CEntityOutputTemplate< bool, bool > m_OnVariantBool; // 0x4c0
    CEntityOutputTemplate< int32, int32 > m_OnVariantInt; // 0x4e0
    CEntityOutputTemplate< float32, float32 > m_OnVariantFloat; // 0x500
    CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnVariantString; // 0x520
    CEntityOutputTemplate< Color, Color > m_OnVariantColor; // 0x540
    CEntityOutputTemplate< Vector, Vector > m_OnVariantVector; // 0x560
    bool m_bAllowEmptyInputs; // 0x588
};

// CWeaponUMP45 (size: 0x1150)
struct CWeaponUMP45 {
};

// CGamePlayerEquip (size: 0x758)
struct CGamePlayerEquip {
};

// CPointEntityFinder (size: 0x4e8)
struct CPointEntityFinder {
    CHandle<T> m_hEntity; // 0x4a8
    CUtlSymbolLarge m_iFilterName; // 0x4b0
    CHandle<T> m_hFilter; // 0x4b8
    CUtlSymbolLarge m_iRefName; // 0x4c0
    CHandle<T> m_hReference; // 0x4c8
    EntFinderMethod_t m_FindMethod; // 0x4cc
    CEntityIOOutput m_OnFoundEntity; // 0x4d0
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

// CKnife (size: 0x1140)
struct CKnife {
    bool m_bFirstAttack; // 0x1130
};

// CLogicPlayerProxy (size: 0x518)
struct CLogicPlayerProxy {
    CEntityIOOutput m_PlayerHasAmmo; // 0x4a8
    CEntityIOOutput m_PlayerHasNoAmmo; // 0x4c0
    CEntityIOOutput m_PlayerDied; // 0x4d8
    CEntityOutputTemplate< int32, int32 > m_RequestedPlayerHealth; // 0x4f0
    CHandle<T> m_hPlayer; // 0x510
};

// CCSGO_TeamIntroCharacterPosition (size: 0xcc0)
struct CCSGO_TeamIntroCharacterPosition {
};

// CBasePlayerControllerAPI (size: 0x8)
struct CBasePlayerControllerAPI {
};

// CHostageRescueZoneShim (size: 0x890)
struct CHostageRescueZoneShim {
};

// CSimpleMarkupVolumeTagged (size: 0x770)
struct CSimpleMarkupVolumeTagged {
};

// CEnvSoundscapeAlias_snd_soundscape (size: 0x538)
struct CEnvSoundscapeAlias_snd_soundscape {
};

// CCSPlayer_HostageServices (size: 0x50)
struct CCSPlayer_HostageServices {
    CHandle<T> m_hCarriedHostage; // 0x48
    CHandle<T> m_hCarriedHostageProp; // 0x4c
};

// CRenderComponent (size: 0xb0)
struct CRenderComponent {
    CNetworkVarChainer _m_pChainEntity; // 0x10
    bool m_bIsRenderingWithViewModels; // 0x50
    uint32_t m_nSplitscreenFlags; // 0x54
    bool m_bEnableRendering; // 0x58
    bool m_bInterpolationReadyToDraw; // 0xa8
};

// CWaterBullet (size: 0xa20)
struct CWaterBullet {
};

// CTriggerSoundscape (size: 0x8b8)
struct CTriggerSoundscape {
    CHandle<T> m_hSoundscape; // 0x890
    CUtlSymbolLarge m_SoundscapeName; // 0x898
    CUtlVector<T> m_spectators; // 0x8a0
};

// CPointTeleportAPI (size: 0x8)
struct CPointTeleportAPI {
};

// CHostageExpresserShim (size: 0xb80)
struct CHostageExpresserShim {
    CAI_Expresser* m_pExpresser; // 0xb70
};

// CPointChildModifier (size: 0x4b0)
struct CPointChildModifier {
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x4a8
};

// CCSPlayerLegacyJump (size: 0x18)
struct CCSPlayerLegacyJump {
    bool m_bOldJumpPressed; // 0x10
    float m_flJumpPressedTime; // 0x14
};

// CWeaponHKP2000 (size: 0x1150)
struct CWeaponHKP2000 {
};

// CShatterGlassShardPhysics (size: 0xd70)
struct CShatterGlassShardPhysics {
    bool m_bDebris; // 0xce0
    uint32_t m_hParentShard; // 0xce4
    shard_model_desc_t m_ShardDesc; // 0xce8
};

// CPathParticleRope (size: 0x590)
struct CPathParticleRope {
    bool m_bStartActive; // 0x4b0
    float m_flMaxSimulationTime; // 0x4b4
    CUtlSymbolLarge m_iszEffectName; // 0x4b8
    CUtlVector<T> m_PathNodes_Name; // 0x4c0
    float m_flParticleSpacing; // 0x4d8
    float m_flSlack; // 0x4dc
    float m_flRadius; // 0x4e0
    Color m_ColorTint; // 0x4e4
    int32_t m_nEffectState; // 0x4e8
    CStrongHandle<T> m_iEffectIndex; // 0x4f0
    CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // 0x4f8
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // 0x510
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // 0x528
    CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // 0x540
    CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // 0x558
    CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // 0x570
};

// CCredits (size: 0x4c8)
struct CCredits {
    CEntityIOOutput m_OnCreditsDone; // 0x4a8
    bool m_bRolledOutroCredits; // 0x4c0
    float m_flLogoLength; // 0x4c4
};

// CWeaponFiveSeven (size: 0x1150)
struct CWeaponFiveSeven {
};

// CFishPool (size: 0x500)
struct CFishPool {
    int32_t m_fishCount; // 0x4b8
    float m_maxRange; // 0x4bc
    float m_swimDepth; // 0x4c0
    float m_waterLevel; // 0x4c4
    bool m_isDormant; // 0x4c8
    CUtlVector<T> m_fishes; // 0x4d0
    CountdownTimer m_visTimer; // 0x4e8
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

// CRagdollPropAlias_physics_prop_ragdoll (size: 0xb70)
struct CRagdollPropAlias_physics_prop_ragdoll {
};

// CBreakableProp (size: 0xba0)
struct CBreakableProp {
    CPropDataComponent m_CPropDataComponent; // 0xa58
    CEntityIOOutput m_OnStartDeath; // 0xa98
    CEntityIOOutput m_OnBreak; // 0xab0
    CEntityOutputTemplate< float32, float32 > m_OnHealthChanged; // 0xac8
    CEntityIOOutput m_OnTakeDamage; // 0xae8
    float m_impactEnergyScale; // 0xb00
    int32_t m_iMinHealthDmg; // 0xb04
    QAngle m_preferredCarryAngles; // 0xb08
    float m_flPressureDelay; // 0xb14
    float m_flDefBurstScale; // 0xb18
    Vector m_vDefBurstOffset; // 0xb1c
    CHandle<T> m_hBreaker; // 0xb28
    PerformanceMode_t m_PerformanceMode; // 0xb2c
    GameTime_t m_flPreventDamageBeforeTime; // 0xb30
    BreakableContentsType_t m_BreakableContentsType; // 0xb34
    CUtlString m_strBreakableContentsPropGroupOverride; // 0xb38
    CUtlString m_strBreakableContentsParticleOverride; // 0xb40
    bool m_bHasBreakPiecesOrCommands; // 0xb48
    float m_explodeDamage; // 0xb4c
    float m_explodeRadius; // 0xb50
    BaseExplosionTypes_t m_nExplosionType; // 0xb54
    float m_explosionDelay; // 0xb58
    CUtlSymbolLarge m_explosionBuildupSound; // 0xb60
    CUtlSymbolLarge m_explosionCustomEffect; // 0xb68
    CUtlSymbolLarge m_explosionCustomSound; // 0xb70
    CUtlSymbolLarge m_explosionModifier; // 0xb78
    CHandle<T> m_hPhysicsAttacker; // 0xb80
    GameTime_t m_flLastPhysicsInfluenceTime; // 0xb84
    float m_flDefaultFadeScale; // 0xb88
    CHandle<T> m_hLastAttacker; // 0xb8c
    CUtlSymbolLarge m_iszPuntSound; // 0xb90
    bool m_bUsePuntSound; // 0xb98
    bool m_bOriginalBlockLOS; // 0xb99
};

// CLightEntity (size: 0x738)
struct CLightEntity {
    CLightComponent* m_CLightComponent; // 0x730
};

// CInfoDynamicShadowHintBox (size: 0x4d8)
struct CInfoDynamicShadowHintBox {
    Vector m_vBoxMins; // 0x4c0
    Vector m_vBoxMaxs; // 0x4cc
};

// CBaseAnimGraphController (size: 0x858)
struct CBaseAnimGraphController {
    AnimationAlgorithm_t m_nAnimationAlgorithm; // 0x18
    CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x20
    CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance; // 0x228
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle; // 0x288
    CUtlVector<T> m_vecSecondarySkeletonNames; // 0x290
    CHandle<T> m_vecSecondarySkeletons; // 0x2a8
    int32_t m_nSecondarySkeletonMasterCount; // 0x2c0
    float m_flSoundSyncTime; // 0x2c4
    uint32_t m_nActiveIKChainMask; // 0x2c8
    HSequence m_hSequence; // 0x2cc
    GameTime_t m_flSeqStartTime; // 0x2d0
    float m_flSeqFixedCycle; // 0x2d4
    AnimLoopMode_t m_nAnimLoopMode; // 0x2d8
    CNetworkedQuantizedFloat m_flPlaybackRate; // 0x2dc
    SequenceFinishNotifyState_t m_nNotifyState; // 0x2e8
    bool m_bNetworkedAnimationInputsChanged; // 0x2e9
    bool m_bNetworkedSequenceChanged; // 0x2ea
    bool m_bLastUpdateSkipped; // 0x2eb
    bool m_bSequenceFinished; // 0x2ec
    GameTick_t m_nPrevAnimUpdateTick; // 0x2f0
    CStrongHandle<T> m_hGraphDefinitionAG2; // 0x590
    CNetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2; // 0x598
    int32_t m_nSerializePoseRecipeSizeAG2; // 0x5b0
    int32_t m_nSerializePoseRecipeVersionAG2; // 0x5b4
    int32_t m_nServerGraphInstanceIteration; // 0x5b8
    int32_t m_nServerSerializationContextIteration; // 0x5bc
    ResourceId_t m_primaryGraphId; // 0x5c0
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds; // 0x5c8
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds; // 0x5e0
    CGlobalSymbol m_sAnimGraph2Identifier; // 0x5f8
    CUtlVector<T> m_vecExternalGraphs; // 0x820
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

// COrnamentProp (size: 0xc60)
struct COrnamentProp {
    CUtlSymbolLarge m_initialOwner; // 0xc50
};

// CCSPlayer_CameraServices (size: 0x1b0)
struct CCSPlayer_CameraServices {
};

// CModelPointEntity (size: 0x730)
struct CModelPointEntity {
};

// CRectLight (size: 0xa28)
struct CRectLight {
    bool m_bShowLight; // 0xa20
};

// CFilterMultiple (size: 0x560)
struct CFilterMultiple {
    filter_t m_nFilterType; // 0x4e0
    CUtlSymbolLarge[10] m_iFilterName; // 0x4e8
    CHandle<T> m_hFilter; // 0x538
};

// CCSPlayerResource (size: 0x540)
struct CCSPlayerResource {
    bool[12] m_bHostageAlive; // 0x4a8
    bool[12] m_isHostageFollowingSomeone; // 0x4b4
    CEntityIndex[12] m_iHostageEntityIDs; // 0x4c0
    Vector m_bombsiteCenterA; // 0x4f0
    Vector m_bombsiteCenterB; // 0x4fc
    int32[4] m_hostageRescueX; // 0x508
    int32[4] m_hostageRescueY; // 0x518
    int32[4] m_hostageRescueZ; // 0x528
    bool m_bEndMatchNextMapAllVoted; // 0x538
    bool m_foundGoalPositions; // 0x539
};

// CPulseCell_FireCursors (size: 0xf8)
struct CPulseCell_FireCursors {
    CUtlVector<T> m_Outflows; // 0x48
    bool m_bWaitForChildOutflows; // 0x60
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
};

// CFuncNavBlocker (size: 0x748)
struct CFuncNavBlocker {
    bool m_bDisabled; // 0x738
    int32_t m_nBlockedTeamNumber; // 0x73c
};

// CMoverPathNode (size: 0x5a0)
struct CMoverPathNode {
    CUtlString m_OnStartFromOrInSegment; // 0x500
    CUtlString m_OnStoppedAtOrInSegment; // 0x520
    CUtlString m_OnPassThrough; // 0x540
    CUtlString m_OnPassThroughForward; // 0x560
    CUtlString m_OnPassThroughReverse; // 0x580
};

// CEnvSoundscape (size: 0x538)
struct CEnvSoundscape {
    CEntityIOOutput m_OnPlay; // 0x4a8
    float m_flRadius; // 0x4c0
    CUtlSymbolLarge m_soundEventName; // 0x4c8
    bool m_bOverrideWithEvent; // 0x4d0
    int32_t m_soundscapeIndex; // 0x4d4
    int32_t m_soundscapeEntityListId; // 0x4d8
    CUtlSymbolLarge[8] m_positionNames; // 0x4e0
    CHandle<T> m_hProxySoundscape; // 0x520
    bool m_bDisabled; // 0x524
    CUtlSymbolLarge m_soundscapeName; // 0x528
    uint32_t m_soundEventHash; // 0x530
};

// CFuncBrush (size: 0x750)
struct CFuncBrush {
    BrushSolidities_e m_iSolidity; // 0x730
    int32_t m_iDisabled; // 0x734
    bool m_bSolidBsp; // 0x738
    CUtlSymbolLarge m_iszExcludedClass; // 0x740
    bool m_bInvertExclusion; // 0x748
    bool m_bScriptedMovement; // 0x749
};

// CBodyComponentPoint (size: 0x1b0)
struct CBodyComponentPoint {
    CGameSceneNode m_sceneNode; // 0x80
};

// CPhysBox (size: 0x8d0)
struct CPhysBox {
    int32_t m_damageType; // 0x808
    int32_t m_damageToEnableMotion; // 0x80c
    float m_flForceToEnableMotion; // 0x810
    Vector m_vHoverPosePosition; // 0x814
    QAngle m_angHoverPoseAngles; // 0x820
    bool m_bNotSolidToWorld; // 0x82c
    bool m_bEnableUseOutput; // 0x82d
    HoverPoseFlags_t m_nHoverPoseFlags; // 0x82e
    float m_flTouchOutputPerEntityDelay; // 0x830
    CEntityIOOutput m_OnDamaged; // 0x838
    CEntityIOOutput m_OnAwakened; // 0x850
    CEntityIOOutput m_OnMotionEnabled; // 0x868
    CEntityIOOutput m_OnPlayerUse; // 0x880
    CEntityIOOutput m_OnStartTouch; // 0x898
    CHandle<T> m_hCarryingPlayer; // 0x8b0
};

// CSoundEventAABBEntity (size: 0x570)
struct CSoundEventAABBEntity {
    Vector m_vMins; // 0x558
    Vector m_vMaxs; // 0x564
};

// CItemSoda (size: 0xa20)
struct CItemSoda {
};

// CPulseCell_Timeline::TimelineEvent_t (size: 0x50)
struct CPulseCell_Timeline_TimelineEvent_t {
    float m_flTimeFromPrevious; // 0x0
    CPulse_OutflowConnection m_EventOutflow; // 0x8
};

// COmniLight (size: 0xa30)
struct COmniLight {
    float m_flInnerAngle; // 0xa20
    float m_flOuterAngle; // 0xa24
    bool m_bShowLight; // 0xa28
};

// CTriggerVolume (size: 0x740)
struct CTriggerVolume {
    CUtlSymbolLarge m_iFilterName; // 0x730
    CHandle<T> m_hFilter; // 0x738
};

// CBtNodeCondition (size: 0x60)
struct CBtNodeCondition {
    bool m_bNegated; // 0x58
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

// CEnvExplosion (size: 0x788)
struct CEnvExplosion {
    int32_t m_iMagnitude; // 0x730
    float m_flPlayerDamage; // 0x734
    int32_t m_iRadiusOverride; // 0x738
    float m_flInnerRadius; // 0x73c
    float m_flDamageForce; // 0x740
    CHandle<T> m_hInflictor; // 0x744
    DamageTypes_t m_iCustomDamageType; // 0x748
    bool m_bCreateDebris; // 0x74c
    CUtlSymbolLarge m_iszCustomEffectName; // 0x758
    CUtlSymbolLarge m_iszCustomSoundName; // 0x760
    bool m_bSuppressParticleImpulse; // 0x768
    Class_T m_iClassIgnore; // 0x76c
    Class_T m_iClassIgnore2; // 0x770
    CUtlSymbolLarge m_iszEntityIgnoreName; // 0x778
    CHandle<T> m_hEntityIgnore; // 0x780
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

// CFootstepControl (size: 0x8a0)
struct CFootstepControl {
    CUtlSymbolLarge m_source; // 0x890
    CUtlSymbolLarge m_destination; // 0x898
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

// CParticleSystem (size: 0xca8)
struct CParticleSystem {
    char[512] m_szSnapshotFileName; // 0x730
    bool m_bActive; // 0x930
    bool m_bFrozen; // 0x931
    float m_flFreezeTransitionDuration; // 0x934
    int32_t m_nStopType; // 0x938
    bool m_bAnimateDuringGameplayPause; // 0x93c
    CStrongHandle<T> m_iEffectIndex; // 0x940
    GameTime_t m_flStartTime; // 0x948
    float m_flPreSimTime; // 0x94c
    Vector[4] m_vServerControlPoints; // 0x950
    uint8[4] m_iServerControlPointAssignments; // 0x980
    CHandle<T> m_hControlPointEnts; // 0x984
    bool m_bNoSave; // 0xa84
    bool m_bNoFreeze; // 0xa85
    bool m_bNoRamp; // 0xa86
    bool m_bStartActive; // 0xa87
    CUtlSymbolLarge m_iszEffectName; // 0xa88
    CUtlSymbolLarge[64] m_iszControlPointNames; // 0xa90
    int32_t m_nDataCP; // 0xc90
    Vector m_vecDataCPValue; // 0xc94
    int32_t m_nTintCP; // 0xca0
    Color m_clrTint; // 0xca4
};

// CTriggerBrush (size: 0x780)
struct CTriggerBrush {
    CEntityIOOutput m_OnStartTouch; // 0x730
    CEntityIOOutput m_OnEndTouch; // 0x748
    CEntityIOOutput m_OnUse; // 0x760
    int32_t m_iInputFilter; // 0x778
    int32_t m_iDontMessageParent; // 0x77c
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

// CSoundAreaEntityBase (size: 0x4c8)
struct CSoundAreaEntityBase {
    bool m_bDisabled; // 0x4a8
    CUtlSymbolLarge m_iszSoundAreaType; // 0x4b0
    Vector m_vPos; // 0x4b8
};

// CWeaponM4A1Silencer (size: 0x1150)
struct CWeaponM4A1Silencer {
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

// CItemAssaultSuit (size: 0xac0)
struct CItemAssaultSuit {
};

// CBeam (size: 0x7d0)
struct CBeam {
    float m_flFrameRate; // 0x730
    float m_flHDRColorScale; // 0x734
    GameTime_t m_flFireTime; // 0x738
    float m_flDamage; // 0x73c
    uint8_t m_nNumBeamEnts; // 0x740
    CStrongHandle<T> m_hBaseMaterial; // 0x748
    CStrongHandle<T> m_nHaloIndex; // 0x750
    BeamType_t m_nBeamType; // 0x758
    uint32_t m_nBeamFlags; // 0x75c
    CHandle<T> m_hAttachEntity; // 0x760
    AttachmentHandle_t[10] m_nAttachIndex; // 0x788
    float m_fWidth; // 0x794
    float m_fEndWidth; // 0x798
    float m_fFadeLength; // 0x79c
    float m_fHaloScale; // 0x7a0
    float m_fAmplitude; // 0x7a4
    float m_fStartFrame; // 0x7a8
    float m_fSpeed; // 0x7ac
    float m_flFrame; // 0x7b0
    BeamClipStyle_t m_nClipStyle; // 0x7b4
    bool m_bTurnedOff; // 0x7b8
    VectorWS m_vecEndPos; // 0x7bc
    CHandle<T> m_hEndEntity; // 0x7c8
    int32_t m_nDissolveType; // 0x7cc
};

// CLogicEventListener (size: 0x4e8)
struct CLogicEventListener {
    CUtlString m_strEventName; // 0x4b8
    bool m_bIsEnabled; // 0x4c0
    int32_t m_nTeam; // 0x4c4
    CUtlString m_OnEventFired; // 0x4c8
};

// CCSGO_TeamSelectTerroristPosition (size: 0xcc0)
struct CCSGO_TeamSelectTerroristPosition {
};

// CInfoData (size: 0x840)
struct CInfoData {
};

// CWeaponNegev (size: 0x1150)
struct CWeaponNegev {
};

// CWeaponElite (size: 0x1150)
struct CWeaponElite {
};

// CBasePlayerPawn (size: 0xd20)
struct CBasePlayerPawn {
    CPlayer_WeaponServices* m_pWeaponServices; // 0xb70
    CPlayer_ItemServices* m_pItemServices; // 0xb78
    CPlayer_AutoaimServices* m_pAutoaimServices; // 0xb80
    CPlayer_ObserverServices* m_pObserverServices; // 0xb88
    CPlayer_WaterServices* m_pWaterServices; // 0xb90
    CPlayer_UseServices* m_pUseServices; // 0xb98
    CPlayer_FlashlightServices* m_pFlashlightServices; // 0xba0
    CPlayer_CameraServices* m_pCameraServices; // 0xba8
    CPlayer_MovementServices* m_pMovementServices; // 0xbb0
    CUtlVector<T> m_ServerViewAngleChanges; // 0xbc0
    QAngle v_angle; // 0xc28
    QAngle v_anglePrevious; // 0xc34
    uint32_t m_iHideHUD; // 0xc40
    sky3dparams_t m_skybox3d; // 0xc48
    GameTime_t m_fTimeLastHurt; // 0xcd8
    GameTime_t m_flDeathTime; // 0xcdc
    GameTime_t m_fNextSuicideTime; // 0xce0
    bool m_fInitHUD; // 0xce4
    CAI_Expresser* m_pExpresser; // 0xce8
    CHandle<T> m_hController; // 0xcf0
    CHandle<T> m_hDefaultController; // 0xcf4
    float m_fHltvReplayDelay; // 0xcfc
    float m_fHltvReplayEnd; // 0xd00
    CEntityIndex m_iHltvReplayEntity; // 0xd04
    CUtlVector<T> m_sndOpvarLatchData; // 0xd08
};

// WeaponPurchaseCount_t (size: 0x38)
struct WeaponPurchaseCount_t {
    uint16_t m_nItemDefIndex; // 0x30
    uint16_t m_nCount; // 0x32
};

// CBasePulseGraphInstance (size: 0x118)
struct CBasePulseGraphInstance {
};

// FilterHealth (size: 0x4f0)
struct FilterHealth {
    bool m_bAdrenalineActive; // 0x4e0
    int32_t m_iHealthMin; // 0x4e4
    int32_t m_iHealthMax; // 0x4e8
};

// CCSSprite (size: 0x7a0)
struct CCSSprite {
};

// CMathColorBlend (size: 0x4d8)
struct CMathColorBlend {
    float m_flInMin; // 0x4a8
    float m_flInMax; // 0x4ac
    Color m_OutColor1; // 0x4b0
    Color m_OutColor2; // 0x4b4
    CEntityOutputTemplate< Color, Color > m_OutValue; // 0x4b8
};

// CShower (size: 0x730)
struct CShower {
};

// CPulseCell_Inflow_GraphHook (size: 0x90)
struct CPulseCell_Inflow_GraphHook {
    PulseSymbol_t m_HookName; // 0x80
};

// CScriptNavBlocker (size: 0x758)
struct CScriptNavBlocker {
    Vector m_vExtent; // 0x748
};

// CEntityBlocker (size: 0x730)
struct CEntityBlocker {
};

// SignatureOutflow_Resume (size: 0x48)
struct SignatureOutflow_Resume {
};

// CPathSimpleAPI (size: 0x8)
struct CPathSimpleAPI {
};

// CCSObserverPawn (size: 0xea0)
struct CCSObserverPawn {
};

// CTriggerActiveWeaponDetect (size: 0x8b0)
struct CTriggerActiveWeaponDetect {
    CEntityIOOutput m_OnTouchedActiveWeapon; // 0x890
    CUtlSymbolLarge m_iszWeaponClassName; // 0x8a8
};

// CFuncLadderAlias_func_useableladder (size: 0x7c0)
struct CFuncLadderAlias_func_useableladder {
};

// CSpriteOriented (size: 0x7a0)
struct CSpriteOriented {
};

// CPointServerCommand (size: 0x4a8)
struct CPointServerCommand {
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
    CNetworkUtlVectorBase< Vector2D > m_vecPanelVertices; // 0x40
    CNetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices; // 0x58
    float m_flGlassHalfThickness; // 0x70
    bool m_bHasParent; // 0x74
    bool m_bParentFrozen; // 0x75
    CUtlString m_SurfacePropStringToken; // 0x78
};

// CPlayerSprayDecal (size: 0x808)
struct CPlayerSprayDecal {
    int32_t m_nUniqueID; // 0x730
    uint32_t m_unAccountID; // 0x734
    uint32_t m_unTraceID; // 0x738
    uint32_t m_rtGcTime; // 0x73c
    Vector m_vecEndPos; // 0x740
    Vector m_vecStart; // 0x74c
    Vector m_vecLeft; // 0x758
    Vector m_vecNormal; // 0x764
    int32_t m_nPlayer; // 0x770
    int32_t m_nEntity; // 0x774
    int32_t m_nHitbox; // 0x778
    float m_flCreationTime; // 0x77c
    int32_t m_nTintID; // 0x780
    uint8_t m_nVersion; // 0x784
    uint8[128] m_ubSignature; // 0x785
};

// CFuncWater (size: 0x848)
struct CFuncWater {
    CBuoyancyHelper m_BuoyancyHelper; // 0x730
};

// CCSGameModeRules (size: 0x30)
struct CCSGameModeRules {
    CNetworkVarChainer _m_pChainEntity; // 0x8
};

// CEconEntity (size: 0xde0)
struct CEconEntity {
    CAttributeContainer m_AttributeManager; // 0xac0
    uint32_t m_OriginalOwnerXuidLow; // 0xdb8
    uint32_t m_OriginalOwnerXuidHigh; // 0xdbc
    int32_t m_nFallbackPaintKit; // 0xdc0
    int32_t m_nFallbackSeed; // 0xdc4
    float m_flFallbackWear; // 0xdc8
    int32_t m_nFallbackStatTrak; // 0xdcc
    CHandle<T> m_hOldProvidee; // 0xdd0
    int32_t m_iOldOwnerClass; // 0xdd4
};

// CTankTargetChange (size: 0x4c0)
struct CTankTargetChange {
    CVariantBase< CVariantDefaultAllocator > m_newTarget; // 0x4a8
    CUtlSymbolLarge m_newTargetName; // 0x4b8
};

// CCSPlayer_WaterServices (size: 0x80)
struct CCSPlayer_WaterServices {
    GameTime_t m_NextDrownDamageTime; // 0x48
    int32_t m_nDrownDmgRate; // 0x4c
    GameTime_t m_AirFinishedTime; // 0x50
    float m_flWaterJumpTime; // 0x54
    Vector m_vecWaterJumpVel; // 0x58
    float m_flSwimSoundTime; // 0x64
};

// CLogicDistanceCheck (size: 0x508)
struct CLogicDistanceCheck {
    CUtlSymbolLarge m_iszEntityA; // 0x4a8
    CUtlSymbolLarge m_iszEntityB; // 0x4b0
    float m_flZone1Distance; // 0x4b8
    float m_flZone2Distance; // 0x4bc
    CEntityIOOutput m_InZone1; // 0x4c0
    CEntityIOOutput m_InZone2; // 0x4d8
    CEntityIOOutput m_InZone3; // 0x4f0
};

// CEnvCombinedLightProbeVolume (size: 0x15f0)
struct CEnvCombinedLightProbeVolume {
    Color m_Entity_Color; // 0x1520
    float m_Entity_flBrightness; // 0x1524
    CStrongHandle<T> m_Entity_hCubemapTexture; // 0x1528
    bool m_Entity_bCustomCubemapTexture; // 0x1530
    CStrongHandle<T> m_Entity_hLightProbeTexture_AmbientCube; // 0x1538
    CStrongHandle<T> m_Entity_hLightProbeTexture_SDF; // 0x1540
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_DC; // 0x1548
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_R; // 0x1550
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_G; // 0x1558
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_B; // 0x1560
    CStrongHandle<T> m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1568
    CStrongHandle<T> m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1570
    CStrongHandle<T> m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1578
    Vector m_Entity_vBoxMins; // 0x1580
    Vector m_Entity_vBoxMaxs; // 0x158c
    bool m_Entity_bMoveable; // 0x1598
    int32_t m_Entity_nHandshake; // 0x159c
    int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x15a0
    int32_t m_Entity_nPriority; // 0x15a4
    bool m_Entity_bStartDisabled; // 0x15a8
    float m_Entity_flEdgeFadeDist; // 0x15ac
    Vector m_Entity_vEdgeFadeDists; // 0x15b0
    int32_t m_Entity_nLightProbeSizeX; // 0x15bc
    int32_t m_Entity_nLightProbeSizeY; // 0x15c0
    int32_t m_Entity_nLightProbeSizeZ; // 0x15c4
    int32_t m_Entity_nLightProbeAtlasX; // 0x15c8
    int32_t m_Entity_nLightProbeAtlasY; // 0x15cc
    int32_t m_Entity_nLightProbeAtlasZ; // 0x15d0
    bool m_Entity_bEnabled; // 0x15e9
};

// ViewAngleServerChange_t (size: 0x48)
struct ViewAngleServerChange_t {
    FixAngleSet_t nType; // 0x30
    QAngle qAngle; // 0x34
    uint32_t nIndex; // 0x40
};

// CLogicDistanceAutosave (size: 0x4c0)
struct CLogicDistanceAutosave {
    CUtlSymbolLarge m_iszTargetEntity; // 0x4a8
    float m_flDistanceToPlayer; // 0x4b0
    bool m_bForceNewLevelUnit; // 0x4b4
    bool m_bCheckCough; // 0x4b5
    bool m_bThinkDangerous; // 0x4b6
    float m_flDangerousTime; // 0x4b8
};

// CLogicBranch (size: 0x4f8)
struct CLogicBranch {
    bool m_bInValue; // 0x4a8
    CUtlVector<T> m_Listeners; // 0x4b0
    CEntityIOOutput m_OnTrue; // 0x4c8
    CEntityIOOutput m_OnFalse; // 0x4e0
};

// CPulseCell_Outflow_ScriptedSequence (size: 0x150)
struct CPulseCell_Outflow_ScriptedSequence {
    CUtlString m_szSyncGroup; // 0x48
    int32_t m_nExpectedNumSequencesInSyncGroup; // 0x50
    bool m_bEnsureOnNavmeshOnFinish; // 0x54
    bool m_bDontTeleportAtEnd; // 0x55
    bool m_bDisallowInterrupts; // 0x56
    PulseScriptedSequenceData_t m_scriptedSequenceDataMain; // 0x58
    CUtlVector<T> m_vecAdditionalActors; // 0x90
    CPulse_ResumePoint m_OnFinished; // 0xa8
    CPulse_ResumePoint m_OnCanceled; // 0xf0
    CUtlVector<T> m_Triggers; // 0x138
};

// CFuncTrackChange (size: 0x838)
struct CFuncTrackChange {
    CPathTrack* m_trackTop; // 0x7f8
    CPathTrack* m_trackBottom; // 0x800
    CFuncTrackTrain* m_train; // 0x808
    CUtlSymbolLarge m_trackTopName; // 0x810
    CUtlSymbolLarge m_trackBottomName; // 0x818
    CUtlSymbolLarge m_trainName; // 0x820
    TRAIN_CODE m_code; // 0x828
    int32_t m_targetState; // 0x82c
    int32_t m_use; // 0x830
};

// CFuncTrackTrain (size: 0x858)
struct CFuncTrackTrain {
    CHandle<T> m_ppath; // 0x730
    float m_length; // 0x734
    Vector m_vPosPrev; // 0x738
    QAngle m_angPrev; // 0x744
    Vector m_controlMins; // 0x750
    Vector m_controlMaxs; // 0x75c
    Vector m_lastBlockPos; // 0x768
    int32_t m_lastBlockTick; // 0x774
    float m_flVolume; // 0x778
    float m_flBank; // 0x77c
    float m_oldSpeed; // 0x780
    float m_flBlockDamage; // 0x784
    float m_height; // 0x788
    float m_maxSpeed; // 0x78c
    float m_dir; // 0x790
    CUtlSymbolLarge m_iszSoundMove; // 0x798
    CUtlSymbolLarge m_iszSoundMovePing; // 0x7a0
    CUtlSymbolLarge m_iszSoundStart; // 0x7a8
    CUtlSymbolLarge m_iszSoundStop; // 0x7b0
    CUtlSymbolLarge m_strPathTarget; // 0x7b8
    float m_flMoveSoundMinDuration; // 0x7c0
    float m_flMoveSoundMaxDuration; // 0x7c4
    GameTime_t m_flNextMoveSoundTime; // 0x7c8
    float m_flMoveSoundMinPitch; // 0x7cc
    float m_flMoveSoundMaxPitch; // 0x7d0
    TrainOrientationType_t m_eOrientationType; // 0x7d4
    TrainVelocityType_t m_eVelocityType; // 0x7d8
    CEntityIOOutput m_OnStart; // 0x7f0
    CEntityIOOutput m_OnNext; // 0x808
    CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x820
    bool m_bManualSpeedChanges; // 0x838
    float m_flDesiredSpeed; // 0x83c
    GameTime_t m_flSpeedChangeTime; // 0x840
    float m_flAccelSpeed; // 0x844
    float m_flDecelSpeed; // 0x848
    bool m_bAccelToSpeed; // 0x84c
    GameTime_t m_flNextMPSoundTime; // 0x850
};

// CEnvInstructorHint (size: 0x518)
struct CEnvInstructorHint {
    CUtlSymbolLarge m_iszName; // 0x4a8
    CUtlSymbolLarge m_iszReplace_Key; // 0x4b0
    CUtlSymbolLarge m_iszHintTargetEntity; // 0x4b8
    int32_t m_iTimeout; // 0x4c0
    int32_t m_iDisplayLimit; // 0x4c4
    CUtlSymbolLarge m_iszIcon_Onscreen; // 0x4c8
    CUtlSymbolLarge m_iszIcon_Offscreen; // 0x4d0
    CUtlSymbolLarge m_iszCaption; // 0x4d8
    CUtlSymbolLarge m_iszActivatorCaption; // 0x4e0
    Color m_Color; // 0x4e8
    float m_fIconOffset; // 0x4ec
    float m_fRange; // 0x4f0
    uint8_t m_iPulseOption; // 0x4f4
    uint8_t m_iAlphaOption; // 0x4f5
    uint8_t m_iShakeOption; // 0x4f6
    bool m_bStatic; // 0x4f7
    bool m_bNoOffscreen; // 0x4f8
    bool m_bForceCaption; // 0x4f9
    int32_t m_iInstanceType; // 0x4fc
    bool m_bSuppressRest; // 0x500
    CUtlSymbolLarge m_iszBinding; // 0x508
    bool m_bAllowNoDrawTarget; // 0x510
    bool m_bAutoStart; // 0x511
    bool m_bLocalPlayerOnly; // 0x512
};

// CEnvWind (size: 0x5d8)
struct CEnvWind {
    CEnvWindShared m_EnvWindShared; // 0x4a8
};

// CSoundEventPathCornerEntity (size: 0x5f8)
struct CSoundEventPathCornerEntity {
    CUtlSymbolLarge m_iszPathCorner; // 0x558
    int32_t m_iCountMax; // 0x560
    float m_flDistanceMax; // 0x564
    float m_flDistMaxSqr; // 0x568
    float m_flDotProductMax; // 0x56c
    bool m_bPlaying; // 0x570
    CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // 0x598
};

// CCSPlayerBase_CameraServices (size: 0x1b0)
struct CCSPlayerBase_CameraServices {
    uint32_t m_iFOV; // 0x178
    uint32_t m_iFOVStart; // 0x17c
    GameTime_t m_flFOVTime; // 0x180
    float m_flFOVRate; // 0x184
    CHandle<T> m_hZoomOwner; // 0x188
    CUtlVector<T> m_hTriggerFogList; // 0x190
    CHandle<T> m_hLastFogTrigger; // 0x1a8
};

// CPulseCell_Inflow_BaseEntrypoint (size: 0x80)
struct CPulseCell_Inflow_BaseEntrypoint {
    PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48
    PulseRegisterMap_t m_RegisterMap; // 0x50
};

// CDynamicNavConnectionsVolume (size: 0x8e0)
struct CDynamicNavConnectionsVolume {
    CUtlSymbolLarge m_iszConnectionTarget; // 0x8a8
    CUtlVector<T> m_vecConnections; // 0x8b0
    CGlobalSymbol m_sTransitionType; // 0x8c8
    bool m_bConnectionsEnabled; // 0x8d0
    float m_flTargetAreaSearchRadius; // 0x8d4
    float m_flUpdateDistance; // 0x8d8
    float m_flMaxConnectionDistance; // 0x8dc
};

// CConstraintAnchor (size: 0xa30)
struct CConstraintAnchor {
    float m_massScale; // 0xa20
};

// CPulseCell_WaitForCursorsWithTagBase (size: 0x98)
struct CPulseCell_WaitForCursorsWithTagBase {
    int32_t m_nCursorsAllowedToWait; // 0x48
    CPulse_ResumePoint m_WaitComplete; // 0x50
};

// CCSPlayerPawn (size: 0x1c30)
struct CCSPlayerPawn {
    CCSPlayer_BulletServices* m_pBulletServices; // 0xe78
    CCSPlayer_HostageServices* m_pHostageServices; // 0xe80
    CCSPlayer_BuyServices* m_pBuyServices; // 0xe88
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xe90
    CCSPlayer_RadioServices* m_pRadioServices; // 0xe98
    CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xea0
    uint16_t m_nCharacterDefIndex; // 0xea8
    bool m_bHasFemaleVoice; // 0xeaa
    CUtlString m_strVOPrefix; // 0xeb0
    char[18] m_szLastPlaceName; // 0xeb8
    bool m_bInHostageResetZone; // 0xfa8
    bool m_bInBuyZone; // 0xfa9
    CUtlVector<T> m_TouchingBuyZones; // 0xfb0
    bool m_bWasInBuyZone; // 0xfc8
    bool m_bInHostageRescueZone; // 0xfc9
    bool m_bInBombZone; // 0xfca
    bool m_bWasInHostageRescueZone; // 0xfcb
    int32_t m_iRetakesOffering; // 0xfcc
    int32_t m_iRetakesOfferingCard; // 0xfd0
    bool m_bRetakesHasDefuseKit; // 0xfd4
    bool m_bRetakesMVPLastRound; // 0xfd5
    int32_t m_iRetakesMVPBoostItem; // 0xfd8
    loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xfdc
    GameTime_t m_flHealthShotBoostExpirationTime; // 0xfe0
    float m_flLandingTimeSeconds; // 0xfe4
    QAngle m_aimPunchAngle; // 0xfe8
    QAngle m_aimPunchAngleVel; // 0xff4
    GameTick_t m_aimPunchTickBase; // 0x1000
    float m_aimPunchTickFraction; // 0x1004
    CUtlVector<T> m_aimPunchCache; // 0x1008
    bool m_bIsBuyMenuOpen; // 0x1020
    GameTime_t m_lastLandTime; // 0x16c0
    bool m_bOnGroundLastTick; // 0x16c4
    int32_t m_iPlayerLocked; // 0x16c8
    GameTime_t m_flTimeOfLastInjury; // 0x16d0
    GameTime_t m_flNextSprayDecalTime; // 0x16d4
    bool m_bNextSprayDecalTimeExpedited; // 0x16d8
    int32_t m_nRagdollDamageBone; // 0x16dc
    Vector m_vRagdollDamageForce; // 0x16e0
    Vector m_vRagdollDamagePosition; // 0x16ec
    char[64] m_szRagdollDamageWeaponName; // 0x16f8
    bool m_bRagdollDamageHeadshot; // 0x1738
    Vector m_vRagdollServerOrigin; // 0x173c
    CEconItemView m_EconGloves; // 0x1748
    uint8_t m_nEconGlovesChanged; // 0x19f0
    QAngle m_qDeathEyeAngles; // 0x19f4
    bool m_bSkipOneHeadConstraintUpdate; // 0x1a00
    bool m_bLeftHanded; // 0x1a01
    GameTime_t m_fSwitchedHandednessTime; // 0x1a04
    float m_flViewmodelOffsetX; // 0x1a08
    float m_flViewmodelOffsetY; // 0x1a0c
    float m_flViewmodelOffsetZ; // 0x1a10
    float m_flViewmodelFOV; // 0x1a14
    bool m_bIsWalking; // 0x1a18
    float m_fLastGivenDefuserTime; // 0x1a1c
    float m_fLastGivenBombTime; // 0x1a20
    float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x1a24
    uint32_t m_iDisplayHistoryBits; // 0x1a28
    float m_flLastAttackedTeammate; // 0x1a2c
    GameTime_t m_allowAutoFollowTime; // 0x1a30
    bool m_bResetArmorNextSpawn; // 0x1a34
    CEntityIndex m_nLastKillerIndex; // 0x1a38
    EntitySpottedState_t m_entitySpottedState; // 0x1a40
    int32_t m_nSpotRules; // 0x1a58
    bool m_bIsScoped; // 0x1a5c
    bool m_bResumeZoom; // 0x1a5d
    bool m_bIsDefusing; // 0x1a5e
    bool m_bIsGrabbingHostage; // 0x1a5f
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1a60
    GameTime_t m_flEmitSoundTime; // 0x1a64
    bool m_bInNoDefuseArea; // 0x1a68
    CEntityIndex m_iBombSiteIndex; // 0x1a6c
    int32_t m_nWhichBombZone; // 0x1a70
    bool m_bInBombZoneTrigger; // 0x1a74
    bool m_bWasInBombZoneTrigger; // 0x1a75
    int32_t m_iShotsFired; // 0x1a78
    float m_flFlinchStack; // 0x1a7c
    float m_flVelocityModifier; // 0x1a80
    float m_flHitHeading; // 0x1a84
    int32_t m_nHitBodyPart; // 0x1a88
    Vector m_vecTotalBulletForce; // 0x1a8c
    bool m_bWaitForNoAttack; // 0x1a98
    float m_ignoreLadderJumpTime; // 0x1a9c
    bool m_bKilledByHeadshot; // 0x1aa0
    int32_t m_LastHitBox; // 0x1aa4
    CCSBot* m_pBot; // 0x1aa8
    bool m_bBotAllowActive; // 0x1ab0
    QAngle m_thirdPersonHeading; // 0x1ab4
    float m_flSlopeDropOffset; // 0x1ac0
    float m_flSlopeDropHeight; // 0x1ac4
    Vector m_vHeadConstraintOffset; // 0x1ac8
    int32_t m_nLastPickupPriority; // 0x1ad4
    float m_flLastPickupPriorityTime; // 0x1ad8
    int32_t m_ArmorValue; // 0x1adc
    uint16_t m_unCurrentEquipmentValue; // 0x1ae0
    uint16_t m_unRoundStartEquipmentValue; // 0x1ae2
    uint16_t m_unFreezetimeEndEquipmentValue; // 0x1ae4
    int32_t m_iLastWeaponFireUsercmd; // 0x1ae8
    bool m_bIsSpawning; // 0x1aec
    int32_t m_iDeathFlags; // 0x1af8
    bool m_bHasDeathInfo; // 0x1afc
    float m_flDeathInfoTime; // 0x1b00
    Vector m_vecDeathInfoOrigin; // 0x1b04
    uint32[5] m_vecPlayerPatchEconIndices; // 0x1b10
    Color m_GunGameImmunityColor; // 0x1b24
    GameTime_t m_grenadeParameterStashTime; // 0x1b28
    bool m_bGrenadeParametersStashed; // 0x1b2c
    QAngle m_angStashedShootAngles; // 0x1b30
    Vector m_vecStashedGrenadeThrowPosition; // 0x1b3c
    Vector m_vecStashedVelocity; // 0x1b48
    QAngle[2] m_angShootAngleHistory; // 0x1b54
    Vector[2] m_vecThrowPositionHistory; // 0x1b6c
    Vector[2] m_vecVelocityHistory; // 0x1b84
    CUtlVector<T> m_PredictedDamageTags; // 0x1ba0
    int32_t m_nHighestAppliedDamageTagTick; // 0x1c08
    bool m_bCommittingSuicideOnTeamChange; // 0x1c0c
    bool m_wasNotKilledNaturally; // 0x1c0d
    GameTime_t m_fImmuneToGunGameDamageTime; // 0x1c10
    bool m_bGunGameImmunity; // 0x1c14
    float m_fMolotovDamageTime; // 0x1c18
    QAngle m_angEyeAngles; // 0x1c1c
};

// CEnvLightProbeVolume (size: 0x1538)
struct CEnvLightProbeVolume {
    CStrongHandle<T> m_Entity_hLightProbeTexture_AmbientCube; // 0x14a0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SDF; // 0x14a8
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_DC; // 0x14b0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_R; // 0x14b8
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_G; // 0x14c0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_B; // 0x14c8
    CStrongHandle<T> m_Entity_hLightProbeDirectLightIndicesTexture; // 0x14d0
    CStrongHandle<T> m_Entity_hLightProbeDirectLightScalarsTexture; // 0x14d8
    CStrongHandle<T> m_Entity_hLightProbeDirectLightShadowsTexture; // 0x14e0
    Vector m_Entity_vBoxMins; // 0x14e8
    Vector m_Entity_vBoxMaxs; // 0x14f4
    bool m_Entity_bMoveable; // 0x1500
    int32_t m_Entity_nHandshake; // 0x1504
    int32_t m_Entity_nPriority; // 0x1508
    bool m_Entity_bStartDisabled; // 0x150c
    int32_t m_Entity_nLightProbeSizeX; // 0x1510
    int32_t m_Entity_nLightProbeSizeY; // 0x1514
    int32_t m_Entity_nLightProbeSizeZ; // 0x1518
    int32_t m_Entity_nLightProbeAtlasX; // 0x151c
    int32_t m_Entity_nLightProbeAtlasY; // 0x1520
    int32_t m_Entity_nLightProbeAtlasZ; // 0x1524
    bool m_Entity_bEnabled; // 0x1531
};

// SpawnPoint (size: 0x4b8)
struct SpawnPoint {
    int32_t m_iPriority; // 0x4a8
    bool m_bEnabled; // 0x4ac
    int32_t m_nType; // 0x4b0
};

// CFuncMoverAPI (size: 0x8)
struct CFuncMoverAPI {
};

// CGameSceneNode (size: 0x130)
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
    int16 m_nParentAttachmentOrBone; // 0xec
    bool m_bDebugAbsOriginChanges; // 0xee
    bool m_bDormant; // 0xef
    bool m_bForceParentToBeNetworked; // 0xf0
    bitfield:1 m_bDirtyHierarchy; // 0x0
    bitfield:1 m_bDirtyBoneMergeInfo; // 0x0
    bitfield:1 m_bNetworkedPositionChanged; // 0x0
    bitfield:1 m_bNetworkedAnglesChanged; // 0x0
    bitfield:1 m_bNetworkedScaleChanged; // 0x0
    bitfield:1 m_bWillBeCallingPostDataUpdate; // 0x0
    bitfield:1 m_bBoneMergeFlex; // 0x0
    bitfield:2 m_nLatchAbsOrigin; // 0x0
    bitfield:1 m_bDirtyBoneMergeBoneToRoot; // 0x0
    uint8_t m_nHierarchicalDepth; // 0xf3
    uint8_t m_nHierarchyType; // 0xf4
    uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xf5
    CUtlString m_name; // 0xf8
    CUtlString m_hierarchyAttachName; // 0x10c
    float m_flZOffset; // 0x110
    float m_flClientLocalScale; // 0x114
    Vector m_vRenderOrigin; // 0x118
};

// CWeaponM249 (size: 0x1150)
struct CWeaponM249 {
};

// CRopeKeyframeAlias_move_rope (size: 0x788)
struct CRopeKeyframeAlias_move_rope {
};

// CPulseServerFuncs_Sounds (size: 0x1)
struct CPulseServerFuncs_Sounds {
};

// CPulsePhysicsConstraintsFuncs (size: 0x1)
struct CPulsePhysicsConstraintsFuncs {
};

// CPlayer_ObserverServices (size: 0x58)
struct CPlayer_ObserverServices {
    uint8_t m_iObserverMode; // 0x48
    CHandle<T> m_hObserverTarget; // 0x4c
    ObserverMode_t m_iObserverLastMode; // 0x50
    bool m_bForcedObserverMode; // 0x54
};

// CLogicScript (size: 0x4a8)
struct CLogicScript {
};

// CAttributeManager::cached_attribute_float_t (size: 0x18)
struct CAttributeManager_cached_attribute_float_t {
    float flIn; // 0x0
    CUtlSymbolLarge iAttribHook; // 0x8
    float flOut; // 0x10
};

// CPulseGraphInstance_ServerEntity (size: 0x1b8)
struct CPulseGraphInstance_ServerEntity {
    CHandle<T> m_hOwner; // 0x190
    bool m_bActivated; // 0x194
    CUtlSymbolLarge m_sNameFixupStaticPrefix; // 0x198
    CUtlSymbolLarge m_sNameFixupParent; // 0x1a0
    CUtlSymbolLarge m_sNameFixupLocal; // 0x1a8
    CUtlSymbolLarge m_sProceduralWorldNameForRelays; // 0x1b0
};

// CSceneEntityAlias_logic_choreographed_scene (size: 0x730)
struct CSceneEntityAlias_logic_choreographed_scene {
};

// CRagdollManager (size: 0x4b8)
struct CRagdollManager {
    int8 m_iCurrentMaxRagdollCount; // 0x4a8
    int32_t m_iMaxRagdollCount; // 0x4ac
    bool m_bSaveImportant; // 0x4b0
    bool m_bCanTakeDamage; // 0x4b1
};

// CPostProcessingVolume (size: 0x8d0)
struct CPostProcessingVolume {
    CStrongHandle<T> m_hPostSettings; // 0x8a0
    float m_flFadeDuration; // 0x8a8
    float m_flMinLogExposure; // 0x8ac
    float m_flMaxLogExposure; // 0x8b0
    float m_flMinExposure; // 0x8b4
    float m_flMaxExposure; // 0x8b8
    float m_flExposureCompensation; // 0x8bc
    float m_flExposureFadeSpeedUp; // 0x8c0
    float m_flExposureFadeSpeedDown; // 0x8c4
    float m_flTonemapEVSmoothingRange; // 0x8c8
    bool m_bMaster; // 0x8cc
    bool m_bExposureControl; // 0x8cd
};

// CPointProximitySensor (size: 0x4d0)
struct CPointProximitySensor {
    bool m_bDisabled; // 0x4a8
    CHandle<T> m_hTargetEntity; // 0x4ac
    CEntityOutputTemplate< float32, float32 > m_Distance; // 0x4b0
};

// CPulse_InvokeBinding (size: 0xb0)
struct CPulse_InvokeBinding {
    PulseRegisterMap_t m_RegisterMap; // 0x0
    PulseSymbol_t m_FuncName; // 0x30
    PulseRuntimeCellIndex_t m_nCellIndex; // 0x40
    PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x44
    int32_t m_nSrcInstruction; // 0x48
};

// CTriggerLook (size: 0x910)
struct CTriggerLook {
    CHandle<T> m_hLookTarget; // 0x8a8
    float m_flFieldOfView; // 0x8ac
    float m_flLookTime; // 0x8b0
    float m_flLookTimeTotal; // 0x8b4
    GameTime_t m_flLookTimeLast; // 0x8b8
    float m_flTimeoutDuration; // 0x8bc
    bool m_bTimeoutFired; // 0x8c0
    bool m_bIsLooking; // 0x8c1
    bool m_b2DFOV; // 0x8c2
    bool m_bUseVelocity; // 0x8c3
    bool m_bTestOcclusion; // 0x8c4
    bool m_bTestAllVisibleOcclusion; // 0x8c5
    CEntityIOOutput m_OnTimeout; // 0x8c8
    CEntityIOOutput m_OnStartLook; // 0x8e0
    CEntityIOOutput m_OnEndLook; // 0x8f8
};

// CPulseCell_Outflow_PlayVCD (size: 0x188)
struct CPulseCell_Outflow_PlayVCD {
    CStrongHandle<T> m_hChoreoScene; // 0xf0
    CPulse_OutflowConnection m_OnPaused; // 0xf8
    CPulse_OutflowConnection m_OnResumed; // 0x140
};

// CMultiplayRules (size: 0xd0)
struct CMultiplayRules {
};

// CMolotovGrenade (size: 0x1170)
struct CMolotovGrenade {
};

// CPhysTorque (size: 0x518)
struct CPhysTorque {
    VectorWS m_axis; // 0x508
};

// CMultiSource (size: 0x5d0)
struct CMultiSource {
    CHandle<T> m_rgEntities; // 0x4a8
    int32[32] m_rgTriggered; // 0x528
    CEntityIOOutput m_OnTrigger; // 0x5a8
    int32_t m_iTotal; // 0x5c0
    CUtlSymbolLarge m_globalstate; // 0x5c8
};

// CBaseCSGrenade (size: 0x1170)
struct CBaseCSGrenade {
    bool m_bRedraw; // 0x1130
    bool m_bIsHeldByPlayer; // 0x1131
    bool m_bPinPulled; // 0x1132
    bool m_bJumpThrow; // 0x1133
    bool m_bThrowAnimating; // 0x1134
    GameTime_t m_fThrowTime; // 0x1138
    float m_flThrowStrength; // 0x113c
    GameTime_t m_fDropTime; // 0x1140
    GameTime_t m_fPinPullTime; // 0x1144
    bool m_bJustPulledPin; // 0x1148
    GameTick_t m_nNextHoldTick; // 0x114c
    float m_flNextHoldFrac; // 0x1150
    CHandle<T> m_hSwitchToWeaponAfterThrow; // 0x1154
};

// CLogicAuto (size: 0x5a0)
struct CLogicAuto {
    CEntityIOOutput m_OnMapSpawn; // 0x4a8
    CEntityIOOutput m_OnDemoMapSpawn; // 0x4c0
    CEntityIOOutput m_OnNewGame; // 0x4d8
    CEntityIOOutput m_OnLoadGame; // 0x4f0
    CEntityIOOutput m_OnMapTransition; // 0x508
    CEntityIOOutput m_OnBackgroundMap; // 0x520
    CEntityIOOutput m_OnMultiNewMap; // 0x538
    CEntityIOOutput m_OnMultiNewRound; // 0x550
    CEntityIOOutput m_OnVREnabled; // 0x568
    CEntityIOOutput m_OnVRNotEnabled; // 0x580
    CUtlSymbolLarge m_globalstate; // 0x598
};

// CPhysicsWire (size: 0x4b0)
struct CPhysicsWire {
    int32_t m_nDensity; // 0x4a8
};

// CFuncIllusionary (size: 0x730)
struct CFuncIllusionary {
};

// CInfoDynamicShadowHint (size: 0x4c0)
struct CInfoDynamicShadowHint {
    bool m_bDisabled; // 0x4a8
    float m_flRange; // 0x4ac
    int32_t m_nImportance; // 0x4b0
    int32_t m_nLightChoice; // 0x4b4
    CHandle<T> m_hLight; // 0x4b8
};

// CMarkupVolume (size: 0x738)
struct CMarkupVolume {
    bool m_bDisabled; // 0x730
};

// CPathNode (size: 0x500)
struct CPathNode {
    Vector m_vInTangentLocal; // 0x4a8
    Vector m_vOutTangentLocal; // 0x4b4
    CUtlString m_strParentPathUniqueID; // 0x4c0
    CUtlString m_strPathNodeParameter; // 0x4c8
    CTransform m_xWSPrevParent; // 0x4d0
    CHandle<T> m_hPath; // 0x4f0
};

// CCSGO_TeamSelectCounterTerroristPosition (size: 0xcc0)
struct CCSGO_TeamSelectCounterTerroristPosition {
};

// CTriggerRemove (size: 0x8a8)
struct CTriggerRemove {
    CEntityIOOutput m_OnRemove; // 0x890
};

// CLogicGameEventListener (size: 0x4e8)
struct CLogicGameEventListener {
    CEntityIOOutput m_OnEventFired; // 0x4b8
    CUtlSymbolLarge m_iszGameEventName; // 0x4d0
    CUtlSymbolLarge m_iszGameEventItem; // 0x4d8
    bool m_bEnabled; // 0x4e0
    bool m_bStartDisabled; // 0x4e1
};

// CServerOnlyModelEntity (size: 0x730)
struct CServerOnlyModelEntity {
};

// CPulseCell_IntervalTimer (size: 0xd8)
struct CPulseCell_IntervalTimer {
    CPulse_ResumePoint m_Completed; // 0x48
    SignatureOutflow_Continue m_OnInterval; // 0x90
};

// CMarkupVolumeTagged_Nav (size: 0x778)
struct CMarkupVolumeTagged_Nav {
    NavScopeFlags_t m_nScopes; // 0x770
};

// CInfoPlayerTerrorist (size: 0x4b8)
struct CInfoPlayerTerrorist {
};

// CLogicAutosave (size: 0x4b8)
struct CLogicAutosave {
    bool m_bForceNewLevelUnit; // 0x4a8
    int32_t m_minHitPoints; // 0x4ac
    int32_t m_minHitPointsToCommit; // 0x4b0
};

// CCSGO_TeamIntroTerroristPosition (size: 0xcc0)
struct CCSGO_TeamIntroTerroristPosition {
};

// CPulseTestScriptLib (size: 0x1)
struct CPulseTestScriptLib {
};

// CSingleplayRules (size: 0xd8)
struct CSingleplayRules {
    bool m_bSinglePlayerGameEnding; // 0xd0
};

// CEnvWindShared (size: 0x130)
struct CEnvWindShared {
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
    CEntityIOOutput m_OnGustStart; // 0x40
    CEntityIOOutput m_OnGustEnd; // 0x58
    CHandle<T> m_hEntOwner; // 0x70
};

// CPointPrefab (size: 0x510)
struct CPointPrefab {
    CUtlSymbolLarge m_targetMapName; // 0x4a8
    CUtlSymbolLarge m_forceWorldGroupID; // 0x4b0
    CUtlSymbolLarge m_associatedRelayTargetName; // 0x4b8
    bool m_fixupNames; // 0x4c0
    bool m_bLoadDynamic; // 0x4c1
    CHandle<T> m_associatedRelayEntity; // 0x4c4
};

// CPulseCell_BaseLerp (size: 0x90)
struct CPulseCell_BaseLerp {
    CPulse_ResumePoint m_WakeResume; // 0x48
};

// CEnvInstructorVRHint (size: 0x4e8)
struct CEnvInstructorVRHint {
    CUtlSymbolLarge m_iszName; // 0x4a8
    CUtlSymbolLarge m_iszHintTargetEntity; // 0x4b0
    int32_t m_iTimeout; // 0x4b8
    CUtlSymbolLarge m_iszCaption; // 0x4c0
    CUtlSymbolLarge m_iszStartSound; // 0x4c8
    int32_t m_iLayoutFileType; // 0x4d0
    CUtlSymbolLarge m_iszCustomLayoutFile; // 0x4d8
    int32_t m_iAttachType; // 0x4e0
    float m_flHeightOffset; // 0x4e4
};

// CCSGameRulesProxy (size: 0x4b0)
struct CCSGameRulesProxy {
    CCSGameRules* m_pGameRules; // 0x4a8
};

// CPrecipitation (size: 0x890)
struct CPrecipitation {
};

// CCommentaryViewPosition (size: 0x7a0)
struct CCommentaryViewPosition {
};

// CEnvGlobal (size: 0x4e0)
struct CEnvGlobal {
    CEntityOutputTemplate< int32, int32 > m_outCounter; // 0x4a8
    CUtlSymbolLarge m_globalstate; // 0x4c8
    int32_t m_triggermode; // 0x4d0
    int32_t m_initialstate; // 0x4d4
    int32_t m_counter; // 0x4d8
};

// CLogicNPCCounterOBB (size: 0x758)
struct CLogicNPCCounterOBB {
};

// CPlatTrigger (size: 0x738)
struct CPlatTrigger {
    CHandle<T> m_pPlatform; // 0x730
};

// CSceneEntity (size: 0x730)
struct CSceneEntity {
    CUtlSymbolLarge m_iszSceneFile; // 0x4b0
    CUtlSymbolLarge m_iszTarget1; // 0x4b8
    CUtlSymbolLarge m_iszTarget2; // 0x4c0
    CUtlSymbolLarge m_iszTarget3; // 0x4c8
    CUtlSymbolLarge m_iszTarget4; // 0x4d0
    CUtlSymbolLarge m_iszTarget5; // 0x4d8
    CUtlSymbolLarge m_iszTarget6; // 0x4e0
    CUtlSymbolLarge m_iszTarget7; // 0x4e8
    CUtlSymbolLarge m_iszTarget8; // 0x4f0
    CHandle<T> m_hTarget1; // 0x4f8
    CHandle<T> m_hTarget2; // 0x4fc
    CHandle<T> m_hTarget3; // 0x500
    CHandle<T> m_hTarget4; // 0x504
    CHandle<T> m_hTarget5; // 0x508
    CHandle<T> m_hTarget6; // 0x50c
    CHandle<T> m_hTarget7; // 0x510
    CHandle<T> m_hTarget8; // 0x514
    CUtlSymbolLarge m_sTargetAttachment; // 0x518
    bool m_bIsPlayingBack; // 0x520
    bool m_bPaused; // 0x521
    bool m_bMultiplayer; // 0x522
    bool m_bAutogenerated; // 0x523
    float m_flForceClientTime; // 0x524
    float m_flCurrentTime; // 0x528
    float m_flFrameTime; // 0x52c
    bool m_bCancelAtNextInterrupt; // 0x530
    float m_fPitch; // 0x534
    bool m_bAutomated; // 0x538
    int32_t m_nAutomatedAction; // 0x53c
    float m_flAutomationDelay; // 0x540
    float m_flAutomationTime; // 0x544
    int32_t m_nSpeechPriority; // 0x548
    bool m_bPausedViaInput; // 0x54c
    bool m_bPauseAtNextInterrupt; // 0x54d
    bool m_bWaitingForActor; // 0x54e
    bool m_bWaitingForInterrupt; // 0x54f
    bool m_bInterruptedActorsScenes; // 0x550
    bool m_bBreakOnNonIdle; // 0x551
    bool m_bSceneFinished; // 0x552
    CHandle<T> m_hActorList; // 0x558
    CUtlVector<T> m_hRemoveActorList; // 0x570
    uint16_t m_nSceneStringIndex; // 0x5b8
    CEntityIOOutput m_OnStart; // 0x5c0
    CEntityIOOutput m_OnCompletion; // 0x5d8
    CEntityIOOutput m_OnCanceled; // 0x5f0
    CEntityIOOutput m_OnPaused; // 0x608
    CEntityIOOutput m_OnResumed; // 0x620
    CHandle<T> m_hInterruptScene; // 0x6c8
    int32_t m_nInterruptCount; // 0x6cc
    bool m_bSceneMissing; // 0x6d0
    bool m_bInterrupted; // 0x6d1
    bool m_bCompletedEarly; // 0x6d2
    bool m_bInterruptSceneFinished; // 0x6d3
    bool m_bRestoring; // 0x6d4
    CUtlVector<T> m_hNotifySceneCompletion; // 0x6d8
    CUtlVector<T> m_hListManagers; // 0x6f0
    CUtlSymbolLarge m_iszSoundName; // 0x708
    CUtlSymbolLarge m_iszSequenceName; // 0x710
    CHandle<T> m_hActor; // 0x718
    CHandle<T> m_hActivator; // 0x71c
    int32_t m_BusyActor; // 0x720
    SceneOnPlayerDeath_t m_iPlayerDeathBehavior; // 0x724
};

// CChoreoInfoTarget (size: 0x4a8)
struct CChoreoInfoTarget {
};

// CTonemapController2 (size: 0x4c0)
struct CTonemapController2 {
    float m_flAutoExposureMin; // 0x4a8
    float m_flAutoExposureMax; // 0x4ac
    float m_flExposureAdaptationSpeedUp; // 0x4b0
    float m_flExposureAdaptationSpeedDown; // 0x4b4
    float m_flTonemapEVSmoothingRange; // 0x4b8
};

// CMapSharedEnvironment (size: 0x4b8)
struct CMapSharedEnvironment {
    CUtlSymbolLarge m_targetMapName; // 0x4a8
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

// CPhysMagnet (size: 0xa90)
struct CPhysMagnet {
    CEntityIOOutput m_OnMagnetAttach; // 0xa20
    CEntityIOOutput m_OnMagnetDetach; // 0xa38
    float m_massScale; // 0xa50
    float m_forceLimit; // 0xa54
    float m_torqueLimit; // 0xa58
    CUtlVector<T> m_MagnettedEntities; // 0xa60
    bool m_bActive; // 0xa78
    bool m_bHasHitSomething; // 0xa79
    float m_flTotalMass; // 0xa7c
    float m_flRadius; // 0xa80
    GameTime_t m_flNextSuckTime; // 0xa84
    int32_t m_iMaxObjectsAttached; // 0xa88
};

// CEntityInstance (size: 0x38)
struct CEntityInstance {
    CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
    CEntityIdentity* m_pEntity; // 0x10
    CScriptComponent* m_CScriptComponent; // 0x30
};

// CGameGibManager (size: 0x4d0)
struct CGameGibManager {
    bool m_bAllowNewGibs; // 0x4c0
    int32_t m_iCurrentMaxPieces; // 0x4c4
    int32_t m_iMaxPieces; // 0x4c8
    int32_t m_iLastFrame; // 0x4cc
};

// CHandleDummy (size: 0x4a8)
struct CHandleDummy {
};

// CFuncWallToggle (size: 0x738)
struct CFuncWallToggle {
};

// CCSPlayer_BulletServices (size: 0x70)
struct CCSPlayer_BulletServices {
    int32_t m_totalHitsOnServer; // 0x48
};

// CSkyCamera (size: 0x548)
struct CSkyCamera {
    sky3dparams_t m_skyboxData; // 0x4a8
    CUtlString m_skyboxSlotToken; // 0x538
    bool m_bUseAngles; // 0x53c
    CSkyCamera* m_pNext; // 0x540
};

// CPlayer_AutoaimServices (size: 0x48)
struct CPlayer_AutoaimServices {
};

// CItemDefuserAlias_item_defuser (size: 0xae0)
struct CItemDefuserAlias_item_defuser {
};

// CPathCornerCrash (size: 0x4c8)
struct CPathCornerCrash {
};

// CPhysPulley (size: 0x538)
struct CPhysPulley {
    VectorWS m_position2; // 0x508
    Vector[2] m_offset; // 0x514
    float m_addLength; // 0x52c
    float m_gearRatio; // 0x530
};

// CCSPetPlacement (size: 0x4a8)
struct CCSPetPlacement {
};

// CWeaponMP5SD (size: 0x1150)
struct CWeaponMP5SD {
};

// CWeaponBaseItem (size: 0x1140)
struct CWeaponBaseItem {
    bool m_bSequenceInProgress; // 0x1130
    bool m_bRedraw; // 0x1131
};

// CCommentaryAuto (size: 0x4f0)
struct CCommentaryAuto {
    CEntityIOOutput m_OnCommentaryNewGame; // 0x4a8
    CEntityIOOutput m_OnCommentaryMidGame; // 0x4c0
    CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x4d8
};

// CPulseCell_Outflow_ListenForEntityOutput::CursorState_t (size: 0x4)
struct CPulseCell_Outflow_ListenForEntityOutput_CursorState_t {
    CHandle<T> m_entity; // 0x0
};

// ActiveModelConfig_t (size: 0x70)
struct ActiveModelConfig_t {
    ModelConfigHandle_t m_Handle; // 0x30
    CUtlSymbolLarge m_Name; // 0x38
    CHandle<T> m_AssociatedEntities; // 0x40
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames; // 0x58
};

// CWeaponUSPSilencer (size: 0x1150)
struct CWeaponUSPSilencer {
};

// CSoundStackSave (size: 0x4b0)
struct CSoundStackSave {
    CUtlSymbolLarge m_iszStackName; // 0x4a8
};

// CPulseCell_Value_Curve (size: 0x88)
struct CPulseCell_Value_Curve {
    CPiecewiseCurve m_Curve; // 0x48
};

// CWeaponMag7 (size: 0x1150)
struct CWeaponMag7 {
};

// CLogicMeasureMovement (size: 0x4d8)
struct CLogicMeasureMovement {
    CUtlSymbolLarge m_strMeasureTarget; // 0x4a8
    CUtlSymbolLarge m_strMeasureReference; // 0x4b0
    CUtlSymbolLarge m_strTargetReference; // 0x4b8
    CHandle<T> m_hMeasureTarget; // 0x4c0
    CHandle<T> m_hMeasureReference; // 0x4c4
    CHandle<T> m_hTarget; // 0x4c8
    CHandle<T> m_hTargetReference; // 0x4cc
    float m_flScale; // 0x4d0
    int32_t m_nMeasureType; // 0x4d4
};

// CC4 (size: 0x11b0)
struct CC4 {
    Vector m_vecLastValidPlayerHeldPosition; // 0x1160
    Vector m_vecLastValidDroppedPosition; // 0x116c
    bool m_bDoValidDroppedPositionCheck; // 0x1178
    bool m_bStartedArming; // 0x1179
    GameTime_t m_fArmedTime; // 0x117c
    bool m_bBombPlacedAnimation; // 0x1180
    bool m_bIsPlantingViaUse; // 0x1181
    EntitySpottedState_t m_entitySpottedState; // 0x1188
    int32_t m_nSpotRules; // 0x11a0
    bool[7] m_bPlayedArmingBeeps; // 0x11a4
    bool m_bBombPlanted; // 0x11ab
};

// CHostageCarriableProp (size: 0xa20)
struct CHostageCarriableProp {
};

// CDynamicPropAlias_cable_dynamic (size: 0xc50)
struct CDynamicPropAlias_cable_dynamic {
};

// CBaseFlexAlias_funCBaseFlex (size: 0xab0)
struct CBaseFlexAlias_funCBaseFlex {
};

// CCSObserver_CameraServices (size: 0x1b0)
struct CCSObserver_CameraServices {
};

// CEnvDetailController (size: 0x4b0)
struct CEnvDetailController {
    float m_flFadeStartDist; // 0x4a8
    float m_flFadeEndDist; // 0x4ac
};

// CTakeDamageInfoAPI (size: 0x8)
struct CTakeDamageInfoAPI {
};

// CCSPlayerPawnBase (size: 0xe70)
struct CCSPlayerPawnBase {
    CTouchExpansionComponent m_CTouchExpansionComponent; // 0xd30
    CCSPlayer_PingServices* m_pPingServices; // 0xd80
    GameTime_t m_blindUntilTime; // 0xd88
    GameTime_t m_blindStartTime; // 0xd8c
    CSPlayerState m_iPlayerState; // 0xd90
    bool m_bRespawning; // 0xe40
    bool m_bHasMovedSinceSpawn; // 0xe41
    int32_t m_iNumSpawns; // 0xe44
    float m_flIdleTimeSinceLastAction; // 0xe4c
    float m_fNextRadarUpdateTime; // 0xe50
    float m_flFlashDuration; // 0xe54
    float m_flFlashMaxAlpha; // 0xe58
    float m_flProgressBarStartTime; // 0xe5c
    int32_t m_iProgressBarDuration; // 0xe60
    CHandle<T> m_hOriginalController; // 0xe64
};

// CEnvSoundscapeProxy (size: 0x540)
struct CEnvSoundscapeProxy {
    CUtlSymbolLarge m_MainSoundscapeName; // 0x538
};

// CPulseCell_Inflow_EventHandler (size: 0x90)
struct CPulseCell_Inflow_EventHandler {
    PulseSymbol_t m_EventName; // 0x80
};

// CCSPointScriptEntity (size: 0x610)
struct CCSPointScriptEntity {
};

// CPulseCell_BaseFlow (size: 0x48)
struct CPulseCell_BaseFlow {
};

// CBombTarget (size: 0x8f0)
struct CBombTarget {
    CEntityIOOutput m_OnBombExplode; // 0x890
    CEntityIOOutput m_OnBombPlanted; // 0x8a8
    CEntityIOOutput m_OnBombDefused; // 0x8c0
    bool m_bIsBombSiteB; // 0x8d8
    bool m_bIsHeistBombTarget; // 0x8d9
    bool m_bBombPlantedHere; // 0x8da
    CUtlSymbolLarge m_szMountTarget; // 0x8e0
    CHandle<T> m_hInstructorHint; // 0x8e8
    int32_t m_nBombSiteDesignation; // 0x8ec
};

// CRuleEntity (size: 0x738)
struct CRuleEntity {
    CUtlSymbolLarge m_iszMaster; // 0x730
};

// CPhysThruster (size: 0x518)
struct CPhysThruster {
    Vector m_localOrigin; // 0x508
};

// CInfoPlayerStart (size: 0x4b8)
struct CInfoPlayerStart {
    bool m_bDisabled; // 0x4a8
    bool m_bIsMaster; // 0x4a9
    CGlobalSymbol m_pPawnSubclass; // 0x4b0
};

// CEntityFlame (size: 0x4e8)
struct CEntityFlame {
    CHandle<T> m_hEntAttached; // 0x4a8
    bool m_bCheapEffect; // 0x4ac
    float m_flSize; // 0x4b0
    bool m_bUseHitboxes; // 0x4b4
    int32_t m_iNumHitboxFires; // 0x4b8
    float m_flHitboxFireScale; // 0x4bc
    GameTime_t m_flLifetime; // 0x4c0
    CHandle<T> m_hAttacker; // 0x4c4
    float m_flDirectDamagePerSecond; // 0x4c8
    int32_t m_iCustomDamageType; // 0x4cc
};

// CSkeletonInstance (size: 0x430)
struct CSkeletonInstance {
    CModelState m_modelState; // 0x140
    bool m_bIsAnimationEnabled; // 0x390
    bool m_bUseParentRenderBounds; // 0x391
    bool m_bDisableSolidCollisionsForHierarchy; // 0x392
    bitfield:1 m_bDirtyMotionType; // 0x0
    bitfield:1 m_bIsGeneratingLatchedParentSpaceState; // 0x0
    CUtlString m_materialGroup; // 0x394
    uint8_t m_nHitboxSet; // 0x398
    bool m_bForceServerConstraintsEnabled; // 0x3f4
};

// CEntityComponent (size: 0x8)
struct CEntityComponent {
};

// CBasePlatTrain (size: 0x7d8)
struct CBasePlatTrain {
    CUtlSymbolLarge m_NoiseMoving; // 0x7b0
    CUtlSymbolLarge m_NoiseArrived; // 0x7b8
    float m_volume; // 0x7c8
    float m_flTWidth; // 0x7cc
    float m_flTLength; // 0x7d0
};

// CPointTeleport (size: 0x4c8)
struct CPointTeleport {
    Vector m_vSaveOrigin; // 0x4a8
    QAngle m_vSaveAngles; // 0x4b4
    bool m_bTeleportParentedEntities; // 0x4c0
    bool m_bTeleportUseCurrentAngle; // 0x4c1
};

// CTriggerGameEvent (size: 0x8a8)
struct CTriggerGameEvent {
    CUtlString m_strStartTouchEventName; // 0x890
    CUtlString m_strEndTouchEventName; // 0x898
    CUtlString m_strTriggerID; // 0x8a0
};

// CMessageEntity (size: 0x4c0)
struct CMessageEntity {
    int32_t m_radius; // 0x4a8
    CUtlSymbolLarge m_messageText; // 0x4b0
    bool m_drawText; // 0x4b8
    bool m_bDeveloperOnly; // 0x4b9
    bool m_bEnabled; // 0x4ba
};

// CEnvEntityIgniter (size: 0x4b0)
struct CEnvEntityIgniter {
    float m_flLifetime; // 0x4a8
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

// CMarkupVolumeTagged_NavGame (size: 0x7a0)
struct CMarkupVolumeTagged_NavGame {
    NavScopeFlags_t m_nScopes; // 0x798
    bool m_bFloodFillAttribute; // 0x799
    bool m_bSplitNavSpace; // 0x79a
};

// CMultiLightProxy (size: 0x4e8)
struct CMultiLightProxy {
    CUtlSymbolLarge m_iszLightNameFilter; // 0x4a8
    CUtlSymbolLarge m_iszLightClassFilter; // 0x4b0
    float m_flLightRadiusFilter; // 0x4b8
    float m_flBrightnessDelta; // 0x4bc
    bool m_bPerformScreenFade; // 0x4c0
    float m_flTargetBrightnessMultiplier; // 0x4c4
    float m_flCurrentBrightnessMultiplier; // 0x4c8
    CUtlVector<T> m_vecLights; // 0x4d0
};

// CWeaponM4A1 (size: 0x1150)
struct CWeaponM4A1 {
};

// CTriggerHostageReset (size: 0x890)
struct CTriggerHostageReset {
};

// CPulseAnimFuncs (size: 0x8)
struct CPulseAnimFuncs {
};

// CEconWearable (size: 0xdf0)
struct CEconWearable {
    int32_t m_nForceSkin; // 0xde0
    bool m_bAlwaysAllow; // 0xde4
};

// CPulseCell_WaitForCursorsWithTagBase::CursorState_t (size: 0x30)
struct CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    PulseSymbol_t m_TagName; // 0x0
};

// CPulseArraylib (size: 0x1)
struct CPulseArraylib {
};

// CWeaponMAC10 (size: 0x1150)
struct CWeaponMAC10 {
};

// CFuncLadder (size: 0x7c0)
struct CFuncLadder {
    Vector m_vecLadderDir; // 0x730
    CUtlVector<T> m_Dismounts; // 0x740
    Vector m_vecLocalTop; // 0x758
    VectorWS m_vecPlayerMountPositionTop; // 0x764
    VectorWS m_vecPlayerMountPositionBottom; // 0x770
    float m_flAutoRideSpeed; // 0x77c
    bool m_bDisabled; // 0x780
    bool m_bFakeLadder; // 0x781
    bool m_bHasSlack; // 0x782
    CUtlSymbolLarge m_surfacePropName; // 0x788
    CEntityIOOutput m_OnPlayerGotOnLadder; // 0x790
    CEntityIOOutput m_OnPlayerGotOffLadder; // 0x7a8
};

// CFogController (size: 0x518)
struct CFogController {
    fogparams_t m_fog; // 0x4a8
    bool m_bUseAngles; // 0x510
    int32_t m_iChangedVariables; // 0x514
};

// CPointTemplateAPI (size: 0x8)
struct CPointTemplateAPI {
};

// CItem (size: 0xac0)
struct CItem {
    CEntityIOOutput m_OnPlayerTouch; // 0xa28
    CEntityIOOutput m_OnPlayerPickup; // 0xa40
    bool m_bActivateWhenAtRest; // 0xa58
    CEntityIOOutput m_OnCacheInteraction; // 0xa60
    CEntityIOOutput m_OnGlovePulled; // 0xa78
    VectorWS m_vOriginalSpawnOrigin; // 0xa90
    QAngle m_vOriginalSpawnAngles; // 0xa9c
    bool m_bPhysStartAsleep; // 0xaa8
};

// CTriggerPush (size: 0x8c8)
struct CTriggerPush {
    QAngle m_angPushEntitySpace; // 0x890
    Vector m_vecPushDirEntitySpace; // 0x89c
    bool m_bTriggerOnStartTouch; // 0x8a8
    bool m_bUsePathSimple; // 0x8a9
    CUtlSymbolLarge m_iszPathSimpleName; // 0x8b0
    CPathSimple* m_PathSimple; // 0x8b8
    uint32_t m_splinePushType; // 0x8c0
};

// CBaseProp (size: 0xa50)
struct CBaseProp {
    bool m_bModelOverrodeBlockLOS; // 0xa20
    int32_t m_iShapeType; // 0xa24
    bool m_bConformToCollisionBounds; // 0xa28
    CTransform m_mPreferredCatchTransform; // 0xa30
};

// CInfoOffscreenPanoramaTexture (size: 0x528)
struct CInfoOffscreenPanoramaTexture {
    bool m_bDisabled; // 0x4a8
    int32_t m_nResolutionX; // 0x4ac
    int32_t m_nResolutionY; // 0x4b0
    CUtlSymbolLarge m_szPanelType; // 0x4b8
    CUtlSymbolLarge m_szLayoutFileName; // 0x4c0
    CUtlSymbolLarge m_RenderAttrName; // 0x4c8
    CHandle<T> m_TargetEntities; // 0x4d0
    int32_t m_nTargetChangeCount; // 0x4e8
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x4f0
    CUtlSymbolLarge m_szTargetsName; // 0x508
    CUtlVector<T> m_AdditionalTargetEntities; // 0x510
};

// CPointAngularVelocitySensor (size: 0x578)
struct CPointAngularVelocitySensor {
    CHandle<T> m_hTargetEntity; // 0x4a8
    float m_flThreshold; // 0x4ac
    int32_t m_nLastCompareResult; // 0x4b0
    int32_t m_nLastFireResult; // 0x4b4
    GameTime_t m_flFireTime; // 0x4b8
    float m_flFireInterval; // 0x4bc
    float m_flLastAngVelocity; // 0x4c0
    QAngle m_lastOrientation; // 0x4c4
    VectorWS m_vecAxis; // 0x4d0
    bool m_bUseHelper; // 0x4dc
    CEntityOutputTemplate< float32, float32 > m_AngularVelocity; // 0x4e0
    CEntityIOOutput m_OnLessThan; // 0x500
    CEntityIOOutput m_OnLessThanOrEqualTo; // 0x518
    CEntityIOOutput m_OnGreaterThan; // 0x530
    CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x548
    CEntityIOOutput m_OnEqualTo; // 0x560
};

// CPlayerVisibility (size: 0x4c0)
struct CPlayerVisibility {
    float m_flVisibilityStrength; // 0x4a8
    float m_flFogDistanceMultiplier; // 0x4ac
    float m_flFogMaxDensityMultiplier; // 0x4b0
    float m_flFadeTime; // 0x4b4
    bool m_bStartDisabled; // 0x4b8
    bool m_bIsEnabled; // 0x4b9
};

// CPulseCell_Step_FollowEntity (size: 0x58)
struct CPulseCell_Step_FollowEntity {
    CUtlString m_ParamBoneOrAttachName; // 0x48
    CUtlString m_ParamBoneOrAttachNameChild; // 0x50
};

// CFlashbang (size: 0x1170)
struct CFlashbang {
};

// CBasePlayerWeapon (size: 0xe20)
struct CBasePlayerWeapon {
    GameTick_t m_nNextPrimaryAttackTick; // 0xde0
    float m_flNextPrimaryAttackTickRatio; // 0xde4
    GameTick_t m_nNextSecondaryAttackTick; // 0xde8
    float m_flNextSecondaryAttackTickRatio; // 0xdec
    int32_t m_iClip1; // 0xdf0
    int32_t m_iClip2; // 0xdf4
    int32[2] m_pReserveAmmo; // 0xdf8
    CEntityIOOutput m_OnPlayerUse; // 0xe00
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

// CPhysForce (size: 0x508)
struct CPhysForce {
    CUtlSymbolLarge m_nameAttach; // 0x4b0
    float m_force; // 0x4b8
    float m_forceTime; // 0x4bc
    CHandle<T> m_attachedObject; // 0x4c0
    bool m_wasRestored; // 0x4c4
    CConstantForceController m_integrator; // 0x4c8
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

// CInfoTarget (size: 0x4a8)
struct CInfoTarget {
};

// CPlayer_CameraServices (size: 0x178)
struct CPlayer_CameraServices {
    QAngle m_vecCsViewPunchAngle; // 0x48
    GameTick_t m_nCsViewPunchAngleTick; // 0x54
    float m_flCsViewPunchAngleTickRatio; // 0x58
    fogplayerparams_t m_PlayerFog; // 0x60
    CHandle<T> m_hColorCorrectionCtrl; // 0xa0
    CHandle<T> m_hViewEntity; // 0xa4
    CHandle<T> m_hTonemapController; // 0xa8
    audioparams_t m_audio; // 0xb0
    CHandle<T> m_PostProcessingVolumes; // 0x128
    float m_flOldPlayerZ; // 0x140
    float m_flOldPlayerViewOffsetZ; // 0x144
    CUtlVector<T> m_hTriggerSoundscapeList; // 0x160
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

// CScenePayloadVData (size: 0xe0)
struct CScenePayloadVData {
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCChoreoScene m_sSceneFile; // 0x0
};

// CPulseFuncs_GameParticleManager (size: 0x1)
struct CPulseFuncs_GameParticleManager {
};

// CFilterAttributeInt (size: 0x4e8)
struct CFilterAttributeInt {
    CUtlSymbolLarge m_sAttributeName; // 0x4e0
};

// CKeepUpright (size: 0x4e8)
struct CKeepUpright {
    Vector m_worldGoalAxis; // 0x4b0
    Vector m_localTestAxis; // 0x4bc
    CUtlSymbolLarge m_nameAttach; // 0x4d0
    CHandle<T> m_attachedObject; // 0x4d8
    float m_angularLimit; // 0x4dc
    bool m_bActive; // 0x4e0
    bool m_bDampAllRotation; // 0x4e1
};

// CPointTemplate (size: 0x510)
struct CPointTemplate {
    CUtlSymbolLarge m_iszWorldName; // 0x4a8
    CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x4b0
    CUtlSymbolLarge m_iszEntityFilterName; // 0x4b8
    float m_flTimeoutInterval; // 0x4c0
    bool m_bAsynchronouslySpawnEntities; // 0x4c4
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x4c8
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x4cc
    CUtlVector<T> m_createdSpawnGroupHandles; // 0x4d0
    CUtlVector<T> m_SpawnedEntityHandles; // 0x4e8
    HSCRIPT m_ScriptSpawnCallback; // 0x500
    HSCRIPT m_ScriptCallbackScope; // 0x508
};

// CEnvVolumetricFogController (size: 0x558)
struct CEnvVolumetricFogController {
    float m_flScattering; // 0x4a8
    Color m_TintColor; // 0x4ac
    float m_flAnisotropy; // 0x4b0
    float m_flFadeSpeed; // 0x4b4
    float m_flDrawDistance; // 0x4b8
    float m_flFadeInStart; // 0x4bc
    float m_flFadeInEnd; // 0x4c0
    float m_flIndirectStrength; // 0x4c4
    int32_t m_nVolumeDepth; // 0x4c8
    float m_fFirstVolumeSliceThickness; // 0x4cc
    int32_t m_nIndirectTextureDimX; // 0x4d0
    int32_t m_nIndirectTextureDimY; // 0x4d4
    int32_t m_nIndirectTextureDimZ; // 0x4d8
    Vector m_vBoxMins; // 0x4dc
    Vector m_vBoxMaxs; // 0x4e8
    bool m_bActive; // 0x4f4
    GameTime_t m_flStartAnisoTime; // 0x4f8
    GameTime_t m_flStartScatterTime; // 0x4fc
    GameTime_t m_flStartDrawDistanceTime; // 0x500
    float m_flStartAnisotropy; // 0x504
    float m_flStartScattering; // 0x508
    float m_flStartDrawDistance; // 0x50c
    float m_flDefaultAnisotropy; // 0x510
    float m_flDefaultScattering; // 0x514
    float m_flDefaultDrawDistance; // 0x518
    bool m_bStartDisabled; // 0x51c
    bool m_bEnableIndirect; // 0x51d
    bool m_bIsMaster; // 0x51e
    CStrongHandle<T> m_hFogIndirectTexture; // 0x520
    int32_t m_nForceRefreshCount; // 0x528
    float m_fNoiseSpeed; // 0x52c
    float m_fNoiseStrength; // 0x530
    Vector m_vNoiseScale; // 0x534
    float m_fWindSpeed; // 0x540
    Vector m_vWindDirection; // 0x544
    bool m_bFirstTime; // 0x550
};

// CBot (size: 0x100)
struct CBot {
    CCSPlayerController* m_pController; // 0x10
    CCSPlayerPawn* m_pPlayer; // 0x18
    bool m_bHasSpawned; // 0x20
    uint32_t m_id; // 0x24
    bool m_isRunning; // 0xc0
    bool m_isCrouching; // 0xc1
    float m_forwardSpeed; // 0xc4
    float m_leftSpeed; // 0xc8
    float m_verticalSpeed; // 0xcc
    uint64_t m_buttonFlags; // 0xd0
    float m_jumpTimestamp; // 0xd8
    Vector m_viewForward; // 0xdc
    int32_t m_postureStackIndex; // 0xf8
};

// CPulseCell_Step_SetAnimGraphParam (size: 0x50)
struct CPulseCell_Step_SetAnimGraphParam {
    CUtlString m_ParamName; // 0x48
};

// CPlayer_FlashlightServices (size: 0x48)
struct CPlayer_FlashlightServices {
};

// CCSPlayerController (size: 0xaa0)
struct CCSPlayerController {
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x7d8
    CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x7e0
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x7e8
    CCSPlayerController_DamageServices* m_pDamageServices; // 0x7f0
    uint32_t m_iPing; // 0x7f8
    bool m_bHasCommunicationAbuseMute; // 0x7fc
    uint32_t m_uiCommunicationMuteFlags; // 0x800
    CUtlSymbolLarge m_szCrosshairCodes; // 0x808
    uint8_t m_iPendingTeamNum; // 0x810
    GameTime_t m_flForceTeamTime; // 0x814
    int32_t m_iCompTeammateColor; // 0x818
    bool m_bEverPlayedOnTeam; // 0x81c
    bool m_bAttemptedToGetColor; // 0x81d
    int32_t m_iTeammatePreferredColor; // 0x820
    bool m_bTeamChanged; // 0x824
    bool m_bInSwitchTeam; // 0x825
    bool m_bHasSeenJoinGame; // 0x826
    bool m_bJustBecameSpectator; // 0x827
    bool m_bSwitchTeamsOnNextRoundReset; // 0x828
    bool m_bRemoveAllItemsOnNextRoundReset; // 0x829
    GameTime_t m_flLastJoinTeamTime; // 0x82c
    CUtlSymbolLarge m_szClan; // 0x830
    int32_t m_iCoachingTeam; // 0x838
    uint64_t m_nPlayerDominated; // 0x840
    uint64_t m_nPlayerDominatingMe; // 0x848
    int32_t m_iCompetitiveRanking; // 0x850
    int32_t m_iCompetitiveWins; // 0x854
    int8 m_iCompetitiveRankType; // 0x858
    int32_t m_iCompetitiveRankingPredicted_Win; // 0x85c
    int32_t m_iCompetitiveRankingPredicted_Loss; // 0x860
    int32_t m_iCompetitiveRankingPredicted_Tie; // 0x864
    int32_t m_nEndMatchNextMapVote; // 0x868
    uint16_t m_unActiveQuestId; // 0x86c
    uint32_t m_rtActiveMissionPeriod; // 0x870
    QuestProgress::Reason m_nQuestProgressReason; // 0x874
    uint32_t m_unPlayerTvControlFlags; // 0x878
    int32_t m_iDraftIndex; // 0x8a8
    uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x8ac
    uint32_t m_uiAbandonRecordedReason; // 0x8b0
    uint32_t m_eNetworkDisconnectionReason; // 0x8b4
    bool m_bCannotBeKicked; // 0x8b8
    bool m_bEverFullyConnected; // 0x8b9
    bool m_bAbandonAllowsSurrender; // 0x8ba
    bool m_bAbandonOffersInstantSurrender; // 0x8bb
    bool m_bDisconnection1MinWarningPrinted; // 0x8bc
    bool m_bScoreReported; // 0x8bd
    int32_t m_nDisconnectionTick; // 0x8c0
    bool m_bControllingBot; // 0x8d0
    bool m_bHasControlledBotThisRound; // 0x8d1
    bool m_bHasBeenControlledByPlayerThisRound; // 0x8d2
    int32_t m_nBotsControlledThisRound; // 0x8d4
    bool m_bCanControlObservedBot; // 0x8d8
    CHandle<T> m_hPlayerPawn; // 0x8dc
    CHandle<T> m_hObserverPawn; // 0x8e0
    int32_t m_DesiredObserverMode; // 0x8e4
    CEntityHandle m_hDesiredObserverTarget; // 0x8e8
    bool m_bPawnIsAlive; // 0x8ec
    uint32_t m_iPawnHealth; // 0x8f0
    int32_t m_iPawnArmor; // 0x8f4
    bool m_bPawnHasDefuser; // 0x8f8
    bool m_bPawnHasHelmet; // 0x8f9
    uint16_t m_nPawnCharacterDefIndex; // 0x8fa
    int32_t m_iPawnLifetimeStart; // 0x8fc
    int32_t m_iPawnLifetimeEnd; // 0x900
    int32_t m_iPawnBotDifficulty; // 0x904
    CHandle<T> m_hOriginalControllerOfCurrentPawn; // 0x908
    int32_t m_iScore; // 0x90c
    int32_t m_iRoundScore; // 0x910
    int32_t m_iRoundsWon; // 0x914
    uint8[8] m_recentKillQueue; // 0x918
    uint8_t m_nFirstKill; // 0x920
    uint8_t m_nKillCount; // 0x921
    bool m_bMvpNoMusic; // 0x922
    int32_t m_eMvpReason; // 0x924
    int32_t m_iMusicKitID; // 0x928
    int32_t m_iMusicKitMVPs; // 0x92c
    int32_t m_iMVPs; // 0x930
    int32_t m_nUpdateCounter; // 0x934
    float m_flSmoothedPing; // 0x938
    IntervalTimer m_lastHeldVoteTimer; // 0x940
    bool m_bShowHints; // 0x958
    int32_t m_iNextTimeCheck; // 0x95c
    bool m_bJustDidTeamKill; // 0x960
    bool m_bPunishForTeamKill; // 0x961
    bool m_bGaveTeamDamageWarning; // 0x962
    bool m_bGaveTeamDamageWarningThisRound; // 0x963
    double m_dblLastReceivedPacketPlatFloatTime; // 0x968
    GameTime_t m_LastTeamDamageWarningTime; // 0x970
    GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0x974
    uint32_t m_nSuspiciousHitCount; // 0x978
    uint32_t m_nNonSuspiciousHitStreak; // 0x97c
    bool m_bFireBulletsSeedSynchronized; // 0xa21
};

// CPhysLength (size: 0x538)
struct CPhysLength {
    Vector[2] m_offset; // 0x508
    VectorWS m_vecAttach; // 0x520
    float m_addLength; // 0x52c
    float m_minLength; // 0x530
    float m_totalLength; // 0x534
};

// CTeam (size: 0x560)
struct CTeam {
    CHandle<T> m_aPlayerControllers; // 0x4a8
    CHandle<T> m_aPlayers; // 0x4c0
    int32_t m_iScore; // 0x4d8
    char[129] m_szTeamname; // 0x4dc
};

// CLogicNPCCounterAABB (size: 0x758)
struct CLogicNPCCounterAABB {
    Vector m_vDistanceOuterMins; // 0x728
    Vector m_vDistanceOuterMaxs; // 0x734
    Vector m_vOuterMins; // 0x740
    Vector m_vOuterMaxs; // 0x74c
};

// CPulseCell_Outflow_CycleOrdered::InstanceState_t (size: 0x4)
struct CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    int32_t m_nNextIndex; // 0x0
};

// CChicken (size: 0x3190)
struct CChicken {
    CAttributeContainer m_AttributeManager; // 0xc70
    CountdownTimer m_updateTimer; // 0xf68
    Vector m_stuckAnchor; // 0xf80
    CountdownTimer m_stuckTimer; // 0xf90
    CountdownTimer m_collisionStuckTimer; // 0xfa8
    bool m_isOnGround; // 0xfc0
    Vector m_vFallVelocity; // 0xfc4
    ChickenActivity m_desiredActivity; // 0xfd0
    ChickenActivity m_currentActivity; // 0xfd4
    CountdownTimer m_activityTimer; // 0xfd8
    float m_turnRate; // 0xff0
    CHandle<T> m_fleeFrom; // 0xff4
    CountdownTimer m_moveRateThrottleTimer; // 0xff8
    CountdownTimer m_startleTimer; // 0x1010
    CountdownTimer m_vocalizeTimer; // 0x1028
    GameTime_t m_flWhenZombified; // 0x1040
    bool m_jumpedThisFrame; // 0x1044
    CHandle<T> m_leader; // 0x1048
    CountdownTimer m_reuseTimer; // 0x1060
    bool m_hasBeenUsed; // 0x1078
    CountdownTimer m_jumpTimer; // 0x1080
    float m_flLastJumpTime; // 0x1098
    bool m_bInJump; // 0x109c
    CountdownTimer m_repathTimer; // 0x30a8
    Vector m_vecPathGoal; // 0x3140
    GameTime_t m_flActiveFollowStartTime; // 0x314c
    CountdownTimer m_followMinuteTimer; // 0x3150
    CountdownTimer m_BlockDirectionTimer; // 0x3170
};

// CPhysicsPropRespawnable (size: 0xd20)
struct CPhysicsPropRespawnable {
    VectorWS m_vOriginalSpawnOrigin; // 0xce0
    QAngle m_vOriginalSpawnAngles; // 0xcec
    Vector m_vOriginalMins; // 0xcf8
    Vector m_vOriginalMaxs; // 0xd04
    float m_flRespawnDuration; // 0xd10
};

// CEnvBeam (size: 0x868)
struct CEnvBeam {
    int32_t m_active; // 0x7d0
    CStrongHandle<T> m_spriteTexture; // 0x7d8
    CUtlSymbolLarge m_iszStartEntity; // 0x7e0
    CUtlSymbolLarge m_iszEndEntity; // 0x7e8
    float m_life; // 0x7f0
    float m_boltWidth; // 0x7f4
    float m_noiseAmplitude; // 0x7f8
    int32_t m_speed; // 0x7fc
    float m_restrike; // 0x800
    CUtlSymbolLarge m_iszSpriteName; // 0x808
    int32_t m_frameStart; // 0x810
    VectorWS m_vEndPointWorld; // 0x814
    Vector m_vEndPointRelative; // 0x820
    float m_radius; // 0x82c
    Touch_t m_TouchType; // 0x830
    CUtlSymbolLarge m_iFilterName; // 0x838
    CHandle<T> m_hFilter; // 0x840
    CUtlSymbolLarge m_iszDecal; // 0x848
    CEntityIOOutput m_OnTouchedByEntity; // 0x850
};

// CLightSpotEntity (size: 0x738)
struct CLightSpotEntity {
};

// CWeaponSawedoff (size: 0x1130)
struct CWeaponSawedoff {
};

// CTonemapTrigger (size: 0x8a0)
struct CTonemapTrigger {
    CUtlSymbolLarge m_tonemapControllerName; // 0x890
    CEntityHandle m_hTonemapController; // 0x898
};

// CEnvShake (size: 0x4f8)
struct CEnvShake {
    CUtlSymbolLarge m_limitToEntity; // 0x4a8
    float m_Amplitude; // 0x4b0
    float m_Frequency; // 0x4b4
    float m_Duration; // 0x4b8
    float m_Radius; // 0x4bc
    GameTime_t m_stopTime; // 0x4c0
    GameTime_t m_nextShake; // 0x4c4
    float m_currentAmp; // 0x4c8
    Vector m_maxForce; // 0x4cc
    CPhysicsShake m_shakeCallback; // 0x4e0
};

// CCSPlayer_MovementServices (size: 0xe68)
struct CCSPlayer_MovementServices {
    Vector m_vecLadderNormal; // 0x278
    int32_t m_nLadderSurfacePropIndex; // 0x284
    bool m_bDucked; // 0x288
    float m_flDuckAmount; // 0x28c
    float m_flDuckSpeed; // 0x290
    bool m_bDuckOverride; // 0x294
    bool m_bDesiresDuck; // 0x295
    bool m_bDucking; // 0x296
    float m_flDuckOffset; // 0x298
    uint32_t m_nDuckTimeMsecs; // 0x29c
    uint32_t m_nDuckJumpTimeMsecs; // 0x2a0
    uint32_t m_nJumpTimeMsecs; // 0x2a4
    float m_flLastDuckTime; // 0x2a8
    Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x2b8
    bool m_duckUntilOnGround; // 0x2c0
    bool m_bHasWalkMovedSinceLastJump; // 0x2c1
    bool m_bInStuckTest; // 0x2c2
    int32_t m_nTraceCount; // 0x4d0
    int32_t m_StuckLast; // 0x4d4
    bool m_bSpeedCropped; // 0x4d8
    int32_t m_nOldWaterLevel; // 0x4dc
    float m_flWaterEntryTime; // 0x4e0
    Vector m_vecForward; // 0x4e4
    Vector m_vecLeft; // 0x4f0
    Vector m_vecUp; // 0x4fc
    int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x508
    bool m_bMadeFootstepNoise; // 0x50c
    int32_t m_iFootsteps; // 0x510
    GameTime_t m_fStashGrenadeParameterWhen; // 0x514
    uint64_t m_nButtonDownMaskPrev; // 0x518
    float m_flOffsetTickCompleteTime; // 0x520
    float m_flOffsetTickStashedSpeed; // 0x524
    float m_flStamina; // 0x528
    float m_flHeightAtJumpStart; // 0x52c
    float m_flMaxJumpHeightThisJump; // 0x530
    float m_flMaxJumpHeightLastJump; // 0x534
    float m_flStaminaAtJumpStart; // 0x538
    float m_flVelMulAtJumpStart; // 0x53c
    float m_flAccumulatedJumpError; // 0x540
    CCSPlayerLegacyJump m_LegacyJump; // 0x548
    CCSPlayerModernJump m_ModernJump; // 0x560
    GameTick_t m_nLastJumpTick; // 0x598
    float m_flLastJumpFrac; // 0x59c
    float m_flLastJumpVelocityZ; // 0x5a0
    bool m_bJumpApexPending; // 0x5a4
    float m_flTicksSinceLastSurfingDetected; // 0x5a8
    bool m_bWasSurfing; // 0x5ac
    Vector m_vecInputRotated; // 0x63c
};

// SellbackPurchaseEntry_t (size: 0x48)
struct SellbackPurchaseEntry_t {
    uint16_t m_unDefIdx; // 0x30
    int32_t m_nCost; // 0x34
    int32_t m_nPrevArmor; // 0x38
    bool m_bPrevHelmet; // 0x3c
    CEntityHandle m_hItem; // 0x40
};

// CTriggerCallback (size: 0x898)
struct CTriggerCallback {
};

// CSoundOpvarSetAutoRoomEntity (size: 0x680)
struct CSoundOpvarSetAutoRoomEntity {
    CUtlVector<T> m_traceResults; // 0x640
    CUtlVector<T> m_doorwayPairs; // 0x658
    float m_flSize; // 0x670
    float m_flHeightTolerance; // 0x674
    float m_flSizeSqr; // 0x678
};

// CPulseCell_Outflow_ListenForEntityOutput (size: 0xf0)
struct CPulseCell_Outflow_ListenForEntityOutput {
    SignatureOutflow_Resume m_OnFired; // 0x48
    CPulse_ResumePoint m_OnCanceled; // 0x90
    CGlobalSymbol m_strEntityOutput; // 0xd8
    CUtlString m_strEntityOutputParam; // 0xe0
    bool m_bListenUntilCanceled; // 0xe8
};

// CPushable (size: 0x808)
struct CPushable {
};

// CRotatorTarget (size: 0x4c8)
struct CRotatorTarget {
    CEntityIOOutput m_OnArrivedAt; // 0x4a8
    RotatorTargetSpace_t m_eSpace; // 0x4c0
};

// CPhysicsEntitySolver (size: 0x4d0)
struct CPhysicsEntitySolver {
    CHandle<T> m_hMovingEntity; // 0x4c0
    CHandle<T> m_hPhysicsBlocker; // 0x4c4
    float m_separationDuration; // 0x4c8
    GameTime_t m_cancelTime; // 0x4cc
};

// CLogicCollisionPair (size: 0x4c0)
struct CLogicCollisionPair {
    CUtlSymbolLarge m_nameAttach1; // 0x4a8
    CUtlSymbolLarge m_nameAttach2; // 0x4b0
    bool m_includeHierarchy; // 0x4b8
    bool m_supportMultipleEntitiesWithSameName; // 0x4b9
    bool m_disabled; // 0x4ba
    bool m_succeeded; // 0x4bb
};

// CTestEffect (size: 0x578)
struct CTestEffect {
    int32_t m_iLoop; // 0x4a8
    int32_t m_iBeam; // 0x4ac
    CHandle<T> m_pBeam; // 0x4b0
    GameTime_t[24] m_flBeamTime; // 0x510
    GameTime_t m_flStartTime; // 0x570
};

// CPulseCell_Outflow_ScriptedSequence::CursorState_t (size: 0x4)
struct CPulseCell_Outflow_ScriptedSequence_CursorState_t {
    CHandle<T> m_scriptedSequence; // 0x0
};

// CPropDoorRotating (size: 0xef0)
struct CPropDoorRotating {
    Vector m_vecAxis; // 0xe50
    float m_flDistance; // 0xe5c
    PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xe60
    PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xe64
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xe68
    doorCheck_e m_eDefaultCheckDirection; // 0xe6c
    float m_flAjarAngle; // 0xe70
    QAngle m_angRotationAjarDeprecated; // 0xe74
    QAngle m_angRotationClosed; // 0xe80
    QAngle m_angRotationOpenForward; // 0xe8c
    QAngle m_angRotationOpenBack; // 0xe98
    QAngle m_angGoal; // 0xea4
    Vector m_vecForwardBoundsMin; // 0xeb0
    Vector m_vecForwardBoundsMax; // 0xebc
    Vector m_vecBackBoundsMin; // 0xec8
    Vector m_vecBackBoundsMax; // 0xed4
    bool m_bAjarDoorShouldntAlwaysOpen; // 0xee0
    CHandle<T> m_hEntityBlocker; // 0xee4
};

// CEnvParticleGlow (size: 0xcc0)
struct CEnvParticleGlow {
    float m_flAlphaScale; // 0xca8
    float m_flRadiusScale; // 0xcac
    float m_flSelfIllumScale; // 0xcb0
    Color m_ColorTint; // 0xcb4
    CStrongHandle<T> m_hTextureOverride; // 0xcb8
};

// CMathRemap (size: 0x540)
struct CMathRemap {
    float m_flInMin; // 0x4a8
    float m_flInMax; // 0x4ac
    float m_flOut1; // 0x4b0
    float m_flOut2; // 0x4b4
    float m_flOldInValue; // 0x4b8
    bool m_bEnabled; // 0x4bc
    CEntityOutputTemplate< float32, float32 > m_OutValue; // 0x4c0
    CEntityIOOutput m_OnRoseAboveMin; // 0x4e0
    CEntityIOOutput m_OnRoseAboveMax; // 0x4f8
    CEntityIOOutput m_OnFellBelowMin; // 0x510
    CEntityIOOutput m_OnFellBelowMax; // 0x528
};

// CSoundOpvarSetOBBWindEntity (size: 0x590)
struct CSoundOpvarSetOBBWindEntity {
    Vector m_vMins; // 0x550
    Vector m_vMaxs; // 0x55c
    Vector m_vDistanceMins; // 0x568
    Vector m_vDistanceMaxs; // 0x574
    float m_flWindMin; // 0x580
    float m_flWindMax; // 0x584
    float m_flWindMapMin; // 0x588
    float m_flWindMapMax; // 0x58c
};

// PhysicsRagdollPose_t (size: 0x28)
struct PhysicsRagdollPose_t {
    CNetworkUtlVectorBase< CTransform > m_Transforms; // 0x8
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

// CScriptTriggerOnce (size: 0x8b8)
struct CScriptTriggerOnce {
    Vector m_vExtent; // 0x8a8
};

// CLightOrthoEntity (size: 0x738)
struct CLightOrthoEntity {
};

// CInfoInstructorHintHostageRescueZone (size: 0x4a8)
struct CInfoInstructorHintHostageRescueZone {
};

// CPulseCell_LimitCount::InstanceState_t (size: 0x4)
struct CPulseCell_LimitCount_InstanceState_t {
    int32_t m_nCurrentCount; // 0x0
};

// CTriggerTeleport (size: 0x8a0)
struct CTriggerTeleport {
    CUtlSymbolLarge m_iLandmark; // 0x890
    bool m_bUseLandmarkAngles; // 0x898
    bool m_bMirrorPlayer; // 0x899
    bool m_bCheckDestIfClearForPlayer; // 0x89a
};

// CFuncWall (size: 0x738)
struct CFuncWall {
    int32_t m_nState; // 0x730
};

// CBtActionAim (size: 0xf8)
struct CBtActionAim {
    CUtlString m_szSensorInputKey; // 0x68
    CUtlString m_szAimReadyKey; // 0x80
    float m_flZoomCooldownTimestamp; // 0x88
    bool m_bDoneAiming; // 0x8c
    float m_flLerpStartTime; // 0x90
    float m_flNextLookTargetLerpTime; // 0x94
    float m_flPenaltyReductionRatio; // 0x98
    QAngle m_NextLookTarget; // 0x9c
    CountdownTimer m_AimTimer; // 0xa8
    CountdownTimer m_SniperHoldTimer; // 0xc0
    CountdownTimer m_FocusIntervalTimer; // 0xd8
    bool m_bAcquired; // 0xf0
};

// CCSGO_TeamPreviewCharacterPosition (size: 0xcc0)
struct CCSGO_TeamPreviewCharacterPosition {
    int32_t m_nVariant; // 0x4a8
    int32_t m_nRandom; // 0x4ac
    int32_t m_nOrdinal; // 0x4b0
    CUtlString m_sWeaponName; // 0x4b8
    uint64_t m_xuid; // 0x4c0
    CEconItemView m_agentItem; // 0x4c8
    CEconItemView m_glovesItem; // 0x770
    CEconItemView m_weaponItem; // 0xa18
};

// CGameRulesProxy (size: 0x4a8)
struct CGameRulesProxy {
};

// CInfoLadderDismount (size: 0x4a8)
struct CInfoLadderDismount {
};

// CPulseServerFuncs (size: 0x1)
struct CPulseServerFuncs {
};

// CMessage (size: 0x4e0)
struct CMessage {
    CUtlSymbolLarge m_iszMessage; // 0x4a8
    float m_MessageVolume; // 0x4b0
    int32_t m_MessageAttenuation; // 0x4b4
    float m_Radius; // 0x4b8
    CUtlSymbolLarge m_sNoise; // 0x4c0
    CEntityIOOutput m_OnShowMessage; // 0x4c8
};

// CPointVelocitySensor (size: 0x4e8)
struct CPointVelocitySensor {
    CHandle<T> m_hTargetEntity; // 0x4a8
    Vector m_vecAxis; // 0x4ac
    bool m_bEnabled; // 0x4b8
    float m_fPrevVelocity; // 0x4bc
    float m_flAvgInterval; // 0x4c0
    CEntityOutputTemplate< float32, float32 > m_Velocity; // 0x4c8
};

// EngineCountdownTimer (size: 0x18)
struct EngineCountdownTimer {
    float m_duration; // 0x8
    float m_timestamp; // 0xc
    float m_timescale; // 0x10
};

// CBaseModelEntityAPI (size: 0x8)
struct CBaseModelEntityAPI {
};

// CHostage (size: 0x2e00)
struct CHostage {
    CEntityIOOutput m_OnHostageBeginGrab; // 0xb98
    CEntityIOOutput m_OnFirstPickedUp; // 0xbb0
    CEntityIOOutput m_OnDroppedNotRescued; // 0xbc8
    CEntityIOOutput m_OnRescued; // 0xbe0
    EntitySpottedState_t m_entitySpottedState; // 0xbf8
    int32_t m_nSpotRules; // 0xc10
    uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xc14
    uint32_t m_nHostageSpawnRandomFactor; // 0xc18
    bool m_bRemove; // 0xc1c
    Vector m_vel; // 0xc20
    bool m_isRescued; // 0xc2c
    bool m_jumpedThisFrame; // 0xc2d
    int32_t m_nHostageState; // 0xc30
    CHandle<T> m_leader; // 0xc34
    CHandle<T> m_lastLeader; // 0xc38
    CountdownTimer m_reuseTimer; // 0xc40
    bool m_hasBeenUsed; // 0xc58
    Vector m_accel; // 0xc5c
    bool m_isRunning; // 0xc68
    bool m_isCrouching; // 0xc69
    CountdownTimer m_jumpTimer; // 0xc70
    bool m_isWaitingForLeader; // 0xc88
    CountdownTimer m_repathTimer; // 0x2c98
    CountdownTimer m_inhibitDoorTimer; // 0x2cb0
    CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2d40
    CountdownTimer m_wiggleTimer; // 0x2d60
    bool m_isAdjusted; // 0x2d7c
    bool m_bHandsHaveBeenCut; // 0x2d7d
    CHandle<T> m_hHostageGrabber; // 0x2d80
    GameTime_t m_fLastGrabTime; // 0x2d84
    Vector m_vecPositionWhenStartedDroppingToGround; // 0x2d88
    Vector m_vecGrabbedPos; // 0x2d94
    GameTime_t m_flRescueStartTime; // 0x2da0
    GameTime_t m_flGrabSuccessTime; // 0x2da4
    GameTime_t m_flDropStartTime; // 0x2da8
    int32_t m_nApproachRewardPayouts; // 0x2dac
    int32_t m_nPickupEventCount; // 0x2db0
    Vector m_vecSpawnGroundPos; // 0x2db4
    VectorWS m_vecHostageResetPosition; // 0x2dec
};

// CScriptTriggerMultiple (size: 0x8b8)
struct CScriptTriggerMultiple {
    Vector m_vExtent; // 0x8a8
};

// CEnvSpark (size: 0x4d0)
struct CEnvSpark {
    float m_flDelay; // 0x4a8
    int32_t m_nMagnitude; // 0x4ac
    int32_t m_nTrailLength; // 0x4b0
    int32_t m_nType; // 0x4b4
    CEntityIOOutput m_OnSpark; // 0x4b8
};

// CCSPlayerController_DamageServices (size: 0xd0)
struct CCSPlayerController_DamageServices {
    int32_t m_nSendUpdate; // 0x40
    CUtlVector<T> m_DamageList; // 0x48
};

// CFilterLOS (size: 0x4e0)
struct CFilterLOS {
};

// CPointOrient (size: 0x4c8)
struct CPointOrient {
    CUtlSymbolLarge m_iszSpawnTargetName; // 0x4a8
    CHandle<T> m_hTarget; // 0x4b0
    bool m_bActive; // 0x4b4
    PointOrientGoalDirectionType_t m_nGoalDirection; // 0x4b8
    PointOrientConstraint_t m_nConstraint; // 0x4bc
    float m_flMaxTurnRate; // 0x4c0
    GameTime_t m_flLastGameTime; // 0x4c4
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

// CWeaponP250 (size: 0x1150)
struct CWeaponP250 {
};

// CDestructiblePartsComponent (size: 0x70)
struct CDestructiblePartsComponent {
    CNetworkVarChainer _m_pChainEntity; // 0x0
    CUtlVector<T> m_vecDamageTakenByHitGroup; // 0x48
    CHandle<T> m_hOwner; // 0x60
};

// CChangeLevel (size: 0x8c0)
struct CChangeLevel {
    CUtlString m_sMapName; // 0x890
    CUtlString m_sLandmarkName; // 0x898
    CEntityIOOutput m_OnChangeLevel; // 0x8a0
    bool m_bTouched; // 0x8b8
    bool m_bNoTouch; // 0x8b9
    bool m_bNewChapter; // 0x8ba
    bool m_bOnChangeLevelFired; // 0x8bb
};

// CBaseButton (size: 0x8b0)
struct CBaseButton {
    QAngle m_angMoveEntitySpace; // 0x7b0
    bool m_fStayPushed; // 0x7bc
    bool m_fRotating; // 0x7bd
    locksound_t m_ls; // 0x7c0
    CUtlSymbolLarge m_sUseSound; // 0x7e0
    CUtlSymbolLarge m_sLockedSound; // 0x7e8
    CUtlSymbolLarge m_sUnlockedSound; // 0x7f0
    CUtlSymbolLarge m_sOverrideAnticipationName; // 0x7f8
    bool m_bLocked; // 0x800
    bool m_bDisabled; // 0x801
    GameTime_t m_flUseLockedTime; // 0x804
    bool m_bSolidBsp; // 0x808
    CEntityIOOutput m_OnDamaged; // 0x810
    CEntityIOOutput m_OnPressed; // 0x828
    CEntityIOOutput m_OnUseLocked; // 0x840
    CEntityIOOutput m_OnIn; // 0x858
    CEntityIOOutput m_OnOut; // 0x870
    int32_t m_nState; // 0x888
    CEntityHandle m_hConstraint; // 0x88c
    CEntityHandle m_hConstraintParent; // 0x890
    bool m_bForceNpcExclude; // 0x894
    CUtlSymbolLarge m_sGlowEntity; // 0x898
    CHandle<T> m_glowEntity; // 0x8a0
    bool m_usable; // 0x8a4
    CUtlSymbolLarge m_szDisplayText; // 0x8a8
};

// CPulseCell_SoundEventStart (size: 0x50)
struct CPulseCell_SoundEventStart {
    SoundEventStartType_t m_Type; // 0x48
};

// CPulseCell_Step_DebugLog (size: 0x48)
struct CPulseCell_Step_DebugLog {
};

// CItem_Healthshot (size: 0x1140)
struct CItem_Healthshot {
};

// CBaseGrenade (size: 0xb40)
struct CBaseGrenade {
    CEntityIOOutput m_OnPlayerPickup; // 0xab8
    CEntityIOOutput m_OnExplode; // 0xad0
    bool m_bHasWarnedAI; // 0xae8
    bool m_bIsSmokeGrenade; // 0xae9
    bool m_bIsLive; // 0xaea
    float m_DmgRadius; // 0xaec
    GameTime_t m_flDetonateTime; // 0xaf0
    float m_flWarnAITime; // 0xaf4
    float m_flDamage; // 0xaf8
    CUtlSymbolLarge m_iszBounceSound; // 0xb00
    CUtlString m_ExplosionSound; // 0xb08
    CHandle<T> m_hThrower; // 0xb14
    GameTime_t m_flNextAttack; // 0xb2c
    CHandle<T> m_hOriginalThrower; // 0xb30
};

// CColorCorrectionVolume (size: 0xab0)
struct CColorCorrectionVolume {
    float m_MaxWeight; // 0x890
    float m_FadeDuration; // 0x894
    float m_Weight; // 0x898
    char[512] m_lookupFilename; // 0x89c
    float m_LastEnterWeight; // 0xa9c
    GameTime_t m_LastEnterTime; // 0xaa0
    float m_LastExitWeight; // 0xaa4
    GameTime_t m_LastExitTime; // 0xaa8
};

// CCSPlayerController_ActionTrackingServices (size: 0x420)
struct CCSPlayerController_ActionTrackingServices {
    CUtlVector<T> m_perRoundStats; // 0x40
    CSMatchStats_t m_matchStats; // 0xc8
    int32_t m_iNumRoundKills; // 0x188
    int32_t m_iNumRoundKillsHeadshots; // 0x18c
    float m_flTotalRoundDamageDealt; // 0x190
};

// CBodyComponentBaseAnimGraph (size: 0xd10)
struct CBodyComponentBaseAnimGraph {
    CBaseAnimGraphController m_animationController; // 0x4b0
};

// CPulseCell_BaseYieldingInflow (size: 0x48)
struct CPulseCell_BaseYieldingInflow {
};

// PulseNodeDynamicOutflows_t (size: 0x18)
struct PulseNodeDynamicOutflows_t {
    CUtlVector<T> m_Outflows; // 0x0
};

// CFogVolume (size: 0x758)
struct CFogVolume {
    CUtlSymbolLarge m_fogName; // 0x730
    CUtlSymbolLarge m_postProcessName; // 0x738
    CUtlSymbolLarge m_colorCorrectionName; // 0x740
    bool m_bDisabled; // 0x750
    bool m_bInFogVolumesList; // 0x751
};

// CFuncRotating (size: 0x7f8)
struct CFuncRotating {
    CEntityIOOutput m_OnStopped; // 0x730
    CEntityIOOutput m_OnStarted; // 0x748
    CEntityIOOutput m_OnReachedStart; // 0x760
    RotationVector m_localRotationVector; // 0x778
    float m_flFanFriction; // 0x784
    float m_flAttenuation; // 0x788
    float m_flVolume; // 0x78c
    float m_flTargetSpeed; // 0x790
    float m_flMaxSpeed; // 0x794
    float m_flBlockDamage; // 0x798
    CUtlSymbolLarge m_NoiseRunning; // 0x7a0
    bool m_bReversed; // 0x7a8
    bool m_bAccelDecel; // 0x7a9
    QAngle m_prevLocalAngles; // 0x7c0
    QAngle m_angStart; // 0x7cc
    bool m_bStopAtStartPos; // 0x7d8
    Vector m_vecClientOrigin; // 0x7dc
    QAngle m_vecClientAngles; // 0x7e8
};

// CTimerEntity (size: 0x518)
struct CTimerEntity {
    CEntityIOOutput m_OnTimer; // 0x4a8
    CEntityIOOutput m_OnTimerHigh; // 0x4c0
    CEntityIOOutput m_OnTimerLow; // 0x4d8
    int32_t m_iDisabled; // 0x4f0
    float m_flInitialDelay; // 0x4f4
    float m_flRefireTime; // 0x4f8
    bool m_bUpDownState; // 0x4fc
    int32_t m_iUseRandomTime; // 0x500
    bool m_bPauseAfterFiring; // 0x504
    float m_flLowerRandomBound; // 0x508
    float m_flUpperRandomBound; // 0x50c
    float m_flRemainingTime; // 0x510
    bool m_bPaused; // 0x514
};

// CBtActionMoveTo (size: 0xe8)
struct CBtActionMoveTo {
    CUtlString m_szDestinationInputKey; // 0x60
    CUtlString m_szHidingSpotInputKey; // 0x68
    CUtlString m_szThreatInputKey; // 0x70
    Vector m_vecDestination; // 0x78
    bool m_bAutoLookAdjust; // 0x84
    bool m_bComputePath; // 0x85
    float m_flDamagingAreasPenaltyCost; // 0x88
    CountdownTimer m_CheckApproximateCornersTimer; // 0x90
    CountdownTimer m_CheckHighPriorityItem; // 0xa8
    CountdownTimer m_RepathTimer; // 0xc0
    float m_flArrivalEpsilon; // 0xd8
    float m_flAdditionalArrivalEpsilon2D; // 0xdc
    float m_flHidingSpotCheckDistanceThreshold; // 0xe0
    float m_flNearestAreaDistanceThreshold; // 0xe4
};

// CPlayer_MovementServices_Humanoid (size: 0x278)
struct CPlayer_MovementServices_Humanoid {
    float m_flStepSoundTime; // 0x240
    float m_flFallVelocity; // 0x244
    Vector m_groundNormal; // 0x248
    float m_flSurfaceFriction; // 0x254
    CUtlString m_surfaceProps; // 0x258
    int32_t m_nStepside; // 0x268
    Vector m_vecSmoothedVelocity; // 0x26c
};

// CBaseEntityAPI (size: 0x8)
struct CBaseEntityAPI {
};

// CPulseCell_IsRequirementValid::Criteria_t (size: 0x1)
struct CPulseCell_IsRequirementValid_Criteria_t {
    bool m_bIsValid; // 0x0
};

// CWeaponG3SG1 (size: 0x1150)
struct CWeaponG3SG1 {
};

// CTriggerOnce (size: 0x8a8)
struct CTriggerOnce {
};

// CSMatchStats_t (size: 0xc0)
struct CSMatchStats_t {
    int32_t m_iEnemy5Ks; // 0x68
    int32_t m_iEnemy4Ks; // 0x6c
    int32_t m_iEnemy3Ks; // 0x70
    int32_t m_iEnemyKnifeKills; // 0x74
    int32_t m_iEnemyTaserKills; // 0x78
    int32_t m_iEnemy2Ks; // 0x7c
    int32_t m_iUtility_Count; // 0x80
    int32_t m_iUtility_Successes; // 0x84
    int32_t m_iUtility_Enemies; // 0x88
    int32_t m_iFlash_Count; // 0x8c
    int32_t m_iFlash_Successes; // 0x90
    float m_flHealthPointsRemovedTotal; // 0x94
    float m_flHealthPointsDealtTotal; // 0x98
    int32_t m_nShotsFiredTotal; // 0x9c
    int32_t m_nShotsOnTargetTotal; // 0xa0
    int32_t m_i1v1Count; // 0xa4
    int32_t m_i1v1Wins; // 0xa8
    int32_t m_i1v2Count; // 0xac
    int32_t m_i1v2Wins; // 0xb0
    int32_t m_iEntryCount; // 0xb4
    int32_t m_iEntryWins; // 0xb8
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

// CFuncMonitor (size: 0x770)
struct CFuncMonitor {
    CUtlString m_targetCamera; // 0x750
    int32_t m_nResolutionEnum; // 0x758
    bool m_bRenderShadows; // 0x75c
    bool m_bUseUniqueColorTarget; // 0x75d
    CUtlString m_brushModelName; // 0x760
    CHandle<T> m_hTargetCamera; // 0x768
    bool m_bEnabled; // 0x76c
    bool m_bDraw3DSkybox; // 0x76d
    bool m_bStartEnabled; // 0x76e
};

// CInfoVisibilityBox (size: 0x4c0)
struct CInfoVisibilityBox {
    int32_t m_nMode; // 0x4ac
    Vector m_vBoxSize; // 0x4b0
    bool m_bEnabled; // 0x4bc
};

// CGunTarget (size: 0x7d0)
struct CGunTarget {
    bool m_on; // 0x7b0
    CHandle<T> m_hTargetEnt; // 0x7b4
    CEntityIOOutput m_OnDeath; // 0x7b8
};

// CSoundEventConeEntity (size: 0x570)
struct CSoundEventConeEntity {
    float m_flEmitterAngle; // 0x558
    float m_flSweetSpotAngle; // 0x55c
    float m_flAttenMin; // 0x560
    float m_flAttenMax; // 0x564
    CUtlSymbolLarge m_iszParameterName; // 0x568
};

// CSoundOpvarSetOBBEntity (size: 0x6a8)
struct CSoundOpvarSetOBBEntity {
};

// CFilterMultipleAPI (size: 0x8)
struct CFilterMultipleAPI {
};

// CDecoyProjectile (size: 0xbf0)
struct CDecoyProjectile {
    int32_t m_nDecoyShotTick; // 0xbc8
    int32_t m_shotsRemaining; // 0xbcc
    GameTime_t m_fExpireTime; // 0xbd0
    uint16_t m_decoyWeaponDefIndex; // 0xbe0
};

// CPrecipitationBlocker (size: 0x730)
struct CPrecipitationBlocker {
};

// CSoundOpvarSetPathCornerEntity (size: 0x670)
struct CSoundOpvarSetPathCornerEntity {
    bool m_bUseParentedPath; // 0x658
    float m_flDistMinSqr; // 0x65c
    float m_flDistMaxSqr; // 0x660
    CUtlSymbolLarge m_iszPathCornerEntityName; // 0x668
};

// CPointClientCommand (size: 0x4a8)
struct CPointClientCommand {
};

// CHostageRescueZone (size: 0x8b0)
struct CHostageRescueZone {
};

// CWorld (size: 0x730)
struct CWorld {
};

// CPathMoverEntitySpawner (size: 0x508)
struct CPathMoverEntitySpawner {
    CUtlSymbolLarge[4] m_szSpawnTemplates; // 0x4a8
    int32_t m_nSpawnIndex; // 0x4c8
    CHandle<T> m_hPathMover; // 0x4cc
    float m_flSpawnFrequencySeconds; // 0x4d0
    float m_flSpawnFrequencyDistToNearestMover; // 0x4d4
    CHandle<T> m_mapSpawnedMoverTemplates; // 0x4d8
    int32_t m_nMaxActive; // 0x4f8
    GameTime_t m_flLastSpawnTime; // 0x4fc
    bool m_bEnabled; // 0x500
};

// CModelState (size: 0x250)
struct CModelState {
    CStrongHandle<T> m_hModel; // 0xa0
    CUtlSymbolLarge m_ModelName; // 0xa8
    bool m_bClientClothCreationSuppressed; // 0xf5
    uint64_t m_MeshGroupMask; // 0x1a0
    CNetworkUtlVectorBase< int32 > m_nBodyGroupChoices; // 0x1f0
    int8 m_nIdealMotionType; // 0x23a
    int8 m_nForceLOD; // 0x23b
    int8 m_nClothUpdateFlags; // 0x23c
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

// CWeaponGlock (size: 0x1150)
struct CWeaponGlock {
};

// CHEGrenadeProjectile (size: 0xbb0)
struct CHEGrenadeProjectile {
};

// CTriggerGravity (size: 0x890)
struct CTriggerGravity {
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

// CWeaponGalilAR (size: 0x1150)
struct CWeaponGalilAR {
};

// CFilterMassGreater (size: 0x4e8)
struct CFilterMassGreater {
    float m_fFilterMass; // 0x4e0
};

// CWeaponMP7 (size: 0x1150)
struct CWeaponMP7 {
};

// CCSWeaponBaseGun (size: 0x1150)
struct CCSWeaponBaseGun {
    int32_t m_zoomLevel; // 0x1130
    int32_t m_iBurstShotsRemaining; // 0x1134
    int32_t m_silencedModelIndex; // 0x1140
    bool m_inPrecache; // 0x1144
    bool m_bNeedsBoltAction; // 0x1145
    int32_t m_nRevolverCylinderIdx; // 0x1148
    bool m_bSkillReloadAvailable; // 0x114c
    bool m_bSkillReloadLiftedReloadKey; // 0x114d
    bool m_bSkillBoltInterruptAvailable; // 0x114e
    bool m_bSkillBoltLiftedFireKey; // 0x114f
};

// CEnableMotionFixup (size: 0x4a8)
struct CEnableMotionFixup {
};

// CLogicActiveAutosave (size: 0x4c8)
struct CLogicActiveAutosave {
    int32_t m_TriggerHitPoints; // 0x4b8
    float m_flTimeToTrigger; // 0x4bc
    GameTime_t m_flStartTime; // 0x4c0
    float m_flDangerousTime; // 0x4c4
};

// CMathCounter (size: 0x558)
struct CMathCounter {
    float m_flMin; // 0x4a8
    float m_flMax; // 0x4ac
    bool m_bHitMin; // 0x4b0
    bool m_bHitMax; // 0x4b1
    bool m_bDisabled; // 0x4b2
    CEntityOutputTemplate< float32, float32 > m_OutValue; // 0x4b8
    CEntityOutputTemplate< float32, float32 > m_OnGetValue; // 0x4d8
    CEntityIOOutput m_OnHitMin; // 0x4f8
    CEntityIOOutput m_OnHitMax; // 0x510
    CEntityIOOutput m_OnChangedFromMin; // 0x528
    CEntityIOOutput m_OnChangedFromMax; // 0x540
};

// CCSGameModeRules_ArmsRace (size: 0x88)
struct CCSGameModeRules_ArmsRace {
    CUtlString m_WeaponSequence; // 0x30
};

// CAttributeContainer (size: 0x2f8)
struct CAttributeContainer {
    CEconItemView m_Item; // 0x50
};

// CCSPlace (size: 0x750)
struct CCSPlace {
    CUtlSymbolLarge m_name; // 0x748
};

// PulseSelectorOutflowList_t (size: 0x18)
struct PulseSelectorOutflowList_t {
    CUtlVector<T> m_Outflows; // 0x0
};

// CFilterContext (size: 0x4e8)
struct CFilterContext {
    CUtlSymbolLarge m_iFilterContext; // 0x4e0
};

// CLightEnvironmentEntity (size: 0x738)
struct CLightEnvironmentEntity {
};

// CEnvDecal (size: 0x750)
struct CEnvDecal {
    CStrongHandle<T> m_hDecalMaterial; // 0x730
    float m_flWidth; // 0x738
    float m_flHeight; // 0x73c
    float m_flDepth; // 0x740
    uint32_t m_nRenderOrder; // 0x744
    bool m_bProjectOnWorld; // 0x748
    bool m_bProjectOnCharacters; // 0x749
    bool m_bProjectOnWater; // 0x74a
    float m_flDepthSortBias; // 0x74c
};

// CEnvVolumetricFogVolume (size: 0x4f0)
struct CEnvVolumetricFogVolume {
    bool m_bActive; // 0x4a8
    Vector m_vBoxMins; // 0x4ac
    Vector m_vBoxMaxs; // 0x4b8
    bool m_bStartDisabled; // 0x4c4
    bool m_bIndirectUseLPVs; // 0x4c5
    float m_flStrength; // 0x4c8
    int32_t m_nFalloffShape; // 0x4cc
    float m_flFalloffExponent; // 0x4d0
    float m_flHeightFogDepth; // 0x4d4
    float m_fHeightFogEdgeWidth; // 0x4d8
    float m_fIndirectLightStrength; // 0x4dc
    float m_fSunLightStrength; // 0x4e0
    float m_fNoiseStrength; // 0x4e4
    Color m_TintColor; // 0x4e8
    bool m_bOverrideTintColor; // 0x4ec
    bool m_bOverrideIndirectLightStrength; // 0x4ed
    bool m_bOverrideSunLightStrength; // 0x4ee
    bool m_bOverrideNoiseStrength; // 0x4ef
};

// CServerOnlyEntity (size: 0x4a8)
struct CServerOnlyEntity {
};

// CPulseCell_PlaySequence::CursorState_t (size: 0x4)
struct CPulseCell_PlaySequence_CursorState_t {
    CHandle<T> m_hTarget; // 0x0
};

// CBodyComponentSkeletonInstance (size: 0x4b0)
struct CBodyComponentSkeletonInstance {
    CSkeletonInstance m_skeletonInstance; // 0x80
};

// CItemGeneric (size: 0xbf0)
struct CItemGeneric {
    bool m_bHasTriggerRadius; // 0xad4
    bool m_bHasPickupRadius; // 0xad5
    float m_flPickupRadiusSqr; // 0xad8
    float m_flTriggerRadiusSqr; // 0xadc
    GameTime_t m_flLastPickupCheck; // 0xae0
    bool m_bPlayerCounterListenerAdded; // 0xae4
    bool m_bPlayerInTriggerRadius; // 0xae5
    CStrongHandle<T> m_hSpawnParticleEffect; // 0xae8
    CUtlSymbolLarge m_pAmbientSoundEffect; // 0xaf0
    bool m_bAutoStartAmbientSound; // 0xaf8
    CUtlSymbolLarge m_pSpawnScriptFunction; // 0xb00
    CStrongHandle<T> m_hPickupParticleEffect; // 0xb08
    CUtlSymbolLarge m_pPickupSoundEffect; // 0xb10
    CUtlSymbolLarge m_pPickupScriptFunction; // 0xb18
    CStrongHandle<T> m_hTimeoutParticleEffect; // 0xb20
    CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xb28
    CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xb30
    CUtlSymbolLarge m_pPickupFilterName; // 0xb38
    CHandle<T> m_hPickupFilter; // 0xb40
    CEntityIOOutput m_OnPickup; // 0xb48
    CEntityIOOutput m_OnTimeout; // 0xb60
    CEntityIOOutput m_OnTriggerStartTouch; // 0xb78
    CEntityIOOutput m_OnTriggerTouch; // 0xb90
    CEntityIOOutput m_OnTriggerEndTouch; // 0xba8
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xbc0
    float m_flPickupRadius; // 0xbc8
    float m_flTriggerRadius; // 0xbcc
    CUtlSymbolLarge m_pTriggerSoundEffect; // 0xbd0
    bool m_bGlowWhenInTrigger; // 0xbd8
    Color m_glowColor; // 0xbd9
    bool m_bUseable; // 0xbdd
    CHandle<T> m_hTriggerHelper; // 0xbe0
};

// CPointValueRemapper (size: 0x650)
struct CPointValueRemapper {
    bool m_bDisabled; // 0x4a8
    bool m_bUpdateOnClient; // 0x4a9
    ValueRemapperInputType_t m_nInputType; // 0x4ac
    CUtlSymbolLarge m_iszRemapLineStartName; // 0x4b0
    CUtlSymbolLarge m_iszRemapLineEndName; // 0x4b8
    CHandle<T> m_hRemapLineStart; // 0x4c0
    CHandle<T> m_hRemapLineEnd; // 0x4c4
    float m_flMaximumChangePerSecond; // 0x4c8
    float m_flDisengageDistance; // 0x4cc
    float m_flEngageDistance; // 0x4d0
    bool m_bRequiresUseKey; // 0x4d4
    ValueRemapperOutputType_t m_nOutputType; // 0x4d8
    CUtlSymbolLarge m_iszOutputEntityName; // 0x4e0
    CUtlSymbolLarge m_iszOutputEntity2Name; // 0x4e8
    CUtlSymbolLarge m_iszOutputEntity3Name; // 0x4f0
    CUtlSymbolLarge m_iszOutputEntity4Name; // 0x4f8
    CHandle<T> m_hOutputEntities; // 0x500
    ValueRemapperHapticsType_t m_nHapticsType; // 0x518
    ValueRemapperMomentumType_t m_nMomentumType; // 0x51c
    float m_flMomentumModifier; // 0x520
    float m_flSnapValue; // 0x524
    float m_flCurrentMomentum; // 0x528
    ValueRemapperRatchetType_t m_nRatchetType; // 0x52c
    float m_flRatchetOffset; // 0x530
    float m_flInputOffset; // 0x534
    bool m_bEngaged; // 0x538
    bool m_bFirstUpdate; // 0x539
    float m_flPreviousValue; // 0x53c
    GameTime_t m_flPreviousUpdateTickTime; // 0x540
    Vector m_vecPreviousTestPoint; // 0x544
    CHandle<T> m_hUsingPlayer; // 0x550
    float m_flCustomOutputValue; // 0x554
    CUtlSymbolLarge m_iszSoundEngage; // 0x558
    CUtlSymbolLarge m_iszSoundDisengage; // 0x560
    CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x568
    CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x570
    CUtlSymbolLarge m_iszSoundMovingLoop; // 0x578
    CEntityOutputTemplate< float32, float32 > m_Position; // 0x598
    CEntityOutputTemplate< float32, float32 > m_PositionDelta; // 0x5b8
    CEntityIOOutput m_OnReachedValueZero; // 0x5d8
    CEntityIOOutput m_OnReachedValueOne; // 0x5f0
    CEntityIOOutput m_OnReachedValueCustom; // 0x608
    CEntityIOOutput m_OnEngage; // 0x620
    CEntityIOOutput m_OnDisengage; // 0x638
};

// CBtNodeConditionInactive (size: 0x98)
struct CBtNodeConditionInactive {
    float m_flRoundStartThresholdSeconds; // 0x78
    float m_flSensorInactivityThresholdSeconds; // 0x7c
    CountdownTimer m_SensorInactivityTimer; // 0x80
};

// CCSGO_TeamIntroCounterTerroristPosition (size: 0xcc0)
struct CCSGO_TeamIntroCounterTerroristPosition {
};

// CRagdollProp (size: 0xb70)
struct CRagdollProp {
    ragdoll_t m_ragdoll; // 0xa30
    bool m_bStartDisabled; // 0xa80
    CNetworkUtlVectorBase< bool > m_ragEnabled; // 0xa88
    CNetworkUtlVectorBase< Vector > m_ragPos; // 0xaa0
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // 0xab8
    uint32_t m_lastUpdateTickCount; // 0xad0
    bool m_allAsleep; // 0xad4
    bool m_bFirstCollisionAfterLaunch; // 0xad5
    CHandle<T> m_hDamageEntity; // 0xad8
    CHandle<T> m_hKiller; // 0xadc
    CHandle<T> m_hPhysicsAttacker; // 0xae0
    GameTime_t m_flLastPhysicsInfluenceTime; // 0xae4
    GameTime_t m_flFadeOutStartTime; // 0xae8
    float m_flFadeTime; // 0xaec
    VectorWS m_vecLastOrigin; // 0xaf0
    GameTime_t m_flAwakeTime; // 0xafc
    GameTime_t m_flLastOriginChangeTime; // 0xb00
    CUtlSymbolLarge m_strOriginClassName; // 0xb08
    CUtlSymbolLarge m_strSourceClassName; // 0xb10
    bool m_bHasBeenPhysgunned; // 0xb18
    bool m_bAllowStretch; // 0xb19
    float m_flBlendWeight; // 0xb1c
    float m_flDefaultFadeScale; // 0xb20
    CUtlVector<T> m_ragdollMins; // 0xb28
    CUtlVector<T> m_ragdollMaxs; // 0xb40
    bool m_bShouldDeleteActivationRecord; // 0xb58
};

// CScriptComponent (size: 0x38)
struct CScriptComponent {
    CUtlSymbolLarge m_scriptClassName; // 0x30
};

// CFuncTrain (size: 0x7f8)
struct CFuncTrain {
    CHandle<T> m_hCurrentTarget; // 0x7d8
    bool m_activated; // 0x7dc
    CHandle<T> m_hEnemy; // 0x7e0
    float m_flBlockDamage; // 0x7e4
    GameTime_t m_flNextBlockTime; // 0x7e8
    CUtlSymbolLarge m_iszLastTarget; // 0x7f0
};

// CAI_ChangeHintGroup (size: 0x4c8)
struct CAI_ChangeHintGroup {
    int32_t m_iSearchType; // 0x4a8
    CUtlSymbolLarge m_strSearchName; // 0x4b0
    CUtlSymbolLarge m_strNewHintGroup; // 0x4b8
    float m_flRadius; // 0x4c0
};

// CCSPlayer_BuyServices (size: 0x158)
struct CCSPlayer_BuyServices {
    CUtlVector<T> m_vecSellbackPurchaseEntries; // 0xd0
};

// CWeaponAug (size: 0x1150)
struct CWeaponAug {
};

// CPhysHinge (size: 0x678)
struct CPhysHinge {
    ConstraintSoundInfo m_soundInfo; // 0x510
    CEntityIOOutput m_NotifyMinLimitReached; // 0x5a8
    CEntityIOOutput m_NotifyMaxLimitReached; // 0x5c0
    bool m_bAtMinLimit; // 0x5d8
    bool m_bAtMaxLimit; // 0x5d9
    constraint_hingeparams_t m_hinge; // 0x5dc
    float m_hingeFriction; // 0x61c
    float m_systemLoadScale; // 0x620
    bool m_bIsAxisLocal; // 0x624
    float m_flMinRotation; // 0x628
    float m_flMaxRotation; // 0x62c
    float m_flInitialRotation; // 0x630
    float m_flMotorFrequency; // 0x634
    float m_flMotorDampingRatio; // 0x638
    float m_flAngleSpeed; // 0x63c
    float m_flAngleSpeedThreshold; // 0x640
    float m_flLimitsDebugVisRotation; // 0x644
    CEntityIOOutput m_OnStartMoving; // 0x648
    CEntityIOOutput m_OnStopMoving; // 0x660
};

// CBuyZone (size: 0x898)
struct CBuyZone {
    int32_t m_LegacyTeamNum; // 0x890
};

// CWeaponSSG08 (size: 0x1150)
struct CWeaponSSG08 {
};

// CLogicRelayAPI (size: 0x8)
struct CLogicRelayAPI {
};

// CInfoWorldLayer (size: 0x4d8)
struct CInfoWorldLayer {
    CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4a8
    CUtlSymbolLarge m_worldName; // 0x4c0
    CUtlSymbolLarge m_layerName; // 0x4c8
    bool m_bWorldLayerVisible; // 0x4d0
    bool m_bEntitiesSpawned; // 0x4d1
    bool m_bCreateAsChildSpawnGroup; // 0x4d2
    uint32_t m_hLayerSpawnGroup; // 0x4d4
};

// CBodyComponentBaseModelEntity (size: 0x4b0)
struct CBodyComponentBaseModelEntity {
};

// CLogicProximity (size: 0x4a8)
struct CLogicProximity {
};

// CPointGiveAmmo (size: 0x4b0)
struct CPointGiveAmmo {
    CHandle<T> m_pActivator; // 0x4a8
};

// FilterDamageType (size: 0x4e8)
struct FilterDamageType {
    int32_t m_iDamageType; // 0x4e0
};

// CPointCamera (size: 0x508)
struct CPointCamera {
    float m_FOV; // 0x4a8
    float m_Resolution; // 0x4ac
    bool m_bFogEnable; // 0x4b0
    Color m_FogColor; // 0x4b1
    float m_flFogStart; // 0x4b8
    float m_flFogEnd; // 0x4bc
    float m_flFogMaxDensity; // 0x4c0
    bool m_bActive; // 0x4c4
    bool m_bUseScreenAspectRatio; // 0x4c5
    float m_flAspectRatio; // 0x4c8
    bool m_bNoSky; // 0x4cc
    float m_fBrightness; // 0x4d0
    float m_flZFar; // 0x4d4
    float m_flZNear; // 0x4d8
    bool m_bCanHLTVUse; // 0x4dc
    bool m_bAlignWithParent; // 0x4dd
    bool m_bDofEnabled; // 0x4de
    float m_flDofNearBlurry; // 0x4e0
    float m_flDofNearCrisp; // 0x4e4
    float m_flDofFarCrisp; // 0x4e8
    float m_flDofFarBlurry; // 0x4ec
    float m_flDofTiltToGround; // 0x4f0
    float m_TargetFOV; // 0x4f4
    float m_DegreesPerSecond; // 0x4f8
    bool m_bIsOn; // 0x4fc
    CPointCamera* m_pNext; // 0x500
};

// CAttributeList (size: 0x78)
struct CAttributeList {
    CUtlVector<T> m_Attributes; // 0x8
    CAttributeManager* m_pManager; // 0x70
};

// CPulseCell_Inflow_Wait (size: 0x90)
struct CPulseCell_Inflow_Wait {
    CPulse_ResumePoint m_WakeResume; // 0x48
};

// CFilterProximity (size: 0x4e8)
struct CFilterProximity {
    float m_flRadius; // 0x4e0
};

// CCS2WeaponGraphController (size: 0x5d8)
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

// CEffectData (size: 0x70)
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

// CEntityDissolve (size: 0x760)
struct CEntityDissolve {
    float m_flFadeInStart; // 0x730
    float m_flFadeInLength; // 0x734
    float m_flFadeOutModelStart; // 0x738
    float m_flFadeOutModelLength; // 0x73c
    float m_flFadeOutStart; // 0x740
    float m_flFadeOutLength; // 0x744
    GameTime_t m_flStartTime; // 0x748
    EntityDisolveType_t m_nDissolveType; // 0x74c
    Vector m_vDissolverOrigin; // 0x750
    uint32_t m_nMagnitude; // 0x75c
};

// CCSGameRules (size: 0x11440)
struct CCSGameRules {
    bool m_bFreezePeriod; // 0xd8
    bool m_bWarmupPeriod; // 0xd9
    GameTime_t m_fWarmupPeriodEnd; // 0xdc
    GameTime_t m_fWarmupPeriodStart; // 0xe0
    bool m_bTerroristTimeOutActive; // 0xe4
    bool m_bCTTimeOutActive; // 0xe5
    float m_flTerroristTimeOutRemaining; // 0xe8
    float m_flCTTimeOutRemaining; // 0xec
    int32_t m_nTerroristTimeOuts; // 0xf0
    int32_t m_nCTTimeOuts; // 0xf4
    bool m_bTechnicalTimeOut; // 0xf8
    bool m_bMatchWaitingForResume; // 0xf9
    int32_t m_iFreezeTime; // 0xfc
    int32_t m_iRoundTime; // 0x100
    float m_fMatchStartTime; // 0x104
    GameTime_t m_fRoundStartTime; // 0x108
    GameTime_t m_flRestartRoundTime; // 0x10c
    bool m_bGameRestart; // 0x110
    float m_flGameStartTime; // 0x114
    float m_timeUntilNextPhaseStarts; // 0x118
    int32_t m_gamePhase; // 0x11c
    int32_t m_totalRoundsPlayed; // 0x120
    int32_t m_nRoundsPlayedThisPhase; // 0x124
    int32_t m_nOvertimePlaying; // 0x128
    int32_t m_iHostagesRemaining; // 0x12c
    bool m_bAnyHostageReached; // 0x130
    bool m_bMapHasBombTarget; // 0x131
    bool m_bMapHasRescueZone; // 0x132
    bool m_bMapHasBuyZone; // 0x133
    bool m_bIsQueuedMatchmaking; // 0x134
    int32_t m_nQueuedMatchmakingMode; // 0x138
    bool m_bIsValveDS; // 0x13c
    bool m_bLogoMap; // 0x13d
    bool m_bPlayAllStepSoundsOnServer; // 0x13e
    int32_t m_iSpectatorSlotCount; // 0x140
    int32_t m_MatchDevice; // 0x144
    bool m_bHasMatchStarted; // 0x148
    int32_t m_nNextMapInMapgroup; // 0x14c
    char[512] m_szTournamentEventName; // 0x150
    char[512] m_szTournamentEventStage; // 0x350
    char[512] m_szMatchStatTxt; // 0x550
    char[512] m_szTournamentPredictionsTxt; // 0x750
    int32_t m_nTournamentPredictionsPct; // 0x950
    GameTime_t m_flCMMItemDropRevealStartTime; // 0x954
    GameTime_t m_flCMMItemDropRevealEndTime; // 0x958
    bool m_bIsDroppingItems; // 0x95c
    bool m_bIsQuestEligible; // 0x95d
    bool m_bIsHltvActive; // 0x95e
    bool m_bBombPlanted; // 0x95f
    uint16[100] m_arrProhibitedItemIndices; // 0x960
    uint32[4] m_arrTournamentActiveCasterAccounts; // 0xa28
    int32_t m_numBestOfMaps; // 0xa38
    int32_t m_nHalloweenMaskListSeed; // 0xa3c
    bool m_bBombDropped; // 0xa40
    int32_t m_iRoundWinStatus; // 0xa44
    int32_t m_eRoundWinReason; // 0xa48
    bool m_bTCantBuy; // 0xa4c
    bool m_bCTCantBuy; // 0xa4d
    int32[30] m_iMatchStats_RoundResults; // 0xa50
    int32[30] m_iMatchStats_PlayersAlive_CT; // 0xac8
    int32[30] m_iMatchStats_PlayersAlive_T; // 0xb40
    float32[32] m_TeamRespawnWaveTimes; // 0xbb8
    GameTime_t[32] m_flNextRespawnWave; // 0xc38
    Vector m_vMinimapMins; // 0xcb8
    Vector m_vMinimapMaxs; // 0xcc4
    float32[8] m_MinimapVerticalSectionHeights; // 0xcd0
    uint64_t m_ullLocalMatchID; // 0xcf0
    int32[10] m_nEndMatchMapGroupVoteTypes; // 0xcf8
    int32[10] m_nEndMatchMapGroupVoteOptions; // 0xd20
    int32_t m_nEndMatchMapVoteWinner; // 0xd48
    int32_t m_iNumConsecutiveCTLoses; // 0xd4c
    int32_t m_iNumConsecutiveTerroristLoses; // 0xd50
    bool m_bHasHostageBeenTouched; // 0xd70
    GameTime_t m_flIntermissionStartTime; // 0xd74
    GameTime_t m_flIntermissionEndTime; // 0xd78
    bool m_bLevelInitialized; // 0xd7c
    int32_t m_iTotalRoundsPlayed; // 0xd80
    int32_t m_iUnBalancedRounds; // 0xd84
    bool m_endMatchOnRoundReset; // 0xd88
    bool m_endMatchOnThink; // 0xd89
    int32_t m_iNumTerrorist; // 0xd8c
    int32_t m_iNumCT; // 0xd90
    int32_t m_iNumSpawnableTerrorist; // 0xd94
    int32_t m_iNumSpawnableCT; // 0xd98
    CUtlVector<T> m_arrSelectedHostageSpawnIndices; // 0xda0
    int32_t m_nSpawnPointsRandomSeed; // 0xdb8
    bool m_bFirstConnected; // 0xdbc
    bool m_bCompleteReset; // 0xdbd
    bool m_bPickNewTeamsOnReset; // 0xdbe
    bool m_bScrambleTeamsOnRestart; // 0xdbf
    bool m_bSwapTeamsOnRestart; // 0xdc0
    CUtlVector<T> m_nEndMatchTiedVotes; // 0xdc8
    bool m_bNeedToAskPlayersForContinueVote; // 0xde4
    uint32_t m_numQueuedMatchmakingAccounts; // 0xde8
    float m_fAvgPlayerRank; // 0xdec
    char* m_pQueuedMatchmakingReservationString; // 0xdf0
    uint32_t m_numTotalTournamentDrops; // 0xdf8
    uint32_t m_numSpectatorsCountMax; // 0xdfc
    uint32_t m_numSpectatorsCountMaxTV; // 0xe00
    uint32_t m_numSpectatorsCountMaxLnk; // 0xe04
    int32_t m_nCTsAliveAtFreezetimeEnd; // 0xe10
    int32_t m_nTerroristsAliveAtFreezetimeEnd; // 0xe14
    bool m_bForceTeamChangeSilent; // 0xe18
    bool m_bLoadingRoundBackupData; // 0xe19
    int32_t m_nMatchInfoShowType; // 0xe50
    float m_flMatchInfoDecidedTime; // 0xe54
    int32_t mTeamDMLastWinningTeamNumber; // 0xe70
    float mTeamDMLastThinkTime; // 0xe74
    float m_flTeamDMLastAnnouncementTime; // 0xe78
    int32_t m_iAccountTerrorist; // 0xe7c
    int32_t m_iAccountCT; // 0xe80
    int32_t m_iSpawnPointCount_Terrorist; // 0xe84
    int32_t m_iSpawnPointCount_CT; // 0xe88
    int32_t m_iMaxNumTerrorists; // 0xe8c
    int32_t m_iMaxNumCTs; // 0xe90
    int32_t m_iLoserBonusMostRecentTeam; // 0xe94
    float m_tmNextPeriodicThink; // 0xe98
    bool m_bVoiceWonMatchBragFired; // 0xe9c
    float m_fWarmupNextChatNoticeTime; // 0xea0
    int32_t m_iHostagesRescued; // 0xea8
    int32_t m_iHostagesTouched; // 0xeac
    float m_flNextHostageAnnouncement; // 0xeb0
    bool m_bNoTerroristsKilled; // 0xeb4
    bool m_bNoCTsKilled; // 0xeb5
    bool m_bNoEnemiesKilled; // 0xeb6
    bool m_bCanDonateWeapons; // 0xeb7
    float m_firstKillTime; // 0xebc
    float m_firstBloodTime; // 0xec4
    bool m_hostageWasInjured; // 0xee0
    bool m_hostageWasKilled; // 0xee1
    bool m_bVoteCalled; // 0xef0
    bool m_bServerVoteOnReset; // 0xef1
    float m_flVoteCheckThrottle; // 0xef4
    bool m_bBuyTimeEnded; // 0xef8
    int32_t m_nLastFreezeEndBeep; // 0xefc
    bool m_bTargetBombed; // 0xf00
    bool m_bBombDefused; // 0xf01
    bool m_bMapHasBombZone; // 0xf02
    Vector m_vecMainCTSpawnPos; // 0xf50
    CUtlVector<T> m_CTSpawnPointsMasterList; // 0xf60
    CUtlVector<T> m_TerroristSpawnPointsMasterList; // 0xf78
    bool m_bRespawningAllRespawnablePlayers; // 0xf90
    int32_t m_iNextCTSpawnPoint; // 0xf94
    float m_flCTSpawnPointUsedTime; // 0xf98
    int32_t m_iNextTerroristSpawnPoint; // 0xf9c
    float m_flTerroristSpawnPointUsedTime; // 0xfa0
    CUtlVector<T> m_CTSpawnPoints; // 0xfa8
    CUtlVector<T> m_TerroristSpawnPoints; // 0xfc0
    bool m_bIsUnreservedGameServer; // 0xfd8
    float m_fAutobalanceDisplayTime; // 0xfdc
    bool m_bAllowWeaponSwitch; // 0x1018
    bool m_bRoundTimeWarningTriggered; // 0x1019
    GameTime_t m_phaseChangeAnnouncementTime; // 0x101c
    float m_fNextUpdateTeamClanNamesTime; // 0x1020
    GameTime_t m_flLastThinkTime; // 0x1024
    float m_fAccumulatedRoundOffDamage; // 0x1028
    int32_t m_nShorthandedBonusLastEvalRound; // 0x102c
    int32_t m_nMatchAbortedEarlyReason; // 0x1078
    bool m_bHasTriggeredRoundStartMusic; // 0x107c
    bool m_bSwitchingTeamsAtRoundReset; // 0x107d
    CCSGameModeRules* m_pGameModeRules; // 0x1098
    KeyValues3 m_BtGlobalBlackboard; // 0x10a0
    CHandle<T> m_hPlayerResource; // 0x1138
    CRetakeGameRules m_RetakeRules; // 0x1140
    CUtlVector<T> m_arrTeamUniqueKillWeaponsMatch; // 0x1330
    bool[4] m_bTeamLastKillUsedUniqueWeaponMatch; // 0x1390
    uint8_t m_nMatchEndCount; // 0x13b8
    int32_t m_nTTeamIntroVariant; // 0x13bc
    int32_t m_nCTTeamIntroVariant; // 0x13c0
    bool m_bTeamIntroPeriod; // 0x13c4
    GameTime_t m_fTeamIntroPeriodEnd; // 0x13c8
    bool m_bPlayedTeamIntroVO; // 0x13cc
    int32_t m_iRoundEndWinnerTeam; // 0x13d0
    int32_t m_eRoundEndReason; // 0x13d4
    bool m_bRoundEndShowTimerDefend; // 0x13d8
    int32_t m_iRoundEndTimerTime; // 0x13dc
    CUtlString m_sRoundEndFunFactToken; // 0x13e0
    CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0x13e8
    int32_t m_iRoundEndFunFactData1; // 0x13ec
    int32_t m_iRoundEndFunFactData2; // 0x13f0
    int32_t m_iRoundEndFunFactData3; // 0x13f4
    CUtlString m_sRoundEndMessage; // 0x13f8
    int32_t m_iRoundEndPlayerCount; // 0x1400
    bool m_bRoundEndNoMusic; // 0x1404
    int32_t m_iRoundEndLegacy; // 0x1408
    uint8_t m_nRoundEndCount; // 0x140c
    int32_t m_iRoundStartRoundNumber; // 0x1410
    uint8_t m_nRoundStartCount; // 0x1414
    double m_flLastPerfSampleTime; // 0x5420
};

// CPulseCell_Outflow_CycleShuffled (size: 0x60)
struct CPulseCell_Outflow_CycleShuffled {
    CUtlVector<T> m_Outputs; // 0x48
};

// CBaseCSGrenadeProjectile (size: 0xbb0)
struct CBaseCSGrenadeProjectile {
    Vector m_vInitialPosition; // 0xb40
    Vector m_vInitialVelocity; // 0xb4c
    int32_t m_nBounces; // 0xb58
    CStrongHandle<T> m_nExplodeEffectIndex; // 0xb60
    int32_t m_nExplodeEffectTickBegin; // 0xb68
    Vector m_vecExplodeEffectOrigin; // 0xb6c
    GameTime_t m_flSpawnTime; // 0xb78
    uint8_t m_unOGSExtraFlags; // 0xb7c
    bool m_bDetonationRecorded; // 0xb7d
    uint16_t m_nItemIndex; // 0xb7e
    Vector m_vecOriginalSpawnLocation; // 0xb80
    GameTime_t m_flLastBounceSoundTime; // 0xb8c
    RotationVector m_vecGrenadeSpin; // 0xb90
    Vector m_vecLastHitSurfaceNormal; // 0xb9c
    int32_t m_nTicksAtZeroVelocity; // 0xba8
    bool m_bHasEverHitEnemy; // 0xbac
};

// CPhysConstraint (size: 0x508)
struct CPhysConstraint {
    CUtlSymbolLarge m_nameAttach1; // 0x4b0
    CUtlSymbolLarge m_nameAttach2; // 0x4b8
    CHandle<T> m_hAttach1; // 0x4c0
    CHandle<T> m_hAttach2; // 0x4c4
    CUtlSymbolLarge m_nameAttachment1; // 0x4c8
    CUtlSymbolLarge m_nameAttachment2; // 0x4d0
    CUtlSymbolLarge m_breakSound; // 0x4d8
    float m_forceLimit; // 0x4e0
    float m_torqueLimit; // 0x4e4
    float m_minTeleportDistance; // 0x4e8
    bool m_bSnapObjectPositions; // 0x4ec
    bool m_bTreatEntity1AsInfiniteMass; // 0x4ed
    CEntityIOOutput m_OnBreak; // 0x4f0
};

// CLogicAchievement (size: 0x4d0)
struct CLogicAchievement {
    bool m_bDisabled; // 0x4a8
    CUtlSymbolLarge m_iszAchievementEventID; // 0x4b0
    CEntityIOOutput m_OnFired; // 0x4b8
};

// CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t (size: 0x10)
struct CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t {
    CEconItemView* pItem; // 0x0
    uint16_t team; // 0x8
    uint16_t slot; // 0xa
};

// CLightComponent (size: 0x1c0)
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
    bool m_bPvsModifyEntity; // 0x1b8
};

// CCSWeaponBase (size: 0x1130)
struct CCSWeaponBase {
    bool m_bRemoveable; // 0xe20
    bool m_bPlayerAmmoStockOnPickup; // 0xe21
    bool m_bRequireUseToTouch; // 0xe22
    WeaponGameplayAnimState m_iWeaponGameplayAnimState; // 0xe24
    GameTime_t m_flWeaponGameplayAnimStateTimestamp; // 0xe28
    GameTime_t m_flInspectCancelCompleteTime; // 0xe2c
    bool m_bInspectPending; // 0xe30
    bool m_bInspectShouldLoop; // 0xe31
    int32_t m_nLastEmptySoundCmdNum; // 0xe5c
    bool m_bFireOnEmpty; // 0xe78
    CEntityIOOutput m_OnPlayerPickup; // 0xe80
    CSWeaponMode m_weaponMode; // 0xe98
    float m_flTurningInaccuracyDelta; // 0xe9c
    Vector m_vecTurningInaccuracyEyeDirLast; // 0xea0
    float m_flTurningInaccuracy; // 0xeac
    float m_fAccuracyPenalty; // 0xeb0
    GameTime_t m_flLastAccuracyUpdateTime; // 0xeb4
    float m_fAccuracySmoothedForZoom; // 0xeb8
    int32_t m_iRecoilIndex; // 0xebc
    float m_flRecoilIndex; // 0xec0
    bool m_bBurstMode; // 0xec4
    GameTick_t m_nPostponeFireReadyTicks; // 0xec8
    float m_flPostponeFireReadyFrac; // 0xecc
    bool m_bInReload; // 0xed0
    GameTime_t m_flDroppedAtTime; // 0xed4
    bool m_bIsHauledBack; // 0xed8
    bool m_bSilencerOn; // 0xed9
    GameTime_t m_flTimeSilencerSwitchComplete; // 0xedc
    float m_flWeaponActionPlaybackRate; // 0xee0
    int32_t m_iOriginalTeamNumber; // 0xee4
    int32_t m_iMostRecentTeamNumber; // 0xee8
    bool m_bDroppedNearBuyZone; // 0xeec
    float m_flNextAttackRenderTimeOffset; // 0xef0
    bool m_bCanBePickedUp; // 0xf08
    bool m_bUseCanOverrideNextOwnerTouchTime; // 0xf09
    GameTime_t m_nextOwnerTouchTime; // 0xf0c
    GameTime_t m_nextPrevOwnerTouchTime; // 0xf10
    GameTime_t m_nextPrevOwnerUseTime; // 0xf18
    CHandle<T> m_hPrevOwner; // 0xf1c
    GameTick_t m_nDropTick; // 0xf20
    bool m_bWasActiveWeaponWhenDropped; // 0xf24
    bool m_donated; // 0xf44
    GameTime_t m_fLastShotTime; // 0xf48
    bool m_bWasOwnedByCT; // 0xf4c
    bool m_bWasOwnedByTerrorist; // 0xf4d
    int32_t m_numRemoveUnownedWeaponThink; // 0xf50
    CIronSightController m_IronSightController; // 0xf58
    int32_t m_iIronSightMode; // 0xf70
    GameTime_t m_flLastLOSTraceFailureTime; // 0xf74
    float m_flWatTickOffset; // 0xf78
    GameTime_t m_flLastShakeTime; // 0xf88
};

// CPointClientUIDialog (size: 0x898)
struct CPointClientUIDialog {
    CHandle<T> m_hActivator; // 0x890
    bool m_bStartEnabled; // 0x894
};

// CLogicLineToEntity (size: 0x4e0)
struct CLogicLineToEntity {
    CEntityOutputTemplate< Vector, Vector > m_Line; // 0x4a8
    CUtlSymbolLarge m_SourceName; // 0x4d0
    CHandle<T> m_StartEntity; // 0x4d8
    CHandle<T> m_EndEntity; // 0x4dc
};

// CSoundAreaEntitySphere (size: 0x4d0)
struct CSoundAreaEntitySphere {
    float m_flRadius; // 0x4c8
};

// CCSPlayer_ActionTrackingServices (size: 0x310)
struct CCSPlayer_ActionTrackingServices {
    CHandle<T> m_hLastWeaponBeforeC4AutoSwitch; // 0x1f8
    bool m_bIsRescuing; // 0x224
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x228
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0x298
};

// CPhysicalButton (size: 0x8b0)
struct CPhysicalButton {
};

// CInfoSpawnGroupLoadUnload (size: 0x580)
struct CInfoSpawnGroupLoadUnload {
    CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4a8
    CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x4c0
    CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x4d8
    CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x4f0
    CUtlSymbolLarge m_iszSpawnGroupName; // 0x508
    CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x510
    CUtlSymbolLarge m_iszLandmarkName; // 0x518
    CUtlString m_sFixedSpawnGroupName; // 0x520
    float m_flTimeoutInterval; // 0x528
    bool m_bAutoActivate; // 0x52c
    bool m_bUnloadingStarted; // 0x52d
    bool m_bQueueActiveSpawnGroupChange; // 0x52e
    bool m_bQueueFinishLoading; // 0x52f
};

// CSoundAreaEntityOrientedBox (size: 0x4e0)
struct CSoundAreaEntityOrientedBox {
    Vector m_vMin; // 0x4c8
    Vector m_vMax; // 0x4d4
};

// CCSObserver_MovementServices (size: 0x240)
struct CCSObserver_MovementServices {
};

// CPulseCell_Outflow_ListenForAnimgraphTag (size: 0x128)
struct CPulseCell_Outflow_ListenForAnimgraphTag {
    CPulse_ResumePoint m_OnStart; // 0x48
    CPulse_ResumePoint m_OnEnd; // 0x90
    CPulse_ResumePoint m_OnCanceled; // 0xd8
    CGlobalSymbol m_TagName; // 0x120
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

// CDecoyGrenade (size: 0x1170)
struct CDecoyGrenade {
};

// CEconItemView (size: 0x2a8)
struct CEconItemView {
    uint16_t m_iItemDefinitionIndex; // 0x38
    int32_t m_iEntityQuality; // 0x3c
    uint32_t m_iEntityLevel; // 0x40
    uint64_t m_iItemID; // 0x48
    uint32_t m_iItemIDHigh; // 0x50
    uint32_t m_iItemIDLow; // 0x54
    uint32_t m_iAccountID; // 0x58
    uint32_t m_iInventoryPosition; // 0x5c
    bool m_bInitialized; // 0x68
    CAttributeList m_AttributeList; // 0x70
    CAttributeList m_NetworkedDynamicAttributes; // 0xe8
    char[161] m_szCustomName; // 0x160
    char[161] m_szCustomNameOverride; // 0x201
};

// CIncendiaryGrenade (size: 0x1170)
struct CIncendiaryGrenade {
};

// CBaseDMStart (size: 0x4b0)
struct CBaseDMStart {
    CUtlSymbolLarge m_Master; // 0x4a8
};

// CBaseModelEntity (size: 0x730)
struct CBaseModelEntity {
    CRenderComponent* m_CRenderComponent; // 0x4a8
    CHitboxComponent m_CHitboxComponent; // 0x4b0
    HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x4c8
    HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x4cc
    HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x4d0
    HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x4d4
    HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x4d8
    int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0x4dc
    int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0x4e0
    int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0x4e4
    int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0x4e8
    int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0x4ec
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0x4f0
    GameTime_t m_flDissolveStartTime; // 0x4f8
    CEntityIOOutput m_OnIgnite; // 0x500
    RenderMode_t m_nRenderMode; // 0x518
    RenderFx_t m_nRenderFX; // 0x519
    bool m_bAllowFadeInView; // 0x51a
    Color m_clrRender; // 0x538
    CUtlVector<T> m_vecRenderAttributes; // 0x540
    bool m_bRenderToCubemaps; // 0x5a8
    bool m_bNoInterpolate; // 0x5a9
    CCollisionProperty m_Collision; // 0x5b0
    CGlowProperty m_Glow; // 0x660
    float m_flGlowBackfaceMult; // 0x6b8
    float m_fadeMinDist; // 0x6bc
    float m_fadeMaxDist; // 0x6c0
    float m_flFadeScale; // 0x6c4
    float m_flShadowStrength; // 0x6c8
    uint8_t m_nObjectCulling; // 0x6cc
    CNetworkViewOffsetVector m_vecViewOffset; // 0x6f8
    uint32[1] m_bvDisabledHitGroups; // 0x728
};

// fogplayerparams_t (size: 0x40)
struct fogplayerparams_t {
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

// CInstancedSceneEntity (size: 0x748)
struct CInstancedSceneEntity {
    CHandle<T> m_hOwner; // 0x730
    bool m_bHadOwner; // 0x734
    float m_flPostSpeakDelay; // 0x738
    float m_flPreDelay; // 0x73c
    bool m_bIsBackground; // 0x740
    bool m_bRemoveOnCompletion; // 0x741
    CHandle<T> m_hTarget; // 0x744
};

// CPulseCell_BaseValue (size: 0x48)
struct CPulseCell_BaseValue {
};

// CCitadelSoundOpvarSetOBB (size: 0x4f8)
struct CCitadelSoundOpvarSetOBB {
    CUtlSymbolLarge m_iszStackName; // 0x4a8
    CUtlSymbolLarge m_iszOperatorName; // 0x4b0
    CUtlSymbolLarge m_iszOpvarName; // 0x4b8
    Vector m_vDistanceInnerMins; // 0x4c0
    Vector m_vDistanceInnerMaxs; // 0x4cc
    Vector m_vDistanceOuterMins; // 0x4d8
    Vector m_vDistanceOuterMaxs; // 0x4e4
    int32_t m_nAABBDirection; // 0x4f0
};

// CSoundEventParameter (size: 0x4d0)
struct CSoundEventParameter {
    CUtlSymbolLarge m_iszParamName; // 0x4c0
    float m_flFloatValue; // 0x4c8
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

// CRotButton (size: 0x8b0)
struct CRotButton {
};

// CEnvViewPunch (size: 0x4b8)
struct CEnvViewPunch {
    float m_flRadius; // 0x4a8
    QAngle m_angViewPunch; // 0x4ac
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

// CItemKevlar (size: 0xac0)
struct CItemKevlar {
};

// CFuncShatterglass (size: 0x860)
struct CFuncShatterglass {
    matrix3x4_t m_matPanelTransform; // 0x730
    matrix3x4_t m_matPanelTransformWsTemp; // 0x760
    CUtlVector<T> m_vecShatterGlassShards; // 0x790
    Vector2D m_PanelSize; // 0x7a8
    GameTime_t m_flLastShatterSoundEmitTime; // 0x7b0
    GameTime_t m_flLastCleanupTime; // 0x7b4
    GameTime_t m_flInitAtTime; // 0x7b8
    float m_flGlassThickness; // 0x7bc
    float m_flSpawnInvulnerability; // 0x7c0
    bool m_bBreakSilent; // 0x7c4
    bool m_bBreakShardless; // 0x7c5
    bool m_bBroken; // 0x7c6
    bool m_bGlassNavIgnore; // 0x7c7
    bool m_bGlassInFrame; // 0x7c8
    bool m_bStartBroken; // 0x7c9
    uint8_t m_iInitialDamageType; // 0x7ca
    CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x7d0
    CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x7d8
    CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x7e0
    CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x7e8
    CUtlVector<T> m_vInitialDamagePositions; // 0x7f0
    CUtlVector<T> m_vExtraDamagePositions; // 0x808
    CUtlVector<T> m_vInitialPanelVertices; // 0x820
    CEntityIOOutput m_OnBroken; // 0x838
    uint8_t m_iSurfaceType; // 0x850
    CStrongHandle<T> m_hMaterialDamageBase; // 0x858
};

// CNavWalkable (size: 0x4a8)
struct CNavWalkable {
};

// CPlantedC4 (size: 0xdf0)
struct CPlantedC4 {
    bool m_bBombTicking; // 0xa28
    GameTime_t m_flC4Blow; // 0xa2c
    int32_t m_nBombSite; // 0xa30
    int32_t m_nSourceSoundscapeHash; // 0xa34
    bool m_bAbortDetonationBecauseWorldIsFrozen; // 0xa38
    CAttributeContainer m_AttributeManager; // 0xa40
    CEntityIOOutput m_OnBombDefused; // 0xd38
    CEntityIOOutput m_OnBombBeginDefuse; // 0xd50
    CEntityIOOutput m_OnBombDefuseAborted; // 0xd68
    bool m_bCannotBeDefused; // 0xd80
    EntitySpottedState_t m_entitySpottedState; // 0xd88
    int32_t m_nSpotRules; // 0xda0
    bool m_bHasExploded; // 0xda4
    bool m_bBombDefused; // 0xda5
    bool m_bTrainingPlacedByPlayer; // 0xda6
    float m_flTimerLength; // 0xda8
    bool m_bBeingDefused; // 0xdac
    GameTime_t m_fLastDefuseTime; // 0xdb4
    float m_flDefuseLength; // 0xdbc
    GameTime_t m_flDefuseCountDown; // 0xdc0
    CHandle<T> m_hBombDefuser; // 0xdc4
    int32_t m_iProgressBarTime; // 0xdc8
    bool m_bVoiceAlertFired; // 0xdcc
    bool[4] m_bVoiceAlertPlayed; // 0xdcd
    GameTime_t m_flNextBotBeepTime; // 0xdd4
    QAngle m_angCatchUpToPlayerEye; // 0xddc
    GameTime_t m_flLastSpinDetectionTime; // 0xde8
};

// CEnvSoundscapeProxyAlias_snd_soundscape_proxy (size: 0x540)
struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
};

// CVoteController (size: 0x658)
struct CVoteController {
    int32_t m_iActiveIssueIndex; // 0x4a8
    int32_t m_iOnlyTeamToVote; // 0x4ac
    int32[5] m_nVoteOptionCount; // 0x4b0
    int32_t m_nPotentialVotes; // 0x4c4
    bool m_bIsYesNoVote; // 0x4c8
    CountdownTimer m_acceptingVotesTimer; // 0x4d0
    CountdownTimer m_executeCommandTimer; // 0x4e8
    CountdownTimer m_resetVoteTimer; // 0x500
    int32[64] m_nVotesCast; // 0x518
    CPlayerSlot m_playerHoldingVote; // 0x618
    CPlayerSlot m_playerOverrideForVote; // 0x61c
    int32_t m_nHighestCountIndex; // 0x620
    CUtlVector<T> m_potentialIssues; // 0x628
    CUtlVector<T> m_VoteOptions; // 0x640
};

// CPulseCell_Inflow_Yield (size: 0x90)
struct CPulseCell_Inflow_Yield {
    CPulse_ResumePoint m_UnyieldResume; // 0x48
};

// CPulseMathlib (size: 0x1)
struct CPulseMathlib {
};

// CPhysImpact (size: 0x4b8)
struct CPhysImpact {
    float m_damage; // 0x4a8
    float m_distance; // 0x4ac
    CUtlSymbolLarge m_directionEntityName; // 0x4b0
};

// CBaseEntity (size: 0x4a8)
struct CBaseEntity {
    CBodyComponent* m_CBodyComponent; // 0x38
    CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40
    CUtlVector<T> m_aThinkFunctions; // 0x250
    int32_t m_iCurrentThinkContext; // 0x268
    GameTick_t m_nLastThinkTick; // 0x26c
    bool m_bDisabledContextThinks; // 0x270
    CTypedBitVec< 64 > m_isSteadyState; // 0x280
    float m_lastNetworkChange; // 0x288
    CUtlVector<T> m_ResponseContexts; // 0x298
    CUtlSymbolLarge m_iszResponseContext; // 0x2b0
    int32_t m_iHealth; // 0x2d8
    int32_t m_iMaxHealth; // 0x2dc
    uint8_t m_lifeState; // 0x2e0
    float m_flDamageAccumulator; // 0x2e4
    bool m_bTakesDamage; // 0x2e8
    TakeDamageFlags_t m_nTakeDamageFlags; // 0x2f0
    EntityPlatformTypes_t m_nPlatformType; // 0x2f8
    MoveCollide_t m_MoveCollide; // 0x2fa
    MoveType_t m_MoveType; // 0x2fb
    MoveType_t m_nActualMoveType; // 0x2fc
    uint8_t m_nWaterTouch; // 0x2fd
    uint8_t m_nSlimeTouch; // 0x2fe
    bool m_bRestoreInHierarchy; // 0x2ff
    CUtlSymbolLarge m_target; // 0x300
    CHandle<T> m_hDamageFilter; // 0x308
    CUtlSymbolLarge m_iszDamageFilterName; // 0x310
    float m_flMoveDoneTime; // 0x318
    CUtlString m_nSubclassID; // 0x31c
    float m_flAnimTime; // 0x328
    float m_flSimulationTime; // 0x32c
    GameTime_t m_flCreateTime; // 0x330
    bool m_bClientSideRagdoll; // 0x334
    uint8_t m_ubInterpolationFrame; // 0x335
    Vector m_vPrevVPhysicsUpdatePos; // 0x338
    uint8_t m_iTeamNum; // 0x344
    CUtlSymbolLarge m_iGlobalname; // 0x348
    int32_t m_iSentToClients; // 0x350
    float m_flSpeed; // 0x354
    CUtlString m_sUniqueHammerID; // 0x358
    uint32_t m_spawnflags; // 0x360
    GameTick_t m_nNextThinkTick; // 0x364
    int32_t m_nSimulationTick; // 0x368
    CEntityIOOutput m_OnKilled; // 0x370
    uint32_t m_fFlags; // 0x388
    Vector m_vecAbsVelocity; // 0x38c
    CNetworkVelocityVector m_vecVelocity; // 0x398
    Vector m_vecBaseVelocity; // 0x3c8
    int32_t m_nPushEnumCount; // 0x3d4
    CCollisionProperty* m_pCollision; // 0x3d8
    CHandle<T> m_hEffectEntity; // 0x3e0
    CHandle<T> m_hOwnerEntity; // 0x3e4
    uint32_t m_fEffects; // 0x3e8
    CHandle<T> m_hGroundEntity; // 0x3ec
    int32_t m_nGroundBodyIndex; // 0x3f0
    float m_flFriction; // 0x3f4
    float m_flElasticity; // 0x3f8
    float m_flGravityScale; // 0x3fc
    float m_flTimeScale; // 0x400
    float m_flWaterLevel; // 0x404
    bool m_bGravityDisabled; // 0x408
    bool m_bAnimatedEveryTick; // 0x409
    float m_flActualGravityScale; // 0x40c
    bool m_bGravityActuallyDisabled; // 0x410
    bool m_bDisableLowViolence; // 0x411
    uint8_t m_nWaterType; // 0x412
    int32_t m_iEFlags; // 0x414
    CEntityIOOutput m_OnUser1; // 0x418
    CEntityIOOutput m_OnUser2; // 0x430
    CEntityIOOutput m_OnUser3; // 0x448
    CEntityIOOutput m_OnUser4; // 0x460
    int32_t m_iInitialTeamNum; // 0x478
    GameTime_t m_flNavIgnoreUntilTime; // 0x47c
    QAngle m_vecAngVelocity; // 0x480
    bool m_bNetworkQuantizeOriginAndAngles; // 0x48c
    bool m_bLagCompensate; // 0x48d
    CHandle<T> m_pBlocker; // 0x490
    float m_flLocalTime; // 0x494
    float m_flVPhysicsUpdateLocalTime; // 0x498
    BloodType m_nBloodType; // 0x49c
    CPulseGraphInstance_ServerEntity* m_pPulseGraphInstance; // 0x4a0
};

// CPlayer_UseServices (size: 0x48)
struct CPlayer_UseServices {
};

// CGameSceneNodeHandle (size: 0x10)
struct CGameSceneNodeHandle {
    CEntityHandle m_hOwner; // 0x8
    CUtlString m_name; // 0xc
};

// CMarkupVolumeWithRef (size: 0x798)
struct CMarkupVolumeWithRef {
    bool m_bUseRef; // 0x778
    Vector m_vRefPosEntitySpace; // 0x77c
    VectorWS m_vRefPosWorldSpace; // 0x788
    float m_flRefDot; // 0x794
};

// CCSGO_TeamSelectCharacterPosition (size: 0xcc0)
struct CCSGO_TeamSelectCharacterPosition {
};

// CPulseCell_Unknown (size: 0x58)
struct CPulseCell_Unknown {
    KeyValues3 m_UnknownKeys; // 0x48
};

// CFuncPlatRot (size: 0x7f8)
struct CFuncPlatRot {
    QAngle m_end; // 0x7e0
    QAngle m_start; // 0x7ec
};

// CRagdollMagnet (size: 0x4c0)
struct CRagdollMagnet {
    bool m_bDisabled; // 0x4a8
    float m_radius; // 0x4ac
    float m_force; // 0x4b0
    VectorWS m_axis; // 0x4b4
};

// CInfoInstructorHintTarget (size: 0x4a8)
struct CInfoInstructorHintTarget {
};

// CSpriteAlias_env_glow (size: 0x7a0)
struct CSpriteAlias_env_glow {
};

// CFireCrackerBlast (size: 0x13b8)
struct CFireCrackerBlast {
};

// CSpotlightEnd (size: 0x750)
struct CSpotlightEnd {
    float m_flLightScale; // 0x730
    float m_Radius; // 0x734
    Vector m_vSpotlightDir; // 0x738
    VectorWS m_vSpotlightOrg; // 0x744
};

// CEnvSky (size: 0x790)
struct CEnvSky {
    CStrongHandle<T> m_hSkyMaterial; // 0x730
    CStrongHandle<T> m_hSkyMaterialLightingOnly; // 0x738
    bool m_bStartDisabled; // 0x740
    Color m_vTintColor; // 0x741
    Color m_vTintColorLightingOnly; // 0x745
    float m_flBrightnessScale; // 0x74c
    int32_t m_nFogType; // 0x750
    float m_flFogMinStart; // 0x754
    float m_flFogMinEnd; // 0x758
    float m_flFogMaxStart; // 0x75c
    float m_flFogMaxEnd; // 0x760
    bool m_bEnabled; // 0x764
};

// CInfoSpawnGroupLandmark (size: 0x4a8)
struct CInfoSpawnGroupLandmark {
};

// CPointAngleSensor (size: 0x548)
struct CPointAngleSensor {
    bool m_bDisabled; // 0x4a8
    CUtlSymbolLarge m_nLookAtName; // 0x4b0
    CHandle<T> m_hTargetEntity; // 0x4b8
    CHandle<T> m_hLookAtEntity; // 0x4bc
    float m_flDuration; // 0x4c0
    float m_flDotTolerance; // 0x4c4
    GameTime_t m_flFacingTime; // 0x4c8
    bool m_bFired; // 0x4cc
    CEntityIOOutput m_OnFacingLookat; // 0x4d0
    CEntityIOOutput m_OnNotFacingLookat; // 0x4e8
    CEntityOutputTemplate< Vector, Vector > m_TargetDir; // 0x500
    CEntityOutputTemplate< float32, float32 > m_FacingPercentage; // 0x528
};

// CEnvWindController (size: 0x600)
struct CEnvWindController {
    CEnvWindShared m_EnvWindShared; // 0x4a8
    float m_fDirectionVariation; // 0x5d8
    float m_fSpeedVariation; // 0x5dc
    float m_fTurbulence; // 0x5e0
    float m_fVolumeHalfExtentXY; // 0x5e4
    float m_fVolumeHalfExtentZ; // 0x5e8
    int32_t m_nVolumeResolutionXY; // 0x5ec
    int32_t m_nVolumeResolutionZ; // 0x5f0
    int32_t m_nClipmapLevels; // 0x5f4
    bool m_bIsMaster; // 0x5f8
    bool m_bFirstTime; // 0x5f9
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

// CGenericConstraint (size: 0x608)
struct CGenericConstraint {
    JointMotion_t m_nLinearMotionX; // 0x510
    JointMotion_t m_nLinearMotionY; // 0x514
    JointMotion_t m_nLinearMotionZ; // 0x518
    float m_flLinearFrequencyX; // 0x51c
    float m_flLinearFrequencyY; // 0x520
    float m_flLinearFrequencyZ; // 0x524
    float m_flLinearDampingRatioX; // 0x528
    float m_flLinearDampingRatioY; // 0x52c
    float m_flLinearDampingRatioZ; // 0x530
    float m_flMaxLinearImpulseX; // 0x534
    float m_flMaxLinearImpulseY; // 0x538
    float m_flMaxLinearImpulseZ; // 0x53c
    float m_flBreakAfterTimeX; // 0x540
    float m_flBreakAfterTimeY; // 0x544
    float m_flBreakAfterTimeZ; // 0x548
    GameTime_t m_flBreakAfterTimeStartTimeX; // 0x54c
    GameTime_t m_flBreakAfterTimeStartTimeY; // 0x550
    GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x554
    float m_flBreakAfterTimeThresholdX; // 0x558
    float m_flBreakAfterTimeThresholdY; // 0x55c
    float m_flBreakAfterTimeThresholdZ; // 0x560
    float m_flNotifyForceX; // 0x564
    float m_flNotifyForceY; // 0x568
    float m_flNotifyForceZ; // 0x56c
    float m_flNotifyForceMinTimeX; // 0x570
    float m_flNotifyForceMinTimeY; // 0x574
    float m_flNotifyForceMinTimeZ; // 0x578
    GameTime_t m_flNotifyForceLastTimeX; // 0x57c
    GameTime_t m_flNotifyForceLastTimeY; // 0x580
    GameTime_t m_flNotifyForceLastTimeZ; // 0x584
    bool m_bAxisNotifiedX; // 0x588
    bool m_bAxisNotifiedY; // 0x589
    bool m_bAxisNotifiedZ; // 0x58a
    JointMotion_t m_nAngularMotionX; // 0x58c
    JointMotion_t m_nAngularMotionY; // 0x590
    JointMotion_t m_nAngularMotionZ; // 0x594
    float m_flAngularFrequencyX; // 0x598
    float m_flAngularFrequencyY; // 0x59c
    float m_flAngularFrequencyZ; // 0x5a0
    float m_flAngularDampingRatioX; // 0x5a4
    float m_flAngularDampingRatioY; // 0x5a8
    float m_flAngularDampingRatioZ; // 0x5ac
    float m_flMaxAngularImpulseX; // 0x5b0
    float m_flMaxAngularImpulseY; // 0x5b4
    float m_flMaxAngularImpulseZ; // 0x5b8
    CEntityIOOutput m_NotifyForceReachedX; // 0x5c0
    CEntityIOOutput m_NotifyForceReachedY; // 0x5d8
    CEntityIOOutput m_NotifyForceReachedZ; // 0x5f0
};

// CPulseCell_Outflow_CycleRandom (size: 0x60)
struct CPulseCell_Outflow_CycleRandom {
    CUtlVector<T> m_Outputs; // 0x48
};

// CPulseCell_Step_PublicOutput (size: 0x50)
struct CPulseCell_Step_PublicOutput {
    PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48
};

// CEnvLaser (size: 0x7f8)
struct CEnvLaser {
    CUtlSymbolLarge m_iszLaserTarget; // 0x7d0
    CSprite* m_pSprite; // 0x7d8
    CUtlSymbolLarge m_iszSpriteName; // 0x7e0
    Vector m_firePosition; // 0x7e8
    float m_flStartFrame; // 0x7f4
};

// CSoundOpvarSetEntity (size: 0x500)
struct CSoundOpvarSetEntity {
    CUtlSymbolLarge m_iszStackName; // 0x4c0
    CUtlSymbolLarge m_iszOperatorName; // 0x4c8
    CUtlSymbolLarge m_iszOpvarName; // 0x4d0
    int32_t m_nOpvarType; // 0x4d8
    int32_t m_nOpvarIndex; // 0x4dc
    float m_flOpvarValue; // 0x4e0
    CUtlSymbolLarge m_OpvarValueString; // 0x4e8
    bool m_bSetOnSpawn; // 0x4f0
};

// CEnvBeverage (size: 0x4b0)
struct CEnvBeverage {
    bool m_CanInDispenser; // 0x4a8
    int32_t m_nBeverageType; // 0x4ac
};

// CPhysMotor (size: 0x510)
struct CPhysMotor {
    CUtlSymbolLarge m_nameAttach; // 0x4a8
    CUtlSymbolLarge m_nameAnchor; // 0x4b0
    CHandle<T> m_hAttachedObject; // 0x4b8
    CHandle<T> m_hAnchorObject; // 0x4bc
    float m_spinUp; // 0x4c0
    float m_spinDown; // 0x4c4
    float m_flMotorFriction; // 0x4c8
    float m_additionalAcceleration; // 0x4cc
    float m_angularAcceleration; // 0x4d0
    float m_flTorqueScale; // 0x4d4
    float m_flTargetSpeed; // 0x4d8
    float m_flSpeedWhenSpinUpOrSpinDownStarted; // 0x4dc
    CMotorController m_motor; // 0x4f0
};

// CLogicGameEvent (size: 0x4b0)
struct CLogicGameEvent {
    CUtlSymbolLarge m_iszEventName; // 0x4a8
};

// CPhysicsPropMultiplayer (size: 0xce0)
struct CPhysicsPropMultiplayer {
};

// CPhysExplosion (size: 0x4e8)
struct CPhysExplosion {
    bool m_bExplodeOnSpawn; // 0x4a8
    float m_flMagnitude; // 0x4ac
    float m_flDamage; // 0x4b0
    float m_radius; // 0x4b4
    CUtlSymbolLarge m_targetEntityName; // 0x4b8
    float m_flInnerRadius; // 0x4c0
    float m_flPushScale; // 0x4c4
    bool m_bConvertToDebrisWhenPossible; // 0x4c8
    bool m_bAffectInvulnerableEnts; // 0x4c9
    CEntityIOOutput m_OnPushedPlayer; // 0x4d0
};

// CSplineConstraint (size: 0x5b8)
struct CSplineConstraint {
    Vector m_vAnchorOffsetRestore; // 0x558
    CHandle<T> m_hSplineEntity; // 0x564
    bool m_bEnableLateralConstraint; // 0x570
    bool m_bEnableVerticalConstraint; // 0x571
    bool m_bEnableAngularConstraint; // 0x572
    bool m_bEnableLimit; // 0x573
    bool m_bFireEventsOnPath; // 0x574
    float m_flLinearFrequency; // 0x578
    float m_flLinarDampingRatio; // 0x57c
    float m_flJointFriction; // 0x580
    float m_flTransitionTime; // 0x584
    VectorWS m_vPreSolveAnchorPos; // 0x598
    GameTime_t m_StartTransitionTime; // 0x5a4
    Vector m_vTangentSpaceAnchorAtTransitionStart; // 0x5a8
};

// CLogicCompare (size: 0x530)
struct CLogicCompare {
    float m_flInValue; // 0x4a8
    float m_flCompareValue; // 0x4ac
    CEntityOutputTemplate< float32, float32 > m_OnLessThan; // 0x4b0
    CEntityOutputTemplate< float32, float32 > m_OnEqualTo; // 0x4d0
    CEntityOutputTemplate< float32, float32 > m_OnNotEqualTo; // 0x4f0
    CEntityOutputTemplate< float32, float32 > m_OnGreaterThan; // 0x510
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

// CFuncTankTrain (size: 0x870)
struct CFuncTankTrain {
    CEntityIOOutput m_OnDeath; // 0x858
};

// CPointClientUIWorldPanel (size: 0x8e8)
struct CPointClientUIWorldPanel {
    bool m_bIgnoreInput; // 0x890
    bool m_bLit; // 0x891
    bool m_bFollowPlayerAcrossTeleport; // 0x892
    float m_flWidth; // 0x894
    float m_flHeight; // 0x898
    float m_flDPI; // 0x89c
    float m_flInteractDistance; // 0x8a0
    float m_flDepthOffset; // 0x8a4
    uint32_t m_unOwnerContext; // 0x8a8
    uint32_t m_unHorizontalAlign; // 0x8ac
    uint32_t m_unVerticalAlign; // 0x8b0
    uint32_t m_unOrientation; // 0x8b4
    bool m_bAllowInteractionFromAllSceneWorlds; // 0x8b8
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x8c0
    bool m_bOpaque; // 0x8d8
    bool m_bNoDepth; // 0x8d9
    bool m_bVisibleWhenParentNoDraw; // 0x8da
    bool m_bRenderBackface; // 0x8db
    bool m_bUseOffScreenIndicator; // 0x8dc
    bool m_bExcludeFromSaveGames; // 0x8dd
    bool m_bGrabbable; // 0x8de
    bool m_bOnlyRenderToTexture; // 0x8df
    bool m_bDisableMipGen; // 0x8e0
    int32_t m_nExplicitImageLayout; // 0x8e4
};

// CSoundEventSphereEntity (size: 0x560)
struct CSoundEventSphereEntity {
    float m_flRadius; // 0x558
};

// CCSPlayerController_InGameMoneyServices (size: 0x58)
struct CCSPlayerController_InGameMoneyServices {
    bool m_bReceivesMoneyNextRound; // 0x40
    int32_t m_iMoneyEarnedForNextRound; // 0x44
    int32_t m_iAccount; // 0x48
    int32_t m_iStartAccount; // 0x4c
    int32_t m_iTotalCashSpent; // 0x50
    int32_t m_iCashSpentThisRound; // 0x54
};

// CRuleBrushEntity (size: 0x738)
struct CRuleBrushEntity {
};

// CMapVetoPickController (size: 0xea8)
struct CMapVetoPickController {
    bool m_bPlayedIntroVcd; // 0x4a8
    bool m_bNeedToPlayFiveSecondsRemaining; // 0x4a9
    double m_dblPreMatchDraftSequenceTime; // 0x4c8
    bool m_bPreMatchDraftStateChanged; // 0x4d0
    int32_t m_nDraftType; // 0x4d4
    int32_t m_nTeamWinningCoinToss; // 0x4d8
    int32[64] m_nTeamWithFirstChoice; // 0x4dc
    int32[7] m_nVoteMapIdsList; // 0x5dc
    int32[64] m_nAccountIDs; // 0x5f8
    int32[64] m_nMapId0; // 0x6f8
    int32[64] m_nMapId1; // 0x7f8
    int32[64] m_nMapId2; // 0x8f8
    int32[64] m_nMapId3; // 0x9f8
    int32[64] m_nMapId4; // 0xaf8
    int32[64] m_nMapId5; // 0xbf8
    int32[64] m_nStartingSide0; // 0xcf8
    int32_t m_nCurrentPhase; // 0xdf8
    int32_t m_nPhaseStartTick; // 0xdfc
    int32_t m_nPhaseDurationTicks; // 0xe00
    CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnMapVetoed; // 0xe08
    CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnMapPicked; // 0xe28
    CEntityOutputTemplate< int32, int32 > m_OnSidesPicked; // 0xe48
    CEntityOutputTemplate< int32, int32 > m_OnNewPhaseStarted; // 0xe68
    CEntityOutputTemplate< int32, int32 > m_OnLevelTransition; // 0xe88
};

// CAnimGraphNetworkedVariables (size: 0x208)
struct CAnimGraphNetworkedVariables {
    CNetworkUtlVectorBase< uint32 > m_PredNetBoolVariables; // 0x8
    CNetworkUtlVectorBase< uint8 > m_PredNetByteVariables; // 0x20
    CNetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables; // 0x38
    CNetworkUtlVectorBase< int32 > m_PredNetIntVariables; // 0x50
    CNetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables; // 0x68
    CNetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables; // 0x80
    CNetworkUtlVectorBase< float32 > m_PredNetFloatVariables; // 0x98
    CNetworkUtlVectorBase< Vector > m_PredNetVectorVariables; // 0xb0
    CNetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables; // 0xc8
    CNetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables; // 0xe0
    CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables; // 0xf8
    CNetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables; // 0x110
    CNetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables; // 0x128
    CNetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables; // 0x140
    CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables; // 0x158
    CNetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables; // 0x170
    CNetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables; // 0x188
    CNetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables; // 0x1a0
    CNetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables; // 0x1b8
    CNetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables; // 0x1d0
    int32_t m_nBoolVariablesCount; // 0x1e8
    int32_t m_nOwnerOnlyBoolVariablesCount; // 0x1ec
    int32_t m_nRandomSeedOffset; // 0x1f0
    float m_flLastTeleportTime; // 0x1f4
};

// CFuncPropRespawnZone (size: 0x4a8)
struct CFuncPropRespawnZone {
};

// CFilterModel (size: 0x4e8)
struct CFilterModel {
    CUtlSymbolLarge m_iFilterModel; // 0x4e0
};

// CWeaponP90 (size: 0x1150)
struct CWeaponP90 {
};

// CNavSpaceInfo (size: 0x4a8)
struct CNavSpaceInfo {
};

// CPhysSlideConstraint (size: 0x5d0)
struct CPhysSlideConstraint {
    VectorWS m_axisEnd; // 0x510
    float m_slideFriction; // 0x51c
    float m_systemLoadScale; // 0x520
    float m_initialOffset; // 0x524
    bool m_bEnableLinearConstraint; // 0x528
    bool m_bEnableAngularConstraint; // 0x529
    float m_flMotorFrequency; // 0x52c
    float m_flMotorDampingRatio; // 0x530
    bool m_bUseEntityPivot; // 0x534
    ConstraintSoundInfo m_soundInfo; // 0x538
};

// CPulseGameBlackboard (size: 0x4c0)
struct CPulseGameBlackboard {
    CUtlString m_strGraphName; // 0x4b0
    CUtlString m_strStateBlob; // 0x4b8
};

// CSoundEventEntityAlias_snd_event_point (size: 0x558)
struct CSoundEventEntityAlias_snd_event_point {
};

// CPulseCell_Value_RandomInt (size: 0x48)
struct CPulseCell_Value_RandomInt {
};

// CPointGamestatsCounter (size: 0x4b8)
struct CPointGamestatsCounter {
    CUtlSymbolLarge m_strStatisticName; // 0x4a8
    bool m_bDisabled; // 0x4b0
};

// CTextureBasedAnimatable (size: 0x768)
struct CTextureBasedAnimatable {
    bool m_bLoop; // 0x730
    float m_flFPS; // 0x734
    CStrongHandle<T> m_hPositionKeys; // 0x738
    CStrongHandle<T> m_hRotationKeys; // 0x740
    Vector m_vAnimationBoundsMin; // 0x748
    Vector m_vAnimationBoundsMax; // 0x754
    float m_flStartTime; // 0x760
    float m_flStartFrame; // 0x764
};

// CSprite (size: 0x7a0)
struct CSprite {
    CStrongHandle<T> m_hSpriteMaterial; // 0x730
    CHandle<T> m_hAttachedToEntity; // 0x738
    AttachmentHandle_t m_nAttachment; // 0x73c
    float m_flSpriteFramerate; // 0x740
    float m_flFrame; // 0x744
    GameTime_t m_flDieTime; // 0x748
    uint32_t m_nBrightness; // 0x758
    float m_flBrightnessDuration; // 0x75c
    float m_flSpriteScale; // 0x760
    float m_flScaleDuration; // 0x764
    bool m_bWorldSpaceScale; // 0x768
    float m_flGlowProxySize; // 0x76c
    float m_flHDRColorScale; // 0x770
    GameTime_t m_flLastTime; // 0x774
    float m_flMaxFrame; // 0x778
    float m_flStartScale; // 0x77c
    float m_flDestScale; // 0x780
    GameTime_t m_flScaleTimeStart; // 0x784
    int32_t m_nStartBrightness; // 0x788
    int32_t m_nDestBrightness; // 0x78c
    GameTime_t m_flBrightnessTimeStart; // 0x790
    int32_t m_nSpriteWidth; // 0x794
    int32_t m_nSpriteHeight; // 0x798
};

// CBaseMoveBehavior (size: 0x540)
struct CBaseMoveBehavior {
    int32_t m_iPositionInterpolator; // 0x500
    int32_t m_iRotationInterpolator; // 0x504
    float m_flAnimStartTime; // 0x508
    float m_flAnimEndTime; // 0x50c
    float m_flAverageSpeedAcrossFrame; // 0x510
    CPathKeyFrame* m_pCurrentKeyFrame; // 0x518
    CPathKeyFrame* m_pTargetKeyFrame; // 0x520
    CPathKeyFrame* m_pPreKeyFrame; // 0x528
    CPathKeyFrame* m_pPostKeyFrame; // 0x530
    float m_flTimeIntoFrame; // 0x538
    int32_t m_iDirection; // 0x53c
};

// CDynamicLight (size: 0x748)
struct CDynamicLight {
    uint8_t m_ActualFlags; // 0x730
    uint8_t m_Flags; // 0x731
    uint8_t m_LightStyle; // 0x732
    bool m_On; // 0x733
    float m_Radius; // 0x734
    int32_t m_Exponent; // 0x738
    float m_InnerAngle; // 0x73c
    float m_OuterAngle; // 0x740
    float m_SpotRadius; // 0x744
};

// CWeaponTaser (size: 0x1160)
struct CWeaponTaser {
    GameTime_t m_fFireTime; // 0x1150
    int32_t m_nLastAttackTick; // 0x1154
};

// CEnvCubemapBox (size: 0x590)
struct CEnvCubemapBox {
};

// CRotDoor (size: 0x938)
struct CRotDoor {
    bool m_bSolidBsp; // 0x930
};

// CPathMover (size: 0x620)
struct CPathMover {
    CUtlVector<T> m_vecMovers; // 0x5f0
    CHandle<T> m_hMoverSpawner; // 0x608
    CUtlSymbolLarge m_iszMoverSpawnerName; // 0x610
};

// CFuncVPhysicsClip (size: 0x738)
struct CFuncVPhysicsClip {
    bool m_bDisabled; // 0x730
};

// CPhysFixed (size: 0x530)
struct CPhysFixed {
    float m_flLinearFrequency; // 0x508
    float m_flLinearDampingRatio; // 0x50c
    float m_flAngularFrequency; // 0x510
    float m_flAngularDampingRatio; // 0x514
    bool m_bEnableLinearConstraint; // 0x518
    bool m_bEnableAngularConstraint; // 0x519
    CUtlSymbolLarge m_sBoneName1; // 0x520
    CUtlSymbolLarge m_sBoneName2; // 0x528
};

// CLogicNavigation (size: 0x4b8)
struct CLogicNavigation {
    bool m_isOn; // 0x4b0
    navproperties_t m_navProperty; // 0x4b4
};

// CPathSimple (size: 0x5b0)
struct CPathSimple {
    CPathQueryComponent m_CPathQueryComponent; // 0x4b0
    CUtlString m_pathString; // 0x5a0
    bool m_bClosedLoop; // 0x5a8
};

// CPathParticleRopeAlias_path_particle_rope_clientside (size: 0x590)
struct CPathParticleRopeAlias_path_particle_rope_clientside {
};

// CCSPointPulseAPI (size: 0x1)
struct CCSPointPulseAPI {
};

// CEnvWindVolume (size: 0x4e0)
struct CEnvWindVolume {
    bool m_bActive; // 0x4a8
    Vector m_vBoxMins; // 0x4ac
    Vector m_vBoxMaxs; // 0x4b8
    bool m_bStartDisabled; // 0x4c4
    int32_t m_nShape; // 0x4c8
    float m_fWindSpeedMultiplier; // 0x4cc
    float m_fWindTurbulenceMultiplier; // 0x4d0
    float m_fWindSpeedVariationMultiplier; // 0x4d4
    float m_fWindDirectionVariationMultiplier; // 0x4d8
};

// CFuncElectrifiedVolume (size: 0x788)
struct CFuncElectrifiedVolume {
    CUtlSymbolLarge m_EffectName; // 0x750
    CUtlSymbolLarge m_EffectInterpenetrateName; // 0x758
    CUtlSymbolLarge m_EffectZapName; // 0x760
    CUtlSymbolLarge m_iszEffectSource; // 0x768
};

// CCSMinimapBoundary (size: 0x4a8)
struct CCSMinimapBoundary {
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

// CSoundEventOBBEntity (size: 0x580)
struct CSoundEventOBBEntity {
    Vector m_vMins; // 0x558
    Vector m_vMaxs; // 0x564
};

// CFlashbangProjectile (size: 0xbc0)
struct CFlashbangProjectile {
    float m_flTimeToDetonate; // 0xbb0
    uint8_t m_numOpponentsHit; // 0xbb4
    uint8_t m_numTeammatesHit; // 0xbb5
};

// CTriggerMultiple (size: 0x8a8)
struct CTriggerMultiple {
    CEntityIOOutput m_OnTrigger; // 0x890
};

// CPhysBallSocket (size: 0x520)
struct CPhysBallSocket {
    float m_flJointFriction; // 0x508
    bool m_bEnableSwingLimit; // 0x50c
    float m_flSwingLimit; // 0x510
    bool m_bEnableTwistLimit; // 0x514
    float m_flMinTwistAngle; // 0x518
    float m_flMaxTwistAngle; // 0x51c
};

// CDebugHistory (size: 0x3e9490)
struct CDebugHistory {
    int32_t m_nNpcEvents; // 0x3e84e8
};

// CSoundOpvarSetPointBase (size: 0x550)
struct CSoundOpvarSetPointBase {
    bool m_bDisabled; // 0x4a8
    CEntityHandle m_hSource; // 0x4ac
    CUtlSymbolLarge m_iszSourceEntityName; // 0x4c8
    Vector m_vLastPosition; // 0x520
    float m_flRefreshTime; // 0x52c
    CUtlSymbolLarge m_iszStackName; // 0x530
    CUtlSymbolLarge m_iszOperatorName; // 0x538
    CUtlSymbolLarge m_iszOpvarName; // 0x540
    int32_t m_iOpvarIndex; // 0x548
    bool m_bUseAutoCompare; // 0x54c
    bool m_bFastRefresh; // 0x54d
};

// CPathKeyFrame (size: 0x500)
struct CPathKeyFrame {
    Vector m_Origin; // 0x4a8
    QAngle m_Angles; // 0x4b4
    Quaternion m_qAngle; // 0x4c0
    CUtlSymbolLarge m_iNextKey; // 0x4d0
    float m_flNextTime; // 0x4d8
    CPathKeyFrame* m_pNextKey; // 0x4e0
    CPathKeyFrame* m_pPrevKey; // 0x4e8
    float m_flMoveSpeed; // 0x4f0
};

// CWeaponCZ75a (size: 0x1160)
struct CWeaponCZ75a {
    bool m_bMagazineRemoved; // 0x1150
};

// CScriptTriggerPush (size: 0x8d8)
struct CScriptTriggerPush {
    Vector m_vExtent; // 0x8c8
};

// CRevertSaved (size: 0x740)
struct CRevertSaved {
    float m_loadTime; // 0x730
    float m_Duration; // 0x734
    float m_HoldTime; // 0x738
};

// CTriggerBombReset (size: 0x890)
struct CTriggerBombReset {
};

// CTriggerHurt (size: 0x910)
struct CTriggerHurt {
    float m_flOriginalDamage; // 0x890
    float m_flDamage; // 0x894
    float m_flDamageCap; // 0x898
    GameTime_t m_flLastDmgTime; // 0x89c
    float m_flForgivenessDelay; // 0x8a0
    DamageTypes_t m_bitsDamageInflict; // 0x8a4
    int32_t m_damageModel; // 0x8a8
    bool m_bNoDmgForce; // 0x8ac
    Vector m_vDamageForce; // 0x8b0
    bool m_thinkAlways; // 0x8bc
    float m_hurtThinkPeriod; // 0x8c0
    CEntityIOOutput m_OnHurt; // 0x8c8
    CEntityIOOutput m_OnHurtPlayer; // 0x8e0
    CUtlVector<T> m_hurtEntities; // 0x8f8
};

// CCSPlayer_WeaponServices (size: 0x18d8)
struct CCSPlayer_WeaponServices {
    GameTime_t m_flNextAttack; // 0xc0
    bool m_bIsLookingAtWeapon; // 0xc4
    bool m_bIsHoldingLookAtWeapon; // 0xc5
    CHandle<T> m_hSavedWeapon; // 0xc8
    int32_t m_nTimeToMelee; // 0xcc
    int32_t m_nTimeToSecondary; // 0xd0
    int32_t m_nTimeToPrimary; // 0xd4
    int32_t m_nTimeToSniperRifle; // 0xd8
    bool m_bIsBeingGivenItem; // 0xdc
    bool m_bIsPickingUpItemWithUse; // 0xdd
    bool m_bPickedUpWeapon; // 0xde
    bool m_bDisableAutoDeploy; // 0xdf
    bool m_bIsPickingUpGroundWeapon; // 0xe0
    CNetworkUtlVectorBase< uint8 > m_networkAnimTiming; // 0x18b8
    bool m_bBlockInspectUntilNextGraphUpdate; // 0x18d0
};

// CRetakeGameRules (size: 0x1f0)
struct CRetakeGameRules {
    int32_t m_nMatchSeed; // 0x138
    bool m_bBlockersPresent; // 0x13c
    bool m_bRoundInProgress; // 0x13d
    int32_t m_iFirstSecondHalfRound; // 0x140
    int32_t m_iBombSite; // 0x144
    CHandle<T> m_hBombPlanter; // 0x148
};

// CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable (size: 0x538)
struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
};

// CInfoInstructorHintBombTargetA (size: 0x4a8)
struct CInfoInstructorHintBombTargetA {
};

// CTeamplayRules (size: 0xd0)
struct CTeamplayRules {
};

// CScriptTriggerHurt (size: 0x920)
struct CScriptTriggerHurt {
    Vector m_vExtent; // 0x910
};

// CCSGO_WingmanIntroCharacterPosition (size: 0xcc0)
struct CCSGO_WingmanIntroCharacterPosition {
};

// CWeaponMP9 (size: 0x1150)
struct CWeaponMP9 {
};

// CTriggerDetectExplosion (size: 0x8d0)
struct CTriggerDetectExplosion {
    CEntityIOOutput m_OnDetectedExplosion; // 0x8b8
};

// CFilterName (size: 0x4e8)
struct CFilterName {
    CUtlSymbolLarge m_iFilterName; // 0x4e0
};

// CSmokeGrenadeProjectile (size: 0x2eb0)
struct CSmokeGrenadeProjectile {
    int32_t m_nSmokeEffectTickBegin; // 0xbd8
    bool m_bDidSmokeEffect; // 0xbdc
    int32_t m_nRandomSeed; // 0xbe0
    Vector m_vSmokeColor; // 0xbe4
    Vector m_vSmokeDetonationPos; // 0xbf0
    CNetworkUtlVectorBase< uint8 > m_VoxelFrameData; // 0xc00
    int32_t m_nVoxelFrameDataSize; // 0xc18
    int32_t m_nVoxelUpdate; // 0xc1c
    GameTime_t m_flLastBounce; // 0xc20
    GameTime_t m_fllastSimulationTime; // 0xc24
    bool m_bExplodeFromInferno; // 0x2ea8
    bool m_bDidGroundScorch; // 0x2ea9
};

// CBlood (size: 0x4c8)
struct CBlood {
    QAngle m_vecSprayAngles; // 0x4a8
    Vector m_vecSprayDir; // 0x4b4
    float m_flAmount; // 0x4c0
    BloodType m_Color; // 0x4c4
};

// CCSTeam (size: 0x820)
struct CCSTeam {
    int32_t m_nLastRecievedShorthandedRoundBonus; // 0x560
    int32_t m_nShorthandedRoundBonusStartRound; // 0x564
    bool m_bSurrendered; // 0x568
    char[512] m_szTeamMatchStat; // 0x569
    int32_t m_numMapVictories; // 0x76c
    int32_t m_scoreFirstHalf; // 0x770
    int32_t m_scoreSecondHalf; // 0x774
    int32_t m_scoreOvertime; // 0x778
    char[129] m_szClanTeamname; // 0x77c
    uint32_t m_iClanID; // 0x800
    char[8] m_szTeamFlagImage; // 0x804
    char[8] m_szTeamLogoImage; // 0x80c
    float m_flNextResourceTime; // 0x814
    int32_t m_iLastUpdateSentAt; // 0x818
};

// CRulePointEntity (size: 0x740)
struct CRulePointEntity {
    int32_t m_Score; // 0x738
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

// CFuncMoveLinearAlias_momentary_door (size: 0x838)
struct CFuncMoveLinearAlias_momentary_door {
};

// CBaseAnimGraph (size: 0xa20)
struct CBaseAnimGraph {
    CAnimGraphControllerManager m_graphControllerManager; // 0x730
    CAnimGraphControllerBase* m_pMainGraphController; // 0x7e0
    bool m_bInitiallyPopulateInterpHistory; // 0x7e8
    IChoreoServices* m_pChoreoServices; // 0x7f0
    bool m_bAnimGraphUpdateEnabled; // 0x7f8
    float m_flMaxSlopeDistance; // 0x7fc
    VectorWS m_vLastSlopeCheckPos; // 0x800
    uint32_t m_nAnimGraphUpdateId; // 0x80c
    bool m_bAnimationUpdateScheduled; // 0x810
    Vector m_vecForce; // 0x814
    int32_t m_nForceBone; // 0x820
    PhysicsRagdollPose_t m_RagdollPose; // 0x838
    bool m_bRagdollEnabled; // 0x860
    bool m_bRagdollClientSide; // 0x861
    CTransform m_xParentedRagdollRootInEntitySpace; // 0x870
};

// CEnvCubemapFog (size: 0x4f8)
struct CEnvCubemapFog {
    float m_flEndDistance; // 0x4a8
    float m_flStartDistance; // 0x4ac
    float m_flFogFalloffExponent; // 0x4b0
    bool m_bHeightFogEnabled; // 0x4b4
    float m_flFogHeightWidth; // 0x4b8
    float m_flFogHeightEnd; // 0x4bc
    float m_flFogHeightStart; // 0x4c0
    float m_flFogHeightExponent; // 0x4c4
    float m_flLODBias; // 0x4c8
    bool m_bActive; // 0x4cc
    bool m_bStartDisabled; // 0x4cd
    float m_flFogMaxOpacity; // 0x4d0
    int32_t m_nCubemapSourceType; // 0x4d4
    CStrongHandle<T> m_hSkyMaterial; // 0x4d8
    CUtlSymbolLarge m_iszSkyEntity; // 0x4e0
    CStrongHandle<T> m_hFogCubemapTexture; // 0x4e8
    bool m_bHasHeightFogEnd; // 0x4f0
    bool m_bFirstTime; // 0x4f1
};

// CPulseCell_InlineNodeSkipSelector (size: 0xb0)
struct CPulseCell_InlineNodeSkipSelector {
    PulseDocNodeID_t m_nFlowNodeID; // 0x48
    bool m_bAnd; // 0x4c
    PulseSelectorOutflowList_t m_PassOutflow; // 0x50
    CPulse_OutflowConnection m_FailOutflow; // 0x68
};

// CBaseDoor (size: 0x930)
struct CBaseDoor {
    QAngle m_angMoveEntitySpace; // 0x7c0
    Vector m_vecMoveDirParentSpace; // 0x7cc
    locksound_t m_ls; // 0x7d8
    bool m_bForceClosed; // 0x7f8
    bool m_bDoorGroup; // 0x7f9
    bool m_bLocked; // 0x7fa
    bool m_bIgnoreDebris; // 0x7fb
    bool m_bNoNPCs; // 0x7fc
    FuncDoorSpawnPos_t m_eSpawnPosition; // 0x800
    float m_flBlockDamage; // 0x804
    CUtlSymbolLarge m_NoiseMoving; // 0x808
    CUtlSymbolLarge m_NoiseArrived; // 0x810
    CUtlSymbolLarge m_NoiseMovingClosed; // 0x818
    CUtlSymbolLarge m_NoiseArrivedClosed; // 0x820
    CUtlSymbolLarge m_ChainTarget; // 0x828
    CEntityIOOutput m_OnBlockedClosing; // 0x830
    CEntityIOOutput m_OnBlockedOpening; // 0x848
    CEntityIOOutput m_OnUnblockedClosing; // 0x860
    CEntityIOOutput m_OnUnblockedOpening; // 0x878
    CEntityIOOutput m_OnFullyClosed; // 0x890
    CEntityIOOutput m_OnFullyOpen; // 0x8a8
    CEntityIOOutput m_OnClose; // 0x8c0
    CEntityIOOutput m_OnOpen; // 0x8d8
    CEntityIOOutput m_OnLockedUse; // 0x8f0
    bool m_bLoopMoveSound; // 0x908
    bool m_bCreateNavObstacle; // 0x928
    bool m_isChaining; // 0x929
    bool m_bIsUsable; // 0x92a
};

// CServerOnlyPointEntity (size: 0x4a8)
struct CServerOnlyPointEntity {
};

// CGameMoney (size: 0x780)
struct CGameMoney {
    CEntityIOOutput m_OnMoneySpent; // 0x740
    CEntityIOOutput m_OnMoneySpentFail; // 0x758
    int32_t m_nMoney; // 0x770
    CUtlString m_strAwardText; // 0x778
};

// CEnvHudHint (size: 0x4b0)
struct CEnvHudHint {
    CUtlSymbolLarge m_iszMessage; // 0x4a8
};

// CNullEntity (size: 0x4a8)
struct CNullEntity {
};

// CLogicalEntity (size: 0x4a8)
struct CLogicalEntity {
};

// CItemDefuser (size: 0xae0)
struct CItemDefuser {
    EntitySpottedState_t m_entitySpottedState; // 0xac0
    int32_t m_nSpotRules; // 0xad8
};

// CItemGenericTriggerHelper (size: 0x738)
struct CItemGenericTriggerHelper {
    CHandle<T> m_hParentItem; // 0x730
};

// CPlayer_WeaponServices (size: 0xb0)
struct CPlayer_WeaponServices {
    CHandle<T> m_hMyWeapons; // 0x48
    CHandle<T> m_hActiveWeapon; // 0x60
    CHandle<T> m_hLastWeapon; // 0x64
    uint16[32] m_iAmmo; // 0x68
    bool m_bPreventWeaponPickup; // 0xa8
};

// CRagdollPropAttached (size: 0xbb0)
struct CRagdollPropAttached {
    uint32_t m_boneIndexAttached; // 0xb70
    uint32_t m_ragdollAttachedObjectIndex; // 0xb74
    Vector m_attachmentPointBoneSpace; // 0xb78
    Vector m_attachmentPointRagdollSpace; // 0xb84
    bool m_bShouldDetach; // 0xb90
    bool m_bShouldDeleteAttachedActivationRecord; // 0xba0
};

// CItemDogtags (size: 0xad0)
struct CItemDogtags {
    CHandle<T> m_OwningPlayer; // 0xac0
    CHandle<T> m_KillingPlayer; // 0xac4
};

// CFuncPlat (size: 0x7e0)
struct CFuncPlat {
    CUtlSymbolLarge m_sNoise; // 0x7d8
};

// CBarnLight (size: 0xa20)
struct CBarnLight {
    bool m_bEnabled; // 0x730
    int32_t m_nColorMode; // 0x734
    Color m_Color; // 0x738
    float m_flColorTemperature; // 0x73c
    float m_flBrightness; // 0x740
    float m_flBrightnessScale; // 0x744
    int32_t m_nDirectLight; // 0x748
    int32_t m_nBakedShadowIndex; // 0x74c
    int32_t m_nLightPathUniqueId; // 0x750
    int32_t m_nLightMapUniqueId; // 0x754
    int32_t m_nLuminaireShape; // 0x758
    float m_flLuminaireSize; // 0x75c
    float m_flLuminaireAnisotropy; // 0x760
    CUtlString m_LightStyleString; // 0x768
    GameTime_t m_flLightStyleStartTime; // 0x770
    CUtlString m_QueuedLightStyleStrings; // 0x778
    CUtlString m_LightStyleEvents; // 0x790
    CHandle<T> m_LightStyleTargets; // 0x7a8
    CEntityIOOutput[4] m_StyleEvent; // 0x7c0
    CStrongHandle<T> m_hLightCookie; // 0x840
    float m_flShape; // 0x848
    float m_flSoftX; // 0x84c
    float m_flSoftY; // 0x850
    float m_flSkirt; // 0x854
    float m_flSkirtNear; // 0x858
    Vector m_vSizeParams; // 0x85c
    float m_flRange; // 0x868
    Vector m_vShear; // 0x86c
    int32_t m_nBakeSpecularToCubemaps; // 0x878
    Vector m_vBakeSpecularToCubemapsSize; // 0x87c
    int32_t m_nCastShadows; // 0x888
    int32_t m_nShadowMapSize; // 0x88c
    int32_t m_nShadowPriority; // 0x890
    bool m_bContactShadow; // 0x894
    bool m_bForceShadowsEnabled; // 0x895
    int32_t m_nBounceLight; // 0x898
    float m_flBounceScale; // 0x89c
    bool m_bDynamicBounce; // 0x8a0
    float m_flMinRoughness; // 0x8a4
    Vector m_vAlternateColor; // 0x8a8
    float m_fAlternateColorBrightness; // 0x8b4
    int32_t m_nFog; // 0x8b8
    float m_flFogStrength; // 0x8bc
    int32_t m_nFogShadows; // 0x8c0
    float m_flFogScale; // 0x8c4
    bool m_bFogMixedShadows; // 0x8c8
    float m_flFadeSizeStart; // 0x8cc
    float m_flFadeSizeEnd; // 0x8d0
    float m_flShadowFadeSizeStart; // 0x8d4
    float m_flShadowFadeSizeEnd; // 0x8d8
    bool m_bPrecomputedFieldsValid; // 0x8dc
    Vector m_vPrecomputedBoundsMins; // 0x8e0
    Vector m_vPrecomputedBoundsMaxs; // 0x8ec
    Vector m_vPrecomputedOBBOrigin; // 0x8f8
    QAngle m_vPrecomputedOBBAngles; // 0x904
    Vector m_vPrecomputedOBBExtent; // 0x910
    int32_t m_nPrecomputedSubFrusta; // 0x91c
    Vector m_vPrecomputedOBBOrigin0; // 0x920
    QAngle m_vPrecomputedOBBAngles0; // 0x92c
    Vector m_vPrecomputedOBBExtent0; // 0x938
    Vector m_vPrecomputedOBBOrigin1; // 0x944
    QAngle m_vPrecomputedOBBAngles1; // 0x950
    Vector m_vPrecomputedOBBExtent1; // 0x95c
    Vector m_vPrecomputedOBBOrigin2; // 0x968
    QAngle m_vPrecomputedOBBAngles2; // 0x974
    Vector m_vPrecomputedOBBExtent2; // 0x980
    Vector m_vPrecomputedOBBOrigin3; // 0x98c
    QAngle m_vPrecomputedOBBAngles3; // 0x998
    Vector m_vPrecomputedOBBExtent3; // 0x9a4
    Vector m_vPrecomputedOBBOrigin4; // 0x9b0
    QAngle m_vPrecomputedOBBAngles4; // 0x9bc
    Vector m_vPrecomputedOBBExtent4; // 0x9c8
    Vector m_vPrecomputedOBBOrigin5; // 0x9d4
    QAngle m_vPrecomputedOBBAngles5; // 0x9e0
    Vector m_vPrecomputedOBBExtent5; // 0x9ec
    bool m_bPvsModifyEntity; // 0x9f8
    CNetworkUtlVectorBase< uint16 > m_VisClusters; // 0xa00
};

// CInstructorEventEntity (size: 0x4c0)
struct CInstructorEventEntity {
    CUtlSymbolLarge m_iszName; // 0x4a8
    CUtlSymbolLarge m_iszHintTargetEntity; // 0x4b0
    CHandle<T> m_hTargetPlayer; // 0x4b8
};

// CWeaponTec9 (size: 0x1150)
struct CWeaponTec9 {
};

// CPathCorner (size: 0x4c8)
struct CPathCorner {
    float m_flWait; // 0x4a8
    float m_flRadius; // 0x4ac
    CEntityIOOutput m_OnPass; // 0x4b0
};

// CTriggerSndSosOpvar (size: 0xbf0)
struct CTriggerSndSosOpvar {
    CUtlVector<T> m_hTouchingPlayers; // 0x890
    Vector m_flPosition; // 0x8a8
    float m_flCenterSize; // 0x8b4
    float m_flMinVal; // 0x8b8
    float m_flMaxVal; // 0x8bc
    CUtlSymbolLarge m_opvarName; // 0x8c0
    CUtlSymbolLarge m_stackName; // 0x8c8
    CUtlSymbolLarge m_operatorName; // 0x8d0
    bool m_bVolIs2D; // 0x8d8
    char[256] m_opvarNameChar; // 0x8d9
    char[256] m_stackNameChar; // 0x9d9
    char[256] m_operatorNameChar; // 0xad9
    Vector m_VecNormPos; // 0xbdc
    float m_flNormCenterSize; // 0xbe8
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

// CPointCommentaryNode (size: 0xb00)
struct CPointCommentaryNode {
    CUtlSymbolLarge m_iszPreCommands; // 0xa20
    CUtlSymbolLarge m_iszPostCommands; // 0xa28
    CUtlSymbolLarge m_iszCommentaryFile; // 0xa30
    CUtlSymbolLarge m_iszViewTarget; // 0xa38
    CHandle<T> m_hViewTarget; // 0xa40
    CHandle<T> m_hViewTargetAngles; // 0xa44
    CUtlSymbolLarge m_iszViewPosition; // 0xa48
    CHandle<T> m_hViewPosition; // 0xa50
    CHandle<T> m_hViewPositionMover; // 0xa54
    bool m_bPreventMovement; // 0xa58
    bool m_bUnderCrosshair; // 0xa59
    bool m_bUnstoppable; // 0xa5a
    GameTime_t m_flFinishedTime; // 0xa5c
    Vector m_vecFinishOrigin; // 0xa60
    QAngle m_vecOriginalAngles; // 0xa6c
    QAngle m_vecFinishAngles; // 0xa78
    bool m_bPreventChangesWhileMoving; // 0xa84
    bool m_bDisabled; // 0xa85
    VectorWS m_vecTeleportOrigin; // 0xa88
    GameTime_t m_flAbortedPlaybackAt; // 0xa94
    CEntityIOOutput m_pOnCommentaryStarted; // 0xa98
    CEntityIOOutput m_pOnCommentaryStopped; // 0xab0
    bool m_bActive; // 0xac8
    GameTime_t m_flStartTime; // 0xacc
    float m_flStartTimeInCommentary; // 0xad0
    CUtlSymbolLarge m_iszTitle; // 0xad8
    CUtlSymbolLarge m_iszSpeakers; // 0xae0
    int32_t m_iNodeNumber; // 0xae8
    int32_t m_iNodeNumberMax; // 0xaec
    bool m_bListenedTo; // 0xaf0
};

// CMomentaryRotButton (size: 0x968)
struct CMomentaryRotButton {
    CEntityOutputTemplate< float32, float32 > m_Position; // 0x8b0
    CEntityIOOutput m_OnUnpressed; // 0x8d0
    CEntityIOOutput m_OnFullyOpen; // 0x8e8
    CEntityIOOutput m_OnFullyClosed; // 0x900
    CEntityIOOutput m_OnReachedPosition; // 0x918
    int32_t m_lastUsed; // 0x930
    QAngle m_start; // 0x934
    QAngle m_end; // 0x940
    float m_IdealYaw; // 0x94c
    CUtlSymbolLarge m_sNoise; // 0x950
    bool m_bUpdateTarget; // 0x958
    int32_t m_direction; // 0x95c
    float m_returnSpeed; // 0x960
    float m_flStartPosition; // 0x964
};

// CSceneListManager (size: 0x580)
struct CSceneListManager {
    CUtlVector<T> m_hListManagers; // 0x4a8
    CUtlSymbolLarge[16] m_iszScenes; // 0x4c0
    CHandle<T> m_hScenes; // 0x540
};

// CEnvTilt (size: 0x4b8)
struct CEnvTilt {
    float m_Duration; // 0x4a8
    float m_Radius; // 0x4ac
    float m_TiltTime; // 0x4b0
    GameTime_t m_stopTime; // 0x4b4
};

// CEnvSoundscapeTriggerable (size: 0x538)
struct CEnvSoundscapeTriggerable {
};

// CFuncMover (size: 0x998)
struct CFuncMover {
    CUtlSymbolLarge m_iszPathName; // 0x730
    CHandle<T> m_hPathMover; // 0x738
    CHandle<T> m_hPrevPathMover; // 0x73c
    CUtlSymbolLarge m_iszPathNodeStart; // 0x740
    CUtlSymbolLarge m_iszPathNodeEnd; // 0x748
    CFuncMover::Move_t m_eMoveType; // 0x750
    bool m_bIsReversing; // 0x754
    float m_flStartSpeed; // 0x758
    float m_flPathLocation; // 0x75c
    float m_flT; // 0x760
    int32_t m_nCurrentNodeIndex; // 0x764
    int32_t m_nPreviousNodeIndex; // 0x768
    SolidType_t m_eSolidType; // 0x76c
    bool m_bIsMoving; // 0x76d
    float m_flTimeToReachMaxSpeed; // 0x770
    float m_flDistanceToReachMaxSpeed; // 0x774
    float m_flTimeToReachZeroSpeed; // 0x778
    float m_flComputedDistanceToReachMaxSpeed; // 0x77c
    float m_flComputedDistanceToReachZeroSpeed; // 0x780
    float m_flStartCurveScale; // 0x784
    float m_flStopCurveScale; // 0x788
    float m_flDistanceToReachZeroSpeed; // 0x78c
    GameTime_t m_flTimeMovementStart; // 0x790
    GameTime_t m_flTimeMovementStop; // 0x794
    CHandle<T> m_hStopAtNode; // 0x798
    float m_flPathLocationToBeginStop; // 0x79c
    float m_flPathLocationStart; // 0x7a0
    float m_flBeginStopT; // 0x7a4
    CUtlSymbolLarge m_iszStartForwardSound; // 0x7a8
    CUtlSymbolLarge m_iszLoopForwardSound; // 0x7b0
    CUtlSymbolLarge m_iszStopForwardSound; // 0x7b8
    CUtlSymbolLarge m_iszStartReverseSound; // 0x7c0
    CUtlSymbolLarge m_iszLoopReverseSound; // 0x7c8
    CUtlSymbolLarge m_iszStopReverseSound; // 0x7d0
    CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x7d8
    CEntityIOOutput m_OnMovementEnd; // 0x7f8
    bool m_bStartAtClosestPoint; // 0x810
    bool m_bStartAtEnd; // 0x811
    bool m_bStartFollowingClosestMover; // 0x812
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // 0x814
    GameTime_t m_flTimeStartOrientationChange; // 0x818
    float m_flTimeToBlendToNewOrientation; // 0x81c
    float m_flDurationBlendToNewOrientationRan; // 0x820
    int32_t m_nOriginalOrientationIndex; // 0x824
    bool m_bCreateMovableNavMesh; // 0x828
    bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x829
    CUtlString m_OnNodePassed; // 0x830
    CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x850
    CHandle<T> m_hOrientationMatchEntity; // 0x858
    float m_flTimeToTraverseToNextNode; // 0x85c
    Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x860
    Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x86c
    float m_flLerpToPositionT; // 0x878
    float m_flLerpToPositionDeltaT; // 0x87c
    CEntityIOOutput m_OnLerpToPositionComplete; // 0x880
    bool m_bIsPaused; // 0x898
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x89c
    int32_t m_nDelayedTeleportToNode; // 0x8a0
    bool m_bIsVerboseLogging; // 0x8a4
    CHandle<T> m_hFollowEntity; // 0x8a8
    float m_flFollowDistance; // 0x8ac
    float m_flFollowMinimumSpeed; // 0x8b0
    float m_flCurFollowEntityT; // 0x8b4
    float m_flCurFollowSpeed; // 0x8b8
    CUtlSymbolLarge m_strOrientationFaceEntityName; // 0x8c0
    CHandle<T> m_hOrientationFaceEntity; // 0x8c8
    CEntityIOOutput m_OnStart; // 0x8d0
    CEntityIOOutput m_OnStartForward; // 0x8e8
    CEntityIOOutput m_OnStartReverse; // 0x900
    CEntityIOOutput m_OnStop; // 0x918
    CEntityIOOutput m_OnStopped; // 0x930
    bool m_bNextNodeReturnsCurrent; // 0x948
    bool m_bStartedMoving; // 0x949
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection; // 0x968
    CHandle<T> m_hFollowMover; // 0x96c
    CUtlSymbolLarge m_iszFollowMoverEntityName; // 0x970
    float m_flFollowMoverDistance; // 0x978
    float m_flFollowMoverCalculatedDistance; // 0x97c
    float m_flFollowMoverSpringStrength; // 0x980
    bool m_bFollowConstraintsInitialized; // 0x984
    CFuncMover::FollowConstraint_t m_eFollowConstraint; // 0x988
    float m_flFollowMoverSpeed; // 0x98c
    float m_flFollowMoverVelocity; // 0x990
    GameTick_t m_nTickMovementRan; // 0x994
};

// CPhysicsProp (size: 0xce0)
struct CPhysicsProp {
    CEntityIOOutput m_MotionEnabled; // 0xbb0
    CEntityIOOutput m_OnAwakened; // 0xbc8
    CEntityIOOutput m_OnAwake; // 0xbe0
    CEntityIOOutput m_OnAsleep; // 0xbf8
    CEntityIOOutput m_OnPlayerUse; // 0xc10
    CEntityIOOutput m_OnOutOfWorld; // 0xc28
    CEntityIOOutput m_OnPlayerPickup; // 0xc40
    bool m_bForceNavIgnore; // 0xc58
    bool m_bNoNavmeshBlocker; // 0xc59
    bool m_bForceNpcExclude; // 0xc5a
    float m_massScale; // 0xc5c
    float m_buoyancyScale; // 0xc60
    int32_t m_damageType; // 0xc64
    int32_t m_damageToEnableMotion; // 0xc68
    float m_flForceToEnableMotion; // 0xc6c
    bool m_bThrownByPlayer; // 0xc70
    bool m_bDroppedByPlayer; // 0xc71
    bool m_bTouchedByPlayer; // 0xc72
    bool m_bFirstCollisionAfterLaunch; // 0xc73
    bool m_bHasBeenAwakened; // 0xc74
    bool m_bIsOverrideProp; // 0xc75
    GameTime_t m_flLastBurn; // 0xc78
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xc7c
    GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xc80
    int32_t m_iInitialGlowState; // 0xc84
    int32_t m_nGlowRange; // 0xc88
    int32_t m_nGlowRangeMin; // 0xc8c
    Color m_glowColor; // 0xc90
    bool m_bShouldAutoConvertBackFromDebris; // 0xc94
    bool m_bMuteImpactEffects; // 0xc95
    bool m_bUpdateNavWhenMoving; // 0xc9c
    bool m_bForceNavObstacleCut; // 0xc9d
    bool m_bAllowObstacleConvexHullMerging; // 0xc9e
    bool m_bAcceptDamageFromHeldObjects; // 0xc9f
    bool m_bEnableUseOutput; // 0xca0
    CPhysicsProp::CrateType_t m_CrateType; // 0xca4
    CUtlSymbolLarge[4] m_strItemClass; // 0xca8
    int32[4] m_nItemCount; // 0xcc8
    bool m_bRemovableForAmmoBalancing; // 0xcd8
    bool m_bAwake; // 0xcd9
    bool m_bAttachedToReferenceFrame; // 0xcda
};

// CFuncNavObstruction (size: 0x750)
struct CFuncNavObstruction {
    bool m_bDisabled; // 0x748
    bool m_bUseAsyncObstacleUpdate; // 0x749
};

// CPhysWheelConstraint (size: 0x540)
struct CPhysWheelConstraint {
    float m_flSuspensionFrequency; // 0x508
    float m_flSuspensionDampingRatio; // 0x50c
    float m_flSuspensionHeightOffset; // 0x510
    bool m_bEnableSuspensionLimit; // 0x514
    float m_flMinSuspensionOffset; // 0x518
    float m_flMaxSuspensionOffset; // 0x51c
    bool m_bEnableSteeringLimit; // 0x520
    float m_flMinSteeringAngle; // 0x524
    float m_flMaxSteeringAngle; // 0x528
    float m_flSteeringAxisFriction; // 0x52c
    float m_flSpinAxisFriction; // 0x530
    CHandle<T> m_hSteeringMimicsEntity; // 0x534
};

// CSkyboxReference (size: 0x4b0)
struct CSkyboxReference {
    WorldGroupId_t m_worldGroupId; // 0x4a8
    CHandle<T> m_hSkyCamera; // 0x4ac
};

// CPointPulse (size: 0x4a8)
struct CPointPulse {
};

// CMolotovProjectile (size: 0xcb0)
struct CMolotovProjectile {
    bool m_bIsIncGrenade; // 0xbb0
    bool m_bDetonated; // 0xbc8
    IntervalTimer m_stillTimer; // 0xbd0
};

// CFilterClass (size: 0x4e8)
struct CFilterClass {
    CUtlSymbolLarge m_iFilterClass; // 0x4e0
};

// CTriggerToggleSave (size: 0x890)
struct CTriggerToggleSave {
};

// CPathWithDynamicNodes (size: 0x5f0)
struct CPathWithDynamicNodes {
    CHandle<T> m_vecPathNodes; // 0x5b0
    CTransform m_xInitialPathWorldToLocal; // 0x5d0
};

// CColorCorrection (size: 0x6e0)
struct CColorCorrection {
    float m_flFadeInDuration; // 0x4a8
    float m_flFadeOutDuration; // 0x4ac
    float m_flStartFadeInWeight; // 0x4b0
    float m_flStartFadeOutWeight; // 0x4b4
    GameTime_t m_flTimeStartFadeIn; // 0x4b8
    GameTime_t m_flTimeStartFadeOut; // 0x4bc
    float m_flMaxWeight; // 0x4c0
    bool m_bStartDisabled; // 0x4c4
    bool m_bEnabled; // 0x4c5
    bool m_bMaster; // 0x4c6
    bool m_bClientSide; // 0x4c7
    bool m_bExclusive; // 0x4c8
    float m_MinFalloff; // 0x4cc
    float m_MaxFalloff; // 0x4d0
    float m_flCurWeight; // 0x4d4
    char[512] m_netlookupFilename; // 0x4d8
    CUtlSymbolLarge m_lookupFilename; // 0x6d8
};

// CPropDoorRotatingBreakable (size: 0xf10)
struct CPropDoorRotatingBreakable {
    bool m_bBreakable; // 0xef0
    bool m_isAbleToCloseAreaPortals; // 0xef1
    int32_t m_currentDamageState; // 0xef4
    CUtlVector<T> m_damageStates; // 0xef8
};

// CLightDirectionalEntity (size: 0x738)
struct CLightDirectionalEntity {
};

// CBaseClientUIEntity (size: 0x890)
struct CBaseClientUIEntity {
    bool m_bEnabled; // 0x730
    CUtlSymbolLarge m_DialogXMLName; // 0x738
    CUtlSymbolLarge m_PanelClassName; // 0x740
    CUtlSymbolLarge m_PanelID; // 0x748
    CUtlString m_CustomOutput0; // 0x750
    CUtlString m_CustomOutput1; // 0x770
    CUtlString m_CustomOutput2; // 0x790
    CUtlString m_CustomOutput3; // 0x7b0
    CUtlString m_CustomOutput4; // 0x7d0
    CUtlString m_CustomOutput5; // 0x7f0
    CUtlString m_CustomOutput6; // 0x810
    CUtlString m_CustomOutput7; // 0x830
    CUtlString m_CustomOutput8; // 0x850
    CUtlString m_CustomOutput9; // 0x870
};

// CBreakable (size: 0x808)
struct CBreakable {
    CPropDataComponent m_CPropDataComponent; // 0x738
    Materials m_Material; // 0x778
    CHandle<T> m_hBreaker; // 0x77c
    Explosions m_Explosion; // 0x780
    CUtlSymbolLarge m_iszSpawnObject; // 0x788
    float m_flPressureDelay; // 0x790
    int32_t m_iMinHealthDmg; // 0x794
    CUtlSymbolLarge m_iszPropData; // 0x798
    float m_impactEnergyScale; // 0x7a0
    EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x7a4
    CEntityIOOutput m_OnStartDeath; // 0x7a8
    CEntityIOOutput m_OnBreak; // 0x7c0
    CEntityOutputTemplate< float32, float32 > m_OnHealthChanged; // 0x7d8
    PerformanceMode_t m_PerformanceMode; // 0x7f8
    CHandle<T> m_hPhysicsAttacker; // 0x7fc
    GameTime_t m_flLastPhysicsInfluenceTime; // 0x800
};

// CInfoLandmark (size: 0x4a8)
struct CInfoLandmark {
};

// CBaseFilter (size: 0x4e0)
struct CBaseFilter {
    bool m_bNegated; // 0x4a8
    CEntityIOOutput m_OnPass; // 0x4b0
    CEntityIOOutput m_OnFail; // 0x4c8
};

// WeaponPurchaseTracker_t (size: 0x70)
struct WeaponPurchaseTracker_t {
    CUtlVector<T> m_weaponPurchases; // 0x8
};

// CPulseCell_Outflow_PlaySceneBase::CursorState_t (size: 0x8)
struct CPulseCell_Outflow_PlaySceneBase_CursorState_t {
    CHandle<T> m_sceneInstance; // 0x0
    CHandle<T> m_mainActor; // 0x4
};

// PulseObservableBoolExpression_t (size: 0x78)
struct PulseObservableBoolExpression_t {
    CPulse_OutflowConnection m_EvaluateConnection; // 0x0
    CUtlVector<T> m_DependentObservableVars; // 0x48
    CUtlVector<T> m_DependentObservableBlackboardReferences; // 0x60
};

// CMapInfo (size: 0x4d8)
struct CMapInfo {
    int32_t m_iBuyingStatus; // 0x4a8
    float m_flBombRadius; // 0x4ac
    int32_t m_iPetPopulation; // 0x4b0
    bool m_bUseNormalSpawnsForDM; // 0x4b4
    bool m_bDisableAutoGeneratedDMSpawns; // 0x4b5
    float m_flBotMaxVisionDistance; // 0x4b8
    int32_t m_iHostageCount; // 0x4bc
    bool m_bFadePlayerVisibilityFarZ; // 0x4c0
    bool m_bRainTraceToSkyEnabled; // 0x4c1
    float m_flEnvRainStrength; // 0x4c4
    float m_flEnvPuddleRippleStrength; // 0x4c8
    float m_flEnvPuddleRippleDirection; // 0x4cc
    float m_flEnvWetnessCoverage; // 0x4d0
    float m_flEnvWetnessDryingAmount; // 0x4d4
};

// CGradientFog (size: 0x4e8)
struct CGradientFog {
    CStrongHandle<T> m_hGradientFogTexture; // 0x4a8
    float m_flFogStartDistance; // 0x4b0
    float m_flFogEndDistance; // 0x4b4
    bool m_bHeightFogEnabled; // 0x4b8
    float m_flFogStartHeight; // 0x4bc
    float m_flFogEndHeight; // 0x4c0
    float m_flFarZ; // 0x4c4
    float m_flFogMaxOpacity; // 0x4c8
    float m_flFogFalloffExponent; // 0x4cc
    float m_flFogVerticalExponent; // 0x4d0
    Color m_fogColor; // 0x4d4
    float m_flFogStrength; // 0x4d8
    float m_flFadeTime; // 0x4dc
    bool m_bStartDisabled; // 0x4e0
    bool m_bIsEnabled; // 0x4e1
    bool m_bGradientFogNeedsTextures; // 0x4e2
};

// CSoundOpvarSetAABBEntity (size: 0x6a8)
struct CSoundOpvarSetAABBEntity {
    Vector m_vDistanceInnerMins; // 0x640
    Vector m_vDistanceInnerMaxs; // 0x64c
    Vector m_vDistanceOuterMins; // 0x658
    Vector m_vDistanceOuterMaxs; // 0x664
    int32_t m_nAABBDirection; // 0x670
    Vector m_vInnerMins; // 0x674
    Vector m_vInnerMaxs; // 0x680
    Vector m_vOuterMins; // 0x68c
    Vector m_vOuterMaxs; // 0x698
};

// CPulseCell_Outflow_PlaySequence (size: 0xf8)
struct CPulseCell_Outflow_PlaySequence {
    CUtlString m_ParamSequenceName; // 0xf0
};

// CPointClientUIWorldTextPanel (size: 0xae8)
struct CPointClientUIWorldTextPanel {
    char[512] m_messageText; // 0x8e8
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

// CFuncRotator (size: 0x910)
struct CFuncRotator {
    CHandle<T> m_hRotatorTarget; // 0x730
    bool m_bIsRotating; // 0x734
    bool m_bIsReversing; // 0x735
    float m_flTimeToReachMaxSpeed; // 0x738
    float m_flTimeToReachZeroSpeed; // 0x73c
    float m_flDistanceAlongArcTraveled; // 0x740
    float m_flTimeToWaitOscillate; // 0x744
    GameTime_t m_flTimeRotationStart; // 0x748
    Quaternion m_qLSPrevChange; // 0x750
    Quaternion m_qWSPrev; // 0x760
    Quaternion m_qWSInit; // 0x770
    Quaternion m_qLSInit; // 0x780
    Quaternion m_qLSOrientation; // 0x790
    CEntityIOOutput m_OnRotationStarted; // 0x7a0
    CEntityIOOutput m_OnRotationCompleted; // 0x7b8
    CEntityIOOutput m_OnOscillate; // 0x7d0
    CEntityIOOutput m_OnOscillateStartArrive; // 0x7e8
    CEntityIOOutput m_OnOscillateStartDepart; // 0x800
    CEntityIOOutput m_OnOscillateEndArrive; // 0x818
    CEntityIOOutput m_OnOscillateEndDepart; // 0x830
    bool m_bOscillateDepart; // 0x848
    int32_t m_nOscillateCount; // 0x84c
    CFuncRotator::Rotate_t m_eRotateType; // 0x850
    CFuncRotator::Rotate_t m_ePrevRotateType; // 0x854
    bool m_bHasTargetOverride; // 0x858
    Quaternion m_qOrientationOverride; // 0x860
    RotatorTargetSpace_t m_eSpaceOverride; // 0x870
    QAngle m_qAngularVelocity; // 0x874
    Vector m_vLookAtForcedUp; // 0x880
    CUtlSymbolLarge m_strRotatorTarget; // 0x890
    bool m_bRecordHistory; // 0x898
    CUtlVector<T> m_vecRotatorHistory; // 0x8a0
    bool m_bReturningToPreviousOrientation; // 0x8b8
    CUtlVector<T> m_vecRotatorQueue; // 0x8c0
    CUtlVector<T> m_vecRotatorQueueHistory; // 0x8d8
    SolidType_t m_eSolidType; // 0x8f0
    CHandle<T> m_hSpeedFromMover; // 0x8f4
    CUtlSymbolLarge m_iszSpeedFromMover; // 0x8f8
    float m_flSpeedScale; // 0x900
    float m_flMinYawRotation; // 0x904
    float m_flMaxYawRotation; // 0x908
};

// CSoundEventEntity (size: 0x558)
struct CSoundEventEntity {
    bool m_bStartOnSpawn; // 0x4a8
    bool m_bToLocalPlayer; // 0x4a9
    bool m_bStopOnNew; // 0x4aa
    bool m_bSaveRestore; // 0x4ab
    bool m_bSavedIsPlaying; // 0x4ac
    float m_flSavedElapsedTime; // 0x4b0
    CUtlSymbolLarge m_iszSourceEntityName; // 0x4b8
    CUtlSymbolLarge m_iszAttachmentName; // 0x4c0
    CEntityOutputTemplate< uint64, uint64 > m_onGUIDChanged; // 0x4c8
    CEntityIOOutput m_onSoundFinished; // 0x4e8
    float m_flClientCullRadius; // 0x500
    CUtlSymbolLarge m_iszSoundName; // 0x530
    CEntityHandle m_hSource; // 0x54c
    int32_t m_nEntityIndexSelection; // 0x550
};

// CInfoPlayerCounterterrorist (size: 0x4b8)
struct CInfoPlayerCounterterrorist {
};

// CEnvFade (size: 0x4d0)
struct CEnvFade {
    Color m_fadeColor; // 0x4a8
    float m_Duration; // 0x4ac
    float m_HoldDuration; // 0x4b0
    CEntityIOOutput m_OnBeginFade; // 0x4b8
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

// CTriggerImpact (size: 0x8e0)
struct CTriggerImpact {
    float m_flMagnitude; // 0x8a8
    float m_flNoise; // 0x8ac
    float m_flViewkick; // 0x8b0
    CEntityOutputTemplate< Vector, Vector > m_pOutputForce; // 0x8b8
};

// CCSGameModeRules_Deathmatch (size: 0x88)
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

// CBasePropDoor (size: 0xe50)
struct CBasePropDoor {
    float m_flAutoReturnDelay; // 0xc60
    CUtlVector<T> m_hDoorList; // 0xc68
    int32_t m_nHardwareType; // 0xc80
    bool m_bNeedsHardware; // 0xc84
    DoorState_t m_eDoorState; // 0xc88
    bool m_bLocked; // 0xc8c
    bool m_bNoNPCs; // 0xc8d
    Vector m_closedPosition; // 0xc90
    QAngle m_closedAngles; // 0xc9c
    CHandle<T> m_hBlocker; // 0xca8
    bool m_bFirstBlocked; // 0xcac
    locksound_t m_ls; // 0xcb0
    bool m_bForceClosed; // 0xcd0
    VectorWS m_vecLatchWorldPosition; // 0xcd4
    CHandle<T> m_hActivator; // 0xce0
    CUtlSymbolLarge m_SoundMoving; // 0xcf8
    CUtlSymbolLarge m_SoundOpen; // 0xd00
    CUtlSymbolLarge m_SoundClose; // 0xd08
    CUtlSymbolLarge m_SoundLock; // 0xd10
    CUtlSymbolLarge m_SoundUnlock; // 0xd18
    CUtlSymbolLarge m_SoundLatch; // 0xd20
    CUtlSymbolLarge m_SoundPound; // 0xd28
    CUtlSymbolLarge m_SoundJiggle; // 0xd30
    CUtlSymbolLarge m_SoundLockedAnim; // 0xd38
    int32_t m_numCloseAttempts; // 0xd40
    CUtlString m_nPhysicsMaterial; // 0xd44
    CUtlSymbolLarge m_SlaveName; // 0xd48
    CHandle<T> m_hMaster; // 0xd50
    CEntityIOOutput m_OnBlockedClosing; // 0xd58
    CEntityIOOutput m_OnBlockedOpening; // 0xd70
    CEntityIOOutput m_OnUnblockedClosing; // 0xd88
    CEntityIOOutput m_OnUnblockedOpening; // 0xda0
    CEntityIOOutput m_OnFullyClosed; // 0xdb8
    CEntityIOOutput m_OnFullyOpen; // 0xdd0
    CEntityIOOutput m_OnClose; // 0xde8
    CEntityIOOutput m_OnOpen; // 0xe00
    CEntityIOOutput m_OnLockedUse; // 0xe18
    CEntityIOOutput m_OnAjarOpen; // 0xe30
};

// CLogicBranchList (size: 0x590)
struct CLogicBranchList {
    CUtlSymbolLarge[16] m_nLogicBranchNames; // 0x4a8
    CUtlVector<T> m_LogicBranchList; // 0x528
    CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x540
    CEntityIOOutput m_OnAllTrue; // 0x548
    CEntityIOOutput m_OnAllFalse; // 0x560
    CEntityIOOutput m_OnMixed; // 0x578
};

// CBtActionParachutePositioning (size: 0x78)
struct CBtActionParachutePositioning {
    CountdownTimer m_ActionTimer; // 0x58
};

// CAK47 (size: 0x1150)
struct CAK47 {
};

// CDynamicProp (size: 0xc50)
struct CDynamicProp {
    bool m_bCreateNavObstacle; // 0xba8
    bool m_bNavObstacleUpdatesOverridden; // 0xba9
    bool m_bUseHitboxesForRenderBox; // 0xbaa
    bool m_bUseAnimGraph; // 0xbab
    CEntityIOOutput m_pOutputAnimBegun; // 0xbb0
    CEntityIOOutput m_pOutputAnimOver; // 0xbc8
    CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xbe0
    CEntityIOOutput m_OnAnimReachedStart; // 0xbf8
    CEntityIOOutput m_OnAnimReachedEnd; // 0xc10
    CUtlSymbolLarge m_iszIdleAnim; // 0xc28
    AnimLoopMode_t m_nIdleAnimLoopMode; // 0xc30
    bool m_bRandomizeCycle; // 0xc34
    bool m_bStartDisabled; // 0xc35
    bool m_bFiredStartEndOutput; // 0xc36
    bool m_bForceNpcExclude; // 0xc37
    bool m_bCreateNonSolid; // 0xc38
    bool m_bIsOverrideProp; // 0xc39
    int32_t m_iInitialGlowState; // 0xc3c
    int32_t m_nGlowRange; // 0xc40
    int32_t m_nGlowRangeMin; // 0xc44
    Color m_glowColor; // 0xc48
    int32_t m_nGlowTeam; // 0xc4c
};

// CHostageAlias_info_hostage_spawn (size: 0x2e00)
struct CHostageAlias_info_hostage_spawn {
};

// CFilterTeam (size: 0x4e8)
struct CFilterTeam {
    int32_t m_iFilterTeam; // 0x4e0
};

// CFuncConveyor (size: 0x780)
struct CFuncConveyor {
    CUtlSymbolLarge m_szConveyorModels; // 0x730
    float m_flTransitionDurationSeconds; // 0x738
    QAngle m_angMoveEntitySpace; // 0x73c
    Vector m_vecMoveDirEntitySpace; // 0x748
    float m_flTargetSpeed; // 0x754
    GameTick_t m_nTransitionStartTick; // 0x758
    int32_t m_nTransitionDurationTicks; // 0x75c
    float m_flTransitionStartSpeed; // 0x760
    CHandle<T> m_hConveyorModels; // 0x768
};

// CTriggerPhysics (size: 0x8f0)
struct CTriggerPhysics {
    float m_gravityScale; // 0x8a0
    float m_linearLimit; // 0x8a4
    float m_linearDamping; // 0x8a8
    float m_angularLimit; // 0x8ac
    float m_angularDamping; // 0x8b0
    float m_linearForce; // 0x8b4
    float m_flFrequency; // 0x8b8
    float m_flDampingRatio; // 0x8bc
    Vector m_vecLinearForcePointAt; // 0x8c0
    bool m_bCollapseToForcePoint; // 0x8cc
    Vector m_vecLinearForcePointAtWorld; // 0x8d0
    Vector m_vecLinearForceDirection; // 0x8dc
    bool m_bConvertToDebrisWhenPossible; // 0x8e8
};

// CInfoInstructorHintBombTargetB (size: 0x4a8)
struct CInfoInstructorHintBombTargetB {
};

// CFuncTimescale (size: 0x4c0)
struct CFuncTimescale {
    float m_flDesiredTimescale; // 0x4a8
    float m_flAcceleration; // 0x4ac
    float m_flMinBlendRate; // 0x4b0
    float m_flBlendDeltaMultiplier; // 0x4b4
    bool m_isStarted; // 0x4b8
};

// CInfoInteraction (size: 0x4f8)
struct CInfoInteraction {
    CUtlSymbolLarge[8] m_strSlotEntityName; // 0x4a8
    CUtlSymbolLarge m_strInteractVData; // 0x4e8
    float m_flInteractRadius; // 0x4f0
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

// CSoundOpvarSetPointEntity (size: 0x640)
struct CSoundOpvarSetPointEntity {
    CEntityIOOutput m_OnEnter; // 0x550
    CEntityIOOutput m_OnExit; // 0x568
    bool m_bAutoDisable; // 0x580
    float m_flDistanceMin; // 0x5c4
    float m_flDistanceMax; // 0x5c8
    float m_flDistanceMapMin; // 0x5cc
    float m_flDistanceMapMax; // 0x5d0
    float m_flOcclusionRadius; // 0x5d4
    float m_flOcclusionMin; // 0x5d8
    float m_flOcclusionMax; // 0x5dc
    float m_flValSetOnDisable; // 0x5e0
    bool m_bSetValueOnDisable; // 0x5e4
    bool m_bReloading; // 0x5e5
    int32_t m_nSimulationMode; // 0x5e8
    int32_t m_nVisibilitySamples; // 0x5ec
    Vector m_vDynamicProxyPoint; // 0x5f0
    float m_flDynamicMaximumOcclusion; // 0x5fc
    CEntityHandle m_hDynamicEntity; // 0x600
    CUtlSymbolLarge m_iszDynamicEntityName; // 0x608
    float m_flPathingDistanceNormFactor; // 0x610
    Vector m_vPathingSourcePos; // 0x614
    Vector m_vPathingListenerPos; // 0x620
    Vector m_vPathingDirection; // 0x62c
    int32_t m_nPathingSourceIndex; // 0x638
};

// CInfoTargetServerOnly (size: 0x4a8)
struct CInfoTargetServerOnly {
};

// CServerRagdollTrigger (size: 0x890)
struct CServerRagdollTrigger {
};

// CDynamicPropAlias_dynamic_prop (size: 0xc50)
struct CDynamicPropAlias_dynamic_prop {
};

// CMarkupVolumeTagged (size: 0x770)
struct CMarkupVolumeTagged {
    CUtlVector<T> m_GroupNames; // 0x738
    CUtlVector<T> m_Tags; // 0x750
    bool m_bIsGroup; // 0x768
    bool m_bGroupByPrefab; // 0x769
    bool m_bGroupByVolume; // 0x76a
    bool m_bGroupOtherGroups; // 0x76b
    bool m_bIsInGroup; // 0x76c
};

// CInfoParticleTarget (size: 0x4a8)
struct CInfoParticleTarget {
};

// CEnvCubemap (size: 0x590)
struct CEnvCubemap {
    CStrongHandle<T> m_Entity_hCubemapTexture; // 0x528
    bool m_Entity_bCustomCubemapTexture; // 0x530
    float m_Entity_flInfluenceRadius; // 0x534
    Vector m_Entity_vBoxProjectMins; // 0x538
    Vector m_Entity_vBoxProjectMaxs; // 0x544
    bool m_Entity_bMoveable; // 0x550
    int32_t m_Entity_nHandshake; // 0x554
    int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x558
    int32_t m_Entity_nPriority; // 0x55c
    float m_Entity_flEdgeFadeDist; // 0x560
    Vector m_Entity_vEdgeFadeDists; // 0x564
    float m_Entity_flDiffuseScale; // 0x570
    bool m_Entity_bStartDisabled; // 0x574
    bool m_Entity_bDefaultEnvMap; // 0x575
    bool m_Entity_bDefaultSpecEnvMap; // 0x576
    bool m_Entity_bIndoorCubeMap; // 0x577
    bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x578
    bool m_Entity_bEnabled; // 0x588
};

// CCSPlayer_DamageReactServices (size: 0x50)
struct CCSPlayer_DamageReactServices {
};

// CWeaponXM1014 (size: 0x1130)
struct CWeaponXM1014 {
};

// CTriggerLerpObject (size: 0x930)
struct CTriggerLerpObject {
    CUtlSymbolLarge m_iszLerpTarget; // 0x890
    CHandle<T> m_hLerpTarget; // 0x898
    CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x8a0
    AttachmentHandle_t m_hLerpTargetAttachment; // 0x8a8
    float m_flLerpDuration; // 0x8ac
    bool m_bAttachedEntityWasParented; // 0x8b0
    bool m_bLerpRestoreMoveType; // 0x8b1
    bool m_bSingleLerpObject; // 0x8b2
    CUtlVector<T> m_vecLerpingObjects; // 0x8b8
    CUtlSymbolLarge m_iszLerpEffect; // 0x8d0
    CUtlSymbolLarge m_iszLerpSound; // 0x8d8
    bool m_bAttachTouchingObject; // 0x8e0
    CHandle<T> m_hEntityToWaitForDisconnect; // 0x8e4
    CEntityIOOutput m_OnLerpStarted; // 0x8e8
    CEntityIOOutput m_OnLerpFinished; // 0x900
    CEntityIOOutput m_OnDetached; // 0x918
};

// CPhysicsPropOverride (size: 0xce0)
struct CPhysicsPropOverride {
};

// CTriggerSave (size: 0x8a0)
struct CTriggerSave {
    bool m_bForceNewLevelUnit; // 0x890
    float m_fDangerousTimer; // 0x894
    int32_t m_minHitPoints; // 0x898
};

// CPointHurt (size: 0x4c8)
struct CPointHurt {
    int32_t m_nDamage; // 0x4a8
    DamageTypes_t m_bitsDamageType; // 0x4ac
    float m_flRadius; // 0x4b0
    float m_flDelay; // 0x4b4
    CUtlSymbolLarge m_strTarget; // 0x4b8
    CHandle<T> m_pActivator; // 0x4c0
};

// CBasePlayerController (size: 0x7c8)
struct CBasePlayerController {
    uint64_t m_nInButtonsWhichAreToggles; // 0x4b0
    uint32_t m_nTickBase; // 0x4b8
    CHandle<T> m_hPawn; // 0x4e0
    bool m_bKnownTeamMismatch; // 0x4e4
    CSplitScreenSlot m_nSplitScreenSlot; // 0x4e8
    CHandle<T> m_hSplitOwner; // 0x4ec
    CUtlVector<T> m_hSplitScreenPlayers; // 0x4f0
    bool m_bIsHLTV; // 0x508
    PlayerConnectedState m_iConnected; // 0x50c
    char[128] m_iszPlayerName; // 0x510
    CUtlString m_szNetworkIDString; // 0x590
    float m_fLerpTime; // 0x598
    bool m_bLagCompensation; // 0x59c
    bool m_bPredict; // 0x59d
    bool m_bIsLowViolence; // 0x5a4
    bool m_bGamePaused; // 0x5a5
    ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x6e0
    float m_flLastPlayerTalkTime; // 0x6e4
    float m_flLastEntitySteadyState; // 0x6e8
    int32_t m_nAvailableEntitySteadyState; // 0x6ec
    bool m_bHasAnySteadyStateEnts; // 0x6f0
    uint64_t m_steamID; // 0x700
    bool m_bNoClipEnabled; // 0x708
    uint32_t m_iDesiredFOV; // 0x70c
};

} // namespace server_dll
} // namespace cs2

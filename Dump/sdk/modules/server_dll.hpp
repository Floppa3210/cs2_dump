// Auto-generated module SDK: server.dll
#pragma once

#include "../sdk_types.hpp"

namespace cs2 {
struct CWeaponNOVA {
};
struct CPointWorldText {
    // 0x730
    char[512] m_messageText;
    // 0x930
    char[64] m_FontName;
    // 0x970
    char[64] m_BackgroundMaterialName;
    // 0x9b0
    bool m_bEnabled;
    // 0x9b1
    bool m_bFullbright;
    // 0x9b4
    float m_flWorldUnitsPerPx;
    // 0x9b8
    float m_flFontSize;
    // 0x9bc
    float m_flDepthOffset;
    // 0x9c0
    bool m_bDrawBackground;
    // 0x9c4
    float m_flBackgroundBorderWidth;
    // 0x9c8
    float m_flBackgroundBorderHeight;
    // 0x9cc
    float m_flBackgroundWorldToUV;
    // 0x9d0
    Color m_Color;
    // 0x9d4
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal;
    // 0x9d8
    PointWorldTextJustifyVertical_t m_nJustifyVertical;
    // 0x9dc
    PointWorldTextReorientMode_t m_nReorientMode;
};
struct CAmbientGeneric {
    // 0x4a8
    float m_radius;
    // 0x4ac
    float m_flMaxRadius;
    // 0x4b0
    soundlevel_t m_iSoundLevel;
    // 0x4b4
    dynpitchvol_t m_dpv;
    // 0x518
    bool m_fActive;
    // 0x519
    bool m_fLooping;
    // 0x520
    CUtlSymbolLarge m_iszSound;
    // 0x528
    CUtlSymbolLarge m_sSourceEntName;
    // 0x530
    CHandle<T> m_hSoundSource;
    // 0x534
    CEntityIndex m_nSoundSourceEntIndex;
};
struct CEnvEntityMaker {
    // 0x4a8
    Vector m_vecEntityMins;
    // 0x4b4
    Vector m_vecEntityMaxs;
    // 0x4c0
    CHandle<T> m_hCurrentInstance;
    // 0x4c4
    CHandle<T> m_hCurrentBlocker;
    // 0x4c8
    Vector m_vecBlockerOrigin;
    // 0x4d4
    QAngle m_angPostSpawnDirection;
    // 0x4e0
    float m_flPostSpawnDirectionVariance;
    // 0x4e4
    float m_flPostSpawnSpeed;
    // 0x4e8
    bool m_bPostSpawnUseAngles;
    // 0x4f0
    CUtlSymbolLarge m_iszTemplate;
    // 0x4f8
    CEntityIOOutput m_pOutputOnSpawned;
    // 0x510
    CEntityIOOutput m_pOutputOnFailedSpawn;
};
struct CPulseGraphInstance_GameBlackboard {
};
struct CPointEntity {
};
struct CFilterEnemy {
    // 0x4e0
    CUtlSymbolLarge m_iszEnemyName;
    // 0x4e8
    float m_flRadius;
    // 0x4ec
    float m_flOuterRadius;
    // 0x4f0
    int32_t m_nMaxSquadmatesPerEnemy;
    // 0x4f8
    CUtlSymbolLarge m_iszPlayerName;
};
struct CCSGO_WingmanIntroCounterTerroristPosition {
};
struct CPulseCell_WaitForCursorsWithTag {
    // 0x98
    bool m_bTagSelfWhenComplete;
    // 0x9c
    PulseCursorCancelPriority_t m_nDesiredKillPriority;
};
struct CFuncTrackAuto {
};
struct CScriptedSequence {
    // 0x4a8
    CUtlSymbolLarge m_iszEntry;
    // 0x4b0
    CUtlSymbolLarge m_iszPreIdle;
    // 0x4b8
    CUtlSymbolLarge m_iszPlay;
    // 0x4c0
    CUtlSymbolLarge m_iszPostIdle;
    // 0x4c8
    CUtlSymbolLarge m_iszModifierToAddOnPlay;
    // 0x4d0
    CUtlSymbolLarge m_iszNextScript;
    // 0x4d8
    CUtlSymbolLarge m_iszEntity;
    // 0x4e0
    CUtlSymbolLarge m_iszSyncGroup;
    // 0x4e8
    ScriptedMoveTo_t m_nMoveTo;
    // 0x4ec
    SharedMovementGait_t m_nMoveToGait;
    // 0x4f0
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior;
    // 0x4f4
    ForcedCrouchState_t m_nForcedCrouchState;
    // 0x4f8
    bool m_bIsPlayingPreIdle;
    // 0x4f9
    bool m_bIsPlayingEntry;
    // 0x4fa
    bool m_bIsPlayingAction;
    // 0x4fb
    bool m_bIsPlayingPostIdle;
    // 0x4fc
    bool m_bDontRotateOther;
    // 0x4fd
    bool m_bIsRepeatable;
    // 0x4fe
    bool m_bShouldLeaveCorpse;
    // 0x4ff
    bool m_bStartOnSpawn;
    // 0x500
    bool m_bDisallowInterrupts;
    // 0x501
    bool m_bCanOverrideNPCState;
    // 0x502
    bool m_bDontTeleportAtEnd;
    // 0x503
    bool m_bHighPriority;
    // 0x504
    bool m_bHideDebugComplaints;
    // 0x505
    bool m_bContinueOnDeath;
    // 0x506
    bool m_bLoopPreIdleSequence;
    // 0x507
    bool m_bLoopActionSequence;
    // 0x508
    bool m_bLoopPostIdleSequence;
    // 0x509
    bool m_bSynchPostIdles;
    // 0x50a
    bool m_bIgnoreLookAt;
    // 0x50b
    bool m_bIgnoreGravity;
    // 0x50c
    bool m_bDisableNPCCollisions;
    // 0x50d
    bool m_bKeepAnimgraphLockedPost;
    // 0x50e
    bool m_bDontAddModifiers;
    // 0x50f
    bool m_bDisableAimingWhileMoving;
    // 0x510
    bool m_bIgnoreRotation;
    // 0x514
    float m_flRadius;
    // 0x518
    float m_flRepeat;
    // 0x51c
    float m_flPlayAnimFadeInTime;
    // 0x520
    float m_flMoveInterpTime;
    // 0x524
    float m_flAngRate;
    // 0x528
    float m_flMoveSpeed;
    // 0x52c
    bool m_bWaitUntilMoveCompletesToStartAnimation;
    // 0x530
    int32_t m_nNotReadySequenceCount;
    // 0x534
    GameTime_t m_startTime;
    // 0x538
    bool m_bWaitForBeginSequence;
    // 0x53c
    int32_t m_saved_effects;
    // 0x540
    int32_t m_savedFlags;
    // 0x544
    int32_t m_savedCollisionGroup;
    // 0x548
    bool m_bInterruptable;
    // 0x549
    bool m_sequenceStarted;
    // 0x54a
    bool m_bPositionRelativeToOtherEntity;
    // 0x54c
    CHandle<T> m_hTargetEnt;
    // 0x550
    CHandle<T> m_hNextCine;
    // 0x554
    bool m_bThinking;
    // 0x555
    bool m_bInitiatedSelfDelete;
    // 0x556
    bool m_bIsTeleportingDueToMoveTo;
    // 0x557
    bool m_bAllowCustomInterruptConditions;
    // 0x558
    CHandle<T> m_hForcedTarget;
    // 0x55c
    bool m_bDontCancelOtherSequences;
    // 0x55d
    bool m_bForceSynch;
    // 0x55e
    bool m_bPreventUpdateYawOnFinish;
    // 0x55f
    bool m_bEnsureOnNavmeshOnFinish;
    // 0x560
    ScriptedOnDeath_t m_onDeathBehavior;
    // 0x564
    ScriptedConflictResponse_t m_ConflictResponse;
    // 0x568
    CEntityIOOutput m_OnBeginSequence;
    // 0x580
    CEntityIOOutput m_OnActionStartOrLoop;
    // 0x598
    CEntityIOOutput m_OnEndSequence;
    // 0x5b0
    CEntityIOOutput m_OnPostIdleEndSequence;
    // 0x5c8
    CEntityIOOutput m_OnCancelSequence;
    // 0x5e0
    CEntityIOOutput m_OnCancelFailedSequence;
    // 0x5f8
    CEntityIOOutput[8] m_OnScriptEvent;
    // 0x6c0
    CTransform m_matOtherToMain;
    // 0x6e0
    CHandle<T> m_hInteractionMainEntity;
    // 0x6e4
    int32_t m_iPlayerDeathBehavior;
    // 0x6e8
    bool m_bSkipFadeIn;
};
struct CFogTrigger {
    // 0x890
    fogparams_t m_fog;
};
struct CInfoTeleportDestination {
};
struct CPointBroadcastClientCommand {
};
struct CCSPlayer_PingServices {
    // 0x48
    GameTime_t[5] m_flPlayerPingTokens;
    // 0x5c
    CHandle<T> m_hPlayerPing;
};
struct CHEGrenade {
};
struct CPhysicsSpring {
    // 0x4b0
    float m_flFrequency;
    // 0x4b4
    float m_flDampingRatio;
    // 0x4b8
    float m_flRestLength;
    // 0x4c0
    CUtlSymbolLarge m_nameAttachStart;
    // 0x4c8
    CUtlSymbolLarge m_nameAttachEnd;
    // 0x4d0
    VectorWS m_start;
    // 0x4dc
    VectorWS m_end;
    // 0x4e8
    uint32_t m_teleportTick;
};
struct CEnvMuzzleFlash {
    // 0x4a8
    float m_flScale;
    // 0x4b0
    CUtlSymbolLarge m_iszParentAttachment;
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
struct CWeaponRevolver {
};
struct CFuncTrainControls {
};
struct CBtActionCombatPositioning {
    // 0x68
    CUtlString m_szSensorInputKey;
    // 0x80
    CUtlString m_szIsAttackingKey;
    // 0x88
    CountdownTimer m_ActionTimer;
    // 0xa0
    bool m_bCrouching;
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
struct CTriggerBuoyancy {
    // 0x890
    CBuoyancyHelper m_BuoyancyHelper;
    // 0x9a8
    float m_flFluidDensity;
};
struct CTonemapController2Alias_env_tonemap_controller2 {
};
struct CPathTrack {
    // 0x4a8
    CPathTrack* m_pnext;
    // 0x4b0
    CPathTrack* m_pprevious;
    // 0x4b8
    CPathTrack* m_paltpath;
    // 0x4c0
    float m_flRadius;
    // 0x4c4
    float m_length;
    // 0x4c8
    CUtlSymbolLarge m_altName;
    // 0x4d0
    int32_t m_nIterVal;
    // 0x4d4
    TrackOrientationType_t m_eOrientationType;
    // 0x4d8
    CEntityIOOutput m_OnPass;
};
struct CPulseCell_Base {
    // 0x8
    PulseDocNodeID_t m_nEditorNodeID;
};
struct CTriggerProximity {
    // 0x890
    CHandle<T> m_hMeasureTarget;
    // 0x898
    CUtlSymbolLarge m_iszMeasureTarget;
    // 0x8a0
    float m_fRadius;
    // 0x8a4
    int32_t m_nTouchers;
    // 0x8a8
    CEntityOutputTemplate< float32, float32 > m_NearestEntityDistance;
};
struct CTankTrainAI {
    // 0x4a8
    CHandle<T> m_hTrain;
    // 0x4ac
    CHandle<T> m_hTargetEntity;
    // 0x4b0
    int32_t m_soundPlaying;
    // 0x4c8
    CUtlSymbolLarge m_startSoundName;
    // 0x4d0
    CUtlSymbolLarge m_engineSoundName;
    // 0x4d8
    CUtlSymbolLarge m_movementSoundName;
    // 0x4e0
    CUtlSymbolLarge m_targetEntityName;
};
struct CGameText {
    // 0x740
    CUtlSymbolLarge m_iszMessage;
    // 0x748
    hudtextparms_t m_textParms;
};
struct CGameEnd {
};
struct CInfoDeathmatchSpawn {
};
struct CCSPlayerController_InventoryServices {
    // 0x40
    uint16_t m_unMusicID;
    // 0x44
    MedalRank_t[6] m_rank;
    // 0x5c
    int32_t m_nPersonaDataPublicLevel;
    // 0x60
    int32_t m_nPersonaDataPublicCommendsLeader;
    // 0x64
    int32_t m_nPersonaDataPublicCommendsTeacher;
    // 0x68
    int32_t m_nPersonaDataPublicCommendsFriendly;
    // 0x6c
    int32_t m_nPersonaDataXpTrailLevel;
    // 0xf48
    uint32[1] m_unEquippedPlayerSprayIDs;
    // 0xf50
    uint64_t m_unCurrentLoadoutHash;
    // 0xf58
    CUtlVector<T> m_vecServerAuthoritativeWeaponSlots;
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
struct CPulse_ResumePoint {
};
struct CBaseFlex {
    // 0xa20
    CNetworkUtlVectorBase< float32 > m_flexWeight;
    // 0xa38
    VectorWS m_vLookTargetPosition;
    // 0xa98
    GameTime_t m_flAllowResponsesEndTime;
    // 0xa9c
    GameTime_t m_flLastFlexAnimationTime;
    // 0xaa0
    SceneEventId_t m_nNextSceneEventId;
    // 0xaa4
    bool m_bUpdateLayerPriorities;
};
struct CTriggerFan {
    // 0x890
    Vector m_vFanOriginOffset;
    // 0x89c
    Vector m_vDirection;
    // 0x8a8
    bool m_bPushTowardsInfoTarget;
    // 0x8a9
    bool m_bPushAwayFromInfoTarget;
    // 0x8b0
    Quaternion m_qNoiseDelta;
    // 0x8c0
    CHandle<T> m_hInfoFan;
    // 0x8c4
    float m_flForce;
    // 0x8c8
    bool m_bFalloff;
    // 0x8d0
    CountdownTimer m_RampTimer;
    // 0x8e8
    VectorWS m_vFanOriginWS;
    // 0x8f4
    Vector m_vFanOriginLS;
    // 0x900
    Vector m_vFanEndLS;
    // 0x90c
    Vector m_vNoiseDirectionTarget;
    // 0x918
    CUtlSymbolLarge m_iszInfoFan;
    // 0x920
    float m_flRopeForceScale;
    // 0x924
    float m_flParticleForceScale;
    // 0x928
    float m_flPlayerForce;
    // 0x92c
    bool m_bPlayerWindblock;
    // 0x930
    float m_flNPCForce;
    // 0x934
    float m_flRampTime;
    // 0x938
    float m_fNoiseDegrees;
    // 0x93c
    float m_fNoiseSpeed;
    // 0x940
    bool m_bPushPlayer;
    // 0x941
    bool m_bRampDown;
    // 0x944
    int32_t m_nManagerFanIdx;
};
struct CPhysHingeAlias_phys_hinge_local {
};
struct CLogicCase {
    // 0x4a8
    CUtlSymbolLarge[32] m_nCase;
    // 0x5a8
    int32_t m_nShuffleCases;
    // 0x5ac
    int32_t m_nLastShuffleCase;
    // 0x5b0
    uint8[32] m_uchShuffleCaseMap;
    // 0x5d0
    CEntityIOOutput[32] m_OnCase;
    // 0x8d0
    CUtlString m_OnDefault;
};
struct CInfoGameEventProxy {
    // 0x4a8
    CUtlSymbolLarge m_iszEventName;
    // 0x4b0
    float m_flRange;
};
struct CWeaponBizon {
};
struct CGamePlayerZone {
    // 0x738
    CEntityIOOutput m_OnPlayerInZone;
    // 0x750
    CEntityIOOutput m_OnPlayerOutZone;
    // 0x768
    CEntityOutputTemplate< int32, int32 > m_PlayersInCount;
    // 0x788
    CEntityOutputTemplate< int32, int32 > m_PlayersOutCount;
};
struct CBaseToggle {
    // 0x730
    TOGGLE_STATE m_toggle_state;
    // 0x734
    float m_flMoveDistance;
    // 0x738
    float m_flWait;
    // 0x73c
    float m_flLip;
    // 0x740
    bool m_bAlwaysFireBlockedOutputs;
    // 0x744
    Vector m_vecPosition1;
    // 0x750
    Vector m_vecPosition2;
    // 0x75c
    QAngle m_vecMoveAng;
    // 0x768
    QAngle m_vecAngle1;
    // 0x774
    QAngle m_vecAngle2;
    // 0x780
    float m_flHeight;
    // 0x784
    CHandle<T> m_hActivator;
    // 0x788
    Vector m_vecFinalDest;
    // 0x794
    QAngle m_vecFinalAngle;
    // 0x7a0
    int32_t m_movementType;
    // 0x7a8
    CUtlSymbolLarge m_sMaster;
};
struct CPulseServerCursor {
    // 0xd8
    CHandle<T> m_hActivator;
    // 0xdc
    CHandle<T> m_hCaller;
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
struct CInferno {
    // 0x730
    Vector[64] m_firePositions;
    // 0xa30
    Vector[64] m_fireParentPositions;
    // 0xd30
    bool[64] m_bFireIsBurning;
    // 0xd70
    Vector[64] m_BurnNormal;
    // 0x1070
    int32_t m_fireCount;
    // 0x1074
    int32_t m_nInfernoType;
    // 0x1078
    int32_t m_nFireEffectTickBegin;
    // 0x107c
    float m_nFireLifetime;
    // 0x1080
    bool m_bInPostEffectTime;
    // 0x1081
    bool m_bWasCreatedInSmoke;
    // 0x1288
    Extent m_extent;
    // 0x12a0
    CountdownTimer m_damageTimer;
    // 0x12b8
    CountdownTimer m_damageRampTimer;
    // 0x12d0
    Vector m_splashVelocity;
    // 0x12dc
    Vector m_InitialSplashVelocity;
    // 0x12e8
    Vector m_startPos;
    // 0x12f4
    Vector m_vecOriginalSpawnLocation;
    // 0x1300
    IntervalTimer m_activeTimer;
    // 0x1310
    int32_t m_fireSpawnOffset;
    // 0x1314
    int32_t m_nMaxFlames;
    // 0x1318
    int32_t m_nSpreadCount;
    // 0x1320
    CountdownTimer m_BookkeepingTimer;
    // 0x1338
    CountdownTimer m_NextSpreadTimer;
    // 0x1350
    uint16_t m_nSourceItemDefIndex;
};
struct CTouchExpansionComponent {
};
struct CPulseCell_Outflow_PlaySceneBase {
    // 0x48
    CPulse_ResumePoint m_OnFinished;
    // 0x90
    CPulse_ResumePoint m_OnCanceled;
    // 0xd8
    CUtlVector<T> m_Triggers;
};
struct CPulseCell_LerpCameraSettings {
    // 0x90
    float m_flSeconds;
    // 0x94
    PointCameraSettings_t m_Start;
    // 0xa4
    PointCameraSettings_t m_End;
};
struct CWeaponSCAR20 {
};
struct CFuncInteractionLayerClip {
    // 0x730
    bool m_bDisabled;
    // 0x738
    CUtlSymbolLarge m_iszInteractsAs;
    // 0x740
    CUtlSymbolLarge m_iszInteractsWith;
};
struct CCSObserver_UseServices {
};
struct CTriggerDetectBulletFire {
    // 0x890
    bool m_bPlayerFireOnly;
    // 0x898
    CEntityIOOutput m_OnDetectedBulletFire;
};
struct CCSPlayer_UseServices {
    // 0x48
    CHandle<T> m_hLastKnownUseEntity;
    // 0x4c
    GameTime_t m_flLastUseTimeStamp;
    // 0x50
    GameTime_t m_flTimeLastUsedWindow;
};
struct CWeaponAWP {
};
struct CPulseCell_PickBestOutflowSelector {
    // 0x48
    PulseBestOutflowRules_t m_nCheckType;
    // 0x50
    PulseSelectorOutflowList_t m_OutflowList;
};
struct CInfoFan {
    // 0x4e8
    float m_fFanForceMaxRadius;
    // 0x4ec
    float m_fFanForceMinRadius;
    // 0x4f0
    float m_flCurveDistRange;
    // 0x4f8
    CUtlSymbolLarge m_FanForceCurveString;
};
struct CGameRules {
    // 0x8
    CNetworkVarChainer _m_pChainEntity;
    // 0x30
    char[128] m_szQuestName;
    // 0xb0
    int32_t m_nQuestPhase;
    // 0xb4
    uint32_t m_nLastMatchTime;
    // 0xb8
    uint64_t m_nLastMatchTime_MatchID64;
    // 0xc0
    int32_t m_nTotalPausedTicks;
    // 0xc4
    int32_t m_nPauseStartTick;
    // 0xc8
    bool m_bGamePaused;
};
struct CFish {
    // 0xa20
    CHandle<T> m_pool;
    // 0xa24
    uint32_t m_id;
    // 0xa28
    float m_x;
    // 0xa2c
    float m_y;
    // 0xa30
    float m_z;
    // 0xa34
    float m_angle;
    // 0xa38
    float m_angleChange;
    // 0xa3c
    Vector m_forward;
    // 0xa48
    Vector m_perp;
    // 0xa54
    Vector m_poolOrigin;
    // 0xa60
    float m_waterLevel;
    // 0xa64
    float m_speed;
    // 0xa68
    float m_desiredSpeed;
    // 0xa6c
    float m_calmSpeed;
    // 0xa70
    float m_panicSpeed;
    // 0xa74
    float m_avoidRange;
    // 0xa78
    CountdownTimer m_turnTimer;
    // 0xa90
    bool m_turnClockwise;
    // 0xa98
    CountdownTimer m_goTimer;
    // 0xab0
    CountdownTimer m_moveTimer;
    // 0xac8
    CountdownTimer m_panicTimer;
    // 0xae0
    CountdownTimer m_disperseTimer;
    // 0xaf8
    CountdownTimer m_proximityTimer;
    // 0xb10
    CUtlVector<T> m_visible;
};
struct CCSBot {
    // 0x108
    VectorWS m_eyePosition;
    // 0x114
    char[64] m_name;
    // 0x154
    float m_combatRange;
    // 0x158
    bool m_isRogue;
    // 0x160
    CountdownTimer m_rogueTimer;
    // 0x17c
    bool m_diedLastRound;
    // 0x180
    float m_safeTime;
    // 0x184
    bool m_wasSafe;
    // 0x18c
    bool m_blindFire;
    // 0x190
    CountdownTimer m_surpriseTimer;
    // 0x1a8
    bool m_bAllowActive;
    // 0x1a9
    bool m_isFollowing;
    // 0x1ac
    CHandle<T> m_leader;
    // 0x1b0
    float m_followTimestamp;
    // 0x1b4
    float m_allowAutoFollowTime;
    // 0x1b8
    CountdownTimer m_hurryTimer;
    // 0x1d0
    CountdownTimer m_alertTimer;
    // 0x1e8
    CountdownTimer m_sneakTimer;
    // 0x200
    CountdownTimer m_panicTimer;
    // 0x578
    float m_stateTimestamp;
    // 0x57c
    bool m_isAttacking;
    // 0x57d
    bool m_isOpeningDoor;
    // 0x584
    CHandle<T> m_taskEntity;
    // 0x594
    VectorWS m_goalPosition;
    // 0x5a0
    CHandle<T> m_goalEntity;
    // 0x5a4
    CHandle<T> m_avoid;
    // 0x5a8
    float m_avoidTimestamp;
    // 0x5ac
    bool m_isStopping;
    // 0x5ad
    bool m_hasVisitedEnemySpawn;
    // 0x5b0
    IntervalTimer m_stillTimer;
    // 0x5c0
    bool m_bEyeAnglesUnderPathFinderControl;
    // 0x5ec0
    int32_t m_pathIndex;
    // 0x5ec4
    GameTime_t m_areaEnteredTimestamp;
    // 0x5ec8
    CountdownTimer m_repathTimer;
    // 0x5ee0
    CountdownTimer m_avoidFriendTimer;
    // 0x5ef8
    bool m_isFriendInTheWay;
    // 0x5f00
    CountdownTimer m_politeTimer;
    // 0x5f18
    bool m_isWaitingBehindFriend;
    // 0x5f44
    float m_pathLadderEnd;
    // 0x5f90
    CountdownTimer m_mustRunTimer;
    // 0x5fa8
    CountdownTimer m_waitTimer;
    // 0x5fc0
    CountdownTimer m_updateTravelDistanceTimer;
    // 0x5fd8
    float32[64] m_playerTravelDistance;
    // 0x60d8
    uint8_t m_travelDistancePhase;
    // 0x6270
    uint8_t m_hostageEscortCount;
    // 0x6274
    float m_hostageEscortCountTimestamp;
    // 0x6278
    int32_t m_desiredTeam;
    // 0x627c
    bool m_hasJoined;
    // 0x627d
    bool m_isWaitingForHostage;
    // 0x6280
    CountdownTimer m_inhibitWaitingForHostageTimer;
    // 0x6298
    CountdownTimer m_waitForHostageTimer;
    // 0x62b0
    Vector m_noisePosition;
    // 0x62bc
    float m_noiseTravelDistance;
    // 0x62c0
    float m_noiseTimestamp;
    // 0x62c8
    CCSPlayerPawn* m_noiseSource;
    // 0x62e0
    CountdownTimer m_noiseBendTimer;
    // 0x62f8
    Vector m_bentNoisePosition;
    // 0x6304
    bool m_bendNoisePositionValid;
    // 0x6308
    float m_lookAroundStateTimestamp;
    // 0x630c
    float m_lookAheadAngle;
    // 0x6310
    float m_forwardAngle;
    // 0x6314
    float m_inhibitLookAroundTimestamp;
    // 0x631c
    Vector m_lookAtSpot;
    // 0x632c
    float m_lookAtSpotDuration;
    // 0x6330
    float m_lookAtSpotTimestamp;
    // 0x6334
    float m_lookAtSpotAngleTolerance;
    // 0x6338
    bool m_lookAtSpotClearIfClose;
    // 0x6339
    bool m_lookAtSpotAttack;
    // 0x6340
    char* m_lookAtDesc;
    // 0x6348
    float m_peripheralTimestamp;
    // 0x64d0
    uint8_t m_approachPointCount;
    // 0x64d4
    Vector m_approachPointViewPosition;
    // 0x64e0
    IntervalTimer m_viewSteadyTimer;
    // 0x64f8
    CountdownTimer m_tossGrenadeTimer;
    // 0x6518
    CountdownTimer m_isAvoidingGrenade;
    // 0x6538
    float m_spotCheckTimestamp;
    // 0x6940
    int32_t m_checkedHidingSpotCount;
    // 0x6944
    float m_lookPitch;
    // 0x6948
    float m_lookPitchVel;
    // 0x694c
    float m_lookYaw;
    // 0x6950
    float m_lookYawVel;
    // 0x6954
    Vector m_targetSpot;
    // 0x6960
    Vector m_targetSpotVelocity;
    // 0x696c
    Vector m_targetSpotPredicted;
    // 0x6978
    QAngle m_aimError;
    // 0x6984
    QAngle m_aimGoal;
    // 0x6990
    GameTime_t m_targetSpotTime;
    // 0x6994
    float m_aimFocus;
    // 0x6998
    float m_aimFocusInterval;
    // 0x699c
    GameTime_t m_aimFocusNextUpdate;
    // 0x69a8
    CountdownTimer m_ignoreEnemiesTimer;
    // 0x69c0
    CHandle<T> m_enemy;
    // 0x69c4
    bool m_isEnemyVisible;
    // 0x69c5
    uint8_t m_visibleEnemyParts;
    // 0x69c8
    Vector m_lastEnemyPosition;
    // 0x69d4
    float m_lastSawEnemyTimestamp;
    // 0x69d8
    float m_firstSawEnemyTimestamp;
    // 0x69dc
    float m_currentEnemyAcquireTimestamp;
    // 0x69e0
    float m_enemyDeathTimestamp;
    // 0x69e4
    float m_friendDeathTimestamp;
    // 0x69e8
    bool m_isLastEnemyDead;
    // 0x69ec
    int32_t m_nearbyEnemyCount;
    // 0x6bf8
    CHandle<T> m_bomber;
    // 0x6bfc
    int32_t m_nearbyFriendCount;
    // 0x6c00
    CHandle<T> m_closestVisibleFriend;
    // 0x6c04
    CHandle<T> m_closestVisibleHumanFriend;
    // 0x6c08
    IntervalTimer m_attentionInterval;
    // 0x6c18
    CHandle<T> m_attacker;
    // 0x6c1c
    float m_attackedTimestamp;
    // 0x6c20
    IntervalTimer m_burnedByFlamesTimer;
    // 0x6c30
    int32_t m_lastVictimID;
    // 0x6c34
    bool m_isAimingAtEnemy;
    // 0x6c35
    bool m_isRapidFiring;
    // 0x6c38
    IntervalTimer m_equipTimer;
    // 0x6c48
    CountdownTimer m_zoomTimer;
    // 0x6c60
    GameTime_t m_fireWeaponTimestamp;
    // 0x6c68
    CountdownTimer m_lookForWeaponsOnGroundTimer;
    // 0x6c80
    bool m_bIsSleeping;
    // 0x6c81
    bool m_isEnemySniperVisible;
    // 0x6c88
    CountdownTimer m_sawEnemySniperTimer;
    // 0x6d40
    uint8_t m_enemyQueueIndex;
    // 0x6d41
    uint8_t m_enemyQueueCount;
    // 0x6d42
    uint8_t m_enemyQueueAttendIndex;
    // 0x6d43
    bool m_isStuck;
    // 0x6d44
    GameTime_t m_stuckTimestamp;
    // 0x6d48
    Vector m_stuckSpot;
    // 0x6d58
    CountdownTimer m_wiggleTimer;
    // 0x6d70
    CountdownTimer m_stuckJumpTimer;
    // 0x6d88
    GameTime_t m_nextCleanupCheckTimestamp;
    // 0x6d8c
    float32[10] m_avgVel;
    // 0x6db4
    int32_t m_avgVelIndex;
    // 0x6db8
    int32_t m_avgVelCount;
    // 0x6dbc
    Vector m_lastOrigin;
    // 0x6dcc
    float m_lastRadioRecievedTimestamp;
    // 0x6dd0
    float m_lastRadioSentTimestamp;
    // 0x6dd4
    CHandle<T> m_radioSubject;
    // 0x6dd8
    Vector m_radioPosition;
    // 0x6de4
    float m_voiceEndTimestamp;
    // 0x6df0
    int32_t m_lastValidReactionQueueFrame;
};
struct CHandleTest {
    // 0x4a8
    CHandle<T> m_Handle;
    // 0x4ac
    bool m_bSendHandle;
};
struct CLogicNPCCounter {
    // 0x4a8
    CEntityIOOutput m_OnMinCountAll;
    // 0x4c0
    CEntityIOOutput m_OnMaxCountAll;
    // 0x4d8
    CEntityOutputTemplate< float32, float32 > m_OnFactorAll;
    // 0x4f8
    CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDistAll;
    // 0x518
    CEntityIOOutput m_OnMinCount_1;
    // 0x530
    CEntityIOOutput m_OnMaxCount_1;
    // 0x548
    CEntityOutputTemplate< float32, float32 > m_OnFactor_1;
    // 0x568
    CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_1;
    // 0x588
    CEntityIOOutput m_OnMinCount_2;
    // 0x5a0
    CEntityIOOutput m_OnMaxCount_2;
    // 0x5b8
    CEntityOutputTemplate< float32, float32 > m_OnFactor_2;
    // 0x5d8
    CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_2;
    // 0x5f8
    CEntityIOOutput m_OnMinCount_3;
    // 0x610
    CEntityIOOutput m_OnMaxCount_3;
    // 0x628
    CEntityOutputTemplate< float32, float32 > m_OnFactor_3;
    // 0x648
    CEntityOutputTemplate< float32, float32 > m_OnMinPlayerDist_3;
    // 0x668
    CEntityHandle m_hSource;
    // 0x670
    CUtlSymbolLarge m_iszSourceEntityName;
    // 0x678
    float m_flDistanceMax;
    // 0x67c
    bool m_bDisabled;
    // 0x680
    int32_t m_nMinCountAll;
    // 0x684
    int32_t m_nMaxCountAll;
    // 0x688
    int32_t m_nMinFactorAll;
    // 0x68c
    int32_t m_nMaxFactorAll;
    // 0x698
    CUtlSymbolLarge m_iszNPCClassname_1;
    // 0x6a0
    int32_t m_nNPCState_1;
    // 0x6a4
    bool m_bInvertState_1;
    // 0x6a8
    int32_t m_nMinCount_1;
    // 0x6ac
    int32_t m_nMaxCount_1;
    // 0x6b0
    int32_t m_nMinFactor_1;
    // 0x6b4
    int32_t m_nMaxFactor_1;
    // 0x6bc
    float m_flDefaultDist_1;
    // 0x6c0
    CUtlSymbolLarge m_iszNPCClassname_2;
    // 0x6c8
    int32_t m_nNPCState_2;
    // 0x6cc
    bool m_bInvertState_2;
    // 0x6d0
    int32_t m_nMinCount_2;
    // 0x6d4
    int32_t m_nMaxCount_2;
    // 0x6d8
    int32_t m_nMinFactor_2;
    // 0x6dc
    int32_t m_nMaxFactor_2;
    // 0x6e4
    float m_flDefaultDist_2;
    // 0x6e8
    CUtlSymbolLarge m_iszNPCClassname_3;
    // 0x6f0
    int32_t m_nNPCState_3;
    // 0x6f4
    bool m_bInvertState_3;
    // 0x6f8
    int32_t m_nMinCount_3;
    // 0x6fc
    int32_t m_nMaxCount_3;
    // 0x700
    int32_t m_nMinFactor_3;
    // 0x704
    int32_t m_nMaxFactor_3;
    // 0x70c
    float m_flDefaultDist_3;
};
struct CCSPlayer_RadioServices {
    // 0x48
    GameTime_t m_flGotHostageTalkTimer;
    // 0x4c
    GameTime_t m_flDefusingTalkTimer;
    // 0x50
    GameTime_t m_flC4PlantTalkTimer;
    // 0x54
    GameTime_t[3] m_flRadioTokenSlots;
    // 0x60
    bool m_bIgnoreRadio;
};
struct CWeaponSG556 {
};
struct CRagdollConstraint {
    // 0x508
    float m_xmin;
    // 0x50c
    float m_xmax;
    // 0x510
    float m_ymin;
    // 0x514
    float m_ymax;
    // 0x518
    float m_zmin;
    // 0x51c
    float m_zmax;
    // 0x520
    float m_xfriction;
    // 0x524
    float m_yfriction;
    // 0x528
    float m_zfriction;
};
struct CFuncVehicleClip {
};
struct CDEagle {
};
struct CWeaponFamas {
};
struct CEnvSplash {
    // 0x4a8
    float m_flScale;
};
struct CPointCameraVFOV {
    // 0x508
    float m_flVerticalFOV;
};
struct CCSGO_WingmanIntroTerroristPosition {
};
struct CTestPulseIOAPI {
};
struct CCSWeaponBaseShotgun {
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
struct CFuncMoveLinear {
    // 0x7b0
    MoveLinearAuthoredPos_t m_authoredPosition;
    // 0x7b4
    QAngle m_angMoveEntitySpace;
    // 0x7c0
    Vector m_vecMoveDirParentSpace;
    // 0x7d0
    CUtlSymbolLarge m_soundStart;
    // 0x7d8
    CUtlSymbolLarge m_soundStop;
    // 0x7e0
    CUtlSymbolLarge m_currentSound;
    // 0x7e8
    float m_flBlockDamage;
    // 0x7ec
    float m_flStartPosition;
    // 0x7f8
    CEntityIOOutput m_OnFullyOpen;
    // 0x810
    CEntityIOOutput m_OnFullyClosed;
    // 0x828
    bool m_bCreateMovableNavMesh;
    // 0x829
    bool m_bAllowMovableNavMeshDockingOnEntireEntity;
    // 0x82a
    bool m_bCreateNavObstacle;
};
struct CPhysMotorAPI {
};
struct CPulseCell_WaitForObservable {
    // 0x48
    PulseObservableBoolExpression_t m_Condition;
    // 0xc0
    CPulse_ResumePoint m_OnTrue;
};
struct CScriptItem {
    // 0xac0
    MoveType_t m_MoveTypeOverride;
};
struct CDynamicPropAlias_prop_dynamic_override {
};
struct CBaseTrigger {
    // 0x7b0
    CEntityIOOutput m_OnStartTouch;
    // 0x7c8
    CEntityIOOutput m_OnStartTouchAll;
    // 0x7e0
    CEntityIOOutput m_OnEndTouch;
    // 0x7f8
    CEntityIOOutput m_OnEndTouchAll;
    // 0x810
    CEntityIOOutput m_OnTouching;
    // 0x828
    CEntityIOOutput m_OnTouchingEachEntity;
    // 0x840
    CEntityIOOutput m_OnNotTouching;
    // 0x858
    CUtlVector<T> m_hTouchingEntities;
    // 0x870
    CUtlSymbolLarge m_iFilterName;
    // 0x878
    CHandle<T> m_hFilter;
    // 0x87c
    bool m_bDisabled;
    // 0x888
    bool m_bUseAsyncQueries;
};
struct CPointPush {
    // 0x4a8
    bool m_bEnabled;
    // 0x4ac
    float m_flMagnitude;
    // 0x4b0
    float m_flRadius;
    // 0x4b4
    float m_flInnerRadius;
    // 0x4b8
    float m_flConeOfInfluence;
    // 0x4c0
    CUtlSymbolLarge m_iszFilterName;
    // 0x4c8
    CHandle<T> m_hFilter;
};
struct CPulseCell_Step_EntFire {
    // 0x48
    CUtlString m_Input;
};
struct CCSObserver_ObserverServices {
};
struct CPlayerPing {
    // 0x4b0
    CHandle<T> m_hPlayer;
    // 0x4b4
    CHandle<T> m_hPingedEntity;
    // 0x4b8
    int32_t m_iType;
    // 0x4bc
    bool m_bUrgent;
    // 0x4bd
    char[18] m_szPlaceName;
};
struct CHitboxComponent {
    // 0x14
    float m_flBoundsExpandRadius;
};
struct CRopeKeyframe {
    // 0x738
    uint16_t m_RopeFlags;
    // 0x740
    CUtlSymbolLarge m_iNextLinkName;
    // 0x748
    int16 m_Slack;
    // 0x74c
    float m_Width;
    // 0x750
    float m_TextureScale;
    // 0x754
    uint8_t m_nSegments;
    // 0x755
    bool m_bConstrainBetweenEndpoints;
    // 0x758
    CUtlSymbolLarge m_strRopeMaterialModel;
    // 0x760
    CStrongHandle<T> m_iRopeMaterialModelIndex;
    // 0x768
    uint8_t m_Subdiv;
    // 0x769
    uint8_t m_nChangeCount;
    // 0x76a
    int16 m_RopeLength;
    // 0x76c
    uint8_t m_fLockedPoints;
    // 0x76d
    bool m_bCreatedFromMapFile;
    // 0x770
    float m_flScrollSpeed;
    // 0x774
    bool m_bStartPointValid;
    // 0x775
    bool m_bEndPointValid;
    // 0x778
    CHandle<T> m_hStartPoint;
    // 0x77c
    CHandle<T> m_hEndPoint;
    // 0x780
    AttachmentHandle_t m_iStartAttachment;
    // 0x781
    AttachmentHandle_t m_iEndAttachment;
};
struct CSmokeGrenade {
};
struct CBaseCombatCharacter {
    // 0xab0
    bool m_bForceServerRagdoll;
    // 0xab8
    CHandle<T> m_hMyWearables;
    // 0xad0
    float m_impactEnergyScale;
    // 0xad4
    bool m_bApplyStressDamage;
    // 0xad5
    bool m_bDeathEventsDispatched;
    // 0xb18
    CUtlVector<T> m_pVecRelationships;
    // 0xb20
    CUtlSymbolLarge m_strRelationships;
    // 0xb28
    Hull_t m_eHull;
    // 0xb2c
    uint32_t m_nNavHullIdx;
    // 0xb30
    CMovementStatsProperty m_movementStats;
};
struct ServerAuthoritativeWeaponSlot_t {
    // 0x30
    uint16_t unClass;
    // 0x32
    uint16_t unSlot;
    // 0x34
    uint16_t unItemDefIdx;
};
struct CPathQueryComponent {
};
struct CLogicRelay {
    // 0x4a8
    bool m_bDisabled;
    // 0x4a9
    bool m_bWaitForRefire;
    // 0x4aa
    bool m_bTriggerOnce;
    // 0x4ab
    bool m_bFastRetrigger;
    // 0x4ac
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
struct CTestPulseIO {
    // 0x4a8
    CEntityIOOutput m_OnVariantVoid;
    // 0x4c0
    CEntityOutputTemplate< bool, bool > m_OnVariantBool;
    // 0x4e0
    CEntityOutputTemplate< int32, int32 > m_OnVariantInt;
    // 0x500
    CEntityOutputTemplate< float32, float32 > m_OnVariantFloat;
    // 0x520
    CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnVariantString;
    // 0x540
    CEntityOutputTemplate< Color, Color > m_OnVariantColor;
    // 0x560
    CEntityOutputTemplate< Vector, Vector > m_OnVariantVector;
    // 0x588
    bool m_bAllowEmptyInputs;
};
struct CWeaponUMP45 {
};
struct CGamePlayerEquip {
};
struct CPointEntityFinder {
    // 0x4a8
    CHandle<T> m_hEntity;
    // 0x4b0
    CUtlSymbolLarge m_iFilterName;
    // 0x4b8
    CHandle<T> m_hFilter;
    // 0x4c0
    CUtlSymbolLarge m_iRefName;
    // 0x4c8
    CHandle<T> m_hReference;
    // 0x4cc
    EntFinderMethod_t m_FindMethod;
    // 0x4d0
    CEntityIOOutput m_OnFoundEntity;
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
struct CKnife {
    // 0x1130
    bool m_bFirstAttack;
};
struct CLogicPlayerProxy {
    // 0x4a8
    CEntityIOOutput m_PlayerHasAmmo;
    // 0x4c0
    CEntityIOOutput m_PlayerHasNoAmmo;
    // 0x4d8
    CEntityIOOutput m_PlayerDied;
    // 0x4f0
    CEntityOutputTemplate< int32, int32 > m_RequestedPlayerHealth;
    // 0x510
    CHandle<T> m_hPlayer;
};
struct CCSGO_TeamIntroCharacterPosition {
};
struct CBasePlayerControllerAPI {
};
struct CHostageRescueZoneShim {
};
struct CSimpleMarkupVolumeTagged {
};
struct CEnvSoundscapeAlias_snd_soundscape {
};
struct CCSPlayer_HostageServices {
    // 0x48
    CHandle<T> m_hCarriedHostage;
    // 0x4c
    CHandle<T> m_hCarriedHostageProp;
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
struct CWaterBullet {
};
struct CTriggerSoundscape {
    // 0x890
    CHandle<T> m_hSoundscape;
    // 0x898
    CUtlSymbolLarge m_SoundscapeName;
    // 0x8a0
    CUtlVector<T> m_spectators;
};
struct CPointTeleportAPI {
};
struct CHostageExpresserShim {
    // 0xb70
    CAI_Expresser* m_pExpresser;
};
struct CPointChildModifier {
    // 0x4a8
    bool m_bOrphanInsteadOfDeletingChildrenOnRemove;
};
struct CCSPlayerLegacyJump {
    // 0x10
    bool m_bOldJumpPressed;
    // 0x14
    float m_flJumpPressedTime;
};
struct CWeaponHKP2000 {
};
struct CShatterGlassShardPhysics {
    // 0xce0
    bool m_bDebris;
    // 0xce4
    uint32_t m_hParentShard;
    // 0xce8
    shard_model_desc_t m_ShardDesc;
};
struct CPathParticleRope {
    // 0x4b0
    bool m_bStartActive;
    // 0x4b4
    float m_flMaxSimulationTime;
    // 0x4b8
    CUtlSymbolLarge m_iszEffectName;
    // 0x4c0
    CUtlVector<T> m_PathNodes_Name;
    // 0x4d8
    float m_flParticleSpacing;
    // 0x4dc
    float m_flSlack;
    // 0x4e0
    float m_flRadius;
    // 0x4e4
    Color m_ColorTint;
    // 0x4e8
    int32_t m_nEffectState;
    // 0x4f0
    CStrongHandle<T> m_iEffectIndex;
    // 0x4f8
    CNetworkUtlVectorBase< Vector > m_PathNodes_Position;
    // 0x510
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn;
    // 0x528
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut;
    // 0x540
    CNetworkUtlVectorBase< Vector > m_PathNodes_Color;
    // 0x558
    CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled;
    // 0x570
    CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale;
};
struct CCredits {
    // 0x4a8
    CEntityIOOutput m_OnCreditsDone;
    // 0x4c0
    bool m_bRolledOutroCredits;
    // 0x4c4
    float m_flLogoLength;
};
struct CWeaponFiveSeven {
};
struct CFishPool {
    // 0x4b8
    int32_t m_fishCount;
    // 0x4bc
    float m_maxRange;
    // 0x4c0
    float m_swimDepth;
    // 0x4c4
    float m_waterLevel;
    // 0x4c8
    bool m_isDormant;
    // 0x4d0
    CUtlVector<T> m_fishes;
    // 0x4e8
    CountdownTimer m_visTimer;
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
struct CRagdollPropAlias_physics_prop_ragdoll {
};
struct CBreakableProp {
    // 0xa58
    CPropDataComponent m_CPropDataComponent;
    // 0xa98
    CEntityIOOutput m_OnStartDeath;
    // 0xab0
    CEntityIOOutput m_OnBreak;
    // 0xac8
    CEntityOutputTemplate< float32, float32 > m_OnHealthChanged;
    // 0xae8
    CEntityIOOutput m_OnTakeDamage;
    // 0xb00
    float m_impactEnergyScale;
    // 0xb04
    int32_t m_iMinHealthDmg;
    // 0xb08
    QAngle m_preferredCarryAngles;
    // 0xb14
    float m_flPressureDelay;
    // 0xb18
    float m_flDefBurstScale;
    // 0xb1c
    Vector m_vDefBurstOffset;
    // 0xb28
    CHandle<T> m_hBreaker;
    // 0xb2c
    PerformanceMode_t m_PerformanceMode;
    // 0xb30
    GameTime_t m_flPreventDamageBeforeTime;
    // 0xb34
    BreakableContentsType_t m_BreakableContentsType;
    // 0xb38
    CUtlString m_strBreakableContentsPropGroupOverride;
    // 0xb40
    CUtlString m_strBreakableContentsParticleOverride;
    // 0xb48
    bool m_bHasBreakPiecesOrCommands;
    // 0xb4c
    float m_explodeDamage;
    // 0xb50
    float m_explodeRadius;
    // 0xb54
    BaseExplosionTypes_t m_nExplosionType;
    // 0xb58
    float m_explosionDelay;
    // 0xb60
    CUtlSymbolLarge m_explosionBuildupSound;
    // 0xb68
    CUtlSymbolLarge m_explosionCustomEffect;
    // 0xb70
    CUtlSymbolLarge m_explosionCustomSound;
    // 0xb78
    CUtlSymbolLarge m_explosionModifier;
    // 0xb80
    CHandle<T> m_hPhysicsAttacker;
    // 0xb84
    GameTime_t m_flLastPhysicsInfluenceTime;
    // 0xb88
    float m_flDefaultFadeScale;
    // 0xb8c
    CHandle<T> m_hLastAttacker;
    // 0xb90
    CUtlSymbolLarge m_iszPuntSound;
    // 0xb98
    bool m_bUsePuntSound;
    // 0xb99
    bool m_bOriginalBlockLOS;
};
struct CLightEntity {
    // 0x730
    CLightComponent* m_CLightComponent;
};
struct CInfoDynamicShadowHintBox {
    // 0x4c0
    Vector m_vBoxMins;
    // 0x4cc
    Vector m_vBoxMaxs;
};
struct CBaseAnimGraphController {
    // 0x18
    AnimationAlgorithm_t m_nAnimationAlgorithm;
    // 0x20
    CAnimGraphNetworkedVariables m_animGraphNetworkedVars;
    // 0x228
    CSmartPtr< IAnimationGraphInstance > m_pAnimGraphInstance;
    // 0x288
    ExternalAnimGraphHandle_t m_nNextExternalGraphHandle;
    // 0x290
    CUtlVector<T> m_vecSecondarySkeletonNames;
    // 0x2a8
    CHandle<T> m_vecSecondarySkeletons;
    // 0x2c0
    int32_t m_nSecondarySkeletonMasterCount;
    // 0x2c4
    float m_flSoundSyncTime;
    // 0x2c8
    uint32_t m_nActiveIKChainMask;
    // 0x2cc
    HSequence m_hSequence;
    // 0x2d0
    GameTime_t m_flSeqStartTime;
    // 0x2d4
    float m_flSeqFixedCycle;
    // 0x2d8
    AnimLoopMode_t m_nAnimLoopMode;
    // 0x2dc
    CNetworkedQuantizedFloat m_flPlaybackRate;
    // 0x2e8
    SequenceFinishNotifyState_t m_nNotifyState;
    // 0x2e9
    bool m_bNetworkedAnimationInputsChanged;
    // 0x2ea
    bool m_bNetworkedSequenceChanged;
    // 0x2eb
    bool m_bLastUpdateSkipped;
    // 0x2ec
    bool m_bSequenceFinished;
    // 0x2f0
    GameTick_t m_nPrevAnimUpdateTick;
    // 0x590
    CStrongHandle<T> m_hGraphDefinitionAG2;
    // 0x598
    CNetworkUtlVectorBase< uint8 > m_serializedPoseRecipeAG2;
    // 0x5b0
    int32_t m_nSerializePoseRecipeSizeAG2;
    // 0x5b4
    int32_t m_nSerializePoseRecipeVersionAG2;
    // 0x5b8
    int32_t m_nServerGraphInstanceIteration;
    // 0x5bc
    int32_t m_nServerSerializationContextIteration;
    // 0x5c0
    ResourceId_t m_primaryGraphId;
    // 0x5c8
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalGraphIds;
    // 0x5e0
    CNetworkUtlVectorBase< ResourceId_t > m_vecExternalClipIds;
    // 0x5f8
    CGlobalSymbol m_sAnimGraph2Identifier;
    // 0x820
    CUtlVector<T> m_vecExternalGraphs;
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
struct COrnamentProp {
    // 0xc50
    CUtlSymbolLarge m_initialOwner;
};
struct CCSPlayer_CameraServices {
};
struct CModelPointEntity {
};
struct CRectLight {
    // 0xa20
    bool m_bShowLight;
};
struct CFilterMultiple {
    // 0x4e0
    filter_t m_nFilterType;
    // 0x4e8
    CUtlSymbolLarge[10] m_iFilterName;
    // 0x538
    CHandle<T> m_hFilter;
};
struct CCSPlayerResource {
    // 0x4a8
    bool[12] m_bHostageAlive;
    // 0x4b4
    bool[12] m_isHostageFollowingSomeone;
    // 0x4c0
    CEntityIndex[12] m_iHostageEntityIDs;
    // 0x4f0
    Vector m_bombsiteCenterA;
    // 0x4fc
    Vector m_bombsiteCenterB;
    // 0x508
    int32[4] m_hostageRescueX;
    // 0x518
    int32[4] m_hostageRescueY;
    // 0x528
    int32[4] m_hostageRescueZ;
    // 0x538
    bool m_bEndMatchNextMapAllVoted;
    // 0x539
    bool m_foundGoalPositions;
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
struct CFuncNavBlocker {
    // 0x738
    bool m_bDisabled;
    // 0x73c
    int32_t m_nBlockedTeamNumber;
};
struct CMoverPathNode {
    // 0x500
    CUtlString m_OnStartFromOrInSegment;
    // 0x520
    CUtlString m_OnStoppedAtOrInSegment;
    // 0x540
    CUtlString m_OnPassThrough;
    // 0x560
    CUtlString m_OnPassThroughForward;
    // 0x580
    CUtlString m_OnPassThroughReverse;
};
struct CEnvSoundscape {
    // 0x4a8
    CEntityIOOutput m_OnPlay;
    // 0x4c0
    float m_flRadius;
    // 0x4c8
    CUtlSymbolLarge m_soundEventName;
    // 0x4d0
    bool m_bOverrideWithEvent;
    // 0x4d4
    int32_t m_soundscapeIndex;
    // 0x4d8
    int32_t m_soundscapeEntityListId;
    // 0x4e0
    CUtlSymbolLarge[8] m_positionNames;
    // 0x520
    CHandle<T> m_hProxySoundscape;
    // 0x524
    bool m_bDisabled;
    // 0x528
    CUtlSymbolLarge m_soundscapeName;
    // 0x530
    uint32_t m_soundEventHash;
};
struct CFuncBrush {
    // 0x730
    BrushSolidities_e m_iSolidity;
    // 0x734
    int32_t m_iDisabled;
    // 0x738
    bool m_bSolidBsp;
    // 0x740
    CUtlSymbolLarge m_iszExcludedClass;
    // 0x748
    bool m_bInvertExclusion;
    // 0x749
    bool m_bScriptedMovement;
};
struct CBodyComponentPoint {
    // 0x80
    CGameSceneNode m_sceneNode;
};
struct CPhysBox {
    // 0x808
    int32_t m_damageType;
    // 0x80c
    int32_t m_damageToEnableMotion;
    // 0x810
    float m_flForceToEnableMotion;
    // 0x814
    Vector m_vHoverPosePosition;
    // 0x820
    QAngle m_angHoverPoseAngles;
    // 0x82c
    bool m_bNotSolidToWorld;
    // 0x82d
    bool m_bEnableUseOutput;
    // 0x82e
    HoverPoseFlags_t m_nHoverPoseFlags;
    // 0x830
    float m_flTouchOutputPerEntityDelay;
    // 0x838
    CEntityIOOutput m_OnDamaged;
    // 0x850
    CEntityIOOutput m_OnAwakened;
    // 0x868
    CEntityIOOutput m_OnMotionEnabled;
    // 0x880
    CEntityIOOutput m_OnPlayerUse;
    // 0x898
    CEntityIOOutput m_OnStartTouch;
    // 0x8b0
    CHandle<T> m_hCarryingPlayer;
};
struct CSoundEventAABBEntity {
    // 0x558
    Vector m_vMins;
    // 0x564
    Vector m_vMaxs;
};
struct CItemSoda {
};
struct CPulseCell_Timeline_TimelineEvent_t {
    // 0x0
    float m_flTimeFromPrevious;
    // 0x8
    CPulse_OutflowConnection m_EventOutflow;
};
struct COmniLight {
    // 0xa20
    float m_flInnerAngle;
    // 0xa24
    float m_flOuterAngle;
    // 0xa28
    bool m_bShowLight;
};
struct CTriggerVolume {
    // 0x730
    CUtlSymbolLarge m_iFilterName;
    // 0x738
    CHandle<T> m_hFilter;
};
struct CBtNodeCondition {
    // 0x58
    bool m_bNegated;
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
struct CEnvExplosion {
    // 0x730
    int32_t m_iMagnitude;
    // 0x734
    float m_flPlayerDamage;
    // 0x738
    int32_t m_iRadiusOverride;
    // 0x73c
    float m_flInnerRadius;
    // 0x740
    float m_flDamageForce;
    // 0x744
    CHandle<T> m_hInflictor;
    // 0x748
    DamageTypes_t m_iCustomDamageType;
    // 0x74c
    bool m_bCreateDebris;
    // 0x758
    CUtlSymbolLarge m_iszCustomEffectName;
    // 0x760
    CUtlSymbolLarge m_iszCustomSoundName;
    // 0x768
    bool m_bSuppressParticleImpulse;
    // 0x76c
    Class_T m_iClassIgnore;
    // 0x770
    Class_T m_iClassIgnore2;
    // 0x778
    CUtlSymbolLarge m_iszEntityIgnoreName;
    // 0x780
    CHandle<T> m_hEntityIgnore;
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
struct CFootstepControl {
    // 0x890
    CUtlSymbolLarge m_source;
    // 0x898
    CUtlSymbolLarge m_destination;
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
struct CParticleSystem {
    // 0x730
    char[512] m_szSnapshotFileName;
    // 0x930
    bool m_bActive;
    // 0x931
    bool m_bFrozen;
    // 0x934
    float m_flFreezeTransitionDuration;
    // 0x938
    int32_t m_nStopType;
    // 0x93c
    bool m_bAnimateDuringGameplayPause;
    // 0x940
    CStrongHandle<T> m_iEffectIndex;
    // 0x948
    GameTime_t m_flStartTime;
    // 0x94c
    float m_flPreSimTime;
    // 0x950
    Vector[4] m_vServerControlPoints;
    // 0x980
    uint8[4] m_iServerControlPointAssignments;
    // 0x984
    CHandle<T> m_hControlPointEnts;
    // 0xa84
    bool m_bNoSave;
    // 0xa85
    bool m_bNoFreeze;
    // 0xa86
    bool m_bNoRamp;
    // 0xa87
    bool m_bStartActive;
    // 0xa88
    CUtlSymbolLarge m_iszEffectName;
    // 0xa90
    CUtlSymbolLarge[64] m_iszControlPointNames;
    // 0xc90
    int32_t m_nDataCP;
    // 0xc94
    Vector m_vecDataCPValue;
    // 0xca0
    int32_t m_nTintCP;
    // 0xca4
    Color m_clrTint;
};
struct CTriggerBrush {
    // 0x730
    CEntityIOOutput m_OnStartTouch;
    // 0x748
    CEntityIOOutput m_OnEndTouch;
    // 0x760
    CEntityIOOutput m_OnUse;
    // 0x778
    int32_t m_iInputFilter;
    // 0x77c
    int32_t m_iDontMessageParent;
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
struct CSoundAreaEntityBase {
    // 0x4a8
    bool m_bDisabled;
    // 0x4b0
    CUtlSymbolLarge m_iszSoundAreaType;
    // 0x4b8
    Vector m_vPos;
};
struct CWeaponM4A1Silencer {
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
struct CItemAssaultSuit {
};
struct CBeam {
    // 0x730
    float m_flFrameRate;
    // 0x734
    float m_flHDRColorScale;
    // 0x738
    GameTime_t m_flFireTime;
    // 0x73c
    float m_flDamage;
    // 0x740
    uint8_t m_nNumBeamEnts;
    // 0x748
    CStrongHandle<T> m_hBaseMaterial;
    // 0x750
    CStrongHandle<T> m_nHaloIndex;
    // 0x758
    BeamType_t m_nBeamType;
    // 0x75c
    uint32_t m_nBeamFlags;
    // 0x760
    CHandle<T> m_hAttachEntity;
    // 0x788
    AttachmentHandle_t[10] m_nAttachIndex;
    // 0x794
    float m_fWidth;
    // 0x798
    float m_fEndWidth;
    // 0x79c
    float m_fFadeLength;
    // 0x7a0
    float m_fHaloScale;
    // 0x7a4
    float m_fAmplitude;
    // 0x7a8
    float m_fStartFrame;
    // 0x7ac
    float m_fSpeed;
    // 0x7b0
    float m_flFrame;
    // 0x7b4
    BeamClipStyle_t m_nClipStyle;
    // 0x7b8
    bool m_bTurnedOff;
    // 0x7bc
    VectorWS m_vecEndPos;
    // 0x7c8
    CHandle<T> m_hEndEntity;
    // 0x7cc
    int32_t m_nDissolveType;
};
struct CLogicEventListener {
    // 0x4b8
    CUtlString m_strEventName;
    // 0x4c0
    bool m_bIsEnabled;
    // 0x4c4
    int32_t m_nTeam;
    // 0x4c8
    CUtlString m_OnEventFired;
};
struct CCSGO_TeamSelectTerroristPosition {
};
struct CInfoData {
};
struct CWeaponNegev {
};
struct CWeaponElite {
};
struct CBasePlayerPawn {
    // 0xb70
    CPlayer_WeaponServices* m_pWeaponServices;
    // 0xb78
    CPlayer_ItemServices* m_pItemServices;
    // 0xb80
    CPlayer_AutoaimServices* m_pAutoaimServices;
    // 0xb88
    CPlayer_ObserverServices* m_pObserverServices;
    // 0xb90
    CPlayer_WaterServices* m_pWaterServices;
    // 0xb98
    CPlayer_UseServices* m_pUseServices;
    // 0xba0
    CPlayer_FlashlightServices* m_pFlashlightServices;
    // 0xba8
    CPlayer_CameraServices* m_pCameraServices;
    // 0xbb0
    CPlayer_MovementServices* m_pMovementServices;
    // 0xbc0
    CUtlVector<T> m_ServerViewAngleChanges;
    // 0xc28
    QAngle v_angle;
    // 0xc34
    QAngle v_anglePrevious;
    // 0xc40
    uint32_t m_iHideHUD;
    // 0xc48
    sky3dparams_t m_skybox3d;
    // 0xcd8
    GameTime_t m_fTimeLastHurt;
    // 0xcdc
    GameTime_t m_flDeathTime;
    // 0xce0
    GameTime_t m_fNextSuicideTime;
    // 0xce4
    bool m_fInitHUD;
    // 0xce8
    CAI_Expresser* m_pExpresser;
    // 0xcf0
    CHandle<T> m_hController;
    // 0xcf4
    CHandle<T> m_hDefaultController;
    // 0xcfc
    float m_fHltvReplayDelay;
    // 0xd00
    float m_fHltvReplayEnd;
    // 0xd04
    CEntityIndex m_iHltvReplayEntity;
    // 0xd08
    CUtlVector<T> m_sndOpvarLatchData;
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
    // 0x4e0
    bool m_bAdrenalineActive;
    // 0x4e4
    int32_t m_iHealthMin;
    // 0x4e8
    int32_t m_iHealthMax;
};
struct CCSSprite {
};
struct CMathColorBlend {
    // 0x4a8
    float m_flInMin;
    // 0x4ac
    float m_flInMax;
    // 0x4b0
    Color m_OutColor1;
    // 0x4b4
    Color m_OutColor2;
    // 0x4b8
    CEntityOutputTemplate< Color, Color > m_OutValue;
};
struct CShower {
};
struct CPulseCell_Inflow_GraphHook {
    // 0x80
    PulseSymbol_t m_HookName;
};
struct CScriptNavBlocker {
    // 0x748
    Vector m_vExtent;
};
struct CEntityBlocker {
};
struct SignatureOutflow_Resume {
};
struct CPathSimpleAPI {
};
struct CCSObserverPawn {
};
struct CTriggerActiveWeaponDetect {
    // 0x890
    CEntityIOOutput m_OnTouchedActiveWeapon;
    // 0x8a8
    CUtlSymbolLarge m_iszWeaponClassName;
};
struct CFuncLadderAlias_func_useableladder {
};
struct CSpriteOriented {
};
struct CPointServerCommand {
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
    CNetworkUtlVectorBase< Vector2D > m_vecPanelVertices;
    // 0x58
    CNetworkUtlVectorBase< Vector4D > m_vInitialPanelVertices;
    // 0x70
    float m_flGlassHalfThickness;
    // 0x74
    bool m_bHasParent;
    // 0x75
    bool m_bParentFrozen;
    // 0x78
    CUtlString m_SurfacePropStringToken;
};
struct CPlayerSprayDecal {
    // 0x730
    int32_t m_nUniqueID;
    // 0x734
    uint32_t m_unAccountID;
    // 0x738
    uint32_t m_unTraceID;
    // 0x73c
    uint32_t m_rtGcTime;
    // 0x740
    Vector m_vecEndPos;
    // 0x74c
    Vector m_vecStart;
    // 0x758
    Vector m_vecLeft;
    // 0x764
    Vector m_vecNormal;
    // 0x770
    int32_t m_nPlayer;
    // 0x774
    int32_t m_nEntity;
    // 0x778
    int32_t m_nHitbox;
    // 0x77c
    float m_flCreationTime;
    // 0x780
    int32_t m_nTintID;
    // 0x784
    uint8_t m_nVersion;
    // 0x785
    uint8[128] m_ubSignature;
};
struct CFuncWater {
    // 0x730
    CBuoyancyHelper m_BuoyancyHelper;
};
struct CCSGameModeRules {
    // 0x8
    CNetworkVarChainer _m_pChainEntity;
};
struct CEconEntity {
    // 0xac0
    CAttributeContainer m_AttributeManager;
    // 0xdb8
    uint32_t m_OriginalOwnerXuidLow;
    // 0xdbc
    uint32_t m_OriginalOwnerXuidHigh;
    // 0xdc0
    int32_t m_nFallbackPaintKit;
    // 0xdc4
    int32_t m_nFallbackSeed;
    // 0xdc8
    float m_flFallbackWear;
    // 0xdcc
    int32_t m_nFallbackStatTrak;
    // 0xdd0
    CHandle<T> m_hOldProvidee;
    // 0xdd4
    int32_t m_iOldOwnerClass;
};
struct CTankTargetChange {
    // 0x4a8
    CVariantBase< CVariantDefaultAllocator > m_newTarget;
    // 0x4b8
    CUtlSymbolLarge m_newTargetName;
};
struct CCSPlayer_WaterServices {
    // 0x48
    GameTime_t m_NextDrownDamageTime;
    // 0x4c
    int32_t m_nDrownDmgRate;
    // 0x50
    GameTime_t m_AirFinishedTime;
    // 0x54
    float m_flWaterJumpTime;
    // 0x58
    Vector m_vecWaterJumpVel;
    // 0x64
    float m_flSwimSoundTime;
};
struct CLogicDistanceCheck {
    // 0x4a8
    CUtlSymbolLarge m_iszEntityA;
    // 0x4b0
    CUtlSymbolLarge m_iszEntityB;
    // 0x4b8
    float m_flZone1Distance;
    // 0x4bc
    float m_flZone2Distance;
    // 0x4c0
    CEntityIOOutput m_InZone1;
    // 0x4d8
    CEntityIOOutput m_InZone2;
    // 0x4f0
    CEntityIOOutput m_InZone3;
};
struct CEnvCombinedLightProbeVolume {
    // 0x1520
    Color m_Entity_Color;
    // 0x1524
    float m_Entity_flBrightness;
    // 0x1528
    CStrongHandle<T> m_Entity_hCubemapTexture;
    // 0x1530
    bool m_Entity_bCustomCubemapTexture;
    // 0x1538
    CStrongHandle<T> m_Entity_hLightProbeTexture_AmbientCube;
    // 0x1540
    CStrongHandle<T> m_Entity_hLightProbeTexture_SDF;
    // 0x1548
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_DC;
    // 0x1550
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_R;
    // 0x1558
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_G;
    // 0x1560
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_B;
    // 0x1568
    CStrongHandle<T> m_Entity_hLightProbeDirectLightIndicesTexture;
    // 0x1570
    CStrongHandle<T> m_Entity_hLightProbeDirectLightScalarsTexture;
    // 0x1578
    CStrongHandle<T> m_Entity_hLightProbeDirectLightShadowsTexture;
    // 0x1580
    Vector m_Entity_vBoxMins;
    // 0x158c
    Vector m_Entity_vBoxMaxs;
    // 0x1598
    bool m_Entity_bMoveable;
    // 0x159c
    int32_t m_Entity_nHandshake;
    // 0x15a0
    int32_t m_Entity_nEnvCubeMapArrayIndex;
    // 0x15a4
    int32_t m_Entity_nPriority;
    // 0x15a8
    bool m_Entity_bStartDisabled;
    // 0x15ac
    float m_Entity_flEdgeFadeDist;
    // 0x15b0
    Vector m_Entity_vEdgeFadeDists;
    // 0x15bc
    int32_t m_Entity_nLightProbeSizeX;
    // 0x15c0
    int32_t m_Entity_nLightProbeSizeY;
    // 0x15c4
    int32_t m_Entity_nLightProbeSizeZ;
    // 0x15c8
    int32_t m_Entity_nLightProbeAtlasX;
    // 0x15cc
    int32_t m_Entity_nLightProbeAtlasY;
    // 0x15d0
    int32_t m_Entity_nLightProbeAtlasZ;
    // 0x15e9
    bool m_Entity_bEnabled;
};
struct ViewAngleServerChange_t {
    // 0x30
    FixAngleSet_t nType;
    // 0x34
    QAngle qAngle;
    // 0x40
    uint32_t nIndex;
};
struct CLogicDistanceAutosave {
    // 0x4a8
    CUtlSymbolLarge m_iszTargetEntity;
    // 0x4b0
    float m_flDistanceToPlayer;
    // 0x4b4
    bool m_bForceNewLevelUnit;
    // 0x4b5
    bool m_bCheckCough;
    // 0x4b6
    bool m_bThinkDangerous;
    // 0x4b8
    float m_flDangerousTime;
};
struct CLogicBranch {
    // 0x4a8
    bool m_bInValue;
    // 0x4b0
    CUtlVector<T> m_Listeners;
    // 0x4c8
    CEntityIOOutput m_OnTrue;
    // 0x4e0
    CEntityIOOutput m_OnFalse;
};
struct CPulseCell_Outflow_ScriptedSequence {
    // 0x48
    CUtlString m_szSyncGroup;
    // 0x50
    int32_t m_nExpectedNumSequencesInSyncGroup;
    // 0x54
    bool m_bEnsureOnNavmeshOnFinish;
    // 0x55
    bool m_bDontTeleportAtEnd;
    // 0x56
    bool m_bDisallowInterrupts;
    // 0x58
    PulseScriptedSequenceData_t m_scriptedSequenceDataMain;
    // 0x90
    CUtlVector<T> m_vecAdditionalActors;
    // 0xa8
    CPulse_ResumePoint m_OnFinished;
    // 0xf0
    CPulse_ResumePoint m_OnCanceled;
    // 0x138
    CUtlVector<T> m_Triggers;
};
struct CFuncTrackChange {
    // 0x7f8
    CPathTrack* m_trackTop;
    // 0x800
    CPathTrack* m_trackBottom;
    // 0x808
    CFuncTrackTrain* m_train;
    // 0x810
    CUtlSymbolLarge m_trackTopName;
    // 0x818
    CUtlSymbolLarge m_trackBottomName;
    // 0x820
    CUtlSymbolLarge m_trainName;
    // 0x828
    TRAIN_CODE m_code;
    // 0x82c
    int32_t m_targetState;
    // 0x830
    int32_t m_use;
};
struct CFuncTrackTrain {
    // 0x730
    CHandle<T> m_ppath;
    // 0x734
    float m_length;
    // 0x738
    Vector m_vPosPrev;
    // 0x744
    QAngle m_angPrev;
    // 0x750
    Vector m_controlMins;
    // 0x75c
    Vector m_controlMaxs;
    // 0x768
    Vector m_lastBlockPos;
    // 0x774
    int32_t m_lastBlockTick;
    // 0x778
    float m_flVolume;
    // 0x77c
    float m_flBank;
    // 0x780
    float m_oldSpeed;
    // 0x784
    float m_flBlockDamage;
    // 0x788
    float m_height;
    // 0x78c
    float m_maxSpeed;
    // 0x790
    float m_dir;
    // 0x798
    CUtlSymbolLarge m_iszSoundMove;
    // 0x7a0
    CUtlSymbolLarge m_iszSoundMovePing;
    // 0x7a8
    CUtlSymbolLarge m_iszSoundStart;
    // 0x7b0
    CUtlSymbolLarge m_iszSoundStop;
    // 0x7b8
    CUtlSymbolLarge m_strPathTarget;
    // 0x7c0
    float m_flMoveSoundMinDuration;
    // 0x7c4
    float m_flMoveSoundMaxDuration;
    // 0x7c8
    GameTime_t m_flNextMoveSoundTime;
    // 0x7cc
    float m_flMoveSoundMinPitch;
    // 0x7d0
    float m_flMoveSoundMaxPitch;
    // 0x7d4
    TrainOrientationType_t m_eOrientationType;
    // 0x7d8
    TrainVelocityType_t m_eVelocityType;
    // 0x7f0
    CEntityIOOutput m_OnStart;
    // 0x808
    CEntityIOOutput m_OnNext;
    // 0x820
    CEntityIOOutput m_OnArrivedAtDestinationNode;
    // 0x838
    bool m_bManualSpeedChanges;
    // 0x83c
    float m_flDesiredSpeed;
    // 0x840
    GameTime_t m_flSpeedChangeTime;
    // 0x844
    float m_flAccelSpeed;
    // 0x848
    float m_flDecelSpeed;
    // 0x84c
    bool m_bAccelToSpeed;
    // 0x850
    GameTime_t m_flNextMPSoundTime;
};
struct CEnvInstructorHint {
    // 0x4a8
    CUtlSymbolLarge m_iszName;
    // 0x4b0
    CUtlSymbolLarge m_iszReplace_Key;
    // 0x4b8
    CUtlSymbolLarge m_iszHintTargetEntity;
    // 0x4c0
    int32_t m_iTimeout;
    // 0x4c4
    int32_t m_iDisplayLimit;
    // 0x4c8
    CUtlSymbolLarge m_iszIcon_Onscreen;
    // 0x4d0
    CUtlSymbolLarge m_iszIcon_Offscreen;
    // 0x4d8
    CUtlSymbolLarge m_iszCaption;
    // 0x4e0
    CUtlSymbolLarge m_iszActivatorCaption;
    // 0x4e8
    Color m_Color;
    // 0x4ec
    float m_fIconOffset;
    // 0x4f0
    float m_fRange;
    // 0x4f4
    uint8_t m_iPulseOption;
    // 0x4f5
    uint8_t m_iAlphaOption;
    // 0x4f6
    uint8_t m_iShakeOption;
    // 0x4f7
    bool m_bStatic;
    // 0x4f8
    bool m_bNoOffscreen;
    // 0x4f9
    bool m_bForceCaption;
    // 0x4fc
    int32_t m_iInstanceType;
    // 0x500
    bool m_bSuppressRest;
    // 0x508
    CUtlSymbolLarge m_iszBinding;
    // 0x510
    bool m_bAllowNoDrawTarget;
    // 0x511
    bool m_bAutoStart;
    // 0x512
    bool m_bLocalPlayerOnly;
};
struct CEnvWind {
    // 0x4a8
    CEnvWindShared m_EnvWindShared;
};
struct CSoundEventPathCornerEntity {
    // 0x558
    CUtlSymbolLarge m_iszPathCorner;
    // 0x560
    int32_t m_iCountMax;
    // 0x564
    float m_flDistanceMax;
    // 0x568
    float m_flDistMaxSqr;
    // 0x56c
    float m_flDotProductMax;
    // 0x570
    bool m_bPlaying;
    // 0x598
    CNetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked;
};
struct CCSPlayerBase_CameraServices {
    // 0x178
    uint32_t m_iFOV;
    // 0x17c
    uint32_t m_iFOVStart;
    // 0x180
    GameTime_t m_flFOVTime;
    // 0x184
    float m_flFOVRate;
    // 0x188
    CHandle<T> m_hZoomOwner;
    // 0x190
    CUtlVector<T> m_hTriggerFogList;
    // 0x1a8
    CHandle<T> m_hLastFogTrigger;
};
struct CPulseCell_Inflow_BaseEntrypoint {
    // 0x48
    PulseRuntimeChunkIndex_t m_EntryChunk;
    // 0x50
    PulseRegisterMap_t m_RegisterMap;
};
struct CDynamicNavConnectionsVolume {
    // 0x8a8
    CUtlSymbolLarge m_iszConnectionTarget;
    // 0x8b0
    CUtlVector<T> m_vecConnections;
    // 0x8c8
    CGlobalSymbol m_sTransitionType;
    // 0x8d0
    bool m_bConnectionsEnabled;
    // 0x8d4
    float m_flTargetAreaSearchRadius;
    // 0x8d8
    float m_flUpdateDistance;
    // 0x8dc
    float m_flMaxConnectionDistance;
};
struct CConstraintAnchor {
    // 0xa20
    float m_massScale;
};
struct CPulseCell_WaitForCursorsWithTagBase {
    // 0x48
    int32_t m_nCursorsAllowedToWait;
    // 0x50
    CPulse_ResumePoint m_WaitComplete;
};
struct CCSPlayerPawn {
    // 0xe78
    CCSPlayer_BulletServices* m_pBulletServices;
    // 0xe80
    CCSPlayer_HostageServices* m_pHostageServices;
    // 0xe88
    CCSPlayer_BuyServices* m_pBuyServices;
    // 0xe90
    CCSPlayer_ActionTrackingServices* m_pActionTrackingServices;
    // 0xe98
    CCSPlayer_RadioServices* m_pRadioServices;
    // 0xea0
    CCSPlayer_DamageReactServices* m_pDamageReactServices;
    // 0xea8
    uint16_t m_nCharacterDefIndex;
    // 0xeaa
    bool m_bHasFemaleVoice;
    // 0xeb0
    CUtlString m_strVOPrefix;
    // 0xeb8
    char[18] m_szLastPlaceName;
    // 0xfa8
    bool m_bInHostageResetZone;
    // 0xfa9
    bool m_bInBuyZone;
    // 0xfb0
    CUtlVector<T> m_TouchingBuyZones;
    // 0xfc8
    bool m_bWasInBuyZone;
    // 0xfc9
    bool m_bInHostageRescueZone;
    // 0xfca
    bool m_bInBombZone;
    // 0xfcb
    bool m_bWasInHostageRescueZone;
    // 0xfcc
    int32_t m_iRetakesOffering;
    // 0xfd0
    int32_t m_iRetakesOfferingCard;
    // 0xfd4
    bool m_bRetakesHasDefuseKit;
    // 0xfd5
    bool m_bRetakesMVPLastRound;
    // 0xfd8
    int32_t m_iRetakesMVPBoostItem;
    // 0xfdc
    loadout_slot_t m_RetakesMVPBoostExtraUtility;
    // 0xfe0
    GameTime_t m_flHealthShotBoostExpirationTime;
    // 0xfe4
    float m_flLandingTimeSeconds;
    // 0xfe8
    QAngle m_aimPunchAngle;
    // 0xff4
    QAngle m_aimPunchAngleVel;
    // 0x1000
    GameTick_t m_aimPunchTickBase;
    // 0x1004
    float m_aimPunchTickFraction;
    // 0x1008
    CUtlVector<T> m_aimPunchCache;
    // 0x1020
    bool m_bIsBuyMenuOpen;
    // 0x16c0
    GameTime_t m_lastLandTime;
    // 0x16c4
    bool m_bOnGroundLastTick;
    // 0x16c8
    int32_t m_iPlayerLocked;
    // 0x16d0
    GameTime_t m_flTimeOfLastInjury;
    // 0x16d4
    GameTime_t m_flNextSprayDecalTime;
    // 0x16d8
    bool m_bNextSprayDecalTimeExpedited;
    // 0x16dc
    int32_t m_nRagdollDamageBone;
    // 0x16e0
    Vector m_vRagdollDamageForce;
    // 0x16ec
    Vector m_vRagdollDamagePosition;
    // 0x16f8
    char[64] m_szRagdollDamageWeaponName;
    // 0x1738
    bool m_bRagdollDamageHeadshot;
    // 0x173c
    Vector m_vRagdollServerOrigin;
    // 0x1748
    CEconItemView m_EconGloves;
    // 0x19f0
    uint8_t m_nEconGlovesChanged;
    // 0x19f4
    QAngle m_qDeathEyeAngles;
    // 0x1a00
    bool m_bSkipOneHeadConstraintUpdate;
    // 0x1a01
    bool m_bLeftHanded;
    // 0x1a04
    GameTime_t m_fSwitchedHandednessTime;
    // 0x1a08
    float m_flViewmodelOffsetX;
    // 0x1a0c
    float m_flViewmodelOffsetY;
    // 0x1a10
    float m_flViewmodelOffsetZ;
    // 0x1a14
    float m_flViewmodelFOV;
    // 0x1a18
    bool m_bIsWalking;
    // 0x1a1c
    float m_fLastGivenDefuserTime;
    // 0x1a20
    float m_fLastGivenBombTime;
    // 0x1a24
    float m_flDealtDamageToEnemyMostRecentTimestamp;
    // 0x1a28
    uint32_t m_iDisplayHistoryBits;
    // 0x1a2c
    float m_flLastAttackedTeammate;
    // 0x1a30
    GameTime_t m_allowAutoFollowTime;
    // 0x1a34
    bool m_bResetArmorNextSpawn;
    // 0x1a38
    CEntityIndex m_nLastKillerIndex;
    // 0x1a40
    EntitySpottedState_t m_entitySpottedState;
    // 0x1a58
    int32_t m_nSpotRules;
    // 0x1a5c
    bool m_bIsScoped;
    // 0x1a5d
    bool m_bResumeZoom;
    // 0x1a5e
    bool m_bIsDefusing;
    // 0x1a5f
    bool m_bIsGrabbingHostage;
    // 0x1a60
    CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress;
    // 0x1a64
    GameTime_t m_flEmitSoundTime;
    // 0x1a68
    bool m_bInNoDefuseArea;
    // 0x1a6c
    CEntityIndex m_iBombSiteIndex;
    // 0x1a70
    int32_t m_nWhichBombZone;
    // 0x1a74
    bool m_bInBombZoneTrigger;
    // 0x1a75
    bool m_bWasInBombZoneTrigger;
    // 0x1a78
    int32_t m_iShotsFired;
    // 0x1a7c
    float m_flFlinchStack;
    // 0x1a80
    float m_flVelocityModifier;
    // 0x1a84
    float m_flHitHeading;
    // 0x1a88
    int32_t m_nHitBodyPart;
    // 0x1a8c
    Vector m_vecTotalBulletForce;
    // 0x1a98
    bool m_bWaitForNoAttack;
    // 0x1a9c
    float m_ignoreLadderJumpTime;
    // 0x1aa0
    bool m_bKilledByHeadshot;
    // 0x1aa4
    int32_t m_LastHitBox;
    // 0x1aa8
    CCSBot* m_pBot;
    // 0x1ab0
    bool m_bBotAllowActive;
    // 0x1ab4
    QAngle m_thirdPersonHeading;
    // 0x1ac0
    float m_flSlopeDropOffset;
    // 0x1ac4
    float m_flSlopeDropHeight;
    // 0x1ac8
    Vector m_vHeadConstraintOffset;
    // 0x1ad4
    int32_t m_nLastPickupPriority;
    // 0x1ad8
    float m_flLastPickupPriorityTime;
    // 0x1adc
    int32_t m_ArmorValue;
    // 0x1ae0
    uint16_t m_unCurrentEquipmentValue;
    // 0x1ae2
    uint16_t m_unRoundStartEquipmentValue;
    // 0x1ae4
    uint16_t m_unFreezetimeEndEquipmentValue;
    // 0x1ae8
    int32_t m_iLastWeaponFireUsercmd;
    // 0x1aec
    bool m_bIsSpawning;
    // 0x1af8
    int32_t m_iDeathFlags;
    // 0x1afc
    bool m_bHasDeathInfo;
    // 0x1b00
    float m_flDeathInfoTime;
    // 0x1b04
    Vector m_vecDeathInfoOrigin;
    // 0x1b10
    uint32[5] m_vecPlayerPatchEconIndices;
    // 0x1b24
    Color m_GunGameImmunityColor;
    // 0x1b28
    GameTime_t m_grenadeParameterStashTime;
    // 0x1b2c
    bool m_bGrenadeParametersStashed;
    // 0x1b30
    QAngle m_angStashedShootAngles;
    // 0x1b3c
    Vector m_vecStashedGrenadeThrowPosition;
    // 0x1b48
    Vector m_vecStashedVelocity;
    // 0x1b54
    QAngle[2] m_angShootAngleHistory;
    // 0x1b6c
    Vector[2] m_vecThrowPositionHistory;
    // 0x1b84
    Vector[2] m_vecVelocityHistory;
    // 0x1ba0
    CUtlVector<T> m_PredictedDamageTags;
    // 0x1c08
    int32_t m_nHighestAppliedDamageTagTick;
    // 0x1c0c
    bool m_bCommittingSuicideOnTeamChange;
    // 0x1c0d
    bool m_wasNotKilledNaturally;
    // 0x1c10
    GameTime_t m_fImmuneToGunGameDamageTime;
    // 0x1c14
    bool m_bGunGameImmunity;
    // 0x1c18
    float m_fMolotovDamageTime;
    // 0x1c1c
    QAngle m_angEyeAngles;
};
struct CEnvLightProbeVolume {
    // 0x14a0
    CStrongHandle<T> m_Entity_hLightProbeTexture_AmbientCube;
    // 0x14a8
    CStrongHandle<T> m_Entity_hLightProbeTexture_SDF;
    // 0x14b0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_DC;
    // 0x14b8
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_R;
    // 0x14c0
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_G;
    // 0x14c8
    CStrongHandle<T> m_Entity_hLightProbeTexture_SH2_B;
    // 0x14d0
    CStrongHandle<T> m_Entity_hLightProbeDirectLightIndicesTexture;
    // 0x14d8
    CStrongHandle<T> m_Entity_hLightProbeDirectLightScalarsTexture;
    // 0x14e0
    CStrongHandle<T> m_Entity_hLightProbeDirectLightShadowsTexture;
    // 0x14e8
    Vector m_Entity_vBoxMins;
    // 0x14f4
    Vector m_Entity_vBoxMaxs;
    // 0x1500
    bool m_Entity_bMoveable;
    // 0x1504
    int32_t m_Entity_nHandshake;
    // 0x1508
    int32_t m_Entity_nPriority;
    // 0x150c
    bool m_Entity_bStartDisabled;
    // 0x1510
    int32_t m_Entity_nLightProbeSizeX;
    // 0x1514
    int32_t m_Entity_nLightProbeSizeY;
    // 0x1518
    int32_t m_Entity_nLightProbeSizeZ;
    // 0x151c
    int32_t m_Entity_nLightProbeAtlasX;
    // 0x1520
    int32_t m_Entity_nLightProbeAtlasY;
    // 0x1524
    int32_t m_Entity_nLightProbeAtlasZ;
    // 0x1531
    bool m_Entity_bEnabled;
};
struct SpawnPoint {
    // 0x4a8
    int32_t m_iPriority;
    // 0x4ac
    bool m_bEnabled;
    // 0x4b0
    int32_t m_nType;
};
struct CFuncMoverAPI {
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
    int16 m_nParentAttachmentOrBone;
    // 0xee
    bool m_bDebugAbsOriginChanges;
    // 0xef
    bool m_bDormant;
    // 0xf0
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
    // 0xf3
    uint8_t m_nHierarchicalDepth;
    // 0xf4
    uint8_t m_nHierarchyType;
    // 0xf5
    uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
    // 0xf8
    CUtlString m_name;
    // 0x10c
    CUtlString m_hierarchyAttachName;
    // 0x110
    float m_flZOffset;
    // 0x114
    float m_flClientLocalScale;
    // 0x118
    Vector m_vRenderOrigin;
};
struct CWeaponM249 {
};
struct CRopeKeyframeAlias_move_rope {
};
struct CPulseServerFuncs_Sounds {
};
struct CPulsePhysicsConstraintsFuncs {
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
};
struct CLogicScript {
};
struct CAttributeManager_cached_attribute_float_t {
    // 0x0
    float flIn;
    // 0x8
    CUtlSymbolLarge iAttribHook;
    // 0x10
    float flOut;
};
struct CPulseGraphInstance_ServerEntity {
    // 0x190
    CHandle<T> m_hOwner;
    // 0x194
    bool m_bActivated;
    // 0x198
    CUtlSymbolLarge m_sNameFixupStaticPrefix;
    // 0x1a0
    CUtlSymbolLarge m_sNameFixupParent;
    // 0x1a8
    CUtlSymbolLarge m_sNameFixupLocal;
    // 0x1b0
    CUtlSymbolLarge m_sProceduralWorldNameForRelays;
};
struct CSceneEntityAlias_logic_choreographed_scene {
};
struct CRagdollManager {
    // 0x4a8
    int8 m_iCurrentMaxRagdollCount;
    // 0x4ac
    int32_t m_iMaxRagdollCount;
    // 0x4b0
    bool m_bSaveImportant;
    // 0x4b1
    bool m_bCanTakeDamage;
};
struct CPostProcessingVolume {
    // 0x8a0
    CStrongHandle<T> m_hPostSettings;
    // 0x8a8
    float m_flFadeDuration;
    // 0x8ac
    float m_flMinLogExposure;
    // 0x8b0
    float m_flMaxLogExposure;
    // 0x8b4
    float m_flMinExposure;
    // 0x8b8
    float m_flMaxExposure;
    // 0x8bc
    float m_flExposureCompensation;
    // 0x8c0
    float m_flExposureFadeSpeedUp;
    // 0x8c4
    float m_flExposureFadeSpeedDown;
    // 0x8c8
    float m_flTonemapEVSmoothingRange;
    // 0x8cc
    bool m_bMaster;
    // 0x8cd
    bool m_bExposureControl;
};
struct CPointProximitySensor {
    // 0x4a8
    bool m_bDisabled;
    // 0x4ac
    CHandle<T> m_hTargetEntity;
    // 0x4b0
    CEntityOutputTemplate< float32, float32 > m_Distance;
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
struct CTriggerLook {
    // 0x8a8
    CHandle<T> m_hLookTarget;
    // 0x8ac
    float m_flFieldOfView;
    // 0x8b0
    float m_flLookTime;
    // 0x8b4
    float m_flLookTimeTotal;
    // 0x8b8
    GameTime_t m_flLookTimeLast;
    // 0x8bc
    float m_flTimeoutDuration;
    // 0x8c0
    bool m_bTimeoutFired;
    // 0x8c1
    bool m_bIsLooking;
    // 0x8c2
    bool m_b2DFOV;
    // 0x8c3
    bool m_bUseVelocity;
    // 0x8c4
    bool m_bTestOcclusion;
    // 0x8c5
    bool m_bTestAllVisibleOcclusion;
    // 0x8c8
    CEntityIOOutput m_OnTimeout;
    // 0x8e0
    CEntityIOOutput m_OnStartLook;
    // 0x8f8
    CEntityIOOutput m_OnEndLook;
};
struct CPulseCell_Outflow_PlayVCD {
    // 0xf0
    CStrongHandle<T> m_hChoreoScene;
    // 0xf8
    CPulse_OutflowConnection m_OnPaused;
    // 0x140
    CPulse_OutflowConnection m_OnResumed;
};
struct CMultiplayRules {
};
struct CMolotovGrenade {
};
struct CPhysTorque {
    // 0x508
    VectorWS m_axis;
};
struct CMultiSource {
    // 0x4a8
    CHandle<T> m_rgEntities;
    // 0x528
    int32[32] m_rgTriggered;
    // 0x5a8
    CEntityIOOutput m_OnTrigger;
    // 0x5c0
    int32_t m_iTotal;
    // 0x5c8
    CUtlSymbolLarge m_globalstate;
};
struct CBaseCSGrenade {
    // 0x1130
    bool m_bRedraw;
    // 0x1131
    bool m_bIsHeldByPlayer;
    // 0x1132
    bool m_bPinPulled;
    // 0x1133
    bool m_bJumpThrow;
    // 0x1134
    bool m_bThrowAnimating;
    // 0x1138
    GameTime_t m_fThrowTime;
    // 0x113c
    float m_flThrowStrength;
    // 0x1140
    GameTime_t m_fDropTime;
    // 0x1144
    GameTime_t m_fPinPullTime;
    // 0x1148
    bool m_bJustPulledPin;
    // 0x114c
    GameTick_t m_nNextHoldTick;
    // 0x1150
    float m_flNextHoldFrac;
    // 0x1154
    CHandle<T> m_hSwitchToWeaponAfterThrow;
};
struct CLogicAuto {
    // 0x4a8
    CEntityIOOutput m_OnMapSpawn;
    // 0x4c0
    CEntityIOOutput m_OnDemoMapSpawn;
    // 0x4d8
    CEntityIOOutput m_OnNewGame;
    // 0x4f0
    CEntityIOOutput m_OnLoadGame;
    // 0x508
    CEntityIOOutput m_OnMapTransition;
    // 0x520
    CEntityIOOutput m_OnBackgroundMap;
    // 0x538
    CEntityIOOutput m_OnMultiNewMap;
    // 0x550
    CEntityIOOutput m_OnMultiNewRound;
    // 0x568
    CEntityIOOutput m_OnVREnabled;
    // 0x580
    CEntityIOOutput m_OnVRNotEnabled;
    // 0x598
    CUtlSymbolLarge m_globalstate;
};
struct CPhysicsWire {
    // 0x4a8
    int32_t m_nDensity;
};
struct CFuncIllusionary {
};
struct CInfoDynamicShadowHint {
    // 0x4a8
    bool m_bDisabled;
    // 0x4ac
    float m_flRange;
    // 0x4b0
    int32_t m_nImportance;
    // 0x4b4
    int32_t m_nLightChoice;
    // 0x4b8
    CHandle<T> m_hLight;
};
struct CMarkupVolume {
    // 0x730
    bool m_bDisabled;
};
struct CPathNode {
    // 0x4a8
    Vector m_vInTangentLocal;
    // 0x4b4
    Vector m_vOutTangentLocal;
    // 0x4c0
    CUtlString m_strParentPathUniqueID;
    // 0x4c8
    CUtlString m_strPathNodeParameter;
    // 0x4d0
    CTransform m_xWSPrevParent;
    // 0x4f0
    CHandle<T> m_hPath;
};
struct CCSGO_TeamSelectCounterTerroristPosition {
};
struct CTriggerRemove {
    // 0x890
    CEntityIOOutput m_OnRemove;
};
struct CLogicGameEventListener {
    // 0x4b8
    CEntityIOOutput m_OnEventFired;
    // 0x4d0
    CUtlSymbolLarge m_iszGameEventName;
    // 0x4d8
    CUtlSymbolLarge m_iszGameEventItem;
    // 0x4e0
    bool m_bEnabled;
    // 0x4e1
    bool m_bStartDisabled;
};
struct CServerOnlyModelEntity {
};
struct CPulseCell_IntervalTimer {
    // 0x48
    CPulse_ResumePoint m_Completed;
    // 0x90
    SignatureOutflow_Continue m_OnInterval;
};
struct CMarkupVolumeTagged_Nav {
    // 0x770
    NavScopeFlags_t m_nScopes;
};
struct CInfoPlayerTerrorist {
};
struct CLogicAutosave {
    // 0x4a8
    bool m_bForceNewLevelUnit;
    // 0x4ac
    int32_t m_minHitPoints;
    // 0x4b0
    int32_t m_minHitPointsToCommit;
};
struct CCSGO_TeamIntroTerroristPosition {
};
struct CPulseTestScriptLib {
};
struct CSingleplayRules {
    // 0xd0
    bool m_bSinglePlayerGameEnding;
};
struct CEnvWindShared {
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
    // 0x40
    CEntityIOOutput m_OnGustStart;
    // 0x58
    CEntityIOOutput m_OnGustEnd;
    // 0x70
    CHandle<T> m_hEntOwner;
};
struct CPointPrefab {
    // 0x4a8
    CUtlSymbolLarge m_targetMapName;
    // 0x4b0
    CUtlSymbolLarge m_forceWorldGroupID;
    // 0x4b8
    CUtlSymbolLarge m_associatedRelayTargetName;
    // 0x4c0
    bool m_fixupNames;
    // 0x4c1
    bool m_bLoadDynamic;
    // 0x4c4
    CHandle<T> m_associatedRelayEntity;
};
struct CPulseCell_BaseLerp {
    // 0x48
    CPulse_ResumePoint m_WakeResume;
};
struct CEnvInstructorVRHint {
    // 0x4a8
    CUtlSymbolLarge m_iszName;
    // 0x4b0
    CUtlSymbolLarge m_iszHintTargetEntity;
    // 0x4b8
    int32_t m_iTimeout;
    // 0x4c0
    CUtlSymbolLarge m_iszCaption;
    // 0x4c8
    CUtlSymbolLarge m_iszStartSound;
    // 0x4d0
    int32_t m_iLayoutFileType;
    // 0x4d8
    CUtlSymbolLarge m_iszCustomLayoutFile;
    // 0x4e0
    int32_t m_iAttachType;
    // 0x4e4
    float m_flHeightOffset;
};
struct CCSGameRulesProxy {
    // 0x4a8
    CCSGameRules* m_pGameRules;
};
struct CPrecipitation {
};
struct CCommentaryViewPosition {
};
struct CEnvGlobal {
    // 0x4a8
    CEntityOutputTemplate< int32, int32 > m_outCounter;
    // 0x4c8
    CUtlSymbolLarge m_globalstate;
    // 0x4d0
    int32_t m_triggermode;
    // 0x4d4
    int32_t m_initialstate;
    // 0x4d8
    int32_t m_counter;
};
struct CLogicNPCCounterOBB {
};
struct CPlatTrigger {
    // 0x730
    CHandle<T> m_pPlatform;
};
struct CSceneEntity {
    // 0x4b0
    CUtlSymbolLarge m_iszSceneFile;
    // 0x4b8
    CUtlSymbolLarge m_iszTarget1;
    // 0x4c0
    CUtlSymbolLarge m_iszTarget2;
    // 0x4c8
    CUtlSymbolLarge m_iszTarget3;
    // 0x4d0
    CUtlSymbolLarge m_iszTarget4;
    // 0x4d8
    CUtlSymbolLarge m_iszTarget5;
    // 0x4e0
    CUtlSymbolLarge m_iszTarget6;
    // 0x4e8
    CUtlSymbolLarge m_iszTarget7;
    // 0x4f0
    CUtlSymbolLarge m_iszTarget8;
    // 0x4f8
    CHandle<T> m_hTarget1;
    // 0x4fc
    CHandle<T> m_hTarget2;
    // 0x500
    CHandle<T> m_hTarget3;
    // 0x504
    CHandle<T> m_hTarget4;
    // 0x508
    CHandle<T> m_hTarget5;
    // 0x50c
    CHandle<T> m_hTarget6;
    // 0x510
    CHandle<T> m_hTarget7;
    // 0x514
    CHandle<T> m_hTarget8;
    // 0x518
    CUtlSymbolLarge m_sTargetAttachment;
    // 0x520
    bool m_bIsPlayingBack;
    // 0x521
    bool m_bPaused;
    // 0x522
    bool m_bMultiplayer;
    // 0x523
    bool m_bAutogenerated;
    // 0x524
    float m_flForceClientTime;
    // 0x528
    float m_flCurrentTime;
    // 0x52c
    float m_flFrameTime;
    // 0x530
    bool m_bCancelAtNextInterrupt;
    // 0x534
    float m_fPitch;
    // 0x538
    bool m_bAutomated;
    // 0x53c
    int32_t m_nAutomatedAction;
    // 0x540
    float m_flAutomationDelay;
    // 0x544
    float m_flAutomationTime;
    // 0x548
    int32_t m_nSpeechPriority;
    // 0x54c
    bool m_bPausedViaInput;
    // 0x54d
    bool m_bPauseAtNextInterrupt;
    // 0x54e
    bool m_bWaitingForActor;
    // 0x54f
    bool m_bWaitingForInterrupt;
    // 0x550
    bool m_bInterruptedActorsScenes;
    // 0x551
    bool m_bBreakOnNonIdle;
    // 0x552
    bool m_bSceneFinished;
    // 0x558
    CHandle<T> m_hActorList;
    // 0x570
    CUtlVector<T> m_hRemoveActorList;
    // 0x5b8
    uint16_t m_nSceneStringIndex;
    // 0x5c0
    CEntityIOOutput m_OnStart;
    // 0x5d8
    CEntityIOOutput m_OnCompletion;
    // 0x5f0
    CEntityIOOutput m_OnCanceled;
    // 0x608
    CEntityIOOutput m_OnPaused;
    // 0x620
    CEntityIOOutput m_OnResumed;
    // 0x6c8
    CHandle<T> m_hInterruptScene;
    // 0x6cc
    int32_t m_nInterruptCount;
    // 0x6d0
    bool m_bSceneMissing;
    // 0x6d1
    bool m_bInterrupted;
    // 0x6d2
    bool m_bCompletedEarly;
    // 0x6d3
    bool m_bInterruptSceneFinished;
    // 0x6d4
    bool m_bRestoring;
    // 0x6d8
    CUtlVector<T> m_hNotifySceneCompletion;
    // 0x6f0
    CUtlVector<T> m_hListManagers;
    // 0x708
    CUtlSymbolLarge m_iszSoundName;
    // 0x710
    CUtlSymbolLarge m_iszSequenceName;
    // 0x718
    CHandle<T> m_hActor;
    // 0x71c
    CHandle<T> m_hActivator;
    // 0x720
    int32_t m_BusyActor;
    // 0x724
    SceneOnPlayerDeath_t m_iPlayerDeathBehavior;
};
struct CChoreoInfoTarget {
};
struct CTonemapController2 {
    // 0x4a8
    float m_flAutoExposureMin;
    // 0x4ac
    float m_flAutoExposureMax;
    // 0x4b0
    float m_flExposureAdaptationSpeedUp;
    // 0x4b4
    float m_flExposureAdaptationSpeedDown;
    // 0x4b8
    float m_flTonemapEVSmoothingRange;
};
struct CMapSharedEnvironment {
    // 0x4a8
    CUtlSymbolLarge m_targetMapName;
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
struct CPhysMagnet {
    // 0xa20
    CEntityIOOutput m_OnMagnetAttach;
    // 0xa38
    CEntityIOOutput m_OnMagnetDetach;
    // 0xa50
    float m_massScale;
    // 0xa54
    float m_forceLimit;
    // 0xa58
    float m_torqueLimit;
    // 0xa60
    CUtlVector<T> m_MagnettedEntities;
    // 0xa78
    bool m_bActive;
    // 0xa79
    bool m_bHasHitSomething;
    // 0xa7c
    float m_flTotalMass;
    // 0xa80
    float m_flRadius;
    // 0xa84
    GameTime_t m_flNextSuckTime;
    // 0xa88
    int32_t m_iMaxObjectsAttached;
};
struct CEntityInstance {
    // 0x8
    CUtlSymbolLarge m_iszPrivateVScripts;
    // 0x10
    CEntityIdentity* m_pEntity;
    // 0x30
    CScriptComponent* m_CScriptComponent;
};
struct CGameGibManager {
    // 0x4c0
    bool m_bAllowNewGibs;
    // 0x4c4
    int32_t m_iCurrentMaxPieces;
    // 0x4c8
    int32_t m_iMaxPieces;
    // 0x4cc
    int32_t m_iLastFrame;
};
struct CHandleDummy {
};
struct CFuncWallToggle {
};
struct CCSPlayer_BulletServices {
    // 0x48
    int32_t m_totalHitsOnServer;
};
struct CSkyCamera {
    // 0x4a8
    sky3dparams_t m_skyboxData;
    // 0x538
    CUtlString m_skyboxSlotToken;
    // 0x53c
    bool m_bUseAngles;
    // 0x540
    CSkyCamera* m_pNext;
};
struct CPlayer_AutoaimServices {
};
struct CItemDefuserAlias_item_defuser {
};
struct CPathCornerCrash {
};
struct CPhysPulley {
    // 0x508
    VectorWS m_position2;
    // 0x514
    Vector[2] m_offset;
    // 0x52c
    float m_addLength;
    // 0x530
    float m_gearRatio;
};
struct CCSPetPlacement {
};
struct CWeaponMP5SD {
};
struct CWeaponBaseItem {
    // 0x1130
    bool m_bSequenceInProgress;
    // 0x1131
    bool m_bRedraw;
};
struct CCommentaryAuto {
    // 0x4a8
    CEntityIOOutput m_OnCommentaryNewGame;
    // 0x4c0
    CEntityIOOutput m_OnCommentaryMidGame;
    // 0x4d8
    CEntityIOOutput m_OnCommentaryMultiplayerSpawn;
};
struct CPulseCell_Outflow_ListenForEntityOutput_CursorState_t {
    // 0x0
    CHandle<T> m_entity;
};
struct ActiveModelConfig_t {
    // 0x30
    ModelConfigHandle_t m_Handle;
    // 0x38
    CUtlSymbolLarge m_Name;
    // 0x40
    CHandle<T> m_AssociatedEntities;
    // 0x58
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_AssociatedEntityNames;
};
struct CWeaponUSPSilencer {
};
struct CSoundStackSave {
    // 0x4a8
    CUtlSymbolLarge m_iszStackName;
};
struct CPulseCell_Value_Curve {
    // 0x48
    CPiecewiseCurve m_Curve;
};
struct CWeaponMag7 {
};
struct CLogicMeasureMovement {
    // 0x4a8
    CUtlSymbolLarge m_strMeasureTarget;
    // 0x4b0
    CUtlSymbolLarge m_strMeasureReference;
    // 0x4b8
    CUtlSymbolLarge m_strTargetReference;
    // 0x4c0
    CHandle<T> m_hMeasureTarget;
    // 0x4c4
    CHandle<T> m_hMeasureReference;
    // 0x4c8
    CHandle<T> m_hTarget;
    // 0x4cc
    CHandle<T> m_hTargetReference;
    // 0x4d0
    float m_flScale;
    // 0x4d4
    int32_t m_nMeasureType;
};
struct CC4 {
    // 0x1160
    Vector m_vecLastValidPlayerHeldPosition;
    // 0x116c
    Vector m_vecLastValidDroppedPosition;
    // 0x1178
    bool m_bDoValidDroppedPositionCheck;
    // 0x1179
    bool m_bStartedArming;
    // 0x117c
    GameTime_t m_fArmedTime;
    // 0x1180
    bool m_bBombPlacedAnimation;
    // 0x1181
    bool m_bIsPlantingViaUse;
    // 0x1188
    EntitySpottedState_t m_entitySpottedState;
    // 0x11a0
    int32_t m_nSpotRules;
    // 0x11a4
    bool[7] m_bPlayedArmingBeeps;
    // 0x11ab
    bool m_bBombPlanted;
};
struct CHostageCarriableProp {
};
struct CDynamicPropAlias_cable_dynamic {
};
struct CBaseFlexAlias_funCBaseFlex {
};
struct CCSObserver_CameraServices {
};
struct CEnvDetailController {
    // 0x4a8
    float m_flFadeStartDist;
    // 0x4ac
    float m_flFadeEndDist;
};
struct CTakeDamageInfoAPI {
};
struct CCSPlayerPawnBase {
    // 0xd30
    CTouchExpansionComponent m_CTouchExpansionComponent;
    // 0xd80
    CCSPlayer_PingServices* m_pPingServices;
    // 0xd88
    GameTime_t m_blindUntilTime;
    // 0xd8c
    GameTime_t m_blindStartTime;
    // 0xd90
    CSPlayerState m_iPlayerState;
    // 0xe40
    bool m_bRespawning;
    // 0xe41
    bool m_bHasMovedSinceSpawn;
    // 0xe44
    int32_t m_iNumSpawns;
    // 0xe4c
    float m_flIdleTimeSinceLastAction;
    // 0xe50
    float m_fNextRadarUpdateTime;
    // 0xe54
    float m_flFlashDuration;
    // 0xe58
    float m_flFlashMaxAlpha;
    // 0xe5c
    float m_flProgressBarStartTime;
    // 0xe60
    int32_t m_iProgressBarDuration;
    // 0xe64
    CHandle<T> m_hOriginalController;
};
struct CEnvSoundscapeProxy {
    // 0x538
    CUtlSymbolLarge m_MainSoundscapeName;
};
struct CPulseCell_Inflow_EventHandler {
    // 0x80
    PulseSymbol_t m_EventName;
};
struct CCSPointScriptEntity {
};
struct CPulseCell_BaseFlow {
};
struct CBombTarget {
    // 0x890
    CEntityIOOutput m_OnBombExplode;
    // 0x8a8
    CEntityIOOutput m_OnBombPlanted;
    // 0x8c0
    CEntityIOOutput m_OnBombDefused;
    // 0x8d8
    bool m_bIsBombSiteB;
    // 0x8d9
    bool m_bIsHeistBombTarget;
    // 0x8da
    bool m_bBombPlantedHere;
    // 0x8e0
    CUtlSymbolLarge m_szMountTarget;
    // 0x8e8
    CHandle<T> m_hInstructorHint;
    // 0x8ec
    int32_t m_nBombSiteDesignation;
};
struct CRuleEntity {
    // 0x730
    CUtlSymbolLarge m_iszMaster;
};
struct CPhysThruster {
    // 0x508
    Vector m_localOrigin;
};
struct CInfoPlayerStart {
    // 0x4a8
    bool m_bDisabled;
    // 0x4a9
    bool m_bIsMaster;
    // 0x4b0
    CGlobalSymbol m_pPawnSubclass;
};
struct CEntityFlame {
    // 0x4a8
    CHandle<T> m_hEntAttached;
    // 0x4ac
    bool m_bCheapEffect;
    // 0x4b0
    float m_flSize;
    // 0x4b4
    bool m_bUseHitboxes;
    // 0x4b8
    int32_t m_iNumHitboxFires;
    // 0x4bc
    float m_flHitboxFireScale;
    // 0x4c0
    GameTime_t m_flLifetime;
    // 0x4c4
    CHandle<T> m_hAttacker;
    // 0x4c8
    float m_flDirectDamagePerSecond;
    // 0x4cc
    int32_t m_iCustomDamageType;
};
struct CSkeletonInstance {
    // 0x140
    CModelState m_modelState;
    // 0x390
    bool m_bIsAnimationEnabled;
    // 0x391
    bool m_bUseParentRenderBounds;
    // 0x392
    bool m_bDisableSolidCollisionsForHierarchy;
    // 0x0
    bitfield:1 m_bDirtyMotionType;
    // 0x0
    bitfield:1 m_bIsGeneratingLatchedParentSpaceState;
    // 0x394
    CUtlString m_materialGroup;
    // 0x398
    uint8_t m_nHitboxSet;
    // 0x3f4
    bool m_bForceServerConstraintsEnabled;
};
struct CEntityComponent {
};
struct CBasePlatTrain {
    // 0x7b0
    CUtlSymbolLarge m_NoiseMoving;
    // 0x7b8
    CUtlSymbolLarge m_NoiseArrived;
    // 0x7c8
    float m_volume;
    // 0x7cc
    float m_flTWidth;
    // 0x7d0
    float m_flTLength;
};
struct CPointTeleport {
    // 0x4a8
    Vector m_vSaveOrigin;
    // 0x4b4
    QAngle m_vSaveAngles;
    // 0x4c0
    bool m_bTeleportParentedEntities;
    // 0x4c1
    bool m_bTeleportUseCurrentAngle;
};
struct CTriggerGameEvent {
    // 0x890
    CUtlString m_strStartTouchEventName;
    // 0x898
    CUtlString m_strEndTouchEventName;
    // 0x8a0
    CUtlString m_strTriggerID;
};
struct CMessageEntity {
    // 0x4a8
    int32_t m_radius;
    // 0x4b0
    CUtlSymbolLarge m_messageText;
    // 0x4b8
    bool m_drawText;
    // 0x4b9
    bool m_bDeveloperOnly;
    // 0x4ba
    bool m_bEnabled;
};
struct CEnvEntityIgniter {
    // 0x4a8
    float m_flLifetime;
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
struct CMarkupVolumeTagged_NavGame {
    // 0x798
    NavScopeFlags_t m_nScopes;
    // 0x799
    bool m_bFloodFillAttribute;
    // 0x79a
    bool m_bSplitNavSpace;
};
struct CMultiLightProxy {
    // 0x4a8
    CUtlSymbolLarge m_iszLightNameFilter;
    // 0x4b0
    CUtlSymbolLarge m_iszLightClassFilter;
    // 0x4b8
    float m_flLightRadiusFilter;
    // 0x4bc
    float m_flBrightnessDelta;
    // 0x4c0
    bool m_bPerformScreenFade;
    // 0x4c4
    float m_flTargetBrightnessMultiplier;
    // 0x4c8
    float m_flCurrentBrightnessMultiplier;
    // 0x4d0
    CUtlVector<T> m_vecLights;
};
struct CWeaponM4A1 {
};
struct CTriggerHostageReset {
};
struct CPulseAnimFuncs {
};
struct CEconWearable {
    // 0xde0
    int32_t m_nForceSkin;
    // 0xde4
    bool m_bAlwaysAllow;
};
struct CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    // 0x0
    PulseSymbol_t m_TagName;
};
struct CPulseArraylib {
};
struct CWeaponMAC10 {
};
struct CFuncLadder {
    // 0x730
    Vector m_vecLadderDir;
    // 0x740
    CUtlVector<T> m_Dismounts;
    // 0x758
    Vector m_vecLocalTop;
    // 0x764
    VectorWS m_vecPlayerMountPositionTop;
    // 0x770
    VectorWS m_vecPlayerMountPositionBottom;
    // 0x77c
    float m_flAutoRideSpeed;
    // 0x780
    bool m_bDisabled;
    // 0x781
    bool m_bFakeLadder;
    // 0x782
    bool m_bHasSlack;
    // 0x788
    CUtlSymbolLarge m_surfacePropName;
    // 0x790
    CEntityIOOutput m_OnPlayerGotOnLadder;
    // 0x7a8
    CEntityIOOutput m_OnPlayerGotOffLadder;
};
struct CFogController {
    // 0x4a8
    fogparams_t m_fog;
    // 0x510
    bool m_bUseAngles;
    // 0x514
    int32_t m_iChangedVariables;
};
struct CPointTemplateAPI {
};
struct CItem {
    // 0xa28
    CEntityIOOutput m_OnPlayerTouch;
    // 0xa40
    CEntityIOOutput m_OnPlayerPickup;
    // 0xa58
    bool m_bActivateWhenAtRest;
    // 0xa60
    CEntityIOOutput m_OnCacheInteraction;
    // 0xa78
    CEntityIOOutput m_OnGlovePulled;
    // 0xa90
    VectorWS m_vOriginalSpawnOrigin;
    // 0xa9c
    QAngle m_vOriginalSpawnAngles;
    // 0xaa8
    bool m_bPhysStartAsleep;
};
struct CTriggerPush {
    // 0x890
    QAngle m_angPushEntitySpace;
    // 0x89c
    Vector m_vecPushDirEntitySpace;
    // 0x8a8
    bool m_bTriggerOnStartTouch;
    // 0x8a9
    bool m_bUsePathSimple;
    // 0x8b0
    CUtlSymbolLarge m_iszPathSimpleName;
    // 0x8b8
    CPathSimple* m_PathSimple;
    // 0x8c0
    uint32_t m_splinePushType;
};
struct CBaseProp {
    // 0xa20
    bool m_bModelOverrodeBlockLOS;
    // 0xa24
    int32_t m_iShapeType;
    // 0xa28
    bool m_bConformToCollisionBounds;
    // 0xa30
    CTransform m_mPreferredCatchTransform;
};
struct CInfoOffscreenPanoramaTexture {
    // 0x4a8
    bool m_bDisabled;
    // 0x4ac
    int32_t m_nResolutionX;
    // 0x4b0
    int32_t m_nResolutionY;
    // 0x4b8
    CUtlSymbolLarge m_szPanelType;
    // 0x4c0
    CUtlSymbolLarge m_szLayoutFileName;
    // 0x4c8
    CUtlSymbolLarge m_RenderAttrName;
    // 0x4d0
    CHandle<T> m_TargetEntities;
    // 0x4e8
    int32_t m_nTargetChangeCount;
    // 0x4f0
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    // 0x508
    CUtlSymbolLarge m_szTargetsName;
    // 0x510
    CUtlVector<T> m_AdditionalTargetEntities;
};
struct CPointAngularVelocitySensor {
    // 0x4a8
    CHandle<T> m_hTargetEntity;
    // 0x4ac
    float m_flThreshold;
    // 0x4b0
    int32_t m_nLastCompareResult;
    // 0x4b4
    int32_t m_nLastFireResult;
    // 0x4b8
    GameTime_t m_flFireTime;
    // 0x4bc
    float m_flFireInterval;
    // 0x4c0
    float m_flLastAngVelocity;
    // 0x4c4
    QAngle m_lastOrientation;
    // 0x4d0
    VectorWS m_vecAxis;
    // 0x4dc
    bool m_bUseHelper;
    // 0x4e0
    CEntityOutputTemplate< float32, float32 > m_AngularVelocity;
    // 0x500
    CEntityIOOutput m_OnLessThan;
    // 0x518
    CEntityIOOutput m_OnLessThanOrEqualTo;
    // 0x530
    CEntityIOOutput m_OnGreaterThan;
    // 0x548
    CEntityIOOutput m_OnGreaterThanOrEqualTo;
    // 0x560
    CEntityIOOutput m_OnEqualTo;
};
struct CPlayerVisibility {
    // 0x4a8
    float m_flVisibilityStrength;
    // 0x4ac
    float m_flFogDistanceMultiplier;
    // 0x4b0
    float m_flFogMaxDensityMultiplier;
    // 0x4b4
    float m_flFadeTime;
    // 0x4b8
    bool m_bStartDisabled;
    // 0x4b9
    bool m_bIsEnabled;
};
struct CPulseCell_Step_FollowEntity {
    // 0x48
    CUtlString m_ParamBoneOrAttachName;
    // 0x50
    CUtlString m_ParamBoneOrAttachNameChild;
};
struct CFlashbang {
};
struct CBasePlayerWeapon {
    // 0xde0
    GameTick_t m_nNextPrimaryAttackTick;
    // 0xde4
    float m_flNextPrimaryAttackTickRatio;
    // 0xde8
    GameTick_t m_nNextSecondaryAttackTick;
    // 0xdec
    float m_flNextSecondaryAttackTickRatio;
    // 0xdf0
    int32_t m_iClip1;
    // 0xdf4
    int32_t m_iClip2;
    // 0xdf8
    int32[2] m_pReserveAmmo;
    // 0xe00
    CEntityIOOutput m_OnPlayerUse;
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
struct CPhysForce {
    // 0x4b0
    CUtlSymbolLarge m_nameAttach;
    // 0x4b8
    float m_force;
    // 0x4bc
    float m_forceTime;
    // 0x4c0
    CHandle<T> m_attachedObject;
    // 0x4c4
    bool m_wasRestored;
    // 0x4c8
    CConstantForceController m_integrator;
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
    fogplayerparams_t m_PlayerFog;
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
    // 0x160
    CUtlVector<T> m_hTriggerSoundscapeList;
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
struct CScenePayloadVData {
    // 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCChoreoScene m_sSceneFile;
};
struct CPulseFuncs_GameParticleManager {
};
struct CFilterAttributeInt {
    // 0x4e0
    CUtlSymbolLarge m_sAttributeName;
};
struct CKeepUpright {
    // 0x4b0
    Vector m_worldGoalAxis;
    // 0x4bc
    Vector m_localTestAxis;
    // 0x4d0
    CUtlSymbolLarge m_nameAttach;
    // 0x4d8
    CHandle<T> m_attachedObject;
    // 0x4dc
    float m_angularLimit;
    // 0x4e0
    bool m_bActive;
    // 0x4e1
    bool m_bDampAllRotation;
};
struct CPointTemplate {
    // 0x4a8
    CUtlSymbolLarge m_iszWorldName;
    // 0x4b0
    CUtlSymbolLarge m_iszSource2EntityLumpName;
    // 0x4b8
    CUtlSymbolLarge m_iszEntityFilterName;
    // 0x4c0
    float m_flTimeoutInterval;
    // 0x4c4
    bool m_bAsynchronouslySpawnEntities;
    // 0x4c8
    PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior;
    // 0x4cc
    PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType;
    // 0x4d0
    CUtlVector<T> m_createdSpawnGroupHandles;
    // 0x4e8
    CUtlVector<T> m_SpawnedEntityHandles;
    // 0x500
    HSCRIPT m_ScriptSpawnCallback;
    // 0x508
    HSCRIPT m_ScriptCallbackScope;
};
struct CEnvVolumetricFogController {
    // 0x4a8
    float m_flScattering;
    // 0x4ac
    Color m_TintColor;
    // 0x4b0
    float m_flAnisotropy;
    // 0x4b4
    float m_flFadeSpeed;
    // 0x4b8
    float m_flDrawDistance;
    // 0x4bc
    float m_flFadeInStart;
    // 0x4c0
    float m_flFadeInEnd;
    // 0x4c4
    float m_flIndirectStrength;
    // 0x4c8
    int32_t m_nVolumeDepth;
    // 0x4cc
    float m_fFirstVolumeSliceThickness;
    // 0x4d0
    int32_t m_nIndirectTextureDimX;
    // 0x4d4
    int32_t m_nIndirectTextureDimY;
    // 0x4d8
    int32_t m_nIndirectTextureDimZ;
    // 0x4dc
    Vector m_vBoxMins;
    // 0x4e8
    Vector m_vBoxMaxs;
    // 0x4f4
    bool m_bActive;
    // 0x4f8
    GameTime_t m_flStartAnisoTime;
    // 0x4fc
    GameTime_t m_flStartScatterTime;
    // 0x500
    GameTime_t m_flStartDrawDistanceTime;
    // 0x504
    float m_flStartAnisotropy;
    // 0x508
    float m_flStartScattering;
    // 0x50c
    float m_flStartDrawDistance;
    // 0x510
    float m_flDefaultAnisotropy;
    // 0x514
    float m_flDefaultScattering;
    // 0x518
    float m_flDefaultDrawDistance;
    // 0x51c
    bool m_bStartDisabled;
    // 0x51d
    bool m_bEnableIndirect;
    // 0x51e
    bool m_bIsMaster;
    // 0x520
    CStrongHandle<T> m_hFogIndirectTexture;
    // 0x528
    int32_t m_nForceRefreshCount;
    // 0x52c
    float m_fNoiseSpeed;
    // 0x530
    float m_fNoiseStrength;
    // 0x534
    Vector m_vNoiseScale;
    // 0x540
    float m_fWindSpeed;
    // 0x544
    Vector m_vWindDirection;
    // 0x550
    bool m_bFirstTime;
};
struct CBot {
    // 0x10
    CCSPlayerController* m_pController;
    // 0x18
    CCSPlayerPawn* m_pPlayer;
    // 0x20
    bool m_bHasSpawned;
    // 0x24
    uint32_t m_id;
    // 0xc0
    bool m_isRunning;
    // 0xc1
    bool m_isCrouching;
    // 0xc4
    float m_forwardSpeed;
    // 0xc8
    float m_leftSpeed;
    // 0xcc
    float m_verticalSpeed;
    // 0xd0
    uint64_t m_buttonFlags;
    // 0xd8
    float m_jumpTimestamp;
    // 0xdc
    Vector m_viewForward;
    // 0xf8
    int32_t m_postureStackIndex;
};
struct CPulseCell_Step_SetAnimGraphParam {
    // 0x48
    CUtlString m_ParamName;
};
struct CPlayer_FlashlightServices {
};
struct CCSPlayerController {
    // 0x7d8
    CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices;
    // 0x7e0
    CCSPlayerController_InventoryServices* m_pInventoryServices;
    // 0x7e8
    CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices;
    // 0x7f0
    CCSPlayerController_DamageServices* m_pDamageServices;
    // 0x7f8
    uint32_t m_iPing;
    // 0x7fc
    bool m_bHasCommunicationAbuseMute;
    // 0x800
    uint32_t m_uiCommunicationMuteFlags;
    // 0x808
    CUtlSymbolLarge m_szCrosshairCodes;
    // 0x810
    uint8_t m_iPendingTeamNum;
    // 0x814
    GameTime_t m_flForceTeamTime;
    // 0x818
    int32_t m_iCompTeammateColor;
    // 0x81c
    bool m_bEverPlayedOnTeam;
    // 0x81d
    bool m_bAttemptedToGetColor;
    // 0x820
    int32_t m_iTeammatePreferredColor;
    // 0x824
    bool m_bTeamChanged;
    // 0x825
    bool m_bInSwitchTeam;
    // 0x826
    bool m_bHasSeenJoinGame;
    // 0x827
    bool m_bJustBecameSpectator;
    // 0x828
    bool m_bSwitchTeamsOnNextRoundReset;
    // 0x829
    bool m_bRemoveAllItemsOnNextRoundReset;
    // 0x82c
    GameTime_t m_flLastJoinTeamTime;
    // 0x830
    CUtlSymbolLarge m_szClan;
    // 0x838
    int32_t m_iCoachingTeam;
    // 0x840
    uint64_t m_nPlayerDominated;
    // 0x848
    uint64_t m_nPlayerDominatingMe;
    // 0x850
    int32_t m_iCompetitiveRanking;
    // 0x854
    int32_t m_iCompetitiveWins;
    // 0x858
    int8 m_iCompetitiveRankType;
    // 0x85c
    int32_t m_iCompetitiveRankingPredicted_Win;
    // 0x860
    int32_t m_iCompetitiveRankingPredicted_Loss;
    // 0x864
    int32_t m_iCompetitiveRankingPredicted_Tie;
    // 0x868
    int32_t m_nEndMatchNextMapVote;
    // 0x86c
    uint16_t m_unActiveQuestId;
    // 0x870
    uint32_t m_rtActiveMissionPeriod;
    // 0x874
    QuestProgress::Reason m_nQuestProgressReason;
    // 0x878
    uint32_t m_unPlayerTvControlFlags;
    // 0x8a8
    int32_t m_iDraftIndex;
    // 0x8ac
    uint32_t m_msQueuedModeDisconnectionTimestamp;
    // 0x8b0
    uint32_t m_uiAbandonRecordedReason;
    // 0x8b4
    uint32_t m_eNetworkDisconnectionReason;
    // 0x8b8
    bool m_bCannotBeKicked;
    // 0x8b9
    bool m_bEverFullyConnected;
    // 0x8ba
    bool m_bAbandonAllowsSurrender;
    // 0x8bb
    bool m_bAbandonOffersInstantSurrender;
    // 0x8bc
    bool m_bDisconnection1MinWarningPrinted;
    // 0x8bd
    bool m_bScoreReported;
    // 0x8c0
    int32_t m_nDisconnectionTick;
    // 0x8d0
    bool m_bControllingBot;
    // 0x8d1
    bool m_bHasControlledBotThisRound;
    // 0x8d2
    bool m_bHasBeenControlledByPlayerThisRound;
    // 0x8d4
    int32_t m_nBotsControlledThisRound;
    // 0x8d8
    bool m_bCanControlObservedBot;
    // 0x8dc
    CHandle<T> m_hPlayerPawn;
    // 0x8e0
    CHandle<T> m_hObserverPawn;
    // 0x8e4
    int32_t m_DesiredObserverMode;
    // 0x8e8
    CEntityHandle m_hDesiredObserverTarget;
    // 0x8ec
    bool m_bPawnIsAlive;
    // 0x8f0
    uint32_t m_iPawnHealth;
    // 0x8f4
    int32_t m_iPawnArmor;
    // 0x8f8
    bool m_bPawnHasDefuser;
    // 0x8f9
    bool m_bPawnHasHelmet;
    // 0x8fa
    uint16_t m_nPawnCharacterDefIndex;
    // 0x8fc
    int32_t m_iPawnLifetimeStart;
    // 0x900
    int32_t m_iPawnLifetimeEnd;
    // 0x904
    int32_t m_iPawnBotDifficulty;
    // 0x908
    CHandle<T> m_hOriginalControllerOfCurrentPawn;
    // 0x90c
    int32_t m_iScore;
    // 0x910
    int32_t m_iRoundScore;
    // 0x914
    int32_t m_iRoundsWon;
    // 0x918
    uint8[8] m_recentKillQueue;
    // 0x920
    uint8_t m_nFirstKill;
    // 0x921
    uint8_t m_nKillCount;
    // 0x922
    bool m_bMvpNoMusic;
    // 0x924
    int32_t m_eMvpReason;
    // 0x928
    int32_t m_iMusicKitID;
    // 0x92c
    int32_t m_iMusicKitMVPs;
    // 0x930
    int32_t m_iMVPs;
    // 0x934
    int32_t m_nUpdateCounter;
    // 0x938
    float m_flSmoothedPing;
    // 0x940
    IntervalTimer m_lastHeldVoteTimer;
    // 0x958
    bool m_bShowHints;
    // 0x95c
    int32_t m_iNextTimeCheck;
    // 0x960
    bool m_bJustDidTeamKill;
    // 0x961
    bool m_bPunishForTeamKill;
    // 0x962
    bool m_bGaveTeamDamageWarning;
    // 0x963
    bool m_bGaveTeamDamageWarningThisRound;
    // 0x968
    double m_dblLastReceivedPacketPlatFloatTime;
    // 0x970
    GameTime_t m_LastTeamDamageWarningTime;
    // 0x974
    GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove;
    // 0x978
    uint32_t m_nSuspiciousHitCount;
    // 0x97c
    uint32_t m_nNonSuspiciousHitStreak;
    // 0xa21
    bool m_bFireBulletsSeedSynchronized;
};
struct CPhysLength {
    // 0x508
    Vector[2] m_offset;
    // 0x520
    VectorWS m_vecAttach;
    // 0x52c
    float m_addLength;
    // 0x530
    float m_minLength;
    // 0x534
    float m_totalLength;
};
struct CTeam {
    // 0x4a8
    CHandle<T> m_aPlayerControllers;
    // 0x4c0
    CHandle<T> m_aPlayers;
    // 0x4d8
    int32_t m_iScore;
    // 0x4dc
    char[129] m_szTeamname;
};
struct CLogicNPCCounterAABB {
    // 0x728
    Vector m_vDistanceOuterMins;
    // 0x734
    Vector m_vDistanceOuterMaxs;
    // 0x740
    Vector m_vOuterMins;
    // 0x74c
    Vector m_vOuterMaxs;
};
struct CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    // 0x0
    int32_t m_nNextIndex;
};
struct CChicken {
    // 0xc70
    CAttributeContainer m_AttributeManager;
    // 0xf68
    CountdownTimer m_updateTimer;
    // 0xf80
    Vector m_stuckAnchor;
    // 0xf90
    CountdownTimer m_stuckTimer;
    // 0xfa8
    CountdownTimer m_collisionStuckTimer;
    // 0xfc0
    bool m_isOnGround;
    // 0xfc4
    Vector m_vFallVelocity;
    // 0xfd0
    ChickenActivity m_desiredActivity;
    // 0xfd4
    ChickenActivity m_currentActivity;
    // 0xfd8
    CountdownTimer m_activityTimer;
    // 0xff0
    float m_turnRate;
    // 0xff4
    CHandle<T> m_fleeFrom;
    // 0xff8
    CountdownTimer m_moveRateThrottleTimer;
    // 0x1010
    CountdownTimer m_startleTimer;
    // 0x1028
    CountdownTimer m_vocalizeTimer;
    // 0x1040
    GameTime_t m_flWhenZombified;
    // 0x1044
    bool m_jumpedThisFrame;
    // 0x1048
    CHandle<T> m_leader;
    // 0x1060
    CountdownTimer m_reuseTimer;
    // 0x1078
    bool m_hasBeenUsed;
    // 0x1080
    CountdownTimer m_jumpTimer;
    // 0x1098
    float m_flLastJumpTime;
    // 0x109c
    bool m_bInJump;
    // 0x30a8
    CountdownTimer m_repathTimer;
    // 0x3140
    Vector m_vecPathGoal;
    // 0x314c
    GameTime_t m_flActiveFollowStartTime;
    // 0x3150
    CountdownTimer m_followMinuteTimer;
    // 0x3170
    CountdownTimer m_BlockDirectionTimer;
};
struct CPhysicsPropRespawnable {
    // 0xce0
    VectorWS m_vOriginalSpawnOrigin;
    // 0xcec
    QAngle m_vOriginalSpawnAngles;
    // 0xcf8
    Vector m_vOriginalMins;
    // 0xd04
    Vector m_vOriginalMaxs;
    // 0xd10
    float m_flRespawnDuration;
};
struct CEnvBeam {
    // 0x7d0
    int32_t m_active;
    // 0x7d8
    CStrongHandle<T> m_spriteTexture;
    // 0x7e0
    CUtlSymbolLarge m_iszStartEntity;
    // 0x7e8
    CUtlSymbolLarge m_iszEndEntity;
    // 0x7f0
    float m_life;
    // 0x7f4
    float m_boltWidth;
    // 0x7f8
    float m_noiseAmplitude;
    // 0x7fc
    int32_t m_speed;
    // 0x800
    float m_restrike;
    // 0x808
    CUtlSymbolLarge m_iszSpriteName;
    // 0x810
    int32_t m_frameStart;
    // 0x814
    VectorWS m_vEndPointWorld;
    // 0x820
    Vector m_vEndPointRelative;
    // 0x82c
    float m_radius;
    // 0x830
    Touch_t m_TouchType;
    // 0x838
    CUtlSymbolLarge m_iFilterName;
    // 0x840
    CHandle<T> m_hFilter;
    // 0x848
    CUtlSymbolLarge m_iszDecal;
    // 0x850
    CEntityIOOutput m_OnTouchedByEntity;
};
struct CLightSpotEntity {
};
struct CWeaponSawedoff {
};
struct CTonemapTrigger {
    // 0x890
    CUtlSymbolLarge m_tonemapControllerName;
    // 0x898
    CEntityHandle m_hTonemapController;
};
struct CEnvShake {
    // 0x4a8
    CUtlSymbolLarge m_limitToEntity;
    // 0x4b0
    float m_Amplitude;
    // 0x4b4
    float m_Frequency;
    // 0x4b8
    float m_Duration;
    // 0x4bc
    float m_Radius;
    // 0x4c0
    GameTime_t m_stopTime;
    // 0x4c4
    GameTime_t m_nextShake;
    // 0x4c8
    float m_currentAmp;
    // 0x4cc
    Vector m_maxForce;
    // 0x4e0
    CPhysicsShake m_shakeCallback;
};
struct CCSPlayer_MovementServices {
    // 0x278
    Vector m_vecLadderNormal;
    // 0x284
    int32_t m_nLadderSurfacePropIndex;
    // 0x288
    bool m_bDucked;
    // 0x28c
    float m_flDuckAmount;
    // 0x290
    float m_flDuckSpeed;
    // 0x294
    bool m_bDuckOverride;
    // 0x295
    bool m_bDesiresDuck;
    // 0x296
    bool m_bDucking;
    // 0x298
    float m_flDuckOffset;
    // 0x29c
    uint32_t m_nDuckTimeMsecs;
    // 0x2a0
    uint32_t m_nDuckJumpTimeMsecs;
    // 0x2a4
    uint32_t m_nJumpTimeMsecs;
    // 0x2a8
    float m_flLastDuckTime;
    // 0x2b8
    Vector2D m_vecLastPositionAtFullCrouchSpeed;
    // 0x2c0
    bool m_duckUntilOnGround;
    // 0x2c1
    bool m_bHasWalkMovedSinceLastJump;
    // 0x2c2
    bool m_bInStuckTest;
    // 0x4d0
    int32_t m_nTraceCount;
    // 0x4d4
    int32_t m_StuckLast;
    // 0x4d8
    bool m_bSpeedCropped;
    // 0x4dc
    int32_t m_nOldWaterLevel;
    // 0x4e0
    float m_flWaterEntryTime;
    // 0x4e4
    Vector m_vecForward;
    // 0x4f0
    Vector m_vecLeft;
    // 0x4fc
    Vector m_vecUp;
    // 0x508
    int32_t m_nGameCodeHasMovedPlayerAfterCommand;
    // 0x50c
    bool m_bMadeFootstepNoise;
    // 0x510
    int32_t m_iFootsteps;
    // 0x514
    GameTime_t m_fStashGrenadeParameterWhen;
    // 0x518
    uint64_t m_nButtonDownMaskPrev;
    // 0x520
    float m_flOffsetTickCompleteTime;
    // 0x524
    float m_flOffsetTickStashedSpeed;
    // 0x528
    float m_flStamina;
    // 0x52c
    float m_flHeightAtJumpStart;
    // 0x530
    float m_flMaxJumpHeightThisJump;
    // 0x534
    float m_flMaxJumpHeightLastJump;
    // 0x538
    float m_flStaminaAtJumpStart;
    // 0x53c
    float m_flVelMulAtJumpStart;
    // 0x540
    float m_flAccumulatedJumpError;
    // 0x548
    CCSPlayerLegacyJump m_LegacyJump;
    // 0x560
    CCSPlayerModernJump m_ModernJump;
    // 0x598
    GameTick_t m_nLastJumpTick;
    // 0x59c
    float m_flLastJumpFrac;
    // 0x5a0
    float m_flLastJumpVelocityZ;
    // 0x5a4
    bool m_bJumpApexPending;
    // 0x5a8
    float m_flTicksSinceLastSurfingDetected;
    // 0x5ac
    bool m_bWasSurfing;
    // 0x63c
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
struct CTriggerCallback {
};
struct CSoundOpvarSetAutoRoomEntity {
    // 0x640
    CUtlVector<T> m_traceResults;
    // 0x658
    CUtlVector<T> m_doorwayPairs;
    // 0x670
    float m_flSize;
    // 0x674
    float m_flHeightTolerance;
    // 0x678
    float m_flSizeSqr;
};
struct CPulseCell_Outflow_ListenForEntityOutput {
    // 0x48
    SignatureOutflow_Resume m_OnFired;
    // 0x90
    CPulse_ResumePoint m_OnCanceled;
    // 0xd8
    CGlobalSymbol m_strEntityOutput;
    // 0xe0
    CUtlString m_strEntityOutputParam;
    // 0xe8
    bool m_bListenUntilCanceled;
};
struct CPushable {
};
struct CRotatorTarget {
    // 0x4a8
    CEntityIOOutput m_OnArrivedAt;
    // 0x4c0
    RotatorTargetSpace_t m_eSpace;
};
struct CPhysicsEntitySolver {
    // 0x4c0
    CHandle<T> m_hMovingEntity;
    // 0x4c4
    CHandle<T> m_hPhysicsBlocker;
    // 0x4c8
    float m_separationDuration;
    // 0x4cc
    GameTime_t m_cancelTime;
};
struct CLogicCollisionPair {
    // 0x4a8
    CUtlSymbolLarge m_nameAttach1;
    // 0x4b0
    CUtlSymbolLarge m_nameAttach2;
    // 0x4b8
    bool m_includeHierarchy;
    // 0x4b9
    bool m_supportMultipleEntitiesWithSameName;
    // 0x4ba
    bool m_disabled;
    // 0x4bb
    bool m_succeeded;
};
struct CTestEffect {
    // 0x4a8
    int32_t m_iLoop;
    // 0x4ac
    int32_t m_iBeam;
    // 0x4b0
    CHandle<T> m_pBeam;
    // 0x510
    GameTime_t[24] m_flBeamTime;
    // 0x570
    GameTime_t m_flStartTime;
};
struct CPulseCell_Outflow_ScriptedSequence_CursorState_t {
    // 0x0
    CHandle<T> m_scriptedSequence;
};
struct CPropDoorRotating {
    // 0xe50
    Vector m_vecAxis;
    // 0xe5c
    float m_flDistance;
    // 0xe60
    PropDoorRotatingSpawnPos_t m_eSpawnPosition;
    // 0xe64
    PropDoorRotatingOpenDirection_e m_eOpenDirection;
    // 0xe68
    PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection;
    // 0xe6c
    doorCheck_e m_eDefaultCheckDirection;
    // 0xe70
    float m_flAjarAngle;
    // 0xe74
    QAngle m_angRotationAjarDeprecated;
    // 0xe80
    QAngle m_angRotationClosed;
    // 0xe8c
    QAngle m_angRotationOpenForward;
    // 0xe98
    QAngle m_angRotationOpenBack;
    // 0xea4
    QAngle m_angGoal;
    // 0xeb0
    Vector m_vecForwardBoundsMin;
    // 0xebc
    Vector m_vecForwardBoundsMax;
    // 0xec8
    Vector m_vecBackBoundsMin;
    // 0xed4
    Vector m_vecBackBoundsMax;
    // 0xee0
    bool m_bAjarDoorShouldntAlwaysOpen;
    // 0xee4
    CHandle<T> m_hEntityBlocker;
};
struct CEnvParticleGlow {
    // 0xca8
    float m_flAlphaScale;
    // 0xcac
    float m_flRadiusScale;
    // 0xcb0
    float m_flSelfIllumScale;
    // 0xcb4
    Color m_ColorTint;
    // 0xcb8
    CStrongHandle<T> m_hTextureOverride;
};
struct CMathRemap {
    // 0x4a8
    float m_flInMin;
    // 0x4ac
    float m_flInMax;
    // 0x4b0
    float m_flOut1;
    // 0x4b4
    float m_flOut2;
    // 0x4b8
    float m_flOldInValue;
    // 0x4bc
    bool m_bEnabled;
    // 0x4c0
    CEntityOutputTemplate< float32, float32 > m_OutValue;
    // 0x4e0
    CEntityIOOutput m_OnRoseAboveMin;
    // 0x4f8
    CEntityIOOutput m_OnRoseAboveMax;
    // 0x510
    CEntityIOOutput m_OnFellBelowMin;
    // 0x528
    CEntityIOOutput m_OnFellBelowMax;
};
struct CSoundOpvarSetOBBWindEntity {
    // 0x550
    Vector m_vMins;
    // 0x55c
    Vector m_vMaxs;
    // 0x568
    Vector m_vDistanceMins;
    // 0x574
    Vector m_vDistanceMaxs;
    // 0x580
    float m_flWindMin;
    // 0x584
    float m_flWindMax;
    // 0x588
    float m_flWindMapMin;
    // 0x58c
    float m_flWindMapMax;
};
struct PhysicsRagdollPose_t {
    // 0x8
    CNetworkUtlVectorBase< CTransform > m_Transforms;
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
struct CScriptTriggerOnce {
    // 0x8a8
    Vector m_vExtent;
};
struct CLightOrthoEntity {
};
struct CInfoInstructorHintHostageRescueZone {
};
struct CPulseCell_LimitCount_InstanceState_t {
    // 0x0
    int32_t m_nCurrentCount;
};
struct CTriggerTeleport {
    // 0x890
    CUtlSymbolLarge m_iLandmark;
    // 0x898
    bool m_bUseLandmarkAngles;
    // 0x899
    bool m_bMirrorPlayer;
    // 0x89a
    bool m_bCheckDestIfClearForPlayer;
};
struct CFuncWall {
    // 0x730
    int32_t m_nState;
};
struct CBtActionAim {
    // 0x68
    CUtlString m_szSensorInputKey;
    // 0x80
    CUtlString m_szAimReadyKey;
    // 0x88
    float m_flZoomCooldownTimestamp;
    // 0x8c
    bool m_bDoneAiming;
    // 0x90
    float m_flLerpStartTime;
    // 0x94
    float m_flNextLookTargetLerpTime;
    // 0x98
    float m_flPenaltyReductionRatio;
    // 0x9c
    QAngle m_NextLookTarget;
    // 0xa8
    CountdownTimer m_AimTimer;
    // 0xc0
    CountdownTimer m_SniperHoldTimer;
    // 0xd8
    CountdownTimer m_FocusIntervalTimer;
    // 0xf0
    bool m_bAcquired;
};
struct CCSGO_TeamPreviewCharacterPosition {
    // 0x4a8
    int32_t m_nVariant;
    // 0x4ac
    int32_t m_nRandom;
    // 0x4b0
    int32_t m_nOrdinal;
    // 0x4b8
    CUtlString m_sWeaponName;
    // 0x4c0
    uint64_t m_xuid;
    // 0x4c8
    CEconItemView m_agentItem;
    // 0x770
    CEconItemView m_glovesItem;
    // 0xa18
    CEconItemView m_weaponItem;
};
struct CGameRulesProxy {
};
struct CInfoLadderDismount {
};
struct CPulseServerFuncs {
};
struct CMessage {
    // 0x4a8
    CUtlSymbolLarge m_iszMessage;
    // 0x4b0
    float m_MessageVolume;
    // 0x4b4
    int32_t m_MessageAttenuation;
    // 0x4b8
    float m_Radius;
    // 0x4c0
    CUtlSymbolLarge m_sNoise;
    // 0x4c8
    CEntityIOOutput m_OnShowMessage;
};
struct CPointVelocitySensor {
    // 0x4a8
    CHandle<T> m_hTargetEntity;
    // 0x4ac
    Vector m_vecAxis;
    // 0x4b8
    bool m_bEnabled;
    // 0x4bc
    float m_fPrevVelocity;
    // 0x4c0
    float m_flAvgInterval;
    // 0x4c8
    CEntityOutputTemplate< float32, float32 > m_Velocity;
};
struct EngineCountdownTimer {
    // 0x8
    float m_duration;
    // 0xc
    float m_timestamp;
    // 0x10
    float m_timescale;
};
struct CBaseModelEntityAPI {
};
struct CHostage {
    // 0xb98
    CEntityIOOutput m_OnHostageBeginGrab;
    // 0xbb0
    CEntityIOOutput m_OnFirstPickedUp;
    // 0xbc8
    CEntityIOOutput m_OnDroppedNotRescued;
    // 0xbe0
    CEntityIOOutput m_OnRescued;
    // 0xbf8
    EntitySpottedState_t m_entitySpottedState;
    // 0xc10
    int32_t m_nSpotRules;
    // 0xc14
    uint32_t m_uiHostageSpawnExclusionGroupMask;
    // 0xc18
    uint32_t m_nHostageSpawnRandomFactor;
    // 0xc1c
    bool m_bRemove;
    // 0xc20
    Vector m_vel;
    // 0xc2c
    bool m_isRescued;
    // 0xc2d
    bool m_jumpedThisFrame;
    // 0xc30
    int32_t m_nHostageState;
    // 0xc34
    CHandle<T> m_leader;
    // 0xc38
    CHandle<T> m_lastLeader;
    // 0xc40
    CountdownTimer m_reuseTimer;
    // 0xc58
    bool m_hasBeenUsed;
    // 0xc5c
    Vector m_accel;
    // 0xc68
    bool m_isRunning;
    // 0xc69
    bool m_isCrouching;
    // 0xc70
    CountdownTimer m_jumpTimer;
    // 0xc88
    bool m_isWaitingForLeader;
    // 0x2c98
    CountdownTimer m_repathTimer;
    // 0x2cb0
    CountdownTimer m_inhibitDoorTimer;
    // 0x2d40
    CountdownTimer m_inhibitObstacleAvoidanceTimer;
    // 0x2d60
    CountdownTimer m_wiggleTimer;
    // 0x2d7c
    bool m_isAdjusted;
    // 0x2d7d
    bool m_bHandsHaveBeenCut;
    // 0x2d80
    CHandle<T> m_hHostageGrabber;
    // 0x2d84
    GameTime_t m_fLastGrabTime;
    // 0x2d88
    Vector m_vecPositionWhenStartedDroppingToGround;
    // 0x2d94
    Vector m_vecGrabbedPos;
    // 0x2da0
    GameTime_t m_flRescueStartTime;
    // 0x2da4
    GameTime_t m_flGrabSuccessTime;
    // 0x2da8
    GameTime_t m_flDropStartTime;
    // 0x2dac
    int32_t m_nApproachRewardPayouts;
    // 0x2db0
    int32_t m_nPickupEventCount;
    // 0x2db4
    Vector m_vecSpawnGroundPos;
    // 0x2dec
    VectorWS m_vecHostageResetPosition;
};
struct CScriptTriggerMultiple {
    // 0x8a8
    Vector m_vExtent;
};
struct CEnvSpark {
    // 0x4a8
    float m_flDelay;
    // 0x4ac
    int32_t m_nMagnitude;
    // 0x4b0
    int32_t m_nTrailLength;
    // 0x4b4
    int32_t m_nType;
    // 0x4b8
    CEntityIOOutput m_OnSpark;
};
struct CCSPlayerController_DamageServices {
    // 0x40
    int32_t m_nSendUpdate;
    // 0x48
    CUtlVector<T> m_DamageList;
};
struct CFilterLOS {
};
struct CPointOrient {
    // 0x4a8
    CUtlSymbolLarge m_iszSpawnTargetName;
    // 0x4b0
    CHandle<T> m_hTarget;
    // 0x4b4
    bool m_bActive;
    // 0x4b8
    PointOrientGoalDirectionType_t m_nGoalDirection;
    // 0x4bc
    PointOrientConstraint_t m_nConstraint;
    // 0x4c0
    float m_flMaxTurnRate;
    // 0x4c4
    GameTime_t m_flLastGameTime;
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
struct CWeaponP250 {
};
struct CDestructiblePartsComponent {
    // 0x0
    CNetworkVarChainer _m_pChainEntity;
    // 0x48
    CUtlVector<T> m_vecDamageTakenByHitGroup;
    // 0x60
    CHandle<T> m_hOwner;
};
struct CChangeLevel {
    // 0x890
    CUtlString m_sMapName;
    // 0x898
    CUtlString m_sLandmarkName;
    // 0x8a0
    CEntityIOOutput m_OnChangeLevel;
    // 0x8b8
    bool m_bTouched;
    // 0x8b9
    bool m_bNoTouch;
    // 0x8ba
    bool m_bNewChapter;
    // 0x8bb
    bool m_bOnChangeLevelFired;
};
struct CBaseButton {
    // 0x7b0
    QAngle m_angMoveEntitySpace;
    // 0x7bc
    bool m_fStayPushed;
    // 0x7bd
    bool m_fRotating;
    // 0x7c0
    locksound_t m_ls;
    // 0x7e0
    CUtlSymbolLarge m_sUseSound;
    // 0x7e8
    CUtlSymbolLarge m_sLockedSound;
    // 0x7f0
    CUtlSymbolLarge m_sUnlockedSound;
    // 0x7f8
    CUtlSymbolLarge m_sOverrideAnticipationName;
    // 0x800
    bool m_bLocked;
    // 0x801
    bool m_bDisabled;
    // 0x804
    GameTime_t m_flUseLockedTime;
    // 0x808
    bool m_bSolidBsp;
    // 0x810
    CEntityIOOutput m_OnDamaged;
    // 0x828
    CEntityIOOutput m_OnPressed;
    // 0x840
    CEntityIOOutput m_OnUseLocked;
    // 0x858
    CEntityIOOutput m_OnIn;
    // 0x870
    CEntityIOOutput m_OnOut;
    // 0x888
    int32_t m_nState;
    // 0x88c
    CEntityHandle m_hConstraint;
    // 0x890
    CEntityHandle m_hConstraintParent;
    // 0x894
    bool m_bForceNpcExclude;
    // 0x898
    CUtlSymbolLarge m_sGlowEntity;
    // 0x8a0
    CHandle<T> m_glowEntity;
    // 0x8a4
    bool m_usable;
    // 0x8a8
    CUtlSymbolLarge m_szDisplayText;
};
struct CPulseCell_SoundEventStart {
    // 0x48
    SoundEventStartType_t m_Type;
};
struct CPulseCell_Step_DebugLog {
};
struct CItem_Healthshot {
};
struct CBaseGrenade {
    // 0xab8
    CEntityIOOutput m_OnPlayerPickup;
    // 0xad0
    CEntityIOOutput m_OnExplode;
    // 0xae8
    bool m_bHasWarnedAI;
    // 0xae9
    bool m_bIsSmokeGrenade;
    // 0xaea
    bool m_bIsLive;
    // 0xaec
    float m_DmgRadius;
    // 0xaf0
    GameTime_t m_flDetonateTime;
    // 0xaf4
    float m_flWarnAITime;
    // 0xaf8
    float m_flDamage;
    // 0xb00
    CUtlSymbolLarge m_iszBounceSound;
    // 0xb08
    CUtlString m_ExplosionSound;
    // 0xb14
    CHandle<T> m_hThrower;
    // 0xb2c
    GameTime_t m_flNextAttack;
    // 0xb30
    CHandle<T> m_hOriginalThrower;
};
struct CColorCorrectionVolume {
    // 0x890
    float m_MaxWeight;
    // 0x894
    float m_FadeDuration;
    // 0x898
    float m_Weight;
    // 0x89c
    char[512] m_lookupFilename;
    // 0xa9c
    float m_LastEnterWeight;
    // 0xaa0
    GameTime_t m_LastEnterTime;
    // 0xaa4
    float m_LastExitWeight;
    // 0xaa8
    GameTime_t m_LastExitTime;
};
struct CCSPlayerController_ActionTrackingServices {
    // 0x40
    CUtlVector<T> m_perRoundStats;
    // 0xc8
    CSMatchStats_t m_matchStats;
    // 0x188
    int32_t m_iNumRoundKills;
    // 0x18c
    int32_t m_iNumRoundKillsHeadshots;
    // 0x190
    float m_flTotalRoundDamageDealt;
};
struct CBodyComponentBaseAnimGraph {
    // 0x4b0
    CBaseAnimGraphController m_animationController;
};
struct CPulseCell_BaseYieldingInflow {
};
struct PulseNodeDynamicOutflows_t {
    // 0x0
    CUtlVector<T> m_Outflows;
};
struct CFogVolume {
    // 0x730
    CUtlSymbolLarge m_fogName;
    // 0x738
    CUtlSymbolLarge m_postProcessName;
    // 0x740
    CUtlSymbolLarge m_colorCorrectionName;
    // 0x750
    bool m_bDisabled;
    // 0x751
    bool m_bInFogVolumesList;
};
struct CFuncRotating {
    // 0x730
    CEntityIOOutput m_OnStopped;
    // 0x748
    CEntityIOOutput m_OnStarted;
    // 0x760
    CEntityIOOutput m_OnReachedStart;
    // 0x778
    RotationVector m_localRotationVector;
    // 0x784
    float m_flFanFriction;
    // 0x788
    float m_flAttenuation;
    // 0x78c
    float m_flVolume;
    // 0x790
    float m_flTargetSpeed;
    // 0x794
    float m_flMaxSpeed;
    // 0x798
    float m_flBlockDamage;
    // 0x7a0
    CUtlSymbolLarge m_NoiseRunning;
    // 0x7a8
    bool m_bReversed;
    // 0x7a9
    bool m_bAccelDecel;
    // 0x7c0
    QAngle m_prevLocalAngles;
    // 0x7cc
    QAngle m_angStart;
    // 0x7d8
    bool m_bStopAtStartPos;
    // 0x7dc
    Vector m_vecClientOrigin;
    // 0x7e8
    QAngle m_vecClientAngles;
};
struct CTimerEntity {
    // 0x4a8
    CEntityIOOutput m_OnTimer;
    // 0x4c0
    CEntityIOOutput m_OnTimerHigh;
    // 0x4d8
    CEntityIOOutput m_OnTimerLow;
    // 0x4f0
    int32_t m_iDisabled;
    // 0x4f4
    float m_flInitialDelay;
    // 0x4f8
    float m_flRefireTime;
    // 0x4fc
    bool m_bUpDownState;
    // 0x500
    int32_t m_iUseRandomTime;
    // 0x504
    bool m_bPauseAfterFiring;
    // 0x508
    float m_flLowerRandomBound;
    // 0x50c
    float m_flUpperRandomBound;
    // 0x510
    float m_flRemainingTime;
    // 0x514
    bool m_bPaused;
};
struct CBtActionMoveTo {
    // 0x60
    CUtlString m_szDestinationInputKey;
    // 0x68
    CUtlString m_szHidingSpotInputKey;
    // 0x70
    CUtlString m_szThreatInputKey;
    // 0x78
    Vector m_vecDestination;
    // 0x84
    bool m_bAutoLookAdjust;
    // 0x85
    bool m_bComputePath;
    // 0x88
    float m_flDamagingAreasPenaltyCost;
    // 0x90
    CountdownTimer m_CheckApproximateCornersTimer;
    // 0xa8
    CountdownTimer m_CheckHighPriorityItem;
    // 0xc0
    CountdownTimer m_RepathTimer;
    // 0xd8
    float m_flArrivalEpsilon;
    // 0xdc
    float m_flAdditionalArrivalEpsilon2D;
    // 0xe0
    float m_flHidingSpotCheckDistanceThreshold;
    // 0xe4
    float m_flNearestAreaDistanceThreshold;
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
    // 0x26c
    Vector m_vecSmoothedVelocity;
};
struct CBaseEntityAPI {
};
struct CPulseCell_IsRequirementValid_Criteria_t {
    // 0x0
    bool m_bIsValid;
};
struct CWeaponG3SG1 {
};
struct CTriggerOnce {
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
    // 0x7c
    int32_t m_iEnemy2Ks;
    // 0x80
    int32_t m_iUtility_Count;
    // 0x84
    int32_t m_iUtility_Successes;
    // 0x88
    int32_t m_iUtility_Enemies;
    // 0x8c
    int32_t m_iFlash_Count;
    // 0x90
    int32_t m_iFlash_Successes;
    // 0x94
    float m_flHealthPointsRemovedTotal;
    // 0x98
    float m_flHealthPointsDealtTotal;
    // 0x9c
    int32_t m_nShotsFiredTotal;
    // 0xa0
    int32_t m_nShotsOnTargetTotal;
    // 0xa4
    int32_t m_i1v1Count;
    // 0xa8
    int32_t m_i1v1Wins;
    // 0xac
    int32_t m_i1v2Count;
    // 0xb0
    int32_t m_i1v2Wins;
    // 0xb4
    int32_t m_iEntryCount;
    // 0xb8
    int32_t m_iEntryWins;
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
struct CFuncMonitor {
    // 0x750
    CUtlString m_targetCamera;
    // 0x758
    int32_t m_nResolutionEnum;
    // 0x75c
    bool m_bRenderShadows;
    // 0x75d
    bool m_bUseUniqueColorTarget;
    // 0x760
    CUtlString m_brushModelName;
    // 0x768
    CHandle<T> m_hTargetCamera;
    // 0x76c
    bool m_bEnabled;
    // 0x76d
    bool m_bDraw3DSkybox;
    // 0x76e
    bool m_bStartEnabled;
};
struct CInfoVisibilityBox {
    // 0x4ac
    int32_t m_nMode;
    // 0x4b0
    Vector m_vBoxSize;
    // 0x4bc
    bool m_bEnabled;
};
struct CGunTarget {
    // 0x7b0
    bool m_on;
    // 0x7b4
    CHandle<T> m_hTargetEnt;
    // 0x7b8
    CEntityIOOutput m_OnDeath;
};
struct CSoundEventConeEntity {
    // 0x558
    float m_flEmitterAngle;
    // 0x55c
    float m_flSweetSpotAngle;
    // 0x560
    float m_flAttenMin;
    // 0x564
    float m_flAttenMax;
    // 0x568
    CUtlSymbolLarge m_iszParameterName;
};
struct CSoundOpvarSetOBBEntity {
};
struct CFilterMultipleAPI {
};
struct CDecoyProjectile {
    // 0xbc8
    int32_t m_nDecoyShotTick;
    // 0xbcc
    int32_t m_shotsRemaining;
    // 0xbd0
    GameTime_t m_fExpireTime;
    // 0xbe0
    uint16_t m_decoyWeaponDefIndex;
};
struct CPrecipitationBlocker {
};
struct CSoundOpvarSetPathCornerEntity {
    // 0x658
    bool m_bUseParentedPath;
    // 0x65c
    float m_flDistMinSqr;
    // 0x660
    float m_flDistMaxSqr;
    // 0x668
    CUtlSymbolLarge m_iszPathCornerEntityName;
};
struct CPointClientCommand {
};
struct CHostageRescueZone {
};
struct CWorld {
};
struct CPathMoverEntitySpawner {
    // 0x4a8
    CUtlSymbolLarge[4] m_szSpawnTemplates;
    // 0x4c8
    int32_t m_nSpawnIndex;
    // 0x4cc
    CHandle<T> m_hPathMover;
    // 0x4d0
    float m_flSpawnFrequencySeconds;
    // 0x4d4
    float m_flSpawnFrequencyDistToNearestMover;
    // 0x4d8
    CHandle<T> m_mapSpawnedMoverTemplates;
    // 0x4f8
    int32_t m_nMaxActive;
    // 0x4fc
    GameTime_t m_flLastSpawnTime;
    // 0x500
    bool m_bEnabled;
};
struct CModelState {
    // 0xa0
    CStrongHandle<T> m_hModel;
    // 0xa8
    CUtlSymbolLarge m_ModelName;
    // 0xf5
    bool m_bClientClothCreationSuppressed;
    // 0x1a0
    uint64_t m_MeshGroupMask;
    // 0x1f0
    CNetworkUtlVectorBase< int32 > m_nBodyGroupChoices;
    // 0x23a
    int8 m_nIdealMotionType;
    // 0x23b
    int8 m_nForceLOD;
    // 0x23c
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
struct CWeaponGlock {
};
struct CHEGrenadeProjectile {
};
struct CTriggerGravity {
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
struct CWeaponGalilAR {
};
struct CFilterMassGreater {
    // 0x4e0
    float m_fFilterMass;
};
struct CWeaponMP7 {
};
struct CCSWeaponBaseGun {
    // 0x1130
    int32_t m_zoomLevel;
    // 0x1134
    int32_t m_iBurstShotsRemaining;
    // 0x1140
    int32_t m_silencedModelIndex;
    // 0x1144
    bool m_inPrecache;
    // 0x1145
    bool m_bNeedsBoltAction;
    // 0x1148
    int32_t m_nRevolverCylinderIdx;
    // 0x114c
    bool m_bSkillReloadAvailable;
    // 0x114d
    bool m_bSkillReloadLiftedReloadKey;
    // 0x114e
    bool m_bSkillBoltInterruptAvailable;
    // 0x114f
    bool m_bSkillBoltLiftedFireKey;
};
struct CEnableMotionFixup {
};
struct CLogicActiveAutosave {
    // 0x4b8
    int32_t m_TriggerHitPoints;
    // 0x4bc
    float m_flTimeToTrigger;
    // 0x4c0
    GameTime_t m_flStartTime;
    // 0x4c4
    float m_flDangerousTime;
};
struct CMathCounter {
    // 0x4a8
    float m_flMin;
    // 0x4ac
    float m_flMax;
    // 0x4b0
    bool m_bHitMin;
    // 0x4b1
    bool m_bHitMax;
    // 0x4b2
    bool m_bDisabled;
    // 0x4b8
    CEntityOutputTemplate< float32, float32 > m_OutValue;
    // 0x4d8
    CEntityOutputTemplate< float32, float32 > m_OnGetValue;
    // 0x4f8
    CEntityIOOutput m_OnHitMin;
    // 0x510
    CEntityIOOutput m_OnHitMax;
    // 0x528
    CEntityIOOutput m_OnChangedFromMin;
    // 0x540
    CEntityIOOutput m_OnChangedFromMax;
};
struct CCSGameModeRules_ArmsRace {
    // 0x30
    CUtlString m_WeaponSequence;
};
struct CAttributeContainer {
    // 0x50
    CEconItemView m_Item;
};
struct CCSPlace {
    // 0x748
    CUtlSymbolLarge m_name;
};
struct PulseSelectorOutflowList_t {
    // 0x0
    CUtlVector<T> m_Outflows;
};
struct CFilterContext {
    // 0x4e0
    CUtlSymbolLarge m_iFilterContext;
};
struct CLightEnvironmentEntity {
};
struct CEnvDecal {
    // 0x730
    CStrongHandle<T> m_hDecalMaterial;
    // 0x738
    float m_flWidth;
    // 0x73c
    float m_flHeight;
    // 0x740
    float m_flDepth;
    // 0x744
    uint32_t m_nRenderOrder;
    // 0x748
    bool m_bProjectOnWorld;
    // 0x749
    bool m_bProjectOnCharacters;
    // 0x74a
    bool m_bProjectOnWater;
    // 0x74c
    float m_flDepthSortBias;
};
struct CEnvVolumetricFogVolume {
    // 0x4a8
    bool m_bActive;
    // 0x4ac
    Vector m_vBoxMins;
    // 0x4b8
    Vector m_vBoxMaxs;
    // 0x4c4
    bool m_bStartDisabled;
    // 0x4c5
    bool m_bIndirectUseLPVs;
    // 0x4c8
    float m_flStrength;
    // 0x4cc
    int32_t m_nFalloffShape;
    // 0x4d0
    float m_flFalloffExponent;
    // 0x4d4
    float m_flHeightFogDepth;
    // 0x4d8
    float m_fHeightFogEdgeWidth;
    // 0x4dc
    float m_fIndirectLightStrength;
    // 0x4e0
    float m_fSunLightStrength;
    // 0x4e4
    float m_fNoiseStrength;
    // 0x4e8
    Color m_TintColor;
    // 0x4ec
    bool m_bOverrideTintColor;
    // 0x4ed
    bool m_bOverrideIndirectLightStrength;
    // 0x4ee
    bool m_bOverrideSunLightStrength;
    // 0x4ef
    bool m_bOverrideNoiseStrength;
};
struct CServerOnlyEntity {
};
struct CPulseCell_PlaySequence_CursorState_t {
    // 0x0
    CHandle<T> m_hTarget;
};
struct CBodyComponentSkeletonInstance {
    // 0x80
    CSkeletonInstance m_skeletonInstance;
};
struct CItemGeneric {
    // 0xad4
    bool m_bHasTriggerRadius;
    // 0xad5
    bool m_bHasPickupRadius;
    // 0xad8
    float m_flPickupRadiusSqr;
    // 0xadc
    float m_flTriggerRadiusSqr;
    // 0xae0
    GameTime_t m_flLastPickupCheck;
    // 0xae4
    bool m_bPlayerCounterListenerAdded;
    // 0xae5
    bool m_bPlayerInTriggerRadius;
    // 0xae8
    CStrongHandle<T> m_hSpawnParticleEffect;
    // 0xaf0
    CUtlSymbolLarge m_pAmbientSoundEffect;
    // 0xaf8
    bool m_bAutoStartAmbientSound;
    // 0xb00
    CUtlSymbolLarge m_pSpawnScriptFunction;
    // 0xb08
    CStrongHandle<T> m_hPickupParticleEffect;
    // 0xb10
    CUtlSymbolLarge m_pPickupSoundEffect;
    // 0xb18
    CUtlSymbolLarge m_pPickupScriptFunction;
    // 0xb20
    CStrongHandle<T> m_hTimeoutParticleEffect;
    // 0xb28
    CUtlSymbolLarge m_pTimeoutSoundEffect;
    // 0xb30
    CUtlSymbolLarge m_pTimeoutScriptFunction;
    // 0xb38
    CUtlSymbolLarge m_pPickupFilterName;
    // 0xb40
    CHandle<T> m_hPickupFilter;
    // 0xb48
    CEntityIOOutput m_OnPickup;
    // 0xb60
    CEntityIOOutput m_OnTimeout;
    // 0xb78
    CEntityIOOutput m_OnTriggerStartTouch;
    // 0xb90
    CEntityIOOutput m_OnTriggerTouch;
    // 0xba8
    CEntityIOOutput m_OnTriggerEndTouch;
    // 0xbc0
    CUtlSymbolLarge m_pAllowPickupScriptFunction;
    // 0xbc8
    float m_flPickupRadius;
    // 0xbcc
    float m_flTriggerRadius;
    // 0xbd0
    CUtlSymbolLarge m_pTriggerSoundEffect;
    // 0xbd8
    bool m_bGlowWhenInTrigger;
    // 0xbd9
    Color m_glowColor;
    // 0xbdd
    bool m_bUseable;
    // 0xbe0
    CHandle<T> m_hTriggerHelper;
};
struct CPointValueRemapper {
    // 0x4a8
    bool m_bDisabled;
    // 0x4a9
    bool m_bUpdateOnClient;
    // 0x4ac
    ValueRemapperInputType_t m_nInputType;
    // 0x4b0
    CUtlSymbolLarge m_iszRemapLineStartName;
    // 0x4b8
    CUtlSymbolLarge m_iszRemapLineEndName;
    // 0x4c0
    CHandle<T> m_hRemapLineStart;
    // 0x4c4
    CHandle<T> m_hRemapLineEnd;
    // 0x4c8
    float m_flMaximumChangePerSecond;
    // 0x4cc
    float m_flDisengageDistance;
    // 0x4d0
    float m_flEngageDistance;
    // 0x4d4
    bool m_bRequiresUseKey;
    // 0x4d8
    ValueRemapperOutputType_t m_nOutputType;
    // 0x4e0
    CUtlSymbolLarge m_iszOutputEntityName;
    // 0x4e8
    CUtlSymbolLarge m_iszOutputEntity2Name;
    // 0x4f0
    CUtlSymbolLarge m_iszOutputEntity3Name;
    // 0x4f8
    CUtlSymbolLarge m_iszOutputEntity4Name;
    // 0x500
    CHandle<T> m_hOutputEntities;
    // 0x518
    ValueRemapperHapticsType_t m_nHapticsType;
    // 0x51c
    ValueRemapperMomentumType_t m_nMomentumType;
    // 0x520
    float m_flMomentumModifier;
    // 0x524
    float m_flSnapValue;
    // 0x528
    float m_flCurrentMomentum;
    // 0x52c
    ValueRemapperRatchetType_t m_nRatchetType;
    // 0x530
    float m_flRatchetOffset;
    // 0x534
    float m_flInputOffset;
    // 0x538
    bool m_bEngaged;
    // 0x539
    bool m_bFirstUpdate;
    // 0x53c
    float m_flPreviousValue;
    // 0x540
    GameTime_t m_flPreviousUpdateTickTime;
    // 0x544
    Vector m_vecPreviousTestPoint;
    // 0x550
    CHandle<T> m_hUsingPlayer;
    // 0x554
    float m_flCustomOutputValue;
    // 0x558
    CUtlSymbolLarge m_iszSoundEngage;
    // 0x560
    CUtlSymbolLarge m_iszSoundDisengage;
    // 0x568
    CUtlSymbolLarge m_iszSoundReachedValueZero;
    // 0x570
    CUtlSymbolLarge m_iszSoundReachedValueOne;
    // 0x578
    CUtlSymbolLarge m_iszSoundMovingLoop;
    // 0x598
    CEntityOutputTemplate< float32, float32 > m_Position;
    // 0x5b8
    CEntityOutputTemplate< float32, float32 > m_PositionDelta;
    // 0x5d8
    CEntityIOOutput m_OnReachedValueZero;
    // 0x5f0
    CEntityIOOutput m_OnReachedValueOne;
    // 0x608
    CEntityIOOutput m_OnReachedValueCustom;
    // 0x620
    CEntityIOOutput m_OnEngage;
    // 0x638
    CEntityIOOutput m_OnDisengage;
};
struct CBtNodeConditionInactive {
    // 0x78
    float m_flRoundStartThresholdSeconds;
    // 0x7c
    float m_flSensorInactivityThresholdSeconds;
    // 0x80
    CountdownTimer m_SensorInactivityTimer;
};
struct CCSGO_TeamIntroCounterTerroristPosition {
};
struct CRagdollProp {
    // 0xa30
    ragdoll_t m_ragdoll;
    // 0xa80
    bool m_bStartDisabled;
    // 0xa88
    CNetworkUtlVectorBase< bool > m_ragEnabled;
    // 0xaa0
    CNetworkUtlVectorBase< Vector > m_ragPos;
    // 0xab8
    CNetworkUtlVectorBase< QAngle > m_ragAngles;
    // 0xad0
    uint32_t m_lastUpdateTickCount;
    // 0xad4
    bool m_allAsleep;
    // 0xad5
    bool m_bFirstCollisionAfterLaunch;
    // 0xad8
    CHandle<T> m_hDamageEntity;
    // 0xadc
    CHandle<T> m_hKiller;
    // 0xae0
    CHandle<T> m_hPhysicsAttacker;
    // 0xae4
    GameTime_t m_flLastPhysicsInfluenceTime;
    // 0xae8
    GameTime_t m_flFadeOutStartTime;
    // 0xaec
    float m_flFadeTime;
    // 0xaf0
    VectorWS m_vecLastOrigin;
    // 0xafc
    GameTime_t m_flAwakeTime;
    // 0xb00
    GameTime_t m_flLastOriginChangeTime;
    // 0xb08
    CUtlSymbolLarge m_strOriginClassName;
    // 0xb10
    CUtlSymbolLarge m_strSourceClassName;
    // 0xb18
    bool m_bHasBeenPhysgunned;
    // 0xb19
    bool m_bAllowStretch;
    // 0xb1c
    float m_flBlendWeight;
    // 0xb20
    float m_flDefaultFadeScale;
    // 0xb28
    CUtlVector<T> m_ragdollMins;
    // 0xb40
    CUtlVector<T> m_ragdollMaxs;
    // 0xb58
    bool m_bShouldDeleteActivationRecord;
};
struct CScriptComponent {
    // 0x30
    CUtlSymbolLarge m_scriptClassName;
};
struct CFuncTrain {
    // 0x7d8
    CHandle<T> m_hCurrentTarget;
    // 0x7dc
    bool m_activated;
    // 0x7e0
    CHandle<T> m_hEnemy;
    // 0x7e4
    float m_flBlockDamage;
    // 0x7e8
    GameTime_t m_flNextBlockTime;
    // 0x7f0
    CUtlSymbolLarge m_iszLastTarget;
};
struct CAI_ChangeHintGroup {
    // 0x4a8
    int32_t m_iSearchType;
    // 0x4b0
    CUtlSymbolLarge m_strSearchName;
    // 0x4b8
    CUtlSymbolLarge m_strNewHintGroup;
    // 0x4c0
    float m_flRadius;
};
struct CCSPlayer_BuyServices {
    // 0xd0
    CUtlVector<T> m_vecSellbackPurchaseEntries;
};
struct CWeaponAug {
};
struct CPhysHinge {
    // 0x510
    ConstraintSoundInfo m_soundInfo;
    // 0x5a8
    CEntityIOOutput m_NotifyMinLimitReached;
    // 0x5c0
    CEntityIOOutput m_NotifyMaxLimitReached;
    // 0x5d8
    bool m_bAtMinLimit;
    // 0x5d9
    bool m_bAtMaxLimit;
    // 0x5dc
    constraint_hingeparams_t m_hinge;
    // 0x61c
    float m_hingeFriction;
    // 0x620
    float m_systemLoadScale;
    // 0x624
    bool m_bIsAxisLocal;
    // 0x628
    float m_flMinRotation;
    // 0x62c
    float m_flMaxRotation;
    // 0x630
    float m_flInitialRotation;
    // 0x634
    float m_flMotorFrequency;
    // 0x638
    float m_flMotorDampingRatio;
    // 0x63c
    float m_flAngleSpeed;
    // 0x640
    float m_flAngleSpeedThreshold;
    // 0x644
    float m_flLimitsDebugVisRotation;
    // 0x648
    CEntityIOOutput m_OnStartMoving;
    // 0x660
    CEntityIOOutput m_OnStopMoving;
};
struct CBuyZone {
    // 0x890
    int32_t m_LegacyTeamNum;
};
struct CWeaponSSG08 {
};
struct CLogicRelayAPI {
};
struct CInfoWorldLayer {
    // 0x4a8
    CEntityIOOutput m_pOutputOnEntitiesSpawned;
    // 0x4c0
    CUtlSymbolLarge m_worldName;
    // 0x4c8
    CUtlSymbolLarge m_layerName;
    // 0x4d0
    bool m_bWorldLayerVisible;
    // 0x4d1
    bool m_bEntitiesSpawned;
    // 0x4d2
    bool m_bCreateAsChildSpawnGroup;
    // 0x4d4
    uint32_t m_hLayerSpawnGroup;
};
struct CBodyComponentBaseModelEntity {
};
struct CLogicProximity {
};
struct CPointGiveAmmo {
    // 0x4a8
    CHandle<T> m_pActivator;
};
struct FilterDamageType {
    // 0x4e0
    int32_t m_iDamageType;
};
struct CPointCamera {
    // 0x4a8
    float m_FOV;
    // 0x4ac
    float m_Resolution;
    // 0x4b0
    bool m_bFogEnable;
    // 0x4b1
    Color m_FogColor;
    // 0x4b8
    float m_flFogStart;
    // 0x4bc
    float m_flFogEnd;
    // 0x4c0
    float m_flFogMaxDensity;
    // 0x4c4
    bool m_bActive;
    // 0x4c5
    bool m_bUseScreenAspectRatio;
    // 0x4c8
    float m_flAspectRatio;
    // 0x4cc
    bool m_bNoSky;
    // 0x4d0
    float m_fBrightness;
    // 0x4d4
    float m_flZFar;
    // 0x4d8
    float m_flZNear;
    // 0x4dc
    bool m_bCanHLTVUse;
    // 0x4dd
    bool m_bAlignWithParent;
    // 0x4de
    bool m_bDofEnabled;
    // 0x4e0
    float m_flDofNearBlurry;
    // 0x4e4
    float m_flDofNearCrisp;
    // 0x4e8
    float m_flDofFarCrisp;
    // 0x4ec
    float m_flDofFarBlurry;
    // 0x4f0
    float m_flDofTiltToGround;
    // 0x4f4
    float m_TargetFOV;
    // 0x4f8
    float m_DegreesPerSecond;
    // 0x4fc
    bool m_bIsOn;
    // 0x500
    CPointCamera* m_pNext;
};
struct CAttributeList {
    // 0x8
    CUtlVector<T> m_Attributes;
    // 0x70
    CAttributeManager* m_pManager;
};
struct CPulseCell_Inflow_Wait {
    // 0x48
    CPulse_ResumePoint m_WakeResume;
};
struct CFilterProximity {
    // 0x4e0
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
struct CEntityDissolve {
    // 0x730
    float m_flFadeInStart;
    // 0x734
    float m_flFadeInLength;
    // 0x738
    float m_flFadeOutModelStart;
    // 0x73c
    float m_flFadeOutModelLength;
    // 0x740
    float m_flFadeOutStart;
    // 0x744
    float m_flFadeOutLength;
    // 0x748
    GameTime_t m_flStartTime;
    // 0x74c
    EntityDisolveType_t m_nDissolveType;
    // 0x750
    Vector m_vDissolverOrigin;
    // 0x75c
    uint32_t m_nMagnitude;
};
struct CCSGameRules {
    // 0xd8
    bool m_bFreezePeriod;
    // 0xd9
    bool m_bWarmupPeriod;
    // 0xdc
    GameTime_t m_fWarmupPeriodEnd;
    // 0xe0
    GameTime_t m_fWarmupPeriodStart;
    // 0xe4
    bool m_bTerroristTimeOutActive;
    // 0xe5
    bool m_bCTTimeOutActive;
    // 0xe8
    float m_flTerroristTimeOutRemaining;
    // 0xec
    float m_flCTTimeOutRemaining;
    // 0xf0
    int32_t m_nTerroristTimeOuts;
    // 0xf4
    int32_t m_nCTTimeOuts;
    // 0xf8
    bool m_bTechnicalTimeOut;
    // 0xf9
    bool m_bMatchWaitingForResume;
    // 0xfc
    int32_t m_iFreezeTime;
    // 0x100
    int32_t m_iRoundTime;
    // 0x104
    float m_fMatchStartTime;
    // 0x108
    GameTime_t m_fRoundStartTime;
    // 0x10c
    GameTime_t m_flRestartRoundTime;
    // 0x110
    bool m_bGameRestart;
    // 0x114
    float m_flGameStartTime;
    // 0x118
    float m_timeUntilNextPhaseStarts;
    // 0x11c
    int32_t m_gamePhase;
    // 0x120
    int32_t m_totalRoundsPlayed;
    // 0x124
    int32_t m_nRoundsPlayedThisPhase;
    // 0x128
    int32_t m_nOvertimePlaying;
    // 0x12c
    int32_t m_iHostagesRemaining;
    // 0x130
    bool m_bAnyHostageReached;
    // 0x131
    bool m_bMapHasBombTarget;
    // 0x132
    bool m_bMapHasRescueZone;
    // 0x133
    bool m_bMapHasBuyZone;
    // 0x134
    bool m_bIsQueuedMatchmaking;
    // 0x138
    int32_t m_nQueuedMatchmakingMode;
    // 0x13c
    bool m_bIsValveDS;
    // 0x13d
    bool m_bLogoMap;
    // 0x13e
    bool m_bPlayAllStepSoundsOnServer;
    // 0x140
    int32_t m_iSpectatorSlotCount;
    // 0x144
    int32_t m_MatchDevice;
    // 0x148
    bool m_bHasMatchStarted;
    // 0x14c
    int32_t m_nNextMapInMapgroup;
    // 0x150
    char[512] m_szTournamentEventName;
    // 0x350
    char[512] m_szTournamentEventStage;
    // 0x550
    char[512] m_szMatchStatTxt;
    // 0x750
    char[512] m_szTournamentPredictionsTxt;
    // 0x950
    int32_t m_nTournamentPredictionsPct;
    // 0x954
    GameTime_t m_flCMMItemDropRevealStartTime;
    // 0x958
    GameTime_t m_flCMMItemDropRevealEndTime;
    // 0x95c
    bool m_bIsDroppingItems;
    // 0x95d
    bool m_bIsQuestEligible;
    // 0x95e
    bool m_bIsHltvActive;
    // 0x95f
    bool m_bBombPlanted;
    // 0x960
    uint16[100] m_arrProhibitedItemIndices;
    // 0xa28
    uint32[4] m_arrTournamentActiveCasterAccounts;
    // 0xa38
    int32_t m_numBestOfMaps;
    // 0xa3c
    int32_t m_nHalloweenMaskListSeed;
    // 0xa40
    bool m_bBombDropped;
    // 0xa44
    int32_t m_iRoundWinStatus;
    // 0xa48
    int32_t m_eRoundWinReason;
    // 0xa4c
    bool m_bTCantBuy;
    // 0xa4d
    bool m_bCTCantBuy;
    // 0xa50
    int32[30] m_iMatchStats_RoundResults;
    // 0xac8
    int32[30] m_iMatchStats_PlayersAlive_CT;
    // 0xb40
    int32[30] m_iMatchStats_PlayersAlive_T;
    // 0xbb8
    float32[32] m_TeamRespawnWaveTimes;
    // 0xc38
    GameTime_t[32] m_flNextRespawnWave;
    // 0xcb8
    Vector m_vMinimapMins;
    // 0xcc4
    Vector m_vMinimapMaxs;
    // 0xcd0
    float32[8] m_MinimapVerticalSectionHeights;
    // 0xcf0
    uint64_t m_ullLocalMatchID;
    // 0xcf8
    int32[10] m_nEndMatchMapGroupVoteTypes;
    // 0xd20
    int32[10] m_nEndMatchMapGroupVoteOptions;
    // 0xd48
    int32_t m_nEndMatchMapVoteWinner;
    // 0xd4c
    int32_t m_iNumConsecutiveCTLoses;
    // 0xd50
    int32_t m_iNumConsecutiveTerroristLoses;
    // 0xd70
    bool m_bHasHostageBeenTouched;
    // 0xd74
    GameTime_t m_flIntermissionStartTime;
    // 0xd78
    GameTime_t m_flIntermissionEndTime;
    // 0xd7c
    bool m_bLevelInitialized;
    // 0xd80
    int32_t m_iTotalRoundsPlayed;
    // 0xd84
    int32_t m_iUnBalancedRounds;
    // 0xd88
    bool m_endMatchOnRoundReset;
    // 0xd89
    bool m_endMatchOnThink;
    // 0xd8c
    int32_t m_iNumTerrorist;
    // 0xd90
    int32_t m_iNumCT;
    // 0xd94
    int32_t m_iNumSpawnableTerrorist;
    // 0xd98
    int32_t m_iNumSpawnableCT;
    // 0xda0
    CUtlVector<T> m_arrSelectedHostageSpawnIndices;
    // 0xdb8
    int32_t m_nSpawnPointsRandomSeed;
    // 0xdbc
    bool m_bFirstConnected;
    // 0xdbd
    bool m_bCompleteReset;
    // 0xdbe
    bool m_bPickNewTeamsOnReset;
    // 0xdbf
    bool m_bScrambleTeamsOnRestart;
    // 0xdc0
    bool m_bSwapTeamsOnRestart;
    // 0xdc8
    CUtlVector<T> m_nEndMatchTiedVotes;
    // 0xde4
    bool m_bNeedToAskPlayersForContinueVote;
    // 0xde8
    uint32_t m_numQueuedMatchmakingAccounts;
    // 0xdec
    float m_fAvgPlayerRank;
    // 0xdf0
    char* m_pQueuedMatchmakingReservationString;
    // 0xdf8
    uint32_t m_numTotalTournamentDrops;
    // 0xdfc
    uint32_t m_numSpectatorsCountMax;
    // 0xe00
    uint32_t m_numSpectatorsCountMaxTV;
    // 0xe04
    uint32_t m_numSpectatorsCountMaxLnk;
    // 0xe10
    int32_t m_nCTsAliveAtFreezetimeEnd;
    // 0xe14
    int32_t m_nTerroristsAliveAtFreezetimeEnd;
    // 0xe18
    bool m_bForceTeamChangeSilent;
    // 0xe19
    bool m_bLoadingRoundBackupData;
    // 0xe50
    int32_t m_nMatchInfoShowType;
    // 0xe54
    float m_flMatchInfoDecidedTime;
    // 0xe70
    int32_t mTeamDMLastWinningTeamNumber;
    // 0xe74
    float mTeamDMLastThinkTime;
    // 0xe78
    float m_flTeamDMLastAnnouncementTime;
    // 0xe7c
    int32_t m_iAccountTerrorist;
    // 0xe80
    int32_t m_iAccountCT;
    // 0xe84
    int32_t m_iSpawnPointCount_Terrorist;
    // 0xe88
    int32_t m_iSpawnPointCount_CT;
    // 0xe8c
    int32_t m_iMaxNumTerrorists;
    // 0xe90
    int32_t m_iMaxNumCTs;
    // 0xe94
    int32_t m_iLoserBonusMostRecentTeam;
    // 0xe98
    float m_tmNextPeriodicThink;
    // 0xe9c
    bool m_bVoiceWonMatchBragFired;
    // 0xea0
    float m_fWarmupNextChatNoticeTime;
    // 0xea8
    int32_t m_iHostagesRescued;
    // 0xeac
    int32_t m_iHostagesTouched;
    // 0xeb0
    float m_flNextHostageAnnouncement;
    // 0xeb4
    bool m_bNoTerroristsKilled;
    // 0xeb5
    bool m_bNoCTsKilled;
    // 0xeb6
    bool m_bNoEnemiesKilled;
    // 0xeb7
    bool m_bCanDonateWeapons;
    // 0xebc
    float m_firstKillTime;
    // 0xec4
    float m_firstBloodTime;
    // 0xee0
    bool m_hostageWasInjured;
    // 0xee1
    bool m_hostageWasKilled;
    // 0xef0
    bool m_bVoteCalled;
    // 0xef1
    bool m_bServerVoteOnReset;
    // 0xef4
    float m_flVoteCheckThrottle;
    // 0xef8
    bool m_bBuyTimeEnded;
    // 0xefc
    int32_t m_nLastFreezeEndBeep;
    // 0xf00
    bool m_bTargetBombed;
    // 0xf01
    bool m_bBombDefused;
    // 0xf02
    bool m_bMapHasBombZone;
    // 0xf50
    Vector m_vecMainCTSpawnPos;
    // 0xf60
    CUtlVector<T> m_CTSpawnPointsMasterList;
    // 0xf78
    CUtlVector<T> m_TerroristSpawnPointsMasterList;
    // 0xf90
    bool m_bRespawningAllRespawnablePlayers;
    // 0xf94
    int32_t m_iNextCTSpawnPoint;
    // 0xf98
    float m_flCTSpawnPointUsedTime;
    // 0xf9c
    int32_t m_iNextTerroristSpawnPoint;
    // 0xfa0
    float m_flTerroristSpawnPointUsedTime;
    // 0xfa8
    CUtlVector<T> m_CTSpawnPoints;
    // 0xfc0
    CUtlVector<T> m_TerroristSpawnPoints;
    // 0xfd8
    bool m_bIsUnreservedGameServer;
    // 0xfdc
    float m_fAutobalanceDisplayTime;
    // 0x1018
    bool m_bAllowWeaponSwitch;
    // 0x1019
    bool m_bRoundTimeWarningTriggered;
    // 0x101c
    GameTime_t m_phaseChangeAnnouncementTime;
    // 0x1020
    float m_fNextUpdateTeamClanNamesTime;
    // 0x1024
    GameTime_t m_flLastThinkTime;
    // 0x1028
    float m_fAccumulatedRoundOffDamage;
    // 0x102c
    int32_t m_nShorthandedBonusLastEvalRound;
    // 0x1078
    int32_t m_nMatchAbortedEarlyReason;
    // 0x107c
    bool m_bHasTriggeredRoundStartMusic;
    // 0x107d
    bool m_bSwitchingTeamsAtRoundReset;
    // 0x1098
    CCSGameModeRules* m_pGameModeRules;
    // 0x10a0
    KeyValues3 m_BtGlobalBlackboard;
    // 0x1138
    CHandle<T> m_hPlayerResource;
    // 0x1140
    CRetakeGameRules m_RetakeRules;
    // 0x1330
    CUtlVector<T> m_arrTeamUniqueKillWeaponsMatch;
    // 0x1390
    bool[4] m_bTeamLastKillUsedUniqueWeaponMatch;
    // 0x13b8
    uint8_t m_nMatchEndCount;
    // 0x13bc
    int32_t m_nTTeamIntroVariant;
    // 0x13c0
    int32_t m_nCTTeamIntroVariant;
    // 0x13c4
    bool m_bTeamIntroPeriod;
    // 0x13c8
    GameTime_t m_fTeamIntroPeriodEnd;
    // 0x13cc
    bool m_bPlayedTeamIntroVO;
    // 0x13d0
    int32_t m_iRoundEndWinnerTeam;
    // 0x13d4
    int32_t m_eRoundEndReason;
    // 0x13d8
    bool m_bRoundEndShowTimerDefend;
    // 0x13dc
    int32_t m_iRoundEndTimerTime;
    // 0x13e0
    CUtlString m_sRoundEndFunFactToken;
    // 0x13e8
    CPlayerSlot m_iRoundEndFunFactPlayerSlot;
    // 0x13ec
    int32_t m_iRoundEndFunFactData1;
    // 0x13f0
    int32_t m_iRoundEndFunFactData2;
    // 0x13f4
    int32_t m_iRoundEndFunFactData3;
    // 0x13f8
    CUtlString m_sRoundEndMessage;
    // 0x1400
    int32_t m_iRoundEndPlayerCount;
    // 0x1404
    bool m_bRoundEndNoMusic;
    // 0x1408
    int32_t m_iRoundEndLegacy;
    // 0x140c
    uint8_t m_nRoundEndCount;
    // 0x1410
    int32_t m_iRoundStartRoundNumber;
    // 0x1414
    uint8_t m_nRoundStartCount;
    // 0x5420
    double m_flLastPerfSampleTime;
};
struct CPulseCell_Outflow_CycleShuffled {
    // 0x48
    CUtlVector<T> m_Outputs;
};
struct CBaseCSGrenadeProjectile {
    // 0xb40
    Vector m_vInitialPosition;
    // 0xb4c
    Vector m_vInitialVelocity;
    // 0xb58
    int32_t m_nBounces;
    // 0xb60
    CStrongHandle<T> m_nExplodeEffectIndex;
    // 0xb68
    int32_t m_nExplodeEffectTickBegin;
    // 0xb6c
    Vector m_vecExplodeEffectOrigin;
    // 0xb78
    GameTime_t m_flSpawnTime;
    // 0xb7c
    uint8_t m_unOGSExtraFlags;
    // 0xb7d
    bool m_bDetonationRecorded;
    // 0xb7e
    uint16_t m_nItemIndex;
    // 0xb80
    Vector m_vecOriginalSpawnLocation;
    // 0xb8c
    GameTime_t m_flLastBounceSoundTime;
    // 0xb90
    RotationVector m_vecGrenadeSpin;
    // 0xb9c
    Vector m_vecLastHitSurfaceNormal;
    // 0xba8
    int32_t m_nTicksAtZeroVelocity;
    // 0xbac
    bool m_bHasEverHitEnemy;
};
struct CPhysConstraint {
    // 0x4b0
    CUtlSymbolLarge m_nameAttach1;
    // 0x4b8
    CUtlSymbolLarge m_nameAttach2;
    // 0x4c0
    CHandle<T> m_hAttach1;
    // 0x4c4
    CHandle<T> m_hAttach2;
    // 0x4c8
    CUtlSymbolLarge m_nameAttachment1;
    // 0x4d0
    CUtlSymbolLarge m_nameAttachment2;
    // 0x4d8
    CUtlSymbolLarge m_breakSound;
    // 0x4e0
    float m_forceLimit;
    // 0x4e4
    float m_torqueLimit;
    // 0x4e8
    float m_minTeleportDistance;
    // 0x4ec
    bool m_bSnapObjectPositions;
    // 0x4ed
    bool m_bTreatEntity1AsInfiniteMass;
    // 0x4f0
    CEntityIOOutput m_OnBreak;
};
struct CLogicAchievement {
    // 0x4a8
    bool m_bDisabled;
    // 0x4b0
    CUtlSymbolLarge m_iszAchievementEventID;
    // 0x4b8
    CEntityIOOutput m_OnFired;
};
struct CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t {
    // 0x0
    CEconItemView* pItem;
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
    // 0x1b8
    bool m_bPvsModifyEntity;
};
struct CCSWeaponBase {
    // 0xe20
    bool m_bRemoveable;
    // 0xe21
    bool m_bPlayerAmmoStockOnPickup;
    // 0xe22
    bool m_bRequireUseToTouch;
    // 0xe24
    WeaponGameplayAnimState m_iWeaponGameplayAnimState;
    // 0xe28
    GameTime_t m_flWeaponGameplayAnimStateTimestamp;
    // 0xe2c
    GameTime_t m_flInspectCancelCompleteTime;
    // 0xe30
    bool m_bInspectPending;
    // 0xe31
    bool m_bInspectShouldLoop;
    // 0xe5c
    int32_t m_nLastEmptySoundCmdNum;
    // 0xe78
    bool m_bFireOnEmpty;
    // 0xe80
    CEntityIOOutput m_OnPlayerPickup;
    // 0xe98
    CSWeaponMode m_weaponMode;
    // 0xe9c
    float m_flTurningInaccuracyDelta;
    // 0xea0
    Vector m_vecTurningInaccuracyEyeDirLast;
    // 0xeac
    float m_flTurningInaccuracy;
    // 0xeb0
    float m_fAccuracyPenalty;
    // 0xeb4
    GameTime_t m_flLastAccuracyUpdateTime;
    // 0xeb8
    float m_fAccuracySmoothedForZoom;
    // 0xebc
    int32_t m_iRecoilIndex;
    // 0xec0
    float m_flRecoilIndex;
    // 0xec4
    bool m_bBurstMode;
    // 0xec8
    GameTick_t m_nPostponeFireReadyTicks;
    // 0xecc
    float m_flPostponeFireReadyFrac;
    // 0xed0
    bool m_bInReload;
    // 0xed4
    GameTime_t m_flDroppedAtTime;
    // 0xed8
    bool m_bIsHauledBack;
    // 0xed9
    bool m_bSilencerOn;
    // 0xedc
    GameTime_t m_flTimeSilencerSwitchComplete;
    // 0xee0
    float m_flWeaponActionPlaybackRate;
    // 0xee4
    int32_t m_iOriginalTeamNumber;
    // 0xee8
    int32_t m_iMostRecentTeamNumber;
    // 0xeec
    bool m_bDroppedNearBuyZone;
    // 0xef0
    float m_flNextAttackRenderTimeOffset;
    // 0xf08
    bool m_bCanBePickedUp;
    // 0xf09
    bool m_bUseCanOverrideNextOwnerTouchTime;
    // 0xf0c
    GameTime_t m_nextOwnerTouchTime;
    // 0xf10
    GameTime_t m_nextPrevOwnerTouchTime;
    // 0xf18
    GameTime_t m_nextPrevOwnerUseTime;
    // 0xf1c
    CHandle<T> m_hPrevOwner;
    // 0xf20
    GameTick_t m_nDropTick;
    // 0xf24
    bool m_bWasActiveWeaponWhenDropped;
    // 0xf44
    bool m_donated;
    // 0xf48
    GameTime_t m_fLastShotTime;
    // 0xf4c
    bool m_bWasOwnedByCT;
    // 0xf4d
    bool m_bWasOwnedByTerrorist;
    // 0xf50
    int32_t m_numRemoveUnownedWeaponThink;
    // 0xf58
    CIronSightController m_IronSightController;
    // 0xf70
    int32_t m_iIronSightMode;
    // 0xf74
    GameTime_t m_flLastLOSTraceFailureTime;
    // 0xf78
    float m_flWatTickOffset;
    // 0xf88
    GameTime_t m_flLastShakeTime;
};
struct CPointClientUIDialog {
    // 0x890
    CHandle<T> m_hActivator;
    // 0x894
    bool m_bStartEnabled;
};
struct CLogicLineToEntity {
    // 0x4a8
    CEntityOutputTemplate< Vector, Vector > m_Line;
    // 0x4d0
    CUtlSymbolLarge m_SourceName;
    // 0x4d8
    CHandle<T> m_StartEntity;
    // 0x4dc
    CHandle<T> m_EndEntity;
};
struct CSoundAreaEntitySphere {
    // 0x4c8
    float m_flRadius;
};
struct CCSPlayer_ActionTrackingServices {
    // 0x1f8
    CHandle<T> m_hLastWeaponBeforeC4AutoSwitch;
    // 0x224
    bool m_bIsRescuing;
    // 0x228
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch;
    // 0x298
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound;
};
struct CPhysicalButton {
};
struct CInfoSpawnGroupLoadUnload {
    // 0x4a8
    CEntityIOOutput m_OnSpawnGroupLoadStarted;
    // 0x4c0
    CEntityIOOutput m_OnSpawnGroupLoadFinished;
    // 0x4d8
    CEntityIOOutput m_OnSpawnGroupUnloadStarted;
    // 0x4f0
    CEntityIOOutput m_OnSpawnGroupUnloadFinished;
    // 0x508
    CUtlSymbolLarge m_iszSpawnGroupName;
    // 0x510
    CUtlSymbolLarge m_iszSpawnGroupFilterName;
    // 0x518
    CUtlSymbolLarge m_iszLandmarkName;
    // 0x520
    CUtlString m_sFixedSpawnGroupName;
    // 0x528
    float m_flTimeoutInterval;
    // 0x52c
    bool m_bAutoActivate;
    // 0x52d
    bool m_bUnloadingStarted;
    // 0x52e
    bool m_bQueueActiveSpawnGroupChange;
    // 0x52f
    bool m_bQueueFinishLoading;
};
struct CSoundAreaEntityOrientedBox {
    // 0x4c8
    Vector m_vMin;
    // 0x4d4
    Vector m_vMax;
};
struct CCSObserver_MovementServices {
};
struct CPulseCell_Outflow_ListenForAnimgraphTag {
    // 0x48
    CPulse_ResumePoint m_OnStart;
    // 0x90
    CPulse_ResumePoint m_OnEnd;
    // 0xd8
    CPulse_ResumePoint m_OnCanceled;
    // 0x120
    CGlobalSymbol m_TagName;
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
struct CDecoyGrenade {
};
struct CEconItemView {
    // 0x38
    uint16_t m_iItemDefinitionIndex;
    // 0x3c
    int32_t m_iEntityQuality;
    // 0x40
    uint32_t m_iEntityLevel;
    // 0x48
    uint64_t m_iItemID;
    // 0x50
    uint32_t m_iItemIDHigh;
    // 0x54
    uint32_t m_iItemIDLow;
    // 0x58
    uint32_t m_iAccountID;
    // 0x5c
    uint32_t m_iInventoryPosition;
    // 0x68
    bool m_bInitialized;
    // 0x70
    CAttributeList m_AttributeList;
    // 0xe8
    CAttributeList m_NetworkedDynamicAttributes;
    // 0x160
    char[161] m_szCustomName;
    // 0x201
    char[161] m_szCustomNameOverride;
};
struct CIncendiaryGrenade {
};
struct CBaseDMStart {
    // 0x4a8
    CUtlSymbolLarge m_Master;
};
struct CBaseModelEntity {
    // 0x4a8
    CRenderComponent* m_CRenderComponent;
    // 0x4b0
    CHitboxComponent m_CHitboxComponent;
    // 0x4c8
    HitGroup_t m_nDestructiblePartInitialStateDestructed0;
    // 0x4cc
    HitGroup_t m_nDestructiblePartInitialStateDestructed1;
    // 0x4d0
    HitGroup_t m_nDestructiblePartInitialStateDestructed2;
    // 0x4d4
    HitGroup_t m_nDestructiblePartInitialStateDestructed3;
    // 0x4d8
    HitGroup_t m_nDestructiblePartInitialStateDestructed4;
    // 0x4dc
    int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex;
    // 0x4e0
    int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex;
    // 0x4e4
    int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex;
    // 0x4e8
    int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex;
    // 0x4ec
    int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex;
    // 0x4f0
    CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent;
    // 0x4f8
    GameTime_t m_flDissolveStartTime;
    // 0x500
    CEntityIOOutput m_OnIgnite;
    // 0x518
    RenderMode_t m_nRenderMode;
    // 0x519
    RenderFx_t m_nRenderFX;
    // 0x51a
    bool m_bAllowFadeInView;
    // 0x538
    Color m_clrRender;
    // 0x540
    CUtlVector<T> m_vecRenderAttributes;
    // 0x5a8
    bool m_bRenderToCubemaps;
    // 0x5a9
    bool m_bNoInterpolate;
    // 0x5b0
    CCollisionProperty m_Collision;
    // 0x660
    CGlowProperty m_Glow;
    // 0x6b8
    float m_flGlowBackfaceMult;
    // 0x6bc
    float m_fadeMinDist;
    // 0x6c0
    float m_fadeMaxDist;
    // 0x6c4
    float m_flFadeScale;
    // 0x6c8
    float m_flShadowStrength;
    // 0x6cc
    uint8_t m_nObjectCulling;
    // 0x6f8
    CNetworkViewOffsetVector m_vecViewOffset;
    // 0x728
    uint32[1] m_bvDisabledHitGroups;
};
struct fogplayerparams_t {
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
struct CInstancedSceneEntity {
    // 0x730
    CHandle<T> m_hOwner;
    // 0x734
    bool m_bHadOwner;
    // 0x738
    float m_flPostSpeakDelay;
    // 0x73c
    float m_flPreDelay;
    // 0x740
    bool m_bIsBackground;
    // 0x741
    bool m_bRemoveOnCompletion;
    // 0x744
    CHandle<T> m_hTarget;
};
struct CPulseCell_BaseValue {
};
struct CCitadelSoundOpvarSetOBB {
    // 0x4a8
    CUtlSymbolLarge m_iszStackName;
    // 0x4b0
    CUtlSymbolLarge m_iszOperatorName;
    // 0x4b8
    CUtlSymbolLarge m_iszOpvarName;
    // 0x4c0
    Vector m_vDistanceInnerMins;
    // 0x4cc
    Vector m_vDistanceInnerMaxs;
    // 0x4d8
    Vector m_vDistanceOuterMins;
    // 0x4e4
    Vector m_vDistanceOuterMaxs;
    // 0x4f0
    int32_t m_nAABBDirection;
};
struct CSoundEventParameter {
    // 0x4c0
    CUtlSymbolLarge m_iszParamName;
    // 0x4c8
    float m_flFloatValue;
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
struct CRotButton {
};
struct CEnvViewPunch {
    // 0x4a8
    float m_flRadius;
    // 0x4ac
    QAngle m_angViewPunch;
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
struct CItemKevlar {
};
struct CFuncShatterglass {
    // 0x730
    matrix3x4_t m_matPanelTransform;
    // 0x760
    matrix3x4_t m_matPanelTransformWsTemp;
    // 0x790
    CUtlVector<T> m_vecShatterGlassShards;
    // 0x7a8
    Vector2D m_PanelSize;
    // 0x7b0
    GameTime_t m_flLastShatterSoundEmitTime;
    // 0x7b4
    GameTime_t m_flLastCleanupTime;
    // 0x7b8
    GameTime_t m_flInitAtTime;
    // 0x7bc
    float m_flGlassThickness;
    // 0x7c0
    float m_flSpawnInvulnerability;
    // 0x7c4
    bool m_bBreakSilent;
    // 0x7c5
    bool m_bBreakShardless;
    // 0x7c6
    bool m_bBroken;
    // 0x7c7
    bool m_bGlassNavIgnore;
    // 0x7c8
    bool m_bGlassInFrame;
    // 0x7c9
    bool m_bStartBroken;
    // 0x7ca
    uint8_t m_iInitialDamageType;
    // 0x7d0
    CUtlSymbolLarge m_szDamagePositioningEntityName01;
    // 0x7d8
    CUtlSymbolLarge m_szDamagePositioningEntityName02;
    // 0x7e0
    CUtlSymbolLarge m_szDamagePositioningEntityName03;
    // 0x7e8
    CUtlSymbolLarge m_szDamagePositioningEntityName04;
    // 0x7f0
    CUtlVector<T> m_vInitialDamagePositions;
    // 0x808
    CUtlVector<T> m_vExtraDamagePositions;
    // 0x820
    CUtlVector<T> m_vInitialPanelVertices;
    // 0x838
    CEntityIOOutput m_OnBroken;
    // 0x850
    uint8_t m_iSurfaceType;
    // 0x858
    CStrongHandle<T> m_hMaterialDamageBase;
};
struct CNavWalkable {
};
struct CPlantedC4 {
    // 0xa28
    bool m_bBombTicking;
    // 0xa2c
    GameTime_t m_flC4Blow;
    // 0xa30
    int32_t m_nBombSite;
    // 0xa34
    int32_t m_nSourceSoundscapeHash;
    // 0xa38
    bool m_bAbortDetonationBecauseWorldIsFrozen;
    // 0xa40
    CAttributeContainer m_AttributeManager;
    // 0xd38
    CEntityIOOutput m_OnBombDefused;
    // 0xd50
    CEntityIOOutput m_OnBombBeginDefuse;
    // 0xd68
    CEntityIOOutput m_OnBombDefuseAborted;
    // 0xd80
    bool m_bCannotBeDefused;
    // 0xd88
    EntitySpottedState_t m_entitySpottedState;
    // 0xda0
    int32_t m_nSpotRules;
    // 0xda4
    bool m_bHasExploded;
    // 0xda5
    bool m_bBombDefused;
    // 0xda6
    bool m_bTrainingPlacedByPlayer;
    // 0xda8
    float m_flTimerLength;
    // 0xdac
    bool m_bBeingDefused;
    // 0xdb4
    GameTime_t m_fLastDefuseTime;
    // 0xdbc
    float m_flDefuseLength;
    // 0xdc0
    GameTime_t m_flDefuseCountDown;
    // 0xdc4
    CHandle<T> m_hBombDefuser;
    // 0xdc8
    int32_t m_iProgressBarTime;
    // 0xdcc
    bool m_bVoiceAlertFired;
    // 0xdcd
    bool[4] m_bVoiceAlertPlayed;
    // 0xdd4
    GameTime_t m_flNextBotBeepTime;
    // 0xddc
    QAngle m_angCatchUpToPlayerEye;
    // 0xde8
    GameTime_t m_flLastSpinDetectionTime;
};
struct CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
};
struct CVoteController {
    // 0x4a8
    int32_t m_iActiveIssueIndex;
    // 0x4ac
    int32_t m_iOnlyTeamToVote;
    // 0x4b0
    int32[5] m_nVoteOptionCount;
    // 0x4c4
    int32_t m_nPotentialVotes;
    // 0x4c8
    bool m_bIsYesNoVote;
    // 0x4d0
    CountdownTimer m_acceptingVotesTimer;
    // 0x4e8
    CountdownTimer m_executeCommandTimer;
    // 0x500
    CountdownTimer m_resetVoteTimer;
    // 0x518
    int32[64] m_nVotesCast;
    // 0x618
    CPlayerSlot m_playerHoldingVote;
    // 0x61c
    CPlayerSlot m_playerOverrideForVote;
    // 0x620
    int32_t m_nHighestCountIndex;
    // 0x628
    CUtlVector<T> m_potentialIssues;
    // 0x640
    CUtlVector<T> m_VoteOptions;
};
struct CPulseCell_Inflow_Yield {
    // 0x48
    CPulse_ResumePoint m_UnyieldResume;
};
struct CPulseMathlib {
};
struct CPhysImpact {
    // 0x4a8
    float m_damage;
    // 0x4ac
    float m_distance;
    // 0x4b0
    CUtlSymbolLarge m_directionEntityName;
};
struct CBaseEntity {
    // 0x38
    CBodyComponent* m_CBodyComponent;
    // 0x40
    CNetworkTransmitComponent m_NetworkTransmitComponent;
    // 0x250
    CUtlVector<T> m_aThinkFunctions;
    // 0x268
    int32_t m_iCurrentThinkContext;
    // 0x26c
    GameTick_t m_nLastThinkTick;
    // 0x270
    bool m_bDisabledContextThinks;
    // 0x280
    CTypedBitVec< 64 > m_isSteadyState;
    // 0x288
    float m_lastNetworkChange;
    // 0x298
    CUtlVector<T> m_ResponseContexts;
    // 0x2b0
    CUtlSymbolLarge m_iszResponseContext;
    // 0x2d8
    int32_t m_iHealth;
    // 0x2dc
    int32_t m_iMaxHealth;
    // 0x2e0
    uint8_t m_lifeState;
    // 0x2e4
    float m_flDamageAccumulator;
    // 0x2e8
    bool m_bTakesDamage;
    // 0x2f0
    TakeDamageFlags_t m_nTakeDamageFlags;
    // 0x2f8
    EntityPlatformTypes_t m_nPlatformType;
    // 0x2fa
    MoveCollide_t m_MoveCollide;
    // 0x2fb
    MoveType_t m_MoveType;
    // 0x2fc
    MoveType_t m_nActualMoveType;
    // 0x2fd
    uint8_t m_nWaterTouch;
    // 0x2fe
    uint8_t m_nSlimeTouch;
    // 0x2ff
    bool m_bRestoreInHierarchy;
    // 0x300
    CUtlSymbolLarge m_target;
    // 0x308
    CHandle<T> m_hDamageFilter;
    // 0x310
    CUtlSymbolLarge m_iszDamageFilterName;
    // 0x318
    float m_flMoveDoneTime;
    // 0x31c
    CUtlString m_nSubclassID;
    // 0x328
    float m_flAnimTime;
    // 0x32c
    float m_flSimulationTime;
    // 0x330
    GameTime_t m_flCreateTime;
    // 0x334
    bool m_bClientSideRagdoll;
    // 0x335
    uint8_t m_ubInterpolationFrame;
    // 0x338
    Vector m_vPrevVPhysicsUpdatePos;
    // 0x344
    uint8_t m_iTeamNum;
    // 0x348
    CUtlSymbolLarge m_iGlobalname;
    // 0x350
    int32_t m_iSentToClients;
    // 0x354
    float m_flSpeed;
    // 0x358
    CUtlString m_sUniqueHammerID;
    // 0x360
    uint32_t m_spawnflags;
    // 0x364
    GameTick_t m_nNextThinkTick;
    // 0x368
    int32_t m_nSimulationTick;
    // 0x370
    CEntityIOOutput m_OnKilled;
    // 0x388
    uint32_t m_fFlags;
    // 0x38c
    Vector m_vecAbsVelocity;
    // 0x398
    CNetworkVelocityVector m_vecVelocity;
    // 0x3c8
    Vector m_vecBaseVelocity;
    // 0x3d4
    int32_t m_nPushEnumCount;
    // 0x3d8
    CCollisionProperty* m_pCollision;
    // 0x3e0
    CHandle<T> m_hEffectEntity;
    // 0x3e4
    CHandle<T> m_hOwnerEntity;
    // 0x3e8
    uint32_t m_fEffects;
    // 0x3ec
    CHandle<T> m_hGroundEntity;
    // 0x3f0
    int32_t m_nGroundBodyIndex;
    // 0x3f4
    float m_flFriction;
    // 0x3f8
    float m_flElasticity;
    // 0x3fc
    float m_flGravityScale;
    // 0x400
    float m_flTimeScale;
    // 0x404
    float m_flWaterLevel;
    // 0x408
    bool m_bGravityDisabled;
    // 0x409
    bool m_bAnimatedEveryTick;
    // 0x40c
    float m_flActualGravityScale;
    // 0x410
    bool m_bGravityActuallyDisabled;
    // 0x411
    bool m_bDisableLowViolence;
    // 0x412
    uint8_t m_nWaterType;
    // 0x414
    int32_t m_iEFlags;
    // 0x418
    CEntityIOOutput m_OnUser1;
    // 0x430
    CEntityIOOutput m_OnUser2;
    // 0x448
    CEntityIOOutput m_OnUser3;
    // 0x460
    CEntityIOOutput m_OnUser4;
    // 0x478
    int32_t m_iInitialTeamNum;
    // 0x47c
    GameTime_t m_flNavIgnoreUntilTime;
    // 0x480
    QAngle m_vecAngVelocity;
    // 0x48c
    bool m_bNetworkQuantizeOriginAndAngles;
    // 0x48d
    bool m_bLagCompensate;
    // 0x490
    CHandle<T> m_pBlocker;
    // 0x494
    float m_flLocalTime;
    // 0x498
    float m_flVPhysicsUpdateLocalTime;
    // 0x49c
    BloodType m_nBloodType;
    // 0x4a0
    CPulseGraphInstance_ServerEntity* m_pPulseGraphInstance;
};
struct CPlayer_UseServices {
};
struct CGameSceneNodeHandle {
    // 0x8
    CEntityHandle m_hOwner;
    // 0xc
    CUtlString m_name;
};
struct CMarkupVolumeWithRef {
    // 0x778
    bool m_bUseRef;
    // 0x77c
    Vector m_vRefPosEntitySpace;
    // 0x788
    VectorWS m_vRefPosWorldSpace;
    // 0x794
    float m_flRefDot;
};
struct CCSGO_TeamSelectCharacterPosition {
};
struct CPulseCell_Unknown {
    // 0x48
    KeyValues3 m_UnknownKeys;
};
struct CFuncPlatRot {
    // 0x7e0
    QAngle m_end;
    // 0x7ec
    QAngle m_start;
};
struct CRagdollMagnet {
    // 0x4a8
    bool m_bDisabled;
    // 0x4ac
    float m_radius;
    // 0x4b0
    float m_force;
    // 0x4b4
    VectorWS m_axis;
};
struct CInfoInstructorHintTarget {
};
struct CSpriteAlias_env_glow {
};
struct CFireCrackerBlast {
};
struct CSpotlightEnd {
    // 0x730
    float m_flLightScale;
    // 0x734
    float m_Radius;
    // 0x738
    Vector m_vSpotlightDir;
    // 0x744
    VectorWS m_vSpotlightOrg;
};
struct CEnvSky {
    // 0x730
    CStrongHandle<T> m_hSkyMaterial;
    // 0x738
    CStrongHandle<T> m_hSkyMaterialLightingOnly;
    // 0x740
    bool m_bStartDisabled;
    // 0x741
    Color m_vTintColor;
    // 0x745
    Color m_vTintColorLightingOnly;
    // 0x74c
    float m_flBrightnessScale;
    // 0x750
    int32_t m_nFogType;
    // 0x754
    float m_flFogMinStart;
    // 0x758
    float m_flFogMinEnd;
    // 0x75c
    float m_flFogMaxStart;
    // 0x760
    float m_flFogMaxEnd;
    // 0x764
    bool m_bEnabled;
};
struct CInfoSpawnGroupLandmark {
};
struct CPointAngleSensor {
    // 0x4a8
    bool m_bDisabled;
    // 0x4b0
    CUtlSymbolLarge m_nLookAtName;
    // 0x4b8
    CHandle<T> m_hTargetEntity;
    // 0x4bc
    CHandle<T> m_hLookAtEntity;
    // 0x4c0
    float m_flDuration;
    // 0x4c4
    float m_flDotTolerance;
    // 0x4c8
    GameTime_t m_flFacingTime;
    // 0x4cc
    bool m_bFired;
    // 0x4d0
    CEntityIOOutput m_OnFacingLookat;
    // 0x4e8
    CEntityIOOutput m_OnNotFacingLookat;
    // 0x500
    CEntityOutputTemplate< Vector, Vector > m_TargetDir;
    // 0x528
    CEntityOutputTemplate< float32, float32 > m_FacingPercentage;
};
struct CEnvWindController {
    // 0x4a8
    CEnvWindShared m_EnvWindShared;
    // 0x5d8
    float m_fDirectionVariation;
    // 0x5dc
    float m_fSpeedVariation;
    // 0x5e0
    float m_fTurbulence;
    // 0x5e4
    float m_fVolumeHalfExtentXY;
    // 0x5e8
    float m_fVolumeHalfExtentZ;
    // 0x5ec
    int32_t m_nVolumeResolutionXY;
    // 0x5f0
    int32_t m_nVolumeResolutionZ;
    // 0x5f4
    int32_t m_nClipmapLevels;
    // 0x5f8
    bool m_bIsMaster;
    // 0x5f9
    bool m_bFirstTime;
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
struct CGenericConstraint {
    // 0x510
    JointMotion_t m_nLinearMotionX;
    // 0x514
    JointMotion_t m_nLinearMotionY;
    // 0x518
    JointMotion_t m_nLinearMotionZ;
    // 0x51c
    float m_flLinearFrequencyX;
    // 0x520
    float m_flLinearFrequencyY;
    // 0x524
    float m_flLinearFrequencyZ;
    // 0x528
    float m_flLinearDampingRatioX;
    // 0x52c
    float m_flLinearDampingRatioY;
    // 0x530
    float m_flLinearDampingRatioZ;
    // 0x534
    float m_flMaxLinearImpulseX;
    // 0x538
    float m_flMaxLinearImpulseY;
    // 0x53c
    float m_flMaxLinearImpulseZ;
    // 0x540
    float m_flBreakAfterTimeX;
    // 0x544
    float m_flBreakAfterTimeY;
    // 0x548
    float m_flBreakAfterTimeZ;
    // 0x54c
    GameTime_t m_flBreakAfterTimeStartTimeX;
    // 0x550
    GameTime_t m_flBreakAfterTimeStartTimeY;
    // 0x554
    GameTime_t m_flBreakAfterTimeStartTimeZ;
    // 0x558
    float m_flBreakAfterTimeThresholdX;
    // 0x55c
    float m_flBreakAfterTimeThresholdY;
    // 0x560
    float m_flBreakAfterTimeThresholdZ;
    // 0x564
    float m_flNotifyForceX;
    // 0x568
    float m_flNotifyForceY;
    // 0x56c
    float m_flNotifyForceZ;
    // 0x570
    float m_flNotifyForceMinTimeX;
    // 0x574
    float m_flNotifyForceMinTimeY;
    // 0x578
    float m_flNotifyForceMinTimeZ;
    // 0x57c
    GameTime_t m_flNotifyForceLastTimeX;
    // 0x580
    GameTime_t m_flNotifyForceLastTimeY;
    // 0x584
    GameTime_t m_flNotifyForceLastTimeZ;
    // 0x588
    bool m_bAxisNotifiedX;
    // 0x589
    bool m_bAxisNotifiedY;
    // 0x58a
    bool m_bAxisNotifiedZ;
    // 0x58c
    JointMotion_t m_nAngularMotionX;
    // 0x590
    JointMotion_t m_nAngularMotionY;
    // 0x594
    JointMotion_t m_nAngularMotionZ;
    // 0x598
    float m_flAngularFrequencyX;
    // 0x59c
    float m_flAngularFrequencyY;
    // 0x5a0
    float m_flAngularFrequencyZ;
    // 0x5a4
    float m_flAngularDampingRatioX;
    // 0x5a8
    float m_flAngularDampingRatioY;
    // 0x5ac
    float m_flAngularDampingRatioZ;
    // 0x5b0
    float m_flMaxAngularImpulseX;
    // 0x5b4
    float m_flMaxAngularImpulseY;
    // 0x5b8
    float m_flMaxAngularImpulseZ;
    // 0x5c0
    CEntityIOOutput m_NotifyForceReachedX;
    // 0x5d8
    CEntityIOOutput m_NotifyForceReachedY;
    // 0x5f0
    CEntityIOOutput m_NotifyForceReachedZ;
};
struct CPulseCell_Outflow_CycleRandom {
    // 0x48
    CUtlVector<T> m_Outputs;
};
struct CPulseCell_Step_PublicOutput {
    // 0x48
    PulseRuntimeOutputIndex_t m_OutputIndex;
};
struct CEnvLaser {
    // 0x7d0
    CUtlSymbolLarge m_iszLaserTarget;
    // 0x7d8
    CSprite* m_pSprite;
    // 0x7e0
    CUtlSymbolLarge m_iszSpriteName;
    // 0x7e8
    Vector m_firePosition;
    // 0x7f4
    float m_flStartFrame;
};
struct CSoundOpvarSetEntity {
    // 0x4c0
    CUtlSymbolLarge m_iszStackName;
    // 0x4c8
    CUtlSymbolLarge m_iszOperatorName;
    // 0x4d0
    CUtlSymbolLarge m_iszOpvarName;
    // 0x4d8
    int32_t m_nOpvarType;
    // 0x4dc
    int32_t m_nOpvarIndex;
    // 0x4e0
    float m_flOpvarValue;
    // 0x4e8
    CUtlSymbolLarge m_OpvarValueString;
    // 0x4f0
    bool m_bSetOnSpawn;
};
struct CEnvBeverage {
    // 0x4a8
    bool m_CanInDispenser;
    // 0x4ac
    int32_t m_nBeverageType;
};
struct CPhysMotor {
    // 0x4a8
    CUtlSymbolLarge m_nameAttach;
    // 0x4b0
    CUtlSymbolLarge m_nameAnchor;
    // 0x4b8
    CHandle<T> m_hAttachedObject;
    // 0x4bc
    CHandle<T> m_hAnchorObject;
    // 0x4c0
    float m_spinUp;
    // 0x4c4
    float m_spinDown;
    // 0x4c8
    float m_flMotorFriction;
    // 0x4cc
    float m_additionalAcceleration;
    // 0x4d0
    float m_angularAcceleration;
    // 0x4d4
    float m_flTorqueScale;
    // 0x4d8
    float m_flTargetSpeed;
    // 0x4dc
    float m_flSpeedWhenSpinUpOrSpinDownStarted;
    // 0x4f0
    CMotorController m_motor;
};
struct CLogicGameEvent {
    // 0x4a8
    CUtlSymbolLarge m_iszEventName;
};
struct CPhysicsPropMultiplayer {
};
struct CPhysExplosion {
    // 0x4a8
    bool m_bExplodeOnSpawn;
    // 0x4ac
    float m_flMagnitude;
    // 0x4b0
    float m_flDamage;
    // 0x4b4
    float m_radius;
    // 0x4b8
    CUtlSymbolLarge m_targetEntityName;
    // 0x4c0
    float m_flInnerRadius;
    // 0x4c4
    float m_flPushScale;
    // 0x4c8
    bool m_bConvertToDebrisWhenPossible;
    // 0x4c9
    bool m_bAffectInvulnerableEnts;
    // 0x4d0
    CEntityIOOutput m_OnPushedPlayer;
};
struct CSplineConstraint {
    // 0x558
    Vector m_vAnchorOffsetRestore;
    // 0x564
    CHandle<T> m_hSplineEntity;
    // 0x570
    bool m_bEnableLateralConstraint;
    // 0x571
    bool m_bEnableVerticalConstraint;
    // 0x572
    bool m_bEnableAngularConstraint;
    // 0x573
    bool m_bEnableLimit;
    // 0x574
    bool m_bFireEventsOnPath;
    // 0x578
    float m_flLinearFrequency;
    // 0x57c
    float m_flLinarDampingRatio;
    // 0x580
    float m_flJointFriction;
    // 0x584
    float m_flTransitionTime;
    // 0x598
    VectorWS m_vPreSolveAnchorPos;
    // 0x5a4
    GameTime_t m_StartTransitionTime;
    // 0x5a8
    Vector m_vTangentSpaceAnchorAtTransitionStart;
};
struct CLogicCompare {
    // 0x4a8
    float m_flInValue;
    // 0x4ac
    float m_flCompareValue;
    // 0x4b0
    CEntityOutputTemplate< float32, float32 > m_OnLessThan;
    // 0x4d0
    CEntityOutputTemplate< float32, float32 > m_OnEqualTo;
    // 0x4f0
    CEntityOutputTemplate< float32, float32 > m_OnNotEqualTo;
    // 0x510
    CEntityOutputTemplate< float32, float32 > m_OnGreaterThan;
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
struct CFuncTankTrain {
    // 0x858
    CEntityIOOutput m_OnDeath;
};
struct CPointClientUIWorldPanel {
    // 0x890
    bool m_bIgnoreInput;
    // 0x891
    bool m_bLit;
    // 0x892
    bool m_bFollowPlayerAcrossTeleport;
    // 0x894
    float m_flWidth;
    // 0x898
    float m_flHeight;
    // 0x89c
    float m_flDPI;
    // 0x8a0
    float m_flInteractDistance;
    // 0x8a4
    float m_flDepthOffset;
    // 0x8a8
    uint32_t m_unOwnerContext;
    // 0x8ac
    uint32_t m_unHorizontalAlign;
    // 0x8b0
    uint32_t m_unVerticalAlign;
    // 0x8b4
    uint32_t m_unOrientation;
    // 0x8b8
    bool m_bAllowInteractionFromAllSceneWorlds;
    // 0x8c0
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses;
    // 0x8d8
    bool m_bOpaque;
    // 0x8d9
    bool m_bNoDepth;
    // 0x8da
    bool m_bVisibleWhenParentNoDraw;
    // 0x8db
    bool m_bRenderBackface;
    // 0x8dc
    bool m_bUseOffScreenIndicator;
    // 0x8dd
    bool m_bExcludeFromSaveGames;
    // 0x8de
    bool m_bGrabbable;
    // 0x8df
    bool m_bOnlyRenderToTexture;
    // 0x8e0
    bool m_bDisableMipGen;
    // 0x8e4
    int32_t m_nExplicitImageLayout;
};
struct CSoundEventSphereEntity {
    // 0x558
    float m_flRadius;
};
struct CCSPlayerController_InGameMoneyServices {
    // 0x40
    bool m_bReceivesMoneyNextRound;
    // 0x44
    int32_t m_iMoneyEarnedForNextRound;
    // 0x48
    int32_t m_iAccount;
    // 0x4c
    int32_t m_iStartAccount;
    // 0x50
    int32_t m_iTotalCashSpent;
    // 0x54
    int32_t m_iCashSpentThisRound;
};
struct CRuleBrushEntity {
};
struct CMapVetoPickController {
    // 0x4a8
    bool m_bPlayedIntroVcd;
    // 0x4a9
    bool m_bNeedToPlayFiveSecondsRemaining;
    // 0x4c8
    double m_dblPreMatchDraftSequenceTime;
    // 0x4d0
    bool m_bPreMatchDraftStateChanged;
    // 0x4d4
    int32_t m_nDraftType;
    // 0x4d8
    int32_t m_nTeamWinningCoinToss;
    // 0x4dc
    int32[64] m_nTeamWithFirstChoice;
    // 0x5dc
    int32[7] m_nVoteMapIdsList;
    // 0x5f8
    int32[64] m_nAccountIDs;
    // 0x6f8
    int32[64] m_nMapId0;
    // 0x7f8
    int32[64] m_nMapId1;
    // 0x8f8
    int32[64] m_nMapId2;
    // 0x9f8
    int32[64] m_nMapId3;
    // 0xaf8
    int32[64] m_nMapId4;
    // 0xbf8
    int32[64] m_nMapId5;
    // 0xcf8
    int32[64] m_nStartingSide0;
    // 0xdf8
    int32_t m_nCurrentPhase;
    // 0xdfc
    int32_t m_nPhaseStartTick;
    // 0xe00
    int32_t m_nPhaseDurationTicks;
    // 0xe08
    CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnMapVetoed;
    // 0xe28
    CEntityOutputTemplate< CUtlSymbolLarge, CUtlSymbolLarge > m_OnMapPicked;
    // 0xe48
    CEntityOutputTemplate< int32, int32 > m_OnSidesPicked;
    // 0xe68
    CEntityOutputTemplate< int32, int32 > m_OnNewPhaseStarted;
    // 0xe88
    CEntityOutputTemplate< int32, int32 > m_OnLevelTransition;
};
struct CAnimGraphNetworkedVariables {
    // 0x8
    CNetworkUtlVectorBase< uint32 > m_PredNetBoolVariables;
    // 0x20
    CNetworkUtlVectorBase< uint8 > m_PredNetByteVariables;
    // 0x38
    CNetworkUtlVectorBase< uint16 > m_PredNetUInt16Variables;
    // 0x50
    CNetworkUtlVectorBase< int32 > m_PredNetIntVariables;
    // 0x68
    CNetworkUtlVectorBase< uint32 > m_PredNetUInt32Variables;
    // 0x80
    CNetworkUtlVectorBase< uint64 > m_PredNetUInt64Variables;
    // 0x98
    CNetworkUtlVectorBase< float32 > m_PredNetFloatVariables;
    // 0xb0
    CNetworkUtlVectorBase< Vector > m_PredNetVectorVariables;
    // 0xc8
    CNetworkUtlVectorBase< Quaternion > m_PredNetQuaternionVariables;
    // 0xe0
    CNetworkUtlVectorBase< CGlobalSymbol > m_PredNetGlobalSymbolVariables;
    // 0xf8
    CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetBoolVariables;
    // 0x110
    CNetworkUtlVectorBase< uint8 > m_OwnerOnlyPredNetByteVariables;
    // 0x128
    CNetworkUtlVectorBase< uint16 > m_OwnerOnlyPredNetUInt16Variables;
    // 0x140
    CNetworkUtlVectorBase< int32 > m_OwnerOnlyPredNetIntVariables;
    // 0x158
    CNetworkUtlVectorBase< uint32 > m_OwnerOnlyPredNetUInt32Variables;
    // 0x170
    CNetworkUtlVectorBase< uint64 > m_OwnerOnlyPredNetUInt64Variables;
    // 0x188
    CNetworkUtlVectorBase< float32 > m_OwnerOnlyPredNetFloatVariables;
    // 0x1a0
    CNetworkUtlVectorBase< Vector > m_OwnerOnlyPredNetVectorVariables;
    // 0x1b8
    CNetworkUtlVectorBase< Quaternion > m_OwnerOnlyPredNetQuaternionVariables;
    // 0x1d0
    CNetworkUtlVectorBase< CGlobalSymbol > m_OwnerOnlyPredNetGlobalSymbolVariables;
    // 0x1e8
    int32_t m_nBoolVariablesCount;
    // 0x1ec
    int32_t m_nOwnerOnlyBoolVariablesCount;
    // 0x1f0
    int32_t m_nRandomSeedOffset;
    // 0x1f4
    float m_flLastTeleportTime;
};
struct CFuncPropRespawnZone {
};
struct CFilterModel {
    // 0x4e0
    CUtlSymbolLarge m_iFilterModel;
};
struct CWeaponP90 {
};
struct CNavSpaceInfo {
};
struct CPhysSlideConstraint {
    // 0x510
    VectorWS m_axisEnd;
    // 0x51c
    float m_slideFriction;
    // 0x520
    float m_systemLoadScale;
    // 0x524
    float m_initialOffset;
    // 0x528
    bool m_bEnableLinearConstraint;
    // 0x529
    bool m_bEnableAngularConstraint;
    // 0x52c
    float m_flMotorFrequency;
    // 0x530
    float m_flMotorDampingRatio;
    // 0x534
    bool m_bUseEntityPivot;
    // 0x538
    ConstraintSoundInfo m_soundInfo;
};
struct CPulseGameBlackboard {
    // 0x4b0
    CUtlString m_strGraphName;
    // 0x4b8
    CUtlString m_strStateBlob;
};
struct CSoundEventEntityAlias_snd_event_point {
};
struct CPulseCell_Value_RandomInt {
};
struct CPointGamestatsCounter {
    // 0x4a8
    CUtlSymbolLarge m_strStatisticName;
    // 0x4b0
    bool m_bDisabled;
};
struct CTextureBasedAnimatable {
    // 0x730
    bool m_bLoop;
    // 0x734
    float m_flFPS;
    // 0x738
    CStrongHandle<T> m_hPositionKeys;
    // 0x740
    CStrongHandle<T> m_hRotationKeys;
    // 0x748
    Vector m_vAnimationBoundsMin;
    // 0x754
    Vector m_vAnimationBoundsMax;
    // 0x760
    float m_flStartTime;
    // 0x764
    float m_flStartFrame;
};
struct CSprite {
    // 0x730
    CStrongHandle<T> m_hSpriteMaterial;
    // 0x738
    CHandle<T> m_hAttachedToEntity;
    // 0x73c
    AttachmentHandle_t m_nAttachment;
    // 0x740
    float m_flSpriteFramerate;
    // 0x744
    float m_flFrame;
    // 0x748
    GameTime_t m_flDieTime;
    // 0x758
    uint32_t m_nBrightness;
    // 0x75c
    float m_flBrightnessDuration;
    // 0x760
    float m_flSpriteScale;
    // 0x764
    float m_flScaleDuration;
    // 0x768
    bool m_bWorldSpaceScale;
    // 0x76c
    float m_flGlowProxySize;
    // 0x770
    float m_flHDRColorScale;
    // 0x774
    GameTime_t m_flLastTime;
    // 0x778
    float m_flMaxFrame;
    // 0x77c
    float m_flStartScale;
    // 0x780
    float m_flDestScale;
    // 0x784
    GameTime_t m_flScaleTimeStart;
    // 0x788
    int32_t m_nStartBrightness;
    // 0x78c
    int32_t m_nDestBrightness;
    // 0x790
    GameTime_t m_flBrightnessTimeStart;
    // 0x794
    int32_t m_nSpriteWidth;
    // 0x798
    int32_t m_nSpriteHeight;
};
struct CBaseMoveBehavior {
    // 0x500
    int32_t m_iPositionInterpolator;
    // 0x504
    int32_t m_iRotationInterpolator;
    // 0x508
    float m_flAnimStartTime;
    // 0x50c
    float m_flAnimEndTime;
    // 0x510
    float m_flAverageSpeedAcrossFrame;
    // 0x518
    CPathKeyFrame* m_pCurrentKeyFrame;
    // 0x520
    CPathKeyFrame* m_pTargetKeyFrame;
    // 0x528
    CPathKeyFrame* m_pPreKeyFrame;
    // 0x530
    CPathKeyFrame* m_pPostKeyFrame;
    // 0x538
    float m_flTimeIntoFrame;
    // 0x53c
    int32_t m_iDirection;
};
struct CDynamicLight {
    // 0x730
    uint8_t m_ActualFlags;
    // 0x731
    uint8_t m_Flags;
    // 0x732
    uint8_t m_LightStyle;
    // 0x733
    bool m_On;
    // 0x734
    float m_Radius;
    // 0x738
    int32_t m_Exponent;
    // 0x73c
    float m_InnerAngle;
    // 0x740
    float m_OuterAngle;
    // 0x744
    float m_SpotRadius;
};
struct CWeaponTaser {
    // 0x1150
    GameTime_t m_fFireTime;
    // 0x1154
    int32_t m_nLastAttackTick;
};
struct CEnvCubemapBox {
};
struct CRotDoor {
    // 0x930
    bool m_bSolidBsp;
};
struct CPathMover {
    // 0x5f0
    CUtlVector<T> m_vecMovers;
    // 0x608
    CHandle<T> m_hMoverSpawner;
    // 0x610
    CUtlSymbolLarge m_iszMoverSpawnerName;
};
struct CFuncVPhysicsClip {
    // 0x730
    bool m_bDisabled;
};
struct CPhysFixed {
    // 0x508
    float m_flLinearFrequency;
    // 0x50c
    float m_flLinearDampingRatio;
    // 0x510
    float m_flAngularFrequency;
    // 0x514
    float m_flAngularDampingRatio;
    // 0x518
    bool m_bEnableLinearConstraint;
    // 0x519
    bool m_bEnableAngularConstraint;
    // 0x520
    CUtlSymbolLarge m_sBoneName1;
    // 0x528
    CUtlSymbolLarge m_sBoneName2;
};
struct CLogicNavigation {
    // 0x4b0
    bool m_isOn;
    // 0x4b4
    navproperties_t m_navProperty;
};
struct CPathSimple {
    // 0x4b0
    CPathQueryComponent m_CPathQueryComponent;
    // 0x5a0
    CUtlString m_pathString;
    // 0x5a8
    bool m_bClosedLoop;
};
struct CPathParticleRopeAlias_path_particle_rope_clientside {
};
struct CCSPointPulseAPI {
};
struct CEnvWindVolume {
    // 0x4a8
    bool m_bActive;
    // 0x4ac
    Vector m_vBoxMins;
    // 0x4b8
    Vector m_vBoxMaxs;
    // 0x4c4
    bool m_bStartDisabled;
    // 0x4c8
    int32_t m_nShape;
    // 0x4cc
    float m_fWindSpeedMultiplier;
    // 0x4d0
    float m_fWindTurbulenceMultiplier;
    // 0x4d4
    float m_fWindSpeedVariationMultiplier;
    // 0x4d8
    float m_fWindDirectionVariationMultiplier;
};
struct CFuncElectrifiedVolume {
    // 0x750
    CUtlSymbolLarge m_EffectName;
    // 0x758
    CUtlSymbolLarge m_EffectInterpenetrateName;
    // 0x760
    CUtlSymbolLarge m_EffectZapName;
    // 0x768
    CUtlSymbolLarge m_iszEffectSource;
};
struct CCSMinimapBoundary {
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
struct CSoundEventOBBEntity {
    // 0x558
    Vector m_vMins;
    // 0x564
    Vector m_vMaxs;
};
struct CFlashbangProjectile {
    // 0xbb0
    float m_flTimeToDetonate;
    // 0xbb4
    uint8_t m_numOpponentsHit;
    // 0xbb5
    uint8_t m_numTeammatesHit;
};
struct CTriggerMultiple {
    // 0x890
    CEntityIOOutput m_OnTrigger;
};
struct CPhysBallSocket {
    // 0x508
    float m_flJointFriction;
    // 0x50c
    bool m_bEnableSwingLimit;
    // 0x510
    float m_flSwingLimit;
    // 0x514
    bool m_bEnableTwistLimit;
    // 0x518
    float m_flMinTwistAngle;
    // 0x51c
    float m_flMaxTwistAngle;
};
struct CDebugHistory {
    // 0x3e84e8
    int32_t m_nNpcEvents;
};
struct CSoundOpvarSetPointBase {
    // 0x4a8
    bool m_bDisabled;
    // 0x4ac
    CEntityHandle m_hSource;
    // 0x4c8
    CUtlSymbolLarge m_iszSourceEntityName;
    // 0x520
    Vector m_vLastPosition;
    // 0x52c
    float m_flRefreshTime;
    // 0x530
    CUtlSymbolLarge m_iszStackName;
    // 0x538
    CUtlSymbolLarge m_iszOperatorName;
    // 0x540
    CUtlSymbolLarge m_iszOpvarName;
    // 0x548
    int32_t m_iOpvarIndex;
    // 0x54c
    bool m_bUseAutoCompare;
    // 0x54d
    bool m_bFastRefresh;
};
struct CPathKeyFrame {
    // 0x4a8
    Vector m_Origin;
    // 0x4b4
    QAngle m_Angles;
    // 0x4c0
    Quaternion m_qAngle;
    // 0x4d0
    CUtlSymbolLarge m_iNextKey;
    // 0x4d8
    float m_flNextTime;
    // 0x4e0
    CPathKeyFrame* m_pNextKey;
    // 0x4e8
    CPathKeyFrame* m_pPrevKey;
    // 0x4f0
    float m_flMoveSpeed;
};
struct CWeaponCZ75a {
    // 0x1150
    bool m_bMagazineRemoved;
};
struct CScriptTriggerPush {
    // 0x8c8
    Vector m_vExtent;
};
struct CRevertSaved {
    // 0x730
    float m_loadTime;
    // 0x734
    float m_Duration;
    // 0x738
    float m_HoldTime;
};
struct CTriggerBombReset {
};
struct CTriggerHurt {
    // 0x890
    float m_flOriginalDamage;
    // 0x894
    float m_flDamage;
    // 0x898
    float m_flDamageCap;
    // 0x89c
    GameTime_t m_flLastDmgTime;
    // 0x8a0
    float m_flForgivenessDelay;
    // 0x8a4
    DamageTypes_t m_bitsDamageInflict;
    // 0x8a8
    int32_t m_damageModel;
    // 0x8ac
    bool m_bNoDmgForce;
    // 0x8b0
    Vector m_vDamageForce;
    // 0x8bc
    bool m_thinkAlways;
    // 0x8c0
    float m_hurtThinkPeriod;
    // 0x8c8
    CEntityIOOutput m_OnHurt;
    // 0x8e0
    CEntityIOOutput m_OnHurtPlayer;
    // 0x8f8
    CUtlVector<T> m_hurtEntities;
};
struct CCSPlayer_WeaponServices {
    // 0xc0
    GameTime_t m_flNextAttack;
    // 0xc4
    bool m_bIsLookingAtWeapon;
    // 0xc5
    bool m_bIsHoldingLookAtWeapon;
    // 0xc8
    CHandle<T> m_hSavedWeapon;
    // 0xcc
    int32_t m_nTimeToMelee;
    // 0xd0
    int32_t m_nTimeToSecondary;
    // 0xd4
    int32_t m_nTimeToPrimary;
    // 0xd8
    int32_t m_nTimeToSniperRifle;
    // 0xdc
    bool m_bIsBeingGivenItem;
    // 0xdd
    bool m_bIsPickingUpItemWithUse;
    // 0xde
    bool m_bPickedUpWeapon;
    // 0xdf
    bool m_bDisableAutoDeploy;
    // 0xe0
    bool m_bIsPickingUpGroundWeapon;
    // 0x18b8
    CNetworkUtlVectorBase< uint8 > m_networkAnimTiming;
    // 0x18d0
    bool m_bBlockInspectUntilNextGraphUpdate;
};
struct CRetakeGameRules {
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
struct CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
};
struct CInfoInstructorHintBombTargetA {
};
struct CTeamplayRules {
};
struct CScriptTriggerHurt {
    // 0x910
    Vector m_vExtent;
};
struct CCSGO_WingmanIntroCharacterPosition {
};
struct CWeaponMP9 {
};
struct CTriggerDetectExplosion {
    // 0x8b8
    CEntityIOOutput m_OnDetectedExplosion;
};
struct CFilterName {
    // 0x4e0
    CUtlSymbolLarge m_iFilterName;
};
struct CSmokeGrenadeProjectile {
    // 0xbd8
    int32_t m_nSmokeEffectTickBegin;
    // 0xbdc
    bool m_bDidSmokeEffect;
    // 0xbe0
    int32_t m_nRandomSeed;
    // 0xbe4
    Vector m_vSmokeColor;
    // 0xbf0
    Vector m_vSmokeDetonationPos;
    // 0xc00
    CNetworkUtlVectorBase< uint8 > m_VoxelFrameData;
    // 0xc18
    int32_t m_nVoxelFrameDataSize;
    // 0xc1c
    int32_t m_nVoxelUpdate;
    // 0xc20
    GameTime_t m_flLastBounce;
    // 0xc24
    GameTime_t m_fllastSimulationTime;
    // 0x2ea8
    bool m_bExplodeFromInferno;
    // 0x2ea9
    bool m_bDidGroundScorch;
};
struct CBlood {
    // 0x4a8
    QAngle m_vecSprayAngles;
    // 0x4b4
    Vector m_vecSprayDir;
    // 0x4c0
    float m_flAmount;
    // 0x4c4
    BloodType m_Color;
};
struct CCSTeam {
    // 0x560
    int32_t m_nLastRecievedShorthandedRoundBonus;
    // 0x564
    int32_t m_nShorthandedRoundBonusStartRound;
    // 0x568
    bool m_bSurrendered;
    // 0x569
    char[512] m_szTeamMatchStat;
    // 0x76c
    int32_t m_numMapVictories;
    // 0x770
    int32_t m_scoreFirstHalf;
    // 0x774
    int32_t m_scoreSecondHalf;
    // 0x778
    int32_t m_scoreOvertime;
    // 0x77c
    char[129] m_szClanTeamname;
    // 0x800
    uint32_t m_iClanID;
    // 0x804
    char[8] m_szTeamFlagImage;
    // 0x80c
    char[8] m_szTeamLogoImage;
    // 0x814
    float m_flNextResourceTime;
    // 0x818
    int32_t m_iLastUpdateSentAt;
};
struct CRulePointEntity {
    // 0x738
    int32_t m_Score;
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
struct CFuncMoveLinearAlias_momentary_door {
};
struct CBaseAnimGraph {
    // 0x730
    CAnimGraphControllerManager m_graphControllerManager;
    // 0x7e0
    CAnimGraphControllerBase* m_pMainGraphController;
    // 0x7e8
    bool m_bInitiallyPopulateInterpHistory;
    // 0x7f0
    IChoreoServices* m_pChoreoServices;
    // 0x7f8
    bool m_bAnimGraphUpdateEnabled;
    // 0x7fc
    float m_flMaxSlopeDistance;
    // 0x800
    VectorWS m_vLastSlopeCheckPos;
    // 0x80c
    uint32_t m_nAnimGraphUpdateId;
    // 0x810
    bool m_bAnimationUpdateScheduled;
    // 0x814
    Vector m_vecForce;
    // 0x820
    int32_t m_nForceBone;
    // 0x838
    PhysicsRagdollPose_t m_RagdollPose;
    // 0x860
    bool m_bRagdollEnabled;
    // 0x861
    bool m_bRagdollClientSide;
    // 0x870
    CTransform m_xParentedRagdollRootInEntitySpace;
};
struct CEnvCubemapFog {
    // 0x4a8
    float m_flEndDistance;
    // 0x4ac
    float m_flStartDistance;
    // 0x4b0
    float m_flFogFalloffExponent;
    // 0x4b4
    bool m_bHeightFogEnabled;
    // 0x4b8
    float m_flFogHeightWidth;
    // 0x4bc
    float m_flFogHeightEnd;
    // 0x4c0
    float m_flFogHeightStart;
    // 0x4c4
    float m_flFogHeightExponent;
    // 0x4c8
    float m_flLODBias;
    // 0x4cc
    bool m_bActive;
    // 0x4cd
    bool m_bStartDisabled;
    // 0x4d0
    float m_flFogMaxOpacity;
    // 0x4d4
    int32_t m_nCubemapSourceType;
    // 0x4d8
    CStrongHandle<T> m_hSkyMaterial;
    // 0x4e0
    CUtlSymbolLarge m_iszSkyEntity;
    // 0x4e8
    CStrongHandle<T> m_hFogCubemapTexture;
    // 0x4f0
    bool m_bHasHeightFogEnd;
    // 0x4f1
    bool m_bFirstTime;
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
struct CBaseDoor {
    // 0x7c0
    QAngle m_angMoveEntitySpace;
    // 0x7cc
    Vector m_vecMoveDirParentSpace;
    // 0x7d8
    locksound_t m_ls;
    // 0x7f8
    bool m_bForceClosed;
    // 0x7f9
    bool m_bDoorGroup;
    // 0x7fa
    bool m_bLocked;
    // 0x7fb
    bool m_bIgnoreDebris;
    // 0x7fc
    bool m_bNoNPCs;
    // 0x800
    FuncDoorSpawnPos_t m_eSpawnPosition;
    // 0x804
    float m_flBlockDamage;
    // 0x808
    CUtlSymbolLarge m_NoiseMoving;
    // 0x810
    CUtlSymbolLarge m_NoiseArrived;
    // 0x818
    CUtlSymbolLarge m_NoiseMovingClosed;
    // 0x820
    CUtlSymbolLarge m_NoiseArrivedClosed;
    // 0x828
    CUtlSymbolLarge m_ChainTarget;
    // 0x830
    CEntityIOOutput m_OnBlockedClosing;
    // 0x848
    CEntityIOOutput m_OnBlockedOpening;
    // 0x860
    CEntityIOOutput m_OnUnblockedClosing;
    // 0x878
    CEntityIOOutput m_OnUnblockedOpening;
    // 0x890
    CEntityIOOutput m_OnFullyClosed;
    // 0x8a8
    CEntityIOOutput m_OnFullyOpen;
    // 0x8c0
    CEntityIOOutput m_OnClose;
    // 0x8d8
    CEntityIOOutput m_OnOpen;
    // 0x8f0
    CEntityIOOutput m_OnLockedUse;
    // 0x908
    bool m_bLoopMoveSound;
    // 0x928
    bool m_bCreateNavObstacle;
    // 0x929
    bool m_isChaining;
    // 0x92a
    bool m_bIsUsable;
};
struct CServerOnlyPointEntity {
};
struct CGameMoney {
    // 0x740
    CEntityIOOutput m_OnMoneySpent;
    // 0x758
    CEntityIOOutput m_OnMoneySpentFail;
    // 0x770
    int32_t m_nMoney;
    // 0x778
    CUtlString m_strAwardText;
};
struct CEnvHudHint {
    // 0x4a8
    CUtlSymbolLarge m_iszMessage;
};
struct CNullEntity {
};
struct CLogicalEntity {
};
struct CItemDefuser {
    // 0xac0
    EntitySpottedState_t m_entitySpottedState;
    // 0xad8
    int32_t m_nSpotRules;
};
struct CItemGenericTriggerHelper {
    // 0x730
    CHandle<T> m_hParentItem;
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
    // 0xa8
    bool m_bPreventWeaponPickup;
};
struct CRagdollPropAttached {
    // 0xb70
    uint32_t m_boneIndexAttached;
    // 0xb74
    uint32_t m_ragdollAttachedObjectIndex;
    // 0xb78
    Vector m_attachmentPointBoneSpace;
    // 0xb84
    Vector m_attachmentPointRagdollSpace;
    // 0xb90
    bool m_bShouldDetach;
    // 0xba0
    bool m_bShouldDeleteAttachedActivationRecord;
};
struct CItemDogtags {
    // 0xac0
    CHandle<T> m_OwningPlayer;
    // 0xac4
    CHandle<T> m_KillingPlayer;
};
struct CFuncPlat {
    // 0x7d8
    CUtlSymbolLarge m_sNoise;
};
struct CBarnLight {
    // 0x730
    bool m_bEnabled;
    // 0x734
    int32_t m_nColorMode;
    // 0x738
    Color m_Color;
    // 0x73c
    float m_flColorTemperature;
    // 0x740
    float m_flBrightness;
    // 0x744
    float m_flBrightnessScale;
    // 0x748
    int32_t m_nDirectLight;
    // 0x74c
    int32_t m_nBakedShadowIndex;
    // 0x750
    int32_t m_nLightPathUniqueId;
    // 0x754
    int32_t m_nLightMapUniqueId;
    // 0x758
    int32_t m_nLuminaireShape;
    // 0x75c
    float m_flLuminaireSize;
    // 0x760
    float m_flLuminaireAnisotropy;
    // 0x768
    CUtlString m_LightStyleString;
    // 0x770
    GameTime_t m_flLightStyleStartTime;
    // 0x778
    CUtlString m_QueuedLightStyleStrings;
    // 0x790
    CUtlString m_LightStyleEvents;
    // 0x7a8
    CHandle<T> m_LightStyleTargets;
    // 0x7c0
    CEntityIOOutput[4] m_StyleEvent;
    // 0x840
    CStrongHandle<T> m_hLightCookie;
    // 0x848
    float m_flShape;
    // 0x84c
    float m_flSoftX;
    // 0x850
    float m_flSoftY;
    // 0x854
    float m_flSkirt;
    // 0x858
    float m_flSkirtNear;
    // 0x85c
    Vector m_vSizeParams;
    // 0x868
    float m_flRange;
    // 0x86c
    Vector m_vShear;
    // 0x878
    int32_t m_nBakeSpecularToCubemaps;
    // 0x87c
    Vector m_vBakeSpecularToCubemapsSize;
    // 0x888
    int32_t m_nCastShadows;
    // 0x88c
    int32_t m_nShadowMapSize;
    // 0x890
    int32_t m_nShadowPriority;
    // 0x894
    bool m_bContactShadow;
    // 0x895
    bool m_bForceShadowsEnabled;
    // 0x898
    int32_t m_nBounceLight;
    // 0x89c
    float m_flBounceScale;
    // 0x8a0
    bool m_bDynamicBounce;
    // 0x8a4
    float m_flMinRoughness;
    // 0x8a8
    Vector m_vAlternateColor;
    // 0x8b4
    float m_fAlternateColorBrightness;
    // 0x8b8
    int32_t m_nFog;
    // 0x8bc
    float m_flFogStrength;
    // 0x8c0
    int32_t m_nFogShadows;
    // 0x8c4
    float m_flFogScale;
    // 0x8c8
    bool m_bFogMixedShadows;
    // 0x8cc
    float m_flFadeSizeStart;
    // 0x8d0
    float m_flFadeSizeEnd;
    // 0x8d4
    float m_flShadowFadeSizeStart;
    // 0x8d8
    float m_flShadowFadeSizeEnd;
    // 0x8dc
    bool m_bPrecomputedFieldsValid;
    // 0x8e0
    Vector m_vPrecomputedBoundsMins;
    // 0x8ec
    Vector m_vPrecomputedBoundsMaxs;
    // 0x8f8
    Vector m_vPrecomputedOBBOrigin;
    // 0x904
    QAngle m_vPrecomputedOBBAngles;
    // 0x910
    Vector m_vPrecomputedOBBExtent;
    // 0x91c
    int32_t m_nPrecomputedSubFrusta;
    // 0x920
    Vector m_vPrecomputedOBBOrigin0;
    // 0x92c
    QAngle m_vPrecomputedOBBAngles0;
    // 0x938
    Vector m_vPrecomputedOBBExtent0;
    // 0x944
    Vector m_vPrecomputedOBBOrigin1;
    // 0x950
    QAngle m_vPrecomputedOBBAngles1;
    // 0x95c
    Vector m_vPrecomputedOBBExtent1;
    // 0x968
    Vector m_vPrecomputedOBBOrigin2;
    // 0x974
    QAngle m_vPrecomputedOBBAngles2;
    // 0x980
    Vector m_vPrecomputedOBBExtent2;
    // 0x98c
    Vector m_vPrecomputedOBBOrigin3;
    // 0x998
    QAngle m_vPrecomputedOBBAngles3;
    // 0x9a4
    Vector m_vPrecomputedOBBExtent3;
    // 0x9b0
    Vector m_vPrecomputedOBBOrigin4;
    // 0x9bc
    QAngle m_vPrecomputedOBBAngles4;
    // 0x9c8
    Vector m_vPrecomputedOBBExtent4;
    // 0x9d4
    Vector m_vPrecomputedOBBOrigin5;
    // 0x9e0
    QAngle m_vPrecomputedOBBAngles5;
    // 0x9ec
    Vector m_vPrecomputedOBBExtent5;
    // 0x9f8
    bool m_bPvsModifyEntity;
    // 0xa00
    CNetworkUtlVectorBase< uint16 > m_VisClusters;
};
struct CInstructorEventEntity {
    // 0x4a8
    CUtlSymbolLarge m_iszName;
    // 0x4b0
    CUtlSymbolLarge m_iszHintTargetEntity;
    // 0x4b8
    CHandle<T> m_hTargetPlayer;
};
struct CWeaponTec9 {
};
struct CPathCorner {
    // 0x4a8
    float m_flWait;
    // 0x4ac
    float m_flRadius;
    // 0x4b0
    CEntityIOOutput m_OnPass;
};
struct CTriggerSndSosOpvar {
    // 0x890
    CUtlVector<T> m_hTouchingPlayers;
    // 0x8a8
    Vector m_flPosition;
    // 0x8b4
    float m_flCenterSize;
    // 0x8b8
    float m_flMinVal;
    // 0x8bc
    float m_flMaxVal;
    // 0x8c0
    CUtlSymbolLarge m_opvarName;
    // 0x8c8
    CUtlSymbolLarge m_stackName;
    // 0x8d0
    CUtlSymbolLarge m_operatorName;
    // 0x8d8
    bool m_bVolIs2D;
    // 0x8d9
    char[256] m_opvarNameChar;
    // 0x9d9
    char[256] m_stackNameChar;
    // 0xad9
    char[256] m_operatorNameChar;
    // 0xbdc
    Vector m_VecNormPos;
    // 0xbe8
    float m_flNormCenterSize;
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
struct CPointCommentaryNode {
    // 0xa20
    CUtlSymbolLarge m_iszPreCommands;
    // 0xa28
    CUtlSymbolLarge m_iszPostCommands;
    // 0xa30
    CUtlSymbolLarge m_iszCommentaryFile;
    // 0xa38
    CUtlSymbolLarge m_iszViewTarget;
    // 0xa40
    CHandle<T> m_hViewTarget;
    // 0xa44
    CHandle<T> m_hViewTargetAngles;
    // 0xa48
    CUtlSymbolLarge m_iszViewPosition;
    // 0xa50
    CHandle<T> m_hViewPosition;
    // 0xa54
    CHandle<T> m_hViewPositionMover;
    // 0xa58
    bool m_bPreventMovement;
    // 0xa59
    bool m_bUnderCrosshair;
    // 0xa5a
    bool m_bUnstoppable;
    // 0xa5c
    GameTime_t m_flFinishedTime;
    // 0xa60
    Vector m_vecFinishOrigin;
    // 0xa6c
    QAngle m_vecOriginalAngles;
    // 0xa78
    QAngle m_vecFinishAngles;
    // 0xa84
    bool m_bPreventChangesWhileMoving;
    // 0xa85
    bool m_bDisabled;
    // 0xa88
    VectorWS m_vecTeleportOrigin;
    // 0xa94
    GameTime_t m_flAbortedPlaybackAt;
    // 0xa98
    CEntityIOOutput m_pOnCommentaryStarted;
    // 0xab0
    CEntityIOOutput m_pOnCommentaryStopped;
    // 0xac8
    bool m_bActive;
    // 0xacc
    GameTime_t m_flStartTime;
    // 0xad0
    float m_flStartTimeInCommentary;
    // 0xad8
    CUtlSymbolLarge m_iszTitle;
    // 0xae0
    CUtlSymbolLarge m_iszSpeakers;
    // 0xae8
    int32_t m_iNodeNumber;
    // 0xaec
    int32_t m_iNodeNumberMax;
    // 0xaf0
    bool m_bListenedTo;
};
struct CMomentaryRotButton {
    // 0x8b0
    CEntityOutputTemplate< float32, float32 > m_Position;
    // 0x8d0
    CEntityIOOutput m_OnUnpressed;
    // 0x8e8
    CEntityIOOutput m_OnFullyOpen;
    // 0x900
    CEntityIOOutput m_OnFullyClosed;
    // 0x918
    CEntityIOOutput m_OnReachedPosition;
    // 0x930
    int32_t m_lastUsed;
    // 0x934
    QAngle m_start;
    // 0x940
    QAngle m_end;
    // 0x94c
    float m_IdealYaw;
    // 0x950
    CUtlSymbolLarge m_sNoise;
    // 0x958
    bool m_bUpdateTarget;
    // 0x95c
    int32_t m_direction;
    // 0x960
    float m_returnSpeed;
    // 0x964
    float m_flStartPosition;
};
struct CSceneListManager {
    // 0x4a8
    CUtlVector<T> m_hListManagers;
    // 0x4c0
    CUtlSymbolLarge[16] m_iszScenes;
    // 0x540
    CHandle<T> m_hScenes;
};
struct CEnvTilt {
    // 0x4a8
    float m_Duration;
    // 0x4ac
    float m_Radius;
    // 0x4b0
    float m_TiltTime;
    // 0x4b4
    GameTime_t m_stopTime;
};
struct CEnvSoundscapeTriggerable {
};
struct CFuncMover {
    // 0x730
    CUtlSymbolLarge m_iszPathName;
    // 0x738
    CHandle<T> m_hPathMover;
    // 0x73c
    CHandle<T> m_hPrevPathMover;
    // 0x740
    CUtlSymbolLarge m_iszPathNodeStart;
    // 0x748
    CUtlSymbolLarge m_iszPathNodeEnd;
    // 0x750
    CFuncMover::Move_t m_eMoveType;
    // 0x754
    bool m_bIsReversing;
    // 0x758
    float m_flStartSpeed;
    // 0x75c
    float m_flPathLocation;
    // 0x760
    float m_flT;
    // 0x764
    int32_t m_nCurrentNodeIndex;
    // 0x768
    int32_t m_nPreviousNodeIndex;
    // 0x76c
    SolidType_t m_eSolidType;
    // 0x76d
    bool m_bIsMoving;
    // 0x770
    float m_flTimeToReachMaxSpeed;
    // 0x774
    float m_flDistanceToReachMaxSpeed;
    // 0x778
    float m_flTimeToReachZeroSpeed;
    // 0x77c
    float m_flComputedDistanceToReachMaxSpeed;
    // 0x780
    float m_flComputedDistanceToReachZeroSpeed;
    // 0x784
    float m_flStartCurveScale;
    // 0x788
    float m_flStopCurveScale;
    // 0x78c
    float m_flDistanceToReachZeroSpeed;
    // 0x790
    GameTime_t m_flTimeMovementStart;
    // 0x794
    GameTime_t m_flTimeMovementStop;
    // 0x798
    CHandle<T> m_hStopAtNode;
    // 0x79c
    float m_flPathLocationToBeginStop;
    // 0x7a0
    float m_flPathLocationStart;
    // 0x7a4
    float m_flBeginStopT;
    // 0x7a8
    CUtlSymbolLarge m_iszStartForwardSound;
    // 0x7b0
    CUtlSymbolLarge m_iszLoopForwardSound;
    // 0x7b8
    CUtlSymbolLarge m_iszStopForwardSound;
    // 0x7c0
    CUtlSymbolLarge m_iszStartReverseSound;
    // 0x7c8
    CUtlSymbolLarge m_iszLoopReverseSound;
    // 0x7d0
    CUtlSymbolLarge m_iszStopReverseSound;
    // 0x7d8
    CUtlSymbolLarge m_iszArriveAtDestinationSound;
    // 0x7f8
    CEntityIOOutput m_OnMovementEnd;
    // 0x810
    bool m_bStartAtClosestPoint;
    // 0x811
    bool m_bStartAtEnd;
    // 0x812
    bool m_bStartFollowingClosestMover;
    // 0x814
    CFuncMover::OrientationUpdate_t m_eOrientationUpdate;
    // 0x818
    GameTime_t m_flTimeStartOrientationChange;
    // 0x81c
    float m_flTimeToBlendToNewOrientation;
    // 0x820
    float m_flDurationBlendToNewOrientationRan;
    // 0x824
    int32_t m_nOriginalOrientationIndex;
    // 0x828
    bool m_bCreateMovableNavMesh;
    // 0x829
    bool m_bAllowMovableNavMeshDockingOnEntireEntity;
    // 0x830
    CUtlString m_OnNodePassed;
    // 0x850
    CUtlSymbolLarge m_iszOrientationMatchEntityName;
    // 0x858
    CHandle<T> m_hOrientationMatchEntity;
    // 0x85c
    float m_flTimeToTraverseToNextNode;
    // 0x860
    Vector m_vLerpToNewPosStartInPathEntitySpace;
    // 0x86c
    Vector m_vLerpToNewPosEndInPathEntitySpace;
    // 0x878
    float m_flLerpToPositionT;
    // 0x87c
    float m_flLerpToPositionDeltaT;
    // 0x880
    CEntityIOOutput m_OnLerpToPositionComplete;
    // 0x898
    bool m_bIsPaused;
    // 0x89c
    CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction;
    // 0x8a0
    int32_t m_nDelayedTeleportToNode;
    // 0x8a4
    bool m_bIsVerboseLogging;
    // 0x8a8
    CHandle<T> m_hFollowEntity;
    // 0x8ac
    float m_flFollowDistance;
    // 0x8b0
    float m_flFollowMinimumSpeed;
    // 0x8b4
    float m_flCurFollowEntityT;
    // 0x8b8
    float m_flCurFollowSpeed;
    // 0x8c0
    CUtlSymbolLarge m_strOrientationFaceEntityName;
    // 0x8c8
    CHandle<T> m_hOrientationFaceEntity;
    // 0x8d0
    CEntityIOOutput m_OnStart;
    // 0x8e8
    CEntityIOOutput m_OnStartForward;
    // 0x900
    CEntityIOOutput m_OnStartReverse;
    // 0x918
    CEntityIOOutput m_OnStop;
    // 0x930
    CEntityIOOutput m_OnStopped;
    // 0x948
    bool m_bNextNodeReturnsCurrent;
    // 0x949
    bool m_bStartedMoving;
    // 0x968
    CFuncMover::FollowEntityDirection_t m_eFollowEntityDirection;
    // 0x96c
    CHandle<T> m_hFollowMover;
    // 0x970
    CUtlSymbolLarge m_iszFollowMoverEntityName;
    // 0x978
    float m_flFollowMoverDistance;
    // 0x97c
    float m_flFollowMoverCalculatedDistance;
    // 0x980
    float m_flFollowMoverSpringStrength;
    // 0x984
    bool m_bFollowConstraintsInitialized;
    // 0x988
    CFuncMover::FollowConstraint_t m_eFollowConstraint;
    // 0x98c
    float m_flFollowMoverSpeed;
    // 0x990
    float m_flFollowMoverVelocity;
    // 0x994
    GameTick_t m_nTickMovementRan;
};
struct CPhysicsProp {
    // 0xbb0
    CEntityIOOutput m_MotionEnabled;
    // 0xbc8
    CEntityIOOutput m_OnAwakened;
    // 0xbe0
    CEntityIOOutput m_OnAwake;
    // 0xbf8
    CEntityIOOutput m_OnAsleep;
    // 0xc10
    CEntityIOOutput m_OnPlayerUse;
    // 0xc28
    CEntityIOOutput m_OnOutOfWorld;
    // 0xc40
    CEntityIOOutput m_OnPlayerPickup;
    // 0xc58
    bool m_bForceNavIgnore;
    // 0xc59
    bool m_bNoNavmeshBlocker;
    // 0xc5a
    bool m_bForceNpcExclude;
    // 0xc5c
    float m_massScale;
    // 0xc60
    float m_buoyancyScale;
    // 0xc64
    int32_t m_damageType;
    // 0xc68
    int32_t m_damageToEnableMotion;
    // 0xc6c
    float m_flForceToEnableMotion;
    // 0xc70
    bool m_bThrownByPlayer;
    // 0xc71
    bool m_bDroppedByPlayer;
    // 0xc72
    bool m_bTouchedByPlayer;
    // 0xc73
    bool m_bFirstCollisionAfterLaunch;
    // 0xc74
    bool m_bHasBeenAwakened;
    // 0xc75
    bool m_bIsOverrideProp;
    // 0xc78
    GameTime_t m_flLastBurn;
    // 0xc7c
    DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior;
    // 0xc80
    GameTime_t m_fNextCheckDisableMotionContactsTime;
    // 0xc84
    int32_t m_iInitialGlowState;
    // 0xc88
    int32_t m_nGlowRange;
    // 0xc8c
    int32_t m_nGlowRangeMin;
    // 0xc90
    Color m_glowColor;
    // 0xc94
    bool m_bShouldAutoConvertBackFromDebris;
    // 0xc95
    bool m_bMuteImpactEffects;
    // 0xc9c
    bool m_bUpdateNavWhenMoving;
    // 0xc9d
    bool m_bForceNavObstacleCut;
    // 0xc9e
    bool m_bAllowObstacleConvexHullMerging;
    // 0xc9f
    bool m_bAcceptDamageFromHeldObjects;
    // 0xca0
    bool m_bEnableUseOutput;
    // 0xca4
    CPhysicsProp::CrateType_t m_CrateType;
    // 0xca8
    CUtlSymbolLarge[4] m_strItemClass;
    // 0xcc8
    int32[4] m_nItemCount;
    // 0xcd8
    bool m_bRemovableForAmmoBalancing;
    // 0xcd9
    bool m_bAwake;
    // 0xcda
    bool m_bAttachedToReferenceFrame;
};
struct CFuncNavObstruction {
    // 0x748
    bool m_bDisabled;
    // 0x749
    bool m_bUseAsyncObstacleUpdate;
};
struct CPhysWheelConstraint {
    // 0x508
    float m_flSuspensionFrequency;
    // 0x50c
    float m_flSuspensionDampingRatio;
    // 0x510
    float m_flSuspensionHeightOffset;
    // 0x514
    bool m_bEnableSuspensionLimit;
    // 0x518
    float m_flMinSuspensionOffset;
    // 0x51c
    float m_flMaxSuspensionOffset;
    // 0x520
    bool m_bEnableSteeringLimit;
    // 0x524
    float m_flMinSteeringAngle;
    // 0x528
    float m_flMaxSteeringAngle;
    // 0x52c
    float m_flSteeringAxisFriction;
    // 0x530
    float m_flSpinAxisFriction;
    // 0x534
    CHandle<T> m_hSteeringMimicsEntity;
};
struct CSkyboxReference {
    // 0x4a8
    WorldGroupId_t m_worldGroupId;
    // 0x4ac
    CHandle<T> m_hSkyCamera;
};
struct CPointPulse {
};
struct CMolotovProjectile {
    // 0xbb0
    bool m_bIsIncGrenade;
    // 0xbc8
    bool m_bDetonated;
    // 0xbd0
    IntervalTimer m_stillTimer;
};
struct CFilterClass {
    // 0x4e0
    CUtlSymbolLarge m_iFilterClass;
};
struct CTriggerToggleSave {
};
struct CPathWithDynamicNodes {
    // 0x5b0
    CHandle<T> m_vecPathNodes;
    // 0x5d0
    CTransform m_xInitialPathWorldToLocal;
};
struct CColorCorrection {
    // 0x4a8
    float m_flFadeInDuration;
    // 0x4ac
    float m_flFadeOutDuration;
    // 0x4b0
    float m_flStartFadeInWeight;
    // 0x4b4
    float m_flStartFadeOutWeight;
    // 0x4b8
    GameTime_t m_flTimeStartFadeIn;
    // 0x4bc
    GameTime_t m_flTimeStartFadeOut;
    // 0x4c0
    float m_flMaxWeight;
    // 0x4c4
    bool m_bStartDisabled;
    // 0x4c5
    bool m_bEnabled;
    // 0x4c6
    bool m_bMaster;
    // 0x4c7
    bool m_bClientSide;
    // 0x4c8
    bool m_bExclusive;
    // 0x4cc
    float m_MinFalloff;
    // 0x4d0
    float m_MaxFalloff;
    // 0x4d4
    float m_flCurWeight;
    // 0x4d8
    char[512] m_netlookupFilename;
    // 0x6d8
    CUtlSymbolLarge m_lookupFilename;
};
struct CPropDoorRotatingBreakable {
    // 0xef0
    bool m_bBreakable;
    // 0xef1
    bool m_isAbleToCloseAreaPortals;
    // 0xef4
    int32_t m_currentDamageState;
    // 0xef8
    CUtlVector<T> m_damageStates;
};
struct CLightDirectionalEntity {
};
struct CBaseClientUIEntity {
    // 0x730
    bool m_bEnabled;
    // 0x738
    CUtlSymbolLarge m_DialogXMLName;
    // 0x740
    CUtlSymbolLarge m_PanelClassName;
    // 0x748
    CUtlSymbolLarge m_PanelID;
    // 0x750
    CUtlString m_CustomOutput0;
    // 0x770
    CUtlString m_CustomOutput1;
    // 0x790
    CUtlString m_CustomOutput2;
    // 0x7b0
    CUtlString m_CustomOutput3;
    // 0x7d0
    CUtlString m_CustomOutput4;
    // 0x7f0
    CUtlString m_CustomOutput5;
    // 0x810
    CUtlString m_CustomOutput6;
    // 0x830
    CUtlString m_CustomOutput7;
    // 0x850
    CUtlString m_CustomOutput8;
    // 0x870
    CUtlString m_CustomOutput9;
};
struct CBreakable {
    // 0x738
    CPropDataComponent m_CPropDataComponent;
    // 0x778
    Materials m_Material;
    // 0x77c
    CHandle<T> m_hBreaker;
    // 0x780
    Explosions m_Explosion;
    // 0x788
    CUtlSymbolLarge m_iszSpawnObject;
    // 0x790
    float m_flPressureDelay;
    // 0x794
    int32_t m_iMinHealthDmg;
    // 0x798
    CUtlSymbolLarge m_iszPropData;
    // 0x7a0
    float m_impactEnergyScale;
    // 0x7a4
    EOverrideBlockLOS_t m_nOverrideBlockLOS;
    // 0x7a8
    CEntityIOOutput m_OnStartDeath;
    // 0x7c0
    CEntityIOOutput m_OnBreak;
    // 0x7d8
    CEntityOutputTemplate< float32, float32 > m_OnHealthChanged;
    // 0x7f8
    PerformanceMode_t m_PerformanceMode;
    // 0x7fc
    CHandle<T> m_hPhysicsAttacker;
    // 0x800
    GameTime_t m_flLastPhysicsInfluenceTime;
};
struct CInfoLandmark {
};
struct CBaseFilter {
    // 0x4a8
    bool m_bNegated;
    // 0x4b0
    CEntityIOOutput m_OnPass;
    // 0x4c8
    CEntityIOOutput m_OnFail;
};
struct WeaponPurchaseTracker_t {
    // 0x8
    CUtlVector<T> m_weaponPurchases;
};
struct CPulseCell_Outflow_PlaySceneBase_CursorState_t {
    // 0x0
    CHandle<T> m_sceneInstance;
    // 0x4
    CHandle<T> m_mainActor;
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
    // 0x4a8
    int32_t m_iBuyingStatus;
    // 0x4ac
    float m_flBombRadius;
    // 0x4b0
    int32_t m_iPetPopulation;
    // 0x4b4
    bool m_bUseNormalSpawnsForDM;
    // 0x4b5
    bool m_bDisableAutoGeneratedDMSpawns;
    // 0x4b8
    float m_flBotMaxVisionDistance;
    // 0x4bc
    int32_t m_iHostageCount;
    // 0x4c0
    bool m_bFadePlayerVisibilityFarZ;
    // 0x4c1
    bool m_bRainTraceToSkyEnabled;
    // 0x4c4
    float m_flEnvRainStrength;
    // 0x4c8
    float m_flEnvPuddleRippleStrength;
    // 0x4cc
    float m_flEnvPuddleRippleDirection;
    // 0x4d0
    float m_flEnvWetnessCoverage;
    // 0x4d4
    float m_flEnvWetnessDryingAmount;
};
struct CGradientFog {
    // 0x4a8
    CStrongHandle<T> m_hGradientFogTexture;
    // 0x4b0
    float m_flFogStartDistance;
    // 0x4b4
    float m_flFogEndDistance;
    // 0x4b8
    bool m_bHeightFogEnabled;
    // 0x4bc
    float m_flFogStartHeight;
    // 0x4c0
    float m_flFogEndHeight;
    // 0x4c4
    float m_flFarZ;
    // 0x4c8
    float m_flFogMaxOpacity;
    // 0x4cc
    float m_flFogFalloffExponent;
    // 0x4d0
    float m_flFogVerticalExponent;
    // 0x4d4
    Color m_fogColor;
    // 0x4d8
    float m_flFogStrength;
    // 0x4dc
    float m_flFadeTime;
    // 0x4e0
    bool m_bStartDisabled;
    // 0x4e1
    bool m_bIsEnabled;
    // 0x4e2
    bool m_bGradientFogNeedsTextures;
};
struct CSoundOpvarSetAABBEntity {
    // 0x640
    Vector m_vDistanceInnerMins;
    // 0x64c
    Vector m_vDistanceInnerMaxs;
    // 0x658
    Vector m_vDistanceOuterMins;
    // 0x664
    Vector m_vDistanceOuterMaxs;
    // 0x670
    int32_t m_nAABBDirection;
    // 0x674
    Vector m_vInnerMins;
    // 0x680
    Vector m_vInnerMaxs;
    // 0x68c
    Vector m_vOuterMins;
    // 0x698
    Vector m_vOuterMaxs;
};
struct CPulseCell_Outflow_PlaySequence {
    // 0xf0
    CUtlString m_ParamSequenceName;
};
struct CPointClientUIWorldTextPanel {
    // 0x8e8
    char[512] m_messageText;
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
struct CFuncRotator {
    // 0x730
    CHandle<T> m_hRotatorTarget;
    // 0x734
    bool m_bIsRotating;
    // 0x735
    bool m_bIsReversing;
    // 0x738
    float m_flTimeToReachMaxSpeed;
    // 0x73c
    float m_flTimeToReachZeroSpeed;
    // 0x740
    float m_flDistanceAlongArcTraveled;
    // 0x744
    float m_flTimeToWaitOscillate;
    // 0x748
    GameTime_t m_flTimeRotationStart;
    // 0x750
    Quaternion m_qLSPrevChange;
    // 0x760
    Quaternion m_qWSPrev;
    // 0x770
    Quaternion m_qWSInit;
    // 0x780
    Quaternion m_qLSInit;
    // 0x790
    Quaternion m_qLSOrientation;
    // 0x7a0
    CEntityIOOutput m_OnRotationStarted;
    // 0x7b8
    CEntityIOOutput m_OnRotationCompleted;
    // 0x7d0
    CEntityIOOutput m_OnOscillate;
    // 0x7e8
    CEntityIOOutput m_OnOscillateStartArrive;
    // 0x800
    CEntityIOOutput m_OnOscillateStartDepart;
    // 0x818
    CEntityIOOutput m_OnOscillateEndArrive;
    // 0x830
    CEntityIOOutput m_OnOscillateEndDepart;
    // 0x848
    bool m_bOscillateDepart;
    // 0x84c
    int32_t m_nOscillateCount;
    // 0x850
    CFuncRotator::Rotate_t m_eRotateType;
    // 0x854
    CFuncRotator::Rotate_t m_ePrevRotateType;
    // 0x858
    bool m_bHasTargetOverride;
    // 0x860
    Quaternion m_qOrientationOverride;
    // 0x870
    RotatorTargetSpace_t m_eSpaceOverride;
    // 0x874
    QAngle m_qAngularVelocity;
    // 0x880
    Vector m_vLookAtForcedUp;
    // 0x890
    CUtlSymbolLarge m_strRotatorTarget;
    // 0x898
    bool m_bRecordHistory;
    // 0x8a0
    CUtlVector<T> m_vecRotatorHistory;
    // 0x8b8
    bool m_bReturningToPreviousOrientation;
    // 0x8c0
    CUtlVector<T> m_vecRotatorQueue;
    // 0x8d8
    CUtlVector<T> m_vecRotatorQueueHistory;
    // 0x8f0
    SolidType_t m_eSolidType;
    // 0x8f4
    CHandle<T> m_hSpeedFromMover;
    // 0x8f8
    CUtlSymbolLarge m_iszSpeedFromMover;
    // 0x900
    float m_flSpeedScale;
    // 0x904
    float m_flMinYawRotation;
    // 0x908
    float m_flMaxYawRotation;
};
struct CSoundEventEntity {
    // 0x4a8
    bool m_bStartOnSpawn;
    // 0x4a9
    bool m_bToLocalPlayer;
    // 0x4aa
    bool m_bStopOnNew;
    // 0x4ab
    bool m_bSaveRestore;
    // 0x4ac
    bool m_bSavedIsPlaying;
    // 0x4b0
    float m_flSavedElapsedTime;
    // 0x4b8
    CUtlSymbolLarge m_iszSourceEntityName;
    // 0x4c0
    CUtlSymbolLarge m_iszAttachmentName;
    // 0x4c8
    CEntityOutputTemplate< uint64, uint64 > m_onGUIDChanged;
    // 0x4e8
    CEntityIOOutput m_onSoundFinished;
    // 0x500
    float m_flClientCullRadius;
    // 0x530
    CUtlSymbolLarge m_iszSoundName;
    // 0x54c
    CEntityHandle m_hSource;
    // 0x550
    int32_t m_nEntityIndexSelection;
};
struct CInfoPlayerCounterterrorist {
};
struct CEnvFade {
    // 0x4a8
    Color m_fadeColor;
    // 0x4ac
    float m_Duration;
    // 0x4b0
    float m_HoldDuration;
    // 0x4b8
    CEntityIOOutput m_OnBeginFade;
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
struct CTriggerImpact {
    // 0x8a8
    float m_flMagnitude;
    // 0x8ac
    float m_flNoise;
    // 0x8b0
    float m_flViewkick;
    // 0x8b8
    CEntityOutputTemplate< Vector, Vector > m_pOutputForce;
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
struct CBasePropDoor {
    // 0xc60
    float m_flAutoReturnDelay;
    // 0xc68
    CUtlVector<T> m_hDoorList;
    // 0xc80
    int32_t m_nHardwareType;
    // 0xc84
    bool m_bNeedsHardware;
    // 0xc88
    DoorState_t m_eDoorState;
    // 0xc8c
    bool m_bLocked;
    // 0xc8d
    bool m_bNoNPCs;
    // 0xc90
    Vector m_closedPosition;
    // 0xc9c
    QAngle m_closedAngles;
    // 0xca8
    CHandle<T> m_hBlocker;
    // 0xcac
    bool m_bFirstBlocked;
    // 0xcb0
    locksound_t m_ls;
    // 0xcd0
    bool m_bForceClosed;
    // 0xcd4
    VectorWS m_vecLatchWorldPosition;
    // 0xce0
    CHandle<T> m_hActivator;
    // 0xcf8
    CUtlSymbolLarge m_SoundMoving;
    // 0xd00
    CUtlSymbolLarge m_SoundOpen;
    // 0xd08
    CUtlSymbolLarge m_SoundClose;
    // 0xd10
    CUtlSymbolLarge m_SoundLock;
    // 0xd18
    CUtlSymbolLarge m_SoundUnlock;
    // 0xd20
    CUtlSymbolLarge m_SoundLatch;
    // 0xd28
    CUtlSymbolLarge m_SoundPound;
    // 0xd30
    CUtlSymbolLarge m_SoundJiggle;
    // 0xd38
    CUtlSymbolLarge m_SoundLockedAnim;
    // 0xd40
    int32_t m_numCloseAttempts;
    // 0xd44
    CUtlString m_nPhysicsMaterial;
    // 0xd48
    CUtlSymbolLarge m_SlaveName;
    // 0xd50
    CHandle<T> m_hMaster;
    // 0xd58
    CEntityIOOutput m_OnBlockedClosing;
    // 0xd70
    CEntityIOOutput m_OnBlockedOpening;
    // 0xd88
    CEntityIOOutput m_OnUnblockedClosing;
    // 0xda0
    CEntityIOOutput m_OnUnblockedOpening;
    // 0xdb8
    CEntityIOOutput m_OnFullyClosed;
    // 0xdd0
    CEntityIOOutput m_OnFullyOpen;
    // 0xde8
    CEntityIOOutput m_OnClose;
    // 0xe00
    CEntityIOOutput m_OnOpen;
    // 0xe18
    CEntityIOOutput m_OnLockedUse;
    // 0xe30
    CEntityIOOutput m_OnAjarOpen;
};
struct CLogicBranchList {
    // 0x4a8
    CUtlSymbolLarge[16] m_nLogicBranchNames;
    // 0x528
    CUtlVector<T> m_LogicBranchList;
    // 0x540
    CLogicBranchList::LogicBranchListenerLastState_t m_eLastState;
    // 0x548
    CEntityIOOutput m_OnAllTrue;
    // 0x560
    CEntityIOOutput m_OnAllFalse;
    // 0x578
    CEntityIOOutput m_OnMixed;
};
struct CBtActionParachutePositioning {
    // 0x58
    CountdownTimer m_ActionTimer;
};
struct CAK47 {
};
struct CDynamicProp {
    // 0xba8
    bool m_bCreateNavObstacle;
    // 0xba9
    bool m_bNavObstacleUpdatesOverridden;
    // 0xbaa
    bool m_bUseHitboxesForRenderBox;
    // 0xbab
    bool m_bUseAnimGraph;
    // 0xbb0
    CEntityIOOutput m_pOutputAnimBegun;
    // 0xbc8
    CEntityIOOutput m_pOutputAnimOver;
    // 0xbe0
    CEntityIOOutput m_pOutputAnimLoopCycleOver;
    // 0xbf8
    CEntityIOOutput m_OnAnimReachedStart;
    // 0xc10
    CEntityIOOutput m_OnAnimReachedEnd;
    // 0xc28
    CUtlSymbolLarge m_iszIdleAnim;
    // 0xc30
    AnimLoopMode_t m_nIdleAnimLoopMode;
    // 0xc34
    bool m_bRandomizeCycle;
    // 0xc35
    bool m_bStartDisabled;
    // 0xc36
    bool m_bFiredStartEndOutput;
    // 0xc37
    bool m_bForceNpcExclude;
    // 0xc38
    bool m_bCreateNonSolid;
    // 0xc39
    bool m_bIsOverrideProp;
    // 0xc3c
    int32_t m_iInitialGlowState;
    // 0xc40
    int32_t m_nGlowRange;
    // 0xc44
    int32_t m_nGlowRangeMin;
    // 0xc48
    Color m_glowColor;
    // 0xc4c
    int32_t m_nGlowTeam;
};
struct CHostageAlias_info_hostage_spawn {
};
struct CFilterTeam {
    // 0x4e0
    int32_t m_iFilterTeam;
};
struct CFuncConveyor {
    // 0x730
    CUtlSymbolLarge m_szConveyorModels;
    // 0x738
    float m_flTransitionDurationSeconds;
    // 0x73c
    QAngle m_angMoveEntitySpace;
    // 0x748
    Vector m_vecMoveDirEntitySpace;
    // 0x754
    float m_flTargetSpeed;
    // 0x758
    GameTick_t m_nTransitionStartTick;
    // 0x75c
    int32_t m_nTransitionDurationTicks;
    // 0x760
    float m_flTransitionStartSpeed;
    // 0x768
    CHandle<T> m_hConveyorModels;
};
struct CTriggerPhysics {
    // 0x8a0
    float m_gravityScale;
    // 0x8a4
    float m_linearLimit;
    // 0x8a8
    float m_linearDamping;
    // 0x8ac
    float m_angularLimit;
    // 0x8b0
    float m_angularDamping;
    // 0x8b4
    float m_linearForce;
    // 0x8b8
    float m_flFrequency;
    // 0x8bc
    float m_flDampingRatio;
    // 0x8c0
    Vector m_vecLinearForcePointAt;
    // 0x8cc
    bool m_bCollapseToForcePoint;
    // 0x8d0
    Vector m_vecLinearForcePointAtWorld;
    // 0x8dc
    Vector m_vecLinearForceDirection;
    // 0x8e8
    bool m_bConvertToDebrisWhenPossible;
};
struct CInfoInstructorHintBombTargetB {
};
struct CFuncTimescale {
    // 0x4a8
    float m_flDesiredTimescale;
    // 0x4ac
    float m_flAcceleration;
    // 0x4b0
    float m_flMinBlendRate;
    // 0x4b4
    float m_flBlendDeltaMultiplier;
    // 0x4b8
    bool m_isStarted;
};
struct CInfoInteraction {
    // 0x4a8
    CUtlSymbolLarge[8] m_strSlotEntityName;
    // 0x4e8
    CUtlSymbolLarge m_strInteractVData;
    // 0x4f0
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
struct CSoundOpvarSetPointEntity {
    // 0x550
    CEntityIOOutput m_OnEnter;
    // 0x568
    CEntityIOOutput m_OnExit;
    // 0x580
    bool m_bAutoDisable;
    // 0x5c4
    float m_flDistanceMin;
    // 0x5c8
    float m_flDistanceMax;
    // 0x5cc
    float m_flDistanceMapMin;
    // 0x5d0
    float m_flDistanceMapMax;
    // 0x5d4
    float m_flOcclusionRadius;
    // 0x5d8
    float m_flOcclusionMin;
    // 0x5dc
    float m_flOcclusionMax;
    // 0x5e0
    float m_flValSetOnDisable;
    // 0x5e4
    bool m_bSetValueOnDisable;
    // 0x5e5
    bool m_bReloading;
    // 0x5e8
    int32_t m_nSimulationMode;
    // 0x5ec
    int32_t m_nVisibilitySamples;
    // 0x5f0
    Vector m_vDynamicProxyPoint;
    // 0x5fc
    float m_flDynamicMaximumOcclusion;
    // 0x600
    CEntityHandle m_hDynamicEntity;
    // 0x608
    CUtlSymbolLarge m_iszDynamicEntityName;
    // 0x610
    float m_flPathingDistanceNormFactor;
    // 0x614
    Vector m_vPathingSourcePos;
    // 0x620
    Vector m_vPathingListenerPos;
    // 0x62c
    Vector m_vPathingDirection;
    // 0x638
    int32_t m_nPathingSourceIndex;
};
struct CInfoTargetServerOnly {
};
struct CServerRagdollTrigger {
};
struct CDynamicPropAlias_dynamic_prop {
};
struct CMarkupVolumeTagged {
    // 0x738
    CUtlVector<T> m_GroupNames;
    // 0x750
    CUtlVector<T> m_Tags;
    // 0x768
    bool m_bIsGroup;
    // 0x769
    bool m_bGroupByPrefab;
    // 0x76a
    bool m_bGroupByVolume;
    // 0x76b
    bool m_bGroupOtherGroups;
    // 0x76c
    bool m_bIsInGroup;
};
struct CInfoParticleTarget {
};
struct CEnvCubemap {
    // 0x528
    CStrongHandle<T> m_Entity_hCubemapTexture;
    // 0x530
    bool m_Entity_bCustomCubemapTexture;
    // 0x534
    float m_Entity_flInfluenceRadius;
    // 0x538
    Vector m_Entity_vBoxProjectMins;
    // 0x544
    Vector m_Entity_vBoxProjectMaxs;
    // 0x550
    bool m_Entity_bMoveable;
    // 0x554
    int32_t m_Entity_nHandshake;
    // 0x558
    int32_t m_Entity_nEnvCubeMapArrayIndex;
    // 0x55c
    int32_t m_Entity_nPriority;
    // 0x560
    float m_Entity_flEdgeFadeDist;
    // 0x564
    Vector m_Entity_vEdgeFadeDists;
    // 0x570
    float m_Entity_flDiffuseScale;
    // 0x574
    bool m_Entity_bStartDisabled;
    // 0x575
    bool m_Entity_bDefaultEnvMap;
    // 0x576
    bool m_Entity_bDefaultSpecEnvMap;
    // 0x577
    bool m_Entity_bIndoorCubeMap;
    // 0x578
    bool m_Entity_bCopyDiffuseFromDefaultCubemap;
    // 0x588
    bool m_Entity_bEnabled;
};
struct CCSPlayer_DamageReactServices {
};
struct CWeaponXM1014 {
};
struct CTriggerLerpObject {
    // 0x890
    CUtlSymbolLarge m_iszLerpTarget;
    // 0x898
    CHandle<T> m_hLerpTarget;
    // 0x8a0
    CUtlSymbolLarge m_iszLerpTargetAttachment;
    // 0x8a8
    AttachmentHandle_t m_hLerpTargetAttachment;
    // 0x8ac
    float m_flLerpDuration;
    // 0x8b0
    bool m_bAttachedEntityWasParented;
    // 0x8b1
    bool m_bLerpRestoreMoveType;
    // 0x8b2
    bool m_bSingleLerpObject;
    // 0x8b8
    CUtlVector<T> m_vecLerpingObjects;
    // 0x8d0
    CUtlSymbolLarge m_iszLerpEffect;
    // 0x8d8
    CUtlSymbolLarge m_iszLerpSound;
    // 0x8e0
    bool m_bAttachTouchingObject;
    // 0x8e4
    CHandle<T> m_hEntityToWaitForDisconnect;
    // 0x8e8
    CEntityIOOutput m_OnLerpStarted;
    // 0x900
    CEntityIOOutput m_OnLerpFinished;
    // 0x918
    CEntityIOOutput m_OnDetached;
};
struct CPhysicsPropOverride {
};
struct CTriggerSave {
    // 0x890
    bool m_bForceNewLevelUnit;
    // 0x894
    float m_fDangerousTimer;
    // 0x898
    int32_t m_minHitPoints;
};
struct CPointHurt {
    // 0x4a8
    int32_t m_nDamage;
    // 0x4ac
    DamageTypes_t m_bitsDamageType;
    // 0x4b0
    float m_flRadius;
    // 0x4b4
    float m_flDelay;
    // 0x4b8
    CUtlSymbolLarge m_strTarget;
    // 0x4c0
    CHandle<T> m_pActivator;
};
struct CBasePlayerController {
    // 0x4b0
    uint64_t m_nInButtonsWhichAreToggles;
    // 0x4b8
    uint32_t m_nTickBase;
    // 0x4e0
    CHandle<T> m_hPawn;
    // 0x4e4
    bool m_bKnownTeamMismatch;
    // 0x4e8
    CSplitScreenSlot m_nSplitScreenSlot;
    // 0x4ec
    CHandle<T> m_hSplitOwner;
    // 0x4f0
    CUtlVector<T> m_hSplitScreenPlayers;
    // 0x508
    bool m_bIsHLTV;
    // 0x50c
    PlayerConnectedState m_iConnected;
    // 0x510
    char[128] m_iszPlayerName;
    // 0x590
    CUtlString m_szNetworkIDString;
    // 0x598
    float m_fLerpTime;
    // 0x59c
    bool m_bLagCompensation;
    // 0x59d
    bool m_bPredict;
    // 0x5a4
    bool m_bIsLowViolence;
    // 0x5a5
    bool m_bGamePaused;
    // 0x6e0
    ChatIgnoreType_t m_iIgnoreGlobalChat;
    // 0x6e4
    float m_flLastPlayerTalkTime;
    // 0x6e8
    float m_flLastEntitySteadyState;
    // 0x6ec
    int32_t m_nAvailableEntitySteadyState;
    // 0x6f0
    bool m_bHasAnySteadyStateEnts;
    // 0x700
    uint64_t m_steamID;
    // 0x708
    bool m_bNoClipEnabled;
    // 0x70c
    uint32_t m_iDesiredFOV;
};
} // namespace cs2

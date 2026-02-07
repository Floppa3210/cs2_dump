// Auto-generated - a2x-like schemas
#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace server_dll {
            namespace CWeaponNOVA {
            }
            namespace CPointWorldText {
                constexpr std::ptrdiff_t m_messageText = 0x730;
                constexpr std::ptrdiff_t m_FontName = 0x930;
                constexpr std::ptrdiff_t m_BackgroundMaterialName = 0x970;
                constexpr std::ptrdiff_t m_bEnabled = 0x9B0;
                constexpr std::ptrdiff_t m_bFullbright = 0x9B1;
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x9B4;
                constexpr std::ptrdiff_t m_flFontSize = 0x9B8;
                constexpr std::ptrdiff_t m_flDepthOffset = 0x9BC;
                constexpr std::ptrdiff_t m_bDrawBackground = 0x9C0;
                constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0x9C4;
                constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0x9C8;
                constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0x9CC;
                constexpr std::ptrdiff_t m_Color = 0x9D0;
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x9D4;
                constexpr std::ptrdiff_t m_nJustifyVertical = 0x9D8;
                constexpr std::ptrdiff_t m_nReorientMode = 0x9DC;
            }
            namespace CAmbientGeneric {
                constexpr std::ptrdiff_t m_radius = 0x4A8;
                constexpr std::ptrdiff_t m_flMaxRadius = 0x4AC;
                constexpr std::ptrdiff_t m_iSoundLevel = 0x4B0;
                constexpr std::ptrdiff_t m_dpv = 0x4B4;
                constexpr std::ptrdiff_t m_fActive = 0x518;
                constexpr std::ptrdiff_t m_fLooping = 0x519;
                constexpr std::ptrdiff_t m_iszSound = 0x520;
                constexpr std::ptrdiff_t m_sSourceEntName = 0x528;
                constexpr std::ptrdiff_t m_hSoundSource = 0x530;
                constexpr std::ptrdiff_t m_nSoundSourceEntIndex = 0x534;
            }
            namespace CEnvEntityMaker {
                constexpr std::ptrdiff_t m_vecEntityMins = 0x4A8;
                constexpr std::ptrdiff_t m_vecEntityMaxs = 0x4B4;
                constexpr std::ptrdiff_t m_hCurrentInstance = 0x4C0;
                constexpr std::ptrdiff_t m_hCurrentBlocker = 0x4C4;
                constexpr std::ptrdiff_t m_vecBlockerOrigin = 0x4C8;
                constexpr std::ptrdiff_t m_angPostSpawnDirection = 0x4D4;
                constexpr std::ptrdiff_t m_flPostSpawnDirectionVariance = 0x4E0;
                constexpr std::ptrdiff_t m_flPostSpawnSpeed = 0x4E4;
                constexpr std::ptrdiff_t m_bPostSpawnUseAngles = 0x4E8;
                constexpr std::ptrdiff_t m_iszTemplate = 0x4F0;
                constexpr std::ptrdiff_t m_pOutputOnSpawned = 0x4F8;
                constexpr std::ptrdiff_t m_pOutputOnFailedSpawn = 0x510;
            }
            namespace CPulseGraphInstance_GameBlackboard {
            }
            namespace CPointEntity {
            }
            namespace CFilterEnemy {
                constexpr std::ptrdiff_t m_iszEnemyName = 0x4E0;
                constexpr std::ptrdiff_t m_flRadius = 0x4E8;
                constexpr std::ptrdiff_t m_flOuterRadius = 0x4EC;
                constexpr std::ptrdiff_t m_nMaxSquadmatesPerEnemy = 0x4F0;
                constexpr std::ptrdiff_t m_iszPlayerName = 0x4F8;
            }
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98;
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9C;
            }
            namespace CFuncTrackAuto {
            }
            namespace CScriptedSequence {
                constexpr std::ptrdiff_t m_iszEntry = 0x4A8;
                constexpr std::ptrdiff_t m_iszPreIdle = 0x4B0;
                constexpr std::ptrdiff_t m_iszPlay = 0x4B8;
                constexpr std::ptrdiff_t m_iszPostIdle = 0x4C0;
                constexpr std::ptrdiff_t m_iszModifierToAddOnPlay = 0x4C8;
                constexpr std::ptrdiff_t m_iszNextScript = 0x4D0;
                constexpr std::ptrdiff_t m_iszEntity = 0x4D8;
                constexpr std::ptrdiff_t m_iszSyncGroup = 0x4E0;
                constexpr std::ptrdiff_t m_nMoveTo = 0x4E8;
                constexpr std::ptrdiff_t m_nMoveToGait = 0x4EC;
                constexpr std::ptrdiff_t m_nHeldWeaponBehavior = 0x4F0;
                constexpr std::ptrdiff_t m_nForcedCrouchState = 0x4F4;
                constexpr std::ptrdiff_t m_bIsPlayingPreIdle = 0x4F8;
                constexpr std::ptrdiff_t m_bIsPlayingEntry = 0x4F9;
                constexpr std::ptrdiff_t m_bIsPlayingAction = 0x4FA;
                constexpr std::ptrdiff_t m_bIsPlayingPostIdle = 0x4FB;
                constexpr std::ptrdiff_t m_bDontRotateOther = 0x4FC;
                constexpr std::ptrdiff_t m_bIsRepeatable = 0x4FD;
                constexpr std::ptrdiff_t m_bShouldLeaveCorpse = 0x4FE;
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4FF;
                constexpr std::ptrdiff_t m_bDisallowInterrupts = 0x500;
                constexpr std::ptrdiff_t m_bCanOverrideNPCState = 0x501;
                constexpr std::ptrdiff_t m_bDontTeleportAtEnd = 0x502;
                constexpr std::ptrdiff_t m_bHighPriority = 0x503;
                constexpr std::ptrdiff_t m_bHideDebugComplaints = 0x504;
                constexpr std::ptrdiff_t m_bContinueOnDeath = 0x505;
                constexpr std::ptrdiff_t m_bLoopPreIdleSequence = 0x506;
                constexpr std::ptrdiff_t m_bLoopActionSequence = 0x507;
                constexpr std::ptrdiff_t m_bLoopPostIdleSequence = 0x508;
                constexpr std::ptrdiff_t m_bSynchPostIdles = 0x509;
                constexpr std::ptrdiff_t m_bIgnoreLookAt = 0x50A;
                constexpr std::ptrdiff_t m_bIgnoreGravity = 0x50B;
                constexpr std::ptrdiff_t m_bDisableNPCCollisions = 0x50C;
                constexpr std::ptrdiff_t m_bKeepAnimgraphLockedPost = 0x50D;
                constexpr std::ptrdiff_t m_bDontAddModifiers = 0x50E;
                constexpr std::ptrdiff_t m_bDisableAimingWhileMoving = 0x50F;
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x510;
                constexpr std::ptrdiff_t m_flRadius = 0x514;
                constexpr std::ptrdiff_t m_flRepeat = 0x518;
                constexpr std::ptrdiff_t m_flPlayAnimFadeInTime = 0x51C;
                constexpr std::ptrdiff_t m_flMoveInterpTime = 0x520;
                constexpr std::ptrdiff_t m_flAngRate = 0x524;
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x528;
                constexpr std::ptrdiff_t m_bWaitUntilMoveCompletesToStartAnimation = 0x52C;
                constexpr std::ptrdiff_t m_nNotReadySequenceCount = 0x530;
                constexpr std::ptrdiff_t m_startTime = 0x534;
                constexpr std::ptrdiff_t m_bWaitForBeginSequence = 0x538;
                constexpr std::ptrdiff_t m_saved_effects = 0x53C;
                constexpr std::ptrdiff_t m_savedFlags = 0x540;
                constexpr std::ptrdiff_t m_savedCollisionGroup = 0x544;
                constexpr std::ptrdiff_t m_bInterruptable = 0x548;
                constexpr std::ptrdiff_t m_sequenceStarted = 0x549;
                constexpr std::ptrdiff_t m_bPositionRelativeToOtherEntity = 0x54A;
                constexpr std::ptrdiff_t m_hTargetEnt = 0x54C;
                constexpr std::ptrdiff_t m_hNextCine = 0x550;
                constexpr std::ptrdiff_t m_bThinking = 0x554;
                constexpr std::ptrdiff_t m_bInitiatedSelfDelete = 0x555;
                constexpr std::ptrdiff_t m_bIsTeleportingDueToMoveTo = 0x556;
                constexpr std::ptrdiff_t m_bAllowCustomInterruptConditions = 0x557;
                constexpr std::ptrdiff_t m_hForcedTarget = 0x558;
                constexpr std::ptrdiff_t m_bDontCancelOtherSequences = 0x55C;
                constexpr std::ptrdiff_t m_bForceSynch = 0x55D;
                constexpr std::ptrdiff_t m_bPreventUpdateYawOnFinish = 0x55E;
                constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x55F;
                constexpr std::ptrdiff_t m_onDeathBehavior = 0x560;
                constexpr std::ptrdiff_t m_ConflictResponse = 0x564;
                constexpr std::ptrdiff_t m_OnBeginSequence = 0x568;
                constexpr std::ptrdiff_t m_OnActionStartOrLoop = 0x580;
                constexpr std::ptrdiff_t m_OnEndSequence = 0x598;
                constexpr std::ptrdiff_t m_OnPostIdleEndSequence = 0x5B0;
                constexpr std::ptrdiff_t m_OnCancelSequence = 0x5C8;
                constexpr std::ptrdiff_t m_OnCancelFailedSequence = 0x5E0;
                constexpr std::ptrdiff_t m_OnScriptEvent = 0x5F8;
                constexpr std::ptrdiff_t m_matOtherToMain = 0x6C0;
                constexpr std::ptrdiff_t m_hInteractionMainEntity = 0x6E0;
                constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x6E4;
                constexpr std::ptrdiff_t m_bSkipFadeIn = 0x6E8;
            }
            namespace CFogTrigger {
                constexpr std::ptrdiff_t m_fog = 0x890;
            }
            namespace CInfoTeleportDestination {
            }
            namespace CPointBroadcastClientCommand {
            }
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_flPlayerPingTokens = 0x48;
                constexpr std::ptrdiff_t m_hPlayerPing = 0x5C;
            }
            namespace CHEGrenade {
            }
            namespace CPhysicsSpring {
                constexpr std::ptrdiff_t m_flFrequency = 0x4B0;
                constexpr std::ptrdiff_t m_flDampingRatio = 0x4B4;
                constexpr std::ptrdiff_t m_flRestLength = 0x4B8;
                constexpr std::ptrdiff_t m_nameAttachStart = 0x4C0;
                constexpr std::ptrdiff_t m_nameAttachEnd = 0x4C8;
                constexpr std::ptrdiff_t m_start = 0x4D0;
                constexpr std::ptrdiff_t m_end = 0x4DC;
                constexpr std::ptrdiff_t m_teleportTick = 0x4E8;
            }
            namespace CEnvMuzzleFlash {
                constexpr std::ptrdiff_t m_flScale = 0x4A8;
                constexpr std::ptrdiff_t m_iszParentAttachment = 0x4B0;
            }
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30;
                constexpr std::ptrdiff_t m_flValue = 0x34;
                constexpr std::ptrdiff_t m_flInitialValue = 0x38;
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C;
                constexpr std::ptrdiff_t m_bSetBonus = 0x40;
            }
            namespace CBaseTriggerAPI {
            }
            namespace CWeaponRevolver {
            }
            namespace CFuncTrainControls {
            }
            namespace CBtActionCombatPositioning {
                constexpr std::ptrdiff_t m_szSensorInputKey = 0x68;
                constexpr std::ptrdiff_t m_szIsAttackingKey = 0x80;
                constexpr std::ptrdiff_t m_ActionTimer = 0x88;
                constexpr std::ptrdiff_t m_bCrouching = 0xA0;
            }
            namespace PredictedDamageTag_t {
                constexpr std::ptrdiff_t nTagTick = 0x30;
                constexpr std::ptrdiff_t flFlinchModSmall = 0x34;
                constexpr std::ptrdiff_t flFlinchModLarge = 0x38;
                constexpr std::ptrdiff_t flFriendlyFireDamageReductionRatio = 0x3C;
            }
            namespace CFuncRetakeBarrier {
            }
            namespace CTriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x890;
                constexpr std::ptrdiff_t m_flFluidDensity = 0x9A8;
            }
            namespace CTonemapController2Alias_env_tonemap_controller2 {
            }
            namespace CPathTrack {
                constexpr std::ptrdiff_t m_pnext = 0x4A8;
                constexpr std::ptrdiff_t m_pprevious = 0x4B0;
                constexpr std::ptrdiff_t m_paltpath = 0x4B8;
                constexpr std::ptrdiff_t m_flRadius = 0x4C0;
                constexpr std::ptrdiff_t m_length = 0x4C4;
                constexpr std::ptrdiff_t m_altName = 0x4C8;
                constexpr std::ptrdiff_t m_nIterVal = 0x4D0;
                constexpr std::ptrdiff_t m_eOrientationType = 0x4D4;
                constexpr std::ptrdiff_t m_OnPass = 0x4D8;
            }
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8;
            }
            namespace CTriggerProximity {
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x890;
                constexpr std::ptrdiff_t m_iszMeasureTarget = 0x898;
                constexpr std::ptrdiff_t m_fRadius = 0x8A0;
                constexpr std::ptrdiff_t m_nTouchers = 0x8A4;
                constexpr std::ptrdiff_t m_NearestEntityDistance = 0x8A8;
            }
            namespace CTankTrainAI {
                constexpr std::ptrdiff_t m_hTrain = 0x4A8;
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4AC;
                constexpr std::ptrdiff_t m_soundPlaying = 0x4B0;
                constexpr std::ptrdiff_t m_startSoundName = 0x4C8;
                constexpr std::ptrdiff_t m_engineSoundName = 0x4D0;
                constexpr std::ptrdiff_t m_movementSoundName = 0x4D8;
                constexpr std::ptrdiff_t m_targetEntityName = 0x4E0;
            }
            namespace CGameText {
                constexpr std::ptrdiff_t m_iszMessage = 0x740;
                constexpr std::ptrdiff_t m_textParms = 0x748;
            }
            namespace CGameEnd {
            }
            namespace CInfoDeathmatchSpawn {
            }
            namespace CCSPlayerController_InventoryServices {
                constexpr std::ptrdiff_t m_unMusicID = 0x40;
                constexpr std::ptrdiff_t m_rank = 0x44;
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x5C;
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x60;
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x64;
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x68;
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x6C;
                constexpr std::ptrdiff_t m_unEquippedPlayerSprayIDs = 0xF48;
                constexpr std::ptrdiff_t m_unCurrentLoadoutHash = 0xF50;
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0xF58;
            }
            namespace CCSPlayerModernJump {
                constexpr std::ptrdiff_t m_nLastActualJumpPressTick = 0x10;
                constexpr std::ptrdiff_t m_flLastActualJumpPressFrac = 0x14;
                constexpr std::ptrdiff_t m_nLastUsableJumpPressTick = 0x18;
                constexpr std::ptrdiff_t m_flLastUsableJumpPressFrac = 0x1C;
                constexpr std::ptrdiff_t m_nLastLandedTick = 0x20;
                constexpr std::ptrdiff_t m_flLastLandedFrac = 0x24;
                constexpr std::ptrdiff_t m_flLastLandedVelocityX = 0x28;
                constexpr std::ptrdiff_t m_flLastLandedVelocityY = 0x2C;
                constexpr std::ptrdiff_t m_flLastLandedVelocityZ = 0x30;
            }
            namespace CPulse_ResumePoint {
            }
            namespace CBaseFlex {
                constexpr std::ptrdiff_t m_flexWeight = 0xA20;
                constexpr std::ptrdiff_t m_vLookTargetPosition = 0xA38;
                constexpr std::ptrdiff_t m_flAllowResponsesEndTime = 0xA98;
                constexpr std::ptrdiff_t m_flLastFlexAnimationTime = 0xA9C;
                constexpr std::ptrdiff_t m_nNextSceneEventId = 0xAA0;
                constexpr std::ptrdiff_t m_bUpdateLayerPriorities = 0xAA4;
            }
            namespace CTriggerFan {
                constexpr std::ptrdiff_t m_vFanOriginOffset = 0x890;
                constexpr std::ptrdiff_t m_vDirection = 0x89C;
                constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x8A8;
                constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x8A9;
                constexpr std::ptrdiff_t m_qNoiseDelta = 0x8B0;
                constexpr std::ptrdiff_t m_hInfoFan = 0x8C0;
                constexpr std::ptrdiff_t m_flForce = 0x8C4;
                constexpr std::ptrdiff_t m_bFalloff = 0x8C8;
                constexpr std::ptrdiff_t m_RampTimer = 0x8D0;
                constexpr std::ptrdiff_t m_vFanOriginWS = 0x8E8;
                constexpr std::ptrdiff_t m_vFanOriginLS = 0x8F4;
                constexpr std::ptrdiff_t m_vFanEndLS = 0x900;
                constexpr std::ptrdiff_t m_vNoiseDirectionTarget = 0x90C;
                constexpr std::ptrdiff_t m_iszInfoFan = 0x918;
                constexpr std::ptrdiff_t m_flRopeForceScale = 0x920;
                constexpr std::ptrdiff_t m_flParticleForceScale = 0x924;
                constexpr std::ptrdiff_t m_flPlayerForce = 0x928;
                constexpr std::ptrdiff_t m_bPlayerWindblock = 0x92C;
                constexpr std::ptrdiff_t m_flNPCForce = 0x930;
                constexpr std::ptrdiff_t m_flRampTime = 0x934;
                constexpr std::ptrdiff_t m_fNoiseDegrees = 0x938;
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x93C;
                constexpr std::ptrdiff_t m_bPushPlayer = 0x940;
                constexpr std::ptrdiff_t m_bRampDown = 0x941;
                constexpr std::ptrdiff_t m_nManagerFanIdx = 0x944;
            }
            namespace CPhysHingeAlias_phys_hinge_local {
            }
            namespace CLogicCase {
                constexpr std::ptrdiff_t m_nCase = 0x4A8;
                constexpr std::ptrdiff_t m_nShuffleCases = 0x5A8;
                constexpr std::ptrdiff_t m_nLastShuffleCase = 0x5AC;
                constexpr std::ptrdiff_t m_uchShuffleCaseMap = 0x5B0;
                constexpr std::ptrdiff_t m_OnCase = 0x5D0;
                constexpr std::ptrdiff_t m_OnDefault = 0x8D0;
            }
            namespace CInfoGameEventProxy {
                constexpr std::ptrdiff_t m_iszEventName = 0x4A8;
                constexpr std::ptrdiff_t m_flRange = 0x4B0;
            }
            namespace CWeaponBizon {
            }
            namespace CGamePlayerZone {
                constexpr std::ptrdiff_t m_OnPlayerInZone = 0x738;
                constexpr std::ptrdiff_t m_OnPlayerOutZone = 0x750;
                constexpr std::ptrdiff_t m_PlayersInCount = 0x768;
                constexpr std::ptrdiff_t m_PlayersOutCount = 0x788;
            }
            namespace CBaseToggle {
                constexpr std::ptrdiff_t m_toggle_state = 0x730;
                constexpr std::ptrdiff_t m_flMoveDistance = 0x734;
                constexpr std::ptrdiff_t m_flWait = 0x738;
                constexpr std::ptrdiff_t m_flLip = 0x73C;
                constexpr std::ptrdiff_t m_bAlwaysFireBlockedOutputs = 0x740;
                constexpr std::ptrdiff_t m_vecPosition1 = 0x744;
                constexpr std::ptrdiff_t m_vecPosition2 = 0x750;
                constexpr std::ptrdiff_t m_vecMoveAng = 0x75C;
                constexpr std::ptrdiff_t m_vecAngle1 = 0x768;
                constexpr std::ptrdiff_t m_vecAngle2 = 0x774;
                constexpr std::ptrdiff_t m_flHeight = 0x780;
                constexpr std::ptrdiff_t m_hActivator = 0x784;
                constexpr std::ptrdiff_t m_vecFinalDest = 0x788;
                constexpr std::ptrdiff_t m_vecFinalAngle = 0x794;
                constexpr std::ptrdiff_t m_movementType = 0x7A0;
                constexpr std::ptrdiff_t m_sMaster = 0x7A8;
            }
            namespace CPulseServerCursor {
                constexpr std::ptrdiff_t m_hActivator = 0xD8;
                constexpr std::ptrdiff_t m_hCaller = 0xDC;
            }
            namespace CPulseCell_PlaySequence {
                constexpr std::ptrdiff_t m_SequenceName = 0x48;
                constexpr std::ptrdiff_t m_PulseAnimEvents = 0x50;
                constexpr std::ptrdiff_t m_OnFinished = 0x68;
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0;
            }
            namespace CInferno {
                constexpr std::ptrdiff_t m_firePositions = 0x730;
                constexpr std::ptrdiff_t m_fireParentPositions = 0xA30;
                constexpr std::ptrdiff_t m_bFireIsBurning = 0xD30;
                constexpr std::ptrdiff_t m_BurnNormal = 0xD70;
                constexpr std::ptrdiff_t m_fireCount = 0x1070;
                constexpr std::ptrdiff_t m_nInfernoType = 0x1074;
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1078;
                constexpr std::ptrdiff_t m_nFireLifetime = 0x107C;
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1080;
                constexpr std::ptrdiff_t m_bWasCreatedInSmoke = 0x1081;
                constexpr std::ptrdiff_t m_extent = 0x1288;
                constexpr std::ptrdiff_t m_damageTimer = 0x12A0;
                constexpr std::ptrdiff_t m_damageRampTimer = 0x12B8;
                constexpr std::ptrdiff_t m_splashVelocity = 0x12D0;
                constexpr std::ptrdiff_t m_InitialSplashVelocity = 0x12DC;
                constexpr std::ptrdiff_t m_startPos = 0x12E8;
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0x12F4;
                constexpr std::ptrdiff_t m_activeTimer = 0x1300;
                constexpr std::ptrdiff_t m_fireSpawnOffset = 0x1310;
                constexpr std::ptrdiff_t m_nMaxFlames = 0x1314;
                constexpr std::ptrdiff_t m_nSpreadCount = 0x1318;
                constexpr std::ptrdiff_t m_BookkeepingTimer = 0x1320;
                constexpr std::ptrdiff_t m_NextSpreadTimer = 0x1338;
                constexpr std::ptrdiff_t m_nSourceItemDefIndex = 0x1350;
            }
            namespace CTouchExpansionComponent {
            }
            namespace CPulseCell_Outflow_PlaySceneBase {
                constexpr std::ptrdiff_t m_OnFinished = 0x48;
                constexpr std::ptrdiff_t m_OnCanceled = 0x90;
                constexpr std::ptrdiff_t m_Triggers = 0xD8;
            }
            namespace CPulseCell_LerpCameraSettings {
                constexpr std::ptrdiff_t m_flSeconds = 0x90;
                constexpr std::ptrdiff_t m_Start = 0x94;
                constexpr std::ptrdiff_t m_End = 0xA4;
            }
            namespace CWeaponSCAR20 {
            }
            namespace CFuncInteractionLayerClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x730;
                constexpr std::ptrdiff_t m_iszInteractsAs = 0x738;
                constexpr std::ptrdiff_t m_iszInteractsWith = 0x740;
            }
            namespace CCSObserver_UseServices {
            }
            namespace CTriggerDetectBulletFire {
                constexpr std::ptrdiff_t m_bPlayerFireOnly = 0x890;
                constexpr std::ptrdiff_t m_OnDetectedBulletFire = 0x898;
            }
            namespace CCSPlayer_UseServices {
                constexpr std::ptrdiff_t m_hLastKnownUseEntity = 0x48;
                constexpr std::ptrdiff_t m_flLastUseTimeStamp = 0x4C;
                constexpr std::ptrdiff_t m_flTimeLastUsedWindow = 0x50;
            }
            namespace CWeaponAWP {
            }
            namespace CPulseCell_PickBestOutflowSelector {
                constexpr std::ptrdiff_t m_nCheckType = 0x48;
                constexpr std::ptrdiff_t m_OutflowList = 0x50;
            }
            namespace CInfoFan {
                constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x4E8;
                constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x4EC;
                constexpr std::ptrdiff_t m_flCurveDistRange = 0x4F0;
                constexpr std::ptrdiff_t m_FanForceCurveString = 0x4F8;
            }
            namespace CGameRules {
                constexpr std::ptrdiff_t _m_pChainEntity = 0x8;
                constexpr std::ptrdiff_t m_szQuestName = 0x30;
                constexpr std::ptrdiff_t m_nQuestPhase = 0xB0;
                constexpr std::ptrdiff_t m_nLastMatchTime = 0xB4;
                constexpr std::ptrdiff_t m_nLastMatchTime_MatchID64 = 0xB8;
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0xC0;
                constexpr std::ptrdiff_t m_nPauseStartTick = 0xC4;
                constexpr std::ptrdiff_t m_bGamePaused = 0xC8;
            }
            namespace CFish {
                constexpr std::ptrdiff_t m_pool = 0xA20;
                constexpr std::ptrdiff_t m_id = 0xA24;
                constexpr std::ptrdiff_t m_x = 0xA28;
                constexpr std::ptrdiff_t m_y = 0xA2C;
                constexpr std::ptrdiff_t m_z = 0xA30;
                constexpr std::ptrdiff_t m_angle = 0xA34;
                constexpr std::ptrdiff_t m_angleChange = 0xA38;
                constexpr std::ptrdiff_t m_forward = 0xA3C;
                constexpr std::ptrdiff_t m_perp = 0xA48;
                constexpr std::ptrdiff_t m_poolOrigin = 0xA54;
                constexpr std::ptrdiff_t m_waterLevel = 0xA60;
                constexpr std::ptrdiff_t m_speed = 0xA64;
                constexpr std::ptrdiff_t m_desiredSpeed = 0xA68;
                constexpr std::ptrdiff_t m_calmSpeed = 0xA6C;
                constexpr std::ptrdiff_t m_panicSpeed = 0xA70;
                constexpr std::ptrdiff_t m_avoidRange = 0xA74;
                constexpr std::ptrdiff_t m_turnTimer = 0xA78;
                constexpr std::ptrdiff_t m_turnClockwise = 0xA90;
                constexpr std::ptrdiff_t m_goTimer = 0xA98;
                constexpr std::ptrdiff_t m_moveTimer = 0xAB0;
                constexpr std::ptrdiff_t m_panicTimer = 0xAC8;
                constexpr std::ptrdiff_t m_disperseTimer = 0xAE0;
                constexpr std::ptrdiff_t m_proximityTimer = 0xAF8;
                constexpr std::ptrdiff_t m_visible = 0xB10;
            }
            namespace CCSBot {
                constexpr std::ptrdiff_t m_eyePosition = 0x108;
                constexpr std::ptrdiff_t m_name = 0x114;
                constexpr std::ptrdiff_t m_combatRange = 0x154;
                constexpr std::ptrdiff_t m_isRogue = 0x158;
                constexpr std::ptrdiff_t m_rogueTimer = 0x160;
                constexpr std::ptrdiff_t m_diedLastRound = 0x17C;
                constexpr std::ptrdiff_t m_safeTime = 0x180;
                constexpr std::ptrdiff_t m_wasSafe = 0x184;
                constexpr std::ptrdiff_t m_blindFire = 0x18C;
                constexpr std::ptrdiff_t m_surpriseTimer = 0x190;
                constexpr std::ptrdiff_t m_bAllowActive = 0x1A8;
                constexpr std::ptrdiff_t m_isFollowing = 0x1A9;
                constexpr std::ptrdiff_t m_leader = 0x1AC;
                constexpr std::ptrdiff_t m_followTimestamp = 0x1B0;
                constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1B4;
                constexpr std::ptrdiff_t m_hurryTimer = 0x1B8;
                constexpr std::ptrdiff_t m_alertTimer = 0x1D0;
                constexpr std::ptrdiff_t m_sneakTimer = 0x1E8;
                constexpr std::ptrdiff_t m_panicTimer = 0x200;
                constexpr std::ptrdiff_t m_stateTimestamp = 0x578;
                constexpr std::ptrdiff_t m_isAttacking = 0x57C;
                constexpr std::ptrdiff_t m_isOpeningDoor = 0x57D;
                constexpr std::ptrdiff_t m_taskEntity = 0x584;
                constexpr std::ptrdiff_t m_goalPosition = 0x594;
                constexpr std::ptrdiff_t m_goalEntity = 0x5A0;
                constexpr std::ptrdiff_t m_avoid = 0x5A4;
                constexpr std::ptrdiff_t m_avoidTimestamp = 0x5A8;
                constexpr std::ptrdiff_t m_isStopping = 0x5AC;
                constexpr std::ptrdiff_t m_hasVisitedEnemySpawn = 0x5AD;
                constexpr std::ptrdiff_t m_stillTimer = 0x5B0;
                constexpr std::ptrdiff_t m_bEyeAnglesUnderPathFinderControl = 0x5C0;
                constexpr std::ptrdiff_t m_pathIndex = 0x5EC0;
                constexpr std::ptrdiff_t m_areaEnteredTimestamp = 0x5EC4;
                constexpr std::ptrdiff_t m_repathTimer = 0x5EC8;
                constexpr std::ptrdiff_t m_avoidFriendTimer = 0x5EE0;
                constexpr std::ptrdiff_t m_isFriendInTheWay = 0x5EF8;
                constexpr std::ptrdiff_t m_politeTimer = 0x5F00;
                constexpr std::ptrdiff_t m_isWaitingBehindFriend = 0x5F18;
                constexpr std::ptrdiff_t m_pathLadderEnd = 0x5F44;
                constexpr std::ptrdiff_t m_mustRunTimer = 0x5F90;
                constexpr std::ptrdiff_t m_waitTimer = 0x5FA8;
                constexpr std::ptrdiff_t m_updateTravelDistanceTimer = 0x5FC0;
                constexpr std::ptrdiff_t m_playerTravelDistance = 0x5FD8;
                constexpr std::ptrdiff_t m_travelDistancePhase = 0x60D8;
                constexpr std::ptrdiff_t m_hostageEscortCount = 0x6270;
                constexpr std::ptrdiff_t m_hostageEscortCountTimestamp = 0x6274;
                constexpr std::ptrdiff_t m_desiredTeam = 0x6278;
                constexpr std::ptrdiff_t m_hasJoined = 0x627C;
                constexpr std::ptrdiff_t m_isWaitingForHostage = 0x627D;
                constexpr std::ptrdiff_t m_inhibitWaitingForHostageTimer = 0x6280;
                constexpr std::ptrdiff_t m_waitForHostageTimer = 0x6298;
                constexpr std::ptrdiff_t m_noisePosition = 0x62B0;
                constexpr std::ptrdiff_t m_noiseTravelDistance = 0x62BC;
                constexpr std::ptrdiff_t m_noiseTimestamp = 0x62C0;
                constexpr std::ptrdiff_t m_noiseSource = 0x62C8;
                constexpr std::ptrdiff_t m_noiseBendTimer = 0x62E0;
                constexpr std::ptrdiff_t m_bentNoisePosition = 0x62F8;
                constexpr std::ptrdiff_t m_bendNoisePositionValid = 0x6304;
                constexpr std::ptrdiff_t m_lookAroundStateTimestamp = 0x6308;
                constexpr std::ptrdiff_t m_lookAheadAngle = 0x630C;
                constexpr std::ptrdiff_t m_forwardAngle = 0x6310;
                constexpr std::ptrdiff_t m_inhibitLookAroundTimestamp = 0x6314;
                constexpr std::ptrdiff_t m_lookAtSpot = 0x631C;
                constexpr std::ptrdiff_t m_lookAtSpotDuration = 0x632C;
                constexpr std::ptrdiff_t m_lookAtSpotTimestamp = 0x6330;
                constexpr std::ptrdiff_t m_lookAtSpotAngleTolerance = 0x6334;
                constexpr std::ptrdiff_t m_lookAtSpotClearIfClose = 0x6338;
                constexpr std::ptrdiff_t m_lookAtSpotAttack = 0x6339;
                constexpr std::ptrdiff_t m_lookAtDesc = 0x6340;
                constexpr std::ptrdiff_t m_peripheralTimestamp = 0x6348;
                constexpr std::ptrdiff_t m_approachPointCount = 0x64D0;
                constexpr std::ptrdiff_t m_approachPointViewPosition = 0x64D4;
                constexpr std::ptrdiff_t m_viewSteadyTimer = 0x64E0;
                constexpr std::ptrdiff_t m_tossGrenadeTimer = 0x64F8;
                constexpr std::ptrdiff_t m_isAvoidingGrenade = 0x6518;
                constexpr std::ptrdiff_t m_spotCheckTimestamp = 0x6538;
                constexpr std::ptrdiff_t m_checkedHidingSpotCount = 0x6940;
                constexpr std::ptrdiff_t m_lookPitch = 0x6944;
                constexpr std::ptrdiff_t m_lookPitchVel = 0x6948;
                constexpr std::ptrdiff_t m_lookYaw = 0x694C;
                constexpr std::ptrdiff_t m_lookYawVel = 0x6950;
                constexpr std::ptrdiff_t m_targetSpot = 0x6954;
                constexpr std::ptrdiff_t m_targetSpotVelocity = 0x6960;
                constexpr std::ptrdiff_t m_targetSpotPredicted = 0x696C;
                constexpr std::ptrdiff_t m_aimError = 0x6978;
                constexpr std::ptrdiff_t m_aimGoal = 0x6984;
                constexpr std::ptrdiff_t m_targetSpotTime = 0x6990;
                constexpr std::ptrdiff_t m_aimFocus = 0x6994;
                constexpr std::ptrdiff_t m_aimFocusInterval = 0x6998;
                constexpr std::ptrdiff_t m_aimFocusNextUpdate = 0x699C;
                constexpr std::ptrdiff_t m_ignoreEnemiesTimer = 0x69A8;
                constexpr std::ptrdiff_t m_enemy = 0x69C0;
                constexpr std::ptrdiff_t m_isEnemyVisible = 0x69C4;
                constexpr std::ptrdiff_t m_visibleEnemyParts = 0x69C5;
                constexpr std::ptrdiff_t m_lastEnemyPosition = 0x69C8;
                constexpr std::ptrdiff_t m_lastSawEnemyTimestamp = 0x69D4;
                constexpr std::ptrdiff_t m_firstSawEnemyTimestamp = 0x69D8;
                constexpr std::ptrdiff_t m_currentEnemyAcquireTimestamp = 0x69DC;
                constexpr std::ptrdiff_t m_enemyDeathTimestamp = 0x69E0;
                constexpr std::ptrdiff_t m_friendDeathTimestamp = 0x69E4;
                constexpr std::ptrdiff_t m_isLastEnemyDead = 0x69E8;
                constexpr std::ptrdiff_t m_nearbyEnemyCount = 0x69EC;
                constexpr std::ptrdiff_t m_bomber = 0x6BF8;
                constexpr std::ptrdiff_t m_nearbyFriendCount = 0x6BFC;
                constexpr std::ptrdiff_t m_closestVisibleFriend = 0x6C00;
                constexpr std::ptrdiff_t m_closestVisibleHumanFriend = 0x6C04;
                constexpr std::ptrdiff_t m_attentionInterval = 0x6C08;
                constexpr std::ptrdiff_t m_attacker = 0x6C18;
                constexpr std::ptrdiff_t m_attackedTimestamp = 0x6C1C;
                constexpr std::ptrdiff_t m_burnedByFlamesTimer = 0x6C20;
                constexpr std::ptrdiff_t m_lastVictimID = 0x6C30;
                constexpr std::ptrdiff_t m_isAimingAtEnemy = 0x6C34;
                constexpr std::ptrdiff_t m_isRapidFiring = 0x6C35;
                constexpr std::ptrdiff_t m_equipTimer = 0x6C38;
                constexpr std::ptrdiff_t m_zoomTimer = 0x6C48;
                constexpr std::ptrdiff_t m_fireWeaponTimestamp = 0x6C60;
                constexpr std::ptrdiff_t m_lookForWeaponsOnGroundTimer = 0x6C68;
                constexpr std::ptrdiff_t m_bIsSleeping = 0x6C80;
                constexpr std::ptrdiff_t m_isEnemySniperVisible = 0x6C81;
                constexpr std::ptrdiff_t m_sawEnemySniperTimer = 0x6C88;
                constexpr std::ptrdiff_t m_enemyQueueIndex = 0x6D40;
                constexpr std::ptrdiff_t m_enemyQueueCount = 0x6D41;
                constexpr std::ptrdiff_t m_enemyQueueAttendIndex = 0x6D42;
                constexpr std::ptrdiff_t m_isStuck = 0x6D43;
                constexpr std::ptrdiff_t m_stuckTimestamp = 0x6D44;
                constexpr std::ptrdiff_t m_stuckSpot = 0x6D48;
                constexpr std::ptrdiff_t m_wiggleTimer = 0x6D58;
                constexpr std::ptrdiff_t m_stuckJumpTimer = 0x6D70;
                constexpr std::ptrdiff_t m_nextCleanupCheckTimestamp = 0x6D88;
                constexpr std::ptrdiff_t m_avgVel = 0x6D8C;
                constexpr std::ptrdiff_t m_avgVelIndex = 0x6DB4;
                constexpr std::ptrdiff_t m_avgVelCount = 0x6DB8;
                constexpr std::ptrdiff_t m_lastOrigin = 0x6DBC;
                constexpr std::ptrdiff_t m_lastRadioRecievedTimestamp = 0x6DCC;
                constexpr std::ptrdiff_t m_lastRadioSentTimestamp = 0x6DD0;
                constexpr std::ptrdiff_t m_radioSubject = 0x6DD4;
                constexpr std::ptrdiff_t m_radioPosition = 0x6DD8;
                constexpr std::ptrdiff_t m_voiceEndTimestamp = 0x6DE4;
                constexpr std::ptrdiff_t m_lastValidReactionQueueFrame = 0x6DF0;
            }
            namespace CHandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x4A8;
                constexpr std::ptrdiff_t m_bSendHandle = 0x4AC;
            }
            namespace CLogicNPCCounter {
                constexpr std::ptrdiff_t m_OnMinCountAll = 0x4A8;
                constexpr std::ptrdiff_t m_OnMaxCountAll = 0x4C0;
                constexpr std::ptrdiff_t m_OnFactorAll = 0x4D8;
                constexpr std::ptrdiff_t m_OnMinPlayerDistAll = 0x4F8;
                constexpr std::ptrdiff_t m_OnMinCount_1 = 0x518;
                constexpr std::ptrdiff_t m_OnMaxCount_1 = 0x530;
                constexpr std::ptrdiff_t m_OnFactor_1 = 0x548;
                constexpr std::ptrdiff_t m_OnMinPlayerDist_1 = 0x568;
                constexpr std::ptrdiff_t m_OnMinCount_2 = 0x588;
                constexpr std::ptrdiff_t m_OnMaxCount_2 = 0x5A0;
                constexpr std::ptrdiff_t m_OnFactor_2 = 0x5B8;
                constexpr std::ptrdiff_t m_OnMinPlayerDist_2 = 0x5D8;
                constexpr std::ptrdiff_t m_OnMinCount_3 = 0x5F8;
                constexpr std::ptrdiff_t m_OnMaxCount_3 = 0x610;
                constexpr std::ptrdiff_t m_OnFactor_3 = 0x628;
                constexpr std::ptrdiff_t m_OnMinPlayerDist_3 = 0x648;
                constexpr std::ptrdiff_t m_hSource = 0x668;
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x670;
                constexpr std::ptrdiff_t m_flDistanceMax = 0x678;
                constexpr std::ptrdiff_t m_bDisabled = 0x67C;
                constexpr std::ptrdiff_t m_nMinCountAll = 0x680;
                constexpr std::ptrdiff_t m_nMaxCountAll = 0x684;
                constexpr std::ptrdiff_t m_nMinFactorAll = 0x688;
                constexpr std::ptrdiff_t m_nMaxFactorAll = 0x68C;
                constexpr std::ptrdiff_t m_iszNPCClassname_1 = 0x698;
                constexpr std::ptrdiff_t m_nNPCState_1 = 0x6A0;
                constexpr std::ptrdiff_t m_bInvertState_1 = 0x6A4;
                constexpr std::ptrdiff_t m_nMinCount_1 = 0x6A8;
                constexpr std::ptrdiff_t m_nMaxCount_1 = 0x6AC;
                constexpr std::ptrdiff_t m_nMinFactor_1 = 0x6B0;
                constexpr std::ptrdiff_t m_nMaxFactor_1 = 0x6B4;
                constexpr std::ptrdiff_t m_flDefaultDist_1 = 0x6BC;
                constexpr std::ptrdiff_t m_iszNPCClassname_2 = 0x6C0;
                constexpr std::ptrdiff_t m_nNPCState_2 = 0x6C8;
                constexpr std::ptrdiff_t m_bInvertState_2 = 0x6CC;
                constexpr std::ptrdiff_t m_nMinCount_2 = 0x6D0;
                constexpr std::ptrdiff_t m_nMaxCount_2 = 0x6D4;
                constexpr std::ptrdiff_t m_nMinFactor_2 = 0x6D8;
                constexpr std::ptrdiff_t m_nMaxFactor_2 = 0x6DC;
                constexpr std::ptrdiff_t m_flDefaultDist_2 = 0x6E4;
                constexpr std::ptrdiff_t m_iszNPCClassname_3 = 0x6E8;
                constexpr std::ptrdiff_t m_nNPCState_3 = 0x6F0;
                constexpr std::ptrdiff_t m_bInvertState_3 = 0x6F4;
                constexpr std::ptrdiff_t m_nMinCount_3 = 0x6F8;
                constexpr std::ptrdiff_t m_nMaxCount_3 = 0x6FC;
                constexpr std::ptrdiff_t m_nMinFactor_3 = 0x700;
                constexpr std::ptrdiff_t m_nMaxFactor_3 = 0x704;
                constexpr std::ptrdiff_t m_flDefaultDist_3 = 0x70C;
            }
            namespace CCSPlayer_RadioServices {
                constexpr std::ptrdiff_t m_flGotHostageTalkTimer = 0x48;
                constexpr std::ptrdiff_t m_flDefusingTalkTimer = 0x4C;
                constexpr std::ptrdiff_t m_flC4PlantTalkTimer = 0x50;
                constexpr std::ptrdiff_t m_flRadioTokenSlots = 0x54;
                constexpr std::ptrdiff_t m_bIgnoreRadio = 0x60;
            }
            namespace CWeaponSG556 {
            }
            namespace CRagdollConstraint {
                constexpr std::ptrdiff_t m_xmin = 0x508;
                constexpr std::ptrdiff_t m_xmax = 0x50C;
                constexpr std::ptrdiff_t m_ymin = 0x510;
                constexpr std::ptrdiff_t m_ymax = 0x514;
                constexpr std::ptrdiff_t m_zmin = 0x518;
                constexpr std::ptrdiff_t m_zmax = 0x51C;
                constexpr std::ptrdiff_t m_xfriction = 0x520;
                constexpr std::ptrdiff_t m_yfriction = 0x524;
                constexpr std::ptrdiff_t m_zfriction = 0x528;
            }
            namespace CFuncVehicleClip {
            }
            namespace CDEagle {
            }
            namespace CWeaponFamas {
            }
            namespace CEnvSplash {
                constexpr std::ptrdiff_t m_flScale = 0x4A8;
            }
            namespace CPointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x508;
            }
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            namespace CTestPulseIOAPI {
            }
            namespace CCSWeaponBaseShotgun {
            }
            namespace CPrecipitationVData {
                constexpr std::ptrdiff_t m_szParticlePrecipitationEffect = 0x28;
                constexpr std::ptrdiff_t m_flInnerDistance = 0x108;
                constexpr std::ptrdiff_t m_nAttachType = 0x10C;
                constexpr std::ptrdiff_t m_bBatchSameVolumeType = 0x110;
                constexpr std::ptrdiff_t m_nRTEnvCP = 0x114;
                constexpr std::ptrdiff_t m_nRTEnvCPComponent = 0x118;
                constexpr std::ptrdiff_t m_szModifier = 0x120;
            }
            namespace CFuncMoveLinear {
                constexpr std::ptrdiff_t m_authoredPosition = 0x7B0;
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7B4;
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7C0;
                constexpr std::ptrdiff_t m_soundStart = 0x7D0;
                constexpr std::ptrdiff_t m_soundStop = 0x7D8;
                constexpr std::ptrdiff_t m_currentSound = 0x7E0;
                constexpr std::ptrdiff_t m_flBlockDamage = 0x7E8;
                constexpr std::ptrdiff_t m_flStartPosition = 0x7EC;
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x7F8;
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x810;
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x828;
                constexpr std::ptrdiff_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x829;
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x82A;
            }
            namespace CPhysMotorAPI {
            }
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48;
                constexpr std::ptrdiff_t m_OnTrue = 0xC0;
            }
            namespace CScriptItem {
                constexpr std::ptrdiff_t m_MoveTypeOverride = 0xAC0;
            }
            namespace CDynamicPropAlias_prop_dynamic_override {
            }
            namespace CBaseTrigger {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x7B0;
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0x7C8;
                constexpr std::ptrdiff_t m_OnEndTouch = 0x7E0;
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0x7F8;
                constexpr std::ptrdiff_t m_OnTouching = 0x810;
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0x828;
                constexpr std::ptrdiff_t m_OnNotTouching = 0x840;
                constexpr std::ptrdiff_t m_hTouchingEntities = 0x858;
                constexpr std::ptrdiff_t m_iFilterName = 0x870;
                constexpr std::ptrdiff_t m_hFilter = 0x878;
                constexpr std::ptrdiff_t m_bDisabled = 0x87C;
                constexpr std::ptrdiff_t m_bUseAsyncQueries = 0x888;
            }
            namespace CPointPush {
                constexpr std::ptrdiff_t m_bEnabled = 0x4A8;
                constexpr std::ptrdiff_t m_flMagnitude = 0x4AC;
                constexpr std::ptrdiff_t m_flRadius = 0x4B0;
                constexpr std::ptrdiff_t m_flInnerRadius = 0x4B4;
                constexpr std::ptrdiff_t m_flConeOfInfluence = 0x4B8;
                constexpr std::ptrdiff_t m_iszFilterName = 0x4C0;
                constexpr std::ptrdiff_t m_hFilter = 0x4C8;
            }
            namespace CPulseCell_Step_EntFire {
                constexpr std::ptrdiff_t m_Input = 0x48;
            }
            namespace CCSObserver_ObserverServices {
            }
            namespace CPlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x4B0;
                constexpr std::ptrdiff_t m_hPingedEntity = 0x4B4;
                constexpr std::ptrdiff_t m_iType = 0x4B8;
                constexpr std::ptrdiff_t m_bUrgent = 0x4BC;
                constexpr std::ptrdiff_t m_szPlaceName = 0x4BD;
            }
            namespace CHitboxComponent {
                constexpr std::ptrdiff_t m_flBoundsExpandRadius = 0x14;
            }
            namespace CRopeKeyframe {
                constexpr std::ptrdiff_t m_RopeFlags = 0x738;
                constexpr std::ptrdiff_t m_iNextLinkName = 0x740;
                constexpr std::ptrdiff_t m_Slack = 0x748;
                constexpr std::ptrdiff_t m_Width = 0x74C;
                constexpr std::ptrdiff_t m_TextureScale = 0x750;
                constexpr std::ptrdiff_t m_nSegments = 0x754;
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x755;
                constexpr std::ptrdiff_t m_strRopeMaterialModel = 0x758;
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x760;
                constexpr std::ptrdiff_t m_Subdiv = 0x768;
                constexpr std::ptrdiff_t m_nChangeCount = 0x769;
                constexpr std::ptrdiff_t m_RopeLength = 0x76A;
                constexpr std::ptrdiff_t m_fLockedPoints = 0x76C;
                constexpr std::ptrdiff_t m_bCreatedFromMapFile = 0x76D;
                constexpr std::ptrdiff_t m_flScrollSpeed = 0x770;
                constexpr std::ptrdiff_t m_bStartPointValid = 0x774;
                constexpr std::ptrdiff_t m_bEndPointValid = 0x775;
                constexpr std::ptrdiff_t m_hStartPoint = 0x778;
                constexpr std::ptrdiff_t m_hEndPoint = 0x77C;
                constexpr std::ptrdiff_t m_iStartAttachment = 0x780;
                constexpr std::ptrdiff_t m_iEndAttachment = 0x781;
            }
            namespace CSmokeGrenade {
            }
            namespace CBaseCombatCharacter {
                constexpr std::ptrdiff_t m_bForceServerRagdoll = 0xAB0;
                constexpr std::ptrdiff_t m_hMyWearables = 0xAB8;
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xAD0;
                constexpr std::ptrdiff_t m_bApplyStressDamage = 0xAD4;
                constexpr std::ptrdiff_t m_bDeathEventsDispatched = 0xAD5;
                constexpr std::ptrdiff_t m_pVecRelationships = 0xB18;
                constexpr std::ptrdiff_t m_strRelationships = 0xB20;
                constexpr std::ptrdiff_t m_eHull = 0xB28;
                constexpr std::ptrdiff_t m_nNavHullIdx = 0xB2C;
                constexpr std::ptrdiff_t m_movementStats = 0xB30;
            }
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x30;
                constexpr std::ptrdiff_t unSlot = 0x32;
                constexpr std::ptrdiff_t unItemDefIdx = 0x34;
            }
            namespace CPathQueryComponent {
            }
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x4A9;
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x4AA;
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x4AB;
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x4AC;
            }
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0;
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4;
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8;
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC;
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10;
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14;
            }
            namespace CPlayer_ItemServices {
            }
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0;
                constexpr std::ptrdiff_t m_nDestChunk = 0x10;
                constexpr std::ptrdiff_t m_nInstruction = 0x14;
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18;
            }
            namespace CTestPulseIO {
                constexpr std::ptrdiff_t m_OnVariantVoid = 0x4A8;
                constexpr std::ptrdiff_t m_OnVariantBool = 0x4C0;
                constexpr std::ptrdiff_t m_OnVariantInt = 0x4E0;
                constexpr std::ptrdiff_t m_OnVariantFloat = 0x500;
                constexpr std::ptrdiff_t m_OnVariantString = 0x520;
                constexpr std::ptrdiff_t m_OnVariantColor = 0x540;
                constexpr std::ptrdiff_t m_OnVariantVector = 0x560;
                constexpr std::ptrdiff_t m_bAllowEmptyInputs = 0x588;
            }
            namespace CWeaponUMP45 {
            }
            namespace CGamePlayerEquip {
            }
            namespace CPointEntityFinder {
                constexpr std::ptrdiff_t m_hEntity = 0x4A8;
                constexpr std::ptrdiff_t m_iFilterName = 0x4B0;
                constexpr std::ptrdiff_t m_hFilter = 0x4B8;
                constexpr std::ptrdiff_t m_iRefName = 0x4C0;
                constexpr std::ptrdiff_t m_hReference = 0x4C8;
                constexpr std::ptrdiff_t m_FindMethod = 0x4CC;
                constexpr std::ptrdiff_t m_OnFoundEntity = 0x4D0;
            }
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8;
                constexpr std::ptrdiff_t m_DomainSubType = 0x18;
                constexpr std::ptrdiff_t m_ParentMapName = 0x30;
                constexpr std::ptrdiff_t m_ParentXmlName = 0x40;
                constexpr std::ptrdiff_t m_Chunks = 0x50;
                constexpr std::ptrdiff_t m_Cells = 0x68;
                constexpr std::ptrdiff_t m_Vars = 0x80;
                constexpr std::ptrdiff_t m_PublicOutputs = 0x98;
                constexpr std::ptrdiff_t m_InvokeBindings = 0xB0;
                constexpr std::ptrdiff_t m_CallInfos = 0xC8;
                constexpr std::ptrdiff_t m_Constants = 0xE0;
                constexpr std::ptrdiff_t m_DomainValues = 0xF8;
                constexpr std::ptrdiff_t m_BlackboardReferences = 0x110;
                constexpr std::ptrdiff_t m_OutputConnections = 0x128;
            }
            namespace CKnife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x1130;
            }
            namespace CLogicPlayerProxy {
                constexpr std::ptrdiff_t m_PlayerHasAmmo = 0x4A8;
                constexpr std::ptrdiff_t m_PlayerHasNoAmmo = 0x4C0;
                constexpr std::ptrdiff_t m_PlayerDied = 0x4D8;
                constexpr std::ptrdiff_t m_RequestedPlayerHealth = 0x4F0;
                constexpr std::ptrdiff_t m_hPlayer = 0x510;
            }
            namespace CCSGO_TeamIntroCharacterPosition {
            }
            namespace CBasePlayerControllerAPI {
            }
            namespace CHostageRescueZoneShim {
            }
            namespace CSimpleMarkupVolumeTagged {
            }
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x48;
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x4C;
            }
            namespace CRenderComponent {
                constexpr std::ptrdiff_t _m_pChainEntity = 0x10;
                constexpr std::ptrdiff_t m_bIsRenderingWithViewModels = 0x50;
                constexpr std::ptrdiff_t m_nSplitscreenFlags = 0x54;
                constexpr std::ptrdiff_t m_bEnableRendering = 0x58;
                constexpr std::ptrdiff_t m_bInterpolationReadyToDraw = 0xA8;
            }
            namespace CWaterBullet {
            }
            namespace CTriggerSoundscape {
                constexpr std::ptrdiff_t m_hSoundscape = 0x890;
                constexpr std::ptrdiff_t m_SoundscapeName = 0x898;
                constexpr std::ptrdiff_t m_spectators = 0x8A0;
            }
            namespace CPointTeleportAPI {
            }
            namespace CHostageExpresserShim {
                constexpr std::ptrdiff_t m_pExpresser = 0xB70;
            }
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x4A8;
            }
            namespace CCSPlayerLegacyJump {
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x10;
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x14;
            }
            namespace CWeaponHKP2000 {
            }
            namespace CShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_bDebris = 0xCE0;
                constexpr std::ptrdiff_t m_hParentShard = 0xCE4;
                constexpr std::ptrdiff_t m_ShardDesc = 0xCE8;
            }
            namespace CPathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x4B0;
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x4B4;
                constexpr std::ptrdiff_t m_iszEffectName = 0x4B8;
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x4C0;
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x4D8;
                constexpr std::ptrdiff_t m_flSlack = 0x4DC;
                constexpr std::ptrdiff_t m_flRadius = 0x4E0;
                constexpr std::ptrdiff_t m_ColorTint = 0x4E4;
                constexpr std::ptrdiff_t m_nEffectState = 0x4E8;
                constexpr std::ptrdiff_t m_iEffectIndex = 0x4F0;
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x4F8;
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x510;
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x528;
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x540;
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x558;
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x570;
            }
            namespace CCredits {
                constexpr std::ptrdiff_t m_OnCreditsDone = 0x4A8;
                constexpr std::ptrdiff_t m_bRolledOutroCredits = 0x4C0;
                constexpr std::ptrdiff_t m_flLogoLength = 0x4C4;
            }
            namespace CWeaponFiveSeven {
            }
            namespace CFishPool {
                constexpr std::ptrdiff_t m_fishCount = 0x4B8;
                constexpr std::ptrdiff_t m_maxRange = 0x4BC;
                constexpr std::ptrdiff_t m_swimDepth = 0x4C0;
                constexpr std::ptrdiff_t m_waterLevel = 0x4C4;
                constexpr std::ptrdiff_t m_isDormant = 0x4C8;
                constexpr std::ptrdiff_t m_fishes = 0x4D0;
                constexpr std::ptrdiff_t m_visTimer = 0x4E8;
            }
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x48;
                constexpr std::ptrdiff_t m_nButtons = 0x50;
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x70;
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x78;
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x80;
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x88;
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x188;
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x190;
                constexpr std::ptrdiff_t m_flMaxspeed = 0x1A0;
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x1A4;
                constexpr std::ptrdiff_t m_flForwardMove = 0x1B4;
                constexpr std::ptrdiff_t m_flLeftMove = 0x1B8;
                constexpr std::ptrdiff_t m_flUpMove = 0x1BC;
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1C0;
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x228;
            }
            namespace CRagdollPropAlias_physics_prop_ragdoll {
            }
            namespace CBreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0xA58;
                constexpr std::ptrdiff_t m_OnStartDeath = 0xA98;
                constexpr std::ptrdiff_t m_OnBreak = 0xAB0;
                constexpr std::ptrdiff_t m_OnHealthChanged = 0xAC8;
                constexpr std::ptrdiff_t m_OnTakeDamage = 0xAE8;
                constexpr std::ptrdiff_t m_impactEnergyScale = 0xB00;
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0xB04;
                constexpr std::ptrdiff_t m_preferredCarryAngles = 0xB08;
                constexpr std::ptrdiff_t m_flPressureDelay = 0xB14;
                constexpr std::ptrdiff_t m_flDefBurstScale = 0xB18;
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0xB1C;
                constexpr std::ptrdiff_t m_hBreaker = 0xB28;
                constexpr std::ptrdiff_t m_PerformanceMode = 0xB2C;
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0xB30;
                constexpr std::ptrdiff_t m_BreakableContentsType = 0xB34;
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0xB38;
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0xB40;
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0xB48;
                constexpr std::ptrdiff_t m_explodeDamage = 0xB4C;
                constexpr std::ptrdiff_t m_explodeRadius = 0xB50;
                constexpr std::ptrdiff_t m_nExplosionType = 0xB54;
                constexpr std::ptrdiff_t m_explosionDelay = 0xB58;
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0xB60;
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0xB68;
                constexpr std::ptrdiff_t m_explosionCustomSound = 0xB70;
                constexpr std::ptrdiff_t m_explosionModifier = 0xB78;
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xB80;
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xB84;
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xB88;
                constexpr std::ptrdiff_t m_hLastAttacker = 0xB8C;
                constexpr std::ptrdiff_t m_iszPuntSound = 0xB90;
                constexpr std::ptrdiff_t m_bUsePuntSound = 0xB98;
                constexpr std::ptrdiff_t m_bOriginalBlockLOS = 0xB99;
            }
            namespace CLightEntity {
                constexpr std::ptrdiff_t m_CLightComponent = 0x730;
            }
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x4C0;
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4CC;
            }
            namespace CBaseAnimGraphController {
                constexpr std::ptrdiff_t m_nAnimationAlgorithm = 0x18;
                constexpr std::ptrdiff_t m_animGraphNetworkedVars = 0x20;
                constexpr std::ptrdiff_t m_pAnimGraphInstance = 0x228;
                constexpr std::ptrdiff_t m_nNextExternalGraphHandle = 0x288;
                constexpr std::ptrdiff_t m_vecSecondarySkeletonNames = 0x290;
                constexpr std::ptrdiff_t m_vecSecondarySkeletons = 0x2A8;
                constexpr std::ptrdiff_t m_nSecondarySkeletonMasterCount = 0x2C0;
                constexpr std::ptrdiff_t m_flSoundSyncTime = 0x2C4;
                constexpr std::ptrdiff_t m_nActiveIKChainMask = 0x2C8;
                constexpr std::ptrdiff_t m_hSequence = 0x2CC;
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x2D0;
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x2D4;
                constexpr std::ptrdiff_t m_nAnimLoopMode = 0x2D8;
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x2DC;
                constexpr std::ptrdiff_t m_nNotifyState = 0x2E8;
                constexpr std::ptrdiff_t m_bNetworkedAnimationInputsChanged = 0x2E9;
                constexpr std::ptrdiff_t m_bNetworkedSequenceChanged = 0x2EA;
                constexpr std::ptrdiff_t m_bLastUpdateSkipped = 0x2EB;
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x2EC;
                constexpr std::ptrdiff_t m_nPrevAnimUpdateTick = 0x2F0;
                constexpr std::ptrdiff_t m_hGraphDefinitionAG2 = 0x590;
                constexpr std::ptrdiff_t m_serializedPoseRecipeAG2 = 0x598;
                constexpr std::ptrdiff_t m_nSerializePoseRecipeSizeAG2 = 0x5B0;
                constexpr std::ptrdiff_t m_nSerializePoseRecipeVersionAG2 = 0x5B4;
                constexpr std::ptrdiff_t m_nServerGraphInstanceIteration = 0x5B8;
                constexpr std::ptrdiff_t m_nServerSerializationContextIteration = 0x5BC;
                constexpr std::ptrdiff_t m_primaryGraphId = 0x5C0;
                constexpr std::ptrdiff_t m_vecExternalGraphIds = 0x5C8;
                constexpr std::ptrdiff_t m_vecExternalClipIds = 0x5E0;
                constexpr std::ptrdiff_t m_sAnimGraph2Identifier = 0x5F8;
                constexpr std::ptrdiff_t m_vecExternalGraphs = 0x820;
            }
            namespace CBuoyancyHelper {
                constexpr std::ptrdiff_t m_nFluidType = 0x18;
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1C;
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantGravity = 0x20;
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantLinearDamping = 0x24;
                constexpr std::ptrdiff_t m_flNeutrallyBuoyantAngularDamping = 0x28;
                constexpr std::ptrdiff_t m_bNeutrallyBuoyant = 0x2C;
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelFriction = 0x30;
                constexpr std::ptrdiff_t m_vecWheelFrictionScales = 0x48;
                constexpr std::ptrdiff_t m_vecFractionOfWheelSubmergedForWheelDrag = 0x60;
                constexpr std::ptrdiff_t m_vecWheelDrag = 0x78;
            }
            namespace COrnamentProp {
                constexpr std::ptrdiff_t m_initialOwner = 0xC50;
            }
            namespace CCSPlayer_CameraServices {
            }
            namespace CModelPointEntity {
            }
            namespace CRectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0xA20;
            }
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x4E0;
                constexpr std::ptrdiff_t m_iFilterName = 0x4E8;
                constexpr std::ptrdiff_t m_hFilter = 0x538;
            }
            namespace CCSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x4A8;
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x4B4;
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x4C0;
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x4F0;
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x4FC;
                constexpr std::ptrdiff_t m_hostageRescueX = 0x508;
                constexpr std::ptrdiff_t m_hostageRescueY = 0x518;
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x528;
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x538;
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x539;
            }
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0x48;
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60;
                constexpr std::ptrdiff_t m_OnFinished = 0x68;
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0;
            }
            namespace CFuncNavBlocker {
                constexpr std::ptrdiff_t m_bDisabled = 0x738;
                constexpr std::ptrdiff_t m_nBlockedTeamNumber = 0x73C;
            }
            namespace CMoverPathNode {
                constexpr std::ptrdiff_t m_OnStartFromOrInSegment = 0x500;
                constexpr std::ptrdiff_t m_OnStoppedAtOrInSegment = 0x520;
                constexpr std::ptrdiff_t m_OnPassThrough = 0x540;
                constexpr std::ptrdiff_t m_OnPassThroughForward = 0x560;
                constexpr std::ptrdiff_t m_OnPassThroughReverse = 0x580;
            }
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x4A8;
                constexpr std::ptrdiff_t m_flRadius = 0x4C0;
                constexpr std::ptrdiff_t m_soundEventName = 0x4C8;
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x4D0;
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x4D4;
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x4D8;
                constexpr std::ptrdiff_t m_positionNames = 0x4E0;
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x520;
                constexpr std::ptrdiff_t m_bDisabled = 0x524;
                constexpr std::ptrdiff_t m_soundscapeName = 0x528;
                constexpr std::ptrdiff_t m_soundEventHash = 0x530;
            }
            namespace CFuncBrush {
                constexpr std::ptrdiff_t m_iSolidity = 0x730;
                constexpr std::ptrdiff_t m_iDisabled = 0x734;
                constexpr std::ptrdiff_t m_bSolidBsp = 0x738;
                constexpr std::ptrdiff_t m_iszExcludedClass = 0x740;
                constexpr std::ptrdiff_t m_bInvertExclusion = 0x748;
                constexpr std::ptrdiff_t m_bScriptedMovement = 0x749;
            }
            namespace CBodyComponentPoint {
                constexpr std::ptrdiff_t m_sceneNode = 0x80;
            }
            namespace CPhysBox {
                constexpr std::ptrdiff_t m_damageType = 0x808;
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0x80C;
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0x810;
                constexpr std::ptrdiff_t m_vHoverPosePosition = 0x814;
                constexpr std::ptrdiff_t m_angHoverPoseAngles = 0x820;
                constexpr std::ptrdiff_t m_bNotSolidToWorld = 0x82C;
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0x82D;
                constexpr std::ptrdiff_t m_nHoverPoseFlags = 0x82E;
                constexpr std::ptrdiff_t m_flTouchOutputPerEntityDelay = 0x830;
                constexpr std::ptrdiff_t m_OnDamaged = 0x838;
                constexpr std::ptrdiff_t m_OnAwakened = 0x850;
                constexpr std::ptrdiff_t m_OnMotionEnabled = 0x868;
                constexpr std::ptrdiff_t m_OnPlayerUse = 0x880;
                constexpr std::ptrdiff_t m_OnStartTouch = 0x898;
                constexpr std::ptrdiff_t m_hCarryingPlayer = 0x8B0;
            }
            namespace CSoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x558;
                constexpr std::ptrdiff_t m_vMaxs = 0x564;
            }
            namespace CItemSoda {
            }
            namespace CPulseCell_Timeline_TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0;
                constexpr std::ptrdiff_t m_EventOutflow = 0x8;
            }
            namespace COmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0xA20;
                constexpr std::ptrdiff_t m_flOuterAngle = 0xA24;
                constexpr std::ptrdiff_t m_bShowLight = 0xA28;
            }
            namespace CTriggerVolume {
                constexpr std::ptrdiff_t m_iFilterName = 0x730;
                constexpr std::ptrdiff_t m_hFilter = 0x738;
            }
            namespace CBtNodeCondition {
                constexpr std::ptrdiff_t m_bNegated = 0x58;
            }
            namespace CPulseCell_IntervalTimer_CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0;
                constexpr std::ptrdiff_t m_EndTime = 0x4;
                constexpr std::ptrdiff_t m_flWaitInterval = 0x8;
                constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xC;
                constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10;
            }
            namespace CPulseCell_BaseRequirement {
            }
            namespace CEnvExplosion {
                constexpr std::ptrdiff_t m_iMagnitude = 0x730;
                constexpr std::ptrdiff_t m_flPlayerDamage = 0x734;
                constexpr std::ptrdiff_t m_iRadiusOverride = 0x738;
                constexpr std::ptrdiff_t m_flInnerRadius = 0x73C;
                constexpr std::ptrdiff_t m_flDamageForce = 0x740;
                constexpr std::ptrdiff_t m_hInflictor = 0x744;
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x748;
                constexpr std::ptrdiff_t m_bCreateDebris = 0x74C;
                constexpr std::ptrdiff_t m_iszCustomEffectName = 0x758;
                constexpr std::ptrdiff_t m_iszCustomSoundName = 0x760;
                constexpr std::ptrdiff_t m_bSuppressParticleImpulse = 0x768;
                constexpr std::ptrdiff_t m_iClassIgnore = 0x76C;
                constexpr std::ptrdiff_t m_iClassIgnore2 = 0x770;
                constexpr std::ptrdiff_t m_iszEntityIgnoreName = 0x778;
                constexpr std::ptrdiff_t m_hEntityIgnore = 0x780;
            }
            namespace CPulseCell_BaseState {
            }
            namespace OutflowWithRequirements_t {
                constexpr std::ptrdiff_t m_Connection = 0x0;
                constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48;
                constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50;
                constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68;
            }
            namespace CPulseCell_IsRequirementValid {
            }
            namespace CFootstepControl {
                constexpr std::ptrdiff_t m_source = 0x890;
                constexpr std::ptrdiff_t m_destination = 0x898;
            }
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x48;
                constexpr std::ptrdiff_t m_bHasHelmet = 0x49;
            }
            namespace CPulseCell_Value_Gradient {
                constexpr std::ptrdiff_t m_Gradient = 0x48;
            }
            namespace CParticleSystem {
                constexpr std::ptrdiff_t m_szSnapshotFileName = 0x730;
                constexpr std::ptrdiff_t m_bActive = 0x930;
                constexpr std::ptrdiff_t m_bFrozen = 0x931;
                constexpr std::ptrdiff_t m_flFreezeTransitionDuration = 0x934;
                constexpr std::ptrdiff_t m_nStopType = 0x938;
                constexpr std::ptrdiff_t m_bAnimateDuringGameplayPause = 0x93C;
                constexpr std::ptrdiff_t m_iEffectIndex = 0x940;
                constexpr std::ptrdiff_t m_flStartTime = 0x948;
                constexpr std::ptrdiff_t m_flPreSimTime = 0x94C;
                constexpr std::ptrdiff_t m_vServerControlPoints = 0x950;
                constexpr std::ptrdiff_t m_iServerControlPointAssignments = 0x980;
                constexpr std::ptrdiff_t m_hControlPointEnts = 0x984;
                constexpr std::ptrdiff_t m_bNoSave = 0xA84;
                constexpr std::ptrdiff_t m_bNoFreeze = 0xA85;
                constexpr std::ptrdiff_t m_bNoRamp = 0xA86;
                constexpr std::ptrdiff_t m_bStartActive = 0xA87;
                constexpr std::ptrdiff_t m_iszEffectName = 0xA88;
                constexpr std::ptrdiff_t m_iszControlPointNames = 0xA90;
                constexpr std::ptrdiff_t m_nDataCP = 0xC90;
                constexpr std::ptrdiff_t m_vecDataCPValue = 0xC94;
                constexpr std::ptrdiff_t m_nTintCP = 0xCA0;
                constexpr std::ptrdiff_t m_clrTint = 0xCA4;
            }
            namespace CTriggerBrush {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x730;
                constexpr std::ptrdiff_t m_OnEndTouch = 0x748;
                constexpr std::ptrdiff_t m_OnUse = 0x760;
                constexpr std::ptrdiff_t m_iInputFilter = 0x778;
                constexpr std::ptrdiff_t m_iDontMessageParent = 0x77C;
            }
            namespace IntervalTimer {
                constexpr std::ptrdiff_t m_timestamp = 0x8;
                constexpr std::ptrdiff_t m_nWorldGroupId = 0xC;
            }
            namespace audioparams_t {
                constexpr std::ptrdiff_t localSound = 0x8;
                constexpr std::ptrdiff_t soundscapeIndex = 0x68;
                constexpr std::ptrdiff_t localBits = 0x6C;
                constexpr std::ptrdiff_t soundscapeEntityListIndex = 0x70;
                constexpr std::ptrdiff_t soundEventHash = 0x74;
            }
            namespace CSoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x4B0;
                constexpr std::ptrdiff_t m_vPos = 0x4B8;
            }
            namespace CWeaponM4A1Silencer {
            }
            namespace CTimeline {
                constexpr std::ptrdiff_t m_flValues = 0x10;
                constexpr std::ptrdiff_t m_nValueCounts = 0x110;
                constexpr std::ptrdiff_t m_nBucketCount = 0x210;
                constexpr std::ptrdiff_t m_flInterval = 0x214;
                constexpr std::ptrdiff_t m_flFinalValue = 0x218;
                constexpr std::ptrdiff_t m_nCompressionType = 0x21C;
                constexpr std::ptrdiff_t m_bStopped = 0x220;
            }
            namespace CPulseCursorFuncs {
            }
            namespace CountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8;
                constexpr std::ptrdiff_t m_timestamp = 0xC;
                constexpr std::ptrdiff_t m_timescale = 0x10;
                constexpr std::ptrdiff_t m_nWorldGroupId = 0x14;
            }
            namespace PulseNodeDynamicOutflows_t_DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0;
                constexpr std::ptrdiff_t m_Connection = 0x8;
            }
            namespace CItemAssaultSuit {
            }
            namespace CBeam {
                constexpr std::ptrdiff_t m_flFrameRate = 0x730;
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x734;
                constexpr std::ptrdiff_t m_flFireTime = 0x738;
                constexpr std::ptrdiff_t m_flDamage = 0x73C;
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x740;
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x748;
                constexpr std::ptrdiff_t m_nHaloIndex = 0x750;
                constexpr std::ptrdiff_t m_nBeamType = 0x758;
                constexpr std::ptrdiff_t m_nBeamFlags = 0x75C;
                constexpr std::ptrdiff_t m_hAttachEntity = 0x760;
                constexpr std::ptrdiff_t m_nAttachIndex = 0x788;
                constexpr std::ptrdiff_t m_fWidth = 0x794;
                constexpr std::ptrdiff_t m_fEndWidth = 0x798;
                constexpr std::ptrdiff_t m_fFadeLength = 0x79C;
                constexpr std::ptrdiff_t m_fHaloScale = 0x7A0;
                constexpr std::ptrdiff_t m_fAmplitude = 0x7A4;
                constexpr std::ptrdiff_t m_fStartFrame = 0x7A8;
                constexpr std::ptrdiff_t m_fSpeed = 0x7AC;
                constexpr std::ptrdiff_t m_flFrame = 0x7B0;
                constexpr std::ptrdiff_t m_nClipStyle = 0x7B4;
                constexpr std::ptrdiff_t m_bTurnedOff = 0x7B8;
                constexpr std::ptrdiff_t m_vecEndPos = 0x7BC;
                constexpr std::ptrdiff_t m_hEndEntity = 0x7C8;
                constexpr std::ptrdiff_t m_nDissolveType = 0x7CC;
            }
            namespace CLogicEventListener {
                constexpr std::ptrdiff_t m_strEventName = 0x4B8;
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4C0;
                constexpr std::ptrdiff_t m_nTeam = 0x4C4;
                constexpr std::ptrdiff_t m_OnEventFired = 0x4C8;
            }
            namespace CCSGO_TeamSelectTerroristPosition {
            }
            namespace CInfoData {
            }
            namespace CWeaponNegev {
            }
            namespace CWeaponElite {
            }
            namespace CBasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0xB70;
                constexpr std::ptrdiff_t m_pItemServices = 0xB78;
                constexpr std::ptrdiff_t m_pAutoaimServices = 0xB80;
                constexpr std::ptrdiff_t m_pObserverServices = 0xB88;
                constexpr std::ptrdiff_t m_pWaterServices = 0xB90;
                constexpr std::ptrdiff_t m_pUseServices = 0xB98;
                constexpr std::ptrdiff_t m_pFlashlightServices = 0xBA0;
                constexpr std::ptrdiff_t m_pCameraServices = 0xBA8;
                constexpr std::ptrdiff_t m_pMovementServices = 0xBB0;
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0xBC0;
                constexpr std::ptrdiff_t v_angle = 0xC28;
                constexpr std::ptrdiff_t v_anglePrevious = 0xC34;
                constexpr std::ptrdiff_t m_iHideHUD = 0xC40;
                constexpr std::ptrdiff_t m_skybox3d = 0xC48;
                constexpr std::ptrdiff_t m_fTimeLastHurt = 0xCD8;
                constexpr std::ptrdiff_t m_flDeathTime = 0xCDC;
                constexpr std::ptrdiff_t m_fNextSuicideTime = 0xCE0;
                constexpr std::ptrdiff_t m_fInitHUD = 0xCE4;
                constexpr std::ptrdiff_t m_pExpresser = 0xCE8;
                constexpr std::ptrdiff_t m_hController = 0xCF0;
                constexpr std::ptrdiff_t m_hDefaultController = 0xCF4;
                constexpr std::ptrdiff_t m_fHltvReplayDelay = 0xCFC;
                constexpr std::ptrdiff_t m_fHltvReplayEnd = 0xD00;
                constexpr std::ptrdiff_t m_iHltvReplayEntity = 0xD04;
                constexpr std::ptrdiff_t m_sndOpvarLatchData = 0xD08;
            }
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30;
                constexpr std::ptrdiff_t m_nCount = 0x32;
            }
            namespace CBasePulseGraphInstance {
            }
            namespace FilterHealth {
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x4E0;
                constexpr std::ptrdiff_t m_iHealthMin = 0x4E4;
                constexpr std::ptrdiff_t m_iHealthMax = 0x4E8;
            }
            namespace CCSSprite {
            }
            namespace CMathColorBlend {
                constexpr std::ptrdiff_t m_flInMin = 0x4A8;
                constexpr std::ptrdiff_t m_flInMax = 0x4AC;
                constexpr std::ptrdiff_t m_OutColor1 = 0x4B0;
                constexpr std::ptrdiff_t m_OutColor2 = 0x4B4;
                constexpr std::ptrdiff_t m_OutValue = 0x4B8;
            }
            namespace CShower {
            }
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80;
            }
            namespace CScriptNavBlocker {
                constexpr std::ptrdiff_t m_vExtent = 0x748;
            }
            namespace CEntityBlocker {
            }
            namespace SignatureOutflow_Resume {
            }
            namespace CPathSimpleAPI {
            }
            namespace CCSObserverPawn {
            }
            namespace CTriggerActiveWeaponDetect {
                constexpr std::ptrdiff_t m_OnTouchedActiveWeapon = 0x890;
                constexpr std::ptrdiff_t m_iszWeaponClassName = 0x8A8;
            }
            namespace CFuncLadderAlias_func_useableladder {
            }
            namespace CSpriteOriented {
            }
            namespace CPointServerCommand {
            }
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8;
                constexpr std::ptrdiff_t m_hMaterialBase = 0x10;
                constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18;
                constexpr std::ptrdiff_t m_solid = 0x20;
                constexpr std::ptrdiff_t m_vecPanelSize = 0x24;
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x2C;
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x34;
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x40;
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58;
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70;
                constexpr std::ptrdiff_t m_bHasParent = 0x74;
                constexpr std::ptrdiff_t m_bParentFrozen = 0x75;
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78;
            }
            namespace CPlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0x730;
                constexpr std::ptrdiff_t m_unAccountID = 0x734;
                constexpr std::ptrdiff_t m_unTraceID = 0x738;
                constexpr std::ptrdiff_t m_rtGcTime = 0x73C;
                constexpr std::ptrdiff_t m_vecEndPos = 0x740;
                constexpr std::ptrdiff_t m_vecStart = 0x74C;
                constexpr std::ptrdiff_t m_vecLeft = 0x758;
                constexpr std::ptrdiff_t m_vecNormal = 0x764;
                constexpr std::ptrdiff_t m_nPlayer = 0x770;
                constexpr std::ptrdiff_t m_nEntity = 0x774;
                constexpr std::ptrdiff_t m_nHitbox = 0x778;
                constexpr std::ptrdiff_t m_flCreationTime = 0x77C;
                constexpr std::ptrdiff_t m_nTintID = 0x780;
                constexpr std::ptrdiff_t m_nVersion = 0x784;
                constexpr std::ptrdiff_t m_ubSignature = 0x785;
            }
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x730;
            }
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t _m_pChainEntity = 0x8;
            }
            namespace CEconEntity {
                constexpr std::ptrdiff_t m_AttributeManager = 0xAC0;
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0xDB8;
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0xDBC;
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0xDC0;
                constexpr std::ptrdiff_t m_nFallbackSeed = 0xDC4;
                constexpr std::ptrdiff_t m_flFallbackWear = 0xDC8;
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0xDCC;
                constexpr std::ptrdiff_t m_hOldProvidee = 0xDD0;
                constexpr std::ptrdiff_t m_iOldOwnerClass = 0xDD4;
            }
            namespace CTankTargetChange {
                constexpr std::ptrdiff_t m_newTarget = 0x4A8;
                constexpr std::ptrdiff_t m_newTargetName = 0x4B8;
            }
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_NextDrownDamageTime = 0x48;
                constexpr std::ptrdiff_t m_nDrownDmgRate = 0x4C;
                constexpr std::ptrdiff_t m_AirFinishedTime = 0x50;
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x54;
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x58;
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x64;
            }
            namespace CLogicDistanceCheck {
                constexpr std::ptrdiff_t m_iszEntityA = 0x4A8;
                constexpr std::ptrdiff_t m_iszEntityB = 0x4B0;
                constexpr std::ptrdiff_t m_flZone1Distance = 0x4B8;
                constexpr std::ptrdiff_t m_flZone2Distance = 0x4BC;
                constexpr std::ptrdiff_t m_InZone1 = 0x4C0;
                constexpr std::ptrdiff_t m_InZone2 = 0x4D8;
                constexpr std::ptrdiff_t m_InZone3 = 0x4F0;
            }
            namespace CEnvCombinedLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_Color = 0x1520;
                constexpr std::ptrdiff_t m_Entity_flBrightness = 0x1524;
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x1528;
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x1530;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x1538;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x1540;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x1548;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x1550;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x1558;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x1560;
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1568;
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1570;
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1578;
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x1580;
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x158C;
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1598;
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x159C;
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x15A0;
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x15A4;
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x15A8;
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x15AC;
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x15B0;
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x15BC;
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x15C0;
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x15C4;
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x15C8;
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x15CC;
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x15D0;
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x15E9;
            }
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30;
                constexpr std::ptrdiff_t qAngle = 0x34;
                constexpr std::ptrdiff_t nIndex = 0x40;
            }
            namespace CLogicDistanceAutosave {
                constexpr std::ptrdiff_t m_iszTargetEntity = 0x4A8;
                constexpr std::ptrdiff_t m_flDistanceToPlayer = 0x4B0;
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4B4;
                constexpr std::ptrdiff_t m_bCheckCough = 0x4B5;
                constexpr std::ptrdiff_t m_bThinkDangerous = 0x4B6;
                constexpr std::ptrdiff_t m_flDangerousTime = 0x4B8;
            }
            namespace CLogicBranch {
                constexpr std::ptrdiff_t m_bInValue = 0x4A8;
                constexpr std::ptrdiff_t m_Listeners = 0x4B0;
                constexpr std::ptrdiff_t m_OnTrue = 0x4C8;
                constexpr std::ptrdiff_t m_OnFalse = 0x4E0;
            }
            namespace CPulseCell_Outflow_ScriptedSequence {
                constexpr std::ptrdiff_t m_szSyncGroup = 0x48;
                constexpr std::ptrdiff_t m_nExpectedNumSequencesInSyncGroup = 0x50;
                constexpr std::ptrdiff_t m_bEnsureOnNavmeshOnFinish = 0x54;
                constexpr std::ptrdiff_t m_bDontTeleportAtEnd = 0x55;
                constexpr std::ptrdiff_t m_bDisallowInterrupts = 0x56;
                constexpr std::ptrdiff_t m_scriptedSequenceDataMain = 0x58;
                constexpr std::ptrdiff_t m_vecAdditionalActors = 0x90;
                constexpr std::ptrdiff_t m_OnFinished = 0xA8;
                constexpr std::ptrdiff_t m_OnCanceled = 0xF0;
                constexpr std::ptrdiff_t m_Triggers = 0x138;
            }
            namespace CFuncTrackChange {
                constexpr std::ptrdiff_t m_trackTop = 0x7F8;
                constexpr std::ptrdiff_t m_trackBottom = 0x800;
                constexpr std::ptrdiff_t m_train = 0x808;
                constexpr std::ptrdiff_t m_trackTopName = 0x810;
                constexpr std::ptrdiff_t m_trackBottomName = 0x818;
                constexpr std::ptrdiff_t m_trainName = 0x820;
                constexpr std::ptrdiff_t m_code = 0x828;
                constexpr std::ptrdiff_t m_targetState = 0x82C;
                constexpr std::ptrdiff_t m_use = 0x830;
            }
            namespace CFuncTrackTrain {
                constexpr std::ptrdiff_t m_ppath = 0x730;
                constexpr std::ptrdiff_t m_length = 0x734;
                constexpr std::ptrdiff_t m_vPosPrev = 0x738;
                constexpr std::ptrdiff_t m_angPrev = 0x744;
                constexpr std::ptrdiff_t m_controlMins = 0x750;
                constexpr std::ptrdiff_t m_controlMaxs = 0x75C;
                constexpr std::ptrdiff_t m_lastBlockPos = 0x768;
                constexpr std::ptrdiff_t m_lastBlockTick = 0x774;
                constexpr std::ptrdiff_t m_flVolume = 0x778;
                constexpr std::ptrdiff_t m_flBank = 0x77C;
                constexpr std::ptrdiff_t m_oldSpeed = 0x780;
                constexpr std::ptrdiff_t m_flBlockDamage = 0x784;
                constexpr std::ptrdiff_t m_height = 0x788;
                constexpr std::ptrdiff_t m_maxSpeed = 0x78C;
                constexpr std::ptrdiff_t m_dir = 0x790;
                constexpr std::ptrdiff_t m_iszSoundMove = 0x798;
                constexpr std::ptrdiff_t m_iszSoundMovePing = 0x7A0;
                constexpr std::ptrdiff_t m_iszSoundStart = 0x7A8;
                constexpr std::ptrdiff_t m_iszSoundStop = 0x7B0;
                constexpr std::ptrdiff_t m_strPathTarget = 0x7B8;
                constexpr std::ptrdiff_t m_flMoveSoundMinDuration = 0x7C0;
                constexpr std::ptrdiff_t m_flMoveSoundMaxDuration = 0x7C4;
                constexpr std::ptrdiff_t m_flNextMoveSoundTime = 0x7C8;
                constexpr std::ptrdiff_t m_flMoveSoundMinPitch = 0x7CC;
                constexpr std::ptrdiff_t m_flMoveSoundMaxPitch = 0x7D0;
                constexpr std::ptrdiff_t m_eOrientationType = 0x7D4;
                constexpr std::ptrdiff_t m_eVelocityType = 0x7D8;
                constexpr std::ptrdiff_t m_OnStart = 0x7F0;
                constexpr std::ptrdiff_t m_OnNext = 0x808;
                constexpr std::ptrdiff_t m_OnArrivedAtDestinationNode = 0x820;
                constexpr std::ptrdiff_t m_bManualSpeedChanges = 0x838;
                constexpr std::ptrdiff_t m_flDesiredSpeed = 0x83C;
                constexpr std::ptrdiff_t m_flSpeedChangeTime = 0x840;
                constexpr std::ptrdiff_t m_flAccelSpeed = 0x844;
                constexpr std::ptrdiff_t m_flDecelSpeed = 0x848;
                constexpr std::ptrdiff_t m_bAccelToSpeed = 0x84C;
                constexpr std::ptrdiff_t m_flNextMPSoundTime = 0x850;
            }
            namespace CEnvInstructorHint {
                constexpr std::ptrdiff_t m_iszName = 0x4A8;
                constexpr std::ptrdiff_t m_iszReplace_Key = 0x4B0;
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4B8;
                constexpr std::ptrdiff_t m_iTimeout = 0x4C0;
                constexpr std::ptrdiff_t m_iDisplayLimit = 0x4C4;
                constexpr std::ptrdiff_t m_iszIcon_Onscreen = 0x4C8;
                constexpr std::ptrdiff_t m_iszIcon_Offscreen = 0x4D0;
                constexpr std::ptrdiff_t m_iszCaption = 0x4D8;
                constexpr std::ptrdiff_t m_iszActivatorCaption = 0x4E0;
                constexpr std::ptrdiff_t m_Color = 0x4E8;
                constexpr std::ptrdiff_t m_fIconOffset = 0x4EC;
                constexpr std::ptrdiff_t m_fRange = 0x4F0;
                constexpr std::ptrdiff_t m_iPulseOption = 0x4F4;
                constexpr std::ptrdiff_t m_iAlphaOption = 0x4F5;
                constexpr std::ptrdiff_t m_iShakeOption = 0x4F6;
                constexpr std::ptrdiff_t m_bStatic = 0x4F7;
                constexpr std::ptrdiff_t m_bNoOffscreen = 0x4F8;
                constexpr std::ptrdiff_t m_bForceCaption = 0x4F9;
                constexpr std::ptrdiff_t m_iInstanceType = 0x4FC;
                constexpr std::ptrdiff_t m_bSuppressRest = 0x500;
                constexpr std::ptrdiff_t m_iszBinding = 0x508;
                constexpr std::ptrdiff_t m_bAllowNoDrawTarget = 0x510;
                constexpr std::ptrdiff_t m_bAutoStart = 0x511;
                constexpr std::ptrdiff_t m_bLocalPlayerOnly = 0x512;
            }
            namespace CEnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x4A8;
            }
            namespace CSoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_iszPathCorner = 0x558;
                constexpr std::ptrdiff_t m_iCountMax = 0x560;
                constexpr std::ptrdiff_t m_flDistanceMax = 0x564;
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x568;
                constexpr std::ptrdiff_t m_flDotProductMax = 0x56C;
                constexpr std::ptrdiff_t m_bPlaying = 0x570;
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x598;
            }
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x178;
                constexpr std::ptrdiff_t m_iFOVStart = 0x17C;
                constexpr std::ptrdiff_t m_flFOVTime = 0x180;
                constexpr std::ptrdiff_t m_flFOVRate = 0x184;
                constexpr std::ptrdiff_t m_hZoomOwner = 0x188;
                constexpr std::ptrdiff_t m_hTriggerFogList = 0x190;
                constexpr std::ptrdiff_t m_hLastFogTrigger = 0x1A8;
            }
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48;
                constexpr std::ptrdiff_t m_RegisterMap = 0x50;
            }
            namespace CDynamicNavConnectionsVolume {
                constexpr std::ptrdiff_t m_iszConnectionTarget = 0x8A8;
                constexpr std::ptrdiff_t m_vecConnections = 0x8B0;
                constexpr std::ptrdiff_t m_sTransitionType = 0x8C8;
                constexpr std::ptrdiff_t m_bConnectionsEnabled = 0x8D0;
                constexpr std::ptrdiff_t m_flTargetAreaSearchRadius = 0x8D4;
                constexpr std::ptrdiff_t m_flUpdateDistance = 0x8D8;
                constexpr std::ptrdiff_t m_flMaxConnectionDistance = 0x8DC;
            }
            namespace CConstraintAnchor {
                constexpr std::ptrdiff_t m_massScale = 0xA20;
            }
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48;
                constexpr std::ptrdiff_t m_WaitComplete = 0x50;
            }
            namespace CCSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0xE78;
                constexpr std::ptrdiff_t m_pHostageServices = 0xE80;
                constexpr std::ptrdiff_t m_pBuyServices = 0xE88;
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0xE90;
                constexpr std::ptrdiff_t m_pRadioServices = 0xE98;
                constexpr std::ptrdiff_t m_pDamageReactServices = 0xEA0;
                constexpr std::ptrdiff_t m_nCharacterDefIndex = 0xEA8;
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0xEAA;
                constexpr std::ptrdiff_t m_strVOPrefix = 0xEB0;
                constexpr std::ptrdiff_t m_szLastPlaceName = 0xEB8;
                constexpr std::ptrdiff_t m_bInHostageResetZone = 0xFA8;
                constexpr std::ptrdiff_t m_bInBuyZone = 0xFA9;
                constexpr std::ptrdiff_t m_TouchingBuyZones = 0xFB0;
                constexpr std::ptrdiff_t m_bWasInBuyZone = 0xFC8;
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0xFC9;
                constexpr std::ptrdiff_t m_bInBombZone = 0xFCA;
                constexpr std::ptrdiff_t m_bWasInHostageRescueZone = 0xFCB;
                constexpr std::ptrdiff_t m_iRetakesOffering = 0xFCC;
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0xFD0;
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0xFD4;
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0xFD5;
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0xFD8;
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0xFDC;
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0xFE0;
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0xFE4;
                constexpr std::ptrdiff_t m_aimPunchAngle = 0xFE8;
                constexpr std::ptrdiff_t m_aimPunchAngleVel = 0xFF4;
                constexpr std::ptrdiff_t m_aimPunchTickBase = 0x1000;
                constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x1004;
                constexpr std::ptrdiff_t m_aimPunchCache = 0x1008;
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x1020;
                constexpr std::ptrdiff_t m_lastLandTime = 0x16C0;
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x16C4;
                constexpr std::ptrdiff_t m_iPlayerLocked = 0x16C8;
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x16D0;
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x16D4;
                constexpr std::ptrdiff_t m_bNextSprayDecalTimeExpedited = 0x16D8;
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x16DC;
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x16E0;
                constexpr std::ptrdiff_t m_vRagdollDamagePosition = 0x16EC;
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x16F8;
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1738;
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x173C;
                constexpr std::ptrdiff_t m_EconGloves = 0x1748;
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x19F0;
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x19F4;
                constexpr std::ptrdiff_t m_bSkipOneHeadConstraintUpdate = 0x1A00;
                constexpr std::ptrdiff_t m_bLeftHanded = 0x1A01;
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x1A04;
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x1A08;
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x1A0C;
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x1A10;
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x1A14;
                constexpr std::ptrdiff_t m_bIsWalking = 0x1A18;
                constexpr std::ptrdiff_t m_fLastGivenDefuserTime = 0x1A1C;
                constexpr std::ptrdiff_t m_fLastGivenBombTime = 0x1A20;
                constexpr std::ptrdiff_t m_flDealtDamageToEnemyMostRecentTimestamp = 0x1A24;
                constexpr std::ptrdiff_t m_iDisplayHistoryBits = 0x1A28;
                constexpr std::ptrdiff_t m_flLastAttackedTeammate = 0x1A2C;
                constexpr std::ptrdiff_t m_allowAutoFollowTime = 0x1A30;
                constexpr std::ptrdiff_t m_bResetArmorNextSpawn = 0x1A34;
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1A38;
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1A40;
                constexpr std::ptrdiff_t m_nSpotRules = 0x1A58;
                constexpr std::ptrdiff_t m_bIsScoped = 0x1A5C;
                constexpr std::ptrdiff_t m_bResumeZoom = 0x1A5D;
                constexpr std::ptrdiff_t m_bIsDefusing = 0x1A5E;
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1A5F;
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1A60;
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x1A64;
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1A68;
                constexpr std::ptrdiff_t m_iBombSiteIndex = 0x1A6C;
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x1A70;
                constexpr std::ptrdiff_t m_bInBombZoneTrigger = 0x1A74;
                constexpr std::ptrdiff_t m_bWasInBombZoneTrigger = 0x1A75;
                constexpr std::ptrdiff_t m_iShotsFired = 0x1A78;
                constexpr std::ptrdiff_t m_flFlinchStack = 0x1A7C;
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x1A80;
                constexpr std::ptrdiff_t m_flHitHeading = 0x1A84;
                constexpr std::ptrdiff_t m_nHitBodyPart = 0x1A88;
                constexpr std::ptrdiff_t m_vecTotalBulletForce = 0x1A8C;
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1A98;
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1A9C;
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1AA0;
                constexpr std::ptrdiff_t m_LastHitBox = 0x1AA4;
                constexpr std::ptrdiff_t m_pBot = 0x1AA8;
                constexpr std::ptrdiff_t m_bBotAllowActive = 0x1AB0;
                constexpr std::ptrdiff_t m_thirdPersonHeading = 0x1AB4;
                constexpr std::ptrdiff_t m_flSlopeDropOffset = 0x1AC0;
                constexpr std::ptrdiff_t m_flSlopeDropHeight = 0x1AC4;
                constexpr std::ptrdiff_t m_vHeadConstraintOffset = 0x1AC8;
                constexpr std::ptrdiff_t m_nLastPickupPriority = 0x1AD4;
                constexpr std::ptrdiff_t m_flLastPickupPriorityTime = 0x1AD8;
                constexpr std::ptrdiff_t m_ArmorValue = 0x1ADC;
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1AE0;
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1AE2;
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1AE4;
                constexpr std::ptrdiff_t m_iLastWeaponFireUsercmd = 0x1AE8;
                constexpr std::ptrdiff_t m_bIsSpawning = 0x1AEC;
                constexpr std::ptrdiff_t m_iDeathFlags = 0x1AF8;
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1AFC;
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1B00;
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1B04;
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1B10;
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x1B24;
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1B28;
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x1B2C;
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1B30;
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x1B3C;
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1B48;
                constexpr std::ptrdiff_t m_angShootAngleHistory = 0x1B54;
                constexpr std::ptrdiff_t m_vecThrowPositionHistory = 0x1B6C;
                constexpr std::ptrdiff_t m_vecVelocityHistory = 0x1B84;
                constexpr std::ptrdiff_t m_PredictedDamageTags = 0x1BA0;
                constexpr std::ptrdiff_t m_nHighestAppliedDamageTagTick = 0x1C08;
                constexpr std::ptrdiff_t m_bCommittingSuicideOnTeamChange = 0x1C0C;
                constexpr std::ptrdiff_t m_wasNotKilledNaturally = 0x1C0D;
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x1C10;
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x1C14;
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x1C18;
                constexpr std::ptrdiff_t m_angEyeAngles = 0x1C1C;
            }
            namespace CEnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x14A0;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x14A8;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x14B0;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_R = 0x14B8;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_G = 0x14C0;
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_B = 0x14C8;
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x14D0;
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x14D8;
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x14E0;
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x14E8;
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x14F4;
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x1500;
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x1504;
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x1508;
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x150C;
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x1510;
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x1514;
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x1518;
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x151C;
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x1520;
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x1524;
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x1531;
            }
            namespace SpawnPoint {
                constexpr std::ptrdiff_t m_iPriority = 0x4A8;
                constexpr std::ptrdiff_t m_bEnabled = 0x4AC;
                constexpr std::ptrdiff_t m_nType = 0x4B0;
            }
            namespace CFuncMoverAPI {
            }
            namespace CGameSceneNode {
                constexpr std::ptrdiff_t m_nodeToWorld = 0x10;
                constexpr std::ptrdiff_t m_pOwner = 0x30;
                constexpr std::ptrdiff_t m_pParent = 0x38;
                constexpr std::ptrdiff_t m_pChild = 0x40;
                constexpr std::ptrdiff_t m_pNextSibling = 0x48;
                constexpr std::ptrdiff_t m_hParent = 0x78;
                constexpr std::ptrdiff_t m_vecOrigin = 0x88;
                constexpr std::ptrdiff_t m_angRotation = 0xC0;
                constexpr std::ptrdiff_t m_flScale = 0xCC;
                constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0;
                constexpr std::ptrdiff_t m_angAbsRotation = 0xDC;
                constexpr std::ptrdiff_t m_flAbsScale = 0xE8;
                constexpr std::ptrdiff_t m_nParentAttachmentOrBone = 0xEC;
                constexpr std::ptrdiff_t m_bDebugAbsOriginChanges = 0xEE;
                constexpr std::ptrdiff_t m_bDormant = 0xEF;
                constexpr std::ptrdiff_t m_bForceParentToBeNetworked = 0xF0;
                constexpr std::ptrdiff_t m_bDirtyHierarchy = 0x0;
                constexpr std::ptrdiff_t m_bDirtyBoneMergeInfo = 0x0;
                constexpr std::ptrdiff_t m_bNetworkedPositionChanged = 0x0;
                constexpr std::ptrdiff_t m_bNetworkedAnglesChanged = 0x0;
                constexpr std::ptrdiff_t m_bNetworkedScaleChanged = 0x0;
                constexpr std::ptrdiff_t m_bWillBeCallingPostDataUpdate = 0x0;
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x0;
                constexpr std::ptrdiff_t m_nLatchAbsOrigin = 0x0;
                constexpr std::ptrdiff_t m_bDirtyBoneMergeBoneToRoot = 0x0;
                constexpr std::ptrdiff_t m_nHierarchicalDepth = 0xF3;
                constexpr std::ptrdiff_t m_nHierarchyType = 0xF4;
                constexpr std::ptrdiff_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5;
                constexpr std::ptrdiff_t m_name = 0xF8;
                constexpr std::ptrdiff_t m_hierarchyAttachName = 0x10C;
                constexpr std::ptrdiff_t m_flZOffset = 0x110;
                constexpr std::ptrdiff_t m_flClientLocalScale = 0x114;
                constexpr std::ptrdiff_t m_vRenderOrigin = 0x118;
            }
            namespace CWeaponM249 {
            }
            namespace CRopeKeyframeAlias_move_rope {
            }
            namespace CPulseServerFuncs_Sounds {
            }
            namespace CPulsePhysicsConstraintsFuncs {
            }
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x48;
                constexpr std::ptrdiff_t m_hObserverTarget = 0x4C;
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x50;
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x54;
            }
            namespace CLogicScript {
            }
            namespace CAttributeManager_cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0;
                constexpr std::ptrdiff_t iAttribHook = 0x8;
                constexpr std::ptrdiff_t flOut = 0x10;
            }
            namespace CPulseGraphInstance_ServerEntity {
                constexpr std::ptrdiff_t m_hOwner = 0x190;
                constexpr std::ptrdiff_t m_bActivated = 0x194;
                constexpr std::ptrdiff_t m_sNameFixupStaticPrefix = 0x198;
                constexpr std::ptrdiff_t m_sNameFixupParent = 0x1A0;
                constexpr std::ptrdiff_t m_sNameFixupLocal = 0x1A8;
                constexpr std::ptrdiff_t m_sProceduralWorldNameForRelays = 0x1B0;
            }
            namespace CSceneEntityAlias_logic_choreographed_scene {
            }
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x4A8;
                constexpr std::ptrdiff_t m_iMaxRagdollCount = 0x4AC;
                constexpr std::ptrdiff_t m_bSaveImportant = 0x4B0;
                constexpr std::ptrdiff_t m_bCanTakeDamage = 0x4B1;
            }
            namespace CPostProcessingVolume {
                constexpr std::ptrdiff_t m_hPostSettings = 0x8A0;
                constexpr std::ptrdiff_t m_flFadeDuration = 0x8A8;
                constexpr std::ptrdiff_t m_flMinLogExposure = 0x8AC;
                constexpr std::ptrdiff_t m_flMaxLogExposure = 0x8B0;
                constexpr std::ptrdiff_t m_flMinExposure = 0x8B4;
                constexpr std::ptrdiff_t m_flMaxExposure = 0x8B8;
                constexpr std::ptrdiff_t m_flExposureCompensation = 0x8BC;
                constexpr std::ptrdiff_t m_flExposureFadeSpeedUp = 0x8C0;
                constexpr std::ptrdiff_t m_flExposureFadeSpeedDown = 0x8C4;
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x8C8;
                constexpr std::ptrdiff_t m_bMaster = 0x8CC;
                constexpr std::ptrdiff_t m_bExposureControl = 0x8CD;
            }
            namespace CPointProximitySensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4AC;
                constexpr std::ptrdiff_t m_Distance = 0x4B0;
            }
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0;
                constexpr std::ptrdiff_t m_FuncName = 0x30;
                constexpr std::ptrdiff_t m_nCellIndex = 0x40;
                constexpr std::ptrdiff_t m_nSrcChunk = 0x44;
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x48;
            }
            namespace CTriggerLook {
                constexpr std::ptrdiff_t m_hLookTarget = 0x8A8;
                constexpr std::ptrdiff_t m_flFieldOfView = 0x8AC;
                constexpr std::ptrdiff_t m_flLookTime = 0x8B0;
                constexpr std::ptrdiff_t m_flLookTimeTotal = 0x8B4;
                constexpr std::ptrdiff_t m_flLookTimeLast = 0x8B8;
                constexpr std::ptrdiff_t m_flTimeoutDuration = 0x8BC;
                constexpr std::ptrdiff_t m_bTimeoutFired = 0x8C0;
                constexpr std::ptrdiff_t m_bIsLooking = 0x8C1;
                constexpr std::ptrdiff_t m_b2DFOV = 0x8C2;
                constexpr std::ptrdiff_t m_bUseVelocity = 0x8C3;
                constexpr std::ptrdiff_t m_bTestOcclusion = 0x8C4;
                constexpr std::ptrdiff_t m_bTestAllVisibleOcclusion = 0x8C5;
                constexpr std::ptrdiff_t m_OnTimeout = 0x8C8;
                constexpr std::ptrdiff_t m_OnStartLook = 0x8E0;
                constexpr std::ptrdiff_t m_OnEndLook = 0x8F8;
            }
            namespace CPulseCell_Outflow_PlayVCD {
                constexpr std::ptrdiff_t m_hChoreoScene = 0xF0;
                constexpr std::ptrdiff_t m_OnPaused = 0xF8;
                constexpr std::ptrdiff_t m_OnResumed = 0x140;
            }
            namespace CMultiplayRules {
            }
            namespace CMolotovGrenade {
            }
            namespace CPhysTorque {
                constexpr std::ptrdiff_t m_axis = 0x508;
            }
            namespace CMultiSource {
                constexpr std::ptrdiff_t m_rgEntities = 0x4A8;
                constexpr std::ptrdiff_t m_rgTriggered = 0x528;
                constexpr std::ptrdiff_t m_OnTrigger = 0x5A8;
                constexpr std::ptrdiff_t m_iTotal = 0x5C0;
                constexpr std::ptrdiff_t m_globalstate = 0x5C8;
            }
            namespace CBaseCSGrenade {
                constexpr std::ptrdiff_t m_bRedraw = 0x1130;
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1131;
                constexpr std::ptrdiff_t m_bPinPulled = 0x1132;
                constexpr std::ptrdiff_t m_bJumpThrow = 0x1133;
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x1134;
                constexpr std::ptrdiff_t m_fThrowTime = 0x1138;
                constexpr std::ptrdiff_t m_flThrowStrength = 0x113C;
                constexpr std::ptrdiff_t m_fDropTime = 0x1140;
                constexpr std::ptrdiff_t m_fPinPullTime = 0x1144;
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x1148;
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x114C;
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1150;
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1154;
            }
            namespace CLogicAuto {
                constexpr std::ptrdiff_t m_OnMapSpawn = 0x4A8;
                constexpr std::ptrdiff_t m_OnDemoMapSpawn = 0x4C0;
                constexpr std::ptrdiff_t m_OnNewGame = 0x4D8;
                constexpr std::ptrdiff_t m_OnLoadGame = 0x4F0;
                constexpr std::ptrdiff_t m_OnMapTransition = 0x508;
                constexpr std::ptrdiff_t m_OnBackgroundMap = 0x520;
                constexpr std::ptrdiff_t m_OnMultiNewMap = 0x538;
                constexpr std::ptrdiff_t m_OnMultiNewRound = 0x550;
                constexpr std::ptrdiff_t m_OnVREnabled = 0x568;
                constexpr std::ptrdiff_t m_OnVRNotEnabled = 0x580;
                constexpr std::ptrdiff_t m_globalstate = 0x598;
            }
            namespace CPhysicsWire {
                constexpr std::ptrdiff_t m_nDensity = 0x4A8;
            }
            namespace CFuncIllusionary {
            }
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_flRange = 0x4AC;
                constexpr std::ptrdiff_t m_nImportance = 0x4B0;
                constexpr std::ptrdiff_t m_nLightChoice = 0x4B4;
                constexpr std::ptrdiff_t m_hLight = 0x4B8;
            }
            namespace CMarkupVolume {
                constexpr std::ptrdiff_t m_bDisabled = 0x730;
            }
            namespace CPathNode {
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x4A8;
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x4B4;
                constexpr std::ptrdiff_t m_strParentPathUniqueID = 0x4C0;
                constexpr std::ptrdiff_t m_strPathNodeParameter = 0x4C8;
                constexpr std::ptrdiff_t m_xWSPrevParent = 0x4D0;
                constexpr std::ptrdiff_t m_hPath = 0x4F0;
            }
            namespace CCSGO_TeamSelectCounterTerroristPosition {
            }
            namespace CTriggerRemove {
                constexpr std::ptrdiff_t m_OnRemove = 0x890;
            }
            namespace CLogicGameEventListener {
                constexpr std::ptrdiff_t m_OnEventFired = 0x4B8;
                constexpr std::ptrdiff_t m_iszGameEventName = 0x4D0;
                constexpr std::ptrdiff_t m_iszGameEventItem = 0x4D8;
                constexpr std::ptrdiff_t m_bEnabled = 0x4E0;
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4E1;
            }
            namespace CServerOnlyModelEntity {
            }
            namespace CPulseCell_IntervalTimer {
                constexpr std::ptrdiff_t m_Completed = 0x48;
                constexpr std::ptrdiff_t m_OnInterval = 0x90;
            }
            namespace CMarkupVolumeTagged_Nav {
                constexpr std::ptrdiff_t m_nScopes = 0x770;
            }
            namespace CInfoPlayerTerrorist {
            }
            namespace CLogicAutosave {
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x4A8;
                constexpr std::ptrdiff_t m_minHitPoints = 0x4AC;
                constexpr std::ptrdiff_t m_minHitPointsToCommit = 0x4B0;
            }
            namespace CCSGO_TeamIntroTerroristPosition {
            }
            namespace CPulseTestScriptLib {
            }
            namespace CSingleplayRules {
                constexpr std::ptrdiff_t m_bSinglePlayerGameEnding = 0xD0;
            }
            namespace CEnvWindShared {
                constexpr std::ptrdiff_t m_flStartTime = 0x8;
                constexpr std::ptrdiff_t m_iWindSeed = 0xC;
                constexpr std::ptrdiff_t m_iMinWind = 0x10;
                constexpr std::ptrdiff_t m_iMaxWind = 0x12;
                constexpr std::ptrdiff_t m_windRadius = 0x14;
                constexpr std::ptrdiff_t m_iMinGust = 0x18;
                constexpr std::ptrdiff_t m_iMaxGust = 0x1A;
                constexpr std::ptrdiff_t m_flMinGustDelay = 0x1C;
                constexpr std::ptrdiff_t m_flMaxGustDelay = 0x20;
                constexpr std::ptrdiff_t m_flGustDuration = 0x24;
                constexpr std::ptrdiff_t m_iGustDirChange = 0x28;
                constexpr std::ptrdiff_t m_iInitialWindDir = 0x2A;
                constexpr std::ptrdiff_t m_flInitialWindSpeed = 0x2C;
                constexpr std::ptrdiff_t m_location = 0x30;
                constexpr std::ptrdiff_t m_OnGustStart = 0x40;
                constexpr std::ptrdiff_t m_OnGustEnd = 0x58;
                constexpr std::ptrdiff_t m_hEntOwner = 0x70;
            }
            namespace CPointPrefab {
                constexpr std::ptrdiff_t m_targetMapName = 0x4A8;
                constexpr std::ptrdiff_t m_forceWorldGroupID = 0x4B0;
                constexpr std::ptrdiff_t m_associatedRelayTargetName = 0x4B8;
                constexpr std::ptrdiff_t m_fixupNames = 0x4C0;
                constexpr std::ptrdiff_t m_bLoadDynamic = 0x4C1;
                constexpr std::ptrdiff_t m_associatedRelayEntity = 0x4C4;
            }
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0x48;
            }
            namespace CEnvInstructorVRHint {
                constexpr std::ptrdiff_t m_iszName = 0x4A8;
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4B0;
                constexpr std::ptrdiff_t m_iTimeout = 0x4B8;
                constexpr std::ptrdiff_t m_iszCaption = 0x4C0;
                constexpr std::ptrdiff_t m_iszStartSound = 0x4C8;
                constexpr std::ptrdiff_t m_iLayoutFileType = 0x4D0;
                constexpr std::ptrdiff_t m_iszCustomLayoutFile = 0x4D8;
                constexpr std::ptrdiff_t m_iAttachType = 0x4E0;
                constexpr std::ptrdiff_t m_flHeightOffset = 0x4E4;
            }
            namespace CCSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x4A8;
            }
            namespace CPrecipitation {
            }
            namespace CCommentaryViewPosition {
            }
            namespace CEnvGlobal {
                constexpr std::ptrdiff_t m_outCounter = 0x4A8;
                constexpr std::ptrdiff_t m_globalstate = 0x4C8;
                constexpr std::ptrdiff_t m_triggermode = 0x4D0;
                constexpr std::ptrdiff_t m_initialstate = 0x4D4;
                constexpr std::ptrdiff_t m_counter = 0x4D8;
            }
            namespace CLogicNPCCounterOBB {
            }
            namespace CPlatTrigger {
                constexpr std::ptrdiff_t m_pPlatform = 0x730;
            }
            namespace CSceneEntity {
                constexpr std::ptrdiff_t m_iszSceneFile = 0x4B0;
                constexpr std::ptrdiff_t m_iszTarget1 = 0x4B8;
                constexpr std::ptrdiff_t m_iszTarget2 = 0x4C0;
                constexpr std::ptrdiff_t m_iszTarget3 = 0x4C8;
                constexpr std::ptrdiff_t m_iszTarget4 = 0x4D0;
                constexpr std::ptrdiff_t m_iszTarget5 = 0x4D8;
                constexpr std::ptrdiff_t m_iszTarget6 = 0x4E0;
                constexpr std::ptrdiff_t m_iszTarget7 = 0x4E8;
                constexpr std::ptrdiff_t m_iszTarget8 = 0x4F0;
                constexpr std::ptrdiff_t m_hTarget1 = 0x4F8;
                constexpr std::ptrdiff_t m_hTarget2 = 0x4FC;
                constexpr std::ptrdiff_t m_hTarget3 = 0x500;
                constexpr std::ptrdiff_t m_hTarget4 = 0x504;
                constexpr std::ptrdiff_t m_hTarget5 = 0x508;
                constexpr std::ptrdiff_t m_hTarget6 = 0x50C;
                constexpr std::ptrdiff_t m_hTarget7 = 0x510;
                constexpr std::ptrdiff_t m_hTarget8 = 0x514;
                constexpr std::ptrdiff_t m_sTargetAttachment = 0x518;
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x520;
                constexpr std::ptrdiff_t m_bPaused = 0x521;
                constexpr std::ptrdiff_t m_bMultiplayer = 0x522;
                constexpr std::ptrdiff_t m_bAutogenerated = 0x523;
                constexpr std::ptrdiff_t m_flForceClientTime = 0x524;
                constexpr std::ptrdiff_t m_flCurrentTime = 0x528;
                constexpr std::ptrdiff_t m_flFrameTime = 0x52C;
                constexpr std::ptrdiff_t m_bCancelAtNextInterrupt = 0x530;
                constexpr std::ptrdiff_t m_fPitch = 0x534;
                constexpr std::ptrdiff_t m_bAutomated = 0x538;
                constexpr std::ptrdiff_t m_nAutomatedAction = 0x53C;
                constexpr std::ptrdiff_t m_flAutomationDelay = 0x540;
                constexpr std::ptrdiff_t m_flAutomationTime = 0x544;
                constexpr std::ptrdiff_t m_nSpeechPriority = 0x548;
                constexpr std::ptrdiff_t m_bPausedViaInput = 0x54C;
                constexpr std::ptrdiff_t m_bPauseAtNextInterrupt = 0x54D;
                constexpr std::ptrdiff_t m_bWaitingForActor = 0x54E;
                constexpr std::ptrdiff_t m_bWaitingForInterrupt = 0x54F;
                constexpr std::ptrdiff_t m_bInterruptedActorsScenes = 0x550;
                constexpr std::ptrdiff_t m_bBreakOnNonIdle = 0x551;
                constexpr std::ptrdiff_t m_bSceneFinished = 0x552;
                constexpr std::ptrdiff_t m_hActorList = 0x558;
                constexpr std::ptrdiff_t m_hRemoveActorList = 0x570;
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x5B8;
                constexpr std::ptrdiff_t m_OnStart = 0x5C0;
                constexpr std::ptrdiff_t m_OnCompletion = 0x5D8;
                constexpr std::ptrdiff_t m_OnCanceled = 0x5F0;
                constexpr std::ptrdiff_t m_OnPaused = 0x608;
                constexpr std::ptrdiff_t m_OnResumed = 0x620;
                constexpr std::ptrdiff_t m_hInterruptScene = 0x6C8;
                constexpr std::ptrdiff_t m_nInterruptCount = 0x6CC;
                constexpr std::ptrdiff_t m_bSceneMissing = 0x6D0;
                constexpr std::ptrdiff_t m_bInterrupted = 0x6D1;
                constexpr std::ptrdiff_t m_bCompletedEarly = 0x6D2;
                constexpr std::ptrdiff_t m_bInterruptSceneFinished = 0x6D3;
                constexpr std::ptrdiff_t m_bRestoring = 0x6D4;
                constexpr std::ptrdiff_t m_hNotifySceneCompletion = 0x6D8;
                constexpr std::ptrdiff_t m_hListManagers = 0x6F0;
                constexpr std::ptrdiff_t m_iszSoundName = 0x708;
                constexpr std::ptrdiff_t m_iszSequenceName = 0x710;
                constexpr std::ptrdiff_t m_hActor = 0x718;
                constexpr std::ptrdiff_t m_hActivator = 0x71C;
                constexpr std::ptrdiff_t m_BusyActor = 0x720;
                constexpr std::ptrdiff_t m_iPlayerDeathBehavior = 0x724;
            }
            namespace CChoreoInfoTarget {
            }
            namespace CTonemapController2 {
                constexpr std::ptrdiff_t m_flAutoExposureMin = 0x4A8;
                constexpr std::ptrdiff_t m_flAutoExposureMax = 0x4AC;
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedUp = 0x4B0;
                constexpr std::ptrdiff_t m_flExposureAdaptationSpeedDown = 0x4B4;
                constexpr std::ptrdiff_t m_flTonemapEVSmoothingRange = 0x4B8;
            }
            namespace CMapSharedEnvironment {
                constexpr std::ptrdiff_t m_targetMapName = 0x4A8;
            }
            namespace CNetworkedSequenceOperation {
                constexpr std::ptrdiff_t m_hSequence = 0x8;
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC;
                constexpr std::ptrdiff_t m_flCycle = 0x10;
                constexpr std::ptrdiff_t m_flWeight = 0x14;
                constexpr std::ptrdiff_t m_bSequenceChangeNetworked = 0x1C;
                constexpr std::ptrdiff_t m_bDiscontinuity = 0x1D;
                constexpr std::ptrdiff_t m_flPrevCycleFromDiscontinuity = 0x20;
                constexpr std::ptrdiff_t m_flPrevCycleForAnimEventDetection = 0x24;
            }
            namespace CPhysMagnet {
                constexpr std::ptrdiff_t m_OnMagnetAttach = 0xA20;
                constexpr std::ptrdiff_t m_OnMagnetDetach = 0xA38;
                constexpr std::ptrdiff_t m_massScale = 0xA50;
                constexpr std::ptrdiff_t m_forceLimit = 0xA54;
                constexpr std::ptrdiff_t m_torqueLimit = 0xA58;
                constexpr std::ptrdiff_t m_MagnettedEntities = 0xA60;
                constexpr std::ptrdiff_t m_bActive = 0xA78;
                constexpr std::ptrdiff_t m_bHasHitSomething = 0xA79;
                constexpr std::ptrdiff_t m_flTotalMass = 0xA7C;
                constexpr std::ptrdiff_t m_flRadius = 0xA80;
                constexpr std::ptrdiff_t m_flNextSuckTime = 0xA84;
                constexpr std::ptrdiff_t m_iMaxObjectsAttached = 0xA88;
            }
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8;
                constexpr std::ptrdiff_t m_pEntity = 0x10;
                constexpr std::ptrdiff_t m_CScriptComponent = 0x30;
            }
            namespace CGameGibManager {
                constexpr std::ptrdiff_t m_bAllowNewGibs = 0x4C0;
                constexpr std::ptrdiff_t m_iCurrentMaxPieces = 0x4C4;
                constexpr std::ptrdiff_t m_iMaxPieces = 0x4C8;
                constexpr std::ptrdiff_t m_iLastFrame = 0x4CC;
            }
            namespace CHandleDummy {
            }
            namespace CFuncWallToggle {
            }
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x48;
            }
            namespace CSkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x4A8;
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x538;
                constexpr std::ptrdiff_t m_bUseAngles = 0x53C;
                constexpr std::ptrdiff_t m_pNext = 0x540;
            }
            namespace CPlayer_AutoaimServices {
            }
            namespace CItemDefuserAlias_item_defuser {
            }
            namespace CPathCornerCrash {
            }
            namespace CPhysPulley {
                constexpr std::ptrdiff_t m_position2 = 0x508;
                constexpr std::ptrdiff_t m_offset = 0x514;
                constexpr std::ptrdiff_t m_addLength = 0x52C;
                constexpr std::ptrdiff_t m_gearRatio = 0x530;
            }
            namespace CCSPetPlacement {
            }
            namespace CWeaponMP5SD {
            }
            namespace CWeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x1130;
                constexpr std::ptrdiff_t m_bRedraw = 0x1131;
            }
            namespace CCommentaryAuto {
                constexpr std::ptrdiff_t m_OnCommentaryNewGame = 0x4A8;
                constexpr std::ptrdiff_t m_OnCommentaryMidGame = 0x4C0;
                constexpr std::ptrdiff_t m_OnCommentaryMultiplayerSpawn = 0x4D8;
            }
            namespace CPulseCell_Outflow_ListenForEntityOutput_CursorState_t {
                constexpr std::ptrdiff_t m_entity = 0x0;
            }
            namespace ActiveModelConfig_t {
                constexpr std::ptrdiff_t m_Handle = 0x30;
                constexpr std::ptrdiff_t m_Name = 0x38;
                constexpr std::ptrdiff_t m_AssociatedEntities = 0x40;
                constexpr std::ptrdiff_t m_AssociatedEntityNames = 0x58;
            }
            namespace CWeaponUSPSilencer {
            }
            namespace CSoundStackSave {
                constexpr std::ptrdiff_t m_iszStackName = 0x4A8;
            }
            namespace CPulseCell_Value_Curve {
                constexpr std::ptrdiff_t m_Curve = 0x48;
            }
            namespace CWeaponMag7 {
            }
            namespace CLogicMeasureMovement {
                constexpr std::ptrdiff_t m_strMeasureTarget = 0x4A8;
                constexpr std::ptrdiff_t m_strMeasureReference = 0x4B0;
                constexpr std::ptrdiff_t m_strTargetReference = 0x4B8;
                constexpr std::ptrdiff_t m_hMeasureTarget = 0x4C0;
                constexpr std::ptrdiff_t m_hMeasureReference = 0x4C4;
                constexpr std::ptrdiff_t m_hTarget = 0x4C8;
                constexpr std::ptrdiff_t m_hTargetReference = 0x4CC;
                constexpr std::ptrdiff_t m_flScale = 0x4D0;
                constexpr std::ptrdiff_t m_nMeasureType = 0x4D4;
            }
            namespace CC4 {
                constexpr std::ptrdiff_t m_vecLastValidPlayerHeldPosition = 0x1160;
                constexpr std::ptrdiff_t m_vecLastValidDroppedPosition = 0x116C;
                constexpr std::ptrdiff_t m_bDoValidDroppedPositionCheck = 0x1178;
                constexpr std::ptrdiff_t m_bStartedArming = 0x1179;
                constexpr std::ptrdiff_t m_fArmedTime = 0x117C;
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1180;
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1181;
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1188;
                constexpr std::ptrdiff_t m_nSpotRules = 0x11A0;
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x11A4;
                constexpr std::ptrdiff_t m_bBombPlanted = 0x11AB;
            }
            namespace CHostageCarriableProp {
            }
            namespace CDynamicPropAlias_cable_dynamic {
            }
            namespace CBaseFlexAlias_funCBaseFlex {
            }
            namespace CCSObserver_CameraServices {
            }
            namespace CEnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x4A8;
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x4AC;
            }
            namespace CTakeDamageInfoAPI {
            }
            namespace CCSPlayerPawnBase {
                constexpr std::ptrdiff_t m_CTouchExpansionComponent = 0xD30;
                constexpr std::ptrdiff_t m_pPingServices = 0xD80;
                constexpr std::ptrdiff_t m_blindUntilTime = 0xD88;
                constexpr std::ptrdiff_t m_blindStartTime = 0xD8C;
                constexpr std::ptrdiff_t m_iPlayerState = 0xD90;
                constexpr std::ptrdiff_t m_bRespawning = 0xE40;
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0xE41;
                constexpr std::ptrdiff_t m_iNumSpawns = 0xE44;
                constexpr std::ptrdiff_t m_flIdleTimeSinceLastAction = 0xE4C;
                constexpr std::ptrdiff_t m_fNextRadarUpdateTime = 0xE50;
                constexpr std::ptrdiff_t m_flFlashDuration = 0xE54;
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0xE58;
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0xE5C;
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0xE60;
                constexpr std::ptrdiff_t m_hOriginalController = 0xE64;
            }
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x538;
            }
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80;
            }
            namespace CCSPointScriptEntity {
            }
            namespace CPulseCell_BaseFlow {
            }
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_OnBombExplode = 0x890;
                constexpr std::ptrdiff_t m_OnBombPlanted = 0x8A8;
                constexpr std::ptrdiff_t m_OnBombDefused = 0x8C0;
                constexpr std::ptrdiff_t m_bIsBombSiteB = 0x8D8;
                constexpr std::ptrdiff_t m_bIsHeistBombTarget = 0x8D9;
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0x8DA;
                constexpr std::ptrdiff_t m_szMountTarget = 0x8E0;
                constexpr std::ptrdiff_t m_hInstructorHint = 0x8E8;
                constexpr std::ptrdiff_t m_nBombSiteDesignation = 0x8EC;
            }
            namespace CRuleEntity {
                constexpr std::ptrdiff_t m_iszMaster = 0x730;
            }
            namespace CPhysThruster {
                constexpr std::ptrdiff_t m_localOrigin = 0x508;
            }
            namespace CInfoPlayerStart {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_bIsMaster = 0x4A9;
                constexpr std::ptrdiff_t m_pPawnSubclass = 0x4B0;
            }
            namespace CEntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x4A8;
                constexpr std::ptrdiff_t m_bCheapEffect = 0x4AC;
                constexpr std::ptrdiff_t m_flSize = 0x4B0;
                constexpr std::ptrdiff_t m_bUseHitboxes = 0x4B4;
                constexpr std::ptrdiff_t m_iNumHitboxFires = 0x4B8;
                constexpr std::ptrdiff_t m_flHitboxFireScale = 0x4BC;
                constexpr std::ptrdiff_t m_flLifetime = 0x4C0;
                constexpr std::ptrdiff_t m_hAttacker = 0x4C4;
                constexpr std::ptrdiff_t m_flDirectDamagePerSecond = 0x4C8;
                constexpr std::ptrdiff_t m_iCustomDamageType = 0x4CC;
            }
            namespace CSkeletonInstance {
                constexpr std::ptrdiff_t m_modelState = 0x140;
                constexpr std::ptrdiff_t m_bIsAnimationEnabled = 0x390;
                constexpr std::ptrdiff_t m_bUseParentRenderBounds = 0x391;
                constexpr std::ptrdiff_t m_bDisableSolidCollisionsForHierarchy = 0x392;
                constexpr std::ptrdiff_t m_bDirtyMotionType = 0x0;
                constexpr std::ptrdiff_t m_bIsGeneratingLatchedParentSpaceState = 0x0;
                constexpr std::ptrdiff_t m_materialGroup = 0x394;
                constexpr std::ptrdiff_t m_nHitboxSet = 0x398;
                constexpr std::ptrdiff_t m_bForceServerConstraintsEnabled = 0x3F4;
            }
            namespace CEntityComponent {
            }
            namespace CBasePlatTrain {
                constexpr std::ptrdiff_t m_NoiseMoving = 0x7B0;
                constexpr std::ptrdiff_t m_NoiseArrived = 0x7B8;
                constexpr std::ptrdiff_t m_volume = 0x7C8;
                constexpr std::ptrdiff_t m_flTWidth = 0x7CC;
                constexpr std::ptrdiff_t m_flTLength = 0x7D0;
            }
            namespace CPointTeleport {
                constexpr std::ptrdiff_t m_vSaveOrigin = 0x4A8;
                constexpr std::ptrdiff_t m_vSaveAngles = 0x4B4;
                constexpr std::ptrdiff_t m_bTeleportParentedEntities = 0x4C0;
                constexpr std::ptrdiff_t m_bTeleportUseCurrentAngle = 0x4C1;
            }
            namespace CTriggerGameEvent {
                constexpr std::ptrdiff_t m_strStartTouchEventName = 0x890;
                constexpr std::ptrdiff_t m_strEndTouchEventName = 0x898;
                constexpr std::ptrdiff_t m_strTriggerID = 0x8A0;
            }
            namespace CMessageEntity {
                constexpr std::ptrdiff_t m_radius = 0x4A8;
                constexpr std::ptrdiff_t m_messageText = 0x4B0;
                constexpr std::ptrdiff_t m_drawText = 0x4B8;
                constexpr std::ptrdiff_t m_bDeveloperOnly = 0x4B9;
                constexpr std::ptrdiff_t m_bEnabled = 0x4BA;
            }
            namespace CEnvEntityIgniter {
                constexpr std::ptrdiff_t m_flLifetime = 0x4A8;
            }
            namespace CPulseCell_Outflow_CycleShuffled_InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0;
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20;
            }
            namespace CPulseCell_BaseLerp_CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0;
                constexpr std::ptrdiff_t m_EndTime = 0x4;
            }
            namespace CMarkupVolumeTagged_NavGame {
                constexpr std::ptrdiff_t m_nScopes = 0x798;
                constexpr std::ptrdiff_t m_bFloodFillAttribute = 0x799;
                constexpr std::ptrdiff_t m_bSplitNavSpace = 0x79A;
            }
            namespace CMultiLightProxy {
                constexpr std::ptrdiff_t m_iszLightNameFilter = 0x4A8;
                constexpr std::ptrdiff_t m_iszLightClassFilter = 0x4B0;
                constexpr std::ptrdiff_t m_flLightRadiusFilter = 0x4B8;
                constexpr std::ptrdiff_t m_flBrightnessDelta = 0x4BC;
                constexpr std::ptrdiff_t m_bPerformScreenFade = 0x4C0;
                constexpr std::ptrdiff_t m_flTargetBrightnessMultiplier = 0x4C4;
                constexpr std::ptrdiff_t m_flCurrentBrightnessMultiplier = 0x4C8;
                constexpr std::ptrdiff_t m_vecLights = 0x4D0;
            }
            namespace CWeaponM4A1 {
            }
            namespace CTriggerHostageReset {
            }
            namespace CPulseAnimFuncs {
            }
            namespace CEconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0xDE0;
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0xDE4;
            }
            namespace CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0;
            }
            namespace CPulseArraylib {
            }
            namespace CWeaponMAC10 {
            }
            namespace CFuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0x730;
                constexpr std::ptrdiff_t m_Dismounts = 0x740;
                constexpr std::ptrdiff_t m_vecLocalTop = 0x758;
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x764;
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x770;
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x77C;
                constexpr std::ptrdiff_t m_bDisabled = 0x780;
                constexpr std::ptrdiff_t m_bFakeLadder = 0x781;
                constexpr std::ptrdiff_t m_bHasSlack = 0x782;
                constexpr std::ptrdiff_t m_surfacePropName = 0x788;
                constexpr std::ptrdiff_t m_OnPlayerGotOnLadder = 0x790;
                constexpr std::ptrdiff_t m_OnPlayerGotOffLadder = 0x7A8;
            }
            namespace CFogController {
                constexpr std::ptrdiff_t m_fog = 0x4A8;
                constexpr std::ptrdiff_t m_bUseAngles = 0x510;
                constexpr std::ptrdiff_t m_iChangedVariables = 0x514;
            }
            namespace CPointTemplateAPI {
            }
            namespace CItem {
                constexpr std::ptrdiff_t m_OnPlayerTouch = 0xA28;
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xA40;
                constexpr std::ptrdiff_t m_bActivateWhenAtRest = 0xA58;
                constexpr std::ptrdiff_t m_OnCacheInteraction = 0xA60;
                constexpr std::ptrdiff_t m_OnGlovePulled = 0xA78;
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xA90;
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xA9C;
                constexpr std::ptrdiff_t m_bPhysStartAsleep = 0xAA8;
            }
            namespace CTriggerPush {
                constexpr std::ptrdiff_t m_angPushEntitySpace = 0x890;
                constexpr std::ptrdiff_t m_vecPushDirEntitySpace = 0x89C;
                constexpr std::ptrdiff_t m_bTriggerOnStartTouch = 0x8A8;
                constexpr std::ptrdiff_t m_bUsePathSimple = 0x8A9;
                constexpr std::ptrdiff_t m_iszPathSimpleName = 0x8B0;
                constexpr std::ptrdiff_t m_PathSimple = 0x8B8;
                constexpr std::ptrdiff_t m_splinePushType = 0x8C0;
            }
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0xA20;
                constexpr std::ptrdiff_t m_iShapeType = 0xA24;
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0xA28;
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0xA30;
            }
            namespace CInfoOffscreenPanoramaTexture {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_nResolutionX = 0x4AC;
                constexpr std::ptrdiff_t m_nResolutionY = 0x4B0;
                constexpr std::ptrdiff_t m_szPanelType = 0x4B8;
                constexpr std::ptrdiff_t m_szLayoutFileName = 0x4C0;
                constexpr std::ptrdiff_t m_RenderAttrName = 0x4C8;
                constexpr std::ptrdiff_t m_TargetEntities = 0x4D0;
                constexpr std::ptrdiff_t m_nTargetChangeCount = 0x4E8;
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x4F0;
                constexpr std::ptrdiff_t m_szTargetsName = 0x508;
                constexpr std::ptrdiff_t m_AdditionalTargetEntities = 0x510;
            }
            namespace CPointAngularVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4A8;
                constexpr std::ptrdiff_t m_flThreshold = 0x4AC;
                constexpr std::ptrdiff_t m_nLastCompareResult = 0x4B0;
                constexpr std::ptrdiff_t m_nLastFireResult = 0x4B4;
                constexpr std::ptrdiff_t m_flFireTime = 0x4B8;
                constexpr std::ptrdiff_t m_flFireInterval = 0x4BC;
                constexpr std::ptrdiff_t m_flLastAngVelocity = 0x4C0;
                constexpr std::ptrdiff_t m_lastOrientation = 0x4C4;
                constexpr std::ptrdiff_t m_vecAxis = 0x4D0;
                constexpr std::ptrdiff_t m_bUseHelper = 0x4DC;
                constexpr std::ptrdiff_t m_AngularVelocity = 0x4E0;
                constexpr std::ptrdiff_t m_OnLessThan = 0x500;
                constexpr std::ptrdiff_t m_OnLessThanOrEqualTo = 0x518;
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x530;
                constexpr std::ptrdiff_t m_OnGreaterThanOrEqualTo = 0x548;
                constexpr std::ptrdiff_t m_OnEqualTo = 0x560;
            }
            namespace CPlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x4A8;
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x4AC;
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x4B0;
                constexpr std::ptrdiff_t m_flFadeTime = 0x4B4;
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4B8;
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4B9;
            }
            namespace CPulseCell_Step_FollowEntity {
                constexpr std::ptrdiff_t m_ParamBoneOrAttachName = 0x48;
                constexpr std::ptrdiff_t m_ParamBoneOrAttachNameChild = 0x50;
            }
            namespace CFlashbang {
            }
            namespace CBasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0xDE0;
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0xDE4;
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0xDE8;
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0xDEC;
                constexpr std::ptrdiff_t m_iClip1 = 0xDF0;
                constexpr std::ptrdiff_t m_iClip2 = 0xDF4;
                constexpr std::ptrdiff_t m_pReserveAmmo = 0xDF8;
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xE00;
            }
            namespace CCSWeaponBaseVData {
                constexpr std::ptrdiff_t m_WeaponType = 0x440;
                constexpr std::ptrdiff_t m_WeaponCategory = 0x444;
                constexpr std::ptrdiff_t m_szAnimSkeleton = 0x448;
                constexpr std::ptrdiff_t m_vecMuzzlePos0 = 0x528;
                constexpr std::ptrdiff_t m_vecMuzzlePos1 = 0x534;
                constexpr std::ptrdiff_t m_szTracerParticle = 0x540;
                constexpr std::ptrdiff_t m_GearSlot = 0x620;
                constexpr std::ptrdiff_t m_GearSlotPosition = 0x624;
                constexpr std::ptrdiff_t m_DefaultLoadoutSlot = 0x628;
                constexpr std::ptrdiff_t m_nPrice = 0x62C;
                constexpr std::ptrdiff_t m_nKillAward = 0x630;
                constexpr std::ptrdiff_t m_nPrimaryReserveAmmoMax = 0x634;
                constexpr std::ptrdiff_t m_nSecondaryReserveAmmoMax = 0x638;
                constexpr std::ptrdiff_t m_bMeleeWeapon = 0x63C;
                constexpr std::ptrdiff_t m_bHasBurstMode = 0x63D;
                constexpr std::ptrdiff_t m_bIsRevolver = 0x63E;
                constexpr std::ptrdiff_t m_bCannotShootUnderwater = 0x63F;
                constexpr std::ptrdiff_t m_szName = 0x640;
                constexpr std::ptrdiff_t m_eSilencerType = 0x648;
                constexpr std::ptrdiff_t m_nCrosshairMinDistance = 0x64C;
                constexpr std::ptrdiff_t m_nCrosshairDeltaDistance = 0x650;
                constexpr std::ptrdiff_t m_bIsFullAuto = 0x654;
                constexpr std::ptrdiff_t m_nNumBullets = 0x658;
                constexpr std::ptrdiff_t m_bReloadsSingleShells = 0x65C;
                constexpr std::ptrdiff_t m_flCycleTime = 0x660;
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x668;
                constexpr std::ptrdiff_t m_flSpread = 0x670;
                constexpr std::ptrdiff_t m_flInaccuracyCrouch = 0x678;
                constexpr std::ptrdiff_t m_flInaccuracyStand = 0x680;
                constexpr std::ptrdiff_t m_flInaccuracyJump = 0x688;
                constexpr std::ptrdiff_t m_flInaccuracyLand = 0x690;
                constexpr std::ptrdiff_t m_flInaccuracyLadder = 0x698;
                constexpr std::ptrdiff_t m_flInaccuracyFire = 0x6A0;
                constexpr std::ptrdiff_t m_flInaccuracyMove = 0x6A8;
                constexpr std::ptrdiff_t m_flRecoilAngle = 0x6B0;
                constexpr std::ptrdiff_t m_flRecoilAngleVariance = 0x6B8;
                constexpr std::ptrdiff_t m_flRecoilMagnitude = 0x6C0;
                constexpr std::ptrdiff_t m_flRecoilMagnitudeVariance = 0x6C8;
                constexpr std::ptrdiff_t m_nTracerFrequency = 0x6D0;
                constexpr std::ptrdiff_t m_flInaccuracyJumpInitial = 0x6D8;
                constexpr std::ptrdiff_t m_flInaccuracyJumpApex = 0x6DC;
                constexpr std::ptrdiff_t m_flInaccuracyReload = 0x6E0;
                constexpr std::ptrdiff_t m_flDeployDuration = 0x6E4;
                constexpr std::ptrdiff_t m_flDisallowAttackAfterReloadStartDuration = 0x6E8;
                constexpr std::ptrdiff_t m_nBurstShotCount = 0x6EC;
                constexpr std::ptrdiff_t m_bAllowBurstHolster = 0x6F0;
                constexpr std::ptrdiff_t m_nRecoilSeed = 0x6F4;
                constexpr std::ptrdiff_t m_nSpreadSeed = 0x6F8;
                constexpr std::ptrdiff_t m_flAttackMovespeedFactor = 0x6FC;
                constexpr std::ptrdiff_t m_flInaccuracyPitchShift = 0x700;
                constexpr std::ptrdiff_t m_flInaccuracyAltSoundThreshold = 0x704;
                constexpr std::ptrdiff_t m_szUseRadioSubtitle = 0x708;
                constexpr std::ptrdiff_t m_bUnzoomsAfterShot = 0x710;
                constexpr std::ptrdiff_t m_bHideViewModelWhenZoomed = 0x711;
                constexpr std::ptrdiff_t m_nZoomLevels = 0x714;
                constexpr std::ptrdiff_t m_nZoomFOV1 = 0x718;
                constexpr std::ptrdiff_t m_nZoomFOV2 = 0x71C;
                constexpr std::ptrdiff_t m_flZoomTime0 = 0x720;
                constexpr std::ptrdiff_t m_flZoomTime1 = 0x724;
                constexpr std::ptrdiff_t m_flZoomTime2 = 0x728;
                constexpr std::ptrdiff_t m_flIronSightPullUpSpeed = 0x72C;
                constexpr std::ptrdiff_t m_flIronSightPutDownSpeed = 0x730;
                constexpr std::ptrdiff_t m_flIronSightFOV = 0x734;
                constexpr std::ptrdiff_t m_flIronSightPivotForward = 0x738;
                constexpr std::ptrdiff_t m_flIronSightLooseness = 0x73C;
                constexpr std::ptrdiff_t m_nDamage = 0x740;
                constexpr std::ptrdiff_t m_flHeadshotMultiplier = 0x744;
                constexpr std::ptrdiff_t m_flArmorRatio = 0x748;
                constexpr std::ptrdiff_t m_flPenetration = 0x74C;
                constexpr std::ptrdiff_t m_flRange = 0x750;
                constexpr std::ptrdiff_t m_flRangeModifier = 0x754;
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierLarge = 0x758;
                constexpr std::ptrdiff_t m_flFlinchVelocityModifierSmall = 0x75C;
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouch = 0x760;
                constexpr std::ptrdiff_t m_flRecoveryTimeStand = 0x764;
                constexpr std::ptrdiff_t m_flRecoveryTimeCrouchFinal = 0x768;
                constexpr std::ptrdiff_t m_flRecoveryTimeStandFinal = 0x76C;
                constexpr std::ptrdiff_t m_nRecoveryTransitionStartBullet = 0x770;
                constexpr std::ptrdiff_t m_nRecoveryTransitionEndBullet = 0x774;
                constexpr std::ptrdiff_t m_flThrowVelocity = 0x778;
                constexpr std::ptrdiff_t m_vSmokeColor = 0x77C;
                constexpr std::ptrdiff_t m_szAnimClass = 0x788;
            }
            namespace CPhysForce {
                constexpr std::ptrdiff_t m_nameAttach = 0x4B0;
                constexpr std::ptrdiff_t m_force = 0x4B8;
                constexpr std::ptrdiff_t m_forceTime = 0x4BC;
                constexpr std::ptrdiff_t m_attachedObject = 0x4C0;
                constexpr std::ptrdiff_t m_wasRestored = 0x4C4;
                constexpr std::ptrdiff_t m_integrator = 0x4C8;
            }
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8;
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20;
                constexpr std::ptrdiff_t m_hOuter = 0x24;
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28;
                constexpr std::ptrdiff_t m_ProviderType = 0x2C;
                constexpr std::ptrdiff_t m_CachedResults = 0x30;
            }
            namespace SignatureOutflow_Continue {
            }
            namespace CInfoTarget {
            }
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x48;
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x54;
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x58;
                constexpr std::ptrdiff_t m_PlayerFog = 0x60;
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0xA0;
                constexpr std::ptrdiff_t m_hViewEntity = 0xA4;
                constexpr std::ptrdiff_t m_hTonemapController = 0xA8;
                constexpr std::ptrdiff_t m_audio = 0xB0;
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x128;
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x140;
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x144;
                constexpr std::ptrdiff_t m_hTriggerSoundscapeList = 0x160;
            }
            namespace CPulseCell_Timeline {
                constexpr std::ptrdiff_t m_TimelineEvents = 0x48;
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60;
                constexpr std::ptrdiff_t m_OnFinished = 0x68;
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0;
            }
            namespace CPulseCell_Inflow_EntOutputHandler {
                constexpr std::ptrdiff_t m_SourceEntity = 0x80;
                constexpr std::ptrdiff_t m_SourceOutput = 0x90;
                constexpr std::ptrdiff_t m_ExpectedParamType = 0xA0;
            }
            namespace CScenePayloadVData {
                constexpr std::ptrdiff_t m_sSceneFile = 0x0;
            }
            namespace CPulseFuncs_GameParticleManager {
            }
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x4E0;
            }
            namespace CKeepUpright {
                constexpr std::ptrdiff_t m_worldGoalAxis = 0x4B0;
                constexpr std::ptrdiff_t m_localTestAxis = 0x4BC;
                constexpr std::ptrdiff_t m_nameAttach = 0x4D0;
                constexpr std::ptrdiff_t m_attachedObject = 0x4D8;
                constexpr std::ptrdiff_t m_angularLimit = 0x4DC;
                constexpr std::ptrdiff_t m_bActive = 0x4E0;
                constexpr std::ptrdiff_t m_bDampAllRotation = 0x4E1;
            }
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x4A8;
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x4B0;
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x4B8;
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x4C0;
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x4C4;
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x4C8;
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x4CC;
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x4D0;
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x4E8;
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x500;
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x508;
            }
            namespace CEnvVolumetricFogController {
                constexpr std::ptrdiff_t m_flScattering = 0x4A8;
                constexpr std::ptrdiff_t m_TintColor = 0x4AC;
                constexpr std::ptrdiff_t m_flAnisotropy = 0x4B0;
                constexpr std::ptrdiff_t m_flFadeSpeed = 0x4B4;
                constexpr std::ptrdiff_t m_flDrawDistance = 0x4B8;
                constexpr std::ptrdiff_t m_flFadeInStart = 0x4BC;
                constexpr std::ptrdiff_t m_flFadeInEnd = 0x4C0;
                constexpr std::ptrdiff_t m_flIndirectStrength = 0x4C4;
                constexpr std::ptrdiff_t m_nVolumeDepth = 0x4C8;
                constexpr std::ptrdiff_t m_fFirstVolumeSliceThickness = 0x4CC;
                constexpr std::ptrdiff_t m_nIndirectTextureDimX = 0x4D0;
                constexpr std::ptrdiff_t m_nIndirectTextureDimY = 0x4D4;
                constexpr std::ptrdiff_t m_nIndirectTextureDimZ = 0x4D8;
                constexpr std::ptrdiff_t m_vBoxMins = 0x4DC;
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4E8;
                constexpr std::ptrdiff_t m_bActive = 0x4F4;
                constexpr std::ptrdiff_t m_flStartAnisoTime = 0x4F8;
                constexpr std::ptrdiff_t m_flStartScatterTime = 0x4FC;
                constexpr std::ptrdiff_t m_flStartDrawDistanceTime = 0x500;
                constexpr std::ptrdiff_t m_flStartAnisotropy = 0x504;
                constexpr std::ptrdiff_t m_flStartScattering = 0x508;
                constexpr std::ptrdiff_t m_flStartDrawDistance = 0x50C;
                constexpr std::ptrdiff_t m_flDefaultAnisotropy = 0x510;
                constexpr std::ptrdiff_t m_flDefaultScattering = 0x514;
                constexpr std::ptrdiff_t m_flDefaultDrawDistance = 0x518;
                constexpr std::ptrdiff_t m_bStartDisabled = 0x51C;
                constexpr std::ptrdiff_t m_bEnableIndirect = 0x51D;
                constexpr std::ptrdiff_t m_bIsMaster = 0x51E;
                constexpr std::ptrdiff_t m_hFogIndirectTexture = 0x520;
                constexpr std::ptrdiff_t m_nForceRefreshCount = 0x528;
                constexpr std::ptrdiff_t m_fNoiseSpeed = 0x52C;
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x530;
                constexpr std::ptrdiff_t m_vNoiseScale = 0x534;
                constexpr std::ptrdiff_t m_fWindSpeed = 0x540;
                constexpr std::ptrdiff_t m_vWindDirection = 0x544;
                constexpr std::ptrdiff_t m_bFirstTime = 0x550;
            }
            namespace CBot {
                constexpr std::ptrdiff_t m_pController = 0x10;
                constexpr std::ptrdiff_t m_pPlayer = 0x18;
                constexpr std::ptrdiff_t m_bHasSpawned = 0x20;
                constexpr std::ptrdiff_t m_id = 0x24;
                constexpr std::ptrdiff_t m_isRunning = 0xC0;
                constexpr std::ptrdiff_t m_isCrouching = 0xC1;
                constexpr std::ptrdiff_t m_forwardSpeed = 0xC4;
                constexpr std::ptrdiff_t m_leftSpeed = 0xC8;
                constexpr std::ptrdiff_t m_verticalSpeed = 0xCC;
                constexpr std::ptrdiff_t m_buttonFlags = 0xD0;
                constexpr std::ptrdiff_t m_jumpTimestamp = 0xD8;
                constexpr std::ptrdiff_t m_viewForward = 0xDC;
                constexpr std::ptrdiff_t m_postureStackIndex = 0xF8;
            }
            namespace CPulseCell_Step_SetAnimGraphParam {
                constexpr std::ptrdiff_t m_ParamName = 0x48;
            }
            namespace CPlayer_FlashlightServices {
            }
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x7D8;
                constexpr std::ptrdiff_t m_pInventoryServices = 0x7E0;
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x7E8;
                constexpr std::ptrdiff_t m_pDamageServices = 0x7F0;
                constexpr std::ptrdiff_t m_iPing = 0x7F8;
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x7FC;
                constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x800;
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x808;
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x810;
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x814;
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x818;
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x81C;
                constexpr std::ptrdiff_t m_bAttemptedToGetColor = 0x81D;
                constexpr std::ptrdiff_t m_iTeammatePreferredColor = 0x820;
                constexpr std::ptrdiff_t m_bTeamChanged = 0x824;
                constexpr std::ptrdiff_t m_bInSwitchTeam = 0x825;
                constexpr std::ptrdiff_t m_bHasSeenJoinGame = 0x826;
                constexpr std::ptrdiff_t m_bJustBecameSpectator = 0x827;
                constexpr std::ptrdiff_t m_bSwitchTeamsOnNextRoundReset = 0x828;
                constexpr std::ptrdiff_t m_bRemoveAllItemsOnNextRoundReset = 0x829;
                constexpr std::ptrdiff_t m_flLastJoinTeamTime = 0x82C;
                constexpr std::ptrdiff_t m_szClan = 0x830;
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x838;
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x840;
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x848;
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x850;
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x854;
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x858;
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x85C;
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x860;
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x864;
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x868;
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x86C;
                constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x870;
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x874;
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x878;
                constexpr std::ptrdiff_t m_iDraftIndex = 0x8A8;
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x8AC;
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x8B0;
                constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x8B4;
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x8B8;
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x8B9;
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x8BA;
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x8BB;
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x8BC;
                constexpr std::ptrdiff_t m_bScoreReported = 0x8BD;
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x8C0;
                constexpr std::ptrdiff_t m_bControllingBot = 0x8D0;
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x8D1;
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x8D2;
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x8D4;
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x8D8;
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x8DC;
                constexpr std::ptrdiff_t m_hObserverPawn = 0x8E0;
                constexpr std::ptrdiff_t m_DesiredObserverMode = 0x8E4;
                constexpr std::ptrdiff_t m_hDesiredObserverTarget = 0x8E8;
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x8EC;
                constexpr std::ptrdiff_t m_iPawnHealth = 0x8F0;
                constexpr std::ptrdiff_t m_iPawnArmor = 0x8F4;
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x8F8;
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x8F9;
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x8FA;
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x8FC;
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x900;
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x904;
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x908;
                constexpr std::ptrdiff_t m_iScore = 0x90C;
                constexpr std::ptrdiff_t m_iRoundScore = 0x910;
                constexpr std::ptrdiff_t m_iRoundsWon = 0x914;
                constexpr std::ptrdiff_t m_recentKillQueue = 0x918;
                constexpr std::ptrdiff_t m_nFirstKill = 0x920;
                constexpr std::ptrdiff_t m_nKillCount = 0x921;
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x922;
                constexpr std::ptrdiff_t m_eMvpReason = 0x924;
                constexpr std::ptrdiff_t m_iMusicKitID = 0x928;
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x92C;
                constexpr std::ptrdiff_t m_iMVPs = 0x930;
                constexpr std::ptrdiff_t m_nUpdateCounter = 0x934;
                constexpr std::ptrdiff_t m_flSmoothedPing = 0x938;
                constexpr std::ptrdiff_t m_lastHeldVoteTimer = 0x940;
                constexpr std::ptrdiff_t m_bShowHints = 0x958;
                constexpr std::ptrdiff_t m_iNextTimeCheck = 0x95C;
                constexpr std::ptrdiff_t m_bJustDidTeamKill = 0x960;
                constexpr std::ptrdiff_t m_bPunishForTeamKill = 0x961;
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarning = 0x962;
                constexpr std::ptrdiff_t m_bGaveTeamDamageWarningThisRound = 0x963;
                constexpr std::ptrdiff_t m_dblLastReceivedPacketPlatFloatTime = 0x968;
                constexpr std::ptrdiff_t m_LastTeamDamageWarningTime = 0x970;
                constexpr std::ptrdiff_t m_LastTimePlayerWasDisconnectedForPawnsRemove = 0x974;
                constexpr std::ptrdiff_t m_nSuspiciousHitCount = 0x978;
                constexpr std::ptrdiff_t m_nNonSuspiciousHitStreak = 0x97C;
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0xA21;
            }
            namespace CPhysLength {
                constexpr std::ptrdiff_t m_offset = 0x508;
                constexpr std::ptrdiff_t m_vecAttach = 0x520;
                constexpr std::ptrdiff_t m_addLength = 0x52C;
                constexpr std::ptrdiff_t m_minLength = 0x530;
                constexpr std::ptrdiff_t m_totalLength = 0x534;
            }
            namespace CTeam {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x4A8;
                constexpr std::ptrdiff_t m_aPlayers = 0x4C0;
                constexpr std::ptrdiff_t m_iScore = 0x4D8;
                constexpr std::ptrdiff_t m_szTeamname = 0x4DC;
            }
            namespace CLogicNPCCounterAABB {
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x728;
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x734;
                constexpr std::ptrdiff_t m_vOuterMins = 0x740;
                constexpr std::ptrdiff_t m_vOuterMaxs = 0x74C;
            }
            namespace CPulseCell_Outflow_CycleOrdered_InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0;
            }
            namespace CChicken {
                constexpr std::ptrdiff_t m_AttributeManager = 0xC70;
                constexpr std::ptrdiff_t m_updateTimer = 0xF68;
                constexpr std::ptrdiff_t m_stuckAnchor = 0xF80;
                constexpr std::ptrdiff_t m_stuckTimer = 0xF90;
                constexpr std::ptrdiff_t m_collisionStuckTimer = 0xFA8;
                constexpr std::ptrdiff_t m_isOnGround = 0xFC0;
                constexpr std::ptrdiff_t m_vFallVelocity = 0xFC4;
                constexpr std::ptrdiff_t m_desiredActivity = 0xFD0;
                constexpr std::ptrdiff_t m_currentActivity = 0xFD4;
                constexpr std::ptrdiff_t m_activityTimer = 0xFD8;
                constexpr std::ptrdiff_t m_turnRate = 0xFF0;
                constexpr std::ptrdiff_t m_fleeFrom = 0xFF4;
                constexpr std::ptrdiff_t m_moveRateThrottleTimer = 0xFF8;
                constexpr std::ptrdiff_t m_startleTimer = 0x1010;
                constexpr std::ptrdiff_t m_vocalizeTimer = 0x1028;
                constexpr std::ptrdiff_t m_flWhenZombified = 0x1040;
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1044;
                constexpr std::ptrdiff_t m_leader = 0x1048;
                constexpr std::ptrdiff_t m_reuseTimer = 0x1060;
                constexpr std::ptrdiff_t m_hasBeenUsed = 0x1078;
                constexpr std::ptrdiff_t m_jumpTimer = 0x1080;
                constexpr std::ptrdiff_t m_flLastJumpTime = 0x1098;
                constexpr std::ptrdiff_t m_bInJump = 0x109C;
                constexpr std::ptrdiff_t m_repathTimer = 0x30A8;
                constexpr std::ptrdiff_t m_vecPathGoal = 0x3140;
                constexpr std::ptrdiff_t m_flActiveFollowStartTime = 0x314C;
                constexpr std::ptrdiff_t m_followMinuteTimer = 0x3150;
                constexpr std::ptrdiff_t m_BlockDirectionTimer = 0x3170;
            }
            namespace CPhysicsPropRespawnable {
                constexpr std::ptrdiff_t m_vOriginalSpawnOrigin = 0xCE0;
                constexpr std::ptrdiff_t m_vOriginalSpawnAngles = 0xCEC;
                constexpr std::ptrdiff_t m_vOriginalMins = 0xCF8;
                constexpr std::ptrdiff_t m_vOriginalMaxs = 0xD04;
                constexpr std::ptrdiff_t m_flRespawnDuration = 0xD10;
            }
            namespace CEnvBeam {
                constexpr std::ptrdiff_t m_active = 0x7D0;
                constexpr std::ptrdiff_t m_spriteTexture = 0x7D8;
                constexpr std::ptrdiff_t m_iszStartEntity = 0x7E0;
                constexpr std::ptrdiff_t m_iszEndEntity = 0x7E8;
                constexpr std::ptrdiff_t m_life = 0x7F0;
                constexpr std::ptrdiff_t m_boltWidth = 0x7F4;
                constexpr std::ptrdiff_t m_noiseAmplitude = 0x7F8;
                constexpr std::ptrdiff_t m_speed = 0x7FC;
                constexpr std::ptrdiff_t m_restrike = 0x800;
                constexpr std::ptrdiff_t m_iszSpriteName = 0x808;
                constexpr std::ptrdiff_t m_frameStart = 0x810;
                constexpr std::ptrdiff_t m_vEndPointWorld = 0x814;
                constexpr std::ptrdiff_t m_vEndPointRelative = 0x820;
                constexpr std::ptrdiff_t m_radius = 0x82C;
                constexpr std::ptrdiff_t m_TouchType = 0x830;
                constexpr std::ptrdiff_t m_iFilterName = 0x838;
                constexpr std::ptrdiff_t m_hFilter = 0x840;
                constexpr std::ptrdiff_t m_iszDecal = 0x848;
                constexpr std::ptrdiff_t m_OnTouchedByEntity = 0x850;
            }
            namespace CLightSpotEntity {
            }
            namespace CWeaponSawedoff {
            }
            namespace CTonemapTrigger {
                constexpr std::ptrdiff_t m_tonemapControllerName = 0x890;
                constexpr std::ptrdiff_t m_hTonemapController = 0x898;
            }
            namespace CEnvShake {
                constexpr std::ptrdiff_t m_limitToEntity = 0x4A8;
                constexpr std::ptrdiff_t m_Amplitude = 0x4B0;
                constexpr std::ptrdiff_t m_Frequency = 0x4B4;
                constexpr std::ptrdiff_t m_Duration = 0x4B8;
                constexpr std::ptrdiff_t m_Radius = 0x4BC;
                constexpr std::ptrdiff_t m_stopTime = 0x4C0;
                constexpr std::ptrdiff_t m_nextShake = 0x4C4;
                constexpr std::ptrdiff_t m_currentAmp = 0x4C8;
                constexpr std::ptrdiff_t m_maxForce = 0x4CC;
                constexpr std::ptrdiff_t m_shakeCallback = 0x4E0;
            }
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x278;
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x284;
                constexpr std::ptrdiff_t m_bDucked = 0x288;
                constexpr std::ptrdiff_t m_flDuckAmount = 0x28C;
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x290;
                constexpr std::ptrdiff_t m_bDuckOverride = 0x294;
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x295;
                constexpr std::ptrdiff_t m_bDucking = 0x296;
                constexpr std::ptrdiff_t m_flDuckOffset = 0x298;
                constexpr std::ptrdiff_t m_nDuckTimeMsecs = 0x29C;
                constexpr std::ptrdiff_t m_nDuckJumpTimeMsecs = 0x2A0;
                constexpr std::ptrdiff_t m_nJumpTimeMsecs = 0x2A4;
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x2A8;
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x2B8;
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x2C0;
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x2C1;
                constexpr std::ptrdiff_t m_bInStuckTest = 0x2C2;
                constexpr std::ptrdiff_t m_nTraceCount = 0x4D0;
                constexpr std::ptrdiff_t m_StuckLast = 0x4D4;
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x4D8;
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x4DC;
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x4E0;
                constexpr std::ptrdiff_t m_vecForward = 0x4E4;
                constexpr std::ptrdiff_t m_vecLeft = 0x4F0;
                constexpr std::ptrdiff_t m_vecUp = 0x4FC;
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x508;
                constexpr std::ptrdiff_t m_bMadeFootstepNoise = 0x50C;
                constexpr std::ptrdiff_t m_iFootsteps = 0x510;
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x514;
                constexpr std::ptrdiff_t m_nButtonDownMaskPrev = 0x518;
                constexpr std::ptrdiff_t m_flOffsetTickCompleteTime = 0x520;
                constexpr std::ptrdiff_t m_flOffsetTickStashedSpeed = 0x524;
                constexpr std::ptrdiff_t m_flStamina = 0x528;
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x52C;
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x530;
                constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x534;
                constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x538;
                constexpr std::ptrdiff_t m_flVelMulAtJumpStart = 0x53C;
                constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x540;
                constexpr std::ptrdiff_t m_LegacyJump = 0x548;
                constexpr std::ptrdiff_t m_ModernJump = 0x560;
                constexpr std::ptrdiff_t m_nLastJumpTick = 0x598;
                constexpr std::ptrdiff_t m_flLastJumpFrac = 0x59C;
                constexpr std::ptrdiff_t m_flLastJumpVelocityZ = 0x5A0;
                constexpr std::ptrdiff_t m_bJumpApexPending = 0x5A4;
                constexpr std::ptrdiff_t m_flTicksSinceLastSurfingDetected = 0x5A8;
                constexpr std::ptrdiff_t m_bWasSurfing = 0x5AC;
                constexpr std::ptrdiff_t m_vecInputRotated = 0x63C;
            }
            namespace SellbackPurchaseEntry_t {
                constexpr std::ptrdiff_t m_unDefIdx = 0x30;
                constexpr std::ptrdiff_t m_nCost = 0x34;
                constexpr std::ptrdiff_t m_nPrevArmor = 0x38;
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C;
                constexpr std::ptrdiff_t m_hItem = 0x40;
            }
            namespace CTriggerCallback {
            }
            namespace CSoundOpvarSetAutoRoomEntity {
                constexpr std::ptrdiff_t m_traceResults = 0x640;
                constexpr std::ptrdiff_t m_doorwayPairs = 0x658;
                constexpr std::ptrdiff_t m_flSize = 0x670;
                constexpr std::ptrdiff_t m_flHeightTolerance = 0x674;
                constexpr std::ptrdiff_t m_flSizeSqr = 0x678;
            }
            namespace CPulseCell_Outflow_ListenForEntityOutput {
                constexpr std::ptrdiff_t m_OnFired = 0x48;
                constexpr std::ptrdiff_t m_OnCanceled = 0x90;
                constexpr std::ptrdiff_t m_strEntityOutput = 0xD8;
                constexpr std::ptrdiff_t m_strEntityOutputParam = 0xE0;
                constexpr std::ptrdiff_t m_bListenUntilCanceled = 0xE8;
            }
            namespace CPushable {
            }
            namespace CRotatorTarget {
                constexpr std::ptrdiff_t m_OnArrivedAt = 0x4A8;
                constexpr std::ptrdiff_t m_eSpace = 0x4C0;
            }
            namespace CPhysicsEntitySolver {
                constexpr std::ptrdiff_t m_hMovingEntity = 0x4C0;
                constexpr std::ptrdiff_t m_hPhysicsBlocker = 0x4C4;
                constexpr std::ptrdiff_t m_separationDuration = 0x4C8;
                constexpr std::ptrdiff_t m_cancelTime = 0x4CC;
            }
            namespace CLogicCollisionPair {
                constexpr std::ptrdiff_t m_nameAttach1 = 0x4A8;
                constexpr std::ptrdiff_t m_nameAttach2 = 0x4B0;
                constexpr std::ptrdiff_t m_includeHierarchy = 0x4B8;
                constexpr std::ptrdiff_t m_supportMultipleEntitiesWithSameName = 0x4B9;
                constexpr std::ptrdiff_t m_disabled = 0x4BA;
                constexpr std::ptrdiff_t m_succeeded = 0x4BB;
            }
            namespace CTestEffect {
                constexpr std::ptrdiff_t m_iLoop = 0x4A8;
                constexpr std::ptrdiff_t m_iBeam = 0x4AC;
                constexpr std::ptrdiff_t m_pBeam = 0x4B0;
                constexpr std::ptrdiff_t m_flBeamTime = 0x510;
                constexpr std::ptrdiff_t m_flStartTime = 0x570;
            }
            namespace CPulseCell_Outflow_ScriptedSequence_CursorState_t {
                constexpr std::ptrdiff_t m_scriptedSequence = 0x0;
            }
            namespace CPropDoorRotating {
                constexpr std::ptrdiff_t m_vecAxis = 0xE50;
                constexpr std::ptrdiff_t m_flDistance = 0xE5C;
                constexpr std::ptrdiff_t m_eSpawnPosition = 0xE60;
                constexpr std::ptrdiff_t m_eOpenDirection = 0xE64;
                constexpr std::ptrdiff_t m_eCurrentOpenDirection = 0xE68;
                constexpr std::ptrdiff_t m_eDefaultCheckDirection = 0xE6C;
                constexpr std::ptrdiff_t m_flAjarAngle = 0xE70;
                constexpr std::ptrdiff_t m_angRotationAjarDeprecated = 0xE74;
                constexpr std::ptrdiff_t m_angRotationClosed = 0xE80;
                constexpr std::ptrdiff_t m_angRotationOpenForward = 0xE8C;
                constexpr std::ptrdiff_t m_angRotationOpenBack = 0xE98;
                constexpr std::ptrdiff_t m_angGoal = 0xEA4;
                constexpr std::ptrdiff_t m_vecForwardBoundsMin = 0xEB0;
                constexpr std::ptrdiff_t m_vecForwardBoundsMax = 0xEBC;
                constexpr std::ptrdiff_t m_vecBackBoundsMin = 0xEC8;
                constexpr std::ptrdiff_t m_vecBackBoundsMax = 0xED4;
                constexpr std::ptrdiff_t m_bAjarDoorShouldntAlwaysOpen = 0xEE0;
                constexpr std::ptrdiff_t m_hEntityBlocker = 0xEE4;
            }
            namespace CEnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0xCA8;
                constexpr std::ptrdiff_t m_flRadiusScale = 0xCAC;
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0xCB0;
                constexpr std::ptrdiff_t m_ColorTint = 0xCB4;
                constexpr std::ptrdiff_t m_hTextureOverride = 0xCB8;
            }
            namespace CMathRemap {
                constexpr std::ptrdiff_t m_flInMin = 0x4A8;
                constexpr std::ptrdiff_t m_flInMax = 0x4AC;
                constexpr std::ptrdiff_t m_flOut1 = 0x4B0;
                constexpr std::ptrdiff_t m_flOut2 = 0x4B4;
                constexpr std::ptrdiff_t m_flOldInValue = 0x4B8;
                constexpr std::ptrdiff_t m_bEnabled = 0x4BC;
                constexpr std::ptrdiff_t m_OutValue = 0x4C0;
                constexpr std::ptrdiff_t m_OnRoseAboveMin = 0x4E0;
                constexpr std::ptrdiff_t m_OnRoseAboveMax = 0x4F8;
                constexpr std::ptrdiff_t m_OnFellBelowMin = 0x510;
                constexpr std::ptrdiff_t m_OnFellBelowMax = 0x528;
            }
            namespace CSoundOpvarSetOBBWindEntity {
                constexpr std::ptrdiff_t m_vMins = 0x550;
                constexpr std::ptrdiff_t m_vMaxs = 0x55C;
                constexpr std::ptrdiff_t m_vDistanceMins = 0x568;
                constexpr std::ptrdiff_t m_vDistanceMaxs = 0x574;
                constexpr std::ptrdiff_t m_flWindMin = 0x580;
                constexpr std::ptrdiff_t m_flWindMax = 0x584;
                constexpr std::ptrdiff_t m_flWindMapMin = 0x588;
                constexpr std::ptrdiff_t m_flWindMapMax = 0x58C;
            }
            namespace PhysicsRagdollPose_t {
                constexpr std::ptrdiff_t m_Transforms = 0x8;
                constexpr std::ptrdiff_t m_hOwner = 0x20;
                constexpr std::ptrdiff_t m_bSetFromDebugHistory = 0x24;
            }
            namespace CPropDataComponent {
                constexpr std::ptrdiff_t m_flDmgModBullet = 0x10;
                constexpr std::ptrdiff_t m_flDmgModClub = 0x14;
                constexpr std::ptrdiff_t m_flDmgModExplosive = 0x18;
                constexpr std::ptrdiff_t m_flDmgModFire = 0x1C;
                constexpr std::ptrdiff_t m_iszPhysicsDamageTableName = 0x20;
                constexpr std::ptrdiff_t m_iszBasePropData = 0x28;
                constexpr std::ptrdiff_t m_nInteractions = 0x30;
                constexpr std::ptrdiff_t m_bSpawnMotionDisabled = 0x34;
                constexpr std::ptrdiff_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38;
                constexpr std::ptrdiff_t m_nMotionDisabledSpawnFlag = 0x3C;
            }
            namespace CScriptTriggerOnce {
                constexpr std::ptrdiff_t m_vExtent = 0x8A8;
            }
            namespace CLightOrthoEntity {
            }
            namespace CInfoInstructorHintHostageRescueZone {
            }
            namespace CPulseCell_LimitCount_InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0;
            }
            namespace CTriggerTeleport {
                constexpr std::ptrdiff_t m_iLandmark = 0x890;
                constexpr std::ptrdiff_t m_bUseLandmarkAngles = 0x898;
                constexpr std::ptrdiff_t m_bMirrorPlayer = 0x899;
                constexpr std::ptrdiff_t m_bCheckDestIfClearForPlayer = 0x89A;
            }
            namespace CFuncWall {
                constexpr std::ptrdiff_t m_nState = 0x730;
            }
            namespace CBtActionAim {
                constexpr std::ptrdiff_t m_szSensorInputKey = 0x68;
                constexpr std::ptrdiff_t m_szAimReadyKey = 0x80;
                constexpr std::ptrdiff_t m_flZoomCooldownTimestamp = 0x88;
                constexpr std::ptrdiff_t m_bDoneAiming = 0x8C;
                constexpr std::ptrdiff_t m_flLerpStartTime = 0x90;
                constexpr std::ptrdiff_t m_flNextLookTargetLerpTime = 0x94;
                constexpr std::ptrdiff_t m_flPenaltyReductionRatio = 0x98;
                constexpr std::ptrdiff_t m_NextLookTarget = 0x9C;
                constexpr std::ptrdiff_t m_AimTimer = 0xA8;
                constexpr std::ptrdiff_t m_SniperHoldTimer = 0xC0;
                constexpr std::ptrdiff_t m_FocusIntervalTimer = 0xD8;
                constexpr std::ptrdiff_t m_bAcquired = 0xF0;
            }
            namespace CCSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x4A8;
                constexpr std::ptrdiff_t m_nRandom = 0x4AC;
                constexpr std::ptrdiff_t m_nOrdinal = 0x4B0;
                constexpr std::ptrdiff_t m_sWeaponName = 0x4B8;
                constexpr std::ptrdiff_t m_xuid = 0x4C0;
                constexpr std::ptrdiff_t m_agentItem = 0x4C8;
                constexpr std::ptrdiff_t m_glovesItem = 0x770;
                constexpr std::ptrdiff_t m_weaponItem = 0xA18;
            }
            namespace CGameRulesProxy {
            }
            namespace CInfoLadderDismount {
            }
            namespace CPulseServerFuncs {
            }
            namespace CMessage {
                constexpr std::ptrdiff_t m_iszMessage = 0x4A8;
                constexpr std::ptrdiff_t m_MessageVolume = 0x4B0;
                constexpr std::ptrdiff_t m_MessageAttenuation = 0x4B4;
                constexpr std::ptrdiff_t m_Radius = 0x4B8;
                constexpr std::ptrdiff_t m_sNoise = 0x4C0;
                constexpr std::ptrdiff_t m_OnShowMessage = 0x4C8;
            }
            namespace CPointVelocitySensor {
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4A8;
                constexpr std::ptrdiff_t m_vecAxis = 0x4AC;
                constexpr std::ptrdiff_t m_bEnabled = 0x4B8;
                constexpr std::ptrdiff_t m_fPrevVelocity = 0x4BC;
                constexpr std::ptrdiff_t m_flAvgInterval = 0x4C0;
                constexpr std::ptrdiff_t m_Velocity = 0x4C8;
            }
            namespace EngineCountdownTimer {
                constexpr std::ptrdiff_t m_duration = 0x8;
                constexpr std::ptrdiff_t m_timestamp = 0xC;
                constexpr std::ptrdiff_t m_timescale = 0x10;
            }
            namespace CBaseModelEntityAPI {
            }
            namespace CHostage {
                constexpr std::ptrdiff_t m_OnHostageBeginGrab = 0xB98;
                constexpr std::ptrdiff_t m_OnFirstPickedUp = 0xBB0;
                constexpr std::ptrdiff_t m_OnDroppedNotRescued = 0xBC8;
                constexpr std::ptrdiff_t m_OnRescued = 0xBE0;
                constexpr std::ptrdiff_t m_entitySpottedState = 0xBF8;
                constexpr std::ptrdiff_t m_nSpotRules = 0xC10;
                constexpr std::ptrdiff_t m_uiHostageSpawnExclusionGroupMask = 0xC14;
                constexpr std::ptrdiff_t m_nHostageSpawnRandomFactor = 0xC18;
                constexpr std::ptrdiff_t m_bRemove = 0xC1C;
                constexpr std::ptrdiff_t m_vel = 0xC20;
                constexpr std::ptrdiff_t m_isRescued = 0xC2C;
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0xC2D;
                constexpr std::ptrdiff_t m_nHostageState = 0xC30;
                constexpr std::ptrdiff_t m_leader = 0xC34;
                constexpr std::ptrdiff_t m_lastLeader = 0xC38;
                constexpr std::ptrdiff_t m_reuseTimer = 0xC40;
                constexpr std::ptrdiff_t m_hasBeenUsed = 0xC58;
                constexpr std::ptrdiff_t m_accel = 0xC5C;
                constexpr std::ptrdiff_t m_isRunning = 0xC68;
                constexpr std::ptrdiff_t m_isCrouching = 0xC69;
                constexpr std::ptrdiff_t m_jumpTimer = 0xC70;
                constexpr std::ptrdiff_t m_isWaitingForLeader = 0xC88;
                constexpr std::ptrdiff_t m_repathTimer = 0x2C98;
                constexpr std::ptrdiff_t m_inhibitDoorTimer = 0x2CB0;
                constexpr std::ptrdiff_t m_inhibitObstacleAvoidanceTimer = 0x2D40;
                constexpr std::ptrdiff_t m_wiggleTimer = 0x2D60;
                constexpr std::ptrdiff_t m_isAdjusted = 0x2D7C;
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x2D7D;
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x2D80;
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x2D84;
                constexpr std::ptrdiff_t m_vecPositionWhenStartedDroppingToGround = 0x2D88;
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x2D94;
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x2DA0;
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x2DA4;
                constexpr std::ptrdiff_t m_flDropStartTime = 0x2DA8;
                constexpr std::ptrdiff_t m_nApproachRewardPayouts = 0x2DAC;
                constexpr std::ptrdiff_t m_nPickupEventCount = 0x2DB0;
                constexpr std::ptrdiff_t m_vecSpawnGroundPos = 0x2DB4;
                constexpr std::ptrdiff_t m_vecHostageResetPosition = 0x2DEC;
            }
            namespace CScriptTriggerMultiple {
                constexpr std::ptrdiff_t m_vExtent = 0x8A8;
            }
            namespace CEnvSpark {
                constexpr std::ptrdiff_t m_flDelay = 0x4A8;
                constexpr std::ptrdiff_t m_nMagnitude = 0x4AC;
                constexpr std::ptrdiff_t m_nTrailLength = 0x4B0;
                constexpr std::ptrdiff_t m_nType = 0x4B4;
                constexpr std::ptrdiff_t m_OnSpark = 0x4B8;
            }
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40;
                constexpr std::ptrdiff_t m_DamageList = 0x48;
            }
            namespace CFilterLOS {
            }
            namespace CPointOrient {
                constexpr std::ptrdiff_t m_iszSpawnTargetName = 0x4A8;
                constexpr std::ptrdiff_t m_hTarget = 0x4B0;
                constexpr std::ptrdiff_t m_bActive = 0x4B4;
                constexpr std::ptrdiff_t m_nGoalDirection = 0x4B8;
                constexpr std::ptrdiff_t m_nConstraint = 0x4BC;
                constexpr std::ptrdiff_t m_flMaxTurnRate = 0x4C0;
                constexpr std::ptrdiff_t m_flLastGameTime = 0x4C4;
            }
            namespace sky3dparams_t {
                constexpr std::ptrdiff_t scale = 0x8;
                constexpr std::ptrdiff_t origin = 0xC;
                constexpr std::ptrdiff_t bClip3DSkyBoxNearToWorldFar = 0x18;
                constexpr std::ptrdiff_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C;
                constexpr std::ptrdiff_t fog = 0x20;
                constexpr std::ptrdiff_t m_nWorldGroupID = 0x88;
            }
            namespace CWeaponP250 {
            }
            namespace CDestructiblePartsComponent {
                constexpr std::ptrdiff_t _m_pChainEntity = 0x0;
                constexpr std::ptrdiff_t m_vecDamageTakenByHitGroup = 0x48;
                constexpr std::ptrdiff_t m_hOwner = 0x60;
            }
            namespace CChangeLevel {
                constexpr std::ptrdiff_t m_sMapName = 0x890;
                constexpr std::ptrdiff_t m_sLandmarkName = 0x898;
                constexpr std::ptrdiff_t m_OnChangeLevel = 0x8A0;
                constexpr std::ptrdiff_t m_bTouched = 0x8B8;
                constexpr std::ptrdiff_t m_bNoTouch = 0x8B9;
                constexpr std::ptrdiff_t m_bNewChapter = 0x8BA;
                constexpr std::ptrdiff_t m_bOnChangeLevelFired = 0x8BB;
            }
            namespace CBaseButton {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7B0;
                constexpr std::ptrdiff_t m_fStayPushed = 0x7BC;
                constexpr std::ptrdiff_t m_fRotating = 0x7BD;
                constexpr std::ptrdiff_t m_ls = 0x7C0;
                constexpr std::ptrdiff_t m_sUseSound = 0x7E0;
                constexpr std::ptrdiff_t m_sLockedSound = 0x7E8;
                constexpr std::ptrdiff_t m_sUnlockedSound = 0x7F0;
                constexpr std::ptrdiff_t m_sOverrideAnticipationName = 0x7F8;
                constexpr std::ptrdiff_t m_bLocked = 0x800;
                constexpr std::ptrdiff_t m_bDisabled = 0x801;
                constexpr std::ptrdiff_t m_flUseLockedTime = 0x804;
                constexpr std::ptrdiff_t m_bSolidBsp = 0x808;
                constexpr std::ptrdiff_t m_OnDamaged = 0x810;
                constexpr std::ptrdiff_t m_OnPressed = 0x828;
                constexpr std::ptrdiff_t m_OnUseLocked = 0x840;
                constexpr std::ptrdiff_t m_OnIn = 0x858;
                constexpr std::ptrdiff_t m_OnOut = 0x870;
                constexpr std::ptrdiff_t m_nState = 0x888;
                constexpr std::ptrdiff_t m_hConstraint = 0x88C;
                constexpr std::ptrdiff_t m_hConstraintParent = 0x890;
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0x894;
                constexpr std::ptrdiff_t m_sGlowEntity = 0x898;
                constexpr std::ptrdiff_t m_glowEntity = 0x8A0;
                constexpr std::ptrdiff_t m_usable = 0x8A4;
                constexpr std::ptrdiff_t m_szDisplayText = 0x8A8;
            }
            namespace CPulseCell_SoundEventStart {
                constexpr std::ptrdiff_t m_Type = 0x48;
            }
            namespace CPulseCell_Step_DebugLog {
            }
            namespace CItem_Healthshot {
            }
            namespace CBaseGrenade {
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xAB8;
                constexpr std::ptrdiff_t m_OnExplode = 0xAD0;
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0xAE8;
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0xAE9;
                constexpr std::ptrdiff_t m_bIsLive = 0xAEA;
                constexpr std::ptrdiff_t m_DmgRadius = 0xAEC;
                constexpr std::ptrdiff_t m_flDetonateTime = 0xAF0;
                constexpr std::ptrdiff_t m_flWarnAITime = 0xAF4;
                constexpr std::ptrdiff_t m_flDamage = 0xAF8;
                constexpr std::ptrdiff_t m_iszBounceSound = 0xB00;
                constexpr std::ptrdiff_t m_ExplosionSound = 0xB08;
                constexpr std::ptrdiff_t m_hThrower = 0xB14;
                constexpr std::ptrdiff_t m_flNextAttack = 0xB2C;
                constexpr std::ptrdiff_t m_hOriginalThrower = 0xB30;
            }
            namespace CColorCorrectionVolume {
                constexpr std::ptrdiff_t m_MaxWeight = 0x890;
                constexpr std::ptrdiff_t m_FadeDuration = 0x894;
                constexpr std::ptrdiff_t m_Weight = 0x898;
                constexpr std::ptrdiff_t m_lookupFilename = 0x89C;
                constexpr std::ptrdiff_t m_LastEnterWeight = 0xA9C;
                constexpr std::ptrdiff_t m_LastEnterTime = 0xAA0;
                constexpr std::ptrdiff_t m_LastExitWeight = 0xAA4;
                constexpr std::ptrdiff_t m_LastExitTime = 0xAA8;
            }
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40;
                constexpr std::ptrdiff_t m_matchStats = 0xC8;
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x188;
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x18C;
                constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x190;
            }
            namespace CBodyComponentBaseAnimGraph {
                constexpr std::ptrdiff_t m_animationController = 0x4B0;
            }
            namespace CPulseCell_BaseYieldingInflow {
            }
            namespace PulseNodeDynamicOutflows_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0;
            }
            namespace CFogVolume {
                constexpr std::ptrdiff_t m_fogName = 0x730;
                constexpr std::ptrdiff_t m_postProcessName = 0x738;
                constexpr std::ptrdiff_t m_colorCorrectionName = 0x740;
                constexpr std::ptrdiff_t m_bDisabled = 0x750;
                constexpr std::ptrdiff_t m_bInFogVolumesList = 0x751;
            }
            namespace CFuncRotating {
                constexpr std::ptrdiff_t m_OnStopped = 0x730;
                constexpr std::ptrdiff_t m_OnStarted = 0x748;
                constexpr std::ptrdiff_t m_OnReachedStart = 0x760;
                constexpr std::ptrdiff_t m_localRotationVector = 0x778;
                constexpr std::ptrdiff_t m_flFanFriction = 0x784;
                constexpr std::ptrdiff_t m_flAttenuation = 0x788;
                constexpr std::ptrdiff_t m_flVolume = 0x78C;
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x790;
                constexpr std::ptrdiff_t m_flMaxSpeed = 0x794;
                constexpr std::ptrdiff_t m_flBlockDamage = 0x798;
                constexpr std::ptrdiff_t m_NoiseRunning = 0x7A0;
                constexpr std::ptrdiff_t m_bReversed = 0x7A8;
                constexpr std::ptrdiff_t m_bAccelDecel = 0x7A9;
                constexpr std::ptrdiff_t m_prevLocalAngles = 0x7C0;
                constexpr std::ptrdiff_t m_angStart = 0x7CC;
                constexpr std::ptrdiff_t m_bStopAtStartPos = 0x7D8;
                constexpr std::ptrdiff_t m_vecClientOrigin = 0x7DC;
                constexpr std::ptrdiff_t m_vecClientAngles = 0x7E8;
            }
            namespace CTimerEntity {
                constexpr std::ptrdiff_t m_OnTimer = 0x4A8;
                constexpr std::ptrdiff_t m_OnTimerHigh = 0x4C0;
                constexpr std::ptrdiff_t m_OnTimerLow = 0x4D8;
                constexpr std::ptrdiff_t m_iDisabled = 0x4F0;
                constexpr std::ptrdiff_t m_flInitialDelay = 0x4F4;
                constexpr std::ptrdiff_t m_flRefireTime = 0x4F8;
                constexpr std::ptrdiff_t m_bUpDownState = 0x4FC;
                constexpr std::ptrdiff_t m_iUseRandomTime = 0x500;
                constexpr std::ptrdiff_t m_bPauseAfterFiring = 0x504;
                constexpr std::ptrdiff_t m_flLowerRandomBound = 0x508;
                constexpr std::ptrdiff_t m_flUpperRandomBound = 0x50C;
                constexpr std::ptrdiff_t m_flRemainingTime = 0x510;
                constexpr std::ptrdiff_t m_bPaused = 0x514;
            }
            namespace CBtActionMoveTo {
                constexpr std::ptrdiff_t m_szDestinationInputKey = 0x60;
                constexpr std::ptrdiff_t m_szHidingSpotInputKey = 0x68;
                constexpr std::ptrdiff_t m_szThreatInputKey = 0x70;
                constexpr std::ptrdiff_t m_vecDestination = 0x78;
                constexpr std::ptrdiff_t m_bAutoLookAdjust = 0x84;
                constexpr std::ptrdiff_t m_bComputePath = 0x85;
                constexpr std::ptrdiff_t m_flDamagingAreasPenaltyCost = 0x88;
                constexpr std::ptrdiff_t m_CheckApproximateCornersTimer = 0x90;
                constexpr std::ptrdiff_t m_CheckHighPriorityItem = 0xA8;
                constexpr std::ptrdiff_t m_RepathTimer = 0xC0;
                constexpr std::ptrdiff_t m_flArrivalEpsilon = 0xD8;
                constexpr std::ptrdiff_t m_flAdditionalArrivalEpsilon2D = 0xDC;
                constexpr std::ptrdiff_t m_flHidingSpotCheckDistanceThreshold = 0xE0;
                constexpr std::ptrdiff_t m_flNearestAreaDistanceThreshold = 0xE4;
            }
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x240;
                constexpr std::ptrdiff_t m_flFallVelocity = 0x244;
                constexpr std::ptrdiff_t m_groundNormal = 0x248;
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x254;
                constexpr std::ptrdiff_t m_surfaceProps = 0x258;
                constexpr std::ptrdiff_t m_nStepside = 0x268;
                constexpr std::ptrdiff_t m_vecSmoothedVelocity = 0x26C;
            }
            namespace CBaseEntityAPI {
            }
            namespace CPulseCell_IsRequirementValid_Criteria_t {
                constexpr std::ptrdiff_t m_bIsValid = 0x0;
            }
            namespace CWeaponG3SG1 {
            }
            namespace CTriggerOnce {
            }
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68;
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C;
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70;
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74;
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78;
                constexpr std::ptrdiff_t m_iEnemy2Ks = 0x7C;
                constexpr std::ptrdiff_t m_iUtility_Count = 0x80;
                constexpr std::ptrdiff_t m_iUtility_Successes = 0x84;
                constexpr std::ptrdiff_t m_iUtility_Enemies = 0x88;
                constexpr std::ptrdiff_t m_iFlash_Count = 0x8C;
                constexpr std::ptrdiff_t m_iFlash_Successes = 0x90;
                constexpr std::ptrdiff_t m_flHealthPointsRemovedTotal = 0x94;
                constexpr std::ptrdiff_t m_flHealthPointsDealtTotal = 0x98;
                constexpr std::ptrdiff_t m_nShotsFiredTotal = 0x9C;
                constexpr std::ptrdiff_t m_nShotsOnTargetTotal = 0xA0;
                constexpr std::ptrdiff_t m_i1v1Count = 0xA4;
                constexpr std::ptrdiff_t m_i1v1Wins = 0xA8;
                constexpr std::ptrdiff_t m_i1v2Count = 0xAC;
                constexpr std::ptrdiff_t m_i1v2Wins = 0xB0;
                constexpr std::ptrdiff_t m_iEntryCount = 0xB4;
                constexpr std::ptrdiff_t m_iEntryWins = 0xB8;
            }
            namespace EntityRenderAttribute_t {
                constexpr std::ptrdiff_t m_ID = 0x30;
                constexpr std::ptrdiff_t m_Values = 0x34;
            }
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_nBlackboardReference = 0x80;
                constexpr std::ptrdiff_t m_bSelfReference = 0x82;
            }
            namespace CFuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0x750;
                constexpr std::ptrdiff_t m_nResolutionEnum = 0x758;
                constexpr std::ptrdiff_t m_bRenderShadows = 0x75C;
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x75D;
                constexpr std::ptrdiff_t m_brushModelName = 0x760;
                constexpr std::ptrdiff_t m_hTargetCamera = 0x768;
                constexpr std::ptrdiff_t m_bEnabled = 0x76C;
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x76D;
                constexpr std::ptrdiff_t m_bStartEnabled = 0x76E;
            }
            namespace CInfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x4AC;
                constexpr std::ptrdiff_t m_vBoxSize = 0x4B0;
                constexpr std::ptrdiff_t m_bEnabled = 0x4BC;
            }
            namespace CGunTarget {
                constexpr std::ptrdiff_t m_on = 0x7B0;
                constexpr std::ptrdiff_t m_hTargetEnt = 0x7B4;
                constexpr std::ptrdiff_t m_OnDeath = 0x7B8;
            }
            namespace CSoundEventConeEntity {
                constexpr std::ptrdiff_t m_flEmitterAngle = 0x558;
                constexpr std::ptrdiff_t m_flSweetSpotAngle = 0x55C;
                constexpr std::ptrdiff_t m_flAttenMin = 0x560;
                constexpr std::ptrdiff_t m_flAttenMax = 0x564;
                constexpr std::ptrdiff_t m_iszParameterName = 0x568;
            }
            namespace CSoundOpvarSetOBBEntity {
            }
            namespace CFilterMultipleAPI {
            }
            namespace CDecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0xBC8;
                constexpr std::ptrdiff_t m_shotsRemaining = 0xBCC;
                constexpr std::ptrdiff_t m_fExpireTime = 0xBD0;
                constexpr std::ptrdiff_t m_decoyWeaponDefIndex = 0xBE0;
            }
            namespace CPrecipitationBlocker {
            }
            namespace CSoundOpvarSetPathCornerEntity {
                constexpr std::ptrdiff_t m_bUseParentedPath = 0x658;
                constexpr std::ptrdiff_t m_flDistMinSqr = 0x65C;
                constexpr std::ptrdiff_t m_flDistMaxSqr = 0x660;
                constexpr std::ptrdiff_t m_iszPathCornerEntityName = 0x668;
            }
            namespace CPointClientCommand {
            }
            namespace CHostageRescueZone {
            }
            namespace CWorld {
            }
            namespace CPathMoverEntitySpawner {
                constexpr std::ptrdiff_t m_szSpawnTemplates = 0x4A8;
                constexpr std::ptrdiff_t m_nSpawnIndex = 0x4C8;
                constexpr std::ptrdiff_t m_hPathMover = 0x4CC;
                constexpr std::ptrdiff_t m_flSpawnFrequencySeconds = 0x4D0;
                constexpr std::ptrdiff_t m_flSpawnFrequencyDistToNearestMover = 0x4D4;
                constexpr std::ptrdiff_t m_mapSpawnedMoverTemplates = 0x4D8;
                constexpr std::ptrdiff_t m_nMaxActive = 0x4F8;
                constexpr std::ptrdiff_t m_flLastSpawnTime = 0x4FC;
                constexpr std::ptrdiff_t m_bEnabled = 0x500;
            }
            namespace CModelState {
                constexpr std::ptrdiff_t m_hModel = 0xA0;
                constexpr std::ptrdiff_t m_ModelName = 0xA8;
                constexpr std::ptrdiff_t m_bClientClothCreationSuppressed = 0xF5;
                constexpr std::ptrdiff_t m_MeshGroupMask = 0x1A0;
                constexpr std::ptrdiff_t m_nBodyGroupChoices = 0x1F0;
                constexpr std::ptrdiff_t m_nIdealMotionType = 0x23A;
                constexpr std::ptrdiff_t m_nForceLOD = 0x23B;
                constexpr std::ptrdiff_t m_nClothUpdateFlags = 0x23C;
            }
            namespace CPulseCell_LerpCameraSettings_CursorState_t {
                constexpr std::ptrdiff_t m_hCamera = 0x8;
                constexpr std::ptrdiff_t m_OverlaidStart = 0xC;
                constexpr std::ptrdiff_t m_OverlaidEnd = 0x1C;
            }
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48;
            }
            namespace CWeaponGlock {
            }
            namespace CHEGrenadeProjectile {
            }
            namespace CTriggerGravity {
            }
            namespace CCollisionProperty {
                constexpr std::ptrdiff_t m_collisionAttribute = 0x10;
                constexpr std::ptrdiff_t m_vecMins = 0x40;
                constexpr std::ptrdiff_t m_vecMaxs = 0x4C;
                constexpr std::ptrdiff_t m_usSolidFlags = 0x5A;
                constexpr std::ptrdiff_t m_nSolidType = 0x5B;
                constexpr std::ptrdiff_t m_triggerBloat = 0x5C;
                constexpr std::ptrdiff_t m_nSurroundType = 0x5D;
                constexpr std::ptrdiff_t m_CollisionGroup = 0x5E;
                constexpr std::ptrdiff_t m_nEnablePhysics = 0x5F;
                constexpr std::ptrdiff_t m_flBoundingRadius = 0x60;
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMins = 0x64;
                constexpr std::ptrdiff_t m_vecSpecifiedSurroundingMaxs = 0x70;
                constexpr std::ptrdiff_t m_vecSurroundingMaxs = 0x7C;
                constexpr std::ptrdiff_t m_vecSurroundingMins = 0x88;
                constexpr std::ptrdiff_t m_vCapsuleCenter1 = 0x94;
                constexpr std::ptrdiff_t m_vCapsuleCenter2 = 0xA0;
                constexpr std::ptrdiff_t m_flCapsuleRadius = 0xAC;
            }
            namespace CWeaponGalilAR {
            }
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x4E0;
            }
            namespace CWeaponMP7 {
            }
            namespace CCSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x1130;
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1134;
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x1140;
                constexpr std::ptrdiff_t m_inPrecache = 0x1144;
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1145;
                constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x1148;
                constexpr std::ptrdiff_t m_bSkillReloadAvailable = 0x114C;
                constexpr std::ptrdiff_t m_bSkillReloadLiftedReloadKey = 0x114D;
                constexpr std::ptrdiff_t m_bSkillBoltInterruptAvailable = 0x114E;
                constexpr std::ptrdiff_t m_bSkillBoltLiftedFireKey = 0x114F;
            }
            namespace CEnableMotionFixup {
            }
            namespace CLogicActiveAutosave {
                constexpr std::ptrdiff_t m_TriggerHitPoints = 0x4B8;
                constexpr std::ptrdiff_t m_flTimeToTrigger = 0x4BC;
                constexpr std::ptrdiff_t m_flStartTime = 0x4C0;
                constexpr std::ptrdiff_t m_flDangerousTime = 0x4C4;
            }
            namespace CMathCounter {
                constexpr std::ptrdiff_t m_flMin = 0x4A8;
                constexpr std::ptrdiff_t m_flMax = 0x4AC;
                constexpr std::ptrdiff_t m_bHitMin = 0x4B0;
                constexpr std::ptrdiff_t m_bHitMax = 0x4B1;
                constexpr std::ptrdiff_t m_bDisabled = 0x4B2;
                constexpr std::ptrdiff_t m_OutValue = 0x4B8;
                constexpr std::ptrdiff_t m_OnGetValue = 0x4D8;
                constexpr std::ptrdiff_t m_OnHitMin = 0x4F8;
                constexpr std::ptrdiff_t m_OnHitMax = 0x510;
                constexpr std::ptrdiff_t m_OnChangedFromMin = 0x528;
                constexpr std::ptrdiff_t m_OnChangedFromMax = 0x540;
            }
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30;
            }
            namespace CAttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50;
            }
            namespace CCSPlace {
                constexpr std::ptrdiff_t m_name = 0x748;
            }
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0;
            }
            namespace CFilterContext {
                constexpr std::ptrdiff_t m_iFilterContext = 0x4E0;
            }
            namespace CLightEnvironmentEntity {
            }
            namespace CEnvDecal {
                constexpr std::ptrdiff_t m_hDecalMaterial = 0x730;
                constexpr std::ptrdiff_t m_flWidth = 0x738;
                constexpr std::ptrdiff_t m_flHeight = 0x73C;
                constexpr std::ptrdiff_t m_flDepth = 0x740;
                constexpr std::ptrdiff_t m_nRenderOrder = 0x744;
                constexpr std::ptrdiff_t m_bProjectOnWorld = 0x748;
                constexpr std::ptrdiff_t m_bProjectOnCharacters = 0x749;
                constexpr std::ptrdiff_t m_bProjectOnWater = 0x74A;
                constexpr std::ptrdiff_t m_flDepthSortBias = 0x74C;
            }
            namespace CEnvVolumetricFogVolume {
                constexpr std::ptrdiff_t m_bActive = 0x4A8;
                constexpr std::ptrdiff_t m_vBoxMins = 0x4AC;
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4B8;
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4C4;
                constexpr std::ptrdiff_t m_bIndirectUseLPVs = 0x4C5;
                constexpr std::ptrdiff_t m_flStrength = 0x4C8;
                constexpr std::ptrdiff_t m_nFalloffShape = 0x4CC;
                constexpr std::ptrdiff_t m_flFalloffExponent = 0x4D0;
                constexpr std::ptrdiff_t m_flHeightFogDepth = 0x4D4;
                constexpr std::ptrdiff_t m_fHeightFogEdgeWidth = 0x4D8;
                constexpr std::ptrdiff_t m_fIndirectLightStrength = 0x4DC;
                constexpr std::ptrdiff_t m_fSunLightStrength = 0x4E0;
                constexpr std::ptrdiff_t m_fNoiseStrength = 0x4E4;
                constexpr std::ptrdiff_t m_TintColor = 0x4E8;
                constexpr std::ptrdiff_t m_bOverrideTintColor = 0x4EC;
                constexpr std::ptrdiff_t m_bOverrideIndirectLightStrength = 0x4ED;
                constexpr std::ptrdiff_t m_bOverrideSunLightStrength = 0x4EE;
                constexpr std::ptrdiff_t m_bOverrideNoiseStrength = 0x4EF;
            }
            namespace CServerOnlyEntity {
            }
            namespace CPulseCell_PlaySequence_CursorState_t {
                constexpr std::ptrdiff_t m_hTarget = 0x0;
            }
            namespace CBodyComponentSkeletonInstance {
                constexpr std::ptrdiff_t m_skeletonInstance = 0x80;
            }
            namespace CItemGeneric {
                constexpr std::ptrdiff_t m_bHasTriggerRadius = 0xAD4;
                constexpr std::ptrdiff_t m_bHasPickupRadius = 0xAD5;
                constexpr std::ptrdiff_t m_flPickupRadiusSqr = 0xAD8;
                constexpr std::ptrdiff_t m_flTriggerRadiusSqr = 0xADC;
                constexpr std::ptrdiff_t m_flLastPickupCheck = 0xAE0;
                constexpr std::ptrdiff_t m_bPlayerCounterListenerAdded = 0xAE4;
                constexpr std::ptrdiff_t m_bPlayerInTriggerRadius = 0xAE5;
                constexpr std::ptrdiff_t m_hSpawnParticleEffect = 0xAE8;
                constexpr std::ptrdiff_t m_pAmbientSoundEffect = 0xAF0;
                constexpr std::ptrdiff_t m_bAutoStartAmbientSound = 0xAF8;
                constexpr std::ptrdiff_t m_pSpawnScriptFunction = 0xB00;
                constexpr std::ptrdiff_t m_hPickupParticleEffect = 0xB08;
                constexpr std::ptrdiff_t m_pPickupSoundEffect = 0xB10;
                constexpr std::ptrdiff_t m_pPickupScriptFunction = 0xB18;
                constexpr std::ptrdiff_t m_hTimeoutParticleEffect = 0xB20;
                constexpr std::ptrdiff_t m_pTimeoutSoundEffect = 0xB28;
                constexpr std::ptrdiff_t m_pTimeoutScriptFunction = 0xB30;
                constexpr std::ptrdiff_t m_pPickupFilterName = 0xB38;
                constexpr std::ptrdiff_t m_hPickupFilter = 0xB40;
                constexpr std::ptrdiff_t m_OnPickup = 0xB48;
                constexpr std::ptrdiff_t m_OnTimeout = 0xB60;
                constexpr std::ptrdiff_t m_OnTriggerStartTouch = 0xB78;
                constexpr std::ptrdiff_t m_OnTriggerTouch = 0xB90;
                constexpr std::ptrdiff_t m_OnTriggerEndTouch = 0xBA8;
                constexpr std::ptrdiff_t m_pAllowPickupScriptFunction = 0xBC0;
                constexpr std::ptrdiff_t m_flPickupRadius = 0xBC8;
                constexpr std::ptrdiff_t m_flTriggerRadius = 0xBCC;
                constexpr std::ptrdiff_t m_pTriggerSoundEffect = 0xBD0;
                constexpr std::ptrdiff_t m_bGlowWhenInTrigger = 0xBD8;
                constexpr std::ptrdiff_t m_glowColor = 0xBD9;
                constexpr std::ptrdiff_t m_bUseable = 0xBDD;
                constexpr std::ptrdiff_t m_hTriggerHelper = 0xBE0;
            }
            namespace CPointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x4A9;
                constexpr std::ptrdiff_t m_nInputType = 0x4AC;
                constexpr std::ptrdiff_t m_iszRemapLineStartName = 0x4B0;
                constexpr std::ptrdiff_t m_iszRemapLineEndName = 0x4B8;
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x4C0;
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x4C4;
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x4C8;
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x4CC;
                constexpr std::ptrdiff_t m_flEngageDistance = 0x4D0;
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x4D4;
                constexpr std::ptrdiff_t m_nOutputType = 0x4D8;
                constexpr std::ptrdiff_t m_iszOutputEntityName = 0x4E0;
                constexpr std::ptrdiff_t m_iszOutputEntity2Name = 0x4E8;
                constexpr std::ptrdiff_t m_iszOutputEntity3Name = 0x4F0;
                constexpr std::ptrdiff_t m_iszOutputEntity4Name = 0x4F8;
                constexpr std::ptrdiff_t m_hOutputEntities = 0x500;
                constexpr std::ptrdiff_t m_nHapticsType = 0x518;
                constexpr std::ptrdiff_t m_nMomentumType = 0x51C;
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x520;
                constexpr std::ptrdiff_t m_flSnapValue = 0x524;
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x528;
                constexpr std::ptrdiff_t m_nRatchetType = 0x52C;
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x530;
                constexpr std::ptrdiff_t m_flInputOffset = 0x534;
                constexpr std::ptrdiff_t m_bEngaged = 0x538;
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x539;
                constexpr std::ptrdiff_t m_flPreviousValue = 0x53C;
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x540;
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x544;
                constexpr std::ptrdiff_t m_hUsingPlayer = 0x550;
                constexpr std::ptrdiff_t m_flCustomOutputValue = 0x554;
                constexpr std::ptrdiff_t m_iszSoundEngage = 0x558;
                constexpr std::ptrdiff_t m_iszSoundDisengage = 0x560;
                constexpr std::ptrdiff_t m_iszSoundReachedValueZero = 0x568;
                constexpr std::ptrdiff_t m_iszSoundReachedValueOne = 0x570;
                constexpr std::ptrdiff_t m_iszSoundMovingLoop = 0x578;
                constexpr std::ptrdiff_t m_Position = 0x598;
                constexpr std::ptrdiff_t m_PositionDelta = 0x5B8;
                constexpr std::ptrdiff_t m_OnReachedValueZero = 0x5D8;
                constexpr std::ptrdiff_t m_OnReachedValueOne = 0x5F0;
                constexpr std::ptrdiff_t m_OnReachedValueCustom = 0x608;
                constexpr std::ptrdiff_t m_OnEngage = 0x620;
                constexpr std::ptrdiff_t m_OnDisengage = 0x638;
            }
            namespace CBtNodeConditionInactive {
                constexpr std::ptrdiff_t m_flRoundStartThresholdSeconds = 0x78;
                constexpr std::ptrdiff_t m_flSensorInactivityThresholdSeconds = 0x7C;
                constexpr std::ptrdiff_t m_SensorInactivityTimer = 0x80;
            }
            namespace CCSGO_TeamIntroCounterTerroristPosition {
            }
            namespace CRagdollProp {
                constexpr std::ptrdiff_t m_ragdoll = 0xA30;
                constexpr std::ptrdiff_t m_bStartDisabled = 0xA80;
                constexpr std::ptrdiff_t m_ragEnabled = 0xA88;
                constexpr std::ptrdiff_t m_ragPos = 0xAA0;
                constexpr std::ptrdiff_t m_ragAngles = 0xAB8;
                constexpr std::ptrdiff_t m_lastUpdateTickCount = 0xAD0;
                constexpr std::ptrdiff_t m_allAsleep = 0xAD4;
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xAD5;
                constexpr std::ptrdiff_t m_hDamageEntity = 0xAD8;
                constexpr std::ptrdiff_t m_hKiller = 0xADC;
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0xAE0;
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0xAE4;
                constexpr std::ptrdiff_t m_flFadeOutStartTime = 0xAE8;
                constexpr std::ptrdiff_t m_flFadeTime = 0xAEC;
                constexpr std::ptrdiff_t m_vecLastOrigin = 0xAF0;
                constexpr std::ptrdiff_t m_flAwakeTime = 0xAFC;
                constexpr std::ptrdiff_t m_flLastOriginChangeTime = 0xB00;
                constexpr std::ptrdiff_t m_strOriginClassName = 0xB08;
                constexpr std::ptrdiff_t m_strSourceClassName = 0xB10;
                constexpr std::ptrdiff_t m_bHasBeenPhysgunned = 0xB18;
                constexpr std::ptrdiff_t m_bAllowStretch = 0xB19;
                constexpr std::ptrdiff_t m_flBlendWeight = 0xB1C;
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0xB20;
                constexpr std::ptrdiff_t m_ragdollMins = 0xB28;
                constexpr std::ptrdiff_t m_ragdollMaxs = 0xB40;
                constexpr std::ptrdiff_t m_bShouldDeleteActivationRecord = 0xB58;
            }
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30;
            }
            namespace CFuncTrain {
                constexpr std::ptrdiff_t m_hCurrentTarget = 0x7D8;
                constexpr std::ptrdiff_t m_activated = 0x7DC;
                constexpr std::ptrdiff_t m_hEnemy = 0x7E0;
                constexpr std::ptrdiff_t m_flBlockDamage = 0x7E4;
                constexpr std::ptrdiff_t m_flNextBlockTime = 0x7E8;
                constexpr std::ptrdiff_t m_iszLastTarget = 0x7F0;
            }
            namespace CAI_ChangeHintGroup {
                constexpr std::ptrdiff_t m_iSearchType = 0x4A8;
                constexpr std::ptrdiff_t m_strSearchName = 0x4B0;
                constexpr std::ptrdiff_t m_strNewHintGroup = 0x4B8;
                constexpr std::ptrdiff_t m_flRadius = 0x4C0;
            }
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0xD0;
            }
            namespace CWeaponAug {
            }
            namespace CPhysHinge {
                constexpr std::ptrdiff_t m_soundInfo = 0x510;
                constexpr std::ptrdiff_t m_NotifyMinLimitReached = 0x5A8;
                constexpr std::ptrdiff_t m_NotifyMaxLimitReached = 0x5C0;
                constexpr std::ptrdiff_t m_bAtMinLimit = 0x5D8;
                constexpr std::ptrdiff_t m_bAtMaxLimit = 0x5D9;
                constexpr std::ptrdiff_t m_hinge = 0x5DC;
                constexpr std::ptrdiff_t m_hingeFriction = 0x61C;
                constexpr std::ptrdiff_t m_systemLoadScale = 0x620;
                constexpr std::ptrdiff_t m_bIsAxisLocal = 0x624;
                constexpr std::ptrdiff_t m_flMinRotation = 0x628;
                constexpr std::ptrdiff_t m_flMaxRotation = 0x62C;
                constexpr std::ptrdiff_t m_flInitialRotation = 0x630;
                constexpr std::ptrdiff_t m_flMotorFrequency = 0x634;
                constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x638;
                constexpr std::ptrdiff_t m_flAngleSpeed = 0x63C;
                constexpr std::ptrdiff_t m_flAngleSpeedThreshold = 0x640;
                constexpr std::ptrdiff_t m_flLimitsDebugVisRotation = 0x644;
                constexpr std::ptrdiff_t m_OnStartMoving = 0x648;
                constexpr std::ptrdiff_t m_OnStopMoving = 0x660;
            }
            namespace CBuyZone {
                constexpr std::ptrdiff_t m_LegacyTeamNum = 0x890;
            }
            namespace CWeaponSSG08 {
            }
            namespace CLogicRelayAPI {
            }
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x4A8;
                constexpr std::ptrdiff_t m_worldName = 0x4C0;
                constexpr std::ptrdiff_t m_layerName = 0x4C8;
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x4D0;
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x4D1;
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x4D2;
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x4D4;
            }
            namespace CBodyComponentBaseModelEntity {
            }
            namespace CLogicProximity {
            }
            namespace CPointGiveAmmo {
                constexpr std::ptrdiff_t m_pActivator = 0x4A8;
            }
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x4E0;
            }
            namespace CPointCamera {
                constexpr std::ptrdiff_t m_FOV = 0x4A8;
                constexpr std::ptrdiff_t m_Resolution = 0x4AC;
                constexpr std::ptrdiff_t m_bFogEnable = 0x4B0;
                constexpr std::ptrdiff_t m_FogColor = 0x4B1;
                constexpr std::ptrdiff_t m_flFogStart = 0x4B8;
                constexpr std::ptrdiff_t m_flFogEnd = 0x4BC;
                constexpr std::ptrdiff_t m_flFogMaxDensity = 0x4C0;
                constexpr std::ptrdiff_t m_bActive = 0x4C4;
                constexpr std::ptrdiff_t m_bUseScreenAspectRatio = 0x4C5;
                constexpr std::ptrdiff_t m_flAspectRatio = 0x4C8;
                constexpr std::ptrdiff_t m_bNoSky = 0x4CC;
                constexpr std::ptrdiff_t m_fBrightness = 0x4D0;
                constexpr std::ptrdiff_t m_flZFar = 0x4D4;
                constexpr std::ptrdiff_t m_flZNear = 0x4D8;
                constexpr std::ptrdiff_t m_bCanHLTVUse = 0x4DC;
                constexpr std::ptrdiff_t m_bAlignWithParent = 0x4DD;
                constexpr std::ptrdiff_t m_bDofEnabled = 0x4DE;
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x4E0;
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x4E4;
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x4E8;
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x4EC;
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x4F0;
                constexpr std::ptrdiff_t m_TargetFOV = 0x4F4;
                constexpr std::ptrdiff_t m_DegreesPerSecond = 0x4F8;
                constexpr std::ptrdiff_t m_bIsOn = 0x4FC;
                constexpr std::ptrdiff_t m_pNext = 0x500;
            }
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8;
                constexpr std::ptrdiff_t m_pManager = 0x70;
            }
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48;
            }
            namespace CFilterProximity {
                constexpr std::ptrdiff_t m_flRadius = 0x4E0;
            }
            namespace CCS2WeaponGraphController {
                constexpr std::ptrdiff_t m_action = 0x90;
                constexpr std::ptrdiff_t m_bActionReset = 0xA8;
                constexpr std::ptrdiff_t m_flWeaponActionSpeedScale = 0xC0;
                constexpr std::ptrdiff_t m_weaponCategory = 0xD8;
                constexpr std::ptrdiff_t m_weaponType = 0xF0;
                constexpr std::ptrdiff_t m_weaponExtraInfo = 0x108;
                constexpr std::ptrdiff_t m_flWeaponAmmo = 0x120;
                constexpr std::ptrdiff_t m_flWeaponAmmoMax = 0x138;
                constexpr std::ptrdiff_t m_flWeaponAmmoReserve = 0x150;
                constexpr std::ptrdiff_t m_bWeaponIsSilenced = 0x168;
                constexpr std::ptrdiff_t m_flWeaponIronsightAmount = 0x180;
                constexpr std::ptrdiff_t m_bIsUsingLegacyModel = 0x198;
                constexpr std::ptrdiff_t m_idleVariation = 0x1B0;
                constexpr std::ptrdiff_t m_deployVariation = 0x1C8;
                constexpr std::ptrdiff_t m_attackType = 0x1E0;
                constexpr std::ptrdiff_t m_attackThrowStrength = 0x1F8;
                constexpr std::ptrdiff_t m_flAttackVariation = 0x210;
                constexpr std::ptrdiff_t m_inspectVariation = 0x228;
                constexpr std::ptrdiff_t m_inspectExtraInfo = 0x240;
                constexpr std::ptrdiff_t m_reloadStage = 0x258;
            }
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8;
                constexpr std::ptrdiff_t m_vStart = 0x14;
                constexpr std::ptrdiff_t m_vNormal = 0x20;
                constexpr std::ptrdiff_t m_vAngles = 0x2C;
                constexpr std::ptrdiff_t m_hEntity = 0x38;
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C;
                constexpr std::ptrdiff_t m_flScale = 0x40;
                constexpr std::ptrdiff_t m_flMagnitude = 0x44;
                constexpr std::ptrdiff_t m_flRadius = 0x48;
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C;
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50;
                constexpr std::ptrdiff_t m_nDamageType = 0x58;
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C;
                constexpr std::ptrdiff_t m_nMaterial = 0x5E;
                constexpr std::ptrdiff_t m_nHitBox = 0x60;
                constexpr std::ptrdiff_t m_nColor = 0x62;
                constexpr std::ptrdiff_t m_fFlags = 0x63;
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64;
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68;
                constexpr std::ptrdiff_t m_iEffectName = 0x6C;
                constexpr std::ptrdiff_t m_nExplosionType = 0x6E;
            }
            namespace CEntityDissolve {
                constexpr std::ptrdiff_t m_flFadeInStart = 0x730;
                constexpr std::ptrdiff_t m_flFadeInLength = 0x734;
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x738;
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x73C;
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x740;
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x744;
                constexpr std::ptrdiff_t m_flStartTime = 0x748;
                constexpr std::ptrdiff_t m_nDissolveType = 0x74C;
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x750;
                constexpr std::ptrdiff_t m_nMagnitude = 0x75C;
            }
            namespace CCSGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0xD8;
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0xD9;
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0xDC;
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0xE0;
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0xE4;
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0xE5;
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0xE8;
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0xEC;
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0xF0;
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0xF4;
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0xF8;
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0xF9;
                constexpr std::ptrdiff_t m_iFreezeTime = 0xFC;
                constexpr std::ptrdiff_t m_iRoundTime = 0x100;
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x104;
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x108;
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x10C;
                constexpr std::ptrdiff_t m_bGameRestart = 0x110;
                constexpr std::ptrdiff_t m_flGameStartTime = 0x114;
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x118;
                constexpr std::ptrdiff_t m_gamePhase = 0x11C;
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x120;
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x124;
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x128;
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x12C;
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x130;
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x131;
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x132;
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x133;
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x134;
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0x138;
                constexpr std::ptrdiff_t m_bIsValveDS = 0x13C;
                constexpr std::ptrdiff_t m_bLogoMap = 0x13D;
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0x13E;
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0x140;
                constexpr std::ptrdiff_t m_MatchDevice = 0x144;
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0x148;
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0x14C;
                constexpr std::ptrdiff_t m_szTournamentEventName = 0x150;
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x350;
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x550;
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x750;
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x950;
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x954;
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x958;
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x95C;
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x95D;
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x95E;
                constexpr std::ptrdiff_t m_bBombPlanted = 0x95F;
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x960;
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0xA28;
                constexpr std::ptrdiff_t m_numBestOfMaps = 0xA38;
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0xA3C;
                constexpr std::ptrdiff_t m_bBombDropped = 0xA40;
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA44;
                constexpr std::ptrdiff_t m_eRoundWinReason = 0xA48;
                constexpr std::ptrdiff_t m_bTCantBuy = 0xA4C;
                constexpr std::ptrdiff_t m_bCTCantBuy = 0xA4D;
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0xA50;
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xAC8;
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xB40;
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xBB8;
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xC38;
                constexpr std::ptrdiff_t m_vMinimapMins = 0xCB8;
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xCC4;
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xCD0;
                constexpr std::ptrdiff_t m_ullLocalMatchID = 0xCF0;
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xCF8;
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xD20;
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xD48;
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xD4C;
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xD50;
                constexpr std::ptrdiff_t m_bHasHostageBeenTouched = 0xD70;
                constexpr std::ptrdiff_t m_flIntermissionStartTime = 0xD74;
                constexpr std::ptrdiff_t m_flIntermissionEndTime = 0xD78;
                constexpr std::ptrdiff_t m_bLevelInitialized = 0xD7C;
                constexpr std::ptrdiff_t m_iTotalRoundsPlayed = 0xD80;
                constexpr std::ptrdiff_t m_iUnBalancedRounds = 0xD84;
                constexpr std::ptrdiff_t m_endMatchOnRoundReset = 0xD88;
                constexpr std::ptrdiff_t m_endMatchOnThink = 0xD89;
                constexpr std::ptrdiff_t m_iNumTerrorist = 0xD8C;
                constexpr std::ptrdiff_t m_iNumCT = 0xD90;
                constexpr std::ptrdiff_t m_iNumSpawnableTerrorist = 0xD94;
                constexpr std::ptrdiff_t m_iNumSpawnableCT = 0xD98;
                constexpr std::ptrdiff_t m_arrSelectedHostageSpawnIndices = 0xDA0;
                constexpr std::ptrdiff_t m_nSpawnPointsRandomSeed = 0xDB8;
                constexpr std::ptrdiff_t m_bFirstConnected = 0xDBC;
                constexpr std::ptrdiff_t m_bCompleteReset = 0xDBD;
                constexpr std::ptrdiff_t m_bPickNewTeamsOnReset = 0xDBE;
                constexpr std::ptrdiff_t m_bScrambleTeamsOnRestart = 0xDBF;
                constexpr std::ptrdiff_t m_bSwapTeamsOnRestart = 0xDC0;
                constexpr std::ptrdiff_t m_nEndMatchTiedVotes = 0xDC8;
                constexpr std::ptrdiff_t m_bNeedToAskPlayersForContinueVote = 0xDE4;
                constexpr std::ptrdiff_t m_numQueuedMatchmakingAccounts = 0xDE8;
                constexpr std::ptrdiff_t m_fAvgPlayerRank = 0xDEC;
                constexpr std::ptrdiff_t m_pQueuedMatchmakingReservationString = 0xDF0;
                constexpr std::ptrdiff_t m_numTotalTournamentDrops = 0xDF8;
                constexpr std::ptrdiff_t m_numSpectatorsCountMax = 0xDFC;
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxTV = 0xE00;
                constexpr std::ptrdiff_t m_numSpectatorsCountMaxLnk = 0xE04;
                constexpr std::ptrdiff_t m_nCTsAliveAtFreezetimeEnd = 0xE10;
                constexpr std::ptrdiff_t m_nTerroristsAliveAtFreezetimeEnd = 0xE14;
                constexpr std::ptrdiff_t m_bForceTeamChangeSilent = 0xE18;
                constexpr std::ptrdiff_t m_bLoadingRoundBackupData = 0xE19;
                constexpr std::ptrdiff_t m_nMatchInfoShowType = 0xE50;
                constexpr std::ptrdiff_t m_flMatchInfoDecidedTime = 0xE54;
                constexpr std::ptrdiff_t mTeamDMLastWinningTeamNumber = 0xE70;
                constexpr std::ptrdiff_t mTeamDMLastThinkTime = 0xE74;
                constexpr std::ptrdiff_t m_flTeamDMLastAnnouncementTime = 0xE78;
                constexpr std::ptrdiff_t m_iAccountTerrorist = 0xE7C;
                constexpr std::ptrdiff_t m_iAccountCT = 0xE80;
                constexpr std::ptrdiff_t m_iSpawnPointCount_Terrorist = 0xE84;
                constexpr std::ptrdiff_t m_iSpawnPointCount_CT = 0xE88;
                constexpr std::ptrdiff_t m_iMaxNumTerrorists = 0xE8C;
                constexpr std::ptrdiff_t m_iMaxNumCTs = 0xE90;
                constexpr std::ptrdiff_t m_iLoserBonusMostRecentTeam = 0xE94;
                constexpr std::ptrdiff_t m_tmNextPeriodicThink = 0xE98;
                constexpr std::ptrdiff_t m_bVoiceWonMatchBragFired = 0xE9C;
                constexpr std::ptrdiff_t m_fWarmupNextChatNoticeTime = 0xEA0;
                constexpr std::ptrdiff_t m_iHostagesRescued = 0xEA8;
                constexpr std::ptrdiff_t m_iHostagesTouched = 0xEAC;
                constexpr std::ptrdiff_t m_flNextHostageAnnouncement = 0xEB0;
                constexpr std::ptrdiff_t m_bNoTerroristsKilled = 0xEB4;
                constexpr std::ptrdiff_t m_bNoCTsKilled = 0xEB5;
                constexpr std::ptrdiff_t m_bNoEnemiesKilled = 0xEB6;
                constexpr std::ptrdiff_t m_bCanDonateWeapons = 0xEB7;
                constexpr std::ptrdiff_t m_firstKillTime = 0xEBC;
                constexpr std::ptrdiff_t m_firstBloodTime = 0xEC4;
                constexpr std::ptrdiff_t m_hostageWasInjured = 0xEE0;
                constexpr std::ptrdiff_t m_hostageWasKilled = 0xEE1;
                constexpr std::ptrdiff_t m_bVoteCalled = 0xEF0;
                constexpr std::ptrdiff_t m_bServerVoteOnReset = 0xEF1;
                constexpr std::ptrdiff_t m_flVoteCheckThrottle = 0xEF4;
                constexpr std::ptrdiff_t m_bBuyTimeEnded = 0xEF8;
                constexpr std::ptrdiff_t m_nLastFreezeEndBeep = 0xEFC;
                constexpr std::ptrdiff_t m_bTargetBombed = 0xF00;
                constexpr std::ptrdiff_t m_bBombDefused = 0xF01;
                constexpr std::ptrdiff_t m_bMapHasBombZone = 0xF02;
                constexpr std::ptrdiff_t m_vecMainCTSpawnPos = 0xF50;
                constexpr std::ptrdiff_t m_CTSpawnPointsMasterList = 0xF60;
                constexpr std::ptrdiff_t m_TerroristSpawnPointsMasterList = 0xF78;
                constexpr std::ptrdiff_t m_bRespawningAllRespawnablePlayers = 0xF90;
                constexpr std::ptrdiff_t m_iNextCTSpawnPoint = 0xF94;
                constexpr std::ptrdiff_t m_flCTSpawnPointUsedTime = 0xF98;
                constexpr std::ptrdiff_t m_iNextTerroristSpawnPoint = 0xF9C;
                constexpr std::ptrdiff_t m_flTerroristSpawnPointUsedTime = 0xFA0;
                constexpr std::ptrdiff_t m_CTSpawnPoints = 0xFA8;
                constexpr std::ptrdiff_t m_TerroristSpawnPoints = 0xFC0;
                constexpr std::ptrdiff_t m_bIsUnreservedGameServer = 0xFD8;
                constexpr std::ptrdiff_t m_fAutobalanceDisplayTime = 0xFDC;
                constexpr std::ptrdiff_t m_bAllowWeaponSwitch = 0x1018;
                constexpr std::ptrdiff_t m_bRoundTimeWarningTriggered = 0x1019;
                constexpr std::ptrdiff_t m_phaseChangeAnnouncementTime = 0x101C;
                constexpr std::ptrdiff_t m_fNextUpdateTeamClanNamesTime = 0x1020;
                constexpr std::ptrdiff_t m_flLastThinkTime = 0x1024;
                constexpr std::ptrdiff_t m_fAccumulatedRoundOffDamage = 0x1028;
                constexpr std::ptrdiff_t m_nShorthandedBonusLastEvalRound = 0x102C;
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0x1078;
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0x107C;
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0x107D;
                constexpr std::ptrdiff_t m_pGameModeRules = 0x1098;
                constexpr std::ptrdiff_t m_BtGlobalBlackboard = 0x10A0;
                constexpr std::ptrdiff_t m_hPlayerResource = 0x1138;
                constexpr std::ptrdiff_t m_RetakeRules = 0x1140;
                constexpr std::ptrdiff_t m_arrTeamUniqueKillWeaponsMatch = 0x1330;
                constexpr std::ptrdiff_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x1390;
                constexpr std::ptrdiff_t m_nMatchEndCount = 0x13B8;
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0x13BC;
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0x13C0;
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0x13C4;
                constexpr std::ptrdiff_t m_fTeamIntroPeriodEnd = 0x13C8;
                constexpr std::ptrdiff_t m_bPlayedTeamIntroVO = 0x13CC;
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0x13D0;
                constexpr std::ptrdiff_t m_eRoundEndReason = 0x13D4;
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0x13D8;
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0x13DC;
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0x13E0;
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0x13E8;
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0x13EC;
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0x13F0;
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0x13F4;
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0x13F8;
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0x1400;
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0x1404;
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0x1408;
                constexpr std::ptrdiff_t m_nRoundEndCount = 0x140C;
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0x1410;
                constexpr std::ptrdiff_t m_nRoundStartCount = 0x1414;
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x5420;
            }
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48;
            }
            namespace CBaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0xB40;
                constexpr std::ptrdiff_t m_vInitialVelocity = 0xB4C;
                constexpr std::ptrdiff_t m_nBounces = 0xB58;
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0xB60;
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0xB68;
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0xB6C;
                constexpr std::ptrdiff_t m_flSpawnTime = 0xB78;
                constexpr std::ptrdiff_t m_unOGSExtraFlags = 0xB7C;
                constexpr std::ptrdiff_t m_bDetonationRecorded = 0xB7D;
                constexpr std::ptrdiff_t m_nItemIndex = 0xB7E;
                constexpr std::ptrdiff_t m_vecOriginalSpawnLocation = 0xB80;
                constexpr std::ptrdiff_t m_flLastBounceSoundTime = 0xB8C;
                constexpr std::ptrdiff_t m_vecGrenadeSpin = 0xB90;
                constexpr std::ptrdiff_t m_vecLastHitSurfaceNormal = 0xB9C;
                constexpr std::ptrdiff_t m_nTicksAtZeroVelocity = 0xBA8;
                constexpr std::ptrdiff_t m_bHasEverHitEnemy = 0xBAC;
            }
            namespace CPhysConstraint {
                constexpr std::ptrdiff_t m_nameAttach1 = 0x4B0;
                constexpr std::ptrdiff_t m_nameAttach2 = 0x4B8;
                constexpr std::ptrdiff_t m_hAttach1 = 0x4C0;
                constexpr std::ptrdiff_t m_hAttach2 = 0x4C4;
                constexpr std::ptrdiff_t m_nameAttachment1 = 0x4C8;
                constexpr std::ptrdiff_t m_nameAttachment2 = 0x4D0;
                constexpr std::ptrdiff_t m_breakSound = 0x4D8;
                constexpr std::ptrdiff_t m_forceLimit = 0x4E0;
                constexpr std::ptrdiff_t m_torqueLimit = 0x4E4;
                constexpr std::ptrdiff_t m_minTeleportDistance = 0x4E8;
                constexpr std::ptrdiff_t m_bSnapObjectPositions = 0x4EC;
                constexpr std::ptrdiff_t m_bTreatEntity1AsInfiniteMass = 0x4ED;
                constexpr std::ptrdiff_t m_OnBreak = 0x4F0;
            }
            namespace CLogicAchievement {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_iszAchievementEventID = 0x4B0;
                constexpr std::ptrdiff_t m_OnFired = 0x4B8;
            }
            namespace CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t {
                constexpr std::ptrdiff_t pItem = 0x0;
                constexpr std::ptrdiff_t team = 0x8;
                constexpr std::ptrdiff_t slot = 0xA;
            }
            namespace CLightComponent {
                constexpr std::ptrdiff_t _m_pChainEntity = 0x38;
                constexpr std::ptrdiff_t m_Color = 0x75;
                constexpr std::ptrdiff_t m_SecondaryColor = 0x79;
                constexpr std::ptrdiff_t m_flBrightness = 0x80;
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x84;
                constexpr std::ptrdiff_t m_flBrightnessMult = 0x88;
                constexpr std::ptrdiff_t m_flRange = 0x8C;
                constexpr std::ptrdiff_t m_flFalloff = 0x90;
                constexpr std::ptrdiff_t m_flAttenuation0 = 0x94;
                constexpr std::ptrdiff_t m_flAttenuation1 = 0x98;
                constexpr std::ptrdiff_t m_flAttenuation2 = 0x9C;
                constexpr std::ptrdiff_t m_flTheta = 0xA0;
                constexpr std::ptrdiff_t m_flPhi = 0xA4;
                constexpr std::ptrdiff_t m_hLightCookie = 0xA8;
                constexpr std::ptrdiff_t m_nCascades = 0xB0;
                constexpr std::ptrdiff_t m_nCastShadows = 0xB4;
                constexpr std::ptrdiff_t m_nShadowWidth = 0xB8;
                constexpr std::ptrdiff_t m_nShadowHeight = 0xBC;
                constexpr std::ptrdiff_t m_bRenderDiffuse = 0xC0;
                constexpr std::ptrdiff_t m_nRenderSpecular = 0xC4;
                constexpr std::ptrdiff_t m_bRenderTransmissive = 0xC8;
                constexpr std::ptrdiff_t m_flOrthoLightWidth = 0xCC;
                constexpr std::ptrdiff_t m_flOrthoLightHeight = 0xD0;
                constexpr std::ptrdiff_t m_nStyle = 0xD4;
                constexpr std::ptrdiff_t m_Pattern = 0xD8;
                constexpr std::ptrdiff_t m_nCascadeRenderStaticObjects = 0xE0;
                constexpr std::ptrdiff_t m_flShadowCascadeCrossFade = 0xE4;
                constexpr std::ptrdiff_t m_flShadowCascadeDistanceFade = 0xE8;
                constexpr std::ptrdiff_t m_flShadowCascadeDistance0 = 0xEC;
                constexpr std::ptrdiff_t m_flShadowCascadeDistance1 = 0xF0;
                constexpr std::ptrdiff_t m_flShadowCascadeDistance2 = 0xF4;
                constexpr std::ptrdiff_t m_flShadowCascadeDistance3 = 0xF8;
                constexpr std::ptrdiff_t m_nShadowCascadeResolution0 = 0xFC;
                constexpr std::ptrdiff_t m_nShadowCascadeResolution1 = 0x100;
                constexpr std::ptrdiff_t m_nShadowCascadeResolution2 = 0x104;
                constexpr std::ptrdiff_t m_nShadowCascadeResolution3 = 0x108;
                constexpr std::ptrdiff_t m_bUsesBakedShadowing = 0x10C;
                constexpr std::ptrdiff_t m_nShadowPriority = 0x110;
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x114;
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x118;
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x11C;
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x120;
                constexpr std::ptrdiff_t m_bAllowSSTGeneration = 0x121;
                constexpr std::ptrdiff_t m_nDirectLight = 0x124;
                constexpr std::ptrdiff_t m_nIndirectLight = 0x128;
                constexpr std::ptrdiff_t m_bDynamicBounce = 0x12C;
                constexpr std::ptrdiff_t m_flFadeMinDist = 0x130;
                constexpr std::ptrdiff_t m_flFadeMaxDist = 0x134;
                constexpr std::ptrdiff_t m_flShadowFadeMinDist = 0x138;
                constexpr std::ptrdiff_t m_flShadowFadeMaxDist = 0x13C;
                constexpr std::ptrdiff_t m_bEnabled = 0x140;
                constexpr std::ptrdiff_t m_bFlicker = 0x141;
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x142;
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x144;
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x150;
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x15C;
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x168;
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x174;
                constexpr std::ptrdiff_t m_flPrecomputedMaxRange = 0x180;
                constexpr std::ptrdiff_t m_nFogLightingMode = 0x184;
                constexpr std::ptrdiff_t m_flFogContributionStength = 0x188;
                constexpr std::ptrdiff_t m_flNearClipPlane = 0x18C;
                constexpr std::ptrdiff_t m_SkyColor = 0x190;
                constexpr std::ptrdiff_t m_flSkyIntensity = 0x194;
                constexpr std::ptrdiff_t m_SkyAmbientBounce = 0x198;
                constexpr std::ptrdiff_t m_bUseSecondaryColor = 0x19C;
                constexpr std::ptrdiff_t m_bMixedShadows = 0x19D;
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x1A0;
                constexpr std::ptrdiff_t m_flCapsuleLength = 0x1A4;
                constexpr std::ptrdiff_t m_flMinRoughness = 0x1A8;
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x1B8;
            }
            namespace CCSWeaponBase {
                constexpr std::ptrdiff_t m_bRemoveable = 0xE20;
                constexpr std::ptrdiff_t m_bPlayerAmmoStockOnPickup = 0xE21;
                constexpr std::ptrdiff_t m_bRequireUseToTouch = 0xE22;
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0xE24;
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0xE28;
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0xE2C;
                constexpr std::ptrdiff_t m_bInspectPending = 0xE30;
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0xE31;
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0xE5C;
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0xE78;
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xE80;
                constexpr std::ptrdiff_t m_weaponMode = 0xE98;
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0xE9C;
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0xEA0;
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0xEAC;
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0xEB0;
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0xEB4;
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0xEB8;
                constexpr std::ptrdiff_t m_iRecoilIndex = 0xEBC;
                constexpr std::ptrdiff_t m_flRecoilIndex = 0xEC0;
                constexpr std::ptrdiff_t m_bBurstMode = 0xEC4;
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0xEC8;
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0xECC;
                constexpr std::ptrdiff_t m_bInReload = 0xED0;
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0xED4;
                constexpr std::ptrdiff_t m_bIsHauledBack = 0xED8;
                constexpr std::ptrdiff_t m_bSilencerOn = 0xED9;
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0xEDC;
                constexpr std::ptrdiff_t m_flWeaponActionPlaybackRate = 0xEE0;
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0xEE4;
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0xEE8;
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0xEEC;
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0xEF0;
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0xF08;
                constexpr std::ptrdiff_t m_bUseCanOverrideNextOwnerTouchTime = 0xF09;
                constexpr std::ptrdiff_t m_nextOwnerTouchTime = 0xF0C;
                constexpr std::ptrdiff_t m_nextPrevOwnerTouchTime = 0xF10;
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0xF18;
                constexpr std::ptrdiff_t m_hPrevOwner = 0xF1C;
                constexpr std::ptrdiff_t m_nDropTick = 0xF20;
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0xF24;
                constexpr std::ptrdiff_t m_donated = 0xF44;
                constexpr std::ptrdiff_t m_fLastShotTime = 0xF48;
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0xF4C;
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0xF4D;
                constexpr std::ptrdiff_t m_numRemoveUnownedWeaponThink = 0xF50;
                constexpr std::ptrdiff_t m_IronSightController = 0xF58;
                constexpr std::ptrdiff_t m_iIronSightMode = 0xF70;
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0xF74;
                constexpr std::ptrdiff_t m_flWatTickOffset = 0xF78;
                constexpr std::ptrdiff_t m_flLastShakeTime = 0xF88;
            }
            namespace CPointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0x890;
                constexpr std::ptrdiff_t m_bStartEnabled = 0x894;
            }
            namespace CLogicLineToEntity {
                constexpr std::ptrdiff_t m_Line = 0x4A8;
                constexpr std::ptrdiff_t m_SourceName = 0x4D0;
                constexpr std::ptrdiff_t m_StartEntity = 0x4D8;
                constexpr std::ptrdiff_t m_EndEntity = 0x4DC;
            }
            namespace CSoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x4C8;
            }
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x1F8;
                constexpr std::ptrdiff_t m_bIsRescuing = 0x224;
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x228;
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0x298;
            }
            namespace CPhysicalButton {
            }
            namespace CInfoSpawnGroupLoadUnload {
                constexpr std::ptrdiff_t m_OnSpawnGroupLoadStarted = 0x4A8;
                constexpr std::ptrdiff_t m_OnSpawnGroupLoadFinished = 0x4C0;
                constexpr std::ptrdiff_t m_OnSpawnGroupUnloadStarted = 0x4D8;
                constexpr std::ptrdiff_t m_OnSpawnGroupUnloadFinished = 0x4F0;
                constexpr std::ptrdiff_t m_iszSpawnGroupName = 0x508;
                constexpr std::ptrdiff_t m_iszSpawnGroupFilterName = 0x510;
                constexpr std::ptrdiff_t m_iszLandmarkName = 0x518;
                constexpr std::ptrdiff_t m_sFixedSpawnGroupName = 0x520;
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x528;
                constexpr std::ptrdiff_t m_bAutoActivate = 0x52C;
                constexpr std::ptrdiff_t m_bUnloadingStarted = 0x52D;
                constexpr std::ptrdiff_t m_bQueueActiveSpawnGroupChange = 0x52E;
                constexpr std::ptrdiff_t m_bQueueFinishLoading = 0x52F;
            }
            namespace CSoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x4C8;
                constexpr std::ptrdiff_t m_vMax = 0x4D4;
            }
            namespace CCSObserver_MovementServices {
            }
            namespace CPulseCell_Outflow_ListenForAnimgraphTag {
                constexpr std::ptrdiff_t m_OnStart = 0x48;
                constexpr std::ptrdiff_t m_OnEnd = 0x90;
                constexpr std::ptrdiff_t m_OnCanceled = 0xD8;
                constexpr std::ptrdiff_t m_TagName = 0x120;
            }
            namespace CBodyComponent {
                constexpr std::ptrdiff_t m_pSceneNode = 0x8;
                constexpr std::ptrdiff_t _m_pChainEntity = 0x48;
            }
            namespace CPulseCell_Inflow_Method {
                constexpr std::ptrdiff_t m_MethodName = 0x80;
                constexpr std::ptrdiff_t m_Description = 0x90;
                constexpr std::ptrdiff_t m_bIsPublic = 0x98;
                constexpr std::ptrdiff_t m_ReturnType = 0xA0;
                constexpr std::ptrdiff_t m_Args = 0xB8;
            }
            namespace CDecoyGrenade {
            }
            namespace CEconItemView {
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x38;
                constexpr std::ptrdiff_t m_iEntityQuality = 0x3C;
                constexpr std::ptrdiff_t m_iEntityLevel = 0x40;
                constexpr std::ptrdiff_t m_iItemID = 0x48;
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x50;
                constexpr std::ptrdiff_t m_iItemIDLow = 0x54;
                constexpr std::ptrdiff_t m_iAccountID = 0x58;
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x5C;
                constexpr std::ptrdiff_t m_bInitialized = 0x68;
                constexpr std::ptrdiff_t m_AttributeList = 0x70;
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0xE8;
                constexpr std::ptrdiff_t m_szCustomName = 0x160;
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x201;
            }
            namespace CIncendiaryGrenade {
            }
            namespace CBaseDMStart {
                constexpr std::ptrdiff_t m_Master = 0x4A8;
            }
            namespace CBaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0x4A8;
                constexpr std::ptrdiff_t m_CHitboxComponent = 0x4B0;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0 = 0x4C8;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1 = 0x4CC;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2 = 0x4D0;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3 = 0x4D4;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4 = 0x4D8;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0x4DC;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0x4E0;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0x4E4;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0x4E8;
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0x4EC;
                constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0x4F0;
                constexpr std::ptrdiff_t m_flDissolveStartTime = 0x4F8;
                constexpr std::ptrdiff_t m_OnIgnite = 0x500;
                constexpr std::ptrdiff_t m_nRenderMode = 0x518;
                constexpr std::ptrdiff_t m_nRenderFX = 0x519;
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0x51A;
                constexpr std::ptrdiff_t m_clrRender = 0x538;
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0x540;
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0x5A8;
                constexpr std::ptrdiff_t m_bNoInterpolate = 0x5A9;
                constexpr std::ptrdiff_t m_Collision = 0x5B0;
                constexpr std::ptrdiff_t m_Glow = 0x660;
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0x6B8;
                constexpr std::ptrdiff_t m_fadeMinDist = 0x6BC;
                constexpr std::ptrdiff_t m_fadeMaxDist = 0x6C0;
                constexpr std::ptrdiff_t m_flFadeScale = 0x6C4;
                constexpr std::ptrdiff_t m_flShadowStrength = 0x6C8;
                constexpr std::ptrdiff_t m_nObjectCulling = 0x6CC;
                constexpr std::ptrdiff_t m_vecViewOffset = 0x6F8;
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x728;
            }
            namespace fogplayerparams_t {
                constexpr std::ptrdiff_t m_hCtrl = 0x8;
                constexpr std::ptrdiff_t m_flTransitionTime = 0xC;
                constexpr std::ptrdiff_t m_OldColor = 0x10;
                constexpr std::ptrdiff_t m_flOldStart = 0x14;
                constexpr std::ptrdiff_t m_flOldEnd = 0x18;
                constexpr std::ptrdiff_t m_flOldMaxDensity = 0x1C;
                constexpr std::ptrdiff_t m_flOldHDRColorScale = 0x20;
                constexpr std::ptrdiff_t m_flOldFarZ = 0x24;
                constexpr std::ptrdiff_t m_NewColor = 0x28;
                constexpr std::ptrdiff_t m_flNewStart = 0x2C;
                constexpr std::ptrdiff_t m_flNewEnd = 0x30;
                constexpr std::ptrdiff_t m_flNewMaxDensity = 0x34;
                constexpr std::ptrdiff_t m_flNewHDRColorScale = 0x38;
                constexpr std::ptrdiff_t m_flNewFarZ = 0x3C;
            }
            namespace CGlowProperty {
                constexpr std::ptrdiff_t m_fGlowColor = 0x8;
                constexpr std::ptrdiff_t m_iGlowType = 0x30;
                constexpr std::ptrdiff_t m_iGlowTeam = 0x34;
                constexpr std::ptrdiff_t m_nGlowRange = 0x38;
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0x3C;
                constexpr std::ptrdiff_t m_glowColorOverride = 0x40;
                constexpr std::ptrdiff_t m_bFlashing = 0x44;
                constexpr std::ptrdiff_t m_flGlowTime = 0x48;
                constexpr std::ptrdiff_t m_flGlowStartTime = 0x4C;
                constexpr std::ptrdiff_t m_bEligibleForScreenHighlight = 0x50;
                constexpr std::ptrdiff_t m_bGlowing = 0x51;
            }
            namespace CInstancedSceneEntity {
                constexpr std::ptrdiff_t m_hOwner = 0x730;
                constexpr std::ptrdiff_t m_bHadOwner = 0x734;
                constexpr std::ptrdiff_t m_flPostSpeakDelay = 0x738;
                constexpr std::ptrdiff_t m_flPreDelay = 0x73C;
                constexpr std::ptrdiff_t m_bIsBackground = 0x740;
                constexpr std::ptrdiff_t m_bRemoveOnCompletion = 0x741;
                constexpr std::ptrdiff_t m_hTarget = 0x744;
            }
            namespace CPulseCell_BaseValue {
            }
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x4A8;
                constexpr std::ptrdiff_t m_iszOperatorName = 0x4B0;
                constexpr std::ptrdiff_t m_iszOpvarName = 0x4B8;
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x4C0;
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x4CC;
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x4D8;
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x4E4;
                constexpr std::ptrdiff_t m_nAABBDirection = 0x4F0;
            }
            namespace CSoundEventParameter {
                constexpr std::ptrdiff_t m_iszParamName = 0x4C0;
                constexpr std::ptrdiff_t m_flFloatValue = 0x4C8;
            }
            namespace CPlayer_WaterServices {
            }
            namespace CPulseCell_BooleanSwitchState {
                constexpr std::ptrdiff_t m_Condition = 0x48;
                constexpr std::ptrdiff_t m_SubGraph = 0xC0;
                constexpr std::ptrdiff_t m_WhenTrue = 0x108;
                constexpr std::ptrdiff_t m_WhenFalse = 0x150;
            }
            namespace CRotButton {
            }
            namespace CEnvViewPunch {
                constexpr std::ptrdiff_t m_flRadius = 0x4A8;
                constexpr std::ptrdiff_t m_angViewPunch = 0x4AC;
            }
            namespace VPhysicsCollisionAttribute_t {
                constexpr std::ptrdiff_t m_nInteractsAs = 0x8;
                constexpr std::ptrdiff_t m_nInteractsWith = 0x10;
                constexpr std::ptrdiff_t m_nInteractsExclude = 0x18;
                constexpr std::ptrdiff_t m_nEntityId = 0x20;
                constexpr std::ptrdiff_t m_nOwnerId = 0x24;
                constexpr std::ptrdiff_t m_nHierarchyId = 0x28;
                constexpr std::ptrdiff_t m_nDetailLayerMask = 0x2A;
                constexpr std::ptrdiff_t m_nDetailLayerMaskType = 0x2C;
                constexpr std::ptrdiff_t m_nTargetDetailLayer = 0x2D;
                constexpr std::ptrdiff_t m_nCollisionGroup = 0x2E;
                constexpr std::ptrdiff_t m_nCollisionFunctionMask = 0x2F;
            }
            namespace CItemKevlar {
            }
            namespace CFuncShatterglass {
                constexpr std::ptrdiff_t m_matPanelTransform = 0x730;
                constexpr std::ptrdiff_t m_matPanelTransformWsTemp = 0x760;
                constexpr std::ptrdiff_t m_vecShatterGlassShards = 0x790;
                constexpr std::ptrdiff_t m_PanelSize = 0x7A8;
                constexpr std::ptrdiff_t m_flLastShatterSoundEmitTime = 0x7B0;
                constexpr std::ptrdiff_t m_flLastCleanupTime = 0x7B4;
                constexpr std::ptrdiff_t m_flInitAtTime = 0x7B8;
                constexpr std::ptrdiff_t m_flGlassThickness = 0x7BC;
                constexpr std::ptrdiff_t m_flSpawnInvulnerability = 0x7C0;
                constexpr std::ptrdiff_t m_bBreakSilent = 0x7C4;
                constexpr std::ptrdiff_t m_bBreakShardless = 0x7C5;
                constexpr std::ptrdiff_t m_bBroken = 0x7C6;
                constexpr std::ptrdiff_t m_bGlassNavIgnore = 0x7C7;
                constexpr std::ptrdiff_t m_bGlassInFrame = 0x7C8;
                constexpr std::ptrdiff_t m_bStartBroken = 0x7C9;
                constexpr std::ptrdiff_t m_iInitialDamageType = 0x7CA;
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName01 = 0x7D0;
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName02 = 0x7D8;
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName03 = 0x7E0;
                constexpr std::ptrdiff_t m_szDamagePositioningEntityName04 = 0x7E8;
                constexpr std::ptrdiff_t m_vInitialDamagePositions = 0x7F0;
                constexpr std::ptrdiff_t m_vExtraDamagePositions = 0x808;
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x820;
                constexpr std::ptrdiff_t m_OnBroken = 0x838;
                constexpr std::ptrdiff_t m_iSurfaceType = 0x850;
                constexpr std::ptrdiff_t m_hMaterialDamageBase = 0x858;
            }
            namespace CNavWalkable {
            }
            namespace CPlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0xA28;
                constexpr std::ptrdiff_t m_flC4Blow = 0xA2C;
                constexpr std::ptrdiff_t m_nBombSite = 0xA30;
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0xA34;
                constexpr std::ptrdiff_t m_bAbortDetonationBecauseWorldIsFrozen = 0xA38;
                constexpr std::ptrdiff_t m_AttributeManager = 0xA40;
                constexpr std::ptrdiff_t m_OnBombDefused = 0xD38;
                constexpr std::ptrdiff_t m_OnBombBeginDefuse = 0xD50;
                constexpr std::ptrdiff_t m_OnBombDefuseAborted = 0xD68;
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0xD80;
                constexpr std::ptrdiff_t m_entitySpottedState = 0xD88;
                constexpr std::ptrdiff_t m_nSpotRules = 0xDA0;
                constexpr std::ptrdiff_t m_bHasExploded = 0xDA4;
                constexpr std::ptrdiff_t m_bBombDefused = 0xDA5;
                constexpr std::ptrdiff_t m_bTrainingPlacedByPlayer = 0xDA6;
                constexpr std::ptrdiff_t m_flTimerLength = 0xDA8;
                constexpr std::ptrdiff_t m_bBeingDefused = 0xDAC;
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0xDB4;
                constexpr std::ptrdiff_t m_flDefuseLength = 0xDBC;
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0xDC0;
                constexpr std::ptrdiff_t m_hBombDefuser = 0xDC4;
                constexpr std::ptrdiff_t m_iProgressBarTime = 0xDC8;
                constexpr std::ptrdiff_t m_bVoiceAlertFired = 0xDCC;
                constexpr std::ptrdiff_t m_bVoiceAlertPlayed = 0xDCD;
                constexpr std::ptrdiff_t m_flNextBotBeepTime = 0xDD4;
                constexpr std::ptrdiff_t m_angCatchUpToPlayerEye = 0xDDC;
                constexpr std::ptrdiff_t m_flLastSpinDetectionTime = 0xDE8;
            }
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            namespace CVoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x4A8;
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x4AC;
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x4B0;
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x4C4;
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x4C8;
                constexpr std::ptrdiff_t m_acceptingVotesTimer = 0x4D0;
                constexpr std::ptrdiff_t m_executeCommandTimer = 0x4E8;
                constexpr std::ptrdiff_t m_resetVoteTimer = 0x500;
                constexpr std::ptrdiff_t m_nVotesCast = 0x518;
                constexpr std::ptrdiff_t m_playerHoldingVote = 0x618;
                constexpr std::ptrdiff_t m_playerOverrideForVote = 0x61C;
                constexpr std::ptrdiff_t m_nHighestCountIndex = 0x620;
                constexpr std::ptrdiff_t m_potentialIssues = 0x628;
                constexpr std::ptrdiff_t m_VoteOptions = 0x640;
            }
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0x48;
            }
            namespace CPulseMathlib {
            }
            namespace CPhysImpact {
                constexpr std::ptrdiff_t m_damage = 0x4A8;
                constexpr std::ptrdiff_t m_distance = 0x4AC;
                constexpr std::ptrdiff_t m_directionEntityName = 0x4B0;
            }
            namespace CBaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x38;
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x40;
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x250;
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x268;
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x26C;
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x270;
                constexpr std::ptrdiff_t m_isSteadyState = 0x280;
                constexpr std::ptrdiff_t m_lastNetworkChange = 0x288;
                constexpr std::ptrdiff_t m_ResponseContexts = 0x298;
                constexpr std::ptrdiff_t m_iszResponseContext = 0x2B0;
                constexpr std::ptrdiff_t m_iHealth = 0x2D8;
                constexpr std::ptrdiff_t m_iMaxHealth = 0x2DC;
                constexpr std::ptrdiff_t m_lifeState = 0x2E0;
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x2E4;
                constexpr std::ptrdiff_t m_bTakesDamage = 0x2E8;
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x2F0;
                constexpr std::ptrdiff_t m_nPlatformType = 0x2F8;
                constexpr std::ptrdiff_t m_MoveCollide = 0x2FA;
                constexpr std::ptrdiff_t m_MoveType = 0x2FB;
                constexpr std::ptrdiff_t m_nActualMoveType = 0x2FC;
                constexpr std::ptrdiff_t m_nWaterTouch = 0x2FD;
                constexpr std::ptrdiff_t m_nSlimeTouch = 0x2FE;
                constexpr std::ptrdiff_t m_bRestoreInHierarchy = 0x2FF;
                constexpr std::ptrdiff_t m_target = 0x300;
                constexpr std::ptrdiff_t m_hDamageFilter = 0x308;
                constexpr std::ptrdiff_t m_iszDamageFilterName = 0x310;
                constexpr std::ptrdiff_t m_flMoveDoneTime = 0x318;
                constexpr std::ptrdiff_t m_nSubclassID = 0x31C;
                constexpr std::ptrdiff_t m_flAnimTime = 0x328;
                constexpr std::ptrdiff_t m_flSimulationTime = 0x32C;
                constexpr std::ptrdiff_t m_flCreateTime = 0x330;
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x334;
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x335;
                constexpr std::ptrdiff_t m_vPrevVPhysicsUpdatePos = 0x338;
                constexpr std::ptrdiff_t m_iTeamNum = 0x344;
                constexpr std::ptrdiff_t m_iGlobalname = 0x348;
                constexpr std::ptrdiff_t m_iSentToClients = 0x350;
                constexpr std::ptrdiff_t m_flSpeed = 0x354;
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x358;
                constexpr std::ptrdiff_t m_spawnflags = 0x360;
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x364;
                constexpr std::ptrdiff_t m_nSimulationTick = 0x368;
                constexpr std::ptrdiff_t m_OnKilled = 0x370;
                constexpr std::ptrdiff_t m_fFlags = 0x388;
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x38C;
                constexpr std::ptrdiff_t m_vecVelocity = 0x398;
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x3C8;
                constexpr std::ptrdiff_t m_nPushEnumCount = 0x3D4;
                constexpr std::ptrdiff_t m_pCollision = 0x3D8;
                constexpr std::ptrdiff_t m_hEffectEntity = 0x3E0;
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x3E4;
                constexpr std::ptrdiff_t m_fEffects = 0x3E8;
                constexpr std::ptrdiff_t m_hGroundEntity = 0x3EC;
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x3F0;
                constexpr std::ptrdiff_t m_flFriction = 0x3F4;
                constexpr std::ptrdiff_t m_flElasticity = 0x3F8;
                constexpr std::ptrdiff_t m_flGravityScale = 0x3FC;
                constexpr std::ptrdiff_t m_flTimeScale = 0x400;
                constexpr std::ptrdiff_t m_flWaterLevel = 0x404;
                constexpr std::ptrdiff_t m_bGravityDisabled = 0x408;
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x409;
                constexpr std::ptrdiff_t m_flActualGravityScale = 0x40C;
                constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x410;
                constexpr std::ptrdiff_t m_bDisableLowViolence = 0x411;
                constexpr std::ptrdiff_t m_nWaterType = 0x412;
                constexpr std::ptrdiff_t m_iEFlags = 0x414;
                constexpr std::ptrdiff_t m_OnUser1 = 0x418;
                constexpr std::ptrdiff_t m_OnUser2 = 0x430;
                constexpr std::ptrdiff_t m_OnUser3 = 0x448;
                constexpr std::ptrdiff_t m_OnUser4 = 0x460;
                constexpr std::ptrdiff_t m_iInitialTeamNum = 0x478;
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x47C;
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x480;
                constexpr std::ptrdiff_t m_bNetworkQuantizeOriginAndAngles = 0x48C;
                constexpr std::ptrdiff_t m_bLagCompensate = 0x48D;
                constexpr std::ptrdiff_t m_pBlocker = 0x490;
                constexpr std::ptrdiff_t m_flLocalTime = 0x494;
                constexpr std::ptrdiff_t m_flVPhysicsUpdateLocalTime = 0x498;
                constexpr std::ptrdiff_t m_nBloodType = 0x49C;
                constexpr std::ptrdiff_t m_pPulseGraphInstance = 0x4A0;
            }
            namespace CPlayer_UseServices {
            }
            namespace CGameSceneNodeHandle {
                constexpr std::ptrdiff_t m_hOwner = 0x8;
                constexpr std::ptrdiff_t m_name = 0xC;
            }
            namespace CMarkupVolumeWithRef {
                constexpr std::ptrdiff_t m_bUseRef = 0x778;
                constexpr std::ptrdiff_t m_vRefPosEntitySpace = 0x77C;
                constexpr std::ptrdiff_t m_vRefPosWorldSpace = 0x788;
                constexpr std::ptrdiff_t m_flRefDot = 0x794;
            }
            namespace CCSGO_TeamSelectCharacterPosition {
            }
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48;
            }
            namespace CFuncPlatRot {
                constexpr std::ptrdiff_t m_end = 0x7E0;
                constexpr std::ptrdiff_t m_start = 0x7EC;
            }
            namespace CRagdollMagnet {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_radius = 0x4AC;
                constexpr std::ptrdiff_t m_force = 0x4B0;
                constexpr std::ptrdiff_t m_axis = 0x4B4;
            }
            namespace CInfoInstructorHintTarget {
            }
            namespace CSpriteAlias_env_glow {
            }
            namespace CFireCrackerBlast {
            }
            namespace CSpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0x730;
                constexpr std::ptrdiff_t m_Radius = 0x734;
                constexpr std::ptrdiff_t m_vSpotlightDir = 0x738;
                constexpr std::ptrdiff_t m_vSpotlightOrg = 0x744;
            }
            namespace CEnvSky {
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x730;
                constexpr std::ptrdiff_t m_hSkyMaterialLightingOnly = 0x738;
                constexpr std::ptrdiff_t m_bStartDisabled = 0x740;
                constexpr std::ptrdiff_t m_vTintColor = 0x741;
                constexpr std::ptrdiff_t m_vTintColorLightingOnly = 0x745;
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x74C;
                constexpr std::ptrdiff_t m_nFogType = 0x750;
                constexpr std::ptrdiff_t m_flFogMinStart = 0x754;
                constexpr std::ptrdiff_t m_flFogMinEnd = 0x758;
                constexpr std::ptrdiff_t m_flFogMaxStart = 0x75C;
                constexpr std::ptrdiff_t m_flFogMaxEnd = 0x760;
                constexpr std::ptrdiff_t m_bEnabled = 0x764;
            }
            namespace CInfoSpawnGroupLandmark {
            }
            namespace CPointAngleSensor {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_nLookAtName = 0x4B0;
                constexpr std::ptrdiff_t m_hTargetEntity = 0x4B8;
                constexpr std::ptrdiff_t m_hLookAtEntity = 0x4BC;
                constexpr std::ptrdiff_t m_flDuration = 0x4C0;
                constexpr std::ptrdiff_t m_flDotTolerance = 0x4C4;
                constexpr std::ptrdiff_t m_flFacingTime = 0x4C8;
                constexpr std::ptrdiff_t m_bFired = 0x4CC;
                constexpr std::ptrdiff_t m_OnFacingLookat = 0x4D0;
                constexpr std::ptrdiff_t m_OnNotFacingLookat = 0x4E8;
                constexpr std::ptrdiff_t m_TargetDir = 0x500;
                constexpr std::ptrdiff_t m_FacingPercentage = 0x528;
            }
            namespace CEnvWindController {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x4A8;
                constexpr std::ptrdiff_t m_fDirectionVariation = 0x5D8;
                constexpr std::ptrdiff_t m_fSpeedVariation = 0x5DC;
                constexpr std::ptrdiff_t m_fTurbulence = 0x5E0;
                constexpr std::ptrdiff_t m_fVolumeHalfExtentXY = 0x5E4;
                constexpr std::ptrdiff_t m_fVolumeHalfExtentZ = 0x5E8;
                constexpr std::ptrdiff_t m_nVolumeResolutionXY = 0x5EC;
                constexpr std::ptrdiff_t m_nVolumeResolutionZ = 0x5F0;
                constexpr std::ptrdiff_t m_nClipmapLevels = 0x5F4;
                constexpr std::ptrdiff_t m_bIsMaster = 0x5F8;
                constexpr std::ptrdiff_t m_bFirstTime = 0x5F9;
            }
            namespace CSPerRoundStats_t {
                constexpr std::ptrdiff_t m_iKills = 0x30;
                constexpr std::ptrdiff_t m_iDeaths = 0x34;
                constexpr std::ptrdiff_t m_iAssists = 0x38;
                constexpr std::ptrdiff_t m_iDamage = 0x3C;
                constexpr std::ptrdiff_t m_iEquipmentValue = 0x40;
                constexpr std::ptrdiff_t m_iMoneySaved = 0x44;
                constexpr std::ptrdiff_t m_iKillReward = 0x48;
                constexpr std::ptrdiff_t m_iLiveTime = 0x4C;
                constexpr std::ptrdiff_t m_iHeadShotKills = 0x50;
                constexpr std::ptrdiff_t m_iObjective = 0x54;
                constexpr std::ptrdiff_t m_iCashEarned = 0x58;
                constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C;
                constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60;
            }
            namespace CGenericConstraint {
                constexpr std::ptrdiff_t m_nLinearMotionX = 0x510;
                constexpr std::ptrdiff_t m_nLinearMotionY = 0x514;
                constexpr std::ptrdiff_t m_nLinearMotionZ = 0x518;
                constexpr std::ptrdiff_t m_flLinearFrequencyX = 0x51C;
                constexpr std::ptrdiff_t m_flLinearFrequencyY = 0x520;
                constexpr std::ptrdiff_t m_flLinearFrequencyZ = 0x524;
                constexpr std::ptrdiff_t m_flLinearDampingRatioX = 0x528;
                constexpr std::ptrdiff_t m_flLinearDampingRatioY = 0x52C;
                constexpr std::ptrdiff_t m_flLinearDampingRatioZ = 0x530;
                constexpr std::ptrdiff_t m_flMaxLinearImpulseX = 0x534;
                constexpr std::ptrdiff_t m_flMaxLinearImpulseY = 0x538;
                constexpr std::ptrdiff_t m_flMaxLinearImpulseZ = 0x53C;
                constexpr std::ptrdiff_t m_flBreakAfterTimeX = 0x540;
                constexpr std::ptrdiff_t m_flBreakAfterTimeY = 0x544;
                constexpr std::ptrdiff_t m_flBreakAfterTimeZ = 0x548;
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeX = 0x54C;
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeY = 0x550;
                constexpr std::ptrdiff_t m_flBreakAfterTimeStartTimeZ = 0x554;
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdX = 0x558;
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdY = 0x55C;
                constexpr std::ptrdiff_t m_flBreakAfterTimeThresholdZ = 0x560;
                constexpr std::ptrdiff_t m_flNotifyForceX = 0x564;
                constexpr std::ptrdiff_t m_flNotifyForceY = 0x568;
                constexpr std::ptrdiff_t m_flNotifyForceZ = 0x56C;
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeX = 0x570;
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeY = 0x574;
                constexpr std::ptrdiff_t m_flNotifyForceMinTimeZ = 0x578;
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeX = 0x57C;
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeY = 0x580;
                constexpr std::ptrdiff_t m_flNotifyForceLastTimeZ = 0x584;
                constexpr std::ptrdiff_t m_bAxisNotifiedX = 0x588;
                constexpr std::ptrdiff_t m_bAxisNotifiedY = 0x589;
                constexpr std::ptrdiff_t m_bAxisNotifiedZ = 0x58A;
                constexpr std::ptrdiff_t m_nAngularMotionX = 0x58C;
                constexpr std::ptrdiff_t m_nAngularMotionY = 0x590;
                constexpr std::ptrdiff_t m_nAngularMotionZ = 0x594;
                constexpr std::ptrdiff_t m_flAngularFrequencyX = 0x598;
                constexpr std::ptrdiff_t m_flAngularFrequencyY = 0x59C;
                constexpr std::ptrdiff_t m_flAngularFrequencyZ = 0x5A0;
                constexpr std::ptrdiff_t m_flAngularDampingRatioX = 0x5A4;
                constexpr std::ptrdiff_t m_flAngularDampingRatioY = 0x5A8;
                constexpr std::ptrdiff_t m_flAngularDampingRatioZ = 0x5AC;
                constexpr std::ptrdiff_t m_flMaxAngularImpulseX = 0x5B0;
                constexpr std::ptrdiff_t m_flMaxAngularImpulseY = 0x5B4;
                constexpr std::ptrdiff_t m_flMaxAngularImpulseZ = 0x5B8;
                constexpr std::ptrdiff_t m_NotifyForceReachedX = 0x5C0;
                constexpr std::ptrdiff_t m_NotifyForceReachedY = 0x5D8;
                constexpr std::ptrdiff_t m_NotifyForceReachedZ = 0x5F0;
            }
            namespace CPulseCell_Outflow_CycleRandom {
                constexpr std::ptrdiff_t m_Outputs = 0x48;
            }
            namespace CPulseCell_Step_PublicOutput {
                constexpr std::ptrdiff_t m_OutputIndex = 0x48;
            }
            namespace CEnvLaser {
                constexpr std::ptrdiff_t m_iszLaserTarget = 0x7D0;
                constexpr std::ptrdiff_t m_pSprite = 0x7D8;
                constexpr std::ptrdiff_t m_iszSpriteName = 0x7E0;
                constexpr std::ptrdiff_t m_firePosition = 0x7E8;
                constexpr std::ptrdiff_t m_flStartFrame = 0x7F4;
            }
            namespace CSoundOpvarSetEntity {
                constexpr std::ptrdiff_t m_iszStackName = 0x4C0;
                constexpr std::ptrdiff_t m_iszOperatorName = 0x4C8;
                constexpr std::ptrdiff_t m_iszOpvarName = 0x4D0;
                constexpr std::ptrdiff_t m_nOpvarType = 0x4D8;
                constexpr std::ptrdiff_t m_nOpvarIndex = 0x4DC;
                constexpr std::ptrdiff_t m_flOpvarValue = 0x4E0;
                constexpr std::ptrdiff_t m_OpvarValueString = 0x4E8;
                constexpr std::ptrdiff_t m_bSetOnSpawn = 0x4F0;
            }
            namespace CEnvBeverage {
                constexpr std::ptrdiff_t m_CanInDispenser = 0x4A8;
                constexpr std::ptrdiff_t m_nBeverageType = 0x4AC;
            }
            namespace CPhysMotor {
                constexpr std::ptrdiff_t m_nameAttach = 0x4A8;
                constexpr std::ptrdiff_t m_nameAnchor = 0x4B0;
                constexpr std::ptrdiff_t m_hAttachedObject = 0x4B8;
                constexpr std::ptrdiff_t m_hAnchorObject = 0x4BC;
                constexpr std::ptrdiff_t m_spinUp = 0x4C0;
                constexpr std::ptrdiff_t m_spinDown = 0x4C4;
                constexpr std::ptrdiff_t m_flMotorFriction = 0x4C8;
                constexpr std::ptrdiff_t m_additionalAcceleration = 0x4CC;
                constexpr std::ptrdiff_t m_angularAcceleration = 0x4D0;
                constexpr std::ptrdiff_t m_flTorqueScale = 0x4D4;
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x4D8;
                constexpr std::ptrdiff_t m_flSpeedWhenSpinUpOrSpinDownStarted = 0x4DC;
                constexpr std::ptrdiff_t m_motor = 0x4F0;
            }
            namespace CLogicGameEvent {
                constexpr std::ptrdiff_t m_iszEventName = 0x4A8;
            }
            namespace CPhysicsPropMultiplayer {
            }
            namespace CPhysExplosion {
                constexpr std::ptrdiff_t m_bExplodeOnSpawn = 0x4A8;
                constexpr std::ptrdiff_t m_flMagnitude = 0x4AC;
                constexpr std::ptrdiff_t m_flDamage = 0x4B0;
                constexpr std::ptrdiff_t m_radius = 0x4B4;
                constexpr std::ptrdiff_t m_targetEntityName = 0x4B8;
                constexpr std::ptrdiff_t m_flInnerRadius = 0x4C0;
                constexpr std::ptrdiff_t m_flPushScale = 0x4C4;
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x4C8;
                constexpr std::ptrdiff_t m_bAffectInvulnerableEnts = 0x4C9;
                constexpr std::ptrdiff_t m_OnPushedPlayer = 0x4D0;
            }
            namespace CSplineConstraint {
                constexpr std::ptrdiff_t m_vAnchorOffsetRestore = 0x558;
                constexpr std::ptrdiff_t m_hSplineEntity = 0x564;
                constexpr std::ptrdiff_t m_bEnableLateralConstraint = 0x570;
                constexpr std::ptrdiff_t m_bEnableVerticalConstraint = 0x571;
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x572;
                constexpr std::ptrdiff_t m_bEnableLimit = 0x573;
                constexpr std::ptrdiff_t m_bFireEventsOnPath = 0x574;
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x578;
                constexpr std::ptrdiff_t m_flLinarDampingRatio = 0x57C;
                constexpr std::ptrdiff_t m_flJointFriction = 0x580;
                constexpr std::ptrdiff_t m_flTransitionTime = 0x584;
                constexpr std::ptrdiff_t m_vPreSolveAnchorPos = 0x598;
                constexpr std::ptrdiff_t m_StartTransitionTime = 0x5A4;
                constexpr std::ptrdiff_t m_vTangentSpaceAnchorAtTransitionStart = 0x5A8;
            }
            namespace CLogicCompare {
                constexpr std::ptrdiff_t m_flInValue = 0x4A8;
                constexpr std::ptrdiff_t m_flCompareValue = 0x4AC;
                constexpr std::ptrdiff_t m_OnLessThan = 0x4B0;
                constexpr std::ptrdiff_t m_OnEqualTo = 0x4D0;
                constexpr std::ptrdiff_t m_OnNotEqualTo = 0x4F0;
                constexpr std::ptrdiff_t m_OnGreaterThan = 0x510;
            }
            namespace CCSGameModeRules_Noop {
            }
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0;
                constexpr std::ptrdiff_t m_BlackboardResource = 0x8;
                constexpr std::ptrdiff_t m_nNodeID = 0x18;
                constexpr std::ptrdiff_t m_NodeName = 0x20;
            }
            namespace CFuncTankTrain {
                constexpr std::ptrdiff_t m_OnDeath = 0x858;
            }
            namespace CPointClientUIWorldPanel {
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x890;
                constexpr std::ptrdiff_t m_bLit = 0x891;
                constexpr std::ptrdiff_t m_bFollowPlayerAcrossTeleport = 0x892;
                constexpr std::ptrdiff_t m_flWidth = 0x894;
                constexpr std::ptrdiff_t m_flHeight = 0x898;
                constexpr std::ptrdiff_t m_flDPI = 0x89C;
                constexpr std::ptrdiff_t m_flInteractDistance = 0x8A0;
                constexpr std::ptrdiff_t m_flDepthOffset = 0x8A4;
                constexpr std::ptrdiff_t m_unOwnerContext = 0x8A8;
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x8AC;
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x8B0;
                constexpr std::ptrdiff_t m_unOrientation = 0x8B4;
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x8B8;
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x8C0;
                constexpr std::ptrdiff_t m_bOpaque = 0x8D8;
                constexpr std::ptrdiff_t m_bNoDepth = 0x8D9;
                constexpr std::ptrdiff_t m_bVisibleWhenParentNoDraw = 0x8DA;
                constexpr std::ptrdiff_t m_bRenderBackface = 0x8DB;
                constexpr std::ptrdiff_t m_bUseOffScreenIndicator = 0x8DC;
                constexpr std::ptrdiff_t m_bExcludeFromSaveGames = 0x8DD;
                constexpr std::ptrdiff_t m_bGrabbable = 0x8DE;
                constexpr std::ptrdiff_t m_bOnlyRenderToTexture = 0x8DF;
                constexpr std::ptrdiff_t m_bDisableMipGen = 0x8E0;
                constexpr std::ptrdiff_t m_nExplicitImageLayout = 0x8E4;
            }
            namespace CSoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x558;
            }
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_bReceivesMoneyNextRound = 0x40;
                constexpr std::ptrdiff_t m_iMoneyEarnedForNextRound = 0x44;
                constexpr std::ptrdiff_t m_iAccount = 0x48;
                constexpr std::ptrdiff_t m_iStartAccount = 0x4C;
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x50;
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x54;
            }
            namespace CRuleBrushEntity {
            }
            namespace CMapVetoPickController {
                constexpr std::ptrdiff_t m_bPlayedIntroVcd = 0x4A8;
                constexpr std::ptrdiff_t m_bNeedToPlayFiveSecondsRemaining = 0x4A9;
                constexpr std::ptrdiff_t m_dblPreMatchDraftSequenceTime = 0x4C8;
                constexpr std::ptrdiff_t m_bPreMatchDraftStateChanged = 0x4D0;
                constexpr std::ptrdiff_t m_nDraftType = 0x4D4;
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x4D8;
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x4DC;
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x5DC;
                constexpr std::ptrdiff_t m_nAccountIDs = 0x5F8;
                constexpr std::ptrdiff_t m_nMapId0 = 0x6F8;
                constexpr std::ptrdiff_t m_nMapId1 = 0x7F8;
                constexpr std::ptrdiff_t m_nMapId2 = 0x8F8;
                constexpr std::ptrdiff_t m_nMapId3 = 0x9F8;
                constexpr std::ptrdiff_t m_nMapId4 = 0xAF8;
                constexpr std::ptrdiff_t m_nMapId5 = 0xBF8;
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xCF8;
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xDF8;
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xDFC;
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xE00;
                constexpr std::ptrdiff_t m_OnMapVetoed = 0xE08;
                constexpr std::ptrdiff_t m_OnMapPicked = 0xE28;
                constexpr std::ptrdiff_t m_OnSidesPicked = 0xE48;
                constexpr std::ptrdiff_t m_OnNewPhaseStarted = 0xE68;
                constexpr std::ptrdiff_t m_OnLevelTransition = 0xE88;
            }
            namespace CAnimGraphNetworkedVariables {
                constexpr std::ptrdiff_t m_PredNetBoolVariables = 0x8;
                constexpr std::ptrdiff_t m_PredNetByteVariables = 0x20;
                constexpr std::ptrdiff_t m_PredNetUInt16Variables = 0x38;
                constexpr std::ptrdiff_t m_PredNetIntVariables = 0x50;
                constexpr std::ptrdiff_t m_PredNetUInt32Variables = 0x68;
                constexpr std::ptrdiff_t m_PredNetUInt64Variables = 0x80;
                constexpr std::ptrdiff_t m_PredNetFloatVariables = 0x98;
                constexpr std::ptrdiff_t m_PredNetVectorVariables = 0xB0;
                constexpr std::ptrdiff_t m_PredNetQuaternionVariables = 0xC8;
                constexpr std::ptrdiff_t m_PredNetGlobalSymbolVariables = 0xE0;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetBoolVariables = 0xF8;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetByteVariables = 0x110;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt16Variables = 0x128;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetIntVariables = 0x140;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt32Variables = 0x158;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetUInt64Variables = 0x170;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetFloatVariables = 0x188;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetVectorVariables = 0x1A0;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8;
                constexpr std::ptrdiff_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0;
                constexpr std::ptrdiff_t m_nBoolVariablesCount = 0x1E8;
                constexpr std::ptrdiff_t m_nOwnerOnlyBoolVariablesCount = 0x1EC;
                constexpr std::ptrdiff_t m_nRandomSeedOffset = 0x1F0;
                constexpr std::ptrdiff_t m_flLastTeleportTime = 0x1F4;
            }
            namespace CFuncPropRespawnZone {
            }
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x4E0;
            }
            namespace CWeaponP90 {
            }
            namespace CNavSpaceInfo {
            }
            namespace CPhysSlideConstraint {
                constexpr std::ptrdiff_t m_axisEnd = 0x510;
                constexpr std::ptrdiff_t m_slideFriction = 0x51C;
                constexpr std::ptrdiff_t m_systemLoadScale = 0x520;
                constexpr std::ptrdiff_t m_initialOffset = 0x524;
                constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x528;
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x529;
                constexpr std::ptrdiff_t m_flMotorFrequency = 0x52C;
                constexpr std::ptrdiff_t m_flMotorDampingRatio = 0x530;
                constexpr std::ptrdiff_t m_bUseEntityPivot = 0x534;
                constexpr std::ptrdiff_t m_soundInfo = 0x538;
            }
            namespace CPulseGameBlackboard {
                constexpr std::ptrdiff_t m_strGraphName = 0x4B0;
                constexpr std::ptrdiff_t m_strStateBlob = 0x4B8;
            }
            namespace CSoundEventEntityAlias_snd_event_point {
            }
            namespace CPulseCell_Value_RandomInt {
            }
            namespace CPointGamestatsCounter {
                constexpr std::ptrdiff_t m_strStatisticName = 0x4A8;
                constexpr std::ptrdiff_t m_bDisabled = 0x4B0;
            }
            namespace CTextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0x730;
                constexpr std::ptrdiff_t m_flFPS = 0x734;
                constexpr std::ptrdiff_t m_hPositionKeys = 0x738;
                constexpr std::ptrdiff_t m_hRotationKeys = 0x740;
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x748;
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x754;
                constexpr std::ptrdiff_t m_flStartTime = 0x760;
                constexpr std::ptrdiff_t m_flStartFrame = 0x764;
            }
            namespace CSprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x730;
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0x738;
                constexpr std::ptrdiff_t m_nAttachment = 0x73C;
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0x740;
                constexpr std::ptrdiff_t m_flFrame = 0x744;
                constexpr std::ptrdiff_t m_flDieTime = 0x748;
                constexpr std::ptrdiff_t m_nBrightness = 0x758;
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0x75C;
                constexpr std::ptrdiff_t m_flSpriteScale = 0x760;
                constexpr std::ptrdiff_t m_flScaleDuration = 0x764;
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x768;
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x76C;
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x770;
                constexpr std::ptrdiff_t m_flLastTime = 0x774;
                constexpr std::ptrdiff_t m_flMaxFrame = 0x778;
                constexpr std::ptrdiff_t m_flStartScale = 0x77C;
                constexpr std::ptrdiff_t m_flDestScale = 0x780;
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x784;
                constexpr std::ptrdiff_t m_nStartBrightness = 0x788;
                constexpr std::ptrdiff_t m_nDestBrightness = 0x78C;
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x790;
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x794;
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x798;
            }
            namespace CBaseMoveBehavior {
                constexpr std::ptrdiff_t m_iPositionInterpolator = 0x500;
                constexpr std::ptrdiff_t m_iRotationInterpolator = 0x504;
                constexpr std::ptrdiff_t m_flAnimStartTime = 0x508;
                constexpr std::ptrdiff_t m_flAnimEndTime = 0x50C;
                constexpr std::ptrdiff_t m_flAverageSpeedAcrossFrame = 0x510;
                constexpr std::ptrdiff_t m_pCurrentKeyFrame = 0x518;
                constexpr std::ptrdiff_t m_pTargetKeyFrame = 0x520;
                constexpr std::ptrdiff_t m_pPreKeyFrame = 0x528;
                constexpr std::ptrdiff_t m_pPostKeyFrame = 0x530;
                constexpr std::ptrdiff_t m_flTimeIntoFrame = 0x538;
                constexpr std::ptrdiff_t m_iDirection = 0x53C;
            }
            namespace CDynamicLight {
                constexpr std::ptrdiff_t m_ActualFlags = 0x730;
                constexpr std::ptrdiff_t m_Flags = 0x731;
                constexpr std::ptrdiff_t m_LightStyle = 0x732;
                constexpr std::ptrdiff_t m_On = 0x733;
                constexpr std::ptrdiff_t m_Radius = 0x734;
                constexpr std::ptrdiff_t m_Exponent = 0x738;
                constexpr std::ptrdiff_t m_InnerAngle = 0x73C;
                constexpr std::ptrdiff_t m_OuterAngle = 0x740;
                constexpr std::ptrdiff_t m_SpotRadius = 0x744;
            }
            namespace CWeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x1150;
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x1154;
            }
            namespace CEnvCubemapBox {
            }
            namespace CRotDoor {
                constexpr std::ptrdiff_t m_bSolidBsp = 0x930;
            }
            namespace CPathMover {
                constexpr std::ptrdiff_t m_vecMovers = 0x5F0;
                constexpr std::ptrdiff_t m_hMoverSpawner = 0x608;
                constexpr std::ptrdiff_t m_iszMoverSpawnerName = 0x610;
            }
            namespace CFuncVPhysicsClip {
                constexpr std::ptrdiff_t m_bDisabled = 0x730;
            }
            namespace CPhysFixed {
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x508;
                constexpr std::ptrdiff_t m_flLinearDampingRatio = 0x50C;
                constexpr std::ptrdiff_t m_flAngularFrequency = 0x510;
                constexpr std::ptrdiff_t m_flAngularDampingRatio = 0x514;
                constexpr std::ptrdiff_t m_bEnableLinearConstraint = 0x518;
                constexpr std::ptrdiff_t m_bEnableAngularConstraint = 0x519;
                constexpr std::ptrdiff_t m_sBoneName1 = 0x520;
                constexpr std::ptrdiff_t m_sBoneName2 = 0x528;
            }
            namespace CLogicNavigation {
                constexpr std::ptrdiff_t m_isOn = 0x4B0;
                constexpr std::ptrdiff_t m_navProperty = 0x4B4;
            }
            namespace CPathSimple {
                constexpr std::ptrdiff_t m_CPathQueryComponent = 0x4B0;
                constexpr std::ptrdiff_t m_pathString = 0x5A0;
                constexpr std::ptrdiff_t m_bClosedLoop = 0x5A8;
            }
            namespace CPathParticleRopeAlias_path_particle_rope_clientside {
            }
            namespace CCSPointPulseAPI {
            }
            namespace CEnvWindVolume {
                constexpr std::ptrdiff_t m_bActive = 0x4A8;
                constexpr std::ptrdiff_t m_vBoxMins = 0x4AC;
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x4B8;
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4C4;
                constexpr std::ptrdiff_t m_nShape = 0x4C8;
                constexpr std::ptrdiff_t m_fWindSpeedMultiplier = 0x4CC;
                constexpr std::ptrdiff_t m_fWindTurbulenceMultiplier = 0x4D0;
                constexpr std::ptrdiff_t m_fWindSpeedVariationMultiplier = 0x4D4;
                constexpr std::ptrdiff_t m_fWindDirectionVariationMultiplier = 0x4D8;
            }
            namespace CFuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_EffectName = 0x750;
                constexpr std::ptrdiff_t m_EffectInterpenetrateName = 0x758;
                constexpr std::ptrdiff_t m_EffectZapName = 0x760;
                constexpr std::ptrdiff_t m_iszEffectSource = 0x768;
            }
            namespace CCSMinimapBoundary {
            }
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8;
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC;
            }
            namespace fogparams_t {
                constexpr std::ptrdiff_t dirPrimary = 0x8;
                constexpr std::ptrdiff_t colorPrimary = 0x14;
                constexpr std::ptrdiff_t colorSecondary = 0x18;
                constexpr std::ptrdiff_t colorPrimaryLerpTo = 0x1C;
                constexpr std::ptrdiff_t colorSecondaryLerpTo = 0x20;
                constexpr std::ptrdiff_t start = 0x24;
                constexpr std::ptrdiff_t end = 0x28;
                constexpr std::ptrdiff_t farz = 0x2C;
                constexpr std::ptrdiff_t maxdensity = 0x30;
                constexpr std::ptrdiff_t exponent = 0x34;
                constexpr std::ptrdiff_t HDRColorScale = 0x38;
                constexpr std::ptrdiff_t skyboxFogFactor = 0x3C;
                constexpr std::ptrdiff_t skyboxFogFactorLerpTo = 0x40;
                constexpr std::ptrdiff_t startLerpTo = 0x44;
                constexpr std::ptrdiff_t endLerpTo = 0x48;
                constexpr std::ptrdiff_t maxdensityLerpTo = 0x4C;
                constexpr std::ptrdiff_t lerptime = 0x50;
                constexpr std::ptrdiff_t duration = 0x54;
                constexpr std::ptrdiff_t blendtobackground = 0x58;
                constexpr std::ptrdiff_t scattering = 0x5C;
                constexpr std::ptrdiff_t locallightscale = 0x60;
                constexpr std::ptrdiff_t enable = 0x64;
                constexpr std::ptrdiff_t blend = 0x65;
                constexpr std::ptrdiff_t m_bPadding2 = 0x66;
                constexpr std::ptrdiff_t m_bPadding = 0x67;
            }
            namespace CSoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x558;
                constexpr std::ptrdiff_t m_vMaxs = 0x564;
            }
            namespace CFlashbangProjectile {
                constexpr std::ptrdiff_t m_flTimeToDetonate = 0xBB0;
                constexpr std::ptrdiff_t m_numOpponentsHit = 0xBB4;
                constexpr std::ptrdiff_t m_numTeammatesHit = 0xBB5;
            }
            namespace CTriggerMultiple {
                constexpr std::ptrdiff_t m_OnTrigger = 0x890;
            }
            namespace CPhysBallSocket {
                constexpr std::ptrdiff_t m_flJointFriction = 0x508;
                constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x50C;
                constexpr std::ptrdiff_t m_flSwingLimit = 0x510;
                constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x514;
                constexpr std::ptrdiff_t m_flMinTwistAngle = 0x518;
                constexpr std::ptrdiff_t m_flMaxTwistAngle = 0x51C;
            }
            namespace CDebugHistory {
                constexpr std::ptrdiff_t m_nNpcEvents = 0x3E84E8;
            }
            namespace CSoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x4A8;
                constexpr std::ptrdiff_t m_hSource = 0x4AC;
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4C8;
                constexpr std::ptrdiff_t m_vLastPosition = 0x520;
                constexpr std::ptrdiff_t m_flRefreshTime = 0x52C;
                constexpr std::ptrdiff_t m_iszStackName = 0x530;
                constexpr std::ptrdiff_t m_iszOperatorName = 0x538;
                constexpr std::ptrdiff_t m_iszOpvarName = 0x540;
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x548;
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x54C;
                constexpr std::ptrdiff_t m_bFastRefresh = 0x54D;
            }
            namespace CPathKeyFrame {
                constexpr std::ptrdiff_t m_Origin = 0x4A8;
                constexpr std::ptrdiff_t m_Angles = 0x4B4;
                constexpr std::ptrdiff_t m_qAngle = 0x4C0;
                constexpr std::ptrdiff_t m_iNextKey = 0x4D0;
                constexpr std::ptrdiff_t m_flNextTime = 0x4D8;
                constexpr std::ptrdiff_t m_pNextKey = 0x4E0;
                constexpr std::ptrdiff_t m_pPrevKey = 0x4E8;
                constexpr std::ptrdiff_t m_flMoveSpeed = 0x4F0;
            }
            namespace CWeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x1150;
            }
            namespace CScriptTriggerPush {
                constexpr std::ptrdiff_t m_vExtent = 0x8C8;
            }
            namespace CRevertSaved {
                constexpr std::ptrdiff_t m_loadTime = 0x730;
                constexpr std::ptrdiff_t m_Duration = 0x734;
                constexpr std::ptrdiff_t m_HoldTime = 0x738;
            }
            namespace CTriggerBombReset {
            }
            namespace CTriggerHurt {
                constexpr std::ptrdiff_t m_flOriginalDamage = 0x890;
                constexpr std::ptrdiff_t m_flDamage = 0x894;
                constexpr std::ptrdiff_t m_flDamageCap = 0x898;
                constexpr std::ptrdiff_t m_flLastDmgTime = 0x89C;
                constexpr std::ptrdiff_t m_flForgivenessDelay = 0x8A0;
                constexpr std::ptrdiff_t m_bitsDamageInflict = 0x8A4;
                constexpr std::ptrdiff_t m_damageModel = 0x8A8;
                constexpr std::ptrdiff_t m_bNoDmgForce = 0x8AC;
                constexpr std::ptrdiff_t m_vDamageForce = 0x8B0;
                constexpr std::ptrdiff_t m_thinkAlways = 0x8BC;
                constexpr std::ptrdiff_t m_hurtThinkPeriod = 0x8C0;
                constexpr std::ptrdiff_t m_OnHurt = 0x8C8;
                constexpr std::ptrdiff_t m_OnHurtPlayer = 0x8E0;
                constexpr std::ptrdiff_t m_hurtEntities = 0x8F8;
            }
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xC0;
                constexpr std::ptrdiff_t m_bIsLookingAtWeapon = 0xC4;
                constexpr std::ptrdiff_t m_bIsHoldingLookAtWeapon = 0xC5;
                constexpr std::ptrdiff_t m_hSavedWeapon = 0xC8;
                constexpr std::ptrdiff_t m_nTimeToMelee = 0xCC;
                constexpr std::ptrdiff_t m_nTimeToSecondary = 0xD0;
                constexpr std::ptrdiff_t m_nTimeToPrimary = 0xD4;
                constexpr std::ptrdiff_t m_nTimeToSniperRifle = 0xD8;
                constexpr std::ptrdiff_t m_bIsBeingGivenItem = 0xDC;
                constexpr std::ptrdiff_t m_bIsPickingUpItemWithUse = 0xDD;
                constexpr std::ptrdiff_t m_bPickedUpWeapon = 0xDE;
                constexpr std::ptrdiff_t m_bDisableAutoDeploy = 0xDF;
                constexpr std::ptrdiff_t m_bIsPickingUpGroundWeapon = 0xE0;
                constexpr std::ptrdiff_t m_networkAnimTiming = 0x18B8;
                constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x18D0;
            }
            namespace CRetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0x138;
                constexpr std::ptrdiff_t m_bBlockersPresent = 0x13C;
                constexpr std::ptrdiff_t m_bRoundInProgress = 0x13D;
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x140;
                constexpr std::ptrdiff_t m_iBombSite = 0x144;
                constexpr std::ptrdiff_t m_hBombPlanter = 0x148;
            }
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            namespace CInfoInstructorHintBombTargetA {
            }
            namespace CTeamplayRules {
            }
            namespace CScriptTriggerHurt {
                constexpr std::ptrdiff_t m_vExtent = 0x910;
            }
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            namespace CWeaponMP9 {
            }
            namespace CTriggerDetectExplosion {
                constexpr std::ptrdiff_t m_OnDetectedExplosion = 0x8B8;
            }
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x4E0;
            }
            namespace CSmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xBD8;
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xBDC;
                constexpr std::ptrdiff_t m_nRandomSeed = 0xBE0;
                constexpr std::ptrdiff_t m_vSmokeColor = 0xBE4;
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0xBF0;
                constexpr std::ptrdiff_t m_VoxelFrameData = 0xC00;
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0xC18;
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0xC1C;
                constexpr std::ptrdiff_t m_flLastBounce = 0xC20;
                constexpr std::ptrdiff_t m_fllastSimulationTime = 0xC24;
                constexpr std::ptrdiff_t m_bExplodeFromInferno = 0x2EA8;
                constexpr std::ptrdiff_t m_bDidGroundScorch = 0x2EA9;
            }
            namespace CBlood {
                constexpr std::ptrdiff_t m_vecSprayAngles = 0x4A8;
                constexpr std::ptrdiff_t m_vecSprayDir = 0x4B4;
                constexpr std::ptrdiff_t m_flAmount = 0x4C0;
                constexpr std::ptrdiff_t m_Color = 0x4C4;
            }
            namespace CCSTeam {
                constexpr std::ptrdiff_t m_nLastRecievedShorthandedRoundBonus = 0x560;
                constexpr std::ptrdiff_t m_nShorthandedRoundBonusStartRound = 0x564;
                constexpr std::ptrdiff_t m_bSurrendered = 0x568;
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x569;
                constexpr std::ptrdiff_t m_numMapVictories = 0x76C;
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x770;
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x774;
                constexpr std::ptrdiff_t m_scoreOvertime = 0x778;
                constexpr std::ptrdiff_t m_szClanTeamname = 0x77C;
                constexpr std::ptrdiff_t m_iClanID = 0x800;
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x804;
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x80C;
                constexpr std::ptrdiff_t m_flNextResourceTime = 0x814;
                constexpr std::ptrdiff_t m_iLastUpdateSentAt = 0x818;
            }
            namespace CRulePointEntity {
                constexpr std::ptrdiff_t m_Score = 0x738;
            }
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0;
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x10;
                constexpr std::ptrdiff_t m_RegisterMap = 0x18;
                constexpr std::ptrdiff_t m_CallMethodID = 0x48;
                constexpr std::ptrdiff_t m_nSrcChunk = 0x4C;
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x50;
            }
            namespace CFuncMoveLinearAlias_momentary_door {
            }
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_graphControllerManager = 0x730;
                constexpr std::ptrdiff_t m_pMainGraphController = 0x7E0;
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x7E8;
                constexpr std::ptrdiff_t m_pChoreoServices = 0x7F0;
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x7F8;
                constexpr std::ptrdiff_t m_flMaxSlopeDistance = 0x7FC;
                constexpr std::ptrdiff_t m_vLastSlopeCheckPos = 0x800;
                constexpr std::ptrdiff_t m_nAnimGraphUpdateId = 0x80C;
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x810;
                constexpr std::ptrdiff_t m_vecForce = 0x814;
                constexpr std::ptrdiff_t m_nForceBone = 0x820;
                constexpr std::ptrdiff_t m_RagdollPose = 0x838;
                constexpr std::ptrdiff_t m_bRagdollEnabled = 0x860;
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0x861;
                constexpr std::ptrdiff_t m_xParentedRagdollRootInEntitySpace = 0x870;
            }
            namespace CEnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x4A8;
                constexpr std::ptrdiff_t m_flStartDistance = 0x4AC;
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4B0;
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4B4;
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x4B8;
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x4BC;
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x4C0;
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x4C4;
                constexpr std::ptrdiff_t m_flLODBias = 0x4C8;
                constexpr std::ptrdiff_t m_bActive = 0x4CC;
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4CD;
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4D0;
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x4D4;
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x4D8;
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x4E0;
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x4E8;
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x4F0;
                constexpr std::ptrdiff_t m_bFirstTime = 0x4F1;
            }
            namespace CPulseCell_InlineNodeSkipSelector {
                constexpr std::ptrdiff_t m_nFlowNodeID = 0x48;
                constexpr std::ptrdiff_t m_bAnd = 0x4C;
                constexpr std::ptrdiff_t m_PassOutflow = 0x50;
                constexpr std::ptrdiff_t m_FailOutflow = 0x68;
            }
            namespace CBaseDoor {
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x7C0;
                constexpr std::ptrdiff_t m_vecMoveDirParentSpace = 0x7CC;
                constexpr std::ptrdiff_t m_ls = 0x7D8;
                constexpr std::ptrdiff_t m_bForceClosed = 0x7F8;
                constexpr std::ptrdiff_t m_bDoorGroup = 0x7F9;
                constexpr std::ptrdiff_t m_bLocked = 0x7FA;
                constexpr std::ptrdiff_t m_bIgnoreDebris = 0x7FB;
                constexpr std::ptrdiff_t m_bNoNPCs = 0x7FC;
                constexpr std::ptrdiff_t m_eSpawnPosition = 0x800;
                constexpr std::ptrdiff_t m_flBlockDamage = 0x804;
                constexpr std::ptrdiff_t m_NoiseMoving = 0x808;
                constexpr std::ptrdiff_t m_NoiseArrived = 0x810;
                constexpr std::ptrdiff_t m_NoiseMovingClosed = 0x818;
                constexpr std::ptrdiff_t m_NoiseArrivedClosed = 0x820;
                constexpr std::ptrdiff_t m_ChainTarget = 0x828;
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0x830;
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0x848;
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0x860;
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0x878;
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x890;
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x8A8;
                constexpr std::ptrdiff_t m_OnClose = 0x8C0;
                constexpr std::ptrdiff_t m_OnOpen = 0x8D8;
                constexpr std::ptrdiff_t m_OnLockedUse = 0x8F0;
                constexpr std::ptrdiff_t m_bLoopMoveSound = 0x908;
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0x928;
                constexpr std::ptrdiff_t m_isChaining = 0x929;
                constexpr std::ptrdiff_t m_bIsUsable = 0x92A;
            }
            namespace CServerOnlyPointEntity {
            }
            namespace CGameMoney {
                constexpr std::ptrdiff_t m_OnMoneySpent = 0x740;
                constexpr std::ptrdiff_t m_OnMoneySpentFail = 0x758;
                constexpr std::ptrdiff_t m_nMoney = 0x770;
                constexpr std::ptrdiff_t m_strAwardText = 0x778;
            }
            namespace CEnvHudHint {
                constexpr std::ptrdiff_t m_iszMessage = 0x4A8;
            }
            namespace CNullEntity {
            }
            namespace CLogicalEntity {
            }
            namespace CItemDefuser {
                constexpr std::ptrdiff_t m_entitySpottedState = 0xAC0;
                constexpr std::ptrdiff_t m_nSpotRules = 0xAD8;
            }
            namespace CItemGenericTriggerHelper {
                constexpr std::ptrdiff_t m_hParentItem = 0x730;
            }
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x48;
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x60;
                constexpr std::ptrdiff_t m_hLastWeapon = 0x64;
                constexpr std::ptrdiff_t m_iAmmo = 0x68;
                constexpr std::ptrdiff_t m_bPreventWeaponPickup = 0xA8;
            }
            namespace CRagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0xB70;
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0xB74;
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0xB78;
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0xB84;
                constexpr std::ptrdiff_t m_bShouldDetach = 0xB90;
                constexpr std::ptrdiff_t m_bShouldDeleteAttachedActivationRecord = 0xBA0;
            }
            namespace CItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0xAC0;
                constexpr std::ptrdiff_t m_KillingPlayer = 0xAC4;
            }
            namespace CFuncPlat {
                constexpr std::ptrdiff_t m_sNoise = 0x7D8;
            }
            namespace CBarnLight {
                constexpr std::ptrdiff_t m_bEnabled = 0x730;
                constexpr std::ptrdiff_t m_nColorMode = 0x734;
                constexpr std::ptrdiff_t m_Color = 0x738;
                constexpr std::ptrdiff_t m_flColorTemperature = 0x73C;
                constexpr std::ptrdiff_t m_flBrightness = 0x740;
                constexpr std::ptrdiff_t m_flBrightnessScale = 0x744;
                constexpr std::ptrdiff_t m_nDirectLight = 0x748;
                constexpr std::ptrdiff_t m_nBakedShadowIndex = 0x74C;
                constexpr std::ptrdiff_t m_nLightPathUniqueId = 0x750;
                constexpr std::ptrdiff_t m_nLightMapUniqueId = 0x754;
                constexpr std::ptrdiff_t m_nLuminaireShape = 0x758;
                constexpr std::ptrdiff_t m_flLuminaireSize = 0x75C;
                constexpr std::ptrdiff_t m_flLuminaireAnisotropy = 0x760;
                constexpr std::ptrdiff_t m_LightStyleString = 0x768;
                constexpr std::ptrdiff_t m_flLightStyleStartTime = 0x770;
                constexpr std::ptrdiff_t m_QueuedLightStyleStrings = 0x778;
                constexpr std::ptrdiff_t m_LightStyleEvents = 0x790;
                constexpr std::ptrdiff_t m_LightStyleTargets = 0x7A8;
                constexpr std::ptrdiff_t m_StyleEvent = 0x7C0;
                constexpr std::ptrdiff_t m_hLightCookie = 0x840;
                constexpr std::ptrdiff_t m_flShape = 0x848;
                constexpr std::ptrdiff_t m_flSoftX = 0x84C;
                constexpr std::ptrdiff_t m_flSoftY = 0x850;
                constexpr std::ptrdiff_t m_flSkirt = 0x854;
                constexpr std::ptrdiff_t m_flSkirtNear = 0x858;
                constexpr std::ptrdiff_t m_vSizeParams = 0x85C;
                constexpr std::ptrdiff_t m_flRange = 0x868;
                constexpr std::ptrdiff_t m_vShear = 0x86C;
                constexpr std::ptrdiff_t m_nBakeSpecularToCubemaps = 0x878;
                constexpr std::ptrdiff_t m_vBakeSpecularToCubemapsSize = 0x87C;
                constexpr std::ptrdiff_t m_nCastShadows = 0x888;
                constexpr std::ptrdiff_t m_nShadowMapSize = 0x88C;
                constexpr std::ptrdiff_t m_nShadowPriority = 0x890;
                constexpr std::ptrdiff_t m_bContactShadow = 0x894;
                constexpr std::ptrdiff_t m_bForceShadowsEnabled = 0x895;
                constexpr std::ptrdiff_t m_nBounceLight = 0x898;
                constexpr std::ptrdiff_t m_flBounceScale = 0x89C;
                constexpr std::ptrdiff_t m_bDynamicBounce = 0x8A0;
                constexpr std::ptrdiff_t m_flMinRoughness = 0x8A4;
                constexpr std::ptrdiff_t m_vAlternateColor = 0x8A8;
                constexpr std::ptrdiff_t m_fAlternateColorBrightness = 0x8B4;
                constexpr std::ptrdiff_t m_nFog = 0x8B8;
                constexpr std::ptrdiff_t m_flFogStrength = 0x8BC;
                constexpr std::ptrdiff_t m_nFogShadows = 0x8C0;
                constexpr std::ptrdiff_t m_flFogScale = 0x8C4;
                constexpr std::ptrdiff_t m_bFogMixedShadows = 0x8C8;
                constexpr std::ptrdiff_t m_flFadeSizeStart = 0x8CC;
                constexpr std::ptrdiff_t m_flFadeSizeEnd = 0x8D0;
                constexpr std::ptrdiff_t m_flShadowFadeSizeStart = 0x8D4;
                constexpr std::ptrdiff_t m_flShadowFadeSizeEnd = 0x8D8;
                constexpr std::ptrdiff_t m_bPrecomputedFieldsValid = 0x8DC;
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMins = 0x8E0;
                constexpr std::ptrdiff_t m_vPrecomputedBoundsMaxs = 0x8EC;
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin = 0x8F8;
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles = 0x904;
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent = 0x910;
                constexpr std::ptrdiff_t m_nPrecomputedSubFrusta = 0x91C;
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin0 = 0x920;
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles0 = 0x92C;
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent0 = 0x938;
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin1 = 0x944;
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles1 = 0x950;
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent1 = 0x95C;
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin2 = 0x968;
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles2 = 0x974;
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent2 = 0x980;
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin3 = 0x98C;
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles3 = 0x998;
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent3 = 0x9A4;
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin4 = 0x9B0;
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles4 = 0x9BC;
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent4 = 0x9C8;
                constexpr std::ptrdiff_t m_vPrecomputedOBBOrigin5 = 0x9D4;
                constexpr std::ptrdiff_t m_vPrecomputedOBBAngles5 = 0x9E0;
                constexpr std::ptrdiff_t m_vPrecomputedOBBExtent5 = 0x9EC;
                constexpr std::ptrdiff_t m_bPvsModifyEntity = 0x9F8;
                constexpr std::ptrdiff_t m_VisClusters = 0xA00;
            }
            namespace CInstructorEventEntity {
                constexpr std::ptrdiff_t m_iszName = 0x4A8;
                constexpr std::ptrdiff_t m_iszHintTargetEntity = 0x4B0;
                constexpr std::ptrdiff_t m_hTargetPlayer = 0x4B8;
            }
            namespace CWeaponTec9 {
            }
            namespace CPathCorner {
                constexpr std::ptrdiff_t m_flWait = 0x4A8;
                constexpr std::ptrdiff_t m_flRadius = 0x4AC;
                constexpr std::ptrdiff_t m_OnPass = 0x4B0;
            }
            namespace CTriggerSndSosOpvar {
                constexpr std::ptrdiff_t m_hTouchingPlayers = 0x890;
                constexpr std::ptrdiff_t m_flPosition = 0x8A8;
                constexpr std::ptrdiff_t m_flCenterSize = 0x8B4;
                constexpr std::ptrdiff_t m_flMinVal = 0x8B8;
                constexpr std::ptrdiff_t m_flMaxVal = 0x8BC;
                constexpr std::ptrdiff_t m_opvarName = 0x8C0;
                constexpr std::ptrdiff_t m_stackName = 0x8C8;
                constexpr std::ptrdiff_t m_operatorName = 0x8D0;
                constexpr std::ptrdiff_t m_bVolIs2D = 0x8D8;
                constexpr std::ptrdiff_t m_opvarNameChar = 0x8D9;
                constexpr std::ptrdiff_t m_stackNameChar = 0x9D9;
                constexpr std::ptrdiff_t m_operatorNameChar = 0xAD9;
                constexpr std::ptrdiff_t m_VecNormPos = 0xBDC;
                constexpr std::ptrdiff_t m_flNormCenterSize = 0xBE8;
            }
            namespace CPulseCell_LimitCount {
                constexpr std::ptrdiff_t m_nLimitCount = 0x48;
            }
            namespace CPulseCell_Step_CallExternalMethod {
                constexpr std::ptrdiff_t m_MethodName = 0x48;
                constexpr std::ptrdiff_t m_GameBlackboard = 0x58;
                constexpr std::ptrdiff_t m_ExpectedArgs = 0x68;
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x78;
                constexpr std::ptrdiff_t m_OnFinished = 0x80;
            }
            namespace CPointCommentaryNode {
                constexpr std::ptrdiff_t m_iszPreCommands = 0xA20;
                constexpr std::ptrdiff_t m_iszPostCommands = 0xA28;
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0xA30;
                constexpr std::ptrdiff_t m_iszViewTarget = 0xA38;
                constexpr std::ptrdiff_t m_hViewTarget = 0xA40;
                constexpr std::ptrdiff_t m_hViewTargetAngles = 0xA44;
                constexpr std::ptrdiff_t m_iszViewPosition = 0xA48;
                constexpr std::ptrdiff_t m_hViewPosition = 0xA50;
                constexpr std::ptrdiff_t m_hViewPositionMover = 0xA54;
                constexpr std::ptrdiff_t m_bPreventMovement = 0xA58;
                constexpr std::ptrdiff_t m_bUnderCrosshair = 0xA59;
                constexpr std::ptrdiff_t m_bUnstoppable = 0xA5A;
                constexpr std::ptrdiff_t m_flFinishedTime = 0xA5C;
                constexpr std::ptrdiff_t m_vecFinishOrigin = 0xA60;
                constexpr std::ptrdiff_t m_vecOriginalAngles = 0xA6C;
                constexpr std::ptrdiff_t m_vecFinishAngles = 0xA78;
                constexpr std::ptrdiff_t m_bPreventChangesWhileMoving = 0xA84;
                constexpr std::ptrdiff_t m_bDisabled = 0xA85;
                constexpr std::ptrdiff_t m_vecTeleportOrigin = 0xA88;
                constexpr std::ptrdiff_t m_flAbortedPlaybackAt = 0xA94;
                constexpr std::ptrdiff_t m_pOnCommentaryStarted = 0xA98;
                constexpr std::ptrdiff_t m_pOnCommentaryStopped = 0xAB0;
                constexpr std::ptrdiff_t m_bActive = 0xAC8;
                constexpr std::ptrdiff_t m_flStartTime = 0xACC;
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0xAD0;
                constexpr std::ptrdiff_t m_iszTitle = 0xAD8;
                constexpr std::ptrdiff_t m_iszSpeakers = 0xAE0;
                constexpr std::ptrdiff_t m_iNodeNumber = 0xAE8;
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0xAEC;
                constexpr std::ptrdiff_t m_bListenedTo = 0xAF0;
            }
            namespace CMomentaryRotButton {
                constexpr std::ptrdiff_t m_Position = 0x8B0;
                constexpr std::ptrdiff_t m_OnUnpressed = 0x8D0;
                constexpr std::ptrdiff_t m_OnFullyOpen = 0x8E8;
                constexpr std::ptrdiff_t m_OnFullyClosed = 0x900;
                constexpr std::ptrdiff_t m_OnReachedPosition = 0x918;
                constexpr std::ptrdiff_t m_lastUsed = 0x930;
                constexpr std::ptrdiff_t m_start = 0x934;
                constexpr std::ptrdiff_t m_end = 0x940;
                constexpr std::ptrdiff_t m_IdealYaw = 0x94C;
                constexpr std::ptrdiff_t m_sNoise = 0x950;
                constexpr std::ptrdiff_t m_bUpdateTarget = 0x958;
                constexpr std::ptrdiff_t m_direction = 0x95C;
                constexpr std::ptrdiff_t m_returnSpeed = 0x960;
                constexpr std::ptrdiff_t m_flStartPosition = 0x964;
            }
            namespace CSceneListManager {
                constexpr std::ptrdiff_t m_hListManagers = 0x4A8;
                constexpr std::ptrdiff_t m_iszScenes = 0x4C0;
                constexpr std::ptrdiff_t m_hScenes = 0x540;
            }
            namespace CEnvTilt {
                constexpr std::ptrdiff_t m_Duration = 0x4A8;
                constexpr std::ptrdiff_t m_Radius = 0x4AC;
                constexpr std::ptrdiff_t m_TiltTime = 0x4B0;
                constexpr std::ptrdiff_t m_stopTime = 0x4B4;
            }
            namespace CEnvSoundscapeTriggerable {
            }
            namespace CFuncMover {
                constexpr std::ptrdiff_t m_iszPathName = 0x730;
                constexpr std::ptrdiff_t m_hPathMover = 0x738;
                constexpr std::ptrdiff_t m_hPrevPathMover = 0x73C;
                constexpr std::ptrdiff_t m_iszPathNodeStart = 0x740;
                constexpr std::ptrdiff_t m_iszPathNodeEnd = 0x748;
                constexpr std::ptrdiff_t m_eMoveType = 0x750;
                constexpr std::ptrdiff_t m_bIsReversing = 0x754;
                constexpr std::ptrdiff_t m_flStartSpeed = 0x758;
                constexpr std::ptrdiff_t m_flPathLocation = 0x75C;
                constexpr std::ptrdiff_t m_flT = 0x760;
                constexpr std::ptrdiff_t m_nCurrentNodeIndex = 0x764;
                constexpr std::ptrdiff_t m_nPreviousNodeIndex = 0x768;
                constexpr std::ptrdiff_t m_eSolidType = 0x76C;
                constexpr std::ptrdiff_t m_bIsMoving = 0x76D;
                constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x770;
                constexpr std::ptrdiff_t m_flDistanceToReachMaxSpeed = 0x774;
                constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x778;
                constexpr std::ptrdiff_t m_flComputedDistanceToReachMaxSpeed = 0x77C;
                constexpr std::ptrdiff_t m_flComputedDistanceToReachZeroSpeed = 0x780;
                constexpr std::ptrdiff_t m_flStartCurveScale = 0x784;
                constexpr std::ptrdiff_t m_flStopCurveScale = 0x788;
                constexpr std::ptrdiff_t m_flDistanceToReachZeroSpeed = 0x78C;
                constexpr std::ptrdiff_t m_flTimeMovementStart = 0x790;
                constexpr std::ptrdiff_t m_flTimeMovementStop = 0x794;
                constexpr std::ptrdiff_t m_hStopAtNode = 0x798;
                constexpr std::ptrdiff_t m_flPathLocationToBeginStop = 0x79C;
                constexpr std::ptrdiff_t m_flPathLocationStart = 0x7A0;
                constexpr std::ptrdiff_t m_flBeginStopT = 0x7A4;
                constexpr std::ptrdiff_t m_iszStartForwardSound = 0x7A8;
                constexpr std::ptrdiff_t m_iszLoopForwardSound = 0x7B0;
                constexpr std::ptrdiff_t m_iszStopForwardSound = 0x7B8;
                constexpr std::ptrdiff_t m_iszStartReverseSound = 0x7C0;
                constexpr std::ptrdiff_t m_iszLoopReverseSound = 0x7C8;
                constexpr std::ptrdiff_t m_iszStopReverseSound = 0x7D0;
                constexpr std::ptrdiff_t m_iszArriveAtDestinationSound = 0x7D8;
                constexpr std::ptrdiff_t m_OnMovementEnd = 0x7F8;
                constexpr std::ptrdiff_t m_bStartAtClosestPoint = 0x810;
                constexpr std::ptrdiff_t m_bStartAtEnd = 0x811;
                constexpr std::ptrdiff_t m_bStartFollowingClosestMover = 0x812;
                constexpr std::ptrdiff_t m_eOrientationUpdate = 0x814;
                constexpr std::ptrdiff_t m_flTimeStartOrientationChange = 0x818;
                constexpr std::ptrdiff_t m_flTimeToBlendToNewOrientation = 0x81C;
                constexpr std::ptrdiff_t m_flDurationBlendToNewOrientationRan = 0x820;
                constexpr std::ptrdiff_t m_nOriginalOrientationIndex = 0x824;
                constexpr std::ptrdiff_t m_bCreateMovableNavMesh = 0x828;
                constexpr std::ptrdiff_t m_bAllowMovableNavMeshDockingOnEntireEntity = 0x829;
                constexpr std::ptrdiff_t m_OnNodePassed = 0x830;
                constexpr std::ptrdiff_t m_iszOrientationMatchEntityName = 0x850;
                constexpr std::ptrdiff_t m_hOrientationMatchEntity = 0x858;
                constexpr std::ptrdiff_t m_flTimeToTraverseToNextNode = 0x85C;
                constexpr std::ptrdiff_t m_vLerpToNewPosStartInPathEntitySpace = 0x860;
                constexpr std::ptrdiff_t m_vLerpToNewPosEndInPathEntitySpace = 0x86C;
                constexpr std::ptrdiff_t m_flLerpToPositionT = 0x878;
                constexpr std::ptrdiff_t m_flLerpToPositionDeltaT = 0x87C;
                constexpr std::ptrdiff_t m_OnLerpToPositionComplete = 0x880;
                constexpr std::ptrdiff_t m_bIsPaused = 0x898;
                constexpr std::ptrdiff_t m_eTransitionedToPathNodeAction = 0x89C;
                constexpr std::ptrdiff_t m_nDelayedTeleportToNode = 0x8A0;
                constexpr std::ptrdiff_t m_bIsVerboseLogging = 0x8A4;
                constexpr std::ptrdiff_t m_hFollowEntity = 0x8A8;
                constexpr std::ptrdiff_t m_flFollowDistance = 0x8AC;
                constexpr std::ptrdiff_t m_flFollowMinimumSpeed = 0x8B0;
                constexpr std::ptrdiff_t m_flCurFollowEntityT = 0x8B4;
                constexpr std::ptrdiff_t m_flCurFollowSpeed = 0x8B8;
                constexpr std::ptrdiff_t m_strOrientationFaceEntityName = 0x8C0;
                constexpr std::ptrdiff_t m_hOrientationFaceEntity = 0x8C8;
                constexpr std::ptrdiff_t m_OnStart = 0x8D0;
                constexpr std::ptrdiff_t m_OnStartForward = 0x8E8;
                constexpr std::ptrdiff_t m_OnStartReverse = 0x900;
                constexpr std::ptrdiff_t m_OnStop = 0x918;
                constexpr std::ptrdiff_t m_OnStopped = 0x930;
                constexpr std::ptrdiff_t m_bNextNodeReturnsCurrent = 0x948;
                constexpr std::ptrdiff_t m_bStartedMoving = 0x949;
                constexpr std::ptrdiff_t m_eFollowEntityDirection = 0x968;
                constexpr std::ptrdiff_t m_hFollowMover = 0x96C;
                constexpr std::ptrdiff_t m_iszFollowMoverEntityName = 0x970;
                constexpr std::ptrdiff_t m_flFollowMoverDistance = 0x978;
                constexpr std::ptrdiff_t m_flFollowMoverCalculatedDistance = 0x97C;
                constexpr std::ptrdiff_t m_flFollowMoverSpringStrength = 0x980;
                constexpr std::ptrdiff_t m_bFollowConstraintsInitialized = 0x984;
                constexpr std::ptrdiff_t m_eFollowConstraint = 0x988;
                constexpr std::ptrdiff_t m_flFollowMoverSpeed = 0x98C;
                constexpr std::ptrdiff_t m_flFollowMoverVelocity = 0x990;
                constexpr std::ptrdiff_t m_nTickMovementRan = 0x994;
            }
            namespace CPhysicsProp {
                constexpr std::ptrdiff_t m_MotionEnabled = 0xBB0;
                constexpr std::ptrdiff_t m_OnAwakened = 0xBC8;
                constexpr std::ptrdiff_t m_OnAwake = 0xBE0;
                constexpr std::ptrdiff_t m_OnAsleep = 0xBF8;
                constexpr std::ptrdiff_t m_OnPlayerUse = 0xC10;
                constexpr std::ptrdiff_t m_OnOutOfWorld = 0xC28;
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0xC40;
                constexpr std::ptrdiff_t m_bForceNavIgnore = 0xC58;
                constexpr std::ptrdiff_t m_bNoNavmeshBlocker = 0xC59;
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xC5A;
                constexpr std::ptrdiff_t m_massScale = 0xC5C;
                constexpr std::ptrdiff_t m_buoyancyScale = 0xC60;
                constexpr std::ptrdiff_t m_damageType = 0xC64;
                constexpr std::ptrdiff_t m_damageToEnableMotion = 0xC68;
                constexpr std::ptrdiff_t m_flForceToEnableMotion = 0xC6C;
                constexpr std::ptrdiff_t m_bThrownByPlayer = 0xC70;
                constexpr std::ptrdiff_t m_bDroppedByPlayer = 0xC71;
                constexpr std::ptrdiff_t m_bTouchedByPlayer = 0xC72;
                constexpr std::ptrdiff_t m_bFirstCollisionAfterLaunch = 0xC73;
                constexpr std::ptrdiff_t m_bHasBeenAwakened = 0xC74;
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xC75;
                constexpr std::ptrdiff_t m_flLastBurn = 0xC78;
                constexpr std::ptrdiff_t m_nDynamicContinuousContactBehavior = 0xC7C;
                constexpr std::ptrdiff_t m_fNextCheckDisableMotionContactsTime = 0xC80;
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xC84;
                constexpr std::ptrdiff_t m_nGlowRange = 0xC88;
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xC8C;
                constexpr std::ptrdiff_t m_glowColor = 0xC90;
                constexpr std::ptrdiff_t m_bShouldAutoConvertBackFromDebris = 0xC94;
                constexpr std::ptrdiff_t m_bMuteImpactEffects = 0xC95;
                constexpr std::ptrdiff_t m_bUpdateNavWhenMoving = 0xC9C;
                constexpr std::ptrdiff_t m_bForceNavObstacleCut = 0xC9D;
                constexpr std::ptrdiff_t m_bAllowObstacleConvexHullMerging = 0xC9E;
                constexpr std::ptrdiff_t m_bAcceptDamageFromHeldObjects = 0xC9F;
                constexpr std::ptrdiff_t m_bEnableUseOutput = 0xCA0;
                constexpr std::ptrdiff_t m_CrateType = 0xCA4;
                constexpr std::ptrdiff_t m_strItemClass = 0xCA8;
                constexpr std::ptrdiff_t m_nItemCount = 0xCC8;
                constexpr std::ptrdiff_t m_bRemovableForAmmoBalancing = 0xCD8;
                constexpr std::ptrdiff_t m_bAwake = 0xCD9;
                constexpr std::ptrdiff_t m_bAttachedToReferenceFrame = 0xCDA;
            }
            namespace CFuncNavObstruction {
                constexpr std::ptrdiff_t m_bDisabled = 0x748;
                constexpr std::ptrdiff_t m_bUseAsyncObstacleUpdate = 0x749;
            }
            namespace CPhysWheelConstraint {
                constexpr std::ptrdiff_t m_flSuspensionFrequency = 0x508;
                constexpr std::ptrdiff_t m_flSuspensionDampingRatio = 0x50C;
                constexpr std::ptrdiff_t m_flSuspensionHeightOffset = 0x510;
                constexpr std::ptrdiff_t m_bEnableSuspensionLimit = 0x514;
                constexpr std::ptrdiff_t m_flMinSuspensionOffset = 0x518;
                constexpr std::ptrdiff_t m_flMaxSuspensionOffset = 0x51C;
                constexpr std::ptrdiff_t m_bEnableSteeringLimit = 0x520;
                constexpr std::ptrdiff_t m_flMinSteeringAngle = 0x524;
                constexpr std::ptrdiff_t m_flMaxSteeringAngle = 0x528;
                constexpr std::ptrdiff_t m_flSteeringAxisFriction = 0x52C;
                constexpr std::ptrdiff_t m_flSpinAxisFriction = 0x530;
                constexpr std::ptrdiff_t m_hSteeringMimicsEntity = 0x534;
            }
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x4A8;
                constexpr std::ptrdiff_t m_hSkyCamera = 0x4AC;
            }
            namespace CPointPulse {
            }
            namespace CMolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0xBB0;
                constexpr std::ptrdiff_t m_bDetonated = 0xBC8;
                constexpr std::ptrdiff_t m_stillTimer = 0xBD0;
            }
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x4E0;
            }
            namespace CTriggerToggleSave {
            }
            namespace CPathWithDynamicNodes {
                constexpr std::ptrdiff_t m_vecPathNodes = 0x5B0;
                constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x5D0;
            }
            namespace CColorCorrection {
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x4A8;
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x4AC;
                constexpr std::ptrdiff_t m_flStartFadeInWeight = 0x4B0;
                constexpr std::ptrdiff_t m_flStartFadeOutWeight = 0x4B4;
                constexpr std::ptrdiff_t m_flTimeStartFadeIn = 0x4B8;
                constexpr std::ptrdiff_t m_flTimeStartFadeOut = 0x4BC;
                constexpr std::ptrdiff_t m_flMaxWeight = 0x4C0;
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4C4;
                constexpr std::ptrdiff_t m_bEnabled = 0x4C5;
                constexpr std::ptrdiff_t m_bMaster = 0x4C6;
                constexpr std::ptrdiff_t m_bClientSide = 0x4C7;
                constexpr std::ptrdiff_t m_bExclusive = 0x4C8;
                constexpr std::ptrdiff_t m_MinFalloff = 0x4CC;
                constexpr std::ptrdiff_t m_MaxFalloff = 0x4D0;
                constexpr std::ptrdiff_t m_flCurWeight = 0x4D4;
                constexpr std::ptrdiff_t m_netlookupFilename = 0x4D8;
                constexpr std::ptrdiff_t m_lookupFilename = 0x6D8;
            }
            namespace CPropDoorRotatingBreakable {
                constexpr std::ptrdiff_t m_bBreakable = 0xEF0;
                constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0xEF1;
                constexpr std::ptrdiff_t m_currentDamageState = 0xEF4;
                constexpr std::ptrdiff_t m_damageStates = 0xEF8;
            }
            namespace CLightDirectionalEntity {
            }
            namespace CBaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0x730;
                constexpr std::ptrdiff_t m_DialogXMLName = 0x738;
                constexpr std::ptrdiff_t m_PanelClassName = 0x740;
                constexpr std::ptrdiff_t m_PanelID = 0x748;
                constexpr std::ptrdiff_t m_CustomOutput0 = 0x750;
                constexpr std::ptrdiff_t m_CustomOutput1 = 0x770;
                constexpr std::ptrdiff_t m_CustomOutput2 = 0x790;
                constexpr std::ptrdiff_t m_CustomOutput3 = 0x7B0;
                constexpr std::ptrdiff_t m_CustomOutput4 = 0x7D0;
                constexpr std::ptrdiff_t m_CustomOutput5 = 0x7F0;
                constexpr std::ptrdiff_t m_CustomOutput6 = 0x810;
                constexpr std::ptrdiff_t m_CustomOutput7 = 0x830;
                constexpr std::ptrdiff_t m_CustomOutput8 = 0x850;
                constexpr std::ptrdiff_t m_CustomOutput9 = 0x870;
            }
            namespace CBreakable {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x738;
                constexpr std::ptrdiff_t m_Material = 0x778;
                constexpr std::ptrdiff_t m_hBreaker = 0x77C;
                constexpr std::ptrdiff_t m_Explosion = 0x780;
                constexpr std::ptrdiff_t m_iszSpawnObject = 0x788;
                constexpr std::ptrdiff_t m_flPressureDelay = 0x790;
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x794;
                constexpr std::ptrdiff_t m_iszPropData = 0x798;
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x7A0;
                constexpr std::ptrdiff_t m_nOverrideBlockLOS = 0x7A4;
                constexpr std::ptrdiff_t m_OnStartDeath = 0x7A8;
                constexpr std::ptrdiff_t m_OnBreak = 0x7C0;
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x7D8;
                constexpr std::ptrdiff_t m_PerformanceMode = 0x7F8;
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x7FC;
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x800;
            }
            namespace CInfoLandmark {
            }
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x4A8;
                constexpr std::ptrdiff_t m_OnPass = 0x4B0;
                constexpr std::ptrdiff_t m_OnFail = 0x4C8;
            }
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8;
            }
            namespace CPulseCell_Outflow_PlaySceneBase_CursorState_t {
                constexpr std::ptrdiff_t m_sceneInstance = 0x0;
                constexpr std::ptrdiff_t m_mainActor = 0x4;
            }
            namespace PulseObservableBoolExpression_t {
                constexpr std::ptrdiff_t m_EvaluateConnection = 0x0;
                constexpr std::ptrdiff_t m_DependentObservableVars = 0x48;
                constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60;
            }
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x4A8;
                constexpr std::ptrdiff_t m_flBombRadius = 0x4AC;
                constexpr std::ptrdiff_t m_iPetPopulation = 0x4B0;
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x4B4;
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x4B5;
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x4B8;
                constexpr std::ptrdiff_t m_iHostageCount = 0x4BC;
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x4C0;
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x4C1;
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x4C4;
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x4C8;
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x4CC;
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x4D0;
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x4D4;
            }
            namespace CGradientFog {
                constexpr std::ptrdiff_t m_hGradientFogTexture = 0x4A8;
                constexpr std::ptrdiff_t m_flFogStartDistance = 0x4B0;
                constexpr std::ptrdiff_t m_flFogEndDistance = 0x4B4;
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x4B8;
                constexpr std::ptrdiff_t m_flFogStartHeight = 0x4BC;
                constexpr std::ptrdiff_t m_flFogEndHeight = 0x4C0;
                constexpr std::ptrdiff_t m_flFarZ = 0x4C4;
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x4C8;
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x4CC;
                constexpr std::ptrdiff_t m_flFogVerticalExponent = 0x4D0;
                constexpr std::ptrdiff_t m_fogColor = 0x4D4;
                constexpr std::ptrdiff_t m_flFogStrength = 0x4D8;
                constexpr std::ptrdiff_t m_flFadeTime = 0x4DC;
                constexpr std::ptrdiff_t m_bStartDisabled = 0x4E0;
                constexpr std::ptrdiff_t m_bIsEnabled = 0x4E1;
                constexpr std::ptrdiff_t m_bGradientFogNeedsTextures = 0x4E2;
            }
            namespace CSoundOpvarSetAABBEntity {
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x640;
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x64C;
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x658;
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x664;
                constexpr std::ptrdiff_t m_nAABBDirection = 0x670;
                constexpr std::ptrdiff_t m_vInnerMins = 0x674;
                constexpr std::ptrdiff_t m_vInnerMaxs = 0x680;
                constexpr std::ptrdiff_t m_vOuterMins = 0x68C;
                constexpr std::ptrdiff_t m_vOuterMaxs = 0x698;
            }
            namespace CPulseCell_Outflow_PlaySequence {
                constexpr std::ptrdiff_t m_ParamSequenceName = 0xF0;
            }
            namespace CPointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x8E8;
            }
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringableIndex = 0x14;
                constexpr std::ptrdiff_t m_name = 0x18;
                constexpr std::ptrdiff_t m_designerName = 0x20;
                constexpr std::ptrdiff_t m_flags = 0x30;
                constexpr std::ptrdiff_t m_worldGroupId = 0x38;
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C;
                constexpr std::ptrdiff_t m_PathIndex = 0x40;
                constexpr std::ptrdiff_t m_pAttributes = 0x48;
                constexpr std::ptrdiff_t m_pPrev = 0x50;
                constexpr std::ptrdiff_t m_pNext = 0x58;
                constexpr std::ptrdiff_t m_pPrevByClass = 0x60;
                constexpr std::ptrdiff_t m_pNextByClass = 0x68;
            }
            namespace CPulseCell_LimitCount_Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0;
            }
            namespace CFuncRotator {
                constexpr std::ptrdiff_t m_hRotatorTarget = 0x730;
                constexpr std::ptrdiff_t m_bIsRotating = 0x734;
                constexpr std::ptrdiff_t m_bIsReversing = 0x735;
                constexpr std::ptrdiff_t m_flTimeToReachMaxSpeed = 0x738;
                constexpr std::ptrdiff_t m_flTimeToReachZeroSpeed = 0x73C;
                constexpr std::ptrdiff_t m_flDistanceAlongArcTraveled = 0x740;
                constexpr std::ptrdiff_t m_flTimeToWaitOscillate = 0x744;
                constexpr std::ptrdiff_t m_flTimeRotationStart = 0x748;
                constexpr std::ptrdiff_t m_qLSPrevChange = 0x750;
                constexpr std::ptrdiff_t m_qWSPrev = 0x760;
                constexpr std::ptrdiff_t m_qWSInit = 0x770;
                constexpr std::ptrdiff_t m_qLSInit = 0x780;
                constexpr std::ptrdiff_t m_qLSOrientation = 0x790;
                constexpr std::ptrdiff_t m_OnRotationStarted = 0x7A0;
                constexpr std::ptrdiff_t m_OnRotationCompleted = 0x7B8;
                constexpr std::ptrdiff_t m_OnOscillate = 0x7D0;
                constexpr std::ptrdiff_t m_OnOscillateStartArrive = 0x7E8;
                constexpr std::ptrdiff_t m_OnOscillateStartDepart = 0x800;
                constexpr std::ptrdiff_t m_OnOscillateEndArrive = 0x818;
                constexpr std::ptrdiff_t m_OnOscillateEndDepart = 0x830;
                constexpr std::ptrdiff_t m_bOscillateDepart = 0x848;
                constexpr std::ptrdiff_t m_nOscillateCount = 0x84C;
                constexpr std::ptrdiff_t m_eRotateType = 0x850;
                constexpr std::ptrdiff_t m_ePrevRotateType = 0x854;
                constexpr std::ptrdiff_t m_bHasTargetOverride = 0x858;
                constexpr std::ptrdiff_t m_qOrientationOverride = 0x860;
                constexpr std::ptrdiff_t m_eSpaceOverride = 0x870;
                constexpr std::ptrdiff_t m_qAngularVelocity = 0x874;
                constexpr std::ptrdiff_t m_vLookAtForcedUp = 0x880;
                constexpr std::ptrdiff_t m_strRotatorTarget = 0x890;
                constexpr std::ptrdiff_t m_bRecordHistory = 0x898;
                constexpr std::ptrdiff_t m_vecRotatorHistory = 0x8A0;
                constexpr std::ptrdiff_t m_bReturningToPreviousOrientation = 0x8B8;
                constexpr std::ptrdiff_t m_vecRotatorQueue = 0x8C0;
                constexpr std::ptrdiff_t m_vecRotatorQueueHistory = 0x8D8;
                constexpr std::ptrdiff_t m_eSolidType = 0x8F0;
                constexpr std::ptrdiff_t m_hSpeedFromMover = 0x8F4;
                constexpr std::ptrdiff_t m_iszSpeedFromMover = 0x8F8;
                constexpr std::ptrdiff_t m_flSpeedScale = 0x900;
                constexpr std::ptrdiff_t m_flMinYawRotation = 0x904;
                constexpr std::ptrdiff_t m_flMaxYawRotation = 0x908;
            }
            namespace CSoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x4A8;
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x4A9;
                constexpr std::ptrdiff_t m_bStopOnNew = 0x4AA;
                constexpr std::ptrdiff_t m_bSaveRestore = 0x4AB;
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x4AC;
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x4B0;
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x4B8;
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x4C0;
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x4C8;
                constexpr std::ptrdiff_t m_onSoundFinished = 0x4E8;
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x500;
                constexpr std::ptrdiff_t m_iszSoundName = 0x530;
                constexpr std::ptrdiff_t m_hSource = 0x54C;
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x550;
            }
            namespace CInfoPlayerCounterterrorist {
            }
            namespace CEnvFade {
                constexpr std::ptrdiff_t m_fadeColor = 0x4A8;
                constexpr std::ptrdiff_t m_Duration = 0x4AC;
                constexpr std::ptrdiff_t m_HoldDuration = 0x4B0;
                constexpr std::ptrdiff_t m_OnBeginFade = 0x4B8;
            }
            namespace CBasePlayerVData {
                constexpr std::ptrdiff_t m_sModelName = 0x28;
                constexpr std::ptrdiff_t m_flHeadDamageMultiplier = 0x108;
                constexpr std::ptrdiff_t m_flChestDamageMultiplier = 0x118;
                constexpr std::ptrdiff_t m_flStomachDamageMultiplier = 0x128;
                constexpr std::ptrdiff_t m_flArmDamageMultiplier = 0x138;
                constexpr std::ptrdiff_t m_flLegDamageMultiplier = 0x148;
                constexpr std::ptrdiff_t m_flHoldBreathTime = 0x158;
                constexpr std::ptrdiff_t m_flDrowningDamageInterval = 0x15C;
                constexpr std::ptrdiff_t m_nDrowningDamageInitial = 0x160;
                constexpr std::ptrdiff_t m_nDrowningDamageMax = 0x164;
                constexpr std::ptrdiff_t m_nWaterSpeed = 0x168;
                constexpr std::ptrdiff_t m_flUseRange = 0x16C;
                constexpr std::ptrdiff_t m_flUseAngleTolerance = 0x170;
                constexpr std::ptrdiff_t m_flCrouchTime = 0x174;
            }
            namespace CTriggerImpact {
                constexpr std::ptrdiff_t m_flMagnitude = 0x8A8;
                constexpr std::ptrdiff_t m_flNoise = 0x8AC;
                constexpr std::ptrdiff_t m_flViewkick = 0x8B0;
                constexpr std::ptrdiff_t m_pOutputForce = 0x8B8;
            }
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30;
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34;
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38;
            }
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98;
            }
            namespace CPulseCell_Value_RandomFloat {
            }
            namespace CPulseExecCursor {
            }
            namespace CBasePropDoor {
                constexpr std::ptrdiff_t m_flAutoReturnDelay = 0xC60;
                constexpr std::ptrdiff_t m_hDoorList = 0xC68;
                constexpr std::ptrdiff_t m_nHardwareType = 0xC80;
                constexpr std::ptrdiff_t m_bNeedsHardware = 0xC84;
                constexpr std::ptrdiff_t m_eDoorState = 0xC88;
                constexpr std::ptrdiff_t m_bLocked = 0xC8C;
                constexpr std::ptrdiff_t m_bNoNPCs = 0xC8D;
                constexpr std::ptrdiff_t m_closedPosition = 0xC90;
                constexpr std::ptrdiff_t m_closedAngles = 0xC9C;
                constexpr std::ptrdiff_t m_hBlocker = 0xCA8;
                constexpr std::ptrdiff_t m_bFirstBlocked = 0xCAC;
                constexpr std::ptrdiff_t m_ls = 0xCB0;
                constexpr std::ptrdiff_t m_bForceClosed = 0xCD0;
                constexpr std::ptrdiff_t m_vecLatchWorldPosition = 0xCD4;
                constexpr std::ptrdiff_t m_hActivator = 0xCE0;
                constexpr std::ptrdiff_t m_SoundMoving = 0xCF8;
                constexpr std::ptrdiff_t m_SoundOpen = 0xD00;
                constexpr std::ptrdiff_t m_SoundClose = 0xD08;
                constexpr std::ptrdiff_t m_SoundLock = 0xD10;
                constexpr std::ptrdiff_t m_SoundUnlock = 0xD18;
                constexpr std::ptrdiff_t m_SoundLatch = 0xD20;
                constexpr std::ptrdiff_t m_SoundPound = 0xD28;
                constexpr std::ptrdiff_t m_SoundJiggle = 0xD30;
                constexpr std::ptrdiff_t m_SoundLockedAnim = 0xD38;
                constexpr std::ptrdiff_t m_numCloseAttempts = 0xD40;
                constexpr std::ptrdiff_t m_nPhysicsMaterial = 0xD44;
                constexpr std::ptrdiff_t m_SlaveName = 0xD48;
                constexpr std::ptrdiff_t m_hMaster = 0xD50;
                constexpr std::ptrdiff_t m_OnBlockedClosing = 0xD58;
                constexpr std::ptrdiff_t m_OnBlockedOpening = 0xD70;
                constexpr std::ptrdiff_t m_OnUnblockedClosing = 0xD88;
                constexpr std::ptrdiff_t m_OnUnblockedOpening = 0xDA0;
                constexpr std::ptrdiff_t m_OnFullyClosed = 0xDB8;
                constexpr std::ptrdiff_t m_OnFullyOpen = 0xDD0;
                constexpr std::ptrdiff_t m_OnClose = 0xDE8;
                constexpr std::ptrdiff_t m_OnOpen = 0xE00;
                constexpr std::ptrdiff_t m_OnLockedUse = 0xE18;
                constexpr std::ptrdiff_t m_OnAjarOpen = 0xE30;
            }
            namespace CLogicBranchList {
                constexpr std::ptrdiff_t m_nLogicBranchNames = 0x4A8;
                constexpr std::ptrdiff_t m_LogicBranchList = 0x528;
                constexpr std::ptrdiff_t m_eLastState = 0x540;
                constexpr std::ptrdiff_t m_OnAllTrue = 0x548;
                constexpr std::ptrdiff_t m_OnAllFalse = 0x560;
                constexpr std::ptrdiff_t m_OnMixed = 0x578;
            }
            namespace CBtActionParachutePositioning {
                constexpr std::ptrdiff_t m_ActionTimer = 0x58;
            }
            namespace CAK47 {
            }
            namespace CDynamicProp {
                constexpr std::ptrdiff_t m_bCreateNavObstacle = 0xBA8;
                constexpr std::ptrdiff_t m_bNavObstacleUpdatesOverridden = 0xBA9;
                constexpr std::ptrdiff_t m_bUseHitboxesForRenderBox = 0xBAA;
                constexpr std::ptrdiff_t m_bUseAnimGraph = 0xBAB;
                constexpr std::ptrdiff_t m_pOutputAnimBegun = 0xBB0;
                constexpr std::ptrdiff_t m_pOutputAnimOver = 0xBC8;
                constexpr std::ptrdiff_t m_pOutputAnimLoopCycleOver = 0xBE0;
                constexpr std::ptrdiff_t m_OnAnimReachedStart = 0xBF8;
                constexpr std::ptrdiff_t m_OnAnimReachedEnd = 0xC10;
                constexpr std::ptrdiff_t m_iszIdleAnim = 0xC28;
                constexpr std::ptrdiff_t m_nIdleAnimLoopMode = 0xC30;
                constexpr std::ptrdiff_t m_bRandomizeCycle = 0xC34;
                constexpr std::ptrdiff_t m_bStartDisabled = 0xC35;
                constexpr std::ptrdiff_t m_bFiredStartEndOutput = 0xC36;
                constexpr std::ptrdiff_t m_bForceNpcExclude = 0xC37;
                constexpr std::ptrdiff_t m_bCreateNonSolid = 0xC38;
                constexpr std::ptrdiff_t m_bIsOverrideProp = 0xC39;
                constexpr std::ptrdiff_t m_iInitialGlowState = 0xC3C;
                constexpr std::ptrdiff_t m_nGlowRange = 0xC40;
                constexpr std::ptrdiff_t m_nGlowRangeMin = 0xC44;
                constexpr std::ptrdiff_t m_glowColor = 0xC48;
                constexpr std::ptrdiff_t m_nGlowTeam = 0xC4C;
            }
            namespace CHostageAlias_info_hostage_spawn {
            }
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x4E0;
            }
            namespace CFuncConveyor {
                constexpr std::ptrdiff_t m_szConveyorModels = 0x730;
                constexpr std::ptrdiff_t m_flTransitionDurationSeconds = 0x738;
                constexpr std::ptrdiff_t m_angMoveEntitySpace = 0x73C;
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x748;
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x754;
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0x758;
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x75C;
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x760;
                constexpr std::ptrdiff_t m_hConveyorModels = 0x768;
            }
            namespace CTriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0x8A0;
                constexpr std::ptrdiff_t m_linearLimit = 0x8A4;
                constexpr std::ptrdiff_t m_linearDamping = 0x8A8;
                constexpr std::ptrdiff_t m_angularLimit = 0x8AC;
                constexpr std::ptrdiff_t m_angularDamping = 0x8B0;
                constexpr std::ptrdiff_t m_linearForce = 0x8B4;
                constexpr std::ptrdiff_t m_flFrequency = 0x8B8;
                constexpr std::ptrdiff_t m_flDampingRatio = 0x8BC;
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x8C0;
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x8CC;
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x8D0;
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x8DC;
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x8E8;
            }
            namespace CInfoInstructorHintBombTargetB {
            }
            namespace CFuncTimescale {
                constexpr std::ptrdiff_t m_flDesiredTimescale = 0x4A8;
                constexpr std::ptrdiff_t m_flAcceleration = 0x4AC;
                constexpr std::ptrdiff_t m_flMinBlendRate = 0x4B0;
                constexpr std::ptrdiff_t m_flBlendDeltaMultiplier = 0x4B4;
                constexpr std::ptrdiff_t m_isStarted = 0x4B8;
            }
            namespace CInfoInteraction {
                constexpr std::ptrdiff_t m_strSlotEntityName = 0x4A8;
                constexpr std::ptrdiff_t m_strInteractVData = 0x4E8;
                constexpr std::ptrdiff_t m_flInteractRadius = 0x4F0;
            }
            namespace CBasePlayerWeaponVData {
                constexpr std::ptrdiff_t m_szWorldModel = 0x28;
                constexpr std::ptrdiff_t m_sToolsOnlyOwnerModelName = 0x108;
                constexpr std::ptrdiff_t m_bBuiltRightHanded = 0x1E8;
                constexpr std::ptrdiff_t m_bAllowFlipping = 0x1E9;
                constexpr std::ptrdiff_t m_sMuzzleAttachment = 0x1F0;
                constexpr std::ptrdiff_t m_szMuzzleFlashParticle = 0x210;
                constexpr std::ptrdiff_t m_szMuzzleFlashParticleConfig = 0x2F0;
                constexpr std::ptrdiff_t m_szBarrelSmokeParticle = 0x2F8;
                constexpr std::ptrdiff_t m_nMuzzleSmokeShotThreshold = 0x3D8;
                constexpr std::ptrdiff_t m_flMuzzleSmokeTimeout = 0x3DC;
                constexpr std::ptrdiff_t m_flMuzzleSmokeDecrementRate = 0x3E0;
                constexpr std::ptrdiff_t m_bGenerateMuzzleLight = 0x3E4;
                constexpr std::ptrdiff_t m_bLinkedCooldowns = 0x3E5;
                constexpr std::ptrdiff_t m_iFlags = 0x3E6;
                constexpr std::ptrdiff_t m_iWeight = 0x3E8;
                constexpr std::ptrdiff_t m_bAutoSwitchTo = 0x3EC;
                constexpr std::ptrdiff_t m_bAutoSwitchFrom = 0x3ED;
                constexpr std::ptrdiff_t m_nPrimaryAmmoType = 0x3EE;
                constexpr std::ptrdiff_t m_nSecondaryAmmoType = 0x3EF;
                constexpr std::ptrdiff_t m_iMaxClip1 = 0x3F0;
                constexpr std::ptrdiff_t m_iMaxClip2 = 0x3F4;
                constexpr std::ptrdiff_t m_iDefaultClip1 = 0x3F8;
                constexpr std::ptrdiff_t m_iDefaultClip2 = 0x3FC;
                constexpr std::ptrdiff_t m_bReserveAmmoAsClips = 0x400;
                constexpr std::ptrdiff_t m_bTreatAsSingleClip = 0x401;
                constexpr std::ptrdiff_t m_bKeepLoadedAmmo = 0x402;
                constexpr std::ptrdiff_t m_iRumbleEffect = 0x404;
                constexpr std::ptrdiff_t m_flDropSpeed = 0x408;
                constexpr std::ptrdiff_t m_iSlot = 0x40C;
                constexpr std::ptrdiff_t m_iPosition = 0x410;
                constexpr std::ptrdiff_t m_aShootSounds = 0x418;
            }
            namespace CSoundOpvarSetPointEntity {
                constexpr std::ptrdiff_t m_OnEnter = 0x550;
                constexpr std::ptrdiff_t m_OnExit = 0x568;
                constexpr std::ptrdiff_t m_bAutoDisable = 0x580;
                constexpr std::ptrdiff_t m_flDistanceMin = 0x5C4;
                constexpr std::ptrdiff_t m_flDistanceMax = 0x5C8;
                constexpr std::ptrdiff_t m_flDistanceMapMin = 0x5CC;
                constexpr std::ptrdiff_t m_flDistanceMapMax = 0x5D0;
                constexpr std::ptrdiff_t m_flOcclusionRadius = 0x5D4;
                constexpr std::ptrdiff_t m_flOcclusionMin = 0x5D8;
                constexpr std::ptrdiff_t m_flOcclusionMax = 0x5DC;
                constexpr std::ptrdiff_t m_flValSetOnDisable = 0x5E0;
                constexpr std::ptrdiff_t m_bSetValueOnDisable = 0x5E4;
                constexpr std::ptrdiff_t m_bReloading = 0x5E5;
                constexpr std::ptrdiff_t m_nSimulationMode = 0x5E8;
                constexpr std::ptrdiff_t m_nVisibilitySamples = 0x5EC;
                constexpr std::ptrdiff_t m_vDynamicProxyPoint = 0x5F0;
                constexpr std::ptrdiff_t m_flDynamicMaximumOcclusion = 0x5FC;
                constexpr std::ptrdiff_t m_hDynamicEntity = 0x600;
                constexpr std::ptrdiff_t m_iszDynamicEntityName = 0x608;
                constexpr std::ptrdiff_t m_flPathingDistanceNormFactor = 0x610;
                constexpr std::ptrdiff_t m_vPathingSourcePos = 0x614;
                constexpr std::ptrdiff_t m_vPathingListenerPos = 0x620;
                constexpr std::ptrdiff_t m_vPathingDirection = 0x62C;
                constexpr std::ptrdiff_t m_nPathingSourceIndex = 0x638;
            }
            namespace CInfoTargetServerOnly {
            }
            namespace CServerRagdollTrigger {
            }
            namespace CDynamicPropAlias_dynamic_prop {
            }
            namespace CMarkupVolumeTagged {
                constexpr std::ptrdiff_t m_GroupNames = 0x738;
                constexpr std::ptrdiff_t m_Tags = 0x750;
                constexpr std::ptrdiff_t m_bIsGroup = 0x768;
                constexpr std::ptrdiff_t m_bGroupByPrefab = 0x769;
                constexpr std::ptrdiff_t m_bGroupByVolume = 0x76A;
                constexpr std::ptrdiff_t m_bGroupOtherGroups = 0x76B;
                constexpr std::ptrdiff_t m_bIsInGroup = 0x76C;
            }
            namespace CInfoParticleTarget {
            }
            namespace CEnvCubemap {
                constexpr std::ptrdiff_t m_Entity_hCubemapTexture = 0x528;
                constexpr std::ptrdiff_t m_Entity_bCustomCubemapTexture = 0x530;
                constexpr std::ptrdiff_t m_Entity_flInfluenceRadius = 0x534;
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMins = 0x538;
                constexpr std::ptrdiff_t m_Entity_vBoxProjectMaxs = 0x544;
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x550;
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x554;
                constexpr std::ptrdiff_t m_Entity_nEnvCubeMapArrayIndex = 0x558;
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x55C;
                constexpr std::ptrdiff_t m_Entity_flEdgeFadeDist = 0x560;
                constexpr std::ptrdiff_t m_Entity_vEdgeFadeDists = 0x564;
                constexpr std::ptrdiff_t m_Entity_flDiffuseScale = 0x570;
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x574;
                constexpr std::ptrdiff_t m_Entity_bDefaultEnvMap = 0x575;
                constexpr std::ptrdiff_t m_Entity_bDefaultSpecEnvMap = 0x576;
                constexpr std::ptrdiff_t m_Entity_bIndoorCubeMap = 0x577;
                constexpr std::ptrdiff_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x578;
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x588;
            }
            namespace CCSPlayer_DamageReactServices {
            }
            namespace CWeaponXM1014 {
            }
            namespace CTriggerLerpObject {
                constexpr std::ptrdiff_t m_iszLerpTarget = 0x890;
                constexpr std::ptrdiff_t m_hLerpTarget = 0x898;
                constexpr std::ptrdiff_t m_iszLerpTargetAttachment = 0x8A0;
                constexpr std::ptrdiff_t m_hLerpTargetAttachment = 0x8A8;
                constexpr std::ptrdiff_t m_flLerpDuration = 0x8AC;
                constexpr std::ptrdiff_t m_bAttachedEntityWasParented = 0x8B0;
                constexpr std::ptrdiff_t m_bLerpRestoreMoveType = 0x8B1;
                constexpr std::ptrdiff_t m_bSingleLerpObject = 0x8B2;
                constexpr std::ptrdiff_t m_vecLerpingObjects = 0x8B8;
                constexpr std::ptrdiff_t m_iszLerpEffect = 0x8D0;
                constexpr std::ptrdiff_t m_iszLerpSound = 0x8D8;
                constexpr std::ptrdiff_t m_bAttachTouchingObject = 0x8E0;
                constexpr std::ptrdiff_t m_hEntityToWaitForDisconnect = 0x8E4;
                constexpr std::ptrdiff_t m_OnLerpStarted = 0x8E8;
                constexpr std::ptrdiff_t m_OnLerpFinished = 0x900;
                constexpr std::ptrdiff_t m_OnDetached = 0x918;
            }
            namespace CPhysicsPropOverride {
            }
            namespace CTriggerSave {
                constexpr std::ptrdiff_t m_bForceNewLevelUnit = 0x890;
                constexpr std::ptrdiff_t m_fDangerousTimer = 0x894;
                constexpr std::ptrdiff_t m_minHitPoints = 0x898;
            }
            namespace CPointHurt {
                constexpr std::ptrdiff_t m_nDamage = 0x4A8;
                constexpr std::ptrdiff_t m_bitsDamageType = 0x4AC;
                constexpr std::ptrdiff_t m_flRadius = 0x4B0;
                constexpr std::ptrdiff_t m_flDelay = 0x4B4;
                constexpr std::ptrdiff_t m_strTarget = 0x4B8;
                constexpr std::ptrdiff_t m_pActivator = 0x4C0;
            }
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x4B0;
                constexpr std::ptrdiff_t m_nTickBase = 0x4B8;
                constexpr std::ptrdiff_t m_hPawn = 0x4E0;
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x4E4;
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x4E8;
                constexpr std::ptrdiff_t m_hSplitOwner = 0x4EC;
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x4F0;
                constexpr std::ptrdiff_t m_bIsHLTV = 0x508;
                constexpr std::ptrdiff_t m_iConnected = 0x50C;
                constexpr std::ptrdiff_t m_iszPlayerName = 0x510;
                constexpr std::ptrdiff_t m_szNetworkIDString = 0x590;
                constexpr std::ptrdiff_t m_fLerpTime = 0x598;
                constexpr std::ptrdiff_t m_bLagCompensation = 0x59C;
                constexpr std::ptrdiff_t m_bPredict = 0x59D;
                constexpr std::ptrdiff_t m_bIsLowViolence = 0x5A4;
                constexpr std::ptrdiff_t m_bGamePaused = 0x5A5;
                constexpr std::ptrdiff_t m_iIgnoreGlobalChat = 0x6E0;
                constexpr std::ptrdiff_t m_flLastPlayerTalkTime = 0x6E4;
                constexpr std::ptrdiff_t m_flLastEntitySteadyState = 0x6E8;
                constexpr std::ptrdiff_t m_nAvailableEntitySteadyState = 0x6EC;
                constexpr std::ptrdiff_t m_bHasAnySteadyStateEnts = 0x6F0;
                constexpr std::ptrdiff_t m_steamID = 0x700;
                constexpr std::ptrdiff_t m_bNoClipEnabled = 0x708;
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x70C;
            }
        }
    }
}

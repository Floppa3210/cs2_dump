// Generated using CS2 ULTIMATE DUMPER
// 2026-02-10 19:56:33

#pragma once

#include <cstddef>

// Module: pulse_system.dll.dll
// Classes: 97

namespace cs2_dumper {
namespace schemas {
namespace pulse_system_dll {

// CPulseCell_Step_TestDomainDestroyFakeEntity (size: 0x48)
namespace CPulseCell_Step_TestDomainDestroyFakeEntity {
}

// CPulseCell_WaitForCursorsWithTag (size: 0xa0)
namespace CPulseCell_WaitForCursorsWithTag {
    constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
    constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9c; // PulseCursorCancelPriority_t
}

// CPulseCell_Test_NoInflow (size: 0x48)
namespace CPulseCell_Test_NoInflow {
}

// CPulseGraphInstance_TestDomain_FakeEntityOwner (size: 0x118)
namespace CPulseGraphInstance_TestDomain_FakeEntityOwner {
}

// CPulseCell_Base (size: 0x48)
namespace CPulseCell_Base {
    constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
}

// CPulse_ResumePoint (size: 0x48)
namespace CPulse_ResumePoint {
}

// CTestDomainDerived_Cursor (size: 0xd8)
namespace CTestDomainDerived_Cursor {
    constexpr std::ptrdiff_t m_nCursorValueA = 0xd0; // int32
    constexpr std::ptrdiff_t m_nCursorValueB = 0xd4; // int32
}

// CPulseCell_PickBestOutflowSelector (size: 0x68)
namespace CPulseCell_PickBestOutflowSelector {
    constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
    constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
}

// CPulseTestFuncs_LibraryA (size: 0x1)
namespace CPulseTestFuncs_LibraryA {
}

// CPulseCell_WaitForObservable (size: 0x108)
namespace CPulseCell_WaitForObservable {
    constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
    constexpr std::ptrdiff_t m_OnTrue = 0xc0; // CPulse_ResumePoint
}

// CPulse_OutflowConnection (size: 0x48)
namespace CPulse_OutflowConnection {
    constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
    constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
    constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
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

// CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView (size: 0x160)
namespace CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
}

// CPulseCell_FireCursors (size: 0xf8)
namespace CPulseCell_FireCursors {
    constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector< CPulse_OutflowConnection >
    constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
    constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnCanceled = 0xb0; // CPulse_ResumePoint
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

// CPulseCell_Value_Gradient (size: 0x60)
namespace CPulseCell_Value_Gradient {
    constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
}

// CPulseCursorFuncs (size: 0x1)
namespace CPulseCursorFuncs {
}

// PulseNodeDynamicOutflows_t::DynamicOutflow_t (size: 0x50)
namespace PulseNodeDynamicOutflows_t_DynamicOutflow_t {
    constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
    constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
}

// CPulseCell_Test_MultiOutflow_WithParams (size: 0xd8)
namespace CPulseCell_Test_MultiOutflow_WithParams {
    constexpr std::ptrdiff_t m_Out1 = 0x48; // SignatureOutflow_Continue
    constexpr std::ptrdiff_t m_Out2 = 0x90; // SignatureOutflow_Continue
}

// CBasePulseGraphInstance (size: 0x118)
namespace CBasePulseGraphInstance {
}

// CPulseCell_Inflow_GraphHook (size: 0x90)
namespace CPulseCell_Inflow_GraphHook {
    constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
}

// SignatureOutflow_Resume (size: 0x48)
namespace SignatureOutflow_Resume {
}

// CPulseCell_Test_MultiOutflow_WithParams_Yielding::CursorState_t (size: 0x4)
namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding_CursorState_t {
    constexpr std::ptrdiff_t nTestStep = 0x0; // int32
}

// CPulseTurtleGraphicsCursor (size: 0xe8)
namespace CPulseTurtleGraphicsCursor {
    constexpr std::ptrdiff_t m_Color = 0xd0; // Color
    constexpr std::ptrdiff_t m_vPos = 0xd4; // Vector2D
    constexpr std::ptrdiff_t m_flHeadingDeg = 0xdc; // float32
    constexpr std::ptrdiff_t m_bPenUp = 0xe0; // bool
}

// CPulseCell_TestWaitWithCursorState::CursorState_t (size: 0x8)
namespace CPulseCell_TestWaitWithCursorState_CursorState_t {
    constexpr std::ptrdiff_t flWaitValue = 0x0; // float32
    constexpr std::ptrdiff_t bFailOnCancel = 0x4; // bool
}

// CPulseCell_Inflow_BaseEntrypoint (size: 0x80)
namespace CPulseCell_Inflow_BaseEntrypoint {
    constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
}

// CPulseCell_Test_MultiInflow_NoDefault (size: 0x48)
namespace CPulseCell_Test_MultiInflow_NoDefault {
}

// CPulseCell_WaitForCursorsWithTagBase (size: 0x98)
namespace CPulseCell_WaitForCursorsWithTagBase {
    constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
    constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
}

// CPulse_InvokeBinding (size: 0xb0)
namespace CPulse_InvokeBinding {
    constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
    constexpr std::ptrdiff_t m_FuncName = 0x30; // PulseSymbol_t
    constexpr std::ptrdiff_t m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
    constexpr std::ptrdiff_t m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
    constexpr std::ptrdiff_t m_nSrcInstruction = 0x48; // int32
}

// CPulseCell_IntervalTimer (size: 0xd8)
namespace CPulseCell_IntervalTimer {
    constexpr std::ptrdiff_t m_Completed = 0x48; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_OnInterval = 0x90; // SignatureOutflow_Continue
}

// CPulseTestScriptLib (size: 0x1)
namespace CPulseTestScriptLib {
}

// CPulseCell_BaseLerp (size: 0x90)
namespace CPulseCell_BaseLerp {
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
}

// CPulseCell_Value_TestValue50 (size: 0x48)
namespace CPulseCell_Value_TestValue50 {
}

// CPulseCell_Test_MultiOutflow_WithParams_Yielding (size: 0x1b0)
namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding {
    constexpr std::ptrdiff_t m_Out1 = 0x48; // SignatureOutflow_Continue
    constexpr std::ptrdiff_t m_AsyncChild1 = 0x90; // SignatureOutflow_Continue
    constexpr std::ptrdiff_t m_AsyncChild2 = 0xd8; // SignatureOutflow_Continue
    constexpr std::ptrdiff_t m_YieldResume1 = 0x120; // SignatureOutflow_Resume
    constexpr std::ptrdiff_t m_YieldResume2 = 0x168; // SignatureOutflow_Resume
}

// CPulseCell_Value_Curve (size: 0x88)
namespace CPulseCell_Value_Curve {
    constexpr std::ptrdiff_t m_Curve = 0x48; // CPiecewiseCurve
}

// CPulseCell_Inflow_EventHandler (size: 0x90)
namespace CPulseCell_Inflow_EventHandler {
    constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
}

// CPulseCell_BaseFlow (size: 0x48)
namespace CPulseCell_BaseFlow {
}

// CPulseCell_Step_TestDomainTracepoint (size: 0x48)
namespace CPulseCell_Step_TestDomainTracepoint {
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

// CPulseGraphInstance_TestDomain_Derived (size: 0x168)
namespace CPulseGraphInstance_TestDomain_Derived {
    constexpr std::ptrdiff_t m_nInstanceValueX = 0x160; // int32
}

// CPulseCell_WaitForCursorsWithTagBase::CursorState_t (size: 0x30)
namespace CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
}

// CPulseArraylib (size: 0x1)
namespace CPulseArraylib {
}

// CPulseGraphInstance_TestDomain (size: 0x160)
namespace CPulseGraphInstance_TestDomain {
    constexpr std::ptrdiff_t m_bIsRunningUnitTests = 0x130; // bool
    constexpr std::ptrdiff_t m_bExplicitTimeStepping = 0x131; // bool
    constexpr std::ptrdiff_t m_bExpectingToDestroyWithYieldedCursors = 0x132; // bool
    constexpr std::ptrdiff_t m_bQuietTracepoints = 0x133; // bool
    constexpr std::ptrdiff_t m_bExpectingCursorTerminatedDueToMaxInstructions = 0x134; // bool
    constexpr std::ptrdiff_t m_nCursorsTerminatedDueToMaxInstructions = 0x138; // int32
    constexpr std::ptrdiff_t m_nNextValidateIndex = 0x13c; // int32
    constexpr std::ptrdiff_t m_Tracepoints = 0x140; // CUtlVector< CUtlString >
    constexpr std::ptrdiff_t m_bTestYesOrNoPath = 0x158; // bool
}

// SignatureOutflow_Continue (size: 0x48)
namespace SignatureOutflow_Continue {
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

// CPulseCell_Outflow_TestExplicitYesNo (size: 0xd8)
namespace CPulseCell_Outflow_TestExplicitYesNo {
    constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_No = 0x90; // CPulse_OutflowConnection
}

// CPulseCell_Outflow_TestRandomYesNo (size: 0xd8)
namespace CPulseCell_Outflow_TestRandomYesNo {
    constexpr std::ptrdiff_t m_Yes = 0x48; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_No = 0x90; // CPulse_OutflowConnection
}

// CPulseCell_Outflow_CycleOrdered::InstanceState_t (size: 0x4)
namespace CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
}

// CPulseCell_LimitCount::InstanceState_t (size: 0x4)
namespace CPulseCell_LimitCount_InstanceState_t {
    constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
}

// FakeEntity_tAPI (size: 0x8)
namespace FakeEntity_tAPI {
}

// CPulseCell_Test_MultiInflow_WithDefault (size: 0x48)
namespace CPulseCell_Test_MultiInflow_WithDefault {
}

// CPulseCell_Step_DebugLog (size: 0x48)
namespace CPulseCell_Step_DebugLog {
}

// CPulseCell_BaseYieldingInflow (size: 0x48)
namespace CPulseCell_BaseYieldingInflow {
}

// PulseNodeDynamicOutflows_t (size: 0x18)
namespace PulseNodeDynamicOutflows_t {
    constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t >
}

// CPulseCell_IsRequirementValid::Criteria_t (size: 0x1)
namespace CPulseCell_IsRequirementValid_Criteria_t {
    constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
}

// CPulseCell_Inflow_ObservableVariableListener (size: 0x88)
namespace CPulseCell_Inflow_ObservableVariableListener {
    constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
    constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
}

// CPulseCell_Outflow_CycleOrdered (size: 0x60)
namespace CPulseCell_Outflow_CycleOrdered {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

// PulseSelectorOutflowList_t (size: 0x18)
namespace PulseSelectorOutflowList_t {
    constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector< OutflowWithRequirements_t >
}

// CPulseGraphInstance_TurtleGraphics (size: 0x140)
namespace CPulseGraphInstance_TurtleGraphics {
}

// CPulseCell_Val_TestDomainGetEntityName (size: 0x48)
namespace CPulseCell_Val_TestDomainGetEntityName {
}

// CPulseCell_Inflow_Wait (size: 0x90)
namespace CPulseCell_Inflow_Wait {
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
}

// CPulseCell_TestWaitWithCursorState (size: 0x120)
namespace CPulseCell_TestWaitWithCursorState {
    constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_WakeCancel = 0x90; // CPulse_ResumePoint
    constexpr std::ptrdiff_t m_WakeFail = 0xd8; // CPulse_ResumePoint
}

// CPulseCell_Outflow_CycleShuffled (size: 0x60)
namespace CPulseCell_Outflow_CycleShuffled {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

// CPulseCell_Inflow_Method (size: 0xc8)
namespace CPulseCell_Inflow_Method {
    constexpr std::ptrdiff_t m_MethodName = 0x80; // PulseSymbol_t
    constexpr std::ptrdiff_t m_Description = 0x90; // CUtlString
    constexpr std::ptrdiff_t m_bIsPublic = 0x98; // bool
    constexpr std::ptrdiff_t m_ReturnType = 0xa0; // CPulseValueFullType
    constexpr std::ptrdiff_t m_Args = 0xb8; // CUtlLeanVector< CPulseRuntimeMethodArg >
}

// CPulseCell_BaseValue (size: 0x48)
namespace CPulseCell_BaseValue {
}

// CPulseCell_BooleanSwitchState (size: 0x198)
namespace CPulseCell_BooleanSwitchState {
    constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
    constexpr std::ptrdiff_t m_SubGraph = 0xc0; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_WhenTrue = 0x108; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_WhenFalse = 0x150; // CPulse_OutflowConnection
}

// FakeEntityDerivedB_tAPI (size: 0x8)
namespace FakeEntityDerivedB_tAPI {
}

// CPulseCell_Inflow_Yield (size: 0x90)
namespace CPulseCell_Inflow_Yield {
    constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
}

// CPulseMathlib (size: 0x1)
namespace CPulseMathlib {
}

// CPulseCell_Unknown (size: 0x58)
namespace CPulseCell_Unknown {
    constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
}

// CPulseCell_Outflow_CycleRandom (size: 0x60)
namespace CPulseCell_Outflow_CycleRandom {
    constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
}

// CPulseCell_Step_PublicOutput (size: 0x50)
namespace CPulseCell_Step_PublicOutput {
    constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
}

// CPulseCell_Val_TestDomainFindEntityByName (size: 0x48)
namespace CPulseCell_Val_TestDomainFindEntityByName {
}

// CPulse_BlackboardReference (size: 0x28)
namespace CPulse_BlackboardReference {
    constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CStrongHandle< InfoForResourceTypeIPulseGraphDef >
    constexpr std::ptrdiff_t m_BlackboardResource = 0x8; // PulseSymbol_t
    constexpr std::ptrdiff_t m_nNodeID = 0x18; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_NodeName = 0x20; // CGlobalSymbol
}

// CPulseCell_Value_RandomInt (size: 0x48)
namespace CPulseCell_Value_RandomInt {
}

// CPulseCell_Step_TestDomainEntFire (size: 0x50)
namespace CPulseCell_Step_TestDomainEntFire {
    constexpr std::ptrdiff_t m_Input = 0x48; // CUtlString
}

// FakeEntityDerivedA_tAPI (size: 0x8)
namespace FakeEntityDerivedA_tAPI {
}

// CPulseCell_ExampleSelector (size: 0x60)
namespace CPulseCell_ExampleSelector {
    constexpr std::ptrdiff_t m_OutflowList = 0x48; // PulseSelectorOutflowList_t
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

// CPulseCell_InlineNodeSkipSelector (size: 0xb0)
namespace CPulseCell_InlineNodeSkipSelector {
    constexpr std::ptrdiff_t m_nFlowNodeID = 0x48; // PulseDocNodeID_t
    constexpr std::ptrdiff_t m_bAnd = 0x4c; // bool
    constexpr std::ptrdiff_t m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
    constexpr std::ptrdiff_t m_FailOutflow = 0x68; // CPulse_OutflowConnection
}

// CPulseCell_ExampleCriteria::Criteria_t (size: 0xc)
namespace CPulseCell_ExampleCriteria_Criteria_t {
    constexpr std::ptrdiff_t m_flFloatValue1 = 0x0; // float32
    constexpr std::ptrdiff_t m_flFloatValue2 = 0x4; // float32
    constexpr std::ptrdiff_t m_bMyBool = 0x8; // bool
}

// CPulseCell_ExampleCriteria (size: 0x48)
namespace CPulseCell_ExampleCriteria {
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

// PulseObservableBoolExpression_t (size: 0x78)
namespace PulseObservableBoolExpression_t {
    constexpr std::ptrdiff_t m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
    constexpr std::ptrdiff_t m_DependentObservableVars = 0x48; // CUtlVector< PulseRuntimeVarIndex_t >
    constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60; // CUtlVector< PulseRuntimeBlackboardReferenceIndex_t >
}

// CPulseCell_LimitCount::Criteria_t (size: 0x1)
namespace CPulseCell_LimitCount_Criteria_t {
    constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
}

// CPulseCell_Step_TestDomainCreateFakeEntity (size: 0x48)
namespace CPulseCell_Step_TestDomainCreateFakeEntity {
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

}
}
}

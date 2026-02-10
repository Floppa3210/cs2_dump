// Generated using CS2 ULTIMATE DUMPER
// 2026-02-10 19:56:33

#pragma once

#include <cstdint>
#include <cstddef>

namespace cs2 {
namespace animationsystem_dll {

// CPulseCell_WaitForCursorsWithTag (size: 0xa0)
struct CPulseCell_WaitForCursorsWithTag {
    bool m_bTagSelfWhenComplete; // 0x98
    PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x9c
};

// CPulseCell_Base (size: 0x48)
struct CPulseCell_Base {
    PulseDocNodeID_t m_nEditorNodeID; // 0x8
};

// CPulse_ResumePoint (size: 0x48)
struct CPulse_ResumePoint {
};

// CPulseCell_PickBestOutflowSelector (size: 0x68)
struct CPulseCell_PickBestOutflowSelector {
    PulseBestOutflowRules_t m_nCheckType; // 0x48
    PulseSelectorOutflowList_t m_OutflowList; // 0x50
};

// CParticleBindingRealPulse (size: 0x138)
struct CParticleBindingRealPulse {
};

// CPulseCell_WaitForObservable (size: 0x108)
struct CPulseCell_WaitForObservable {
    PulseObservableBoolExpression_t m_Condition; // 0x48
    CPulse_ResumePoint m_OnTrue; // 0xc0
};

// CPulse_OutflowConnection (size: 0x48)
struct CPulse_OutflowConnection {
    PulseSymbol_t m_SourceOutflowName; // 0x0
    PulseRuntimeChunkIndex_t m_nDestChunk; // 0x10
    int32_t m_nInstruction; // 0x14
    PulseRegisterMap_t m_OutflowRegisterMap; // 0x18
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

// CPulseCell_FireCursors (size: 0xf8)
struct CPulseCell_FireCursors {
    CUtlVector<T> m_Outflows; // 0x48
    bool m_bWaitForChildOutflows; // 0x60
    CPulse_ResumePoint m_OnFinished; // 0x68
    CPulse_ResumePoint m_OnCanceled; // 0xb0
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

// CPulseCell_Value_Gradient (size: 0x60)
struct CPulseCell_Value_Gradient {
    CColorGradient m_Gradient; // 0x48
};

// CPulseCursorFuncs (size: 0x1)
struct CPulseCursorFuncs {
};

// PulseNodeDynamicOutflows_t::DynamicOutflow_t (size: 0x50)
struct PulseNodeDynamicOutflows_t_DynamicOutflow_t {
    CGlobalSymbol m_OutflowID; // 0x0
    CPulse_OutflowConnection m_Connection; // 0x8
};

// CBasePulseGraphInstance (size: 0x118)
struct CBasePulseGraphInstance {
};

// CPulseCell_Inflow_GraphHook (size: 0x90)
struct CPulseCell_Inflow_GraphHook {
    PulseSymbol_t m_HookName; // 0x80
};

// SignatureOutflow_Resume (size: 0x48)
struct SignatureOutflow_Resume {
};

// CPulseCell_Inflow_BaseEntrypoint (size: 0x80)
struct CPulseCell_Inflow_BaseEntrypoint {
    PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48
    PulseRegisterMap_t m_RegisterMap; // 0x50
};

// CPulseCell_WaitForCursorsWithTagBase (size: 0x98)
struct CPulseCell_WaitForCursorsWithTagBase {
    int32_t m_nCursorsAllowedToWait; // 0x48
    CPulse_ResumePoint m_WaitComplete; // 0x50
};

// CPulse_InvokeBinding (size: 0xb0)
struct CPulse_InvokeBinding {
    PulseRegisterMap_t m_RegisterMap; // 0x0
    PulseSymbol_t m_FuncName; // 0x30
    PulseRuntimeCellIndex_t m_nCellIndex; // 0x40
    PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x44
    int32_t m_nSrcInstruction; // 0x48
};

// CPulseCell_IntervalTimer (size: 0xd8)
struct CPulseCell_IntervalTimer {
    CPulse_ResumePoint m_Completed; // 0x48
    SignatureOutflow_Continue m_OnInterval; // 0x90
};

// CPulseTestScriptLib (size: 0x1)
struct CPulseTestScriptLib {
};

// CPulseCell_BaseLerp (size: 0x90)
struct CPulseCell_BaseLerp {
    CPulse_ResumePoint m_WakeResume; // 0x48
};

// CPulseCell_Value_Curve (size: 0x88)
struct CPulseCell_Value_Curve {
    CPiecewiseCurve m_Curve; // 0x48
};

// CPulseCell_Inflow_EventHandler (size: 0x90)
struct CPulseCell_Inflow_EventHandler {
    PulseSymbol_t m_EventName; // 0x80
};

// CPulseCell_BaseFlow (size: 0x48)
struct CPulseCell_BaseFlow {
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

// CPulseCell_WaitForCursorsWithTagBase::CursorState_t (size: 0x30)
struct CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    PulseSymbol_t m_TagName; // 0x0
};

// CPulseArraylib (size: 0x1)
struct CPulseArraylib {
};

// SignatureOutflow_Continue (size: 0x48)
struct SignatureOutflow_Continue {
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

// CPulseCell_Outflow_CycleOrdered::InstanceState_t (size: 0x4)
struct CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    int32_t m_nNextIndex; // 0x0
};

// CParticleCollectionBindingInstance (size: 0x138)
struct CParticleCollectionBindingInstance {
};

// CPulseCell_LimitCount::InstanceState_t (size: 0x4)
struct CPulseCell_LimitCount_InstanceState_t {
    int32_t m_nCurrentCount; // 0x0
};

// CPulseCell_Step_DebugLog (size: 0x48)
struct CPulseCell_Step_DebugLog {
};

// CPulseCell_BaseYieldingInflow (size: 0x48)
struct CPulseCell_BaseYieldingInflow {
};

// PulseNodeDynamicOutflows_t (size: 0x18)
struct PulseNodeDynamicOutflows_t {
    CUtlVector<T> m_Outflows; // 0x0
};

// CPulseCell_IsRequirementValid::Criteria_t (size: 0x1)
struct CPulseCell_IsRequirementValid_Criteria_t {
    bool m_bIsValid; // 0x0
};

// CPulseCell_Inflow_ObservableVariableListener (size: 0x88)
struct CPulseCell_Inflow_ObservableVariableListener {
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReference; // 0x80
    bool m_bSelfReference; // 0x82
};

// CPulseCell_Outflow_CycleOrdered (size: 0x60)
struct CPulseCell_Outflow_CycleOrdered {
    CUtlVector<T> m_Outputs; // 0x48
};

// PulseSelectorOutflowList_t (size: 0x18)
struct PulseSelectorOutflowList_t {
    CUtlVector<T> m_Outflows; // 0x0
};

// CPulseCell_Inflow_Wait (size: 0x90)
struct CPulseCell_Inflow_Wait {
    CPulse_ResumePoint m_WakeResume; // 0x48
};

// CPulseCell_Outflow_CycleShuffled (size: 0x60)
struct CPulseCell_Outflow_CycleShuffled {
    CUtlVector<T> m_Outputs; // 0x48
};

// CPulseCell_Inflow_Method (size: 0xc8)
struct CPulseCell_Inflow_Method {
    PulseSymbol_t m_MethodName; // 0x80
    CUtlString m_Description; // 0x90
    bool m_bIsPublic; // 0x98
    CPulseValueFullType m_ReturnType; // 0xa0
    CUtlLeanVector< CPulseRuntimeMethodArg > m_Args; // 0xb8
};

// CPulseCell_BaseValue (size: 0x48)
struct CPulseCell_BaseValue {
};

// CPulseCell_BooleanSwitchState (size: 0x198)
struct CPulseCell_BooleanSwitchState {
    PulseObservableBoolExpression_t m_Condition; // 0x48
    CPulse_OutflowConnection m_SubGraph; // 0xc0
    CPulse_OutflowConnection m_WhenTrue; // 0x108
    CPulse_OutflowConnection m_WhenFalse; // 0x150
};

// CPulseCell_Inflow_Yield (size: 0x90)
struct CPulseCell_Inflow_Yield {
    CPulse_ResumePoint m_UnyieldResume; // 0x48
};

// CPulseMathlib (size: 0x1)
struct CPulseMathlib {
};

// CPulseCell_Unknown (size: 0x58)
struct CPulseCell_Unknown {
    KeyValues3 m_UnknownKeys; // 0x48
};

// CPulseCell_Outflow_CycleRandom (size: 0x60)
struct CPulseCell_Outflow_CycleRandom {
    CUtlVector<T> m_Outputs; // 0x48
};

// CPulseCell_Step_PublicOutput (size: 0x50)
struct CPulseCell_Step_PublicOutput {
    PulseRuntimeOutputIndex_t m_OutputIndex; // 0x48
};

// CPulse_BlackboardReference (size: 0x28)
struct CPulse_BlackboardReference {
    CStrongHandle<T> m_hBlackboardResource; // 0x0
    PulseSymbol_t m_BlackboardResource; // 0x8
    PulseDocNodeID_t m_nNodeID; // 0x18
    CGlobalSymbol m_NodeName; // 0x20
};

// CPulseCell_Value_RandomInt (size: 0x48)
struct CPulseCell_Value_RandomInt {
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

// CPulseCell_InlineNodeSkipSelector (size: 0xb0)
struct CPulseCell_InlineNodeSkipSelector {
    PulseDocNodeID_t m_nFlowNodeID; // 0x48
    bool m_bAnd; // 0x4c
    PulseSelectorOutflowList_t m_PassOutflow; // 0x50
    CPulse_OutflowConnection m_FailOutflow; // 0x68
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

// PulseObservableBoolExpression_t (size: 0x78)
struct PulseObservableBoolExpression_t {
    CPulse_OutflowConnection m_EvaluateConnection; // 0x0
    CUtlVector<T> m_DependentObservableVars; // 0x48
    CUtlVector<T> m_DependentObservableBlackboardReferences; // 0x60
};

// CPulseCell_LimitCount::Criteria_t (size: 0x1)
struct CPulseCell_LimitCount_Criteria_t {
    bool m_bLimitCountPasses; // 0x0
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

} // namespace animationsystem_dll
} // namespace cs2

// Auto-generated module SDK: particles.dll
#pragma once

#include "../sdk_types.hpp"

namespace cs2 {
struct CPulseCell_WaitForCursorsWithTag {
    // 0x98
    bool m_bTagSelfWhenComplete;
    // 0x9c
    PulseCursorCancelPriority_t m_nDesiredKillPriority;
};
struct CPulseCell_Base {
    // 0x8
    PulseDocNodeID_t m_nEditorNodeID;
};
struct CPulse_ResumePoint {
};
struct CPulseCell_PickBestOutflowSelector {
    // 0x48
    PulseBestOutflowRules_t m_nCheckType;
    // 0x50
    PulseSelectorOutflowList_t m_OutflowList;
};
struct CParticleBindingRealPulse {
};
struct CPulseCell_WaitForObservable {
    // 0x48
    PulseObservableBoolExpression_t m_Condition;
    // 0xc0
    CPulse_ResumePoint m_OnTrue;
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
struct CPulseCell_Value_Gradient {
    // 0x48
    CColorGradient m_Gradient;
};
struct CPulseCursorFuncs {
};
struct PulseNodeDynamicOutflows_t_DynamicOutflow_t {
    // 0x0
    CGlobalSymbol m_OutflowID;
    // 0x8
    CPulse_OutflowConnection m_Connection;
};
struct CBasePulseGraphInstance {
};
struct CPulseCell_Inflow_GraphHook {
    // 0x80
    PulseSymbol_t m_HookName;
};
struct SignatureOutflow_Resume {
};
struct CPulseCell_Inflow_BaseEntrypoint {
    // 0x48
    PulseRuntimeChunkIndex_t m_EntryChunk;
    // 0x50
    PulseRegisterMap_t m_RegisterMap;
};
struct CPulseCell_WaitForCursorsWithTagBase {
    // 0x48
    int32_t m_nCursorsAllowedToWait;
    // 0x50
    CPulse_ResumePoint m_WaitComplete;
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
struct CPulseCell_IntervalTimer {
    // 0x48
    CPulse_ResumePoint m_Completed;
    // 0x90
    SignatureOutflow_Continue m_OnInterval;
};
struct CPulseTestScriptLib {
};
struct CPulseCell_BaseLerp {
    // 0x48
    CPulse_ResumePoint m_WakeResume;
};
struct CPulseCell_Value_Curve {
    // 0x48
    CPiecewiseCurve m_Curve;
};
struct CPulseCell_Inflow_EventHandler {
    // 0x80
    PulseSymbol_t m_EventName;
};
struct CPulseCell_BaseFlow {
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
struct CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
    // 0x0
    PulseSymbol_t m_TagName;
};
struct CPulseArraylib {
};
struct SignatureOutflow_Continue {
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
struct CPulseCell_Outflow_CycleOrdered_InstanceState_t {
    // 0x0
    int32_t m_nNextIndex;
};
struct CParticleCollectionBindingInstance {
};
struct CPulseCell_LimitCount_InstanceState_t {
    // 0x0
    int32_t m_nCurrentCount;
};
struct CPulseCell_Step_DebugLog {
};
struct CPulseCell_BaseYieldingInflow {
};
struct PulseNodeDynamicOutflows_t {
    // 0x0
    CUtlVector<T> m_Outflows;
};
struct CPulseCell_IsRequirementValid_Criteria_t {
    // 0x0
    bool m_bIsValid;
};
struct CPulseCell_Inflow_ObservableVariableListener {
    // 0x80
    PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReference;
    // 0x82
    bool m_bSelfReference;
};
struct CPulseCell_Outflow_CycleOrdered {
    // 0x48
    CUtlVector<T> m_Outputs;
};
struct PulseSelectorOutflowList_t {
    // 0x0
    CUtlVector<T> m_Outflows;
};
struct CPulseCell_Inflow_Wait {
    // 0x48
    CPulse_ResumePoint m_WakeResume;
};
struct CPulseCell_Outflow_CycleShuffled {
    // 0x48
    CUtlVector<T> m_Outputs;
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
struct CPulseCell_BaseValue {
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
struct CPulseCell_Inflow_Yield {
    // 0x48
    CPulse_ResumePoint m_UnyieldResume;
};
struct CPulseMathlib {
};
struct CPulseCell_Unknown {
    // 0x48
    KeyValues3 m_UnknownKeys;
};
struct CPulseCell_Outflow_CycleRandom {
    // 0x48
    CUtlVector<T> m_Outputs;
};
struct CPulseCell_Step_PublicOutput {
    // 0x48
    PulseRuntimeOutputIndex_t m_OutputIndex;
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
struct CPulseCell_Value_RandomInt {
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
struct PulseObservableBoolExpression_t {
    // 0x0
    CPulse_OutflowConnection m_EvaluateConnection;
    // 0x48
    CUtlVector<T> m_DependentObservableVars;
    // 0x60
    CUtlVector<T> m_DependentObservableBlackboardReferences;
};
struct CPulseCell_LimitCount_Criteria_t {
    // 0x0
    bool m_bLimitCountPasses;
};
struct CPulseCell_CursorQueue {
    // 0x98
    int32_t m_nCursorsAllowedToRunParallel;
};
struct CPulseCell_Value_RandomFloat {
};
struct CPulseExecCursor {
};
} // namespace cs2

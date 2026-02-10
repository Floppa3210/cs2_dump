// Auto-generated schemas
#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        namespace particles_dll {
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98;
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9C;
            }
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8;
            }
            namespace CPulse_ResumePoint {
            }
            namespace CPulseCell_PickBestOutflowSelector {
                constexpr std::ptrdiff_t m_nCheckType = 0x48;
                constexpr std::ptrdiff_t m_OutflowList = 0x50;
            }
            namespace CParticleBindingRealPulse {
            }
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48;
                constexpr std::ptrdiff_t m_OnTrue = 0xC0;
            }
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0;
                constexpr std::ptrdiff_t m_nDestChunk = 0x10;
                constexpr std::ptrdiff_t m_nInstruction = 0x14;
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18;
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
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0x48;
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60;
                constexpr std::ptrdiff_t m_OnFinished = 0x68;
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0;
            }
            namespace CPulseCell_Timeline_TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0;
                constexpr std::ptrdiff_t m_EventOutflow = 0x8;
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
            namespace CPulseCell_Value_Gradient {
                constexpr std::ptrdiff_t m_Gradient = 0x48;
            }
            namespace CPulseCursorFuncs {
            }
            namespace PulseNodeDynamicOutflows_t_DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0;
                constexpr std::ptrdiff_t m_Connection = 0x8;
            }
            namespace CBasePulseGraphInstance {
            }
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80;
            }
            namespace SignatureOutflow_Resume {
            }
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48;
                constexpr std::ptrdiff_t m_RegisterMap = 0x50;
            }
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48;
                constexpr std::ptrdiff_t m_WaitComplete = 0x50;
            }
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0;
                constexpr std::ptrdiff_t m_FuncName = 0x30;
                constexpr std::ptrdiff_t m_nCellIndex = 0x40;
                constexpr std::ptrdiff_t m_nSrcChunk = 0x44;
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x48;
            }
            namespace CPulseCell_IntervalTimer {
                constexpr std::ptrdiff_t m_Completed = 0x48;
                constexpr std::ptrdiff_t m_OnInterval = 0x90;
            }
            namespace CPulseTestScriptLib {
            }
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0x48;
            }
            namespace CPulseCell_Value_Curve {
                constexpr std::ptrdiff_t m_Curve = 0x48;
            }
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80;
            }
            namespace CPulseCell_BaseFlow {
            }
            namespace CPulseCell_Outflow_CycleShuffled_InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0;
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20;
            }
            namespace CPulseCell_BaseLerp_CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0;
                constexpr std::ptrdiff_t m_EndTime = 0x4;
            }
            namespace CPulseCell_WaitForCursorsWithTagBase_CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0;
            }
            namespace CPulseArraylib {
            }
            namespace SignatureOutflow_Continue {
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
            namespace CPulseCell_Outflow_CycleOrdered_InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0;
            }
            namespace CParticleCollectionBindingInstance {
            }
            namespace CPulseCell_LimitCount_InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0;
            }
            namespace CPulseCell_Step_DebugLog {
            }
            namespace CPulseCell_BaseYieldingInflow {
            }
            namespace PulseNodeDynamicOutflows_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0;
            }
            namespace CPulseCell_IsRequirementValid_Criteria_t {
                constexpr std::ptrdiff_t m_bIsValid = 0x0;
            }
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_nBlackboardReference = 0x80;
                constexpr std::ptrdiff_t m_bSelfReference = 0x82;
            }
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48;
            }
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0;
            }
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48;
            }
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48;
            }
            namespace CPulseCell_Inflow_Method {
                constexpr std::ptrdiff_t m_MethodName = 0x80;
                constexpr std::ptrdiff_t m_Description = 0x90;
                constexpr std::ptrdiff_t m_bIsPublic = 0x98;
                constexpr std::ptrdiff_t m_ReturnType = 0xA0;
                constexpr std::ptrdiff_t m_Args = 0xB8;
            }
            namespace CPulseCell_BaseValue {
            }
            namespace CPulseCell_BooleanSwitchState {
                constexpr std::ptrdiff_t m_Condition = 0x48;
                constexpr std::ptrdiff_t m_SubGraph = 0xC0;
                constexpr std::ptrdiff_t m_WhenTrue = 0x108;
                constexpr std::ptrdiff_t m_WhenFalse = 0x150;
            }
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0x48;
            }
            namespace CPulseMathlib {
            }
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48;
            }
            namespace CPulseCell_Outflow_CycleRandom {
                constexpr std::ptrdiff_t m_Outputs = 0x48;
            }
            namespace CPulseCell_Step_PublicOutput {
                constexpr std::ptrdiff_t m_OutputIndex = 0x48;
            }
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0;
                constexpr std::ptrdiff_t m_BlackboardResource = 0x8;
                constexpr std::ptrdiff_t m_nNodeID = 0x18;
                constexpr std::ptrdiff_t m_NodeName = 0x20;
            }
            namespace CPulseCell_Value_RandomInt {
            }
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0;
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x10;
                constexpr std::ptrdiff_t m_RegisterMap = 0x18;
                constexpr std::ptrdiff_t m_CallMethodID = 0x48;
                constexpr std::ptrdiff_t m_nSrcChunk = 0x4C;
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x50;
            }
            namespace CPulseCell_InlineNodeSkipSelector {
                constexpr std::ptrdiff_t m_nFlowNodeID = 0x48;
                constexpr std::ptrdiff_t m_bAnd = 0x4C;
                constexpr std::ptrdiff_t m_PassOutflow = 0x50;
                constexpr std::ptrdiff_t m_FailOutflow = 0x68;
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
            namespace PulseObservableBoolExpression_t {
                constexpr std::ptrdiff_t m_EvaluateConnection = 0x0;
                constexpr std::ptrdiff_t m_DependentObservableVars = 0x48;
                constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60;
            }
            namespace CPulseCell_LimitCount_Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0;
            }
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98;
            }
            namespace CPulseCell_Value_RandomFloat {
            }
            namespace CPulseExecCursor {
            }
        }
    }
}

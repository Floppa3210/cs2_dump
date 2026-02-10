// Generated using CS2 ULTIMATE DUMPER
// 2026-02-09 22:45:12

#pragma once

#include <cstdint>

namespace cs2 {
namespace enums {

// Module: animationsystem.dll.dll
enum class PulseBestOutflowRules_t : int64_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum class PulseCursorCancelPriority_t : int64_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum class PulseMethodCallMode_t : int64_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

// Module: client.dll.dll
enum class C_BaseCombatCharacter_WaterWakeMode_t : int64_t {
    WATER_WAKE_NONE = 0,
    WATER_WAKE_IDLE = 1,
    WATER_WAKE_WALKING = 2,
    WATER_WAKE_RUNNING = 3,
    WATER_WAKE_WATER_OVERHEAD = 4,
};

enum class PulseBestOutflowRules_t : int64_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum class PulseCursorCancelPriority_t : int64_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum class PulseMethodCallMode_t : int64_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

// Module: particles.dll.dll
enum class PulseBestOutflowRules_t : int64_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum class PulseCursorCancelPriority_t : int64_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum class PulseMethodCallMode_t : int64_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

// Module: pulse_system.dll.dll
enum class PulseBestOutflowRules_t : int64_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum class PulseTestEnumShape_t : int64_t {
    CIRCLE = 100,
    SQUARE = 200,
    TRIANGLE = 300,
};

enum class PulseCursorCancelPriority_t : int64_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum class PulseMethodCallMode_t : int64_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

enum class PulseTestEnumColor_t : int64_t {
    BLACK = 0,
    WHITE = 1,
    RED = 2,
    GREEN = 3,
    BLUE = 4,
};

// Module: server.dll.dll
enum class CLogicBranchList_LogicBranchListenerLastState_t : int64_t {
    LOGIC_BRANCH_LISTENER_NOT_INIT = 0,
    LOGIC_BRANCH_LISTENER_ALL_TRUE = 1,
    LOGIC_BRANCH_LISTENER_ALL_FALSE = 2,
    LOGIC_BRANCH_LISTENER_MIXED = 3,
};

enum class CFuncMover_Move_t : int64_t {
    MOVE_LOOP = 0,
    MOVE_OSCILLATE = 1,
    MOVE_STOP_AT_END = 2,
};

enum class CFuncRotator_Rotate_t : int64_t {
    ROTATE_LOOP = 0,
    ROTATE_OSCILLATE = 1,
    ROTATE_STOP_AT_END = 2,
    ROTATE_LOOK_AT_TARGET = 3,
    ROTATE_LOOK_AT_TARGET_ONLY_YAW = 4,
    ROTATE_RETURN_TO_INITIAL_ORIENTATION = 5,
};

enum class PulseBestOutflowRules_t : int64_t {
    SORT_BY_NUMBER_OF_VALID_CRITERIA = 0,
    SORT_BY_OUTFLOW_INDEX = 1,
};

enum class CPhysicsProp_CrateType_t : int64_t {
    CRATE_SPECIFIC_ITEM = 0,
    CRATE_TYPE_COUNT = 1,
};

enum class PulseCursorCancelPriority_t : int64_t {
    None = 0,
    CancelOnSucceeded = 1,
    SoftCancel = 2,
    HardCancel = 3,
};

enum class PulseMethodCallMode_t : int64_t {
    SYNC_WAIT_FOR_COMPLETION = 0,
    ASYNC_FIRE_AND_FORGET = 1,
};

enum class CFuncMover_FollowConstraint_t : int64_t {
    FOLLOW_CONSTRAINT_DISTANCE = 0,
    FOLLOW_CONSTRAINT_SPRING = 1,
};

enum class CFuncMover_FollowEntityDirection_t : int64_t {
    FOLLOW_ENTITY_BIDIRECTIONAL = 0,
    FOLLOW_ENTITY_FORWARD = 1,
    FOLLOW_ENTITY_REVERSE = 2,
};

enum class CFuncMover_TransitionToPathNodeAction_t : int64_t {
    TRANSITION_TO_PATH_NODE_ACTION_NONE = 0,
    TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 1,
    TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 2,
    TRANSITION_TO_PATH_NODE_TRANSITIONING = 3,
};

enum class CFuncMover_OrientationUpdate_t : int64_t {
    ORIENTATION_FORWARD_PATH = 0,
    ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 1,
    ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 2,
    ORIENTATION_MATCH_CONTROL_POINT = 3,
    ORIENTATION_FIXED = 4,
    ORIENTATION_FACE_PLAYER = 5,
    ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 6,
    ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 7,
    ORIENTATION_FACE_ENTITY = 8,
};

} // namespace enums
} // namespace cs2

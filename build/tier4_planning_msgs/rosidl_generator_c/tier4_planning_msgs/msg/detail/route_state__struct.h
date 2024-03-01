// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/RouteState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  tier4_planning_msgs__msg__RouteState__UNKNOWN = 0
};

/// Constant 'INITIALIZING'.
enum
{
  tier4_planning_msgs__msg__RouteState__INITIALIZING = 1
};

/// Constant 'UNSET'.
enum
{
  tier4_planning_msgs__msg__RouteState__UNSET = 2
};

/// Constant 'ROUTING'.
enum
{
  tier4_planning_msgs__msg__RouteState__ROUTING = 3
};

/// Constant 'SET'.
enum
{
  tier4_planning_msgs__msg__RouteState__SET = 4
};

/// Constant 'REROUTING'.
enum
{
  tier4_planning_msgs__msg__RouteState__REROUTING = 5
};

/// Constant 'ARRIVED'.
enum
{
  tier4_planning_msgs__msg__RouteState__ARRIVED = 6
};

/// Constant 'ABORTED'.
enum
{
  tier4_planning_msgs__msg__RouteState__ABORTED = 7
};

/// Constant 'INTERRUPTED'.
enum
{
  tier4_planning_msgs__msg__RouteState__INTERRUPTED = 8
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/RouteState in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__RouteState
{
  builtin_interfaces__msg__Time stamp;
  uint8_t state;
} tier4_planning_msgs__msg__RouteState;

// Struct for a sequence of tier4_planning_msgs__msg__RouteState.
typedef struct tier4_planning_msgs__msg__RouteState__Sequence
{
  tier4_planning_msgs__msg__RouteState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__RouteState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_H_

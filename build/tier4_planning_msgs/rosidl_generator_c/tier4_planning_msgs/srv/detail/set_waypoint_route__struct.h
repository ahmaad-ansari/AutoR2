// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:srv/SetWaypointRoute.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__SRV__DETAIL__SET_WAYPOINT_ROUTE__STRUCT_H_
#define TIER4_PLANNING_MSGS__SRV__DETAIL__SET_WAYPOINT_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'goal_pose'
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in srv/SetWaypointRoute in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__srv__SetWaypointRoute_Request
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose goal_pose;
  geometry_msgs__msg__Pose__Sequence waypoints;
  unique_identifier_msgs__msg__UUID uuid;
  bool allow_modification;
} tier4_planning_msgs__srv__SetWaypointRoute_Request;

// Struct for a sequence of tier4_planning_msgs__srv__SetWaypointRoute_Request.
typedef struct tier4_planning_msgs__srv__SetWaypointRoute_Request__Sequence
{
  tier4_planning_msgs__srv__SetWaypointRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__srv__SetWaypointRoute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.h"

// Struct defined in srv/SetWaypointRoute in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__srv__SetWaypointRoute_Response
{
  autoware_common_msgs__msg__ResponseStatus status;
} tier4_planning_msgs__srv__SetWaypointRoute_Response;

// Struct for a sequence of tier4_planning_msgs__srv__SetWaypointRoute_Response.
typedef struct tier4_planning_msgs__srv__SetWaypointRoute_Response__Sequence
{
  tier4_planning_msgs__srv__SetWaypointRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__srv__SetWaypointRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__SRV__DETAIL__SET_WAYPOINT_ROUTE__STRUCT_H_

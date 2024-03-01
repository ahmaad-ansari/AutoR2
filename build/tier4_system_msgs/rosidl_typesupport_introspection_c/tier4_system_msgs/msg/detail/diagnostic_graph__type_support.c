// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_system_msgs:msg/DiagnosticGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_system_msgs/msg/detail/diagnostic_graph__rosidl_typesupport_introspection_c.h"
#include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_system_msgs/msg/detail/diagnostic_graph__functions.h"
#include "tier4_system_msgs/msg/detail/diagnostic_graph__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `nodes`
#include "tier4_system_msgs/msg/diagnostic_node.h"
// Member `nodes`
#include "tier4_system_msgs/msg/detail/diagnostic_node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_system_msgs__msg__DiagnosticGraph__init(message_memory);
}

void DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_fini_function(void * message_memory)
{
  tier4_system_msgs__msg__DiagnosticGraph__fini(message_memory);
}

size_t DiagnosticGraph__rosidl_typesupport_introspection_c__size_function__DiagnosticNode__nodes(
  const void * untyped_member)
{
  const tier4_system_msgs__msg__DiagnosticNode__Sequence * member =
    (const tier4_system_msgs__msg__DiagnosticNode__Sequence *)(untyped_member);
  return member->size;
}

const void * DiagnosticGraph__rosidl_typesupport_introspection_c__get_const_function__DiagnosticNode__nodes(
  const void * untyped_member, size_t index)
{
  const tier4_system_msgs__msg__DiagnosticNode__Sequence * member =
    (const tier4_system_msgs__msg__DiagnosticNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DiagnosticGraph__rosidl_typesupport_introspection_c__get_function__DiagnosticNode__nodes(
  void * untyped_member, size_t index)
{
  tier4_system_msgs__msg__DiagnosticNode__Sequence * member =
    (tier4_system_msgs__msg__DiagnosticNode__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DiagnosticGraph__rosidl_typesupport_introspection_c__resize_function__DiagnosticNode__nodes(
  void * untyped_member, size_t size)
{
  tier4_system_msgs__msg__DiagnosticNode__Sequence * member =
    (tier4_system_msgs__msg__DiagnosticNode__Sequence *)(untyped_member);
  tier4_system_msgs__msg__DiagnosticNode__Sequence__fini(member);
  return tier4_system_msgs__msg__DiagnosticNode__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__DiagnosticGraph, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__DiagnosticGraph, nodes),  // bytes offset in struct
    NULL,  // default value
    DiagnosticGraph__rosidl_typesupport_introspection_c__size_function__DiagnosticNode__nodes,  // size() function pointer
    DiagnosticGraph__rosidl_typesupport_introspection_c__get_const_function__DiagnosticNode__nodes,  // get_const(index) function pointer
    DiagnosticGraph__rosidl_typesupport_introspection_c__get_function__DiagnosticNode__nodes,  // get(index) function pointer
    DiagnosticGraph__rosidl_typesupport_introspection_c__resize_function__DiagnosticNode__nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_members = {
  "tier4_system_msgs__msg",  // message namespace
  "DiagnosticGraph",  // message name
  2,  // number of fields
  sizeof(tier4_system_msgs__msg__DiagnosticGraph),
  DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_member_array,  // message members
  DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_type_support_handle = {
  0,
  &DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, msg, DiagnosticGraph)() {
  DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, msg, DiagnosticNode)();
  if (!DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_type_support_handle.typesupport_identifier) {
    DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DiagnosticGraph__rosidl_typesupport_introspection_c__DiagnosticGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

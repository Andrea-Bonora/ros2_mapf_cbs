// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cbs_interfaces:msg/AgentPathRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cbs_interfaces/msg/detail/agent_path_request__rosidl_typesupport_introspection_c.h"
#include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cbs_interfaces/msg/detail/agent_path_request__functions.h"
#include "cbs_interfaces/msg/detail/agent_path_request__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `vertex_constraints`
#include "cbs_interfaces/msg/vertex_constraint.h"
// Member `vertex_constraints`
#include "cbs_interfaces/msg/detail/vertex_constraint__rosidl_typesupport_introspection_c.h"
// Member `edge_constraints`
#include "cbs_interfaces/msg/edge_constraint.h"
// Member `edge_constraints`
#include "cbs_interfaces/msg/detail/edge_constraint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cbs_interfaces__msg__AgentPathRequest__init(message_memory);
}

void cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_fini_function(void * message_memory)
{
  cbs_interfaces__msg__AgentPathRequest__fini(message_memory);
}

size_t cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__size_function__AgentPathRequest__vertex_constraints(
  const void * untyped_member)
{
  const cbs_interfaces__msg__VertexConstraint__Sequence * member =
    (const cbs_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_const_function__AgentPathRequest__vertex_constraints(
  const void * untyped_member, size_t index)
{
  const cbs_interfaces__msg__VertexConstraint__Sequence * member =
    (const cbs_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_function__AgentPathRequest__vertex_constraints(
  void * untyped_member, size_t index)
{
  cbs_interfaces__msg__VertexConstraint__Sequence * member =
    (cbs_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__fetch_function__AgentPathRequest__vertex_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cbs_interfaces__msg__VertexConstraint * item =
    ((const cbs_interfaces__msg__VertexConstraint *)
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_const_function__AgentPathRequest__vertex_constraints(untyped_member, index));
  cbs_interfaces__msg__VertexConstraint * value =
    (cbs_interfaces__msg__VertexConstraint *)(untyped_value);
  *value = *item;
}

void cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__assign_function__AgentPathRequest__vertex_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cbs_interfaces__msg__VertexConstraint * item =
    ((cbs_interfaces__msg__VertexConstraint *)
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_function__AgentPathRequest__vertex_constraints(untyped_member, index));
  const cbs_interfaces__msg__VertexConstraint * value =
    (const cbs_interfaces__msg__VertexConstraint *)(untyped_value);
  *item = *value;
}

bool cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__resize_function__AgentPathRequest__vertex_constraints(
  void * untyped_member, size_t size)
{
  cbs_interfaces__msg__VertexConstraint__Sequence * member =
    (cbs_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  cbs_interfaces__msg__VertexConstraint__Sequence__fini(member);
  return cbs_interfaces__msg__VertexConstraint__Sequence__init(member, size);
}

size_t cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__size_function__AgentPathRequest__edge_constraints(
  const void * untyped_member)
{
  const cbs_interfaces__msg__EdgeConstraint__Sequence * member =
    (const cbs_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_const_function__AgentPathRequest__edge_constraints(
  const void * untyped_member, size_t index)
{
  const cbs_interfaces__msg__EdgeConstraint__Sequence * member =
    (const cbs_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_function__AgentPathRequest__edge_constraints(
  void * untyped_member, size_t index)
{
  cbs_interfaces__msg__EdgeConstraint__Sequence * member =
    (cbs_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__fetch_function__AgentPathRequest__edge_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cbs_interfaces__msg__EdgeConstraint * item =
    ((const cbs_interfaces__msg__EdgeConstraint *)
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_const_function__AgentPathRequest__edge_constraints(untyped_member, index));
  cbs_interfaces__msg__EdgeConstraint * value =
    (cbs_interfaces__msg__EdgeConstraint *)(untyped_value);
  *value = *item;
}

void cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__assign_function__AgentPathRequest__edge_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cbs_interfaces__msg__EdgeConstraint * item =
    ((cbs_interfaces__msg__EdgeConstraint *)
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_function__AgentPathRequest__edge_constraints(untyped_member, index));
  const cbs_interfaces__msg__EdgeConstraint * value =
    (const cbs_interfaces__msg__EdgeConstraint *)(untyped_value);
  *item = *value;
}

bool cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__resize_function__AgentPathRequest__edge_constraints(
  void * untyped_member, size_t size)
{
  cbs_interfaces__msg__EdgeConstraint__Sequence * member =
    (cbs_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  cbs_interfaces__msg__EdgeConstraint__Sequence__fini(member);
  return cbs_interfaces__msg__EdgeConstraint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__msg__AgentPathRequest, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__msg__AgentPathRequest, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__msg__AgentPathRequest, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertex_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__msg__AgentPathRequest, vertex_constraints),  // bytes offset in struct
    NULL,  // default value
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__size_function__AgentPathRequest__vertex_constraints,  // size() function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_const_function__AgentPathRequest__vertex_constraints,  // get_const(index) function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_function__AgentPathRequest__vertex_constraints,  // get(index) function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__fetch_function__AgentPathRequest__vertex_constraints,  // fetch(index, &value) function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__assign_function__AgentPathRequest__vertex_constraints,  // assign(index, value) function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__resize_function__AgentPathRequest__vertex_constraints  // resize(index) function pointer
  },
  {
    "edge_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__msg__AgentPathRequest, edge_constraints),  // bytes offset in struct
    NULL,  // default value
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__size_function__AgentPathRequest__edge_constraints,  // size() function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_const_function__AgentPathRequest__edge_constraints,  // get_const(index) function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__get_function__AgentPathRequest__edge_constraints,  // get(index) function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__fetch_function__AgentPathRequest__edge_constraints,  // fetch(index, &value) function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__assign_function__AgentPathRequest__edge_constraints,  // assign(index, value) function pointer
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__resize_function__AgentPathRequest__edge_constraints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_members = {
  "cbs_interfaces__msg",  // message namespace
  "AgentPathRequest",  // message name
  5,  // number of fields
  sizeof(cbs_interfaces__msg__AgentPathRequest),
  cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_member_array,  // message members
  cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_type_support_handle = {
  0,
  &cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, msg, AgentPathRequest)() {
  cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, msg, VertexConstraint)();
  cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, msg, EdgeConstraint)();
  if (!cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_type_support_handle.typesupport_identifier) {
    cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cbs_interfaces__msg__AgentPathRequest__rosidl_typesupport_introspection_c__AgentPathRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

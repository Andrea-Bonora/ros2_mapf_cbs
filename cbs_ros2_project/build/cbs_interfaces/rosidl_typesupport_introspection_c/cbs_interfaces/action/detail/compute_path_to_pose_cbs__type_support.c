// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cbs_interfaces:action/ComputePathToPoseCBS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
#include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"
#include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"


// Include directives for member types
// Member `goal`
// Member `start`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `goal`
// Member `start`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `vertex_constraints`
#include "cbs_interfaces/msg/vertex_constraint.h"
// Member `vertex_constraints`
#include "cbs_interfaces/msg/detail/vertex_constraint__rosidl_typesupport_introspection_c.h"
// Member `edge_constraints`
#include "cbs_interfaces/msg/edge_constraint.h"
// Member `edge_constraints`
#include "cbs_interfaces/msg/detail/edge_constraint__rosidl_typesupport_introspection_c.h"
// Member `planner_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__init(message_memory);
}

void cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_fini_function(void * message_memory)
{
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__fini(message_memory);
}

size_t cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__size_function__ComputePathToPoseCBS_Goal__vertex_constraints(
  const void * untyped_member)
{
  const cbs_interfaces__msg__VertexConstraint__Sequence * member =
    (const cbs_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_const_function__ComputePathToPoseCBS_Goal__vertex_constraints(
  const void * untyped_member, size_t index)
{
  const cbs_interfaces__msg__VertexConstraint__Sequence * member =
    (const cbs_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_function__ComputePathToPoseCBS_Goal__vertex_constraints(
  void * untyped_member, size_t index)
{
  cbs_interfaces__msg__VertexConstraint__Sequence * member =
    (cbs_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__fetch_function__ComputePathToPoseCBS_Goal__vertex_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cbs_interfaces__msg__VertexConstraint * item =
    ((const cbs_interfaces__msg__VertexConstraint *)
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_const_function__ComputePathToPoseCBS_Goal__vertex_constraints(untyped_member, index));
  cbs_interfaces__msg__VertexConstraint * value =
    (cbs_interfaces__msg__VertexConstraint *)(untyped_value);
  *value = *item;
}

void cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__assign_function__ComputePathToPoseCBS_Goal__vertex_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cbs_interfaces__msg__VertexConstraint * item =
    ((cbs_interfaces__msg__VertexConstraint *)
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_function__ComputePathToPoseCBS_Goal__vertex_constraints(untyped_member, index));
  const cbs_interfaces__msg__VertexConstraint * value =
    (const cbs_interfaces__msg__VertexConstraint *)(untyped_value);
  *item = *value;
}

bool cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__resize_function__ComputePathToPoseCBS_Goal__vertex_constraints(
  void * untyped_member, size_t size)
{
  cbs_interfaces__msg__VertexConstraint__Sequence * member =
    (cbs_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  cbs_interfaces__msg__VertexConstraint__Sequence__fini(member);
  return cbs_interfaces__msg__VertexConstraint__Sequence__init(member, size);
}

size_t cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__size_function__ComputePathToPoseCBS_Goal__edge_constraints(
  const void * untyped_member)
{
  const cbs_interfaces__msg__EdgeConstraint__Sequence * member =
    (const cbs_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_const_function__ComputePathToPoseCBS_Goal__edge_constraints(
  const void * untyped_member, size_t index)
{
  const cbs_interfaces__msg__EdgeConstraint__Sequence * member =
    (const cbs_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_function__ComputePathToPoseCBS_Goal__edge_constraints(
  void * untyped_member, size_t index)
{
  cbs_interfaces__msg__EdgeConstraint__Sequence * member =
    (cbs_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__fetch_function__ComputePathToPoseCBS_Goal__edge_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cbs_interfaces__msg__EdgeConstraint * item =
    ((const cbs_interfaces__msg__EdgeConstraint *)
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_const_function__ComputePathToPoseCBS_Goal__edge_constraints(untyped_member, index));
  cbs_interfaces__msg__EdgeConstraint * value =
    (cbs_interfaces__msg__EdgeConstraint *)(untyped_value);
  *value = *item;
}

void cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__assign_function__ComputePathToPoseCBS_Goal__edge_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cbs_interfaces__msg__EdgeConstraint * item =
    ((cbs_interfaces__msg__EdgeConstraint *)
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_function__ComputePathToPoseCBS_Goal__edge_constraints(untyped_member, index));
  const cbs_interfaces__msg__EdgeConstraint * value =
    (const cbs_interfaces__msg__EdgeConstraint *)(untyped_value);
  *item = *value;
}

bool cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__resize_function__ComputePathToPoseCBS_Goal__edge_constraints(
  void * untyped_member, size_t size)
{
  cbs_interfaces__msg__EdgeConstraint__Sequence * member =
    (cbs_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  cbs_interfaces__msg__EdgeConstraint__Sequence__fini(member);
  return cbs_interfaces__msg__EdgeConstraint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_member_array[6] = {
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Goal, goal),  // bytes offset in struct
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
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Goal, start),  // bytes offset in struct
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
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Goal, vertex_constraints),  // bytes offset in struct
    NULL,  // default value
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__size_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // size() function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_const_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // get_const(index) function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // get(index) function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__fetch_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // fetch(index, &value) function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__assign_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // assign(index, value) function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__resize_function__ComputePathToPoseCBS_Goal__vertex_constraints  // resize(index) function pointer
  },
  {
    "edge_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Goal, edge_constraints),  // bytes offset in struct
    NULL,  // default value
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__size_function__ComputePathToPoseCBS_Goal__edge_constraints,  // size() function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_const_function__ComputePathToPoseCBS_Goal__edge_constraints,  // get_const(index) function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__get_function__ComputePathToPoseCBS_Goal__edge_constraints,  // get(index) function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__fetch_function__ComputePathToPoseCBS_Goal__edge_constraints,  // fetch(index, &value) function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__assign_function__ComputePathToPoseCBS_Goal__edge_constraints,  // assign(index, value) function pointer
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__resize_function__ComputePathToPoseCBS_Goal__edge_constraints  // resize(index) function pointer
  },
  {
    "planner_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Goal, planner_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Goal, use_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_members = {
  "cbs_interfaces__action",  // message namespace
  "ComputePathToPoseCBS_Goal",  // message name
  6,  // number of fields
  sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Goal),
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_member_array,  // message members
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_type_support_handle = {
  0,
  &cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_Goal)() {
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, msg, VertexConstraint)();
  cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, msg, EdgeConstraint)();
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cbs_interfaces__action__ComputePathToPoseCBS_Goal__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"


// Include directives for member types
// Member `path`
#include "nav_msgs/msg/path.h"
// Member `path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `planning_time`
#include "builtin_interfaces/msg/duration.h"
// Member `planning_time`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cbs_interfaces__action__ComputePathToPoseCBS_Result__init(message_memory);
}

void cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_fini_function(void * message_memory)
{
  cbs_interfaces__action__ComputePathToPoseCBS_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_member_array[3] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Result, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Result, planning_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_members = {
  "cbs_interfaces__action",  // message namespace
  "ComputePathToPoseCBS_Result",  // message name
  3,  // number of fields
  sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Result),
  cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_member_array,  // message members
  cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_type_support_handle = {
  0,
  &cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_Result)() {
  cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cbs_interfaces__action__ComputePathToPoseCBS_Result__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback__init(message_memory);
}

void cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_fini_function(void * message_memory)
{
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_message_members = {
  "cbs_interfaces__action",  // message namespace
  "ComputePathToPoseCBS_Feedback",  // message name
  1,  // number of fields
  sizeof(cbs_interfaces__action__ComputePathToPoseCBS_Feedback),
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_message_member_array,  // message members
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_message_type_support_handle = {
  0,
  &cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_Feedback)() {
  if (!cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_message_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cbs_interfaces__action__ComputePathToPoseCBS_Feedback__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "cbs_interfaces/action/compute_path_to_pose_cbs.h"
// Member `goal`
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__init(message_memory);
}

void cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_fini_function(void * message_memory)
{
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_members = {
  "cbs_interfaces__action",  // message namespace
  "ComputePathToPoseCBS_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request),
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_member_array,  // message members
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_type_support_handle = {
  0,
  &cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal_Request)() {
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_Goal)();
  if (!cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__init(message_memory);
}

void cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_fini_function(void * message_memory)
{
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_members = {
  "cbs_interfaces__action",  // message namespace
  "ComputePathToPoseCBS_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response),
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_member_array,  // message members
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_type_support_handle = {
  0,
  &cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal_Response)() {
  cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cbs_interfaces__action__ComputePathToPoseCBS_SendGoal_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_service_members = {
  "cbs_interfaces__action",  // service namespace
  "ComputePathToPoseCBS_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_service_type_support_handle = {
  0,
  &cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal)() {
  if (!cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_service_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal_Response)()->data;
  }

  return &cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__init(message_memory);
}

void cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_fini_function(void * message_memory)
{
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_members = {
  "cbs_interfaces__action",  // message namespace
  "ComputePathToPoseCBS_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request),
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_member_array,  // message members
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_type_support_handle = {
  0,
  &cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_GetResult_Request)() {
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Request__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "cbs_interfaces/action/compute_path_to_pose_cbs.h"
// Member `result`
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__init(message_memory);
}

void cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_fini_function(void * message_memory)
{
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_members = {
  "cbs_interfaces__action",  // message namespace
  "ComputePathToPoseCBS_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response),
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_member_array,  // message members
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_type_support_handle = {
  0,
  &cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_GetResult_Response)() {
  cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_Result)();
  if (!cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cbs_interfaces__action__ComputePathToPoseCBS_GetResult_Response__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_service_members = {
  "cbs_interfaces__action",  // service namespace
  "ComputePathToPoseCBS_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_service_type_support_handle = {
  0,
  &cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_GetResult)() {
  if (!cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_service_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_GetResult_Response)()->data;
  }

  return &cbs_interfaces__action__detail__compute_path_to_pose_cbs__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__functions.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "cbs_interfaces/action/compute_path_to_pose_cbs.h"
// Member `feedback`
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__init(message_memory);
}

void cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_fini_function(void * message_memory)
{
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_members = {
  "cbs_interfaces__action",  // message namespace
  "ComputePathToPoseCBS_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage),
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_member_array,  // message members
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_type_support_handle = {
  0,
  &cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_FeedbackMessage)() {
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cbs_interfaces, action, ComputePathToPoseCBS_Feedback)();
  if (!cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cbs_interfaces__action__ComputePathToPoseCBS_FeedbackMessage__rosidl_typesupport_introspection_c__ComputePathToPoseCBS_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

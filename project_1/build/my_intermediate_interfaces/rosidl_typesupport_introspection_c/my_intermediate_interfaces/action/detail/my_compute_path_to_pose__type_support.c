// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_intermediate_interfaces:action/MyComputePathToPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
#include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__functions.h"
#include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"


// Include directives for member types
// Member `goal`
// Member `start`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `goal`
// Member `start`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `vertex_constraints`
#include "my_intermediate_interfaces/msg/vertex_constraint.h"
// Member `vertex_constraints`
#include "my_intermediate_interfaces/msg/detail/vertex_constraint__rosidl_typesupport_introspection_c.h"
// Member `edge_constraints`
#include "my_intermediate_interfaces/msg/edge_constraint.h"
// Member `edge_constraints`
#include "my_intermediate_interfaces/msg/detail/edge_constraint__rosidl_typesupport_introspection_c.h"
// Member `planner_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__action__MyComputePathToPose_Goal__init(message_memory);
}

void my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_fini_function(void * message_memory)
{
  my_intermediate_interfaces__action__MyComputePathToPose_Goal__fini(message_memory);
}

size_t my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__size_function__MyComputePathToPose_Goal__vertex_constraints(
  const void * untyped_member)
{
  const my_intermediate_interfaces__msg__VertexConstraint__Sequence * member =
    (const my_intermediate_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_const_function__MyComputePathToPose_Goal__vertex_constraints(
  const void * untyped_member, size_t index)
{
  const my_intermediate_interfaces__msg__VertexConstraint__Sequence * member =
    (const my_intermediate_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_function__MyComputePathToPose_Goal__vertex_constraints(
  void * untyped_member, size_t index)
{
  my_intermediate_interfaces__msg__VertexConstraint__Sequence * member =
    (my_intermediate_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__fetch_function__MyComputePathToPose_Goal__vertex_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_intermediate_interfaces__msg__VertexConstraint * item =
    ((const my_intermediate_interfaces__msg__VertexConstraint *)
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_const_function__MyComputePathToPose_Goal__vertex_constraints(untyped_member, index));
  my_intermediate_interfaces__msg__VertexConstraint * value =
    (my_intermediate_interfaces__msg__VertexConstraint *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__assign_function__MyComputePathToPose_Goal__vertex_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_intermediate_interfaces__msg__VertexConstraint * item =
    ((my_intermediate_interfaces__msg__VertexConstraint *)
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_function__MyComputePathToPose_Goal__vertex_constraints(untyped_member, index));
  const my_intermediate_interfaces__msg__VertexConstraint * value =
    (const my_intermediate_interfaces__msg__VertexConstraint *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__resize_function__MyComputePathToPose_Goal__vertex_constraints(
  void * untyped_member, size_t size)
{
  my_intermediate_interfaces__msg__VertexConstraint__Sequence * member =
    (my_intermediate_interfaces__msg__VertexConstraint__Sequence *)(untyped_member);
  my_intermediate_interfaces__msg__VertexConstraint__Sequence__fini(member);
  return my_intermediate_interfaces__msg__VertexConstraint__Sequence__init(member, size);
}

size_t my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__size_function__MyComputePathToPose_Goal__edge_constraints(
  const void * untyped_member)
{
  const my_intermediate_interfaces__msg__EdgeConstraint__Sequence * member =
    (const my_intermediate_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_const_function__MyComputePathToPose_Goal__edge_constraints(
  const void * untyped_member, size_t index)
{
  const my_intermediate_interfaces__msg__EdgeConstraint__Sequence * member =
    (const my_intermediate_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_function__MyComputePathToPose_Goal__edge_constraints(
  void * untyped_member, size_t index)
{
  my_intermediate_interfaces__msg__EdgeConstraint__Sequence * member =
    (my_intermediate_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__fetch_function__MyComputePathToPose_Goal__edge_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const my_intermediate_interfaces__msg__EdgeConstraint * item =
    ((const my_intermediate_interfaces__msg__EdgeConstraint *)
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_const_function__MyComputePathToPose_Goal__edge_constraints(untyped_member, index));
  my_intermediate_interfaces__msg__EdgeConstraint * value =
    (my_intermediate_interfaces__msg__EdgeConstraint *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__assign_function__MyComputePathToPose_Goal__edge_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  my_intermediate_interfaces__msg__EdgeConstraint * item =
    ((my_intermediate_interfaces__msg__EdgeConstraint *)
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_function__MyComputePathToPose_Goal__edge_constraints(untyped_member, index));
  const my_intermediate_interfaces__msg__EdgeConstraint * value =
    (const my_intermediate_interfaces__msg__EdgeConstraint *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__resize_function__MyComputePathToPose_Goal__edge_constraints(
  void * untyped_member, size_t size)
{
  my_intermediate_interfaces__msg__EdgeConstraint__Sequence * member =
    (my_intermediate_interfaces__msg__EdgeConstraint__Sequence *)(untyped_member);
  my_intermediate_interfaces__msg__EdgeConstraint__Sequence__fini(member);
  return my_intermediate_interfaces__msg__EdgeConstraint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_member_array[6] = {
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Goal, goal),  // bytes offset in struct
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
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Goal, start),  // bytes offset in struct
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
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Goal, vertex_constraints),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__size_function__MyComputePathToPose_Goal__vertex_constraints,  // size() function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_const_function__MyComputePathToPose_Goal__vertex_constraints,  // get_const(index) function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_function__MyComputePathToPose_Goal__vertex_constraints,  // get(index) function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__fetch_function__MyComputePathToPose_Goal__vertex_constraints,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__assign_function__MyComputePathToPose_Goal__vertex_constraints,  // assign(index, value) function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__resize_function__MyComputePathToPose_Goal__vertex_constraints  // resize(index) function pointer
  },
  {
    "edge_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Goal, edge_constraints),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__size_function__MyComputePathToPose_Goal__edge_constraints,  // size() function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_const_function__MyComputePathToPose_Goal__edge_constraints,  // get_const(index) function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__get_function__MyComputePathToPose_Goal__edge_constraints,  // get(index) function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__fetch_function__MyComputePathToPose_Goal__edge_constraints,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__assign_function__MyComputePathToPose_Goal__edge_constraints,  // assign(index, value) function pointer
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__resize_function__MyComputePathToPose_Goal__edge_constraints  // resize(index) function pointer
  },
  {
    "planner_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Goal, planner_id),  // bytes offset in struct
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
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Goal, use_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_members = {
  "my_intermediate_interfaces__action",  // message namespace
  "MyComputePathToPose_Goal",  // message name
  6,  // number of fields
  sizeof(my_intermediate_interfaces__action__MyComputePathToPose_Goal),
  my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_member_array,  // message members
  my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_Goal)() {
  my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, msg, VertexConstraint)();
  my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, msg, EdgeConstraint)();
  if (!my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__action__MyComputePathToPose_Goal__rosidl_typesupport_introspection_c__MyComputePathToPose_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__functions.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"


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

void my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__action__MyComputePathToPose_Result__init(message_memory);
}

void my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_fini_function(void * message_memory)
{
  my_intermediate_interfaces__action__MyComputePathToPose_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_member_array[3] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Result, path),  // bytes offset in struct
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
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Result, planning_time),  // bytes offset in struct
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
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_members = {
  "my_intermediate_interfaces__action",  // message namespace
  "MyComputePathToPose_Result",  // message name
  3,  // number of fields
  sizeof(my_intermediate_interfaces__action__MyComputePathToPose_Result),
  my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_member_array,  // message members
  my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_Result)() {
  my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__action__MyComputePathToPose_Result__rosidl_typesupport_introspection_c__MyComputePathToPose_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__functions.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__action__MyComputePathToPose_Feedback__init(message_memory);
}

void my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_fini_function(void * message_memory)
{
  my_intermediate_interfaces__action__MyComputePathToPose_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_message_members = {
  "my_intermediate_interfaces__action",  // message namespace
  "MyComputePathToPose_Feedback",  // message name
  1,  // number of fields
  sizeof(my_intermediate_interfaces__action__MyComputePathToPose_Feedback),
  my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_message_member_array,  // message members
  my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_Feedback)() {
  if (!my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__action__MyComputePathToPose_Feedback__rosidl_typesupport_introspection_c__MyComputePathToPose_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__functions.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "my_intermediate_interfaces/action/my_compute_path_to_pose.h"
// Member `goal`
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__init(message_memory);
}

void my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_fini_function(void * message_memory)
{
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_members = {
  "my_intermediate_interfaces__action",  // message namespace
  "MyComputePathToPose_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request),
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_member_array,  // message members
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_SendGoal_Request)() {
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_Goal)();
  if (!my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__functions.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__init(message_memory);
}

void my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_fini_function(void * message_memory)
{
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_members = {
  "my_intermediate_interfaces__action",  // message namespace
  "MyComputePathToPose_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response),
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_member_array,  // message members
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_SendGoal_Response)() {
  my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_service_members = {
  "my_intermediate_interfaces__action",  // service namespace
  "MyComputePathToPose_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_service_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_SendGoal)() {
  if (!my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_service_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_SendGoal_Response)()->data;
  }

  return &my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__functions.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"


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

void my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__init(message_memory);
}

void my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_fini_function(void * message_memory)
{
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_members = {
  "my_intermediate_interfaces__action",  // message namespace
  "MyComputePathToPose_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request),
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_member_array,  // message members
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_GetResult_Request)() {
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__functions.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "my_intermediate_interfaces/action/my_compute_path_to_pose.h"
// Member `result`
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__init(message_memory);
}

void my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_fini_function(void * message_memory)
{
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_members = {
  "my_intermediate_interfaces__action",  // message namespace
  "MyComputePathToPose_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response),
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_member_array,  // message members
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_GetResult_Response)() {
  my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_Result)();
  if (!my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_service_members = {
  "my_intermediate_interfaces__action",  // service namespace
  "MyComputePathToPose_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_service_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_GetResult)() {
  if (!my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_service_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_GetResult_Response)()->data;
  }

  return &my_intermediate_interfaces__action__detail__my_compute_path_to_pose__rosidl_typesupport_introspection_c__MyComputePathToPose_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__functions.h"
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "my_intermediate_interfaces/action/my_compute_path_to_pose.h"
// Member `feedback`
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__init(message_memory);
}

void my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_fini_function(void * message_memory)
{
  my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_members = {
  "my_intermediate_interfaces__action",  // message namespace
  "MyComputePathToPose_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage),
  my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_member_array,  // message members
  my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_FeedbackMessage)() {
  my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, action, MyComputePathToPose_Feedback)();
  if (!my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage__rosidl_typesupport_introspection_c__MyComputePathToPose_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

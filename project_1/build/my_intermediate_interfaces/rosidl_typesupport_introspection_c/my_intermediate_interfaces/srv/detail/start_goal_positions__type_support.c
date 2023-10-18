// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_intermediate_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_intermediate_interfaces/srv/detail/start_goal_positions__rosidl_typesupport_introspection_c.h"
#include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_positions__functions.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.h"


// Include directives for member types
// Member `start_x`
// Member `start_y`
// Member `start_z`
// Member `end_x`
// Member `end_y`
// Member `end_z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__srv__StartGoalPositions_Request__init(message_memory);
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_fini_function(void * message_memory)
{
  my_intermediate_interfaces__srv__StartGoalPositions_Request__fini(message_memory);
}

size_t my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__start_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__start_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__start_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__start_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__start_x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__start_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__start_x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__start_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__start_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__start_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__start_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__start_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__start_y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__start_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__start_y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__start_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__start_z(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__start_z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__start_z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__start_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__start_z(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__start_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__start_z(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__start_z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__end_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__end_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__end_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__end_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__end_x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__end_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__end_x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__end_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__end_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__end_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__end_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__end_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__end_y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__end_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__end_y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__end_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__end_z(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__end_z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__end_z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__end_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__end_z(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__end_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__end_z(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__end_z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_message_member_array[6] = {
  {
    "start_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPositions_Request, start_x),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__start_x,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__start_x,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__start_x,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__start_x,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__start_x,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__start_x  // resize(index) function pointer
  },
  {
    "start_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPositions_Request, start_y),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__start_y,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__start_y,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__start_y,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__start_y,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__start_y,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__start_y  // resize(index) function pointer
  },
  {
    "start_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPositions_Request, start_z),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__start_z,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__start_z,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__start_z,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__start_z,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__start_z,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__start_z  // resize(index) function pointer
  },
  {
    "end_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPositions_Request, end_x),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__end_x,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__end_x,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__end_x,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__end_x,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__end_x,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__end_x  // resize(index) function pointer
  },
  {
    "end_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPositions_Request, end_y),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__end_y,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__end_y,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__end_y,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__end_y,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__end_y,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__end_y  // resize(index) function pointer
  },
  {
    "end_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPositions_Request, end_z),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Request__end_z,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Request__end_z,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Request__end_z,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Request__end_z,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Request__end_z,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Request__end_z  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_message_members = {
  "my_intermediate_interfaces__srv",  // message namespace
  "StartGoalPositions_Request",  // message name
  6,  // number of fields
  sizeof(my_intermediate_interfaces__srv__StartGoalPositions_Request),
  my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_message_member_array,  // message members
  my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPositions_Request)() {
  if (!my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__srv__StartGoalPositions_Request__rosidl_typesupport_introspection_c__StartGoalPositions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_positions__functions.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.h"


// Include directives for member types
// Member `plans`
#include "nav_msgs/msg/path.h"
// Member `plans`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__srv__StartGoalPositions_Response__init(message_memory);
}

void my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_fini_function(void * message_memory)
{
  my_intermediate_interfaces__srv__StartGoalPositions_Response__fini(message_memory);
}

size_t my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Response__plans(
  const void * untyped_member)
{
  const nav_msgs__msg__Path__Sequence * member =
    (const nav_msgs__msg__Path__Sequence *)(untyped_member);
  return member->size;
}

const void * my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Response__plans(
  const void * untyped_member, size_t index)
{
  const nav_msgs__msg__Path__Sequence * member =
    (const nav_msgs__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void * my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Response__plans(
  void * untyped_member, size_t index)
{
  nav_msgs__msg__Path__Sequence * member =
    (nav_msgs__msg__Path__Sequence *)(untyped_member);
  return &member->data[index];
}

void my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Response__plans(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav_msgs__msg__Path * item =
    ((const nav_msgs__msg__Path *)
    my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Response__plans(untyped_member, index));
  nav_msgs__msg__Path * value =
    (nav_msgs__msg__Path *)(untyped_value);
  *value = *item;
}

void my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Response__plans(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav_msgs__msg__Path * item =
    ((nav_msgs__msg__Path *)
    my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Response__plans(untyped_member, index));
  const nav_msgs__msg__Path * value =
    (const nav_msgs__msg__Path *)(untyped_value);
  *item = *value;
}

bool my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Response__plans(
  void * untyped_member, size_t size)
{
  nav_msgs__msg__Path__Sequence * member =
    (nav_msgs__msg__Path__Sequence *)(untyped_member);
  nav_msgs__msg__Path__Sequence__fini(member);
  return nav_msgs__msg__Path__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_member_array[1] = {
  {
    "plans",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__srv__StartGoalPositions_Response, plans),  // bytes offset in struct
    NULL,  // default value
    my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__size_function__StartGoalPositions_Response__plans,  // size() function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__get_const_function__StartGoalPositions_Response__plans,  // get_const(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__get_function__StartGoalPositions_Response__plans,  // get(index) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__fetch_function__StartGoalPositions_Response__plans,  // fetch(index, &value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__assign_function__StartGoalPositions_Response__plans,  // assign(index, value) function pointer
    my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__resize_function__StartGoalPositions_Response__plans  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_members = {
  "my_intermediate_interfaces__srv",  // message namespace
  "StartGoalPositions_Response",  // message name
  1,  // number of fields
  sizeof(my_intermediate_interfaces__srv__StartGoalPositions_Response),
  my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_member_array,  // message members
  my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPositions_Response)() {
  my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  if (!my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__srv__StartGoalPositions_Response__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_intermediate_interfaces__srv__detail__start_goal_positions__rosidl_typesupport_introspection_c__StartGoalPositions_service_members = {
  "my_intermediate_interfaces__srv",  // service namespace
  "StartGoalPositions",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_intermediate_interfaces__srv__detail__start_goal_positions__rosidl_typesupport_introspection_c__StartGoalPositions_Request_message_type_support_handle,
  NULL  // response message
  // my_intermediate_interfaces__srv__detail__start_goal_positions__rosidl_typesupport_introspection_c__StartGoalPositions_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_intermediate_interfaces__srv__detail__start_goal_positions__rosidl_typesupport_introspection_c__StartGoalPositions_service_type_support_handle = {
  0,
  &my_intermediate_interfaces__srv__detail__start_goal_positions__rosidl_typesupport_introspection_c__StartGoalPositions_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPositions_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPositions_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPositions)() {
  if (!my_intermediate_interfaces__srv__detail__start_goal_positions__rosidl_typesupport_introspection_c__StartGoalPositions_service_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__srv__detail__start_goal_positions__rosidl_typesupport_introspection_c__StartGoalPositions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_intermediate_interfaces__srv__detail__start_goal_positions__rosidl_typesupport_introspection_c__StartGoalPositions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPositions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, srv, StartGoalPositions_Response)()->data;
  }

  return &my_intermediate_interfaces__srv__detail__start_goal_positions__rosidl_typesupport_introspection_c__StartGoalPositions_service_type_support_handle;
}

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_intermediate_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_intermediate_interfaces/msg/detail/edge_constraint__rosidl_typesupport_introspection_c.h"
#include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_intermediate_interfaces/msg/detail/edge_constraint__functions.h"
#include "my_intermediate_interfaces/msg/detail/edge_constraint__struct.h"


// Include directives for member types
// Member `cell_from`
// Member `cell_to`
#include "my_intermediate_interfaces/msg/coordinates3_d.h"
// Member `cell_from`
// Member `cell_to`
#include "my_intermediate_interfaces/msg/detail/coordinates3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__msg__EdgeConstraint__init(message_memory);
}

void my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_fini_function(void * message_memory)
{
  my_intermediate_interfaces__msg__EdgeConstraint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_member_array[3] = {
  {
    "cell_from",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__msg__EdgeConstraint, cell_from),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cell_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__msg__EdgeConstraint, cell_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__msg__EdgeConstraint, time_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_members = {
  "my_intermediate_interfaces__msg",  // message namespace
  "EdgeConstraint",  // message name
  3,  // number of fields
  sizeof(my_intermediate_interfaces__msg__EdgeConstraint),
  my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_member_array,  // message members
  my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, msg, EdgeConstraint)() {
  my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, msg, Coordinates3D)();
  my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, msg, Coordinates3D)();
  if (!my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__msg__EdgeConstraint__rosidl_typesupport_introspection_c__EdgeConstraint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

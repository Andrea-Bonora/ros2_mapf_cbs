// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_intermediate_interfaces:msg/Coordinates3D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_intermediate_interfaces/msg/detail/coordinates3_d__rosidl_typesupport_introspection_c.h"
#include "my_intermediate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_intermediate_interfaces/msg/detail/coordinates3_d__functions.h"
#include "my_intermediate_interfaces/msg/detail/coordinates3_d__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_intermediate_interfaces__msg__Coordinates3D__init(message_memory);
}

void my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_fini_function(void * message_memory)
{
  my_intermediate_interfaces__msg__Coordinates3D__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__msg__Coordinates3D, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__msg__Coordinates3D, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces__msg__Coordinates3D, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_message_members = {
  "my_intermediate_interfaces__msg",  // message namespace
  "Coordinates3D",  // message name
  3,  // number of fields
  sizeof(my_intermediate_interfaces__msg__Coordinates3D),
  my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_message_member_array,  // message members
  my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_init_function,  // function to initialize message memory (memory has to be allocated)
  my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_message_type_support_handle = {
  0,
  &my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_intermediate_interfaces, msg, Coordinates3D)() {
  if (!my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_message_type_support_handle.typesupport_identifier) {
    my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_intermediate_interfaces__msg__Coordinates3D__rosidl_typesupport_introspection_c__Coordinates3D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

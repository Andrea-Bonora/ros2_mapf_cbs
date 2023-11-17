// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_intermediate_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice
#include "my_intermediate_interfaces/msg/detail/edge_constraint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_intermediate_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_intermediate_interfaces/msg/detail/edge_constraint__struct.h"
#include "my_intermediate_interfaces/msg/detail/edge_constraint__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "my_intermediate_interfaces/msg/detail/coordinates3_d__functions.h"  // cell_from, cell_to

// forward declare type support functions
size_t get_serialized_size_my_intermediate_interfaces__msg__Coordinates3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_my_intermediate_interfaces__msg__Coordinates3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, msg, Coordinates3D)();


using _EdgeConstraint__ros_msg_type = my_intermediate_interfaces__msg__EdgeConstraint;

static bool _EdgeConstraint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EdgeConstraint__ros_msg_type * ros_message = static_cast<const _EdgeConstraint__ros_msg_type *>(untyped_ros_message);
  // Field name: cell_from
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, msg, Coordinates3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cell_from, cdr))
    {
      return false;
    }
  }

  // Field name: cell_to
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, msg, Coordinates3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cell_to, cdr))
    {
      return false;
    }
  }

  // Field name: time_step
  {
    cdr << ros_message->time_step;
  }

  return true;
}

static bool _EdgeConstraint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EdgeConstraint__ros_msg_type * ros_message = static_cast<_EdgeConstraint__ros_msg_type *>(untyped_ros_message);
  // Field name: cell_from
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, msg, Coordinates3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cell_from))
    {
      return false;
    }
  }

  // Field name: cell_to
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, msg, Coordinates3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cell_to))
    {
      return false;
    }
  }

  // Field name: time_step
  {
    cdr >> ros_message->time_step;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_intermediate_interfaces
size_t get_serialized_size_my_intermediate_interfaces__msg__EdgeConstraint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EdgeConstraint__ros_msg_type * ros_message = static_cast<const _EdgeConstraint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cell_from

  current_alignment += get_serialized_size_my_intermediate_interfaces__msg__Coordinates3D(
    &(ros_message->cell_from), current_alignment);
  // field.name cell_to

  current_alignment += get_serialized_size_my_intermediate_interfaces__msg__Coordinates3D(
    &(ros_message->cell_to), current_alignment);
  // field.name time_step
  {
    size_t item_size = sizeof(ros_message->time_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EdgeConstraint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_intermediate_interfaces__msg__EdgeConstraint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_intermediate_interfaces
size_t max_serialized_size_my_intermediate_interfaces__msg__EdgeConstraint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cell_from
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_my_intermediate_interfaces__msg__Coordinates3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cell_to
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_my_intermediate_interfaces__msg__Coordinates3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: time_step
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EdgeConstraint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_intermediate_interfaces__msg__EdgeConstraint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EdgeConstraint = {
  "my_intermediate_interfaces::msg",
  "EdgeConstraint",
  _EdgeConstraint__cdr_serialize,
  _EdgeConstraint__cdr_deserialize,
  _EdgeConstraint__get_serialized_size,
  _EdgeConstraint__max_serialized_size
};

static rosidl_message_type_support_t _EdgeConstraint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EdgeConstraint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_intermediate_interfaces, msg, EdgeConstraint)() {
  return &_EdgeConstraint__type_support;
}

#if defined(__cplusplus)
}
#endif

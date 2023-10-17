// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_robot_interfaces:msg/LedStatus.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/msg/detail/led_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_robot_interfaces/msg/detail/led_status__struct.h"
#include "my_robot_interfaces/msg/detail/led_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // led1, led2, led3
#include "rosidl_runtime_c/string_functions.h"  // led1, led2, led3

// forward declare type support functions


using _LedStatus__ros_msg_type = my_robot_interfaces__msg__LedStatus;

static bool _LedStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LedStatus__ros_msg_type * ros_message = static_cast<const _LedStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: led1
  {
    const rosidl_runtime_c__String * str = &ros_message->led1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: led2
  {
    const rosidl_runtime_c__String * str = &ros_message->led2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: led3
  {
    const rosidl_runtime_c__String * str = &ros_message->led3;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _LedStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LedStatus__ros_msg_type * ros_message = static_cast<_LedStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: led1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->led1.data) {
      rosidl_runtime_c__String__init(&ros_message->led1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->led1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'led1'\n");
      return false;
    }
  }

  // Field name: led2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->led2.data) {
      rosidl_runtime_c__String__init(&ros_message->led2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->led2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'led2'\n");
      return false;
    }
  }

  // Field name: led3
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->led3.data) {
      rosidl_runtime_c__String__init(&ros_message->led3);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->led3,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'led3'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__msg__LedStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LedStatus__ros_msg_type * ros_message = static_cast<const _LedStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name led1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->led1.size + 1);
  // field.name led2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->led2.size + 1);
  // field.name led3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->led3.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _LedStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_robot_interfaces__msg__LedStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__msg__LedStatus(
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

  // member: led1
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: led2
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: led3
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LedStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_robot_interfaces__msg__LedStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LedStatus = {
  "my_robot_interfaces::msg",
  "LedStatus",
  _LedStatus__cdr_serialize,
  _LedStatus__cdr_deserialize,
  _LedStatus__get_serialized_size,
  _LedStatus__max_serialized_size
};

static rosidl_message_type_support_t _LedStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LedStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, msg, LedStatus)() {
  return &_LedStatus__type_support;
}

#if defined(__cplusplus)
}
#endif

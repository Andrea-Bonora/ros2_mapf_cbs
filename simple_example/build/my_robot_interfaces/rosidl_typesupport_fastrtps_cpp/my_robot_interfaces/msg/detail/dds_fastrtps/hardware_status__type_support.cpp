// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/msg/detail/hardware_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_robot_interfaces/msg/detail/hardware_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_robot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_robot_interfaces
cdr_serialize(
  const my_robot_interfaces::msg::HardwareStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: are_motors_ready
  cdr << (ros_message.are_motors_ready ? true : false);
  // Member: debug_message
  cdr << ros_message.debug_message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_robot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_robot_interfaces::msg::HardwareStatus & ros_message)
{
  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: are_motors_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.are_motors_ready = tmp ? true : false;
  }

  // Member: debug_message
  cdr >> ros_message.debug_message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_robot_interfaces
get_serialized_size(
  const my_robot_interfaces::msg::HardwareStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: are_motors_ready
  {
    size_t item_size = sizeof(ros_message.are_motors_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: debug_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.debug_message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_robot_interfaces
max_serialized_size_HardwareStatus(
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


  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: are_motors_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: debug_message
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

static bool _HardwareStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_robot_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HardwareStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_robot_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HardwareStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_robot_interfaces::msg::HardwareStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HardwareStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HardwareStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HardwareStatus__callbacks = {
  "my_robot_interfaces::msg",
  "HardwareStatus",
  _HardwareStatus__cdr_serialize,
  _HardwareStatus__cdr_deserialize,
  _HardwareStatus__get_serialized_size,
  _HardwareStatus__max_serialized_size
};

static rosidl_message_type_support_t _HardwareStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HardwareStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_robot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::msg::HardwareStatus>()
{
  return &my_robot_interfaces::msg::typesupport_fastrtps_cpp::_HardwareStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_robot_interfaces, msg, HardwareStatus)() {
  return &my_robot_interfaces::msg::typesupport_fastrtps_cpp::_HardwareStatus__handle;
}

#ifdef __cplusplus
}
#endif

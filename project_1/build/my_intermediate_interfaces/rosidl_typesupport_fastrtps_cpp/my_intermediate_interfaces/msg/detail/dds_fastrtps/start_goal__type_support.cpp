// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_intermediate_interfaces:msg/StartGoal.idl
// generated code does not contain a copyright notice
#include "my_intermediate_interfaces/msg/detail/start_goal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_intermediate_interfaces/msg/detail/start_goal__struct.hpp"

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
namespace my_intermediate_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const my_intermediate_interfaces::msg::Coordinates3D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  my_intermediate_interfaces::msg::Coordinates3D &);
size_t get_serialized_size(
  const my_intermediate_interfaces::msg::Coordinates3D &,
  size_t current_alignment);
size_t
max_serialized_size_Coordinates3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace my_intermediate_interfaces

// functions for my_intermediate_interfaces::msg::Coordinates3D already declared above


namespace my_intermediate_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
cdr_serialize(
  const my_intermediate_interfaces::msg::StartGoal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: start
  my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.start,
    cdr);
  // Member: goal
  my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_intermediate_interfaces::msg::StartGoal & ros_message)
{
  // Member: start
  my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.start);

  // Member: goal
  my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
get_serialized_size(
  const my_intermediate_interfaces::msg::StartGoal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: start

  current_alignment +=
    my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.start, current_alignment);
  // Member: goal

  current_alignment +=
    my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
max_serialized_size_StartGoal(
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


  // Member: start
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Coordinates3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Coordinates3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _StartGoal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_intermediate_interfaces::msg::StartGoal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StartGoal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_intermediate_interfaces::msg::StartGoal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StartGoal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_intermediate_interfaces::msg::StartGoal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StartGoal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StartGoal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StartGoal__callbacks = {
  "my_intermediate_interfaces::msg",
  "StartGoal",
  _StartGoal__cdr_serialize,
  _StartGoal__cdr_deserialize,
  _StartGoal__get_serialized_size,
  _StartGoal__max_serialized_size
};

static rosidl_message_type_support_t _StartGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartGoal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_intermediate_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<my_intermediate_interfaces::msg::StartGoal>()
{
  return &my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::_StartGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_intermediate_interfaces, msg, StartGoal)() {
  return &my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::_StartGoal__handle;
}

#ifdef __cplusplus
}
#endif

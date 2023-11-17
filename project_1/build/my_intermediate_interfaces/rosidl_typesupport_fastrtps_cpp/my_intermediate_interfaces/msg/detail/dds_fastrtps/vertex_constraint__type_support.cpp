// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_intermediate_interfaces:msg/VertexConstraint.idl
// generated code does not contain a copyright notice
#include "my_intermediate_interfaces/msg/detail/vertex_constraint__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_intermediate_interfaces/msg/detail/vertex_constraint__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
cdr_serialize(
  const my_intermediate_interfaces::msg::VertexConstraint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cell_index
  cdr << ros_message.cell_index;
  // Member: time_step
  cdr << ros_message.time_step;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_intermediate_interfaces::msg::VertexConstraint & ros_message)
{
  // Member: cell_index
  cdr >> ros_message.cell_index;

  // Member: time_step
  cdr >> ros_message.time_step;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
get_serialized_size(
  const my_intermediate_interfaces::msg::VertexConstraint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cell_index
  {
    size_t item_size = sizeof(ros_message.cell_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_step
  {
    size_t item_size = sizeof(ros_message.time_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
max_serialized_size_VertexConstraint(
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


  // Member: cell_index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: time_step
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VertexConstraint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_intermediate_interfaces::msg::VertexConstraint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VertexConstraint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_intermediate_interfaces::msg::VertexConstraint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VertexConstraint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_intermediate_interfaces::msg::VertexConstraint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VertexConstraint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VertexConstraint(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VertexConstraint__callbacks = {
  "my_intermediate_interfaces::msg",
  "VertexConstraint",
  _VertexConstraint__cdr_serialize,
  _VertexConstraint__cdr_deserialize,
  _VertexConstraint__get_serialized_size,
  _VertexConstraint__max_serialized_size
};

static rosidl_message_type_support_t _VertexConstraint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VertexConstraint__callbacks,
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
get_message_type_support_handle<my_intermediate_interfaces::msg::VertexConstraint>()
{
  return &my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::_VertexConstraint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_intermediate_interfaces, msg, VertexConstraint)() {
  return &my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::_VertexConstraint__handle;
}

#ifdef __cplusplus
}
#endif

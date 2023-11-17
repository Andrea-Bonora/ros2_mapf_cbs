// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_intermediate_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_intermediate_interfaces/msg/detail/edge_constraint__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_intermediate_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EdgeConstraint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_intermediate_interfaces::msg::EdgeConstraint(_init);
}

void EdgeConstraint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_intermediate_interfaces::msg::EdgeConstraint *>(message_memory);
  typed_message->~EdgeConstraint();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EdgeConstraint_message_member_array[3] = {
  {
    "cell_from_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::EdgeConstraint, cell_from_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cell_to_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::EdgeConstraint, cell_to_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::EdgeConstraint, time_step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EdgeConstraint_message_members = {
  "my_intermediate_interfaces::msg",  // message namespace
  "EdgeConstraint",  // message name
  3,  // number of fields
  sizeof(my_intermediate_interfaces::msg::EdgeConstraint),
  EdgeConstraint_message_member_array,  // message members
  EdgeConstraint_init_function,  // function to initialize message memory (memory has to be allocated)
  EdgeConstraint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EdgeConstraint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EdgeConstraint_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_intermediate_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_intermediate_interfaces::msg::EdgeConstraint>()
{
  return &::my_intermediate_interfaces::msg::rosidl_typesupport_introspection_cpp::EdgeConstraint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_intermediate_interfaces, msg, EdgeConstraint)() {
  return &::my_intermediate_interfaces::msg::rosidl_typesupport_introspection_cpp::EdgeConstraint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

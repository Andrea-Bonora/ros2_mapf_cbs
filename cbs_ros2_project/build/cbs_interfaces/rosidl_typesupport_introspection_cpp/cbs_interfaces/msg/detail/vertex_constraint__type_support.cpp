// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cbs_interfaces:msg/VertexConstraint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cbs_interfaces/msg/detail/vertex_constraint__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cbs_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VertexConstraint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cbs_interfaces::msg::VertexConstraint(_init);
}

void VertexConstraint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cbs_interfaces::msg::VertexConstraint *>(message_memory);
  typed_message->~VertexConstraint();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VertexConstraint_message_member_array[2] = {
  {
    "cell_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::msg::VertexConstraint, cell_index),  // bytes offset in struct
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
    offsetof(cbs_interfaces::msg::VertexConstraint, time_step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VertexConstraint_message_members = {
  "cbs_interfaces::msg",  // message namespace
  "VertexConstraint",  // message name
  2,  // number of fields
  sizeof(cbs_interfaces::msg::VertexConstraint),
  VertexConstraint_message_member_array,  // message members
  VertexConstraint_init_function,  // function to initialize message memory (memory has to be allocated)
  VertexConstraint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VertexConstraint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VertexConstraint_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::msg::VertexConstraint>()
{
  return &::cbs_interfaces::msg::rosidl_typesupport_introspection_cpp::VertexConstraint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, msg, VertexConstraint)() {
  return &::cbs_interfaces::msg::rosidl_typesupport_introspection_cpp::VertexConstraint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

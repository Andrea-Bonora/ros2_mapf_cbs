// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_intermediate_interfaces:msg/StartGoal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_intermediate_interfaces/msg/detail/start_goal__struct.hpp"
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

void StartGoal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_intermediate_interfaces::msg::StartGoal(_init);
}

void StartGoal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_intermediate_interfaces::msg::StartGoal *>(message_memory);
  typed_message->~StartGoal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StartGoal_message_member_array[2] = {
  {
    "start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_intermediate_interfaces::msg::Coordinates3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::StartGoal, start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_intermediate_interfaces::msg::Coordinates3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::StartGoal, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StartGoal_message_members = {
  "my_intermediate_interfaces::msg",  // message namespace
  "StartGoal",  // message name
  2,  // number of fields
  sizeof(my_intermediate_interfaces::msg::StartGoal),
  StartGoal_message_member_array,  // message members
  StartGoal_init_function,  // function to initialize message memory (memory has to be allocated)
  StartGoal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StartGoal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StartGoal_message_members,
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
get_message_type_support_handle<my_intermediate_interfaces::msg::StartGoal>()
{
  return &::my_intermediate_interfaces::msg::rosidl_typesupport_introspection_cpp::StartGoal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_intermediate_interfaces, msg, StartGoal)() {
  return &::my_intermediate_interfaces::msg::rosidl_typesupport_introspection_cpp::StartGoal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

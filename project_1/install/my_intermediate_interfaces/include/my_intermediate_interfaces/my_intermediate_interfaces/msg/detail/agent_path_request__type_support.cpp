// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_intermediate_interfaces:msg/AgentPathRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_intermediate_interfaces/msg/detail/agent_path_request__struct.hpp"
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

void AgentPathRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_intermediate_interfaces::msg::AgentPathRequest(_init);
}

void AgentPathRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_intermediate_interfaces::msg::AgentPathRequest *>(message_memory);
  typed_message->~AgentPathRequest();
}

size_t size_function__AgentPathRequest__vertex_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_intermediate_interfaces::msg::VertexConstraint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AgentPathRequest__vertex_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_intermediate_interfaces::msg::VertexConstraint> *>(untyped_member);
  return &member[index];
}

void * get_function__AgentPathRequest__vertex_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_intermediate_interfaces::msg::VertexConstraint> *>(untyped_member);
  return &member[index];
}

void fetch_function__AgentPathRequest__vertex_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_intermediate_interfaces::msg::VertexConstraint *>(
    get_const_function__AgentPathRequest__vertex_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<my_intermediate_interfaces::msg::VertexConstraint *>(untyped_value);
  value = item;
}

void assign_function__AgentPathRequest__vertex_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_intermediate_interfaces::msg::VertexConstraint *>(
    get_function__AgentPathRequest__vertex_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_intermediate_interfaces::msg::VertexConstraint *>(untyped_value);
  item = value;
}

void resize_function__AgentPathRequest__vertex_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_intermediate_interfaces::msg::VertexConstraint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AgentPathRequest__edge_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_intermediate_interfaces::msg::EdgeConstraint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AgentPathRequest__edge_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_intermediate_interfaces::msg::EdgeConstraint> *>(untyped_member);
  return &member[index];
}

void * get_function__AgentPathRequest__edge_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_intermediate_interfaces::msg::EdgeConstraint> *>(untyped_member);
  return &member[index];
}

void fetch_function__AgentPathRequest__edge_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_intermediate_interfaces::msg::EdgeConstraint *>(
    get_const_function__AgentPathRequest__edge_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<my_intermediate_interfaces::msg::EdgeConstraint *>(untyped_value);
  value = item;
}

void assign_function__AgentPathRequest__edge_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_intermediate_interfaces::msg::EdgeConstraint *>(
    get_function__AgentPathRequest__edge_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_intermediate_interfaces::msg::EdgeConstraint *>(untyped_value);
  item = value;
}

void resize_function__AgentPathRequest__edge_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_intermediate_interfaces::msg::EdgeConstraint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgentPathRequest_message_member_array[5] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::AgentPathRequest, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::AgentPathRequest, start),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::AgentPathRequest, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vertex_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_intermediate_interfaces::msg::VertexConstraint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::AgentPathRequest, vertex_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__AgentPathRequest__vertex_constraints,  // size() function pointer
    get_const_function__AgentPathRequest__vertex_constraints,  // get_const(index) function pointer
    get_function__AgentPathRequest__vertex_constraints,  // get(index) function pointer
    fetch_function__AgentPathRequest__vertex_constraints,  // fetch(index, &value) function pointer
    assign_function__AgentPathRequest__vertex_constraints,  // assign(index, value) function pointer
    resize_function__AgentPathRequest__vertex_constraints  // resize(index) function pointer
  },
  {
    "edge_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_intermediate_interfaces::msg::EdgeConstraint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::msg::AgentPathRequest, edge_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__AgentPathRequest__edge_constraints,  // size() function pointer
    get_const_function__AgentPathRequest__edge_constraints,  // get_const(index) function pointer
    get_function__AgentPathRequest__edge_constraints,  // get(index) function pointer
    fetch_function__AgentPathRequest__edge_constraints,  // fetch(index, &value) function pointer
    assign_function__AgentPathRequest__edge_constraints,  // assign(index, value) function pointer
    resize_function__AgentPathRequest__edge_constraints  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgentPathRequest_message_members = {
  "my_intermediate_interfaces::msg",  // message namespace
  "AgentPathRequest",  // message name
  5,  // number of fields
  sizeof(my_intermediate_interfaces::msg::AgentPathRequest),
  AgentPathRequest_message_member_array,  // message members
  AgentPathRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  AgentPathRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgentPathRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgentPathRequest_message_members,
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
get_message_type_support_handle<my_intermediate_interfaces::msg::AgentPathRequest>()
{
  return &::my_intermediate_interfaces::msg::rosidl_typesupport_introspection_cpp::AgentPathRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_intermediate_interfaces, msg, AgentPathRequest)() {
  return &::my_intermediate_interfaces::msg::rosidl_typesupport_introspection_cpp::AgentPathRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

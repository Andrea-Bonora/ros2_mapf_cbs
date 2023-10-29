// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_intermediate_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void StartGoalPositions_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_intermediate_interfaces::srv::StartGoalPositions_Request(_init);
}

void StartGoalPositions_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_intermediate_interfaces::srv::StartGoalPositions_Request *>(message_memory);
  typed_message->~StartGoalPositions_Request();
}

size_t size_function__StartGoalPositions_Request__start_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPositions_Request__start_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPositions_Request__start_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPositions_Request__start_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__StartGoalPositions_Request__start_x(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPositions_Request__start_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__StartGoalPositions_Request__start_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPositions_Request__start_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StartGoalPositions_Request__start_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPositions_Request__start_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPositions_Request__start_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPositions_Request__start_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__StartGoalPositions_Request__start_y(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPositions_Request__start_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__StartGoalPositions_Request__start_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPositions_Request__start_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StartGoalPositions_Request__start_z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPositions_Request__start_z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPositions_Request__start_z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPositions_Request__start_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__StartGoalPositions_Request__start_z(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPositions_Request__start_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__StartGoalPositions_Request__start_z(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPositions_Request__start_z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StartGoalPositions_Request__end_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPositions_Request__end_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPositions_Request__end_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPositions_Request__end_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__StartGoalPositions_Request__end_x(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPositions_Request__end_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__StartGoalPositions_Request__end_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPositions_Request__end_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StartGoalPositions_Request__end_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPositions_Request__end_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPositions_Request__end_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPositions_Request__end_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__StartGoalPositions_Request__end_y(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPositions_Request__end_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__StartGoalPositions_Request__end_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPositions_Request__end_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StartGoalPositions_Request__end_z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPositions_Request__end_z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPositions_Request__end_z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPositions_Request__end_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__StartGoalPositions_Request__end_z(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPositions_Request__end_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__StartGoalPositions_Request__end_z(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPositions_Request__end_z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StartGoalPositions_Request_message_member_array[6] = {
  {
    "start_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPositions_Request, start_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPositions_Request__start_x,  // size() function pointer
    get_const_function__StartGoalPositions_Request__start_x,  // get_const(index) function pointer
    get_function__StartGoalPositions_Request__start_x,  // get(index) function pointer
    fetch_function__StartGoalPositions_Request__start_x,  // fetch(index, &value) function pointer
    assign_function__StartGoalPositions_Request__start_x,  // assign(index, value) function pointer
    resize_function__StartGoalPositions_Request__start_x  // resize(index) function pointer
  },
  {
    "start_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPositions_Request, start_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPositions_Request__start_y,  // size() function pointer
    get_const_function__StartGoalPositions_Request__start_y,  // get_const(index) function pointer
    get_function__StartGoalPositions_Request__start_y,  // get(index) function pointer
    fetch_function__StartGoalPositions_Request__start_y,  // fetch(index, &value) function pointer
    assign_function__StartGoalPositions_Request__start_y,  // assign(index, value) function pointer
    resize_function__StartGoalPositions_Request__start_y  // resize(index) function pointer
  },
  {
    "start_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPositions_Request, start_z),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPositions_Request__start_z,  // size() function pointer
    get_const_function__StartGoalPositions_Request__start_z,  // get_const(index) function pointer
    get_function__StartGoalPositions_Request__start_z,  // get(index) function pointer
    fetch_function__StartGoalPositions_Request__start_z,  // fetch(index, &value) function pointer
    assign_function__StartGoalPositions_Request__start_z,  // assign(index, value) function pointer
    resize_function__StartGoalPositions_Request__start_z  // resize(index) function pointer
  },
  {
    "end_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPositions_Request, end_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPositions_Request__end_x,  // size() function pointer
    get_const_function__StartGoalPositions_Request__end_x,  // get_const(index) function pointer
    get_function__StartGoalPositions_Request__end_x,  // get(index) function pointer
    fetch_function__StartGoalPositions_Request__end_x,  // fetch(index, &value) function pointer
    assign_function__StartGoalPositions_Request__end_x,  // assign(index, value) function pointer
    resize_function__StartGoalPositions_Request__end_x  // resize(index) function pointer
  },
  {
    "end_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPositions_Request, end_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPositions_Request__end_y,  // size() function pointer
    get_const_function__StartGoalPositions_Request__end_y,  // get_const(index) function pointer
    get_function__StartGoalPositions_Request__end_y,  // get(index) function pointer
    fetch_function__StartGoalPositions_Request__end_y,  // fetch(index, &value) function pointer
    assign_function__StartGoalPositions_Request__end_y,  // assign(index, value) function pointer
    resize_function__StartGoalPositions_Request__end_y  // resize(index) function pointer
  },
  {
    "end_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPositions_Request, end_z),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPositions_Request__end_z,  // size() function pointer
    get_const_function__StartGoalPositions_Request__end_z,  // get_const(index) function pointer
    get_function__StartGoalPositions_Request__end_z,  // get(index) function pointer
    fetch_function__StartGoalPositions_Request__end_z,  // fetch(index, &value) function pointer
    assign_function__StartGoalPositions_Request__end_z,  // assign(index, value) function pointer
    resize_function__StartGoalPositions_Request__end_z  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StartGoalPositions_Request_message_members = {
  "my_intermediate_interfaces::srv",  // message namespace
  "StartGoalPositions_Request",  // message name
  6,  // number of fields
  sizeof(my_intermediate_interfaces::srv::StartGoalPositions_Request),
  StartGoalPositions_Request_message_member_array,  // message members
  StartGoalPositions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  StartGoalPositions_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StartGoalPositions_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StartGoalPositions_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace my_intermediate_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_intermediate_interfaces::srv::StartGoalPositions_Request>()
{
  return &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPositions_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_intermediate_interfaces, srv, StartGoalPositions_Request)() {
  return &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPositions_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_intermediate_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void StartGoalPositions_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_intermediate_interfaces::srv::StartGoalPositions_Response(_init);
}

void StartGoalPositions_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_intermediate_interfaces::srv::StartGoalPositions_Response *>(message_memory);
  typed_message->~StartGoalPositions_Response();
}

size_t size_function__StartGoalPositions_Response__plans(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<my_intermediate_interfaces::msg::AgentPath> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPositions_Response__plans(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<my_intermediate_interfaces::msg::AgentPath> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPositions_Response__plans(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<my_intermediate_interfaces::msg::AgentPath> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPositions_Response__plans(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const my_intermediate_interfaces::msg::AgentPath *>(
    get_const_function__StartGoalPositions_Response__plans(untyped_member, index));
  auto & value = *reinterpret_cast<my_intermediate_interfaces::msg::AgentPath *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPositions_Response__plans(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<my_intermediate_interfaces::msg::AgentPath *>(
    get_function__StartGoalPositions_Response__plans(untyped_member, index));
  const auto & value = *reinterpret_cast<const my_intermediate_interfaces::msg::AgentPath *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPositions_Response__plans(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<my_intermediate_interfaces::msg::AgentPath> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StartGoalPositions_Response_message_member_array[1] = {
  {
    "plans",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_intermediate_interfaces::msg::AgentPath>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPositions_Response, plans),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPositions_Response__plans,  // size() function pointer
    get_const_function__StartGoalPositions_Response__plans,  // get_const(index) function pointer
    get_function__StartGoalPositions_Response__plans,  // get(index) function pointer
    fetch_function__StartGoalPositions_Response__plans,  // fetch(index, &value) function pointer
    assign_function__StartGoalPositions_Response__plans,  // assign(index, value) function pointer
    resize_function__StartGoalPositions_Response__plans  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StartGoalPositions_Response_message_members = {
  "my_intermediate_interfaces::srv",  // message namespace
  "StartGoalPositions_Response",  // message name
  1,  // number of fields
  sizeof(my_intermediate_interfaces::srv::StartGoalPositions_Response),
  StartGoalPositions_Response_message_member_array,  // message members
  StartGoalPositions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  StartGoalPositions_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StartGoalPositions_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StartGoalPositions_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace my_intermediate_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_intermediate_interfaces::srv::StartGoalPositions_Response>()
{
  return &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPositions_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_intermediate_interfaces, srv, StartGoalPositions_Response)() {
  return &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPositions_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace my_intermediate_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers StartGoalPositions_service_members = {
  "my_intermediate_interfaces::srv",  // service namespace
  "StartGoalPositions",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<my_intermediate_interfaces::srv::StartGoalPositions>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t StartGoalPositions_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StartGoalPositions_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace my_intermediate_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_intermediate_interfaces::srv::StartGoalPositions>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPositions_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_intermediate_interfaces::srv::StartGoalPositions_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_intermediate_interfaces::srv::StartGoalPositions_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_intermediate_interfaces, srv, StartGoalPositions)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<my_intermediate_interfaces::srv::StartGoalPositions>();
}

#ifdef __cplusplus
}
#endif

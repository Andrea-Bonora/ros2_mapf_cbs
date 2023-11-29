// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cbs_interfaces:action/ComputePathToPoseCBS.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputePathToPoseCBS_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cbs_interfaces::action::ComputePathToPoseCBS_Goal(_init);
}

void ComputePathToPoseCBS_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cbs_interfaces::action::ComputePathToPoseCBS_Goal *>(message_memory);
  typed_message->~ComputePathToPoseCBS_Goal();
}

size_t size_function__ComputePathToPoseCBS_Goal__vertex_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cbs_interfaces::msg::VertexConstraint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ComputePathToPoseCBS_Goal__vertex_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cbs_interfaces::msg::VertexConstraint> *>(untyped_member);
  return &member[index];
}

void * get_function__ComputePathToPoseCBS_Goal__vertex_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cbs_interfaces::msg::VertexConstraint> *>(untyped_member);
  return &member[index];
}

void fetch_function__ComputePathToPoseCBS_Goal__vertex_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const cbs_interfaces::msg::VertexConstraint *>(
    get_const_function__ComputePathToPoseCBS_Goal__vertex_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<cbs_interfaces::msg::VertexConstraint *>(untyped_value);
  value = item;
}

void assign_function__ComputePathToPoseCBS_Goal__vertex_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<cbs_interfaces::msg::VertexConstraint *>(
    get_function__ComputePathToPoseCBS_Goal__vertex_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const cbs_interfaces::msg::VertexConstraint *>(untyped_value);
  item = value;
}

void resize_function__ComputePathToPoseCBS_Goal__vertex_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cbs_interfaces::msg::VertexConstraint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ComputePathToPoseCBS_Goal__edge_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cbs_interfaces::msg::EdgeConstraint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ComputePathToPoseCBS_Goal__edge_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cbs_interfaces::msg::EdgeConstraint> *>(untyped_member);
  return &member[index];
}

void * get_function__ComputePathToPoseCBS_Goal__edge_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cbs_interfaces::msg::EdgeConstraint> *>(untyped_member);
  return &member[index];
}

void fetch_function__ComputePathToPoseCBS_Goal__edge_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const cbs_interfaces::msg::EdgeConstraint *>(
    get_const_function__ComputePathToPoseCBS_Goal__edge_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<cbs_interfaces::msg::EdgeConstraint *>(untyped_value);
  value = item;
}

void assign_function__ComputePathToPoseCBS_Goal__edge_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<cbs_interfaces::msg::EdgeConstraint *>(
    get_function__ComputePathToPoseCBS_Goal__edge_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const cbs_interfaces::msg::EdgeConstraint *>(untyped_value);
  item = value;
}

void resize_function__ComputePathToPoseCBS_Goal__edge_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cbs_interfaces::msg::EdgeConstraint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePathToPoseCBS_Goal_message_member_array[6] = {
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Goal, goal),  // bytes offset in struct
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
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Goal, start),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cbs_interfaces::msg::VertexConstraint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Goal, vertex_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // size() function pointer
    get_const_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // get_const(index) function pointer
    get_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // get(index) function pointer
    fetch_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // fetch(index, &value) function pointer
    assign_function__ComputePathToPoseCBS_Goal__vertex_constraints,  // assign(index, value) function pointer
    resize_function__ComputePathToPoseCBS_Goal__vertex_constraints  // resize(index) function pointer
  },
  {
    "edge_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cbs_interfaces::msg::EdgeConstraint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Goal, edge_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ComputePathToPoseCBS_Goal__edge_constraints,  // size() function pointer
    get_const_function__ComputePathToPoseCBS_Goal__edge_constraints,  // get_const(index) function pointer
    get_function__ComputePathToPoseCBS_Goal__edge_constraints,  // get(index) function pointer
    fetch_function__ComputePathToPoseCBS_Goal__edge_constraints,  // fetch(index, &value) function pointer
    assign_function__ComputePathToPoseCBS_Goal__edge_constraints,  // assign(index, value) function pointer
    resize_function__ComputePathToPoseCBS_Goal__edge_constraints  // resize(index) function pointer
  },
  {
    "planner_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Goal, planner_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "use_start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Goal, use_start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePathToPoseCBS_Goal_message_members = {
  "cbs_interfaces::action",  // message namespace
  "ComputePathToPoseCBS_Goal",  // message name
  6,  // number of fields
  sizeof(cbs_interfaces::action::ComputePathToPoseCBS_Goal),
  ComputePathToPoseCBS_Goal_message_member_array,  // message members
  ComputePathToPoseCBS_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePathToPoseCBS_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePathToPoseCBS_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_Goal>()
{
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_Goal)() {
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_Goal_message_type_support_handle;
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
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
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

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputePathToPoseCBS_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cbs_interfaces::action::ComputePathToPoseCBS_Result(_init);
}

void ComputePathToPoseCBS_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cbs_interfaces::action::ComputePathToPoseCBS_Result *>(message_memory);
  typed_message->~ComputePathToPoseCBS_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePathToPoseCBS_Result_message_member_array[3] = {
  {
    "path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_msgs::msg::Path>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Result, path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "planning_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Result, planning_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Result, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePathToPoseCBS_Result_message_members = {
  "cbs_interfaces::action",  // message namespace
  "ComputePathToPoseCBS_Result",  // message name
  3,  // number of fields
  sizeof(cbs_interfaces::action::ComputePathToPoseCBS_Result),
  ComputePathToPoseCBS_Result_message_member_array,  // message members
  ComputePathToPoseCBS_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePathToPoseCBS_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePathToPoseCBS_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_Result>()
{
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_Result)() {
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_Result_message_type_support_handle;
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
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
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

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputePathToPoseCBS_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cbs_interfaces::action::ComputePathToPoseCBS_Feedback(_init);
}

void ComputePathToPoseCBS_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cbs_interfaces::action::ComputePathToPoseCBS_Feedback *>(message_memory);
  typed_message->~ComputePathToPoseCBS_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePathToPoseCBS_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePathToPoseCBS_Feedback_message_members = {
  "cbs_interfaces::action",  // message namespace
  "ComputePathToPoseCBS_Feedback",  // message name
  1,  // number of fields
  sizeof(cbs_interfaces::action::ComputePathToPoseCBS_Feedback),
  ComputePathToPoseCBS_Feedback_message_member_array,  // message members
  ComputePathToPoseCBS_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePathToPoseCBS_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePathToPoseCBS_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_Feedback>()
{
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_Feedback)() {
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_Feedback_message_type_support_handle;
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
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
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

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputePathToPoseCBS_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request(_init);
}

void ComputePathToPoseCBS_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request *>(message_memory);
  typed_message->~ComputePathToPoseCBS_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePathToPoseCBS_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request, goal_id),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePathToPoseCBS_SendGoal_Request_message_members = {
  "cbs_interfaces::action",  // message namespace
  "ComputePathToPoseCBS_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request),
  ComputePathToPoseCBS_SendGoal_Request_message_member_array,  // message members
  ComputePathToPoseCBS_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePathToPoseCBS_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePathToPoseCBS_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request>()
{
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal_Request)() {
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_SendGoal_Request_message_type_support_handle;
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
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
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

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputePathToPoseCBS_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response(_init);
}

void ComputePathToPoseCBS_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response *>(message_memory);
  typed_message->~ComputePathToPoseCBS_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePathToPoseCBS_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePathToPoseCBS_SendGoal_Response_message_members = {
  "cbs_interfaces::action",  // message namespace
  "ComputePathToPoseCBS_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response),
  ComputePathToPoseCBS_SendGoal_Response_message_member_array,  // message members
  ComputePathToPoseCBS_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePathToPoseCBS_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePathToPoseCBS_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response>()
{
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal_Response)() {
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_SendGoal_Response_message_type_support_handle;
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
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ComputePathToPoseCBS_SendGoal_service_members = {
  "cbs_interfaces::action",  // service namespace
  "ComputePathToPoseCBS_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ComputePathToPoseCBS_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_SendGoal_service_type_support_handle;
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
        ::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::cbs_interfaces::action::ComputePathToPoseCBS_SendGoal_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_SendGoal>();
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
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
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

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputePathToPoseCBS_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request(_init);
}

void ComputePathToPoseCBS_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request *>(message_memory);
  typed_message->~ComputePathToPoseCBS_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePathToPoseCBS_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePathToPoseCBS_GetResult_Request_message_members = {
  "cbs_interfaces::action",  // message namespace
  "ComputePathToPoseCBS_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request),
  ComputePathToPoseCBS_GetResult_Request_message_member_array,  // message members
  ComputePathToPoseCBS_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePathToPoseCBS_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePathToPoseCBS_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request>()
{
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_GetResult_Request)() {
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_GetResult_Request_message_type_support_handle;
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
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
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

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputePathToPoseCBS_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response(_init);
}

void ComputePathToPoseCBS_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response *>(message_memory);
  typed_message->~ComputePathToPoseCBS_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePathToPoseCBS_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePathToPoseCBS_GetResult_Response_message_members = {
  "cbs_interfaces::action",  // message namespace
  "ComputePathToPoseCBS_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response),
  ComputePathToPoseCBS_GetResult_Response_message_member_array,  // message members
  ComputePathToPoseCBS_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePathToPoseCBS_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePathToPoseCBS_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response>()
{
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_GetResult_Response)() {
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ComputePathToPoseCBS_GetResult_service_members = {
  "cbs_interfaces::action",  // service namespace
  "ComputePathToPoseCBS_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ComputePathToPoseCBS_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_GetResult_service_type_support_handle;
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
        ::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::cbs_interfaces::action::ComputePathToPoseCBS_GetResult_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_GetResult>();
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
// #include "cbs_interfaces/action/detail/compute_path_to_pose_cbs__struct.hpp"
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

namespace cbs_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ComputePathToPoseCBS_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage(_init);
}

void ComputePathToPoseCBS_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage *>(message_memory);
  typed_message->~ComputePathToPoseCBS_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ComputePathToPoseCBS_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ComputePathToPoseCBS_FeedbackMessage_message_members = {
  "cbs_interfaces::action",  // message namespace
  "ComputePathToPoseCBS_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage),
  ComputePathToPoseCBS_FeedbackMessage_message_member_array,  // message members
  ComputePathToPoseCBS_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ComputePathToPoseCBS_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ComputePathToPoseCBS_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ComputePathToPoseCBS_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace cbs_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::action::ComputePathToPoseCBS_FeedbackMessage>()
{
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cbs_interfaces, action, ComputePathToPoseCBS_FeedbackMessage)() {
  return &::cbs_interfaces::action::rosidl_typesupport_introspection_cpp::ComputePathToPoseCBS_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

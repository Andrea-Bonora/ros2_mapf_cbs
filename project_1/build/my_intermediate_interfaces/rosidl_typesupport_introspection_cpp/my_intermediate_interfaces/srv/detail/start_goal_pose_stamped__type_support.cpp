// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPoseStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__struct.hpp"
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

void StartGoalPoseStamped_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_intermediate_interfaces::srv::StartGoalPoseStamped_Request(_init);
}

void StartGoalPoseStamped_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request *>(message_memory);
  typed_message->~StartGoalPoseStamped_Request();
}

size_t size_function__StartGoalPoseStamped_Request__starts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPoseStamped_Request__starts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPoseStamped_Request__starts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPoseStamped_Request__starts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(
    get_const_function__StartGoalPoseStamped_Request__starts(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPoseStamped_Request__starts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(
    get_function__StartGoalPoseStamped_Request__starts(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPoseStamped_Request__starts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StartGoalPoseStamped_Request__goals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPoseStamped_Request__goals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPoseStamped_Request__goals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPoseStamped_Request__goals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(
    get_const_function__StartGoalPoseStamped_Request__goals(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPoseStamped_Request__goals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::PoseStamped *>(
    get_function__StartGoalPoseStamped_Request__goals(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::PoseStamped *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPoseStamped_Request__goals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PoseStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StartGoalPoseStamped_Request_message_member_array[2] = {
  {
    "starts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPoseStamped_Request, starts),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPoseStamped_Request__starts,  // size() function pointer
    get_const_function__StartGoalPoseStamped_Request__starts,  // get_const(index) function pointer
    get_function__StartGoalPoseStamped_Request__starts,  // get(index) function pointer
    fetch_function__StartGoalPoseStamped_Request__starts,  // fetch(index, &value) function pointer
    assign_function__StartGoalPoseStamped_Request__starts,  // assign(index, value) function pointer
    resize_function__StartGoalPoseStamped_Request__starts  // resize(index) function pointer
  },
  {
    "goals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPoseStamped_Request, goals),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPoseStamped_Request__goals,  // size() function pointer
    get_const_function__StartGoalPoseStamped_Request__goals,  // get_const(index) function pointer
    get_function__StartGoalPoseStamped_Request__goals,  // get(index) function pointer
    fetch_function__StartGoalPoseStamped_Request__goals,  // fetch(index, &value) function pointer
    assign_function__StartGoalPoseStamped_Request__goals,  // assign(index, value) function pointer
    resize_function__StartGoalPoseStamped_Request__goals  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StartGoalPoseStamped_Request_message_members = {
  "my_intermediate_interfaces::srv",  // message namespace
  "StartGoalPoseStamped_Request",  // message name
  2,  // number of fields
  sizeof(my_intermediate_interfaces::srv::StartGoalPoseStamped_Request),
  StartGoalPoseStamped_Request_message_member_array,  // message members
  StartGoalPoseStamped_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  StartGoalPoseStamped_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StartGoalPoseStamped_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StartGoalPoseStamped_Request_message_members,
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
get_message_type_support_handle<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request>()
{
  return &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPoseStamped_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_intermediate_interfaces, srv, StartGoalPoseStamped_Request)() {
  return &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPoseStamped_Request_message_type_support_handle;
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
// #include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__struct.hpp"
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

void StartGoalPoseStamped_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_intermediate_interfaces::srv::StartGoalPoseStamped_Response(_init);
}

void StartGoalPoseStamped_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response *>(message_memory);
  typed_message->~StartGoalPoseStamped_Response();
}

size_t size_function__StartGoalPoseStamped_Response__plans(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<nav_msgs::msg::Path> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StartGoalPoseStamped_Response__plans(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<nav_msgs::msg::Path> *>(untyped_member);
  return &member[index];
}

void * get_function__StartGoalPoseStamped_Response__plans(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<nav_msgs::msg::Path> *>(untyped_member);
  return &member[index];
}

void fetch_function__StartGoalPoseStamped_Response__plans(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const nav_msgs::msg::Path *>(
    get_const_function__StartGoalPoseStamped_Response__plans(untyped_member, index));
  auto & value = *reinterpret_cast<nav_msgs::msg::Path *>(untyped_value);
  value = item;
}

void assign_function__StartGoalPoseStamped_Response__plans(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<nav_msgs::msg::Path *>(
    get_function__StartGoalPoseStamped_Response__plans(untyped_member, index));
  const auto & value = *reinterpret_cast<const nav_msgs::msg::Path *>(untyped_value);
  item = value;
}

void resize_function__StartGoalPoseStamped_Response__plans(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<nav_msgs::msg::Path> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StartGoalPoseStamped_Response_message_member_array[1] = {
  {
    "plans",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<nav_msgs::msg::Path>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_intermediate_interfaces::srv::StartGoalPoseStamped_Response, plans),  // bytes offset in struct
    nullptr,  // default value
    size_function__StartGoalPoseStamped_Response__plans,  // size() function pointer
    get_const_function__StartGoalPoseStamped_Response__plans,  // get_const(index) function pointer
    get_function__StartGoalPoseStamped_Response__plans,  // get(index) function pointer
    fetch_function__StartGoalPoseStamped_Response__plans,  // fetch(index, &value) function pointer
    assign_function__StartGoalPoseStamped_Response__plans,  // assign(index, value) function pointer
    resize_function__StartGoalPoseStamped_Response__plans  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StartGoalPoseStamped_Response_message_members = {
  "my_intermediate_interfaces::srv",  // message namespace
  "StartGoalPoseStamped_Response",  // message name
  1,  // number of fields
  sizeof(my_intermediate_interfaces::srv::StartGoalPoseStamped_Response),
  StartGoalPoseStamped_Response_message_member_array,  // message members
  StartGoalPoseStamped_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  StartGoalPoseStamped_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StartGoalPoseStamped_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StartGoalPoseStamped_Response_message_members,
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
get_message_type_support_handle<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response>()
{
  return &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPoseStamped_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_intermediate_interfaces, srv, StartGoalPoseStamped_Response)() {
  return &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPoseStamped_Response_message_type_support_handle;
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
// #include "my_intermediate_interfaces/srv/detail/start_goal_pose_stamped__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers StartGoalPoseStamped_service_members = {
  "my_intermediate_interfaces::srv",  // service namespace
  "StartGoalPoseStamped",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<my_intermediate_interfaces::srv::StartGoalPoseStamped>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t StartGoalPoseStamped_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StartGoalPoseStamped_service_members,
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
get_service_type_support_handle<my_intermediate_interfaces::srv::StartGoalPoseStamped>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::my_intermediate_interfaces::srv::rosidl_typesupport_introspection_cpp::StartGoalPoseStamped_service_type_support_handle;
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
        ::my_intermediate_interfaces::srv::StartGoalPoseStamped_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_intermediate_interfaces::srv::StartGoalPoseStamped_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_intermediate_interfaces, srv, StartGoalPoseStamped)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<my_intermediate_interfaces::srv::StartGoalPoseStamped>();
}

#ifdef __cplusplus
}
#endif

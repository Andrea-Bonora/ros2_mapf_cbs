// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cbs_interfaces:srv/StartGoalPoseStamped.idl
// generated code does not contain a copyright notice
#include "cbs_interfaces/srv/detail/start_goal_pose_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cbs_interfaces/srv/detail/start_goal_pose_stamped__struct.hpp"

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
namespace cbs_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cbs_interfaces::msg::AgentPathRequest &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cbs_interfaces::msg::AgentPathRequest &);
size_t get_serialized_size(
  const cbs_interfaces::msg::AgentPathRequest &,
  size_t current_alignment);
size_t
max_serialized_size_AgentPathRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cbs_interfaces
cdr_serialize(
  const cbs_interfaces::srv::StartGoalPoseStamped_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: requests
  {
    size_t size = ros_message.requests.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cbs_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.requests[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cbs_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cbs_interfaces::srv::StartGoalPoseStamped_Request & ros_message)
{
  // Member: requests
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.requests.resize(size);
    for (size_t i = 0; i < size; i++) {
      cbs_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.requests[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cbs_interfaces
get_serialized_size(
  const cbs_interfaces::srv::StartGoalPoseStamped_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: requests
  {
    size_t array_size = ros_message.requests.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cbs_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.requests[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cbs_interfaces
max_serialized_size_StartGoalPoseStamped_Request(
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


  // Member: requests
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        cbs_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_AgentPathRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _StartGoalPoseStamped_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cbs_interfaces::srv::StartGoalPoseStamped_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StartGoalPoseStamped_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cbs_interfaces::srv::StartGoalPoseStamped_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StartGoalPoseStamped_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cbs_interfaces::srv::StartGoalPoseStamped_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StartGoalPoseStamped_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StartGoalPoseStamped_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StartGoalPoseStamped_Request__callbacks = {
  "cbs_interfaces::srv",
  "StartGoalPoseStamped_Request",
  _StartGoalPoseStamped_Request__cdr_serialize,
  _StartGoalPoseStamped_Request__cdr_deserialize,
  _StartGoalPoseStamped_Request__get_serialized_size,
  _StartGoalPoseStamped_Request__max_serialized_size
};

static rosidl_message_type_support_t _StartGoalPoseStamped_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartGoalPoseStamped_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cbs_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::srv::StartGoalPoseStamped_Request>()
{
  return &cbs_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPoseStamped_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cbs_interfaces, srv, StartGoalPoseStamped_Request)() {
  return &cbs_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPoseStamped_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace cbs_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cbs_interfaces::msg::AgentPath &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cbs_interfaces::msg::AgentPath &);
size_t get_serialized_size(
  const cbs_interfaces::msg::AgentPath &,
  size_t current_alignment);
size_t
max_serialized_size_AgentPath(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cbs_interfaces


namespace cbs_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cbs_interfaces
cdr_serialize(
  const cbs_interfaces::srv::StartGoalPoseStamped_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: plans
  {
    size_t size = ros_message.plans.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cbs_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.plans[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cbs_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cbs_interfaces::srv::StartGoalPoseStamped_Response & ros_message)
{
  // Member: plans
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.plans.resize(size);
    for (size_t i = 0; i < size; i++) {
      cbs_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.plans[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cbs_interfaces
get_serialized_size(
  const cbs_interfaces::srv::StartGoalPoseStamped_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: plans
  {
    size_t array_size = ros_message.plans.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cbs_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.plans[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cbs_interfaces
max_serialized_size_StartGoalPoseStamped_Response(
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


  // Member: plans
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        cbs_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_AgentPath(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _StartGoalPoseStamped_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cbs_interfaces::srv::StartGoalPoseStamped_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StartGoalPoseStamped_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cbs_interfaces::srv::StartGoalPoseStamped_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StartGoalPoseStamped_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cbs_interfaces::srv::StartGoalPoseStamped_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StartGoalPoseStamped_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StartGoalPoseStamped_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StartGoalPoseStamped_Response__callbacks = {
  "cbs_interfaces::srv",
  "StartGoalPoseStamped_Response",
  _StartGoalPoseStamped_Response__cdr_serialize,
  _StartGoalPoseStamped_Response__cdr_deserialize,
  _StartGoalPoseStamped_Response__get_serialized_size,
  _StartGoalPoseStamped_Response__max_serialized_size
};

static rosidl_message_type_support_t _StartGoalPoseStamped_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartGoalPoseStamped_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cbs_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cbs_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<cbs_interfaces::srv::StartGoalPoseStamped_Response>()
{
  return &cbs_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPoseStamped_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cbs_interfaces, srv, StartGoalPoseStamped_Response)() {
  return &cbs_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPoseStamped_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cbs_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _StartGoalPoseStamped__callbacks = {
  "cbs_interfaces::srv",
  "StartGoalPoseStamped",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cbs_interfaces, srv, StartGoalPoseStamped_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cbs_interfaces, srv, StartGoalPoseStamped_Response)(),
};

static rosidl_service_type_support_t _StartGoalPoseStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartGoalPoseStamped__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cbs_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cbs_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<cbs_interfaces::srv::StartGoalPoseStamped>()
{
  return &cbs_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPoseStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cbs_interfaces, srv, StartGoalPoseStamped)() {
  return &cbs_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPoseStamped__handle;
}

#ifdef __cplusplus
}
#endif

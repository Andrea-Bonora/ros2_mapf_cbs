// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cbs_interfaces:srv/StartGoalPoseStamped.idl
// generated code does not contain a copyright notice
#include "cbs_interfaces/srv/detail/start_goal_pose_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cbs_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cbs_interfaces/srv/detail/start_goal_pose_stamped__struct.h"
#include "cbs_interfaces/srv/detail/start_goal_pose_stamped__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "cbs_interfaces/msg/detail/agent_path_request__functions.h"  // requests

// forward declare type support functions
size_t get_serialized_size_cbs_interfaces__msg__AgentPathRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cbs_interfaces__msg__AgentPathRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cbs_interfaces, msg, AgentPathRequest)();


using _StartGoalPoseStamped_Request__ros_msg_type = cbs_interfaces__srv__StartGoalPoseStamped_Request;

static bool _StartGoalPoseStamped_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartGoalPoseStamped_Request__ros_msg_type * ros_message = static_cast<const _StartGoalPoseStamped_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: requests
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cbs_interfaces, msg, AgentPathRequest
      )()->data);
    size_t size = ros_message->requests.size;
    auto array_ptr = ros_message->requests.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _StartGoalPoseStamped_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartGoalPoseStamped_Request__ros_msg_type * ros_message = static_cast<_StartGoalPoseStamped_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: requests
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cbs_interfaces, msg, AgentPathRequest
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->requests.data) {
      cbs_interfaces__msg__AgentPathRequest__Sequence__fini(&ros_message->requests);
    }
    if (!cbs_interfaces__msg__AgentPathRequest__Sequence__init(&ros_message->requests, size)) {
      fprintf(stderr, "failed to create array for field 'requests'");
      return false;
    }
    auto array_ptr = ros_message->requests.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cbs_interfaces
size_t get_serialized_size_cbs_interfaces__srv__StartGoalPoseStamped_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartGoalPoseStamped_Request__ros_msg_type * ros_message = static_cast<const _StartGoalPoseStamped_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name requests
  {
    size_t array_size = ros_message->requests.size;
    auto array_ptr = ros_message->requests.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cbs_interfaces__msg__AgentPathRequest(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StartGoalPoseStamped_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cbs_interfaces__srv__StartGoalPoseStamped_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cbs_interfaces
size_t max_serialized_size_cbs_interfaces__srv__StartGoalPoseStamped_Request(
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

  // member: requests
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
        max_serialized_size_cbs_interfaces__msg__AgentPathRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StartGoalPoseStamped_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cbs_interfaces__srv__StartGoalPoseStamped_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StartGoalPoseStamped_Request = {
  "cbs_interfaces::srv",
  "StartGoalPoseStamped_Request",
  _StartGoalPoseStamped_Request__cdr_serialize,
  _StartGoalPoseStamped_Request__cdr_deserialize,
  _StartGoalPoseStamped_Request__get_serialized_size,
  _StartGoalPoseStamped_Request__max_serialized_size
};

static rosidl_message_type_support_t _StartGoalPoseStamped_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartGoalPoseStamped_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cbs_interfaces, srv, StartGoalPoseStamped_Request)() {
  return &_StartGoalPoseStamped_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cbs_interfaces/srv/detail/start_goal_pose_stamped__struct.h"
// already included above
// #include "cbs_interfaces/srv/detail/start_goal_pose_stamped__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "cbs_interfaces/msg/detail/agent_path__functions.h"  // plans

// forward declare type support functions
size_t get_serialized_size_cbs_interfaces__msg__AgentPath(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cbs_interfaces__msg__AgentPath(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cbs_interfaces, msg, AgentPath)();


using _StartGoalPoseStamped_Response__ros_msg_type = cbs_interfaces__srv__StartGoalPoseStamped_Response;

static bool _StartGoalPoseStamped_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartGoalPoseStamped_Response__ros_msg_type * ros_message = static_cast<const _StartGoalPoseStamped_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: plans
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cbs_interfaces, msg, AgentPath
      )()->data);
    size_t size = ros_message->plans.size;
    auto array_ptr = ros_message->plans.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _StartGoalPoseStamped_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartGoalPoseStamped_Response__ros_msg_type * ros_message = static_cast<_StartGoalPoseStamped_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: plans
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cbs_interfaces, msg, AgentPath
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->plans.data) {
      cbs_interfaces__msg__AgentPath__Sequence__fini(&ros_message->plans);
    }
    if (!cbs_interfaces__msg__AgentPath__Sequence__init(&ros_message->plans, size)) {
      fprintf(stderr, "failed to create array for field 'plans'");
      return false;
    }
    auto array_ptr = ros_message->plans.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cbs_interfaces
size_t get_serialized_size_cbs_interfaces__srv__StartGoalPoseStamped_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartGoalPoseStamped_Response__ros_msg_type * ros_message = static_cast<const _StartGoalPoseStamped_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name plans
  {
    size_t array_size = ros_message->plans.size;
    auto array_ptr = ros_message->plans.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cbs_interfaces__msg__AgentPath(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StartGoalPoseStamped_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cbs_interfaces__srv__StartGoalPoseStamped_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cbs_interfaces
size_t max_serialized_size_cbs_interfaces__srv__StartGoalPoseStamped_Response(
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

  // member: plans
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
        max_serialized_size_cbs_interfaces__msg__AgentPath(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StartGoalPoseStamped_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cbs_interfaces__srv__StartGoalPoseStamped_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StartGoalPoseStamped_Response = {
  "cbs_interfaces::srv",
  "StartGoalPoseStamped_Response",
  _StartGoalPoseStamped_Response__cdr_serialize,
  _StartGoalPoseStamped_Response__cdr_deserialize,
  _StartGoalPoseStamped_Response__get_serialized_size,
  _StartGoalPoseStamped_Response__max_serialized_size
};

static rosidl_message_type_support_t _StartGoalPoseStamped_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartGoalPoseStamped_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cbs_interfaces, srv, StartGoalPoseStamped_Response)() {
  return &_StartGoalPoseStamped_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cbs_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cbs_interfaces/srv/start_goal_pose_stamped.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t StartGoalPoseStamped__callbacks = {
  "cbs_interfaces::srv",
  "StartGoalPoseStamped",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cbs_interfaces, srv, StartGoalPoseStamped_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cbs_interfaces, srv, StartGoalPoseStamped_Response)(),
};

static rosidl_service_type_support_t StartGoalPoseStamped__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &StartGoalPoseStamped__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cbs_interfaces, srv, StartGoalPoseStamped)() {
  return &StartGoalPoseStamped__handle;
}

#if defined(__cplusplus)
}
#endif

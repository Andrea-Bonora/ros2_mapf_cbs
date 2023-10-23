// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice
#include "my_intermediate_interfaces/srv/detail/start_goal_positions__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
cdr_serialize(
  const my_intermediate_interfaces::srv::StartGoalPositions_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: start_x
  {
    cdr << ros_message.start_x;
  }
  // Member: start_y
  {
    cdr << ros_message.start_y;
  }
  // Member: start_z
  {
    cdr << ros_message.start_z;
  }
  // Member: end_x
  {
    cdr << ros_message.end_x;
  }
  // Member: end_y
  {
    cdr << ros_message.end_y;
  }
  // Member: end_z
  {
    cdr << ros_message.end_z;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_intermediate_interfaces::srv::StartGoalPositions_Request & ros_message)
{
  // Member: start_x
  {
    cdr >> ros_message.start_x;
  }

  // Member: start_y
  {
    cdr >> ros_message.start_y;
  }

  // Member: start_z
  {
    cdr >> ros_message.start_z;
  }

  // Member: end_x
  {
    cdr >> ros_message.end_x;
  }

  // Member: end_y
  {
    cdr >> ros_message.end_y;
  }

  // Member: end_z
  {
    cdr >> ros_message.end_z;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
get_serialized_size(
  const my_intermediate_interfaces::srv::StartGoalPositions_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: start_x
  {
    size_t array_size = ros_message.start_x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.start_x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_y
  {
    size_t array_size = ros_message.start_y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.start_y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_z
  {
    size_t array_size = ros_message.start_z.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.start_z[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_x
  {
    size_t array_size = ros_message.end_x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.end_x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_y
  {
    size_t array_size = ros_message.end_y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.end_y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_z
  {
    size_t array_size = ros_message.end_z.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.end_z[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
max_serialized_size_StartGoalPositions_Request(
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


  // Member: start_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: start_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: start_z
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: end_z
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _StartGoalPositions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_intermediate_interfaces::srv::StartGoalPositions_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StartGoalPositions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_intermediate_interfaces::srv::StartGoalPositions_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StartGoalPositions_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_intermediate_interfaces::srv::StartGoalPositions_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StartGoalPositions_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StartGoalPositions_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StartGoalPositions_Request__callbacks = {
  "my_intermediate_interfaces::srv",
  "StartGoalPositions_Request",
  _StartGoalPositions_Request__cdr_serialize,
  _StartGoalPositions_Request__cdr_deserialize,
  _StartGoalPositions_Request__get_serialized_size,
  _StartGoalPositions_Request__max_serialized_size
};

static rosidl_message_type_support_t _StartGoalPositions_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartGoalPositions_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_intermediate_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<my_intermediate_interfaces::srv::StartGoalPositions_Request>()
{
  return &my_intermediate_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPositions_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_intermediate_interfaces, srv, StartGoalPositions_Request)() {
  return &my_intermediate_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPositions_Request__handle;
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
namespace my_intermediate_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const my_intermediate_interfaces::msg::AgentPath &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  my_intermediate_interfaces::msg::AgentPath &);
size_t get_serialized_size(
  const my_intermediate_interfaces::msg::AgentPath &,
  size_t current_alignment);
size_t
max_serialized_size_AgentPath(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
cdr_serialize(
  const my_intermediate_interfaces::srv::StartGoalPositions_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: plans
  {
    size_t size = ros_message.plans.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.plans[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_intermediate_interfaces::srv::StartGoalPositions_Response & ros_message)
{
  // Member: plans
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.plans.resize(size);
    for (size_t i = 0; i < size; i++) {
      my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.plans[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
get_serialized_size(
  const my_intermediate_interfaces::srv::StartGoalPositions_Response & ros_message,
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
        my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.plans[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_intermediate_interfaces
max_serialized_size_StartGoalPositions_Response(
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
        my_intermediate_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_AgentPath(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _StartGoalPositions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_intermediate_interfaces::srv::StartGoalPositions_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StartGoalPositions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_intermediate_interfaces::srv::StartGoalPositions_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StartGoalPositions_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_intermediate_interfaces::srv::StartGoalPositions_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StartGoalPositions_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StartGoalPositions_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StartGoalPositions_Response__callbacks = {
  "my_intermediate_interfaces::srv",
  "StartGoalPositions_Response",
  _StartGoalPositions_Response__cdr_serialize,
  _StartGoalPositions_Response__cdr_deserialize,
  _StartGoalPositions_Response__get_serialized_size,
  _StartGoalPositions_Response__max_serialized_size
};

static rosidl_message_type_support_t _StartGoalPositions_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartGoalPositions_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_intermediate_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_intermediate_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<my_intermediate_interfaces::srv::StartGoalPositions_Response>()
{
  return &my_intermediate_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPositions_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_intermediate_interfaces, srv, StartGoalPositions_Response)() {
  return &my_intermediate_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPositions_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace my_intermediate_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _StartGoalPositions__callbacks = {
  "my_intermediate_interfaces::srv",
  "StartGoalPositions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_intermediate_interfaces, srv, StartGoalPositions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_intermediate_interfaces, srv, StartGoalPositions_Response)(),
};

static rosidl_service_type_support_t _StartGoalPositions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StartGoalPositions__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_intermediate_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_intermediate_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<my_intermediate_interfaces::srv::StartGoalPositions>()
{
  return &my_intermediate_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPositions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_intermediate_interfaces, srv, StartGoalPositions)() {
  return &my_intermediate_interfaces::srv::typesupport_fastrtps_cpp::_StartGoalPositions__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_robot_interfaces:srv/SetLedStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_robot_interfaces/srv/detail/set_led_status__rosidl_typesupport_introspection_c.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_robot_interfaces/srv/detail/set_led_status__functions.h"
#include "my_robot_interfaces/srv/detail/set_led_status__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__srv__SetLedStatus_Request__init(message_memory);
}

void my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_fini_function(void * message_memory)
{
  my_robot_interfaces__srv__SetLedStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_message_member_array[2] = {
  {
    "led_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__srv__SetLedStatus_Request, led_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__srv__SetLedStatus_Request, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_message_members = {
  "my_robot_interfaces__srv",  // message namespace
  "SetLedStatus_Request",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces__srv__SetLedStatus_Request),
  my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_message_member_array,  // message members
  my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_message_type_support_handle = {
  0,
  &my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, SetLedStatus_Request)() {
  if (!my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__srv__SetLedStatus_Request__rosidl_typesupport_introspection_c__SetLedStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_robot_interfaces/srv/detail/set_led_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_robot_interfaces/srv/detail/set_led_status__functions.h"
// already included above
// #include "my_robot_interfaces/srv/detail/set_led_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_robot_interfaces__srv__SetLedStatus_Response__init(message_memory);
}

void my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_fini_function(void * message_memory)
{
  my_robot_interfaces__srv__SetLedStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces__srv__SetLedStatus_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_message_members = {
  "my_robot_interfaces__srv",  // message namespace
  "SetLedStatus_Response",  // message name
  1,  // number of fields
  sizeof(my_robot_interfaces__srv__SetLedStatus_Response),
  my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_message_member_array,  // message members
  my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_message_type_support_handle = {
  0,
  &my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, SetLedStatus_Response)() {
  if (!my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_message_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_robot_interfaces__srv__SetLedStatus_Response__rosidl_typesupport_introspection_c__SetLedStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/srv/detail/set_led_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_robot_interfaces__srv__detail__set_led_status__rosidl_typesupport_introspection_c__SetLedStatus_service_members = {
  "my_robot_interfaces__srv",  // service namespace
  "SetLedStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_robot_interfaces__srv__detail__set_led_status__rosidl_typesupport_introspection_c__SetLedStatus_Request_message_type_support_handle,
  NULL  // response message
  // my_robot_interfaces__srv__detail__set_led_status__rosidl_typesupport_introspection_c__SetLedStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_robot_interfaces__srv__detail__set_led_status__rosidl_typesupport_introspection_c__SetLedStatus_service_type_support_handle = {
  0,
  &my_robot_interfaces__srv__detail__set_led_status__rosidl_typesupport_introspection_c__SetLedStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, SetLedStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, SetLedStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, SetLedStatus)() {
  if (!my_robot_interfaces__srv__detail__set_led_status__rosidl_typesupport_introspection_c__SetLedStatus_service_type_support_handle.typesupport_identifier) {
    my_robot_interfaces__srv__detail__set_led_status__rosidl_typesupport_introspection_c__SetLedStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_robot_interfaces__srv__detail__set_led_status__rosidl_typesupport_introspection_c__SetLedStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, SetLedStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, srv, SetLedStatus_Response)()->data;
  }

  return &my_robot_interfaces__srv__detail__set_led_status__rosidl_typesupport_introspection_c__SetLedStatus_service_type_support_handle;
}

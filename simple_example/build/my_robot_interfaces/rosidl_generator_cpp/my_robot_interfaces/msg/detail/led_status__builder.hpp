// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/LedStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATUS__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/led_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_LedStatus_led3
{
public:
  explicit Init_LedStatus_led3(::my_robot_interfaces::msg::LedStatus & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::LedStatus led3(::my_robot_interfaces::msg::LedStatus::_led3_type arg)
  {
    msg_.led3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::LedStatus msg_;
};

class Init_LedStatus_led2
{
public:
  explicit Init_LedStatus_led2(::my_robot_interfaces::msg::LedStatus & msg)
  : msg_(msg)
  {}
  Init_LedStatus_led3 led2(::my_robot_interfaces::msg::LedStatus::_led2_type arg)
  {
    msg_.led2 = std::move(arg);
    return Init_LedStatus_led3(msg_);
  }

private:
  ::my_robot_interfaces::msg::LedStatus msg_;
};

class Init_LedStatus_led1
{
public:
  Init_LedStatus_led1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedStatus_led2 led1(::my_robot_interfaces::msg::LedStatus::_led1_type arg)
  {
    msg_.led1 = std::move(arg);
    return Init_LedStatus_led2(msg_);
  }

private:
  ::my_robot_interfaces::msg::LedStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::LedStatus>()
{
  return my_robot_interfaces::msg::builder::Init_LedStatus_led1();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATUS__BUILDER_HPP_

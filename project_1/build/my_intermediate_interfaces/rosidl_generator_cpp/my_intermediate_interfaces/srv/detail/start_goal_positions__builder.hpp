// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__BUILDER_HPP_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_intermediate_interfaces/srv/detail/start_goal_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_intermediate_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartGoalPositions_Request_end_z
{
public:
  explicit Init_StartGoalPositions_Request_end_z(::my_intermediate_interfaces::srv::StartGoalPositions_Request & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::srv::StartGoalPositions_Request end_z(::my_intermediate_interfaces::srv::StartGoalPositions_Request::_end_z_type arg)
  {
    msg_.end_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPositions_Request msg_;
};

class Init_StartGoalPositions_Request_end_y
{
public:
  explicit Init_StartGoalPositions_Request_end_y(::my_intermediate_interfaces::srv::StartGoalPositions_Request & msg)
  : msg_(msg)
  {}
  Init_StartGoalPositions_Request_end_z end_y(::my_intermediate_interfaces::srv::StartGoalPositions_Request::_end_y_type arg)
  {
    msg_.end_y = std::move(arg);
    return Init_StartGoalPositions_Request_end_z(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPositions_Request msg_;
};

class Init_StartGoalPositions_Request_end_x
{
public:
  explicit Init_StartGoalPositions_Request_end_x(::my_intermediate_interfaces::srv::StartGoalPositions_Request & msg)
  : msg_(msg)
  {}
  Init_StartGoalPositions_Request_end_y end_x(::my_intermediate_interfaces::srv::StartGoalPositions_Request::_end_x_type arg)
  {
    msg_.end_x = std::move(arg);
    return Init_StartGoalPositions_Request_end_y(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPositions_Request msg_;
};

class Init_StartGoalPositions_Request_start_z
{
public:
  explicit Init_StartGoalPositions_Request_start_z(::my_intermediate_interfaces::srv::StartGoalPositions_Request & msg)
  : msg_(msg)
  {}
  Init_StartGoalPositions_Request_end_x start_z(::my_intermediate_interfaces::srv::StartGoalPositions_Request::_start_z_type arg)
  {
    msg_.start_z = std::move(arg);
    return Init_StartGoalPositions_Request_end_x(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPositions_Request msg_;
};

class Init_StartGoalPositions_Request_start_y
{
public:
  explicit Init_StartGoalPositions_Request_start_y(::my_intermediate_interfaces::srv::StartGoalPositions_Request & msg)
  : msg_(msg)
  {}
  Init_StartGoalPositions_Request_start_z start_y(::my_intermediate_interfaces::srv::StartGoalPositions_Request::_start_y_type arg)
  {
    msg_.start_y = std::move(arg);
    return Init_StartGoalPositions_Request_start_z(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPositions_Request msg_;
};

class Init_StartGoalPositions_Request_start_x
{
public:
  Init_StartGoalPositions_Request_start_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartGoalPositions_Request_start_y start_x(::my_intermediate_interfaces::srv::StartGoalPositions_Request::_start_x_type arg)
  {
    msg_.start_x = std::move(arg);
    return Init_StartGoalPositions_Request_start_y(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPositions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::srv::StartGoalPositions_Request>()
{
  return my_intermediate_interfaces::srv::builder::Init_StartGoalPositions_Request_start_x();
}

}  // namespace my_intermediate_interfaces


namespace my_intermediate_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartGoalPositions_Response_plans
{
public:
  Init_StartGoalPositions_Response_plans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_intermediate_interfaces::srv::StartGoalPositions_Response plans(::my_intermediate_interfaces::srv::StartGoalPositions_Response::_plans_type arg)
  {
    msg_.plans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::srv::StartGoalPositions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::srv::StartGoalPositions_Response>()
{
  return my_intermediate_interfaces::srv::builder::Init_StartGoalPositions_Response_plans();
}

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__BUILDER_HPP_

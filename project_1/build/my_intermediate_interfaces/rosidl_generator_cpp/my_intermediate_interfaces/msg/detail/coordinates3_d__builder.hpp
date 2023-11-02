// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_intermediate_interfaces:msg/Coordinates3D.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__COORDINATES3_D__BUILDER_HPP_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__COORDINATES3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_intermediate_interfaces/msg/detail/coordinates3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_intermediate_interfaces
{

namespace msg
{

namespace builder
{

class Init_Coordinates3D_z
{
public:
  explicit Init_Coordinates3D_z(::my_intermediate_interfaces::msg::Coordinates3D & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::msg::Coordinates3D z(::my_intermediate_interfaces::msg::Coordinates3D::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::Coordinates3D msg_;
};

class Init_Coordinates3D_y
{
public:
  explicit Init_Coordinates3D_y(::my_intermediate_interfaces::msg::Coordinates3D & msg)
  : msg_(msg)
  {}
  Init_Coordinates3D_z y(::my_intermediate_interfaces::msg::Coordinates3D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Coordinates3D_z(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::Coordinates3D msg_;
};

class Init_Coordinates3D_x
{
public:
  Init_Coordinates3D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinates3D_y x(::my_intermediate_interfaces::msg::Coordinates3D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Coordinates3D_y(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::Coordinates3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::msg::Coordinates3D>()
{
  return my_intermediate_interfaces::msg::builder::Init_Coordinates3D_x();
}

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__COORDINATES3_D__BUILDER_HPP_

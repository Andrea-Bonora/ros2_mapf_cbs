// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_intermediate_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__BUILDER_HPP_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_intermediate_interfaces/msg/detail/edge_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_intermediate_interfaces
{

namespace msg
{

namespace builder
{

class Init_EdgeConstraint_time_step
{
public:
  explicit Init_EdgeConstraint_time_step(::my_intermediate_interfaces::msg::EdgeConstraint & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::msg::EdgeConstraint time_step(::my_intermediate_interfaces::msg::EdgeConstraint::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::EdgeConstraint msg_;
};

class Init_EdgeConstraint_cell_to
{
public:
  explicit Init_EdgeConstraint_cell_to(::my_intermediate_interfaces::msg::EdgeConstraint & msg)
  : msg_(msg)
  {}
  Init_EdgeConstraint_time_step cell_to(::my_intermediate_interfaces::msg::EdgeConstraint::_cell_to_type arg)
  {
    msg_.cell_to = std::move(arg);
    return Init_EdgeConstraint_time_step(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::EdgeConstraint msg_;
};

class Init_EdgeConstraint_cell_from
{
public:
  Init_EdgeConstraint_cell_from()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EdgeConstraint_cell_to cell_from(::my_intermediate_interfaces::msg::EdgeConstraint::_cell_from_type arg)
  {
    msg_.cell_from = std::move(arg);
    return Init_EdgeConstraint_cell_to(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::EdgeConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::msg::EdgeConstraint>()
{
  return my_intermediate_interfaces::msg::builder::Init_EdgeConstraint_cell_from();
}

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__BUILDER_HPP_

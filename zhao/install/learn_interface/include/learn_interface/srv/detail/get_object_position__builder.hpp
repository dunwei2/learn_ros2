// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from learn_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__BUILDER_HPP_
#define LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__BUILDER_HPP_

#include "learn_interface/srv/detail/get_object_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace learn_interface
{

namespace srv
{

namespace builder
{

class Init_GetObjectPosition_Request_get
{
public:
  Init_GetObjectPosition_Request_get()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::learn_interface::srv::GetObjectPosition_Request get(::learn_interface::srv::GetObjectPosition_Request::_get_type arg)
  {
    msg_.get = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learn_interface::srv::GetObjectPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learn_interface::srv::GetObjectPosition_Request>()
{
  return learn_interface::srv::builder::Init_GetObjectPosition_Request_get();
}

}  // namespace learn_interface


namespace learn_interface
{

namespace srv
{

namespace builder
{

class Init_GetObjectPosition_Response_y
{
public:
  explicit Init_GetObjectPosition_Response_y(::learn_interface::srv::GetObjectPosition_Response & msg)
  : msg_(msg)
  {}
  ::learn_interface::srv::GetObjectPosition_Response y(::learn_interface::srv::GetObjectPosition_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learn_interface::srv::GetObjectPosition_Response msg_;
};

class Init_GetObjectPosition_Response_x
{
public:
  Init_GetObjectPosition_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetObjectPosition_Response_y x(::learn_interface::srv::GetObjectPosition_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetObjectPosition_Response_y(msg_);
  }

private:
  ::learn_interface::srv::GetObjectPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learn_interface::srv::GetObjectPosition_Response>()
{
  return learn_interface::srv::builder::Init_GetObjectPosition_Response_x();
}

}  // namespace learn_interface

#endif  // LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__BUILDER_HPP_

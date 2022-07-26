// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learn_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__TRAITS_HPP_
#define LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__TRAITS_HPP_

#include "learn_interface/srv/detail/get_object_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::GetObjectPosition_Request>()
{
  return "learn_interface::srv::GetObjectPosition_Request";
}

template<>
inline const char * name<learn_interface::srv::GetObjectPosition_Request>()
{
  return "learn_interface/srv/GetObjectPosition_Request";
}

template<>
struct has_fixed_size<learn_interface::srv::GetObjectPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::GetObjectPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::GetObjectPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::GetObjectPosition_Response>()
{
  return "learn_interface::srv::GetObjectPosition_Response";
}

template<>
inline const char * name<learn_interface::srv::GetObjectPosition_Response>()
{
  return "learn_interface/srv/GetObjectPosition_Response";
}

template<>
struct has_fixed_size<learn_interface::srv::GetObjectPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::GetObjectPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::GetObjectPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::GetObjectPosition>()
{
  return "learn_interface::srv::GetObjectPosition";
}

template<>
inline const char * name<learn_interface::srv::GetObjectPosition>()
{
  return "learn_interface/srv/GetObjectPosition";
}

template<>
struct has_fixed_size<learn_interface::srv::GetObjectPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<learn_interface::srv::GetObjectPosition_Request>::value &&
    has_fixed_size<learn_interface::srv::GetObjectPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<learn_interface::srv::GetObjectPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<learn_interface::srv::GetObjectPosition_Request>::value &&
    has_bounded_size<learn_interface::srv::GetObjectPosition_Response>::value
  >
{
};

template<>
struct is_service<learn_interface::srv::GetObjectPosition>
  : std::true_type
{
};

template<>
struct is_service_request<learn_interface::srv::GetObjectPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learn_interface::srv::GetObjectPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__TRAITS_HPP_

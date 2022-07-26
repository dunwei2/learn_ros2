// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learn_interface:srv/AddTwoInt32s.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__SRV__DETAIL__ADD_TWO_INT32S__TRAITS_HPP_
#define LEARN_INTERFACE__SRV__DETAIL__ADD_TWO_INT32S__TRAITS_HPP_

#include "learn_interface/srv/detail/add_two_int32s__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::AddTwoInt32s_Request>()
{
  return "learn_interface::srv::AddTwoInt32s_Request";
}

template<>
inline const char * name<learn_interface::srv::AddTwoInt32s_Request>()
{
  return "learn_interface/srv/AddTwoInt32s_Request";
}

template<>
struct has_fixed_size<learn_interface::srv::AddTwoInt32s_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::AddTwoInt32s_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::AddTwoInt32s_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::AddTwoInt32s_Response>()
{
  return "learn_interface::srv::AddTwoInt32s_Response";
}

template<>
inline const char * name<learn_interface::srv::AddTwoInt32s_Response>()
{
  return "learn_interface/srv/AddTwoInt32s_Response";
}

template<>
struct has_fixed_size<learn_interface::srv::AddTwoInt32s_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::AddTwoInt32s_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::AddTwoInt32s_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::AddTwoInt32s>()
{
  return "learn_interface::srv::AddTwoInt32s";
}

template<>
inline const char * name<learn_interface::srv::AddTwoInt32s>()
{
  return "learn_interface/srv/AddTwoInt32s";
}

template<>
struct has_fixed_size<learn_interface::srv::AddTwoInt32s>
  : std::integral_constant<
    bool,
    has_fixed_size<learn_interface::srv::AddTwoInt32s_Request>::value &&
    has_fixed_size<learn_interface::srv::AddTwoInt32s_Response>::value
  >
{
};

template<>
struct has_bounded_size<learn_interface::srv::AddTwoInt32s>
  : std::integral_constant<
    bool,
    has_bounded_size<learn_interface::srv::AddTwoInt32s_Request>::value &&
    has_bounded_size<learn_interface::srv::AddTwoInt32s_Response>::value
  >
{
};

template<>
struct is_service<learn_interface::srv::AddTwoInt32s>
  : std::true_type
{
};

template<>
struct is_service_request<learn_interface::srv::AddTwoInt32s_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learn_interface::srv::AddTwoInt32s_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEARN_INTERFACE__SRV__DETAIL__ADD_TWO_INT32S__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learn_interface:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_
#define LEARN_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_

#include "learn_interface/srv/detail/add_two_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::AddTwoInts_Request>()
{
  return "learn_interface::srv::AddTwoInts_Request";
}

template<>
inline const char * name<learn_interface::srv::AddTwoInts_Request>()
{
  return "learn_interface/srv/AddTwoInts_Request";
}

template<>
struct has_fixed_size<learn_interface::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::AddTwoInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::AddTwoInts_Response>()
{
  return "learn_interface::srv::AddTwoInts_Response";
}

template<>
inline const char * name<learn_interface::srv::AddTwoInts_Response>()
{
  return "learn_interface/srv/AddTwoInts_Response";
}

template<>
struct has_fixed_size<learn_interface::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::AddTwoInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::AddTwoInts>()
{
  return "learn_interface::srv::AddTwoInts";
}

template<>
inline const char * name<learn_interface::srv::AddTwoInts>()
{
  return "learn_interface/srv/AddTwoInts";
}

template<>
struct has_fixed_size<learn_interface::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_fixed_size<learn_interface::srv::AddTwoInts_Request>::value &&
    has_fixed_size<learn_interface::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<learn_interface::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_bounded_size<learn_interface::srv::AddTwoInts_Request>::value &&
    has_bounded_size<learn_interface::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct is_service<learn_interface::srv::AddTwoInts>
  : std::true_type
{
};

template<>
struct is_service_request<learn_interface::srv::AddTwoInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learn_interface::srv::AddTwoInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEARN_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_

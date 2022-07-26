// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learn_interface:msg/ObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__MSG__DETAIL__OBJECT_POSITION__TRAITS_HPP_
#define LEARN_INTERFACE__MSG__DETAIL__OBJECT_POSITION__TRAITS_HPP_

#include "learn_interface/msg/detail/object_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::msg::ObjectPosition>()
{
  return "learn_interface::msg::ObjectPosition";
}

template<>
inline const char * name<learn_interface::msg::ObjectPosition>()
{
  return "learn_interface/msg/ObjectPosition";
}

template<>
struct has_fixed_size<learn_interface::msg::ObjectPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::msg::ObjectPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::msg::ObjectPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEARN_INTERFACE__MSG__DETAIL__OBJECT_POSITION__TRAITS_HPP_

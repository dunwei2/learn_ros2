// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learn_interface:action/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__ACTION__DETAIL__MOVE_CIRCLE__TRAITS_HPP_
#define LEARN_INTERFACE__ACTION__DETAIL__MOVE_CIRCLE__TRAITS_HPP_

#include "learn_interface/action/detail/move_circle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_Goal>()
{
  return "learn_interface::action::MoveCircle_Goal";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_Goal>()
{
  return "learn_interface/action/MoveCircle_Goal";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::action::MoveCircle_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_Result>()
{
  return "learn_interface::action::MoveCircle_Result";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_Result>()
{
  return "learn_interface/action/MoveCircle_Result";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::action::MoveCircle_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_Feedback>()
{
  return "learn_interface::action::MoveCircle_Feedback";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_Feedback>()
{
  return "learn_interface/action/MoveCircle_Feedback";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::action::MoveCircle_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "learn_interface/action/detail/move_circle__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_SendGoal_Request>()
{
  return "learn_interface::action::MoveCircle_SendGoal_Request";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_SendGoal_Request>()
{
  return "learn_interface/action/MoveCircle_SendGoal_Request";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<learn_interface::action::MoveCircle_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<learn_interface::action::MoveCircle_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<learn_interface::action::MoveCircle_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_SendGoal_Response>()
{
  return "learn_interface::action::MoveCircle_SendGoal_Response";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_SendGoal_Response>()
{
  return "learn_interface/action/MoveCircle_SendGoal_Response";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<learn_interface::action::MoveCircle_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_SendGoal>()
{
  return "learn_interface::action::MoveCircle_SendGoal";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_SendGoal>()
{
  return "learn_interface/action/MoveCircle_SendGoal";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<learn_interface::action::MoveCircle_SendGoal_Request>::value &&
    has_fixed_size<learn_interface::action::MoveCircle_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<learn_interface::action::MoveCircle_SendGoal_Request>::value &&
    has_bounded_size<learn_interface::action::MoveCircle_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<learn_interface::action::MoveCircle_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<learn_interface::action::MoveCircle_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learn_interface::action::MoveCircle_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_GetResult_Request>()
{
  return "learn_interface::action::MoveCircle_GetResult_Request";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_GetResult_Request>()
{
  return "learn_interface/action/MoveCircle_GetResult_Request";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<learn_interface::action::MoveCircle_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "learn_interface/action/detail/move_circle__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_GetResult_Response>()
{
  return "learn_interface::action::MoveCircle_GetResult_Response";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_GetResult_Response>()
{
  return "learn_interface/action/MoveCircle_GetResult_Response";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<learn_interface::action::MoveCircle_Result>::value> {};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<learn_interface::action::MoveCircle_Result>::value> {};

template<>
struct is_message<learn_interface::action::MoveCircle_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_GetResult>()
{
  return "learn_interface::action::MoveCircle_GetResult";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_GetResult>()
{
  return "learn_interface/action/MoveCircle_GetResult";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<learn_interface::action::MoveCircle_GetResult_Request>::value &&
    has_fixed_size<learn_interface::action::MoveCircle_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<learn_interface::action::MoveCircle_GetResult_Request>::value &&
    has_bounded_size<learn_interface::action::MoveCircle_GetResult_Response>::value
  >
{
};

template<>
struct is_service<learn_interface::action::MoveCircle_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<learn_interface::action::MoveCircle_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learn_interface::action::MoveCircle_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "learn_interface/action/detail/move_circle__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::action::MoveCircle_FeedbackMessage>()
{
  return "learn_interface::action::MoveCircle_FeedbackMessage";
}

template<>
inline const char * name<learn_interface::action::MoveCircle_FeedbackMessage>()
{
  return "learn_interface/action/MoveCircle_FeedbackMessage";
}

template<>
struct has_fixed_size<learn_interface::action::MoveCircle_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<learn_interface::action::MoveCircle_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<learn_interface::action::MoveCircle_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<learn_interface::action::MoveCircle_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<learn_interface::action::MoveCircle_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<learn_interface::action::MoveCircle>
  : std::true_type
{
};

template<>
struct is_action_goal<learn_interface::action::MoveCircle_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<learn_interface::action::MoveCircle_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<learn_interface::action::MoveCircle_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // LEARN_INTERFACE__ACTION__DETAIL__MOVE_CIRCLE__TRAITS_HPP_

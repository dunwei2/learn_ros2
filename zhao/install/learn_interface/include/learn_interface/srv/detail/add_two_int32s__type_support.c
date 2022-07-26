// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from learn_interface:srv/AddTwoInt32s.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "learn_interface/srv/detail/add_two_int32s__rosidl_typesupport_introspection_c.h"
#include "learn_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "learn_interface/srv/detail/add_two_int32s__functions.h"
#include "learn_interface/srv/detail/add_two_int32s__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learn_interface__srv__AddTwoInt32s_Request__init(message_memory);
}

void AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_fini_function(void * message_memory)
{
  learn_interface__srv__AddTwoInt32s_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learn_interface__srv__AddTwoInt32s_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learn_interface__srv__AddTwoInt32s_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_message_members = {
  "learn_interface__srv",  // message namespace
  "AddTwoInt32s_Request",  // message name
  2,  // number of fields
  sizeof(learn_interface__srv__AddTwoInt32s_Request),
  AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_message_member_array,  // message members
  AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_message_type_support_handle = {
  0,
  &AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learn_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn_interface, srv, AddTwoInt32s_Request)() {
  if (!AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_message_type_support_handle.typesupport_identifier) {
    AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddTwoInt32s_Request__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "learn_interface/srv/detail/add_two_int32s__rosidl_typesupport_introspection_c.h"
// already included above
// #include "learn_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "learn_interface/srv/detail/add_two_int32s__functions.h"
// already included above
// #include "learn_interface/srv/detail/add_two_int32s__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  learn_interface__srv__AddTwoInt32s_Response__init(message_memory);
}

void AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_fini_function(void * message_memory)
{
  learn_interface__srv__AddTwoInt32s_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(learn_interface__srv__AddTwoInt32s_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_message_members = {
  "learn_interface__srv",  // message namespace
  "AddTwoInt32s_Response",  // message name
  1,  // number of fields
  sizeof(learn_interface__srv__AddTwoInt32s_Response),
  AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_message_member_array,  // message members
  AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_message_type_support_handle = {
  0,
  &AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learn_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn_interface, srv, AddTwoInt32s_Response)() {
  if (!AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_message_type_support_handle.typesupport_identifier) {
    AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddTwoInt32s_Response__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "learn_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "learn_interface/srv/detail/add_two_int32s__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers learn_interface__srv__detail__add_two_int32s__rosidl_typesupport_introspection_c__AddTwoInt32s_service_members = {
  "learn_interface__srv",  // service namespace
  "AddTwoInt32s",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // learn_interface__srv__detail__add_two_int32s__rosidl_typesupport_introspection_c__AddTwoInt32s_Request_message_type_support_handle,
  NULL  // response message
  // learn_interface__srv__detail__add_two_int32s__rosidl_typesupport_introspection_c__AddTwoInt32s_Response_message_type_support_handle
};

static rosidl_service_type_support_t learn_interface__srv__detail__add_two_int32s__rosidl_typesupport_introspection_c__AddTwoInt32s_service_type_support_handle = {
  0,
  &learn_interface__srv__detail__add_two_int32s__rosidl_typesupport_introspection_c__AddTwoInt32s_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn_interface, srv, AddTwoInt32s_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn_interface, srv, AddTwoInt32s_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_learn_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn_interface, srv, AddTwoInt32s)() {
  if (!learn_interface__srv__detail__add_two_int32s__rosidl_typesupport_introspection_c__AddTwoInt32s_service_type_support_handle.typesupport_identifier) {
    learn_interface__srv__detail__add_two_int32s__rosidl_typesupport_introspection_c__AddTwoInt32s_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)learn_interface__srv__detail__add_two_int32s__rosidl_typesupport_introspection_c__AddTwoInt32s_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn_interface, srv, AddTwoInt32s_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, learn_interface, srv, AddTwoInt32s_Response)()->data;
  }

  return &learn_interface__srv__detail__add_two_int32s__rosidl_typesupport_introspection_c__AddTwoInt32s_service_type_support_handle;
}

// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from learn_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__FUNCTIONS_H_
#define LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "learn_interface/msg/rosidl_generator_c__visibility_control.h"

#include "learn_interface/srv/detail/get_object_position__struct.h"

/// Initialize srv/GetObjectPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * learn_interface__srv__GetObjectPosition_Request
 * )) before or use
 * learn_interface__srv__GetObjectPosition_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
bool
learn_interface__srv__GetObjectPosition_Request__init(learn_interface__srv__GetObjectPosition_Request * msg);

/// Finalize srv/GetObjectPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__srv__GetObjectPosition_Request__fini(learn_interface__srv__GetObjectPosition_Request * msg);

/// Create srv/GetObjectPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * learn_interface__srv__GetObjectPosition_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
learn_interface__srv__GetObjectPosition_Request *
learn_interface__srv__GetObjectPosition_Request__create();

/// Destroy srv/GetObjectPosition message.
/**
 * It calls
 * learn_interface__srv__GetObjectPosition_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__srv__GetObjectPosition_Request__destroy(learn_interface__srv__GetObjectPosition_Request * msg);


/// Initialize array of srv/GetObjectPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * learn_interface__srv__GetObjectPosition_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
bool
learn_interface__srv__GetObjectPosition_Request__Sequence__init(learn_interface__srv__GetObjectPosition_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetObjectPosition messages.
/**
 * It calls
 * learn_interface__srv__GetObjectPosition_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__srv__GetObjectPosition_Request__Sequence__fini(learn_interface__srv__GetObjectPosition_Request__Sequence * array);

/// Create array of srv/GetObjectPosition messages.
/**
 * It allocates the memory for the array and calls
 * learn_interface__srv__GetObjectPosition_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
learn_interface__srv__GetObjectPosition_Request__Sequence *
learn_interface__srv__GetObjectPosition_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetObjectPosition messages.
/**
 * It calls
 * learn_interface__srv__GetObjectPosition_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__srv__GetObjectPosition_Request__Sequence__destroy(learn_interface__srv__GetObjectPosition_Request__Sequence * array);

/// Initialize srv/GetObjectPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * learn_interface__srv__GetObjectPosition_Response
 * )) before or use
 * learn_interface__srv__GetObjectPosition_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
bool
learn_interface__srv__GetObjectPosition_Response__init(learn_interface__srv__GetObjectPosition_Response * msg);

/// Finalize srv/GetObjectPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__srv__GetObjectPosition_Response__fini(learn_interface__srv__GetObjectPosition_Response * msg);

/// Create srv/GetObjectPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * learn_interface__srv__GetObjectPosition_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
learn_interface__srv__GetObjectPosition_Response *
learn_interface__srv__GetObjectPosition_Response__create();

/// Destroy srv/GetObjectPosition message.
/**
 * It calls
 * learn_interface__srv__GetObjectPosition_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__srv__GetObjectPosition_Response__destroy(learn_interface__srv__GetObjectPosition_Response * msg);


/// Initialize array of srv/GetObjectPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * learn_interface__srv__GetObjectPosition_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
bool
learn_interface__srv__GetObjectPosition_Response__Sequence__init(learn_interface__srv__GetObjectPosition_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetObjectPosition messages.
/**
 * It calls
 * learn_interface__srv__GetObjectPosition_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__srv__GetObjectPosition_Response__Sequence__fini(learn_interface__srv__GetObjectPosition_Response__Sequence * array);

/// Create array of srv/GetObjectPosition messages.
/**
 * It allocates the memory for the array and calls
 * learn_interface__srv__GetObjectPosition_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
learn_interface__srv__GetObjectPosition_Response__Sequence *
learn_interface__srv__GetObjectPosition_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetObjectPosition messages.
/**
 * It calls
 * learn_interface__srv__GetObjectPosition_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_learn_interface
void
learn_interface__srv__GetObjectPosition_Response__Sequence__destroy(learn_interface__srv__GetObjectPosition_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__FUNCTIONS_H_

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from learn_interface:action/MoveCircle.idl
// generated code does not contain a copyright notice
#include "learn_interface/action/detail/move_circle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
learn_interface__action__MoveCircle_Goal__init(learn_interface__action__MoveCircle_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  return true;
}

void
learn_interface__action__MoveCircle_Goal__fini(learn_interface__action__MoveCircle_Goal * msg)
{
  if (!msg) {
    return;
  }
  // enable
}

learn_interface__action__MoveCircle_Goal *
learn_interface__action__MoveCircle_Goal__create()
{
  learn_interface__action__MoveCircle_Goal * msg = (learn_interface__action__MoveCircle_Goal *)malloc(sizeof(learn_interface__action__MoveCircle_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__action__MoveCircle_Goal));
  bool success = learn_interface__action__MoveCircle_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
learn_interface__action__MoveCircle_Goal__destroy(learn_interface__action__MoveCircle_Goal * msg)
{
  if (msg) {
    learn_interface__action__MoveCircle_Goal__fini(msg);
  }
  free(msg);
}


bool
learn_interface__action__MoveCircle_Goal__Sequence__init(learn_interface__action__MoveCircle_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  learn_interface__action__MoveCircle_Goal * data = NULL;
  if (size) {
    data = (learn_interface__action__MoveCircle_Goal *)calloc(size, sizeof(learn_interface__action__MoveCircle_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__action__MoveCircle_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__action__MoveCircle_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__action__MoveCircle_Goal__Sequence__fini(learn_interface__action__MoveCircle_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__action__MoveCircle_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__action__MoveCircle_Goal__Sequence *
learn_interface__action__MoveCircle_Goal__Sequence__create(size_t size)
{
  learn_interface__action__MoveCircle_Goal__Sequence * array = (learn_interface__action__MoveCircle_Goal__Sequence *)malloc(sizeof(learn_interface__action__MoveCircle_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__action__MoveCircle_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
learn_interface__action__MoveCircle_Goal__Sequence__destroy(learn_interface__action__MoveCircle_Goal__Sequence * array)
{
  if (array) {
    learn_interface__action__MoveCircle_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
learn_interface__action__MoveCircle_Result__init(learn_interface__action__MoveCircle_Result * msg)
{
  if (!msg) {
    return false;
  }
  // finish
  return true;
}

void
learn_interface__action__MoveCircle_Result__fini(learn_interface__action__MoveCircle_Result * msg)
{
  if (!msg) {
    return;
  }
  // finish
}

learn_interface__action__MoveCircle_Result *
learn_interface__action__MoveCircle_Result__create()
{
  learn_interface__action__MoveCircle_Result * msg = (learn_interface__action__MoveCircle_Result *)malloc(sizeof(learn_interface__action__MoveCircle_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__action__MoveCircle_Result));
  bool success = learn_interface__action__MoveCircle_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
learn_interface__action__MoveCircle_Result__destroy(learn_interface__action__MoveCircle_Result * msg)
{
  if (msg) {
    learn_interface__action__MoveCircle_Result__fini(msg);
  }
  free(msg);
}


bool
learn_interface__action__MoveCircle_Result__Sequence__init(learn_interface__action__MoveCircle_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  learn_interface__action__MoveCircle_Result * data = NULL;
  if (size) {
    data = (learn_interface__action__MoveCircle_Result *)calloc(size, sizeof(learn_interface__action__MoveCircle_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__action__MoveCircle_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__action__MoveCircle_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__action__MoveCircle_Result__Sequence__fini(learn_interface__action__MoveCircle_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__action__MoveCircle_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__action__MoveCircle_Result__Sequence *
learn_interface__action__MoveCircle_Result__Sequence__create(size_t size)
{
  learn_interface__action__MoveCircle_Result__Sequence * array = (learn_interface__action__MoveCircle_Result__Sequence *)malloc(sizeof(learn_interface__action__MoveCircle_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__action__MoveCircle_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
learn_interface__action__MoveCircle_Result__Sequence__destroy(learn_interface__action__MoveCircle_Result__Sequence * array)
{
  if (array) {
    learn_interface__action__MoveCircle_Result__Sequence__fini(array);
  }
  free(array);
}


bool
learn_interface__action__MoveCircle_Feedback__init(learn_interface__action__MoveCircle_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  return true;
}

void
learn_interface__action__MoveCircle_Feedback__fini(learn_interface__action__MoveCircle_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
}

learn_interface__action__MoveCircle_Feedback *
learn_interface__action__MoveCircle_Feedback__create()
{
  learn_interface__action__MoveCircle_Feedback * msg = (learn_interface__action__MoveCircle_Feedback *)malloc(sizeof(learn_interface__action__MoveCircle_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__action__MoveCircle_Feedback));
  bool success = learn_interface__action__MoveCircle_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
learn_interface__action__MoveCircle_Feedback__destroy(learn_interface__action__MoveCircle_Feedback * msg)
{
  if (msg) {
    learn_interface__action__MoveCircle_Feedback__fini(msg);
  }
  free(msg);
}


bool
learn_interface__action__MoveCircle_Feedback__Sequence__init(learn_interface__action__MoveCircle_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  learn_interface__action__MoveCircle_Feedback * data = NULL;
  if (size) {
    data = (learn_interface__action__MoveCircle_Feedback *)calloc(size, sizeof(learn_interface__action__MoveCircle_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__action__MoveCircle_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__action__MoveCircle_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__action__MoveCircle_Feedback__Sequence__fini(learn_interface__action__MoveCircle_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__action__MoveCircle_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__action__MoveCircle_Feedback__Sequence *
learn_interface__action__MoveCircle_Feedback__Sequence__create(size_t size)
{
  learn_interface__action__MoveCircle_Feedback__Sequence * array = (learn_interface__action__MoveCircle_Feedback__Sequence *)malloc(sizeof(learn_interface__action__MoveCircle_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__action__MoveCircle_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
learn_interface__action__MoveCircle_Feedback__Sequence__destroy(learn_interface__action__MoveCircle_Feedback__Sequence * array)
{
  if (array) {
    learn_interface__action__MoveCircle_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "learn_interface/action/detail/move_circle__functions.h"

bool
learn_interface__action__MoveCircle_SendGoal_Request__init(learn_interface__action__MoveCircle_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    learn_interface__action__MoveCircle_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!learn_interface__action__MoveCircle_Goal__init(&msg->goal)) {
    learn_interface__action__MoveCircle_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
learn_interface__action__MoveCircle_SendGoal_Request__fini(learn_interface__action__MoveCircle_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  learn_interface__action__MoveCircle_Goal__fini(&msg->goal);
}

learn_interface__action__MoveCircle_SendGoal_Request *
learn_interface__action__MoveCircle_SendGoal_Request__create()
{
  learn_interface__action__MoveCircle_SendGoal_Request * msg = (learn_interface__action__MoveCircle_SendGoal_Request *)malloc(sizeof(learn_interface__action__MoveCircle_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__action__MoveCircle_SendGoal_Request));
  bool success = learn_interface__action__MoveCircle_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
learn_interface__action__MoveCircle_SendGoal_Request__destroy(learn_interface__action__MoveCircle_SendGoal_Request * msg)
{
  if (msg) {
    learn_interface__action__MoveCircle_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
learn_interface__action__MoveCircle_SendGoal_Request__Sequence__init(learn_interface__action__MoveCircle_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  learn_interface__action__MoveCircle_SendGoal_Request * data = NULL;
  if (size) {
    data = (learn_interface__action__MoveCircle_SendGoal_Request *)calloc(size, sizeof(learn_interface__action__MoveCircle_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__action__MoveCircle_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__action__MoveCircle_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__action__MoveCircle_SendGoal_Request__Sequence__fini(learn_interface__action__MoveCircle_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__action__MoveCircle_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__action__MoveCircle_SendGoal_Request__Sequence *
learn_interface__action__MoveCircle_SendGoal_Request__Sequence__create(size_t size)
{
  learn_interface__action__MoveCircle_SendGoal_Request__Sequence * array = (learn_interface__action__MoveCircle_SendGoal_Request__Sequence *)malloc(sizeof(learn_interface__action__MoveCircle_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__action__MoveCircle_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
learn_interface__action__MoveCircle_SendGoal_Request__Sequence__destroy(learn_interface__action__MoveCircle_SendGoal_Request__Sequence * array)
{
  if (array) {
    learn_interface__action__MoveCircle_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
learn_interface__action__MoveCircle_SendGoal_Response__init(learn_interface__action__MoveCircle_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    learn_interface__action__MoveCircle_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
learn_interface__action__MoveCircle_SendGoal_Response__fini(learn_interface__action__MoveCircle_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

learn_interface__action__MoveCircle_SendGoal_Response *
learn_interface__action__MoveCircle_SendGoal_Response__create()
{
  learn_interface__action__MoveCircle_SendGoal_Response * msg = (learn_interface__action__MoveCircle_SendGoal_Response *)malloc(sizeof(learn_interface__action__MoveCircle_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__action__MoveCircle_SendGoal_Response));
  bool success = learn_interface__action__MoveCircle_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
learn_interface__action__MoveCircle_SendGoal_Response__destroy(learn_interface__action__MoveCircle_SendGoal_Response * msg)
{
  if (msg) {
    learn_interface__action__MoveCircle_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
learn_interface__action__MoveCircle_SendGoal_Response__Sequence__init(learn_interface__action__MoveCircle_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  learn_interface__action__MoveCircle_SendGoal_Response * data = NULL;
  if (size) {
    data = (learn_interface__action__MoveCircle_SendGoal_Response *)calloc(size, sizeof(learn_interface__action__MoveCircle_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__action__MoveCircle_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__action__MoveCircle_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__action__MoveCircle_SendGoal_Response__Sequence__fini(learn_interface__action__MoveCircle_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__action__MoveCircle_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__action__MoveCircle_SendGoal_Response__Sequence *
learn_interface__action__MoveCircle_SendGoal_Response__Sequence__create(size_t size)
{
  learn_interface__action__MoveCircle_SendGoal_Response__Sequence * array = (learn_interface__action__MoveCircle_SendGoal_Response__Sequence *)malloc(sizeof(learn_interface__action__MoveCircle_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__action__MoveCircle_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
learn_interface__action__MoveCircle_SendGoal_Response__Sequence__destroy(learn_interface__action__MoveCircle_SendGoal_Response__Sequence * array)
{
  if (array) {
    learn_interface__action__MoveCircle_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
learn_interface__action__MoveCircle_GetResult_Request__init(learn_interface__action__MoveCircle_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    learn_interface__action__MoveCircle_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
learn_interface__action__MoveCircle_GetResult_Request__fini(learn_interface__action__MoveCircle_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

learn_interface__action__MoveCircle_GetResult_Request *
learn_interface__action__MoveCircle_GetResult_Request__create()
{
  learn_interface__action__MoveCircle_GetResult_Request * msg = (learn_interface__action__MoveCircle_GetResult_Request *)malloc(sizeof(learn_interface__action__MoveCircle_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__action__MoveCircle_GetResult_Request));
  bool success = learn_interface__action__MoveCircle_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
learn_interface__action__MoveCircle_GetResult_Request__destroy(learn_interface__action__MoveCircle_GetResult_Request * msg)
{
  if (msg) {
    learn_interface__action__MoveCircle_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
learn_interface__action__MoveCircle_GetResult_Request__Sequence__init(learn_interface__action__MoveCircle_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  learn_interface__action__MoveCircle_GetResult_Request * data = NULL;
  if (size) {
    data = (learn_interface__action__MoveCircle_GetResult_Request *)calloc(size, sizeof(learn_interface__action__MoveCircle_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__action__MoveCircle_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__action__MoveCircle_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__action__MoveCircle_GetResult_Request__Sequence__fini(learn_interface__action__MoveCircle_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__action__MoveCircle_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__action__MoveCircle_GetResult_Request__Sequence *
learn_interface__action__MoveCircle_GetResult_Request__Sequence__create(size_t size)
{
  learn_interface__action__MoveCircle_GetResult_Request__Sequence * array = (learn_interface__action__MoveCircle_GetResult_Request__Sequence *)malloc(sizeof(learn_interface__action__MoveCircle_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__action__MoveCircle_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
learn_interface__action__MoveCircle_GetResult_Request__Sequence__destroy(learn_interface__action__MoveCircle_GetResult_Request__Sequence * array)
{
  if (array) {
    learn_interface__action__MoveCircle_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "learn_interface/action/detail/move_circle__functions.h"

bool
learn_interface__action__MoveCircle_GetResult_Response__init(learn_interface__action__MoveCircle_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!learn_interface__action__MoveCircle_Result__init(&msg->result)) {
    learn_interface__action__MoveCircle_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
learn_interface__action__MoveCircle_GetResult_Response__fini(learn_interface__action__MoveCircle_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  learn_interface__action__MoveCircle_Result__fini(&msg->result);
}

learn_interface__action__MoveCircle_GetResult_Response *
learn_interface__action__MoveCircle_GetResult_Response__create()
{
  learn_interface__action__MoveCircle_GetResult_Response * msg = (learn_interface__action__MoveCircle_GetResult_Response *)malloc(sizeof(learn_interface__action__MoveCircle_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__action__MoveCircle_GetResult_Response));
  bool success = learn_interface__action__MoveCircle_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
learn_interface__action__MoveCircle_GetResult_Response__destroy(learn_interface__action__MoveCircle_GetResult_Response * msg)
{
  if (msg) {
    learn_interface__action__MoveCircle_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
learn_interface__action__MoveCircle_GetResult_Response__Sequence__init(learn_interface__action__MoveCircle_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  learn_interface__action__MoveCircle_GetResult_Response * data = NULL;
  if (size) {
    data = (learn_interface__action__MoveCircle_GetResult_Response *)calloc(size, sizeof(learn_interface__action__MoveCircle_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__action__MoveCircle_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__action__MoveCircle_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__action__MoveCircle_GetResult_Response__Sequence__fini(learn_interface__action__MoveCircle_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__action__MoveCircle_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__action__MoveCircle_GetResult_Response__Sequence *
learn_interface__action__MoveCircle_GetResult_Response__Sequence__create(size_t size)
{
  learn_interface__action__MoveCircle_GetResult_Response__Sequence * array = (learn_interface__action__MoveCircle_GetResult_Response__Sequence *)malloc(sizeof(learn_interface__action__MoveCircle_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__action__MoveCircle_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
learn_interface__action__MoveCircle_GetResult_Response__Sequence__destroy(learn_interface__action__MoveCircle_GetResult_Response__Sequence * array)
{
  if (array) {
    learn_interface__action__MoveCircle_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "learn_interface/action/detail/move_circle__functions.h"

bool
learn_interface__action__MoveCircle_FeedbackMessage__init(learn_interface__action__MoveCircle_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    learn_interface__action__MoveCircle_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!learn_interface__action__MoveCircle_Feedback__init(&msg->feedback)) {
    learn_interface__action__MoveCircle_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
learn_interface__action__MoveCircle_FeedbackMessage__fini(learn_interface__action__MoveCircle_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  learn_interface__action__MoveCircle_Feedback__fini(&msg->feedback);
}

learn_interface__action__MoveCircle_FeedbackMessage *
learn_interface__action__MoveCircle_FeedbackMessage__create()
{
  learn_interface__action__MoveCircle_FeedbackMessage * msg = (learn_interface__action__MoveCircle_FeedbackMessage *)malloc(sizeof(learn_interface__action__MoveCircle_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__action__MoveCircle_FeedbackMessage));
  bool success = learn_interface__action__MoveCircle_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
learn_interface__action__MoveCircle_FeedbackMessage__destroy(learn_interface__action__MoveCircle_FeedbackMessage * msg)
{
  if (msg) {
    learn_interface__action__MoveCircle_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
learn_interface__action__MoveCircle_FeedbackMessage__Sequence__init(learn_interface__action__MoveCircle_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  learn_interface__action__MoveCircle_FeedbackMessage * data = NULL;
  if (size) {
    data = (learn_interface__action__MoveCircle_FeedbackMessage *)calloc(size, sizeof(learn_interface__action__MoveCircle_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__action__MoveCircle_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__action__MoveCircle_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__action__MoveCircle_FeedbackMessage__Sequence__fini(learn_interface__action__MoveCircle_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__action__MoveCircle_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__action__MoveCircle_FeedbackMessage__Sequence *
learn_interface__action__MoveCircle_FeedbackMessage__Sequence__create(size_t size)
{
  learn_interface__action__MoveCircle_FeedbackMessage__Sequence * array = (learn_interface__action__MoveCircle_FeedbackMessage__Sequence *)malloc(sizeof(learn_interface__action__MoveCircle_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__action__MoveCircle_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
learn_interface__action__MoveCircle_FeedbackMessage__Sequence__destroy(learn_interface__action__MoveCircle_FeedbackMessage__Sequence * array)
{
  if (array) {
    learn_interface__action__MoveCircle_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from masc_chassis_msgs:srv/SetMotionMode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "masc_chassis_msgs/srv/detail/set_motion_mode__struct.h"
#include "masc_chassis_msgs/srv/detail/set_motion_mode__type_support.h"
#include "masc_chassis_msgs/srv/detail/set_motion_mode__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace masc_chassis_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetMotionMode_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotionMode_Request_type_support_ids_t;

static const _SetMotionMode_Request_type_support_ids_t _SetMotionMode_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetMotionMode_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotionMode_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotionMode_Request_type_support_symbol_names_t _SetMotionMode_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, srv, SetMotionMode_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, srv, SetMotionMode_Request)),
  }
};

typedef struct _SetMotionMode_Request_type_support_data_t
{
  void * data[2];
} _SetMotionMode_Request_type_support_data_t;

static _SetMotionMode_Request_type_support_data_t _SetMotionMode_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotionMode_Request_message_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_SetMotionMode_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetMotionMode_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetMotionMode_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetMotionMode_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotionMode_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &masc_chassis_msgs__srv__SetMotionMode_Request__get_type_hash,
  &masc_chassis_msgs__srv__SetMotionMode_Request__get_type_description,
  &masc_chassis_msgs__srv__SetMotionMode_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace masc_chassis_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, masc_chassis_msgs, srv, SetMotionMode_Request)() {
  return &::masc_chassis_msgs::srv::rosidl_typesupport_c::SetMotionMode_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_motion_mode__struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_motion_mode__type_support.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_motion_mode__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace masc_chassis_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetMotionMode_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotionMode_Response_type_support_ids_t;

static const _SetMotionMode_Response_type_support_ids_t _SetMotionMode_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetMotionMode_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotionMode_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotionMode_Response_type_support_symbol_names_t _SetMotionMode_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, srv, SetMotionMode_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, srv, SetMotionMode_Response)),
  }
};

typedef struct _SetMotionMode_Response_type_support_data_t
{
  void * data[2];
} _SetMotionMode_Response_type_support_data_t;

static _SetMotionMode_Response_type_support_data_t _SetMotionMode_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotionMode_Response_message_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_SetMotionMode_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetMotionMode_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetMotionMode_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetMotionMode_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotionMode_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &masc_chassis_msgs__srv__SetMotionMode_Response__get_type_hash,
  &masc_chassis_msgs__srv__SetMotionMode_Response__get_type_description,
  &masc_chassis_msgs__srv__SetMotionMode_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace masc_chassis_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, masc_chassis_msgs, srv, SetMotionMode_Response)() {
  return &::masc_chassis_msgs::srv::rosidl_typesupport_c::SetMotionMode_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_motion_mode__struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_motion_mode__type_support.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_motion_mode__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace masc_chassis_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetMotionMode_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotionMode_Event_type_support_ids_t;

static const _SetMotionMode_Event_type_support_ids_t _SetMotionMode_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetMotionMode_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotionMode_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotionMode_Event_type_support_symbol_names_t _SetMotionMode_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, srv, SetMotionMode_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, srv, SetMotionMode_Event)),
  }
};

typedef struct _SetMotionMode_Event_type_support_data_t
{
  void * data[2];
} _SetMotionMode_Event_type_support_data_t;

static _SetMotionMode_Event_type_support_data_t _SetMotionMode_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotionMode_Event_message_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_SetMotionMode_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetMotionMode_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetMotionMode_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetMotionMode_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotionMode_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &masc_chassis_msgs__srv__SetMotionMode_Event__get_type_hash,
  &masc_chassis_msgs__srv__SetMotionMode_Event__get_type_description,
  &masc_chassis_msgs__srv__SetMotionMode_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace masc_chassis_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, masc_chassis_msgs, srv, SetMotionMode_Event)() {
  return &::masc_chassis_msgs::srv::rosidl_typesupport_c::SetMotionMode_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_motion_mode__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace masc_chassis_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetMotionMode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMotionMode_type_support_ids_t;

static const _SetMotionMode_type_support_ids_t _SetMotionMode_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetMotionMode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMotionMode_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMotionMode_type_support_symbol_names_t _SetMotionMode_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, srv, SetMotionMode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, srv, SetMotionMode)),
  }
};

typedef struct _SetMotionMode_type_support_data_t
{
  void * data[2];
} _SetMotionMode_type_support_data_t;

static _SetMotionMode_type_support_data_t _SetMotionMode_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetMotionMode_service_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_SetMotionMode_service_typesupport_ids.typesupport_identifier[0],
  &_SetMotionMode_service_typesupport_symbol_names.symbol_name[0],
  &_SetMotionMode_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetMotionMode_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMotionMode_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetMotionMode_Request_message_type_support_handle,
  &SetMotionMode_Response_message_type_support_handle,
  &SetMotionMode_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    masc_chassis_msgs,
    srv,
    SetMotionMode
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    masc_chassis_msgs,
    srv,
    SetMotionMode
  ),
  &masc_chassis_msgs__srv__SetMotionMode__get_type_hash,
  &masc_chassis_msgs__srv__SetMotionMode__get_type_description,
  &masc_chassis_msgs__srv__SetMotionMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace masc_chassis_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, masc_chassis_msgs, srv, SetMotionMode)() {
  return &::masc_chassis_msgs::srv::rosidl_typesupport_c::SetMotionMode_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

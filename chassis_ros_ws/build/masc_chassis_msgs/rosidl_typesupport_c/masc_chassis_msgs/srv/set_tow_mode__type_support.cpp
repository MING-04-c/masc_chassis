// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from masc_chassis_msgs:srv/SetTowMode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "masc_chassis_msgs/srv/detail/set_tow_mode__struct.h"
#include "masc_chassis_msgs/srv/detail/set_tow_mode__type_support.h"
#include "masc_chassis_msgs/srv/detail/set_tow_mode__functions.h"
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

typedef struct _SetTowMode_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTowMode_Request_type_support_ids_t;

static const _SetTowMode_Request_type_support_ids_t _SetTowMode_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTowMode_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTowMode_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTowMode_Request_type_support_symbol_names_t _SetTowMode_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, srv, SetTowMode_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, srv, SetTowMode_Request)),
  }
};

typedef struct _SetTowMode_Request_type_support_data_t
{
  void * data[2];
} _SetTowMode_Request_type_support_data_t;

static _SetTowMode_Request_type_support_data_t _SetTowMode_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTowMode_Request_message_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_SetTowMode_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetTowMode_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetTowMode_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTowMode_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTowMode_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &masc_chassis_msgs__srv__SetTowMode_Request__get_type_hash,
  &masc_chassis_msgs__srv__SetTowMode_Request__get_type_description,
  &masc_chassis_msgs__srv__SetTowMode_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace masc_chassis_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, masc_chassis_msgs, srv, SetTowMode_Request)() {
  return &::masc_chassis_msgs::srv::rosidl_typesupport_c::SetTowMode_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_tow_mode__struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_tow_mode__type_support.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_tow_mode__functions.h"
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

typedef struct _SetTowMode_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTowMode_Response_type_support_ids_t;

static const _SetTowMode_Response_type_support_ids_t _SetTowMode_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTowMode_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTowMode_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTowMode_Response_type_support_symbol_names_t _SetTowMode_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, srv, SetTowMode_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, srv, SetTowMode_Response)),
  }
};

typedef struct _SetTowMode_Response_type_support_data_t
{
  void * data[2];
} _SetTowMode_Response_type_support_data_t;

static _SetTowMode_Response_type_support_data_t _SetTowMode_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTowMode_Response_message_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_SetTowMode_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetTowMode_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetTowMode_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTowMode_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTowMode_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &masc_chassis_msgs__srv__SetTowMode_Response__get_type_hash,
  &masc_chassis_msgs__srv__SetTowMode_Response__get_type_description,
  &masc_chassis_msgs__srv__SetTowMode_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace masc_chassis_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, masc_chassis_msgs, srv, SetTowMode_Response)() {
  return &::masc_chassis_msgs::srv::rosidl_typesupport_c::SetTowMode_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_tow_mode__struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_tow_mode__type_support.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_tow_mode__functions.h"
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

typedef struct _SetTowMode_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTowMode_Event_type_support_ids_t;

static const _SetTowMode_Event_type_support_ids_t _SetTowMode_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTowMode_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTowMode_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTowMode_Event_type_support_symbol_names_t _SetTowMode_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, srv, SetTowMode_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, srv, SetTowMode_Event)),
  }
};

typedef struct _SetTowMode_Event_type_support_data_t
{
  void * data[2];
} _SetTowMode_Event_type_support_data_t;

static _SetTowMode_Event_type_support_data_t _SetTowMode_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTowMode_Event_message_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_SetTowMode_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetTowMode_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetTowMode_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTowMode_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTowMode_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &masc_chassis_msgs__srv__SetTowMode_Event__get_type_hash,
  &masc_chassis_msgs__srv__SetTowMode_Event__get_type_description,
  &masc_chassis_msgs__srv__SetTowMode_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace masc_chassis_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, masc_chassis_msgs, srv, SetTowMode_Event)() {
  return &::masc_chassis_msgs::srv::rosidl_typesupport_c::SetTowMode_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/set_tow_mode__type_support.h"
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
typedef struct _SetTowMode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTowMode_type_support_ids_t;

static const _SetTowMode_type_support_ids_t _SetTowMode_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTowMode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTowMode_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTowMode_type_support_symbol_names_t _SetTowMode_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, masc_chassis_msgs, srv, SetTowMode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, masc_chassis_msgs, srv, SetTowMode)),
  }
};

typedef struct _SetTowMode_type_support_data_t
{
  void * data[2];
} _SetTowMode_type_support_data_t;

static _SetTowMode_type_support_data_t _SetTowMode_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTowMode_service_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_SetTowMode_service_typesupport_ids.typesupport_identifier[0],
  &_SetTowMode_service_typesupport_symbol_names.symbol_name[0],
  &_SetTowMode_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetTowMode_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTowMode_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetTowMode_Request_message_type_support_handle,
  &SetTowMode_Response_message_type_support_handle,
  &SetTowMode_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    masc_chassis_msgs,
    srv,
    SetTowMode
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    masc_chassis_msgs,
    srv,
    SetTowMode
  ),
  &masc_chassis_msgs__srv__SetTowMode__get_type_hash,
  &masc_chassis_msgs__srv__SetTowMode__get_type_description,
  &masc_chassis_msgs__srv__SetTowMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace masc_chassis_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, masc_chassis_msgs, srv, SetTowMode)() {
  return &::masc_chassis_msgs::srv::rosidl_typesupport_c::SetTowMode_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

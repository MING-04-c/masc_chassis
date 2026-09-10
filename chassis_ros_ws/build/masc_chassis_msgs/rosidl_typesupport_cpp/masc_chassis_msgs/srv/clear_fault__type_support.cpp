// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from masc_chassis_msgs:srv/ClearFault.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "masc_chassis_msgs/srv/detail/clear_fault__functions.h"
#include "masc_chassis_msgs/srv/detail/clear_fault__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace masc_chassis_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClearFault_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClearFault_Request_type_support_ids_t;

static const _ClearFault_Request_type_support_ids_t _ClearFault_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClearFault_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClearFault_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClearFault_Request_type_support_symbol_names_t _ClearFault_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, masc_chassis_msgs, srv, ClearFault_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, masc_chassis_msgs, srv, ClearFault_Request)),
  }
};

typedef struct _ClearFault_Request_type_support_data_t
{
  void * data[2];
} _ClearFault_Request_type_support_data_t;

static _ClearFault_Request_type_support_data_t _ClearFault_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClearFault_Request_message_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_ClearFault_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ClearFault_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ClearFault_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClearFault_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClearFault_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &masc_chassis_msgs__srv__ClearFault_Request__get_type_hash,
  &masc_chassis_msgs__srv__ClearFault_Request__get_type_description,
  &masc_chassis_msgs__srv__ClearFault_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace masc_chassis_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<masc_chassis_msgs::srv::ClearFault_Request>()
{
  return &::masc_chassis_msgs::srv::rosidl_typesupport_cpp::ClearFault_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, masc_chassis_msgs, srv, ClearFault_Request)() {
  return get_message_type_support_handle<masc_chassis_msgs::srv::ClearFault_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/clear_fault__functions.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/clear_fault__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace masc_chassis_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClearFault_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClearFault_Response_type_support_ids_t;

static const _ClearFault_Response_type_support_ids_t _ClearFault_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClearFault_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClearFault_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClearFault_Response_type_support_symbol_names_t _ClearFault_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, masc_chassis_msgs, srv, ClearFault_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, masc_chassis_msgs, srv, ClearFault_Response)),
  }
};

typedef struct _ClearFault_Response_type_support_data_t
{
  void * data[2];
} _ClearFault_Response_type_support_data_t;

static _ClearFault_Response_type_support_data_t _ClearFault_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClearFault_Response_message_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_ClearFault_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ClearFault_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ClearFault_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClearFault_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClearFault_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &masc_chassis_msgs__srv__ClearFault_Response__get_type_hash,
  &masc_chassis_msgs__srv__ClearFault_Response__get_type_description,
  &masc_chassis_msgs__srv__ClearFault_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace masc_chassis_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<masc_chassis_msgs::srv::ClearFault_Response>()
{
  return &::masc_chassis_msgs::srv::rosidl_typesupport_cpp::ClearFault_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, masc_chassis_msgs, srv, ClearFault_Response)() {
  return get_message_type_support_handle<masc_chassis_msgs::srv::ClearFault_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/clear_fault__functions.h"
// already included above
// #include "masc_chassis_msgs/srv/detail/clear_fault__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace masc_chassis_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClearFault_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClearFault_Event_type_support_ids_t;

static const _ClearFault_Event_type_support_ids_t _ClearFault_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClearFault_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClearFault_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClearFault_Event_type_support_symbol_names_t _ClearFault_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, masc_chassis_msgs, srv, ClearFault_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, masc_chassis_msgs, srv, ClearFault_Event)),
  }
};

typedef struct _ClearFault_Event_type_support_data_t
{
  void * data[2];
} _ClearFault_Event_type_support_data_t;

static _ClearFault_Event_type_support_data_t _ClearFault_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClearFault_Event_message_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_ClearFault_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ClearFault_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ClearFault_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ClearFault_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClearFault_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &masc_chassis_msgs__srv__ClearFault_Event__get_type_hash,
  &masc_chassis_msgs__srv__ClearFault_Event__get_type_description,
  &masc_chassis_msgs__srv__ClearFault_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace masc_chassis_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<masc_chassis_msgs::srv::ClearFault_Event>()
{
  return &::masc_chassis_msgs::srv::rosidl_typesupport_cpp::ClearFault_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, masc_chassis_msgs, srv, ClearFault_Event)() {
  return get_message_type_support_handle<masc_chassis_msgs::srv::ClearFault_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "masc_chassis_msgs/srv/detail/clear_fault__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace masc_chassis_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ClearFault_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ClearFault_type_support_ids_t;

static const _ClearFault_type_support_ids_t _ClearFault_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ClearFault_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ClearFault_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ClearFault_type_support_symbol_names_t _ClearFault_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, masc_chassis_msgs, srv, ClearFault)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, masc_chassis_msgs, srv, ClearFault)),
  }
};

typedef struct _ClearFault_type_support_data_t
{
  void * data[2];
} _ClearFault_type_support_data_t;

static _ClearFault_type_support_data_t _ClearFault_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ClearFault_service_typesupport_map = {
  2,
  "masc_chassis_msgs",
  &_ClearFault_service_typesupport_ids.typesupport_identifier[0],
  &_ClearFault_service_typesupport_symbol_names.symbol_name[0],
  &_ClearFault_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ClearFault_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ClearFault_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<masc_chassis_msgs::srv::ClearFault_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<masc_chassis_msgs::srv::ClearFault_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<masc_chassis_msgs::srv::ClearFault_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<masc_chassis_msgs::srv::ClearFault>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<masc_chassis_msgs::srv::ClearFault>,
  &masc_chassis_msgs__srv__ClearFault__get_type_hash,
  &masc_chassis_msgs__srv__ClearFault__get_type_description,
  &masc_chassis_msgs__srv__ClearFault__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace masc_chassis_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<masc_chassis_msgs::srv::ClearFault>()
{
  return &::masc_chassis_msgs::srv::rosidl_typesupport_cpp::ClearFault_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, masc_chassis_msgs, srv, ClearFault)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<masc_chassis_msgs::srv::ClearFault>();
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from masc_chassis_msgs:srv/SetMotionMode.idl
// generated code does not contain a copyright notice

#include "masc_chassis_msgs/srv/detail/set_motion_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__srv__SetMotionMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0xef, 0xf0, 0x36, 0xea, 0x06, 0x49, 0xa7,
      0x0c, 0x82, 0x41, 0x21, 0xe6, 0x29, 0x21, 0x6b,
      0xfa, 0xf6, 0x98, 0x34, 0x73, 0x50, 0x41, 0xbf,
      0xb2, 0xd3, 0x9c, 0xe0, 0xc5, 0x93, 0x2c, 0xe6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__srv__SetMotionMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0xa9, 0xc1, 0x0d, 0x99, 0xda, 0xc6, 0xab,
      0x32, 0x93, 0x0a, 0x3e, 0xcd, 0x8f, 0x47, 0x4e,
      0x4b, 0xf8, 0x12, 0xff, 0xf0, 0x70, 0x18, 0x24,
      0x6f, 0xc4, 0xbc, 0x61, 0xb2, 0x38, 0x5f, 0x56,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__srv__SetMotionMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0xf5, 0xa1, 0x1d, 0xff, 0x36, 0x54, 0x34,
      0x88, 0x03, 0x60, 0xab, 0xca, 0xd2, 0x37, 0x81,
      0x54, 0x27, 0xff, 0x1e, 0xb3, 0xb2, 0xd2, 0xf8,
      0x18, 0x74, 0x8c, 0x77, 0x10, 0x47, 0x3c, 0xf6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__srv__SetMotionMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0xc6, 0xf2, 0xc5, 0x46, 0x2c, 0x5f, 0xf6,
      0x17, 0x92, 0xff, 0x9b, 0x80, 0xda, 0xc0, 0xe5,
      0xf5, 0x23, 0x10, 0x38, 0xfc, 0x65, 0x15, 0xe1,
      0x24, 0x32, 0x94, 0x21, 0xbc, 0x9a, 0x1b, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char masc_chassis_msgs__srv__SetMotionMode__TYPE_NAME[] = "masc_chassis_msgs/srv/SetMotionMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char masc_chassis_msgs__srv__SetMotionMode_Event__TYPE_NAME[] = "masc_chassis_msgs/srv/SetMotionMode_Event";
static char masc_chassis_msgs__srv__SetMotionMode_Request__TYPE_NAME[] = "masc_chassis_msgs/srv/SetMotionMode_Request";
static char masc_chassis_msgs__srv__SetMotionMode_Response__TYPE_NAME[] = "masc_chassis_msgs/srv/SetMotionMode_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char masc_chassis_msgs__srv__SetMotionMode__FIELD_NAME__request_message[] = "request_message";
static char masc_chassis_msgs__srv__SetMotionMode__FIELD_NAME__response_message[] = "response_message";
static char masc_chassis_msgs__srv__SetMotionMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__srv__SetMotionMode__FIELDS[] = {
  {
    {masc_chassis_msgs__srv__SetMotionMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {masc_chassis_msgs__srv__SetMotionMode_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {masc_chassis_msgs__srv__SetMotionMode_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {masc_chassis_msgs__srv__SetMotionMode_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__srv__SetMotionMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__srv__SetMotionMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__srv__SetMotionMode__TYPE_NAME, 35, 35},
      {masc_chassis_msgs__srv__SetMotionMode__FIELDS, 3, 3},
    },
    {masc_chassis_msgs__srv__SetMotionMode__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = masc_chassis_msgs__srv__SetMotionMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = masc_chassis_msgs__srv__SetMotionMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = masc_chassis_msgs__srv__SetMotionMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char masc_chassis_msgs__srv__SetMotionMode_Request__FIELD_NAME__motion_mode[] = "motion_mode";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__srv__SetMotionMode_Request__FIELDS[] = {
  {
    {masc_chassis_msgs__srv__SetMotionMode_Request__FIELD_NAME__motion_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__srv__SetMotionMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__srv__SetMotionMode_Request__TYPE_NAME, 43, 43},
      {masc_chassis_msgs__srv__SetMotionMode_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char masc_chassis_msgs__srv__SetMotionMode_Response__FIELD_NAME__success[] = "success";
static char masc_chassis_msgs__srv__SetMotionMode_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__srv__SetMotionMode_Response__FIELDS[] = {
  {
    {masc_chassis_msgs__srv__SetMotionMode_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__srv__SetMotionMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__srv__SetMotionMode_Response__TYPE_NAME, 44, 44},
      {masc_chassis_msgs__srv__SetMotionMode_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char masc_chassis_msgs__srv__SetMotionMode_Event__FIELD_NAME__info[] = "info";
static char masc_chassis_msgs__srv__SetMotionMode_Event__FIELD_NAME__request[] = "request";
static char masc_chassis_msgs__srv__SetMotionMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__srv__SetMotionMode_Event__FIELDS[] = {
  {
    {masc_chassis_msgs__srv__SetMotionMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {masc_chassis_msgs__srv__SetMotionMode_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {masc_chassis_msgs__srv__SetMotionMode_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__srv__SetMotionMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__SetMotionMode_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__srv__SetMotionMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__srv__SetMotionMode_Event__TYPE_NAME, 41, 41},
      {masc_chassis_msgs__srv__SetMotionMode_Event__FIELDS, 3, 3},
    },
    {masc_chassis_msgs__srv__SetMotionMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = masc_chassis_msgs__srv__SetMotionMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = masc_chassis_msgs__srv__SetMotionMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Function: One-shot motion mode switch request.\n"
  "# Msg Name: SetMotionMode\n"
  "# Maps to motion_mode_switch_cmd (0x110).\n"
  "# Supported only when system_version_feedback.chassis_type_version is in\n"
  "# currently defined all-wheel-steer chassis values: 0x61, 0x62, or 0x63.\n"
  "\n"
  "uint8 MOTION_MODE_DEFAULT_CHASSIS = 0\n"
  "uint8 MOTION_MODE_PARK = 1\n"
  "uint8 MOTION_MODE_ACKERMANN = 2\n"
  "uint8 MOTION_MODE_SPIN = 3\n"
  "uint8 MOTION_MODE_LATERAL = 4\n"
  "uint8 MOTION_MODE_DIAGONAL = 5\n"
  "\n"
  "uint8 motion_mode\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__srv__SetMotionMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__srv__SetMotionMode__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 500, 500},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__srv__SetMotionMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__srv__SetMotionMode_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__srv__SetMotionMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__srv__SetMotionMode_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__srv__SetMotionMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__srv__SetMotionMode_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__srv__SetMotionMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__srv__SetMotionMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *masc_chassis_msgs__srv__SetMotionMode_Event__get_individual_type_description_source(NULL);
    sources[3] = *masc_chassis_msgs__srv__SetMotionMode_Request__get_individual_type_description_source(NULL);
    sources[4] = *masc_chassis_msgs__srv__SetMotionMode_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__srv__SetMotionMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__srv__SetMotionMode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__srv__SetMotionMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__srv__SetMotionMode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__srv__SetMotionMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__srv__SetMotionMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *masc_chassis_msgs__srv__SetMotionMode_Request__get_individual_type_description_source(NULL);
    sources[3] = *masc_chassis_msgs__srv__SetMotionMode_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

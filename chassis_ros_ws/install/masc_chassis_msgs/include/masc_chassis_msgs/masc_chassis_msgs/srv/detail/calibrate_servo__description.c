// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from masc_chassis_msgs:srv/CalibrateServo.idl
// generated code does not contain a copyright notice

#include "masc_chassis_msgs/srv/detail/calibrate_servo__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__srv__CalibrateServo__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x5d, 0xbb, 0x5a, 0x94, 0x98, 0x42, 0x2a,
      0x0a, 0x51, 0xc7, 0xb2, 0xf0, 0x2d, 0x55, 0x76,
      0xeb, 0x3a, 0x7b, 0xd4, 0x8c, 0x42, 0x0e, 0x30,
      0xcf, 0xa9, 0xfd, 0x43, 0x61, 0x44, 0x91, 0xe6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__srv__CalibrateServo_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0x90, 0x55, 0x46, 0x6a, 0xc2, 0xee, 0xec,
      0x8e, 0xc2, 0xd0, 0x83, 0xa4, 0x5a, 0xe3, 0xb1,
      0x8d, 0x7b, 0x58, 0x51, 0xb4, 0x85, 0x28, 0xa5,
      0x76, 0xe4, 0x89, 0x44, 0xb6, 0x33, 0x3a, 0xc8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__srv__CalibrateServo_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0xd1, 0xc1, 0xfd, 0xc0, 0xd2, 0xc9, 0x44,
      0xeb, 0x32, 0x91, 0x77, 0x4c, 0x31, 0xdd, 0x85,
      0xe0, 0x59, 0x71, 0x40, 0xcd, 0x1b, 0x48, 0xc8,
      0xb3, 0xc3, 0xe3, 0x6f, 0x16, 0x5d, 0x9c, 0x16,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__srv__CalibrateServo_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0xb6, 0xd9, 0x42, 0x2e, 0x9e, 0x64, 0x92,
      0xc6, 0x09, 0xa1, 0xb3, 0x8f, 0x74, 0x11, 0x4f,
      0xef, 0x2c, 0x56, 0x33, 0x6f, 0xdb, 0x56, 0xe4,
      0xb4, 0xa0, 0xdf, 0xe6, 0x28, 0x52, 0xad, 0x0d,
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

static char masc_chassis_msgs__srv__CalibrateServo__TYPE_NAME[] = "masc_chassis_msgs/srv/CalibrateServo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char masc_chassis_msgs__srv__CalibrateServo_Event__TYPE_NAME[] = "masc_chassis_msgs/srv/CalibrateServo_Event";
static char masc_chassis_msgs__srv__CalibrateServo_Request__TYPE_NAME[] = "masc_chassis_msgs/srv/CalibrateServo_Request";
static char masc_chassis_msgs__srv__CalibrateServo_Response__TYPE_NAME[] = "masc_chassis_msgs/srv/CalibrateServo_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char masc_chassis_msgs__srv__CalibrateServo__FIELD_NAME__request_message[] = "request_message";
static char masc_chassis_msgs__srv__CalibrateServo__FIELD_NAME__response_message[] = "response_message";
static char masc_chassis_msgs__srv__CalibrateServo__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__srv__CalibrateServo__FIELDS[] = {
  {
    {masc_chassis_msgs__srv__CalibrateServo__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {masc_chassis_msgs__srv__CalibrateServo_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {masc_chassis_msgs__srv__CalibrateServo_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {masc_chassis_msgs__srv__CalibrateServo_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__srv__CalibrateServo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__srv__CalibrateServo__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__srv__CalibrateServo__TYPE_NAME, 36, 36},
      {masc_chassis_msgs__srv__CalibrateServo__FIELDS, 3, 3},
    },
    {masc_chassis_msgs__srv__CalibrateServo__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = masc_chassis_msgs__srv__CalibrateServo_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = masc_chassis_msgs__srv__CalibrateServo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = masc_chassis_msgs__srv__CalibrateServo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char masc_chassis_msgs__srv__CalibrateServo_Request__FIELD_NAME__servo_id[] = "servo_id";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__srv__CalibrateServo_Request__FIELDS[] = {
  {
    {masc_chassis_msgs__srv__CalibrateServo_Request__FIELD_NAME__servo_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__srv__CalibrateServo_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__srv__CalibrateServo_Request__TYPE_NAME, 44, 44},
      {masc_chassis_msgs__srv__CalibrateServo_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char masc_chassis_msgs__srv__CalibrateServo_Response__FIELD_NAME__success[] = "success";
static char masc_chassis_msgs__srv__CalibrateServo_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__srv__CalibrateServo_Response__FIELDS[] = {
  {
    {masc_chassis_msgs__srv__CalibrateServo_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo_Response__FIELD_NAME__message, 7, 7},
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
masc_chassis_msgs__srv__CalibrateServo_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__srv__CalibrateServo_Response__TYPE_NAME, 45, 45},
      {masc_chassis_msgs__srv__CalibrateServo_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char masc_chassis_msgs__srv__CalibrateServo_Event__FIELD_NAME__info[] = "info";
static char masc_chassis_msgs__srv__CalibrateServo_Event__FIELD_NAME__request[] = "request";
static char masc_chassis_msgs__srv__CalibrateServo_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__srv__CalibrateServo_Event__FIELDS[] = {
  {
    {masc_chassis_msgs__srv__CalibrateServo_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {masc_chassis_msgs__srv__CalibrateServo_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {masc_chassis_msgs__srv__CalibrateServo_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__srv__CalibrateServo_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__srv__CalibrateServo_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__srv__CalibrateServo_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__srv__CalibrateServo_Event__TYPE_NAME, 42, 42},
      {masc_chassis_msgs__srv__CalibrateServo_Event__FIELDS, 3, 3},
    },
    {masc_chassis_msgs__srv__CalibrateServo_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = masc_chassis_msgs__srv__CalibrateServo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = masc_chassis_msgs__srv__CalibrateServo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Function: Calibrate servo automatically.\n"
  "# Msg Name: CalibrateServo\n"
  "# Note: This request triggers firmware automatic calibration.\n"
  "# It does not set the current position as the zero point.\n"
  "# Maps to servo_calibration_cmd (0x170).\n"
  "\n"
  "uint16 servo_id\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__srv__CalibrateServo__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__srv__CalibrateServo__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 280, 280},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__srv__CalibrateServo_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__srv__CalibrateServo_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__srv__CalibrateServo_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__srv__CalibrateServo_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__srv__CalibrateServo_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__srv__CalibrateServo_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__srv__CalibrateServo__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__srv__CalibrateServo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *masc_chassis_msgs__srv__CalibrateServo_Event__get_individual_type_description_source(NULL);
    sources[3] = *masc_chassis_msgs__srv__CalibrateServo_Request__get_individual_type_description_source(NULL);
    sources[4] = *masc_chassis_msgs__srv__CalibrateServo_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__srv__CalibrateServo_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__srv__CalibrateServo_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__srv__CalibrateServo_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__srv__CalibrateServo_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__srv__CalibrateServo_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__srv__CalibrateServo_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *masc_chassis_msgs__srv__CalibrateServo_Request__get_individual_type_description_source(NULL);
    sources[3] = *masc_chassis_msgs__srv__CalibrateServo_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from masc_chassis_msgs:msg/CommStatus.idl
// generated code does not contain a copyright notice

#include "masc_chassis_msgs/msg/detail/comm_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__msg__CommStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0x9c, 0x22, 0x83, 0xa7, 0xb3, 0x8c, 0x87,
      0x46, 0x71, 0x29, 0x11, 0x95, 0x5f, 0x39, 0xac,
      0x0e, 0x37, 0xdc, 0x49, 0xa9, 0x27, 0xb1, 0xec,
      0xf4, 0xac, 0x02, 0x6c, 0xeb, 0x2a, 0x35, 0x93,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char masc_chassis_msgs__msg__CommStatus__TYPE_NAME[] = "masc_chassis_msgs/msg/CommStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__header[] = "header";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__comm_state[] = "comm_state";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__fail_reason[] = "fail_reason";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__motion_command_timeout_active[] = "motion_command_timeout_active";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__connection_attempt_count[] = "connection_attempt_count";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__transport_error_count[] = "transport_error_count";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__tx_error_count[] = "tx_error_count";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__rx_error_count[] = "rx_error_count";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__chassis_uuid[] = "chassis_uuid";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__system_software_hardware_version[] = "system_software_hardware_version";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__chassis_type_version[] = "chassis_type_version";
static char masc_chassis_msgs__msg__CommStatus__FIELD_NAME__chassis_protocol_version[] = "chassis_protocol_version";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__msg__CommStatus__FIELDS[] = {
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__comm_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__fail_reason, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__motion_command_timeout_active, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__connection_attempt_count, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__transport_error_count, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__tx_error_count, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__rx_error_count, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__chassis_uuid, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      5,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__system_software_hardware_version, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__chassis_type_version, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CommStatus__FIELD_NAME__chassis_protocol_version, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__msg__CommStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__msg__CommStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__msg__CommStatus__TYPE_NAME, 32, 32},
      {masc_chassis_msgs__msg__CommStatus__FIELDS, 12, 12},
    },
    {masc_chassis_msgs__msg__CommStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Function: CAN SDK communication status and chassis identity/version data.\n"
  "# Msg Name: CommStatus\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint8 COMM_STATE_UNKNOWN = 0\n"
  "uint8 COMM_STATE_DISCONNECTED = 1\n"
  "uint8 COMM_STATE_CONNECTING = 2\n"
  "uint8 COMM_STATE_PROTOCOL_MISMATCH = 3\n"
  "uint8 COMM_STATE_CONNECTED = 4\n"
  "\n"
  "uint8 FAIL_REASON_NONE = 0\n"
  "uint8 FAIL_REASON_PORT_OPEN_FAILED = 1\n"
  "uint8 FAIL_REASON_VERSION_TIMEOUT = 2\n"
  "uint8 FAIL_REASON_PROTOCOL_VERSION_MISMATCH = 3\n"
  "uint8 FAIL_REASON_READ_ERROR = 4\n"
  "uint8 FAIL_REASON_WRITE_ERROR = 5\n"
  "uint8 FAIL_REASON_TRANSPORT_ERROR = 6\n"
  "uint8 FAIL_REASON_UNKNOWN = 255\n"
  "\n"
  "# Chassis type values from system_version_feedback (0x205) Byte6.\n"
  "# Newer CAN V10 docs define currently supported values directly.\n"
  "uint8 CHASSIS_TYPE_RESERVED = 0                  # 0x00\n"
  "uint8 CHASSIS_TYPE_DIFF_2WD = 1                  # 0x01\n"
  "uint8 CHASSIS_TYPE_DIFF_4WD = 2                  # 0x02\n"
  "uint8 CHASSIS_TYPE_DIFF_6WD = 3                  # 0x03\n"
  "uint8 CHASSIS_TYPE_DIFF_8WD = 4                  # 0x04\n"
  "\n"
  "uint8 CHASSIS_TYPE_TRICYCLE_UNSPECIFIED = 32     # 0x20\n"
  "uint8 CHASSIS_TYPE_TRICYCLE_FRONT = 33           # 0x21\n"
  "uint8 CHASSIS_TYPE_TRICYCLE_REAR = 34            # 0x22\n"
  "\n"
  "uint8 CHASSIS_TYPE_ACKERMANN_UNSPECIFIED = 64    # 0x40\n"
  "uint8 CHASSIS_TYPE_ACKERMANN_FRONT = 65          # 0x41\n"
  "uint8 CHASSIS_TYPE_ACKERMANN_REAR = 66           # 0x42\n"
  "uint8 CHASSIS_TYPE_ACKERMANN_FRONT_REAR = 67     # 0x43\n"
  "\n"
  "uint8 CHASSIS_TYPE_AWS_4WS = 97                  # 0x61\n"
  "uint8 CHASSIS_TYPE_AWS_6WS = 98                  # 0x62\n"
  "uint8 CHASSIS_TYPE_AWS_8WS = 99                  # 0x63\n"
  "\n"
  "uint8 comm_state                    # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8cCAN \\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xef\\xbc\\x8c\\xe8\\xa7\\x81 COMM_STATE_* \\xe5\\xb8\\xb8\\xe9\\x87\\x8f\n"
  "uint8 fail_reason                   # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xe5\\x8e\\x9f\\xe5\\x9b\\xa0\\xef\\xbc\\x8c\\xe8\\xa7\\x81 FAIL_REASON_* \\xe5\\xb8\\xb8\\xe9\\x87\\x8f\n"
  "bool motion_command_timeout_active  # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe5\\x91\\xbd\\xe4\\xbb\\xa4\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\xa4\\x84\\xe4\\xba\\x8e\\xe8\\xb6\\x85\\xe6\\x97\\xb6\\xe4\\xbf\\x9d\\xe6\\x8a\\xa4\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "\n"
  "uint64 connection_attempt_count     # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\xac\\xa1\\xef\\xbc\\x8c\\xe8\\xbf\\x9e\\xe6\\x8e\\xa5\\xe5\\xb0\\x9d\\xe8\\xaf\\x95\\xe6\\xac\\xa1\\xe6\\x95\\xb0\n"
  "uint64 transport_error_count        # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\xac\\xa1\\xef\\xbc\\x8cCAN transport \\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe6\\xac\\xa1\\xe6\\x95\\xb0\n"
  "uint64 tx_error_count               # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\xac\\xa1\\xef\\xbc\\x8c\\xe5\\x8f\\x91\\xe9\\x80\\x81\\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe6\\xac\\xa1\\xe6\\x95\\xb0\n"
  "uint64 rx_error_count               # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\xac\\xa1\\xef\\xbc\\x8c\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe6\\xac\\xa1\\xe6\\x95\\xb0\n"
  "\n"
  "uint8[5] chassis_uuid               # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe5\\xba\\x95\\xe7\\x9b\\x98 UUID\n"
  "uint8 system_software_hardware_version # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe8\\xbd\\xaf\\xe7\\xa1\\xac\\xe4\\xbb\\xb6\\xe7\\x89\\x88\\xe6\\x9c\\xac\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\xad\\x97\\xe8\\x8a\\x82\\xef\\xbc\\x8c\\xe6\\x9d\\xa5\\xe8\\x87\\xaa 0x205 Byte5\n"
  "uint8 chassis_type_version          # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\\xe7\\x89\\x88\\xe6\\x9c\\xac\\xef\\xbc\\x8c\\xe8\\xa7\\x81 CHASSIS_TYPE_* \\xe5\\xb8\\xb8\\xe9\\x87\\x8f\n"
  "uint8 chassis_protocol_version      # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe9\\x80\\x9a\\xe8\\xae\\xaf\\xe5\\x8d\\x8f\\xe8\\xae\\xae\\xe7\\x89\\x88\\xe6\\x9c\\xac";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__msg__CommStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__msg__CommStatus__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2212, 2212},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__msg__CommStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__msg__CommStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from masc_chassis_msgs:msg/ServoMotor.idl
// generated code does not contain a copyright notice

#include "masc_chassis_msgs/msg/detail/servo_motor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__msg__ServoMotor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0x62, 0x9a, 0xf8, 0x0c, 0x2a, 0x3d, 0x0f,
      0x77, 0xa8, 0x2b, 0xa3, 0x8b, 0x87, 0x92, 0x45,
      0xbc, 0xd5, 0x2a, 0x3d, 0x64, 0x2b, 0x4d, 0x3a,
      0xec, 0xaa, 0x92, 0xdf, 0x44, 0xa7, 0x54, 0x20,
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

static char masc_chassis_msgs__msg__ServoMotor__TYPE_NAME[] = "masc_chassis_msgs/msg/ServoMotor";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__header[] = "header";
static char masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__index[] = "index";
static char masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__calibration_state[] = "calibration_state";
static char masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__angle[] = "angle";
static char masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__current[] = "current";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__msg__ServoMotor__FIELDS[] = {
  {
    {masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__calibration_state, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ServoMotor__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__msg__ServoMotor__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
masc_chassis_msgs__msg__ServoMotor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__msg__ServoMotor__TYPE_NAME, 32, 32},
      {masc_chassis_msgs__msg__ServoMotor__FIELDS, 5, 5},
    },
    {masc_chassis_msgs__msg__ServoMotor__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Function: Servo motor feedback for one protocol index.\n"
  "# Msg Name: ServoMotor\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint8 SERVO_CALIBRATION_NOT_CALIBRATED = 0\n"
  "uint8 SERVO_CALIBRATION_CALIBRATING = 1\n"
  "uint8 SERVO_CALIBRATION_CALIBRATED = 2\n"
  "\n"
  "uint8 index                  # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe5\\x8d\\x8f\\xe8\\xae\\xae\\xe7\\xb4\\xa2\\xe5\\xbc\\x95\\xef\\xbc\\x8c\\xe7\\x94\\xb1 CAN ID \\xe8\\x8c\\x83\\xe5\\x9b\\xb4\\xe8\\xae\\xa1\\xe7\\xae\\x97\n"
  "uint8 calibration_state      # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe8\\x88\\xb5\\xe6\\x9c\\xba\\xe8\\x87\\xaa\\xe5\\x8a\\xa8\\xe6\\xa0\\x87\\xe5\\xae\\x9a\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xef\\xbc\\x8c\\xe8\\xa7\\x81 SERVO_CALIBRATION_* \\xe5\\xb8\\xb8\\xe9\\x87\\x8f\n"
  "float64 angle                # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9arad\\xef\\xbc\\x8c\\xe8\\x88\\xb5\\xe6\\x9c\\xba\\xe8\\xa7\\x92\\xe5\\xba\\xa6\n"
  "float64 current              # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aA\\xef\\xbc\\x8c\\xe8\\x88\\xb5\\xe6\\x9c\\xba\\xe7\\x94\\xb5\\xe6\\xb5\\x81";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__msg__ServoMotor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__msg__ServoMotor__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 437, 437},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__msg__ServoMotor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__msg__ServoMotor__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

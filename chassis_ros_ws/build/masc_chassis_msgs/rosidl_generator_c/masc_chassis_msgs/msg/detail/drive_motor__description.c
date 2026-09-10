// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from masc_chassis_msgs:msg/DriveMotor.idl
// generated code does not contain a copyright notice

#include "masc_chassis_msgs/msg/detail/drive_motor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__msg__DriveMotor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0xd8, 0x13, 0xed, 0xee, 0x42, 0x2d, 0xdd,
      0xff, 0x18, 0x73, 0x19, 0x9a, 0xfa, 0x77, 0xd7,
      0xcd, 0x18, 0xed, 0x6e, 0x13, 0x02, 0x0a, 0xc8,
      0xde, 0xe5, 0xa9, 0xb3, 0x4d, 0x47, 0xe9, 0x29,
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

static char masc_chassis_msgs__msg__DriveMotor__TYPE_NAME[] = "masc_chassis_msgs/msg/DriveMotor";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__header[] = "header";
static char masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__index[] = "index";
static char masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__speed[] = "speed";
static char masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__current[] = "current";
static char masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__msg__DriveMotor__FIELDS[] = {
  {
    {masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__DriveMotor__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__msg__DriveMotor__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
masc_chassis_msgs__msg__DriveMotor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__msg__DriveMotor__TYPE_NAME, 32, 32},
      {masc_chassis_msgs__msg__DriveMotor__FIELDS, 5, 5},
    },
    {masc_chassis_msgs__msg__DriveMotor__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Function: Drive motor feedback for one protocol index.\n"
  "# Msg Name: DriveMotor\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint8 index                  # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe5\\x8d\\x8f\\xe8\\xae\\xae\\xe7\\xb4\\xa2\\xe5\\xbc\\x95\\xef\\xbc\\x8c\\xe7\\x94\\xb1 CAN ID \\xe8\\x8c\\x83\\xe5\\x9b\\xb4\\xe8\\xae\\xa1\\xe7\\xae\\x97\n"
  "float64 speed                # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9am/s\\xef\\xbc\\x8c\\xe9\\xa9\\xb1\\xe5\\x8a\\xa8\\xe8\\xbd\\xae\\xe7\\xba\\xbf\\xe9\\x80\\x9f\\xe5\\xba\\xa6\n"
  "float64 current              # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aA\\xef\\xbc\\x8c\\xe9\\xa9\\xb1\\xe5\\x8a\\xa8\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe7\\x94\\xb5\\xe6\\xb5\\x81\n"
  "float64 position             # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9am\\xef\\xbc\\x8c\\xe9\\xa9\\xb1\\xe5\\x8a\\xa8\\xe8\\xbd\\xae\\xe7\\xb4\\xaf\\xe8\\xae\\xa1\\xe4\\xbd\\x8d\\xe7\\xbd\\xae";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__msg__DriveMotor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__msg__DriveMotor__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 292, 292},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__msg__DriveMotor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__msg__DriveMotor__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

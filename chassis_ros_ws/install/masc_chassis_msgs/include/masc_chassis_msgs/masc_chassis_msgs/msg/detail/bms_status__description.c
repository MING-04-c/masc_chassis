// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from masc_chassis_msgs:msg/BmsStatus.idl
// generated code does not contain a copyright notice

#include "masc_chassis_msgs/msg/detail/bms_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__msg__BmsStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0xb9, 0x45, 0x6c, 0x02, 0x14, 0xdb, 0x93,
      0xd1, 0xea, 0xbe, 0x27, 0x58, 0xe2, 0xa7, 0x7a,
      0xfd, 0xd2, 0x84, 0x5a, 0x3c, 0xcd, 0xcc, 0xfc,
      0xea, 0xcc, 0xa1, 0x70, 0xdc, 0x95, 0x72, 0x0c,
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

static char masc_chassis_msgs__msg__BmsStatus__TYPE_NAME[] = "masc_chassis_msgs/msg/BmsStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__header[] = "header";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_soc[] = "bat_soc";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_soh[] = "bat_soh";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_voltage[] = "bat_voltage";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_current[] = "bat_current";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_max_voltage[] = "bat_max_voltage";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_max_current[] = "bat_max_current";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_temp_max[] = "bat_temp_max";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_temp_min[] = "bat_temp_min";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bms_health[] = "bms_health";
static char masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bms_cycle_count[] = "bms_cycle_count";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__msg__BmsStatus__FIELDS[] = {
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_soc, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_soh, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_voltage, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_current, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_max_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_max_current, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_temp_max, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bat_temp_min, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bms_health, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__BmsStatus__FIELD_NAME__bms_cycle_count, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__msg__BmsStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
masc_chassis_msgs__msg__BmsStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__msg__BmsStatus__TYPE_NAME, 31, 31},
      {masc_chassis_msgs__msg__BmsStatus__FIELDS, 11, 11},
    },
    {masc_chassis_msgs__msg__BmsStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Function: Unified BMS / power-system status.\n"
  "# Msg Name: BmsStatus\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint8 BMS_HEALTH_TIMEOUT = 255\n"
  "uint8 BMS_HEALTH_UNKNOWN = 0\n"
  "uint8 BMS_HEALTH_GOOD = 1\n"
  "uint8 BMS_HEALTH_OVERHEAT = 2\n"
  "uint8 BMS_HEALTH_DEAD = 3\n"
  "uint8 BMS_HEALTH_OVERVOLTAGE = 4\n"
  "uint8 BMS_HEALTH_UNSPEC_FAILURE = 5\n"
  "uint8 BMS_HEALTH_COLD = 6\n"
  "uint8 BMS_HEALTH_WATCHDOG_TIMER_EXPIRE = 7\n"
  "uint8 BMS_HEALTH_SAFETY_TIMER_EXPIRE = 8\n"
  "\n"
  "\n"
  "uint8 bat_soc             # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a%\\xef\\xbc\\x8c\\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe5\\x89\\xa9\\xe4\\xbd\\x99\\xe7\\x94\\xb5\\xe9\\x87\\x8f\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0-100\n"
  "uint8 bat_soh             # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a%\\xef\\xbc\\x8c\\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe5\\x81\\xa5\\xe5\\xba\\xb7\\xe5\\xba\\xa6\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0-100\n"
  "float64 bat_voltage       # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aV\\xef\\xbc\\x8c\\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe7\\x94\\xb5\\xe5\\x8e\\x8b\n"
  "float64 bat_current       # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aA\\xef\\xbc\\x8c\\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe7\\x94\\xb5\\xe6\\xb5\\x81\\xef\\xbc\\x8c\\xe6\\x94\\xbe\\xe7\\x94\\xb5\\xe5\\x8f\\xaf\\xe4\\xb8\\xba\\xe8\\xb4\\x9f\\xe5\\x80\\xbc\n"
  "float64 bat_max_voltage   # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aV\\xef\\xbc\\x8c\\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe6\\xbb\\xa1\\xe7\\x94\\xb5\\xe7\\x94\\xb5\\xe5\\x8e\\x8b/\\xe7\\x94\\xb5\\xe6\\xba\\x90\\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe5\\x85\\x81\\xe8\\xae\\xb8\\xe6\\x9c\\x80\\xe5\\xa4\\xa7\\xe7\\x94\\xb5\\xe5\\x8e\\x8b\n"
  "float64 bat_max_current   # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aA\\xef\\xbc\\x8c\\xe7\\x94\\xb5\\xe6\\xba\\x90\\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe5\\x85\\x81\\xe8\\xae\\xb8\\xe6\\x9c\\x80\\xe5\\xa4\\xa7\\xe7\\x94\\xb5\\xe6\\xb5\\x81\n"
  "float64 bat_temp_max      # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9adegC\\xef\\xbc\\x8c\\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe6\\x9c\\x80\\xe9\\xab\\x98\\xe6\\xb8\\xa9\\xe5\\xba\\xa6\n"
  "float64 bat_temp_min      # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9adegC\\xef\\xbc\\x8c\\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe6\\x9c\\x80\\xe4\\xbd\\x8e\\xe6\\xb8\\xa9\\xe5\\xba\\xa6\n"
  "uint8 bms_health          # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8cBMS \\xe5\\x81\\xa5\\xe5\\xba\\xb7\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xef\\xbc\\x8c\\xe8\\xa7\\x81 BMS_HEALTH_* \\xe5\\xb8\\xb8\\xe9\\x87\\x8f\n"
  "uint16 bms_cycle_count    # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\xac\\xa1\\xef\\xbc\\x8c\\xe7\\x94\\xb5\\xe6\\xb1\\xa0\\xe5\\xbe\\xaa\\xe7\\x8e\\xaf\\xe6\\xac\\xa1\\xe6\\x95\\xb0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__msg__BmsStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__msg__BmsStatus__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 878, 878},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__msg__BmsStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__msg__BmsStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

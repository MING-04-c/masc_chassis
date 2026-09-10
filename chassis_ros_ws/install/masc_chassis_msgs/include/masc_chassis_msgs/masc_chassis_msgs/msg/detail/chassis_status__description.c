// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from masc_chassis_msgs:msg/ChassisStatus.idl
// generated code does not contain a copyright notice

#include "masc_chassis_msgs/msg/detail/chassis_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__msg__ChassisStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0xd1, 0xb7, 0xf5, 0xae, 0x6b, 0xec, 0x14,
      0xb6, 0x2f, 0x3d, 0xec, 0x74, 0xad, 0x8c, 0x10,
      0xc7, 0xf0, 0xaa, 0x43, 0x8e, 0x50, 0x8e, 0xf2,
      0x13, 0xbb, 0x78, 0x79, 0x74, 0xdb, 0x30, 0x5a,
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

static char masc_chassis_msgs__msg__ChassisStatus__TYPE_NAME[] = "masc_chassis_msgs/msg/ChassisStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__header[] = "header";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__chassis_state[] = "chassis_state";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__current_motion_mode[] = "current_motion_mode";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__motion_mode_switching[] = "motion_mode_switching";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__brake_active[] = "brake_active";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__low_battery[] = "low_battery";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__excessive_tilt[] = "excessive_tilt";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__manual_charging[] = "manual_charging";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__dock_charging[] = "dock_charging";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__main_power_active[] = "main_power_active";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__obstacle_status_flags[] = "obstacle_status_flags";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__system_status_flags[] = "system_status_flags";
static char masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__chassis_fault[] = "chassis_fault";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__msg__ChassisStatus__FIELDS[] = {
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__chassis_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__current_motion_mode, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__motion_mode_switching, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__brake_active, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__low_battery, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__excessive_tilt, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__manual_charging, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__dock_charging, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__main_power_active, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__obstacle_status_flags, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__system_status_flags, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__ChassisStatus__FIELD_NAME__chassis_fault, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__msg__ChassisStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
masc_chassis_msgs__msg__ChassisStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__msg__ChassisStatus__TYPE_NAME, 35, 35},
      {masc_chassis_msgs__msg__ChassisStatus__FIELDS, 13, 13},
    },
    {masc_chassis_msgs__msg__ChassisStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Function: Chassis runtime status from motion mode and system info feedback.\n"
  "# Msg Name: ChassisStatus\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "uint8 CHASSIS_STATE_UNKNOWN = 0\n"
  "uint8 CHASSIS_STATE_ESTOP = 1\n"
  "uint8 CHASSIS_STATE_TOW = 2\n"
  "uint8 CHASSIS_STATE_FAULT = 3\n"
  "uint8 CHASSIS_STATE_SELF_CHECK = 4\n"
  "uint8 CHASSIS_STATE_PARK = 5\n"
  "uint8 CHASSIS_STATE_REMOTE_CONTROL = 6\n"
  "uint8 CHASSIS_STATE_COMM_CONTROL = 7\n"
  "\n"
  "uint8 MOTION_MODE_DEFAULT_CHASSIS = 0\n"
  "uint8 MOTION_MODE_PARK = 1\n"
  "uint8 MOTION_MODE_ACKERMANN = 2\n"
  "uint8 MOTION_MODE_SPIN = 3\n"
  "uint8 MOTION_MODE_LATERAL = 4\n"
  "uint8 MOTION_MODE_DIAGONAL = 5\n"
  "\n"
  "uint8 chassis_state            # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x98\\xbe\\xe7\\xa4\\xba\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xef\\xbc\\x8c\\xe8\\xa7\\x81 CHASSIS_STATE_* \\xe5\\xb8\\xb8\\xe9\\x87\\x8f\n"
  "uint8 current_motion_mode      # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xef\\xbc\\x8c\\xe8\\xa7\\x81 MOTION_MODE_* \\xe5\\xb8\\xb8\\xe9\\x87\\x8f\n"
  "bool motion_mode_switching     # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\xa4\\x84\\xe4\\xba\\x8e\\xe8\\xbf\\x90\\xe5\\x8a\\xa8\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe5\\x88\\x87\\xe6\\x8d\\xa2\\xe4\\xb8\\xad\n"
  "bool brake_active              # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe6\\x8a\\xb1\\xe9\\x97\\xb8\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\xbf\\x80\\xe6\\xb4\\xbb\n"
  "bool low_battery               # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe4\\xbd\\x8e\\xe7\\x94\\xb5\\xe9\\x87\\x8f\n"
  "bool excessive_tilt            # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\x80\\xbe\\xe8\\xa7\\x92\\xe8\\xbf\\x87\\xe5\\xa4\\xa7\n"
  "bool manual_charging           # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x89\\x8b\\xe5\\x8a\\xa8\\xe5\\x85\\x85\\xe7\\x94\\xb5\n"
  "bool dock_charging             # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\x85\\x85\\xe7\\x94\\xb5\\xe6\\xa1\\xa9\\xe5\\x85\\x85\\xe7\\x94\\xb5\n"
  "bool main_power_active         # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe5\\x8a\\xa8\\xe5\\x8a\\x9b\\xe7\\x94\\xb5\\xe6\\xba\\x90\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe6\\x8e\\xa5\\xe9\\x80\\x9a\\xef\\xbc\\x8c\\xe6\\x9d\\xa5\\xe8\\x87\\xaa\\xe4\\xb8\\xbb\\xe6\\x8e\\xa5\\xe8\\xa7\\xa6\\xe5\\x99\\xa8\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "uint8 obstacle_status_flags    # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe9\\x9a\\x9c\\xe7\\xa2\\x8d\\xe7\\x8a\\xb6\\xe6\\x80\\x81 flags\\xef\\xbc\\x8cbit0 \\xe5\\x89\\x8d\\xef\\xbc\\x8cbit1 \\xe5\\x90\\x8e\\xef\\xbc\\x8cbit2 \\xe5\\xb7\\xa6\\xe5\\x89\\x8d\\xef\\xbc\\x8cbit3 \\xe5\\xb7\\xa6\\xe5\\x90\\x8e\\xef\\xbc\\x8cbit4 \\xe5\\x8f\\xb3\\xe5\\x89\\x8d\\xef\\xbc\\x8cbit5 \\xe5\\x8f\\xb3\\xe5\\x90\\x8e\n"
  "uint32 system_status_flags     # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c0x204 Byte0-Byte3 \\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe5\\x80\\xbc\\xef\\xbc\\x8cByte0 \\xe4\\xb8\\xbb\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xef\\xbc\\x8cByte1 \\xe7\\xb3\\xbb\\xe7\\xbb\\x9f flags\\xef\\xbc\\x8cByte2 \\xe9\\x9a\\x9c\\xe7\\xa2\\x8d flags\\xef\\xbc\\x8cByte3 \\xe9\\xa2\\x84\\xe7\\x95\\x99\n"
  "uint32 chassis_fault           # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe6\\x95\\x85\\xe9\\x9a\\x9c\\xe7\\xa0\\x81 bitfield/raw code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__msg__ChassisStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__msg__ChassisStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1307, 1307},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__msg__ChassisStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__msg__ChassisStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from masc_chassis_msgs:msg/CanFrameStatsArray.idl
// generated code does not contain a copyright notice

#include "masc_chassis_msgs/msg/detail/can_frame_stats_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__msg__CanFrameStatsArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0x65, 0x88, 0x92, 0x54, 0xcb, 0xab, 0x9e,
      0x52, 0x56, 0xfc, 0x8f, 0x8d, 0x0a, 0xa3, 0x48,
      0xab, 0xa9, 0xa4, 0x9a, 0xd6, 0xb7, 0x09, 0xc1,
      0xd0, 0xe4, 0xd4, 0xc5, 0x90, 0x89, 0x11, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "masc_chassis_msgs/msg/detail/can_frame_stats__functions.h"
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
static const rosidl_type_hash_t masc_chassis_msgs__msg__CanFrameStats__EXPECTED_HASH = {1, {
    0x68, 0xda, 0x8d, 0xb8, 0x02, 0x5b, 0x46, 0xc1,
    0x32, 0x5b, 0xcc, 0x3f, 0xd1, 0x57, 0x47, 0x96,
    0x61, 0xcf, 0x75, 0x6f, 0x41, 0xe1, 0x9c, 0x05,
    0x3e, 0xe2, 0x64, 0x19, 0xac, 0xd1, 0xfa, 0xca,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char masc_chassis_msgs__msg__CanFrameStatsArray__TYPE_NAME[] = "masc_chassis_msgs/msg/CanFrameStatsArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char masc_chassis_msgs__msg__CanFrameStats__TYPE_NAME[] = "masc_chassis_msgs/msg/CanFrameStats";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char masc_chassis_msgs__msg__CanFrameStatsArray__FIELD_NAME__header[] = "header";
static char masc_chassis_msgs__msg__CanFrameStatsArray__FIELD_NAME__stats[] = "stats";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__msg__CanFrameStatsArray__FIELDS[] = {
  {
    {masc_chassis_msgs__msg__CanFrameStatsArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CanFrameStatsArray__FIELD_NAME__stats, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {masc_chassis_msgs__msg__CanFrameStats__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription masc_chassis_msgs__msg__CanFrameStatsArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CanFrameStats__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__msg__CanFrameStatsArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__msg__CanFrameStatsArray__TYPE_NAME, 40, 40},
      {masc_chassis_msgs__msg__CanFrameStatsArray__FIELDS, 2, 2},
    },
    {masc_chassis_msgs__msg__CanFrameStatsArray__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&masc_chassis_msgs__msg__CanFrameStats__EXPECTED_HASH, masc_chassis_msgs__msg__CanFrameStats__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = masc_chassis_msgs__msg__CanFrameStats__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Function: Receive and parse statistics for all tracked CAN IDs.\n"
  "# Msg Name: CanFrameStatsArray\n"
  "\n"
  "std_msgs/Header header                 # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8c\\xe6\\x9c\\xac\\xe7\\xbb\\x84 CAN \\xe7\\xbb\\x9f\\xe8\\xae\\xa1\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\\xe7\\x9a\\x84\\xe5\\x8f\\x91\\xe5\\xb8\\x83\\xe6\\x97\\xb6\\xe9\\x97\\xb4\n"
  "\n"
  "masc_chassis_msgs/CanFrameStats[] stats";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__msg__CanFrameStatsArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__msg__CanFrameStatsArray__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 202, 202},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__msg__CanFrameStatsArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__msg__CanFrameStatsArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *masc_chassis_msgs__msg__CanFrameStats__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from masc_chassis_msgs:msg/CanFrameStats.idl
// generated code does not contain a copyright notice

#include "masc_chassis_msgs/msg/detail/can_frame_stats__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_masc_chassis_msgs
const rosidl_type_hash_t *
masc_chassis_msgs__msg__CanFrameStats__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0xda, 0x8d, 0xb8, 0x02, 0x5b, 0x46, 0xc1,
      0x32, 0x5b, 0xcc, 0x3f, 0xd1, 0x57, 0x47, 0x96,
      0x61, 0xcf, 0x75, 0x6f, 0x41, 0xe1, 0x9c, 0x05,
      0x3e, 0xe2, 0x64, 0x19, 0xac, 0xd1, 0xfa, 0xca,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char masc_chassis_msgs__msg__CanFrameStats__TYPE_NAME[] = "masc_chassis_msgs/msg/CanFrameStats";

// Define type names, field names, and default values
static char masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__can_id[] = "can_id";
static char masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__rx_count[] = "rx_count";
static char masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__parse_error_count[] = "parse_error_count";
static char masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__drop_count[] = "drop_count";
static char masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__frequency[] = "frequency";
static char masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__last_rx_age_ms[] = "last_rx_age_ms";

static rosidl_runtime_c__type_description__Field masc_chassis_msgs__msg__CanFrameStats__FIELDS[] = {
  {
    {masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__can_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__rx_count, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__parse_error_count, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__drop_count, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__frequency, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {masc_chassis_msgs__msg__CanFrameStats__FIELD_NAME__last_rx_age_ms, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
masc_chassis_msgs__msg__CanFrameStats__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {masc_chassis_msgs__msg__CanFrameStats__TYPE_NAME, 35, 35},
      {masc_chassis_msgs__msg__CanFrameStats__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Function: Receive and parse statistics for one CAN ID.\n"
  "# Msg Name: CanFrameStats\n"
  "\n"
  "string can_id                         # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe6\\x97\\xa0\\xef\\xbc\\x8cCAN ID\\xef\\xbc\\x8c\\xe6\\xa0\\xbc\\xe5\\xbc\\x8f\\xe7\\xa4\\xba\\xe4\\xbe\\x8b\\xef\\xbc\\x9a0x200\n"
  "uint64 rx_count                       # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe5\\xb8\\xa7\\xef\\xbc\\x8c\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe6\\xac\\xa1\\xe6\\x95\\xb0\n"
  "uint64 parse_error_count              # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe5\\xb8\\xa7\\xef\\xbc\\x8c\\xe8\\xa7\\xa3\\xe6\\x9e\\x90\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xe6\\xac\\xa1\\xe6\\x95\\xb0\n"
  "uint64 drop_count                     # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9a\\xe5\\xb8\\xa7\\xef\\xbc\\x8c\\xe4\\xb8\\xa2\\xe5\\xbc\\x83\\xe6\\xac\\xa1\\xe6\\x95\\xb0\n"
  "float64 frequency                     # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9aHz\\xef\\xbc\\x8c\\xe4\\xbd\\x8e\\xe9\\x80\\x9a\\xe5\\xb9\\xb3\\xe6\\xbb\\x91\\xe5\\x90\\x8e\\xe7\\x9a\\x84\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe9\\xa2\\x91\\xe7\\x8e\\x87\n"
  "\n"
  "uint64 last_rx_age_ms                 # \\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xef\\xbc\\x9ams\\xef\\xbc\\x8c\\xe8\\xb7\\x9d\\xe7\\xa6\\xbb\\xe6\\x9c\\x80\\xe5\\x90\\x8e\\xe4\\xb8\\x80\\xe6\\xac\\xa1\\xe6\\x94\\xb6\\xe5\\x88\\xb0\\xe8\\xaf\\xa5 CAN ID \\xe7\\x9a\\x84\\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xef\\xbc\\x9brx_count \\xe4\\xb8\\xba 0 \\xe6\\x97\\xb6\\xe5\\xa1\\xab 0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
masc_chassis_msgs__msg__CanFrameStats__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {masc_chassis_msgs__msg__CanFrameStats__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 444, 444},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
masc_chassis_msgs__msg__CanFrameStats__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *masc_chassis_msgs__msg__CanFrameStats__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

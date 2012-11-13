/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#include "pinba.pb-c.h"
void   pinba__request__init
                     (Pinba__Request         *message)
{
  static Pinba__Request init_value = PINBA__REQUEST__INIT;
  *message = init_value;
}
size_t pinba__request__get_packed_size
                     (const Pinba__Request *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pinba__request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pinba__request__pack
                     (const Pinba__Request *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pinba__request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pinba__request__pack_to_buffer
                     (const Pinba__Request *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pinba__request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Pinba__Request *
       pinba__request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Pinba__Request *)
     protobuf_c_message_unpack (&pinba__request__descriptor,
                                allocator, len, data);
}
void   pinba__request__free_unpacked
                     (Pinba__Request *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pinba__request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor pinba__request__field_descriptors[19] =
{
  {
    "hostname",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, hostname),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "server_name",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, server_name),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "script_name",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, script_name),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "request_count",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, request_count),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "document_size",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, document_size),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "memory_peak",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, memory_peak),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "request_time",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, request_time),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ru_utime",
    8,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, ru_utime),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ru_stime",
    9,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, ru_stime),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timer_hit_count",
    10,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Pinba__Request, n_timer_hit_count),
    PROTOBUF_C_OFFSETOF(Pinba__Request, timer_hit_count),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timer_value",
    11,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_FLOAT,
    PROTOBUF_C_OFFSETOF(Pinba__Request, n_timer_value),
    PROTOBUF_C_OFFSETOF(Pinba__Request, timer_value),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timer_tag_count",
    12,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Pinba__Request, n_timer_tag_count),
    PROTOBUF_C_OFFSETOF(Pinba__Request, timer_tag_count),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timer_tag_name",
    13,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Pinba__Request, n_timer_tag_name),
    PROTOBUF_C_OFFSETOF(Pinba__Request, timer_tag_name),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timer_tag_value",
    14,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Pinba__Request, n_timer_tag_value),
    PROTOBUF_C_OFFSETOF(Pinba__Request, timer_tag_value),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dictionary",
    15,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    PROTOBUF_C_OFFSETOF(Pinba__Request, n_dictionary),
    PROTOBUF_C_OFFSETOF(Pinba__Request, dictionary),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "status",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Pinba__Request, has_status),
    PROTOBUF_C_OFFSETOF(Pinba__Request, status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "memory_footprint",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    PROTOBUF_C_OFFSETOF(Pinba__Request, has_memory_footprint),
    PROTOBUF_C_OFFSETOF(Pinba__Request, memory_footprint),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "requests",
    18,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(Pinba__Request, n_requests),
    PROTOBUF_C_OFFSETOF(Pinba__Request, requests),
    &pinba__request__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "schema",
    19,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(Pinba__Request, schema),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pinba__request__field_indices_by_name[] = {
  14,   /* field[14] = dictionary */
  4,   /* field[4] = document_size */
  0,   /* field[0] = hostname */
  16,   /* field[16] = memory_footprint */
  5,   /* field[5] = memory_peak */
  3,   /* field[3] = request_count */
  6,   /* field[6] = request_time */
  17,   /* field[17] = requests */
  8,   /* field[8] = ru_stime */
  7,   /* field[7] = ru_utime */
  18,   /* field[18] = schema */
  2,   /* field[2] = script_name */
  1,   /* field[1] = server_name */
  15,   /* field[15] = status */
  9,   /* field[9] = timer_hit_count */
  11,   /* field[11] = timer_tag_count */
  12,   /* field[12] = timer_tag_name */
  13,   /* field[13] = timer_tag_value */
  10,   /* field[10] = timer_value */
};
static const ProtobufCIntRange pinba__request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 19 }
};
const ProtobufCMessageDescriptor pinba__request__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "Pinba.Request",
  "Request",
  "Pinba__Request",
  "Pinba",
  sizeof(Pinba__Request),
  19,
  pinba__request__field_descriptors,
  pinba__request__field_indices_by_name,
  1,  pinba__request__number_ranges,
  (ProtobufCMessageInit) pinba__request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
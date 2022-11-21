#include "labcomm.h"
#include "labcomm_private.h"
#include "orca_messages.h"

static unsigned char signature_bytes_directory[] = {
// struct { 4 fields
0, 0, 0, 17, 
  0, 0, 0, 4, 
  // connection_list_t 'input'
  0, 0, 0, 5, 
  105, 110, 112, 117, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    // struct { 3 fields
    0, 0, 0, 17, 
      0, 0, 0, 3, 
      // int 'index'
      0, 0, 0, 5, 
      105, 110, 100, 101, 120, 
      0, 0, 0, 35, 
      // string 'name'
      0, 0, 0, 4, 
      110, 97, 109, 101, 
      0, 0, 0, 39, 
      // array [_] 'signature'
      0, 0, 0, 9, 
      115, 105, 103, 110, 97, 116, 117, 114, 101, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        0, 0, 0, 33, 
      // }
    // }
  // }
  // connection_list_t 'output'
  0, 0, 0, 6, 
  111, 117, 116, 112, 117, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    // struct { 3 fields
    0, 0, 0, 17, 
      0, 0, 0, 3, 
      // int 'index'
      0, 0, 0, 5, 
      105, 110, 100, 101, 120, 
      0, 0, 0, 35, 
      // string 'name'
      0, 0, 0, 4, 
      110, 97, 109, 101, 
      0, 0, 0, 39, 
      // array [_] 'signature'
      0, 0, 0, 9, 
      115, 105, 103, 110, 97, 116, 117, 114, 101, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        0, 0, 0, 33, 
      // }
    // }
  // }
  // connection_list_t 'parameter'
  0, 0, 0, 9, 
  112, 97, 114, 97, 109, 101, 116, 101, 114, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    // struct { 3 fields
    0, 0, 0, 17, 
      0, 0, 0, 3, 
      // int 'index'
      0, 0, 0, 5, 
      105, 110, 100, 101, 120, 
      0, 0, 0, 35, 
      // string 'name'
      0, 0, 0, 4, 
      110, 97, 109, 101, 
      0, 0, 0, 39, 
      // array [_] 'signature'
      0, 0, 0, 9, 
      115, 105, 103, 110, 97, 116, 117, 114, 101, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        0, 0, 0, 33, 
      // }
    // }
  // }
  // connection_list_t 'log'
  0, 0, 0, 3, 
  108, 111, 103, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    // struct { 3 fields
    0, 0, 0, 17, 
      0, 0, 0, 3, 
      // int 'index'
      0, 0, 0, 5, 
      105, 110, 100, 101, 120, 
      0, 0, 0, 35, 
      // string 'name'
      0, 0, 0, 4, 
      110, 97, 109, 101, 
      0, 0, 0, 39, 
      // array [_] 'signature'
      0, 0, 0, 9, 
      115, 105, 103, 110, 97, 116, 117, 114, 101, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        0, 0, 0, 33, 
      // }
    // }
  // }
// }
};
labcomm_signature_t labcomm_signature_orca_messages_directory = {
  LABCOMM_SAMPLE, "directory",
  (int (*)(void *))labcomm_sizeof_orca_messages_directory,
  sizeof(signature_bytes_directory),
  signature_bytes_directory
 };
static unsigned char signature_bytes_select_input[] = {
// struct { 3 fields
0, 0, 0, 17, 
  0, 0, 0, 3, 
  // int 'port'
  0, 0, 0, 4, 
  112, 111, 114, 116, 
  0, 0, 0, 35, 
  // int 'decimation'
  0, 0, 0, 10, 
  100, 101, 99, 105, 109, 97, 116, 105, 111, 110, 
  0, 0, 0, 35, 
  // array [_] 'list'
  0, 0, 0, 4, 
  108, 105, 115, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    0, 0, 0, 35, 
  // }
// }
};
labcomm_signature_t labcomm_signature_orca_messages_select_input = {
  LABCOMM_SAMPLE, "select_input",
  (int (*)(void *))labcomm_sizeof_orca_messages_select_input,
  sizeof(signature_bytes_select_input),
  signature_bytes_select_input
 };
static unsigned char signature_bytes_select_output[] = {
// struct { 3 fields
0, 0, 0, 17, 
  0, 0, 0, 3, 
  // int 'port'
  0, 0, 0, 4, 
  112, 111, 114, 116, 
  0, 0, 0, 35, 
  // int 'decimation'
  0, 0, 0, 10, 
  100, 101, 99, 105, 109, 97, 116, 105, 111, 110, 
  0, 0, 0, 35, 
  // array [_] 'list'
  0, 0, 0, 4, 
  108, 105, 115, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    0, 0, 0, 35, 
  // }
// }
};
labcomm_signature_t labcomm_signature_orca_messages_select_output = {
  LABCOMM_SAMPLE, "select_output",
  (int (*)(void *))labcomm_sizeof_orca_messages_select_output,
  sizeof(signature_bytes_select_output),
  signature_bytes_select_output
 };
static unsigned char signature_bytes_select_parameter[] = {
// struct { 3 fields
0, 0, 0, 17, 
  0, 0, 0, 3, 
  // int 'port'
  0, 0, 0, 4, 
  112, 111, 114, 116, 
  0, 0, 0, 35, 
  // int 'decimation'
  0, 0, 0, 10, 
  100, 101, 99, 105, 109, 97, 116, 105, 111, 110, 
  0, 0, 0, 35, 
  // array [_] 'list'
  0, 0, 0, 4, 
  108, 105, 115, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    0, 0, 0, 35, 
  // }
// }
};
labcomm_signature_t labcomm_signature_orca_messages_select_parameter = {
  LABCOMM_SAMPLE, "select_parameter",
  (int (*)(void *))labcomm_sizeof_orca_messages_select_parameter,
  sizeof(signature_bytes_select_parameter),
  signature_bytes_select_parameter
 };
static unsigned char signature_bytes_select_log[] = {
// struct { 3 fields
0, 0, 0, 17, 
  0, 0, 0, 3, 
  // int 'port'
  0, 0, 0, 4, 
  112, 111, 114, 116, 
  0, 0, 0, 35, 
  // int 'decimation'
  0, 0, 0, 10, 
  100, 101, 99, 105, 109, 97, 116, 105, 111, 110, 
  0, 0, 0, 35, 
  // array [_] 'list'
  0, 0, 0, 4, 
  108, 105, 115, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    0, 0, 0, 35, 
  // }
// }
};
labcomm_signature_t labcomm_signature_orca_messages_select_log = {
  LABCOMM_SAMPLE, "select_log",
  (int (*)(void *))labcomm_sizeof_orca_messages_select_log,
  sizeof(signature_bytes_select_log),
  signature_bytes_select_log
 };
static void decode_directory(
  labcomm_decoder_t *d,
  void (*handle)(
    orca_messages_directory *v,
    void *context
  ),
  void *context
)
{
  orca_messages_directory v;
  v.input.n_0 = labcomm_decode_int(d);
  v.input.a = malloc(sizeof(v.input.a[0]) * v.input.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.input.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.input.a[i_0].index = labcomm_decode_int(d);
      v.input.a[i_0].name = labcomm_decode_string(d);
      v.input.a[i_0].signature.n_0 = labcomm_decode_int(d);
      v.input.a[i_0].signature.a = malloc(sizeof(v.input.a[i_0].signature.a[0]) * v.input.a[i_0].signature.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.input.a[i_0].signature.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.input.a[i_0].signature.a[i_1] = labcomm_decode_byte(d);
        }
      }
    }
  }
  v.output.n_0 = labcomm_decode_int(d);
  v.output.a = malloc(sizeof(v.output.a[0]) * v.output.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.output.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.output.a[i_0].index = labcomm_decode_int(d);
      v.output.a[i_0].name = labcomm_decode_string(d);
      v.output.a[i_0].signature.n_0 = labcomm_decode_int(d);
      v.output.a[i_0].signature.a = malloc(sizeof(v.output.a[i_0].signature.a[0]) * v.output.a[i_0].signature.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.output.a[i_0].signature.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.output.a[i_0].signature.a[i_1] = labcomm_decode_byte(d);
        }
      }
    }
  }
  v.parameter.n_0 = labcomm_decode_int(d);
  v.parameter.a = malloc(sizeof(v.parameter.a[0]) * v.parameter.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.parameter.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.parameter.a[i_0].index = labcomm_decode_int(d);
      v.parameter.a[i_0].name = labcomm_decode_string(d);
      v.parameter.a[i_0].signature.n_0 = labcomm_decode_int(d);
      v.parameter.a[i_0].signature.a = malloc(sizeof(v.parameter.a[i_0].signature.a[0]) * v.parameter.a[i_0].signature.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.parameter.a[i_0].signature.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.parameter.a[i_0].signature.a[i_1] = labcomm_decode_byte(d);
        }
      }
    }
  }
  v.log.n_0 = labcomm_decode_int(d);
  v.log.a = malloc(sizeof(v.log.a[0]) * v.log.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.log.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.log.a[i_0].index = labcomm_decode_int(d);
      v.log.a[i_0].name = labcomm_decode_string(d);
      v.log.a[i_0].signature.n_0 = labcomm_decode_int(d);
      v.log.a[i_0].signature.a = malloc(sizeof(v.log.a[i_0].signature.a[0]) * v.log.a[i_0].signature.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.log.a[i_0].signature.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.log.a[i_0].signature.a[i_1] = labcomm_decode_byte(d);
        }
      }
    }
  }
  handle(&v, context);
  {
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < v.input.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        free(v.input.a[i_0].name);
        free(v.input.a[i_0].signature.a);
      }
    }
    free(v.input.a);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < v.output.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        free(v.output.a[i_0].name);
        free(v.output.a[i_0].signature.a);
      }
    }
    free(v.output.a);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < v.parameter.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        free(v.parameter.a[i_0].name);
        free(v.parameter.a[i_0].signature.a);
      }
    }
    free(v.parameter.a);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < v.log.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        free(v.log.a[i_0].name);
        free(v.log.a[i_0].signature.a);
      }
    }
    free(v.log.a);
  }
}
void labcomm_decoder_register_orca_messages_directory(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_directory *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_orca_messages_directory,
    (labcomm_decoder_typecast_t)decode_directory,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_directory(
  labcomm_encoder_t *e,
  orca_messages_directory *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_orca_messages_directory);
  {
    labcomm_encode_int(e, (*v).input.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).input.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).input.a[i_0].index);
        labcomm_encode_string(e, (*v).input.a[i_0].name);
        labcomm_encode_int(e, (*v).input.a[i_0].signature.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).input.a[i_0].signature.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_byte(e, (*v).input.a[i_0].signature.a[i_1]);
          }
        }
      }
    }
    labcomm_encode_int(e, (*v).output.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).output.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).output.a[i_0].index);
        labcomm_encode_string(e, (*v).output.a[i_0].name);
        labcomm_encode_int(e, (*v).output.a[i_0].signature.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).output.a[i_0].signature.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_byte(e, (*v).output.a[i_0].signature.a[i_1]);
          }
        }
      }
    }
    labcomm_encode_int(e, (*v).parameter.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).parameter.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).parameter.a[i_0].index);
        labcomm_encode_string(e, (*v).parameter.a[i_0].name);
        labcomm_encode_int(e, (*v).parameter.a[i_0].signature.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).parameter.a[i_0].signature.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_byte(e, (*v).parameter.a[i_0].signature.a[i_1]);
          }
        }
      }
    }
    labcomm_encode_int(e, (*v).log.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).log.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).log.a[i_0].index);
        labcomm_encode_string(e, (*v).log.a[i_0].name);
        labcomm_encode_int(e, (*v).log.a[i_0].signature.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).log.a[i_0].signature.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_byte(e, (*v).log.a[i_0].signature.a[i_1]);
          }
        }
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_orca_messages_directory(
labcomm_encoder_t *e,
orca_messages_directory *v
)
{
labcomm_internal_encode(e, &labcomm_signature_orca_messages_directory, v);
}
void labcomm_encoder_register_orca_messages_directory(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_orca_messages_directory,
    (labcomm_encode_typecast_t)encode_directory
  );
}
int labcomm_sizeof_orca_messages_directory(orca_messages_directory *v)
{
  int result = 4;
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < (*v).input.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      result += 4 + strlen((*v).input.a[i_0].name);
      result += 1 * (*v).input.a[i_0].signature.n_0;
      result += 4;
    }
  }
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < (*v).output.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      result += 4 + strlen((*v).output.a[i_0].name);
      result += 1 * (*v).output.a[i_0].signature.n_0;
      result += 4;
    }
  }
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < (*v).parameter.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      result += 4 + strlen((*v).parameter.a[i_0].name);
      result += 1 * (*v).parameter.a[i_0].signature.n_0;
      result += 4;
    }
  }
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < (*v).log.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      result += 4 + strlen((*v).log.a[i_0].name);
      result += 1 * (*v).log.a[i_0].signature.n_0;
      result += 4;
    }
  }
  return result;
}
static void decode_select_input(
  labcomm_decoder_t *d,
  void (*handle)(
    orca_messages_select_input *v,
    void *context
  ),
  void *context
)
{
  orca_messages_select_input v;
  v.port = labcomm_decode_int(d);
  v.decimation = labcomm_decode_int(d);
  v.list.n_0 = labcomm_decode_int(d);
  v.list.a = malloc(sizeof(v.list.a[0]) * v.list.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.list.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.list.a[i_0] = labcomm_decode_int(d);
    }
  }
  handle(&v, context);
  {
    free(v.list.a);
  }
}
void labcomm_decoder_register_orca_messages_select_input(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_select_input *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_orca_messages_select_input,
    (labcomm_decoder_typecast_t)decode_select_input,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_select_input(
  labcomm_encoder_t *e,
  orca_messages_select_input *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_orca_messages_select_input);
  {
    labcomm_encode_int(e, (*v).port);
    labcomm_encode_int(e, (*v).decimation);
    labcomm_encode_int(e, (*v).list.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).list.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).list.a[i_0]);
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_orca_messages_select_input(
labcomm_encoder_t *e,
orca_messages_select_input *v
)
{
labcomm_internal_encode(e, &labcomm_signature_orca_messages_select_input, v);
}
void labcomm_encoder_register_orca_messages_select_input(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_orca_messages_select_input,
    (labcomm_encode_typecast_t)encode_select_input
  );
}
int labcomm_sizeof_orca_messages_select_input(orca_messages_select_input *v)
{
  int result = 4;
  result += 4 * (*v).list.n_0;
  result += 8;
  return result;
}
static void decode_select_output(
  labcomm_decoder_t *d,
  void (*handle)(
    orca_messages_select_output *v,
    void *context
  ),
  void *context
)
{
  orca_messages_select_output v;
  v.port = labcomm_decode_int(d);
  v.decimation = labcomm_decode_int(d);
  v.list.n_0 = labcomm_decode_int(d);
  v.list.a = malloc(sizeof(v.list.a[0]) * v.list.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.list.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.list.a[i_0] = labcomm_decode_int(d);
    }
  }
  handle(&v, context);
  {
    free(v.list.a);
  }
}
void labcomm_decoder_register_orca_messages_select_output(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_select_output *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_orca_messages_select_output,
    (labcomm_decoder_typecast_t)decode_select_output,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_select_output(
  labcomm_encoder_t *e,
  orca_messages_select_output *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_orca_messages_select_output);
  {
    labcomm_encode_int(e, (*v).port);
    labcomm_encode_int(e, (*v).decimation);
    labcomm_encode_int(e, (*v).list.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).list.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).list.a[i_0]);
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_orca_messages_select_output(
labcomm_encoder_t *e,
orca_messages_select_output *v
)
{
labcomm_internal_encode(e, &labcomm_signature_orca_messages_select_output, v);
}
void labcomm_encoder_register_orca_messages_select_output(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_orca_messages_select_output,
    (labcomm_encode_typecast_t)encode_select_output
  );
}
int labcomm_sizeof_orca_messages_select_output(orca_messages_select_output *v)
{
  int result = 4;
  result += 4 * (*v).list.n_0;
  result += 8;
  return result;
}
static void decode_select_parameter(
  labcomm_decoder_t *d,
  void (*handle)(
    orca_messages_select_parameter *v,
    void *context
  ),
  void *context
)
{
  orca_messages_select_parameter v;
  v.port = labcomm_decode_int(d);
  v.decimation = labcomm_decode_int(d);
  v.list.n_0 = labcomm_decode_int(d);
  v.list.a = malloc(sizeof(v.list.a[0]) * v.list.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.list.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.list.a[i_0] = labcomm_decode_int(d);
    }
  }
  handle(&v, context);
  {
    free(v.list.a);
  }
}
void labcomm_decoder_register_orca_messages_select_parameter(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_select_parameter *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_orca_messages_select_parameter,
    (labcomm_decoder_typecast_t)decode_select_parameter,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_select_parameter(
  labcomm_encoder_t *e,
  orca_messages_select_parameter *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_orca_messages_select_parameter);
  {
    labcomm_encode_int(e, (*v).port);
    labcomm_encode_int(e, (*v).decimation);
    labcomm_encode_int(e, (*v).list.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).list.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).list.a[i_0]);
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_orca_messages_select_parameter(
labcomm_encoder_t *e,
orca_messages_select_parameter *v
)
{
labcomm_internal_encode(e, &labcomm_signature_orca_messages_select_parameter, v);
}
void labcomm_encoder_register_orca_messages_select_parameter(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_orca_messages_select_parameter,
    (labcomm_encode_typecast_t)encode_select_parameter
  );
}
int labcomm_sizeof_orca_messages_select_parameter(orca_messages_select_parameter *v)
{
  int result = 4;
  result += 4 * (*v).list.n_0;
  result += 8;
  return result;
}
static void decode_select_log(
  labcomm_decoder_t *d,
  void (*handle)(
    orca_messages_select_log *v,
    void *context
  ),
  void *context
)
{
  orca_messages_select_log v;
  v.port = labcomm_decode_int(d);
  v.decimation = labcomm_decode_int(d);
  v.list.n_0 = labcomm_decode_int(d);
  v.list.a = malloc(sizeof(v.list.a[0]) * v.list.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.list.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.list.a[i_0] = labcomm_decode_int(d);
    }
  }
  handle(&v, context);
  {
    free(v.list.a);
  }
}
void labcomm_decoder_register_orca_messages_select_log(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_select_log *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_orca_messages_select_log,
    (labcomm_decoder_typecast_t)decode_select_log,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_select_log(
  labcomm_encoder_t *e,
  orca_messages_select_log *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_orca_messages_select_log);
  {
    labcomm_encode_int(e, (*v).port);
    labcomm_encode_int(e, (*v).decimation);
    labcomm_encode_int(e, (*v).list.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).list.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).list.a[i_0]);
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_orca_messages_select_log(
labcomm_encoder_t *e,
orca_messages_select_log *v
)
{
labcomm_internal_encode(e, &labcomm_signature_orca_messages_select_log, v);
}
void labcomm_encoder_register_orca_messages_select_log(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_orca_messages_select_log,
    (labcomm_encode_typecast_t)encode_select_log
  );
}
int labcomm_sizeof_orca_messages_select_log(orca_messages_select_log *v)
{
  int result = 4;
  result += 4 * (*v).list.n_0;
  result += 8;
  return result;
}

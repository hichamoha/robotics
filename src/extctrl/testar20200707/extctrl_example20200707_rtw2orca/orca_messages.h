/* LabComm declarations:
typedef struct {
  int index;
  string name;
  byte signature[_];
} connection_list_t[_];
typedef struct {
  int port;
  int decimation;
  int list[_];
} select_t;
sample struct {
  connection_list_t input;
  connection_list_t output;
  connection_list_t parameter;
  connection_list_t log;
} directory;
sample select_t select_input;
sample select_t select_output;
sample select_t select_parameter;
sample select_t select_log;
*/


#ifndef __LABCOMM_orca_messages_H__
#define __LABCOMM_orca_messages_H__

#include "labcomm.h"

#ifndef PREDEFINED_orca_messages_connection_list_t
typedef struct {
  int n_0;
  struct {
    int index;
    char* name;
    struct {
      int n_0;
      unsigned char *a;
    } signature;
  } *a;
} orca_messages_connection_list_t;
#endif

#ifndef PREDEFINED_orca_messages_select_t
typedef struct {
  int port;
  int decimation;
  struct {
    int n_0;
    int *a;
  } list;
} orca_messages_select_t;
#endif

#ifndef PREDEFINED_orca_messages_directory
typedef struct {
  orca_messages_connection_list_t input;
  orca_messages_connection_list_t output;
  orca_messages_connection_list_t parameter;
  orca_messages_connection_list_t log;
} orca_messages_directory;
#endif
void labcomm_decoder_register_orca_messages_directory(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_directory *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_orca_messages_directory(
  struct labcomm_encoder *e);
void labcomm_encode_orca_messages_directory(
  struct labcomm_encoder *e,
  orca_messages_directory *v
);
extern int labcomm_sizeof_orca_messages_directory(orca_messages_directory *v);

#ifndef PREDEFINED_orca_messages_select_input
typedef orca_messages_select_t orca_messages_select_input;
#endif
void labcomm_decoder_register_orca_messages_select_input(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_select_input *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_orca_messages_select_input(
  struct labcomm_encoder *e);
void labcomm_encode_orca_messages_select_input(
  struct labcomm_encoder *e,
  orca_messages_select_input *v
);
extern int labcomm_sizeof_orca_messages_select_input(orca_messages_select_input *v);

#ifndef PREDEFINED_orca_messages_select_output
typedef orca_messages_select_t orca_messages_select_output;
#endif
void labcomm_decoder_register_orca_messages_select_output(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_select_output *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_orca_messages_select_output(
  struct labcomm_encoder *e);
void labcomm_encode_orca_messages_select_output(
  struct labcomm_encoder *e,
  orca_messages_select_output *v
);
extern int labcomm_sizeof_orca_messages_select_output(orca_messages_select_output *v);

#ifndef PREDEFINED_orca_messages_select_parameter
typedef orca_messages_select_t orca_messages_select_parameter;
#endif
void labcomm_decoder_register_orca_messages_select_parameter(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_select_parameter *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_orca_messages_select_parameter(
  struct labcomm_encoder *e);
void labcomm_encode_orca_messages_select_parameter(
  struct labcomm_encoder *e,
  orca_messages_select_parameter *v
);
extern int labcomm_sizeof_orca_messages_select_parameter(orca_messages_select_parameter *v);

#ifndef PREDEFINED_orca_messages_select_log
typedef orca_messages_select_t orca_messages_select_log;
#endif
void labcomm_decoder_register_orca_messages_select_log(
  struct labcomm_decoder *d,
  void (*handler)(
    orca_messages_select_log *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_orca_messages_select_log(
  struct labcomm_encoder *e);
void labcomm_encode_orca_messages_select_log(
  struct labcomm_encoder *e,
  orca_messages_select_log *v
);
extern int labcomm_sizeof_orca_messages_select_log(orca_messages_select_log *v);

#define LABCOMM_FORALL_SAMPLES_orca_messages(func, sep) \
  func(directory, orca_messages_directory) sep \
  func(select_input, orca_messages_select_input) sep \
  func(select_output, orca_messages_select_output) sep \
  func(select_parameter, orca_messages_select_parameter) sep \
  func(select_log, orca_messages_select_log)
#endif

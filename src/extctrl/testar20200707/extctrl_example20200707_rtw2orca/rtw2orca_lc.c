#include "labcomm.h"
#include "labcomm_private.h"
#include "rtw2orca_lc.h"

static unsigned char signature_bytes_amplitude[] = {
0, 0, 0, 38, 
};
labcomm_signature_t labcomm_signature_rtw2orca_amplitude = {
  LABCOMM_SAMPLE, "amplitude",
  (int (*)(void *))labcomm_sizeof_rtw2orca_amplitude,
  sizeof(signature_bytes_amplitude),
  signature_bytes_amplitude
 };
static unsigned char signature_bytes_frequency[] = {
0, 0, 0, 38, 
};
labcomm_signature_t labcomm_signature_rtw2orca_frequency = {
  LABCOMM_SAMPLE, "frequency",
  (int (*)(void *))labcomm_sizeof_rtw2orca_frequency,
  sizeof(signature_bytes_frequency),
  signature_bytes_frequency
 };
static unsigned char signature_bytes_tp1[] = {
// array [6]
0, 0, 0, 16, 
  0, 0, 0, 1, 
  0, 0, 0, 6, 
  0, 0, 0, 38, 
// }
};
labcomm_signature_t labcomm_signature_rtw2orca_tp1 = {
  LABCOMM_SAMPLE, "tp1",
  (int (*)(void *))labcomm_sizeof_rtw2orca_tp1,
  sizeof(signature_bytes_tp1),
  signature_bytes_tp1
 };
static unsigned char signature_bytes_sine[] = {
0, 0, 0, 38, 
};
labcomm_signature_t labcomm_signature_rtw2orca_sine = {
  LABCOMM_SAMPLE, "sine",
  (int (*)(void *))labcomm_sizeof_rtw2orca_sine,
  sizeof(signature_bytes_sine),
  signature_bytes_sine
 };
static void decode_amplitude(
  labcomm_decoder_t *d,
  void (*handle)(
    rtw2orca_amplitude *v,
    void *context
  ),
  void *context
)
{
  rtw2orca_amplitude v;
  v = labcomm_decode_double(d);
  handle(&v, context);
}
void labcomm_decoder_register_rtw2orca_amplitude(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_amplitude *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_rtw2orca_amplitude,
    (labcomm_decoder_typecast_t)decode_amplitude,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_amplitude(
  labcomm_encoder_t *e,
  rtw2orca_amplitude *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_rtw2orca_amplitude);
  {
    labcomm_encode_double(e, (*v));
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_rtw2orca_amplitude(
labcomm_encoder_t *e,
rtw2orca_amplitude *v
)
{
labcomm_internal_encode(e, &labcomm_signature_rtw2orca_amplitude, v);
}
void labcomm_encoder_register_rtw2orca_amplitude(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_rtw2orca_amplitude,
    (labcomm_encode_typecast_t)encode_amplitude
  );
}
int labcomm_sizeof_rtw2orca_amplitude(rtw2orca_amplitude *v)
{
  return 12;
}
static void decode_frequency(
  labcomm_decoder_t *d,
  void (*handle)(
    rtw2orca_frequency *v,
    void *context
  ),
  void *context
)
{
  rtw2orca_frequency v;
  v = labcomm_decode_double(d);
  handle(&v, context);
}
void labcomm_decoder_register_rtw2orca_frequency(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_frequency *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_rtw2orca_frequency,
    (labcomm_decoder_typecast_t)decode_frequency,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_frequency(
  labcomm_encoder_t *e,
  rtw2orca_frequency *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_rtw2orca_frequency);
  {
    labcomm_encode_double(e, (*v));
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_rtw2orca_frequency(
labcomm_encoder_t *e,
rtw2orca_frequency *v
)
{
labcomm_internal_encode(e, &labcomm_signature_rtw2orca_frequency, v);
}
void labcomm_encoder_register_rtw2orca_frequency(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_rtw2orca_frequency,
    (labcomm_encode_typecast_t)encode_frequency
  );
}
int labcomm_sizeof_rtw2orca_frequency(rtw2orca_frequency *v)
{
  return 12;
}
static void decode_tp1(
  labcomm_decoder_t *d,
  void (*handle)(
    rtw2orca_tp1 *v,
    void *context
  ),
  void *context
)
{
  rtw2orca_tp1 v;
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < 6 ; i_0_0++) {
      v.a[i_0_0] = labcomm_decode_double(d);
    }
  }
  handle(&v, context);
}
void labcomm_decoder_register_rtw2orca_tp1(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_tp1 *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_rtw2orca_tp1,
    (labcomm_decoder_typecast_t)decode_tp1,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_tp1(
  labcomm_encoder_t *e,
  rtw2orca_tp1 *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_rtw2orca_tp1);
  {
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < 6 ; i_0_0++) {
        labcomm_encode_double(e, (*v).a[i_0_0]);
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_rtw2orca_tp1(
labcomm_encoder_t *e,
rtw2orca_tp1 *v
)
{
labcomm_internal_encode(e, &labcomm_signature_rtw2orca_tp1, v);
}
void labcomm_encoder_register_rtw2orca_tp1(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_rtw2orca_tp1,
    (labcomm_encode_typecast_t)encode_tp1
  );
}
int labcomm_sizeof_rtw2orca_tp1(rtw2orca_tp1 *v)
{
  return 52;
}
static void decode_sine(
  labcomm_decoder_t *d,
  void (*handle)(
    rtw2orca_sine *v,
    void *context
  ),
  void *context
)
{
  rtw2orca_sine v;
  v = labcomm_decode_double(d);
  handle(&v, context);
}
void labcomm_decoder_register_rtw2orca_sine(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_sine *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_rtw2orca_sine,
    (labcomm_decoder_typecast_t)decode_sine,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_sine(
  labcomm_encoder_t *e,
  rtw2orca_sine *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_rtw2orca_sine);
  {
    labcomm_encode_double(e, (*v));
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_rtw2orca_sine(
labcomm_encoder_t *e,
rtw2orca_sine *v
)
{
labcomm_internal_encode(e, &labcomm_signature_rtw2orca_sine, v);
}
void labcomm_encoder_register_rtw2orca_sine(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_rtw2orca_sine,
    (labcomm_encode_typecast_t)encode_sine
  );
}
int labcomm_sizeof_rtw2orca_sine(rtw2orca_sine *v)
{
  return 12;
}

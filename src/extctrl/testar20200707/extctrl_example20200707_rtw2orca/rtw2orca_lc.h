/* LabComm declarations:
sample double amplitude;
sample double frequency;
sample double tp1[6];
sample double sine;
*/


#ifndef __LABCOMM_rtw2orca_H__
#define __LABCOMM_rtw2orca_H__

#include "labcomm.h"

#ifndef PREDEFINED_rtw2orca_amplitude
typedef double rtw2orca_amplitude;
#endif
void labcomm_decoder_register_rtw2orca_amplitude(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_amplitude *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_rtw2orca_amplitude(
  struct labcomm_encoder *e);
void labcomm_encode_rtw2orca_amplitude(
  struct labcomm_encoder *e,
  rtw2orca_amplitude *v
);
extern int labcomm_sizeof_rtw2orca_amplitude(rtw2orca_amplitude *v);

#ifndef PREDEFINED_rtw2orca_frequency
typedef double rtw2orca_frequency;
#endif
void labcomm_decoder_register_rtw2orca_frequency(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_frequency *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_rtw2orca_frequency(
  struct labcomm_encoder *e);
void labcomm_encode_rtw2orca_frequency(
  struct labcomm_encoder *e,
  rtw2orca_frequency *v
);
extern int labcomm_sizeof_rtw2orca_frequency(rtw2orca_frequency *v);

#ifndef PREDEFINED_rtw2orca_tp1
typedef struct {
  double a[6];
} rtw2orca_tp1;
#endif
void labcomm_decoder_register_rtw2orca_tp1(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_tp1 *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_rtw2orca_tp1(
  struct labcomm_encoder *e);
void labcomm_encode_rtw2orca_tp1(
  struct labcomm_encoder *e,
  rtw2orca_tp1 *v
);
extern int labcomm_sizeof_rtw2orca_tp1(rtw2orca_tp1 *v);

#ifndef PREDEFINED_rtw2orca_sine
typedef double rtw2orca_sine;
#endif
void labcomm_decoder_register_rtw2orca_sine(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_sine *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_rtw2orca_sine(
  struct labcomm_encoder *e);
void labcomm_encode_rtw2orca_sine(
  struct labcomm_encoder *e,
  rtw2orca_sine *v
);
extern int labcomm_sizeof_rtw2orca_sine(rtw2orca_sine *v);

#define LABCOMM_FORALL_SAMPLES_rtw2orca(func, sep) \
  func(amplitude, rtw2orca_amplitude) sep \
  func(frequency, rtw2orca_frequency) sep \
  func(tp1, rtw2orca_tp1) sep \
  func(sine, rtw2orca_sine)
#endif

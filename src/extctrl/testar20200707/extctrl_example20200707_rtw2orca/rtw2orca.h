#ifndef __RTW2ORCA_extctrl_example20200707_H__
#define __RTW2ORCA_extctrl_example20200707_H__
#include "orca.h"
#include "extctrl_example20200707.h"
#include "rtw2orca_lc_extctrl_irc5_main_20120112.h"
#include "rtw2orca_lc.h"

typedef struct rtw2orca_controller {
  struct controller_context *context;
  orca_lock_t lock;
  int (*next)(struct rtw2orca_controller*);
  void (*local_inputs)(struct rtw2orca_controller*);
  void (*local_outputs)(struct rtw2orca_controller*);
  orca_channel_t *input;
  orca_channel_t *output;
  orca_channel_t *parameter;
  orca_channel_t *log;
  struct rtModel_extctrl_example20200707 *model;
  /* Inputs */
  rtw2orca_irb2ext v_irb2ext;
  /* Outputs */
  rtw2orca_ext2irb v_ext2irb;
  /* Parameters */
  rtw2orca_amplitude v_amplitude;
  rtw2orca_frequency v_frequency;
  /* Testsignals */
  rtw2orca_sine v_sine;
  rtw2orca_tp1 v_tp1;
} rtw2orca_controller_t;

void rtw2orca_init(rtw2orca_controller_t *controller);
void rtw2orca_main(rtw2orca_controller_t *controller);

#endif

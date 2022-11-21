/* LabComm declarations:
typedef struct {
  float parKp;
  float parKv;
  float parKi;
  float parTrqMin;
  float parTrqMax;
  double posRawAbs;
  double posRawFb;
  double posFlt;
  float velRaw;
  float velFlt;
  float velOut;
  float trqRaw;
  float trqRefFlt;
  double posRef;
  float velRef;
  float trqFfw;
  float trqFfwGrav;
} irb2ext_joint_abs;
typedef struct {
  float parKp;
  float parKv;
  float parKi;
  double posRef;
  float velRef;
  float trqFfw;
} ext2irb_joint_abs;
typedef struct {
  int instruction;
  float value1;
  float value2;
  float value3;
  float value4;
  float value5;
  float value6;
  byte string1[20];
  byte string2[20];
} extctrl_communication_data;
typedef struct {
  int kind;
  irb2ext_joint_abs joint[_];
  extctrl_communication_data mocgendata;
} irb2ext_robot_abs;
typedef struct {
  boolean obtaining;
  boolean manualMode;
  boolean controlActive;
  irb2ext_robot_abs robot[_];
} irb2ext_type;
typedef struct {
  ext2irb_joint_abs joint[_];
  extctrl_communication_data mocgendata;
} ext2irb_robot_abs;
typedef struct {
  ext2irb_robot_abs robot[_];
} ext2irb_type;
sample irb2ext_type irb2ext;
sample ext2irb_type ext2irb;
typedef struct {
  float parKp;
  float parKv;
  float parKi;
  double posOffset;
  float velOffset;
  float trqFfwOffset;
} ext2irb_joint_offset;
typedef struct {
  int kind;
  irb2ext_joint_abs joint[_];
  extctrl_communication_data mocgendata[_];
} irb2ext_robot_net;
typedef struct {
  boolean obtaining;
  boolean manualMode;
  boolean controlActive;
  irb2ext_robot_net robot[_];
} irb2ext_net_type;
typedef struct {
  ext2irb_joint_offset joint[_];
  extctrl_communication_data mocgendata[_];
} ext2irb_robot_net;
typedef struct {
  ext2irb_robot_net robot[_];
} ext2irb_net_type;
typedef irb2ext_joint_abs irb2ext_joint_net;
typedef ext2irb_joint_offset ext2irb_joint_net;
typedef float force_torque_vector[6];
sample irb2ext_net_type irb2ext_net;
sample ext2irb_net_type ext2irb_net;
sample force_torque_vector force_torque_net[_];
*/


#ifndef __LABCOMM_extctrl_irc5_main_20120112_H__
#define __LABCOMM_extctrl_irc5_main_20120112_H__

#include "labcomm.h"

#ifndef PREDEFINED_rtw2orca_irb2ext_joint_abs
typedef struct {
  float parKp;
  float parKv;
  float parKi;
  float parTrqMin;
  float parTrqMax;
  double posRawAbs;
  double posRawFb;
  double posFlt;
  float velRaw;
  float velFlt;
  float velOut;
  float trqRaw;
  float trqRefFlt;
  double posRef;
  float velRef;
  float trqFfw;
  float trqFfwGrav;
} rtw2orca_irb2ext_joint_abs;
#endif

#ifndef PREDEFINED_rtw2orca_ext2irb_joint_abs
typedef struct {
  float parKp;
  float parKv;
  float parKi;
  double posRef;
  float velRef;
  float trqFfw;
} rtw2orca_ext2irb_joint_abs;
#endif

#ifndef PREDEFINED_rtw2orca_extctrl_communication_data
typedef struct {
  int instruction;
  float value1;
  float value2;
  float value3;
  float value4;
  float value5;
  float value6;
  struct {
    unsigned char a[20];
  } string1;
  struct {
    unsigned char a[20];
  } string2;
} rtw2orca_extctrl_communication_data;
#endif

#ifndef PREDEFINED_rtw2orca_irb2ext_robot_abs
typedef struct {
  int kind;
  struct {
    int n_0;
    rtw2orca_irb2ext_joint_abs *a;
  } joint;
  rtw2orca_extctrl_communication_data mocgendata;
} rtw2orca_irb2ext_robot_abs;
#endif

#ifndef PREDEFINED_rtw2orca_irb2ext_type
typedef struct {
  unsigned char obtaining;
  unsigned char manualMode;
  unsigned char controlActive;
  struct {
    int n_0;
    rtw2orca_irb2ext_robot_abs *a;
  } robot;
} rtw2orca_irb2ext_type;
#endif

#ifndef PREDEFINED_rtw2orca_ext2irb_robot_abs
typedef struct {
  struct {
    int n_0;
    rtw2orca_ext2irb_joint_abs *a;
  } joint;
  rtw2orca_extctrl_communication_data mocgendata;
} rtw2orca_ext2irb_robot_abs;
#endif

#ifndef PREDEFINED_rtw2orca_ext2irb_type
typedef struct {
  struct {
    int n_0;
    rtw2orca_ext2irb_robot_abs *a;
  } robot;
} rtw2orca_ext2irb_type;
#endif

#ifndef PREDEFINED_rtw2orca_irb2ext
typedef rtw2orca_irb2ext_type rtw2orca_irb2ext;
#endif
void labcomm_decoder_register_rtw2orca_irb2ext(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_irb2ext *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_rtw2orca_irb2ext(
  struct labcomm_encoder *e);
void labcomm_encode_rtw2orca_irb2ext(
  struct labcomm_encoder *e,
  rtw2orca_irb2ext *v
);
extern int labcomm_sizeof_rtw2orca_irb2ext(rtw2orca_irb2ext *v);

#ifndef PREDEFINED_rtw2orca_ext2irb
typedef rtw2orca_ext2irb_type rtw2orca_ext2irb;
#endif
void labcomm_decoder_register_rtw2orca_ext2irb(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_ext2irb *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_rtw2orca_ext2irb(
  struct labcomm_encoder *e);
void labcomm_encode_rtw2orca_ext2irb(
  struct labcomm_encoder *e,
  rtw2orca_ext2irb *v
);
extern int labcomm_sizeof_rtw2orca_ext2irb(rtw2orca_ext2irb *v);

#ifndef PREDEFINED_rtw2orca_ext2irb_joint_offset
typedef struct {
  float parKp;
  float parKv;
  float parKi;
  double posOffset;
  float velOffset;
  float trqFfwOffset;
} rtw2orca_ext2irb_joint_offset;
#endif

#ifndef PREDEFINED_rtw2orca_irb2ext_robot_net
typedef struct {
  int kind;
  struct {
    int n_0;
    rtw2orca_irb2ext_joint_abs *a;
  } joint;
  struct {
    int n_0;
    rtw2orca_extctrl_communication_data *a;
  } mocgendata;
} rtw2orca_irb2ext_robot_net;
#endif

#ifndef PREDEFINED_rtw2orca_irb2ext_net_type
typedef struct {
  unsigned char obtaining;
  unsigned char manualMode;
  unsigned char controlActive;
  struct {
    int n_0;
    rtw2orca_irb2ext_robot_net *a;
  } robot;
} rtw2orca_irb2ext_net_type;
#endif

#ifndef PREDEFINED_rtw2orca_ext2irb_robot_net
typedef struct {
  struct {
    int n_0;
    rtw2orca_ext2irb_joint_offset *a;
  } joint;
  struct {
    int n_0;
    rtw2orca_extctrl_communication_data *a;
  } mocgendata;
} rtw2orca_ext2irb_robot_net;
#endif

#ifndef PREDEFINED_rtw2orca_ext2irb_net_type
typedef struct {
  struct {
    int n_0;
    rtw2orca_ext2irb_robot_net *a;
  } robot;
} rtw2orca_ext2irb_net_type;
#endif

#ifndef PREDEFINED_rtw2orca_irb2ext_joint_net
typedef rtw2orca_irb2ext_joint_abs rtw2orca_irb2ext_joint_net;
#endif

#ifndef PREDEFINED_rtw2orca_ext2irb_joint_net
typedef rtw2orca_ext2irb_joint_offset rtw2orca_ext2irb_joint_net;
#endif

#ifndef PREDEFINED_rtw2orca_force_torque_vector
typedef struct {
  float a[6];
} rtw2orca_force_torque_vector;
#endif

#ifndef PREDEFINED_rtw2orca_irb2ext_net
typedef rtw2orca_irb2ext_net_type rtw2orca_irb2ext_net;
#endif
void labcomm_decoder_register_rtw2orca_irb2ext_net(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_irb2ext_net *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_rtw2orca_irb2ext_net(
  struct labcomm_encoder *e);
void labcomm_encode_rtw2orca_irb2ext_net(
  struct labcomm_encoder *e,
  rtw2orca_irb2ext_net *v
);
extern int labcomm_sizeof_rtw2orca_irb2ext_net(rtw2orca_irb2ext_net *v);

#ifndef PREDEFINED_rtw2orca_ext2irb_net
typedef rtw2orca_ext2irb_net_type rtw2orca_ext2irb_net;
#endif
void labcomm_decoder_register_rtw2orca_ext2irb_net(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_ext2irb_net *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_rtw2orca_ext2irb_net(
  struct labcomm_encoder *e);
void labcomm_encode_rtw2orca_ext2irb_net(
  struct labcomm_encoder *e,
  rtw2orca_ext2irb_net *v
);
extern int labcomm_sizeof_rtw2orca_ext2irb_net(rtw2orca_ext2irb_net *v);

#ifndef PREDEFINED_rtw2orca_force_torque_net
typedef struct {
  int n_0;
  rtw2orca_force_torque_vector *a;
} rtw2orca_force_torque_net;
#endif
void labcomm_decoder_register_rtw2orca_force_torque_net(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_force_torque_net *v,
    void *context
  ),
  void *context
);
void labcomm_encoder_register_rtw2orca_force_torque_net(
  struct labcomm_encoder *e);
void labcomm_encode_rtw2orca_force_torque_net(
  struct labcomm_encoder *e,
  rtw2orca_force_torque_net *v
);
extern int labcomm_sizeof_rtw2orca_force_torque_net(rtw2orca_force_torque_net *v);

#define LABCOMM_FORALL_SAMPLES_extctrl_irc5_main_20120112(func, sep) \
  func(irb2ext, rtw2orca_irb2ext) sep \
  func(ext2irb, rtw2orca_ext2irb) sep \
  func(irb2ext_net, rtw2orca_irb2ext_net) sep \
  func(ext2irb_net, rtw2orca_ext2irb_net) sep \
  func(force_torque_net, rtw2orca_force_torque_net)
#endif

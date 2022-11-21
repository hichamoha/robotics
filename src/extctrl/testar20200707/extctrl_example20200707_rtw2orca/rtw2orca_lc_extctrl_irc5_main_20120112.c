#include "labcomm.h"
#include "labcomm_private.h"
#include "rtw2orca_lc_extctrl_irc5_main_20120112.h"

static unsigned char signature_bytes_irb2ext[] = {
// struct { 4 fields
0, 0, 0, 17, 
  0, 0, 0, 4, 
  // boolean 'obtaining'
  0, 0, 0, 9, 
  111, 98, 116, 97, 105, 110, 105, 110, 103, 
  0, 0, 0, 32, 
  // boolean 'manualMode'
  0, 0, 0, 10, 
  109, 97, 110, 117, 97, 108, 77, 111, 100, 101, 
  0, 0, 0, 32, 
  // boolean 'controlActive'
  0, 0, 0, 13, 
  99, 111, 110, 116, 114, 111, 108, 65, 99, 116, 105, 118, 101, 
  0, 0, 0, 32, 
  // array [_] 'robot'
  0, 0, 0, 5, 
  114, 111, 98, 111, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    // struct { 3 fields
    0, 0, 0, 17, 
      0, 0, 0, 3, 
      // int 'kind'
      0, 0, 0, 4, 
      107, 105, 110, 100, 
      0, 0, 0, 35, 
      // array [_] 'joint'
      0, 0, 0, 5, 
      106, 111, 105, 110, 116, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        // struct { 17 fields
        0, 0, 0, 17, 
          0, 0, 0, 17, 
          // float 'parKp'
          0, 0, 0, 5, 
          112, 97, 114, 75, 112, 
          0, 0, 0, 37, 
          // float 'parKv'
          0, 0, 0, 5, 
          112, 97, 114, 75, 118, 
          0, 0, 0, 37, 
          // float 'parKi'
          0, 0, 0, 5, 
          112, 97, 114, 75, 105, 
          0, 0, 0, 37, 
          // float 'parTrqMin'
          0, 0, 0, 9, 
          112, 97, 114, 84, 114, 113, 77, 105, 110, 
          0, 0, 0, 37, 
          // float 'parTrqMax'
          0, 0, 0, 9, 
          112, 97, 114, 84, 114, 113, 77, 97, 120, 
          0, 0, 0, 37, 
          // double 'posRawAbs'
          0, 0, 0, 9, 
          112, 111, 115, 82, 97, 119, 65, 98, 115, 
          0, 0, 0, 38, 
          // double 'posRawFb'
          0, 0, 0, 8, 
          112, 111, 115, 82, 97, 119, 70, 98, 
          0, 0, 0, 38, 
          // double 'posFlt'
          0, 0, 0, 6, 
          112, 111, 115, 70, 108, 116, 
          0, 0, 0, 38, 
          // float 'velRaw'
          0, 0, 0, 6, 
          118, 101, 108, 82, 97, 119, 
          0, 0, 0, 37, 
          // float 'velFlt'
          0, 0, 0, 6, 
          118, 101, 108, 70, 108, 116, 
          0, 0, 0, 37, 
          // float 'velOut'
          0, 0, 0, 6, 
          118, 101, 108, 79, 117, 116, 
          0, 0, 0, 37, 
          // float 'trqRaw'
          0, 0, 0, 6, 
          116, 114, 113, 82, 97, 119, 
          0, 0, 0, 37, 
          // float 'trqRefFlt'
          0, 0, 0, 9, 
          116, 114, 113, 82, 101, 102, 70, 108, 116, 
          0, 0, 0, 37, 
          // double 'posRef'
          0, 0, 0, 6, 
          112, 111, 115, 82, 101, 102, 
          0, 0, 0, 38, 
          // float 'velRef'
          0, 0, 0, 6, 
          118, 101, 108, 82, 101, 102, 
          0, 0, 0, 37, 
          // float 'trqFfw'
          0, 0, 0, 6, 
          116, 114, 113, 70, 102, 119, 
          0, 0, 0, 37, 
          // float 'trqFfwGrav'
          0, 0, 0, 10, 
          116, 114, 113, 70, 102, 119, 71, 114, 97, 118, 
          0, 0, 0, 37, 
        // }
      // }
      // extctrl_communication_data 'mocgendata'
      0, 0, 0, 10, 
      109, 111, 99, 103, 101, 110, 100, 97, 116, 97, 
      // struct { 9 fields
      0, 0, 0, 17, 
        0, 0, 0, 9, 
        // int 'instruction'
        0, 0, 0, 11, 
        105, 110, 115, 116, 114, 117, 99, 116, 105, 111, 110, 
        0, 0, 0, 35, 
        // float 'value1'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 49, 
        0, 0, 0, 37, 
        // float 'value2'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 50, 
        0, 0, 0, 37, 
        // float 'value3'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 51, 
        0, 0, 0, 37, 
        // float 'value4'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 52, 
        0, 0, 0, 37, 
        // float 'value5'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 53, 
        0, 0, 0, 37, 
        // float 'value6'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 54, 
        0, 0, 0, 37, 
        // array [20] 'string1'
        0, 0, 0, 7, 
        115, 116, 114, 105, 110, 103, 49, 
        // array [20]
        0, 0, 0, 16, 
          0, 0, 0, 1, 
          0, 0, 0, 20, 
          0, 0, 0, 33, 
        // }
        // array [20] 'string2'
        0, 0, 0, 7, 
        115, 116, 114, 105, 110, 103, 50, 
        // array [20]
        0, 0, 0, 16, 
          0, 0, 0, 1, 
          0, 0, 0, 20, 
          0, 0, 0, 33, 
        // }
      // }
    // }
  // }
// }
};
labcomm_signature_t labcomm_signature_rtw2orca_irb2ext = {
  LABCOMM_SAMPLE, "irb2ext",
  (int (*)(void *))labcomm_sizeof_rtw2orca_irb2ext,
  sizeof(signature_bytes_irb2ext),
  signature_bytes_irb2ext
 };
static unsigned char signature_bytes_ext2irb[] = {
// struct { 1 fields
0, 0, 0, 17, 
  0, 0, 0, 1, 
  // array [_] 'robot'
  0, 0, 0, 5, 
  114, 111, 98, 111, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    // struct { 2 fields
    0, 0, 0, 17, 
      0, 0, 0, 2, 
      // array [_] 'joint'
      0, 0, 0, 5, 
      106, 111, 105, 110, 116, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        // struct { 6 fields
        0, 0, 0, 17, 
          0, 0, 0, 6, 
          // float 'parKp'
          0, 0, 0, 5, 
          112, 97, 114, 75, 112, 
          0, 0, 0, 37, 
          // float 'parKv'
          0, 0, 0, 5, 
          112, 97, 114, 75, 118, 
          0, 0, 0, 37, 
          // float 'parKi'
          0, 0, 0, 5, 
          112, 97, 114, 75, 105, 
          0, 0, 0, 37, 
          // double 'posRef'
          0, 0, 0, 6, 
          112, 111, 115, 82, 101, 102, 
          0, 0, 0, 38, 
          // float 'velRef'
          0, 0, 0, 6, 
          118, 101, 108, 82, 101, 102, 
          0, 0, 0, 37, 
          // float 'trqFfw'
          0, 0, 0, 6, 
          116, 114, 113, 70, 102, 119, 
          0, 0, 0, 37, 
        // }
      // }
      // extctrl_communication_data 'mocgendata'
      0, 0, 0, 10, 
      109, 111, 99, 103, 101, 110, 100, 97, 116, 97, 
      // struct { 9 fields
      0, 0, 0, 17, 
        0, 0, 0, 9, 
        // int 'instruction'
        0, 0, 0, 11, 
        105, 110, 115, 116, 114, 117, 99, 116, 105, 111, 110, 
        0, 0, 0, 35, 
        // float 'value1'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 49, 
        0, 0, 0, 37, 
        // float 'value2'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 50, 
        0, 0, 0, 37, 
        // float 'value3'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 51, 
        0, 0, 0, 37, 
        // float 'value4'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 52, 
        0, 0, 0, 37, 
        // float 'value5'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 53, 
        0, 0, 0, 37, 
        // float 'value6'
        0, 0, 0, 6, 
        118, 97, 108, 117, 101, 54, 
        0, 0, 0, 37, 
        // array [20] 'string1'
        0, 0, 0, 7, 
        115, 116, 114, 105, 110, 103, 49, 
        // array [20]
        0, 0, 0, 16, 
          0, 0, 0, 1, 
          0, 0, 0, 20, 
          0, 0, 0, 33, 
        // }
        // array [20] 'string2'
        0, 0, 0, 7, 
        115, 116, 114, 105, 110, 103, 50, 
        // array [20]
        0, 0, 0, 16, 
          0, 0, 0, 1, 
          0, 0, 0, 20, 
          0, 0, 0, 33, 
        // }
      // }
    // }
  // }
// }
};
labcomm_signature_t labcomm_signature_rtw2orca_ext2irb = {
  LABCOMM_SAMPLE, "ext2irb",
  (int (*)(void *))labcomm_sizeof_rtw2orca_ext2irb,
  sizeof(signature_bytes_ext2irb),
  signature_bytes_ext2irb
 };
static unsigned char signature_bytes_irb2ext_net[] = {
// struct { 4 fields
0, 0, 0, 17, 
  0, 0, 0, 4, 
  // boolean 'obtaining'
  0, 0, 0, 9, 
  111, 98, 116, 97, 105, 110, 105, 110, 103, 
  0, 0, 0, 32, 
  // boolean 'manualMode'
  0, 0, 0, 10, 
  109, 97, 110, 117, 97, 108, 77, 111, 100, 101, 
  0, 0, 0, 32, 
  // boolean 'controlActive'
  0, 0, 0, 13, 
  99, 111, 110, 116, 114, 111, 108, 65, 99, 116, 105, 118, 101, 
  0, 0, 0, 32, 
  // array [_] 'robot'
  0, 0, 0, 5, 
  114, 111, 98, 111, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    // struct { 3 fields
    0, 0, 0, 17, 
      0, 0, 0, 3, 
      // int 'kind'
      0, 0, 0, 4, 
      107, 105, 110, 100, 
      0, 0, 0, 35, 
      // array [_] 'joint'
      0, 0, 0, 5, 
      106, 111, 105, 110, 116, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        // struct { 17 fields
        0, 0, 0, 17, 
          0, 0, 0, 17, 
          // float 'parKp'
          0, 0, 0, 5, 
          112, 97, 114, 75, 112, 
          0, 0, 0, 37, 
          // float 'parKv'
          0, 0, 0, 5, 
          112, 97, 114, 75, 118, 
          0, 0, 0, 37, 
          // float 'parKi'
          0, 0, 0, 5, 
          112, 97, 114, 75, 105, 
          0, 0, 0, 37, 
          // float 'parTrqMin'
          0, 0, 0, 9, 
          112, 97, 114, 84, 114, 113, 77, 105, 110, 
          0, 0, 0, 37, 
          // float 'parTrqMax'
          0, 0, 0, 9, 
          112, 97, 114, 84, 114, 113, 77, 97, 120, 
          0, 0, 0, 37, 
          // double 'posRawAbs'
          0, 0, 0, 9, 
          112, 111, 115, 82, 97, 119, 65, 98, 115, 
          0, 0, 0, 38, 
          // double 'posRawFb'
          0, 0, 0, 8, 
          112, 111, 115, 82, 97, 119, 70, 98, 
          0, 0, 0, 38, 
          // double 'posFlt'
          0, 0, 0, 6, 
          112, 111, 115, 70, 108, 116, 
          0, 0, 0, 38, 
          // float 'velRaw'
          0, 0, 0, 6, 
          118, 101, 108, 82, 97, 119, 
          0, 0, 0, 37, 
          // float 'velFlt'
          0, 0, 0, 6, 
          118, 101, 108, 70, 108, 116, 
          0, 0, 0, 37, 
          // float 'velOut'
          0, 0, 0, 6, 
          118, 101, 108, 79, 117, 116, 
          0, 0, 0, 37, 
          // float 'trqRaw'
          0, 0, 0, 6, 
          116, 114, 113, 82, 97, 119, 
          0, 0, 0, 37, 
          // float 'trqRefFlt'
          0, 0, 0, 9, 
          116, 114, 113, 82, 101, 102, 70, 108, 116, 
          0, 0, 0, 37, 
          // double 'posRef'
          0, 0, 0, 6, 
          112, 111, 115, 82, 101, 102, 
          0, 0, 0, 38, 
          // float 'velRef'
          0, 0, 0, 6, 
          118, 101, 108, 82, 101, 102, 
          0, 0, 0, 37, 
          // float 'trqFfw'
          0, 0, 0, 6, 
          116, 114, 113, 70, 102, 119, 
          0, 0, 0, 37, 
          // float 'trqFfwGrav'
          0, 0, 0, 10, 
          116, 114, 113, 70, 102, 119, 71, 114, 97, 118, 
          0, 0, 0, 37, 
        // }
      // }
      // array [_] 'mocgendata'
      0, 0, 0, 10, 
      109, 111, 99, 103, 101, 110, 100, 97, 116, 97, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        // struct { 9 fields
        0, 0, 0, 17, 
          0, 0, 0, 9, 
          // int 'instruction'
          0, 0, 0, 11, 
          105, 110, 115, 116, 114, 117, 99, 116, 105, 111, 110, 
          0, 0, 0, 35, 
          // float 'value1'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 49, 
          0, 0, 0, 37, 
          // float 'value2'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 50, 
          0, 0, 0, 37, 
          // float 'value3'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 51, 
          0, 0, 0, 37, 
          // float 'value4'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 52, 
          0, 0, 0, 37, 
          // float 'value5'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 53, 
          0, 0, 0, 37, 
          // float 'value6'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 54, 
          0, 0, 0, 37, 
          // array [20] 'string1'
          0, 0, 0, 7, 
          115, 116, 114, 105, 110, 103, 49, 
          // array [20]
          0, 0, 0, 16, 
            0, 0, 0, 1, 
            0, 0, 0, 20, 
            0, 0, 0, 33, 
          // }
          // array [20] 'string2'
          0, 0, 0, 7, 
          115, 116, 114, 105, 110, 103, 50, 
          // array [20]
          0, 0, 0, 16, 
            0, 0, 0, 1, 
            0, 0, 0, 20, 
            0, 0, 0, 33, 
          // }
        // }
      // }
    // }
  // }
// }
};
labcomm_signature_t labcomm_signature_rtw2orca_irb2ext_net = {
  LABCOMM_SAMPLE, "irb2ext_net",
  (int (*)(void *))labcomm_sizeof_rtw2orca_irb2ext_net,
  sizeof(signature_bytes_irb2ext_net),
  signature_bytes_irb2ext_net
 };
static unsigned char signature_bytes_ext2irb_net[] = {
// struct { 1 fields
0, 0, 0, 17, 
  0, 0, 0, 1, 
  // array [_] 'robot'
  0, 0, 0, 5, 
  114, 111, 98, 111, 116, 
  // array [_]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 0, 
    // struct { 2 fields
    0, 0, 0, 17, 
      0, 0, 0, 2, 
      // array [_] 'joint'
      0, 0, 0, 5, 
      106, 111, 105, 110, 116, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        // struct { 6 fields
        0, 0, 0, 17, 
          0, 0, 0, 6, 
          // float 'parKp'
          0, 0, 0, 5, 
          112, 97, 114, 75, 112, 
          0, 0, 0, 37, 
          // float 'parKv'
          0, 0, 0, 5, 
          112, 97, 114, 75, 118, 
          0, 0, 0, 37, 
          // float 'parKi'
          0, 0, 0, 5, 
          112, 97, 114, 75, 105, 
          0, 0, 0, 37, 
          // double 'posOffset'
          0, 0, 0, 9, 
          112, 111, 115, 79, 102, 102, 115, 101, 116, 
          0, 0, 0, 38, 
          // float 'velOffset'
          0, 0, 0, 9, 
          118, 101, 108, 79, 102, 102, 115, 101, 116, 
          0, 0, 0, 37, 
          // float 'trqFfwOffset'
          0, 0, 0, 12, 
          116, 114, 113, 70, 102, 119, 79, 102, 102, 115, 101, 116, 
          0, 0, 0, 37, 
        // }
      // }
      // array [_] 'mocgendata'
      0, 0, 0, 10, 
      109, 111, 99, 103, 101, 110, 100, 97, 116, 97, 
      // array [_]
      0, 0, 0, 16, 
        0, 0, 0, 1, 
        0, 0, 0, 0, 
        // struct { 9 fields
        0, 0, 0, 17, 
          0, 0, 0, 9, 
          // int 'instruction'
          0, 0, 0, 11, 
          105, 110, 115, 116, 114, 117, 99, 116, 105, 111, 110, 
          0, 0, 0, 35, 
          // float 'value1'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 49, 
          0, 0, 0, 37, 
          // float 'value2'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 50, 
          0, 0, 0, 37, 
          // float 'value3'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 51, 
          0, 0, 0, 37, 
          // float 'value4'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 52, 
          0, 0, 0, 37, 
          // float 'value5'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 53, 
          0, 0, 0, 37, 
          // float 'value6'
          0, 0, 0, 6, 
          118, 97, 108, 117, 101, 54, 
          0, 0, 0, 37, 
          // array [20] 'string1'
          0, 0, 0, 7, 
          115, 116, 114, 105, 110, 103, 49, 
          // array [20]
          0, 0, 0, 16, 
            0, 0, 0, 1, 
            0, 0, 0, 20, 
            0, 0, 0, 33, 
          // }
          // array [20] 'string2'
          0, 0, 0, 7, 
          115, 116, 114, 105, 110, 103, 50, 
          // array [20]
          0, 0, 0, 16, 
            0, 0, 0, 1, 
            0, 0, 0, 20, 
            0, 0, 0, 33, 
          // }
        // }
      // }
    // }
  // }
// }
};
labcomm_signature_t labcomm_signature_rtw2orca_ext2irb_net = {
  LABCOMM_SAMPLE, "ext2irb_net",
  (int (*)(void *))labcomm_sizeof_rtw2orca_ext2irb_net,
  sizeof(signature_bytes_ext2irb_net),
  signature_bytes_ext2irb_net
 };
static unsigned char signature_bytes_force_torque_net[] = {
// array [_]
0, 0, 0, 16, 
  0, 0, 0, 1, 
  0, 0, 0, 0, 
  // array [6]
  0, 0, 0, 16, 
    0, 0, 0, 1, 
    0, 0, 0, 6, 
    0, 0, 0, 37, 
  // }
// }
};
labcomm_signature_t labcomm_signature_rtw2orca_force_torque_net = {
  LABCOMM_SAMPLE, "force_torque_net",
  (int (*)(void *))labcomm_sizeof_rtw2orca_force_torque_net,
  sizeof(signature_bytes_force_torque_net),
  signature_bytes_force_torque_net
 };
static void decode_irb2ext(
  labcomm_decoder_t *d,
  void (*handle)(
    rtw2orca_irb2ext *v,
    void *context
  ),
  void *context
)
{
  rtw2orca_irb2ext v;
  v.obtaining = labcomm_decode_boolean(d);
  v.manualMode = labcomm_decode_boolean(d);
  v.controlActive = labcomm_decode_boolean(d);
  v.robot.n_0 = labcomm_decode_int(d);
  v.robot.a = malloc(sizeof(v.robot.a[0]) * v.robot.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.robot.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.robot.a[i_0].kind = labcomm_decode_int(d);
      v.robot.a[i_0].joint.n_0 = labcomm_decode_int(d);
      v.robot.a[i_0].joint.a = malloc(sizeof(v.robot.a[i_0].joint.a[0]) * v.robot.a[i_0].joint.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.robot.a[i_0].joint.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.robot.a[i_0].joint.a[i_1].parKp = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parKv = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parKi = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parTrqMin = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parTrqMax = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].posRawAbs = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].posRawFb = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].posFlt = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].velRaw = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].velFlt = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].velOut = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqRaw = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqRefFlt = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].posRef = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].velRef = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqFfw = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqFfwGrav = labcomm_decode_float(d);
        }
      }
      v.robot.a[i_0].mocgendata.instruction = labcomm_decode_int(d);
      v.robot.a[i_0].mocgendata.value1 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value2 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value3 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value4 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value5 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value6 = labcomm_decode_float(d);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < 20 ; i_1_0++) {
          v.robot.a[i_0].mocgendata.string1.a[i_1_0] = labcomm_decode_byte(d);
        }
      }
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < 20 ; i_1_0++) {
          v.robot.a[i_0].mocgendata.string2.a[i_1_0] = labcomm_decode_byte(d);
        }
      }
    }
  }
  handle(&v, context);
  {
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < v.robot.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        free(v.robot.a[i_0].joint.a);
      }
    }
    free(v.robot.a);
  }
}
void labcomm_decoder_register_rtw2orca_irb2ext(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_irb2ext *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_rtw2orca_irb2ext,
    (labcomm_decoder_typecast_t)decode_irb2ext,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_irb2ext(
  labcomm_encoder_t *e,
  rtw2orca_irb2ext *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_rtw2orca_irb2ext);
  {
    labcomm_encode_boolean(e, (*v).obtaining);
    labcomm_encode_boolean(e, (*v).manualMode);
    labcomm_encode_boolean(e, (*v).controlActive);
    labcomm_encode_int(e, (*v).robot.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).robot.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).robot.a[i_0].kind);
        labcomm_encode_int(e, (*v).robot.a[i_0].joint.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).robot.a[i_0].joint.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKp);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKv);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKi);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parTrqMin);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parTrqMax);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posRawAbs);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posRawFb);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posFlt);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velRaw);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velFlt);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velOut);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqRaw);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqRefFlt);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posRef);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velRef);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqFfw);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqFfwGrav);
          }
        }
        labcomm_encode_int(e, (*v).robot.a[i_0].mocgendata.instruction);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value1);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value2);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value3);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value4);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value5);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value6);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < 20 ; i_1_0++) {
            labcomm_encode_byte(e, (*v).robot.a[i_0].mocgendata.string1.a[i_1_0]);
          }
        }
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < 20 ; i_1_0++) {
            labcomm_encode_byte(e, (*v).robot.a[i_0].mocgendata.string2.a[i_1_0]);
          }
        }
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_rtw2orca_irb2ext(
labcomm_encoder_t *e,
rtw2orca_irb2ext *v
)
{
labcomm_internal_encode(e, &labcomm_signature_rtw2orca_irb2ext, v);
}
void labcomm_encoder_register_rtw2orca_irb2ext(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_rtw2orca_irb2ext,
    (labcomm_encode_typecast_t)encode_irb2ext
  );
}
int labcomm_sizeof_rtw2orca_irb2ext(rtw2orca_irb2ext *v)
{
  int result = 4;
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < (*v).robot.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      result += 84 * (*v).robot.a[i_0].joint.n_0;
      result += 72;
    }
  }
  result += 3;
  return result;
}
static void decode_ext2irb(
  labcomm_decoder_t *d,
  void (*handle)(
    rtw2orca_ext2irb *v,
    void *context
  ),
  void *context
)
{
  rtw2orca_ext2irb v;
  v.robot.n_0 = labcomm_decode_int(d);
  v.robot.a = malloc(sizeof(v.robot.a[0]) * v.robot.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.robot.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.robot.a[i_0].joint.n_0 = labcomm_decode_int(d);
      v.robot.a[i_0].joint.a = malloc(sizeof(v.robot.a[i_0].joint.a[0]) * v.robot.a[i_0].joint.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.robot.a[i_0].joint.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.robot.a[i_0].joint.a[i_1].parKp = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parKv = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parKi = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].posRef = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].velRef = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqFfw = labcomm_decode_float(d);
        }
      }
      v.robot.a[i_0].mocgendata.instruction = labcomm_decode_int(d);
      v.robot.a[i_0].mocgendata.value1 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value2 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value3 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value4 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value5 = labcomm_decode_float(d);
      v.robot.a[i_0].mocgendata.value6 = labcomm_decode_float(d);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < 20 ; i_1_0++) {
          v.robot.a[i_0].mocgendata.string1.a[i_1_0] = labcomm_decode_byte(d);
        }
      }
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < 20 ; i_1_0++) {
          v.robot.a[i_0].mocgendata.string2.a[i_1_0] = labcomm_decode_byte(d);
        }
      }
    }
  }
  handle(&v, context);
  {
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < v.robot.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        free(v.robot.a[i_0].joint.a);
      }
    }
    free(v.robot.a);
  }
}
void labcomm_decoder_register_rtw2orca_ext2irb(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_ext2irb *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_rtw2orca_ext2irb,
    (labcomm_decoder_typecast_t)decode_ext2irb,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_ext2irb(
  labcomm_encoder_t *e,
  rtw2orca_ext2irb *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_rtw2orca_ext2irb);
  {
    labcomm_encode_int(e, (*v).robot.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).robot.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).robot.a[i_0].joint.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).robot.a[i_0].joint.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKp);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKv);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKi);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posRef);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velRef);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqFfw);
          }
        }
        labcomm_encode_int(e, (*v).robot.a[i_0].mocgendata.instruction);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value1);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value2);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value3);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value4);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value5);
        labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.value6);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < 20 ; i_1_0++) {
            labcomm_encode_byte(e, (*v).robot.a[i_0].mocgendata.string1.a[i_1_0]);
          }
        }
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < 20 ; i_1_0++) {
            labcomm_encode_byte(e, (*v).robot.a[i_0].mocgendata.string2.a[i_1_0]);
          }
        }
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_rtw2orca_ext2irb(
labcomm_encoder_t *e,
rtw2orca_ext2irb *v
)
{
labcomm_internal_encode(e, &labcomm_signature_rtw2orca_ext2irb, v);
}
void labcomm_encoder_register_rtw2orca_ext2irb(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_rtw2orca_ext2irb,
    (labcomm_encode_typecast_t)encode_ext2irb
  );
}
int labcomm_sizeof_rtw2orca_ext2irb(rtw2orca_ext2irb *v)
{
  int result = 4;
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < (*v).robot.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      result += 28 * (*v).robot.a[i_0].joint.n_0;
      result += 68;
    }
  }
  return result;
}
static void decode_irb2ext_net(
  labcomm_decoder_t *d,
  void (*handle)(
    rtw2orca_irb2ext_net *v,
    void *context
  ),
  void *context
)
{
  rtw2orca_irb2ext_net v;
  v.obtaining = labcomm_decode_boolean(d);
  v.manualMode = labcomm_decode_boolean(d);
  v.controlActive = labcomm_decode_boolean(d);
  v.robot.n_0 = labcomm_decode_int(d);
  v.robot.a = malloc(sizeof(v.robot.a[0]) * v.robot.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.robot.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.robot.a[i_0].kind = labcomm_decode_int(d);
      v.robot.a[i_0].joint.n_0 = labcomm_decode_int(d);
      v.robot.a[i_0].joint.a = malloc(sizeof(v.robot.a[i_0].joint.a[0]) * v.robot.a[i_0].joint.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.robot.a[i_0].joint.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.robot.a[i_0].joint.a[i_1].parKp = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parKv = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parKi = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parTrqMin = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parTrqMax = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].posRawAbs = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].posRawFb = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].posFlt = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].velRaw = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].velFlt = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].velOut = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqRaw = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqRefFlt = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].posRef = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].velRef = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqFfw = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqFfwGrav = labcomm_decode_float(d);
        }
      }
      v.robot.a[i_0].mocgendata.n_0 = labcomm_decode_int(d);
      v.robot.a[i_0].mocgendata.a = malloc(sizeof(v.robot.a[i_0].mocgendata.a[0]) * v.robot.a[i_0].mocgendata.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.robot.a[i_0].mocgendata.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.robot.a[i_0].mocgendata.a[i_1].instruction = labcomm_decode_int(d);
          v.robot.a[i_0].mocgendata.a[i_1].value1 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value2 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value3 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value4 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value5 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value6 = labcomm_decode_float(d);
          {
            int i_2_0;
            for (i_2_0 = 0 ; i_2_0 < 20 ; i_2_0++) {
              v.robot.a[i_0].mocgendata.a[i_1].string1.a[i_2_0] = labcomm_decode_byte(d);
            }
          }
          {
            int i_2_0;
            for (i_2_0 = 0 ; i_2_0 < 20 ; i_2_0++) {
              v.robot.a[i_0].mocgendata.a[i_1].string2.a[i_2_0] = labcomm_decode_byte(d);
            }
          }
        }
      }
    }
  }
  handle(&v, context);
  {
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < v.robot.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        free(v.robot.a[i_0].joint.a);
        free(v.robot.a[i_0].mocgendata.a);
      }
    }
    free(v.robot.a);
  }
}
void labcomm_decoder_register_rtw2orca_irb2ext_net(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_irb2ext_net *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_rtw2orca_irb2ext_net,
    (labcomm_decoder_typecast_t)decode_irb2ext_net,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_irb2ext_net(
  labcomm_encoder_t *e,
  rtw2orca_irb2ext_net *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_rtw2orca_irb2ext_net);
  {
    labcomm_encode_boolean(e, (*v).obtaining);
    labcomm_encode_boolean(e, (*v).manualMode);
    labcomm_encode_boolean(e, (*v).controlActive);
    labcomm_encode_int(e, (*v).robot.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).robot.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).robot.a[i_0].kind);
        labcomm_encode_int(e, (*v).robot.a[i_0].joint.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).robot.a[i_0].joint.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKp);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKv);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKi);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parTrqMin);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parTrqMax);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posRawAbs);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posRawFb);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posFlt);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velRaw);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velFlt);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velOut);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqRaw);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqRefFlt);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posRef);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velRef);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqFfw);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqFfwGrav);
          }
        }
        labcomm_encode_int(e, (*v).robot.a[i_0].mocgendata.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).robot.a[i_0].mocgendata.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_int(e, (*v).robot.a[i_0].mocgendata.a[i_1].instruction);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value1);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value2);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value3);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value4);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value5);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value6);
            {
              int i_2_0;
              for (i_2_0 = 0 ; i_2_0 < 20 ; i_2_0++) {
                labcomm_encode_byte(e, (*v).robot.a[i_0].mocgendata.a[i_1].string1.a[i_2_0]);
              }
            }
            {
              int i_2_0;
              for (i_2_0 = 0 ; i_2_0 < 20 ; i_2_0++) {
                labcomm_encode_byte(e, (*v).robot.a[i_0].mocgendata.a[i_1].string2.a[i_2_0]);
              }
            }
          }
        }
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_rtw2orca_irb2ext_net(
labcomm_encoder_t *e,
rtw2orca_irb2ext_net *v
)
{
labcomm_internal_encode(e, &labcomm_signature_rtw2orca_irb2ext_net, v);
}
void labcomm_encoder_register_rtw2orca_irb2ext_net(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_rtw2orca_irb2ext_net,
    (labcomm_encode_typecast_t)encode_irb2ext_net
  );
}
int labcomm_sizeof_rtw2orca_irb2ext_net(rtw2orca_irb2ext_net *v)
{
  int result = 4;
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < (*v).robot.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      result += 84 * (*v).robot.a[i_0].joint.n_0;
      result += 68 * (*v).robot.a[i_0].mocgendata.n_0;
      result += 4;
    }
  }
  result += 3;
  return result;
}
static void decode_ext2irb_net(
  labcomm_decoder_t *d,
  void (*handle)(
    rtw2orca_ext2irb_net *v,
    void *context
  ),
  void *context
)
{
  rtw2orca_ext2irb_net v;
  v.robot.n_0 = labcomm_decode_int(d);
  v.robot.a = malloc(sizeof(v.robot.a[0]) * v.robot.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.robot.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      v.robot.a[i_0].joint.n_0 = labcomm_decode_int(d);
      v.robot.a[i_0].joint.a = malloc(sizeof(v.robot.a[i_0].joint.a[0]) * v.robot.a[i_0].joint.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.robot.a[i_0].joint.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.robot.a[i_0].joint.a[i_1].parKp = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parKv = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].parKi = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].posOffset = labcomm_decode_double(d);
          v.robot.a[i_0].joint.a[i_1].velOffset = labcomm_decode_float(d);
          v.robot.a[i_0].joint.a[i_1].trqFfwOffset = labcomm_decode_float(d);
        }
      }
      v.robot.a[i_0].mocgendata.n_0 = labcomm_decode_int(d);
      v.robot.a[i_0].mocgendata.a = malloc(sizeof(v.robot.a[i_0].mocgendata.a[0]) * v.robot.a[i_0].mocgendata.n_0);
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < v.robot.a[i_0].mocgendata.n_0 ; i_1_0++) {
          int i_1 = i_1_0;
          v.robot.a[i_0].mocgendata.a[i_1].instruction = labcomm_decode_int(d);
          v.robot.a[i_0].mocgendata.a[i_1].value1 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value2 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value3 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value4 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value5 = labcomm_decode_float(d);
          v.robot.a[i_0].mocgendata.a[i_1].value6 = labcomm_decode_float(d);
          {
            int i_2_0;
            for (i_2_0 = 0 ; i_2_0 < 20 ; i_2_0++) {
              v.robot.a[i_0].mocgendata.a[i_1].string1.a[i_2_0] = labcomm_decode_byte(d);
            }
          }
          {
            int i_2_0;
            for (i_2_0 = 0 ; i_2_0 < 20 ; i_2_0++) {
              v.robot.a[i_0].mocgendata.a[i_1].string2.a[i_2_0] = labcomm_decode_byte(d);
            }
          }
        }
      }
    }
  }
  handle(&v, context);
  {
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < v.robot.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        free(v.robot.a[i_0].joint.a);
        free(v.robot.a[i_0].mocgendata.a);
      }
    }
    free(v.robot.a);
  }
}
void labcomm_decoder_register_rtw2orca_ext2irb_net(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_ext2irb_net *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_rtw2orca_ext2irb_net,
    (labcomm_decoder_typecast_t)decode_ext2irb_net,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_ext2irb_net(
  labcomm_encoder_t *e,
  rtw2orca_ext2irb_net *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_rtw2orca_ext2irb_net);
  {
    labcomm_encode_int(e, (*v).robot.n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).robot.n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        labcomm_encode_int(e, (*v).robot.a[i_0].joint.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).robot.a[i_0].joint.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKp);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKv);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].parKi);
            labcomm_encode_double(e, (*v).robot.a[i_0].joint.a[i_1].posOffset);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].velOffset);
            labcomm_encode_float(e, (*v).robot.a[i_0].joint.a[i_1].trqFfwOffset);
          }
        }
        labcomm_encode_int(e, (*v).robot.a[i_0].mocgendata.n_0);
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < (*v).robot.a[i_0].mocgendata.n_0 ; i_1_0++) {
            int i_1 = i_1_0;
            labcomm_encode_int(e, (*v).robot.a[i_0].mocgendata.a[i_1].instruction);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value1);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value2);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value3);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value4);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value5);
            labcomm_encode_float(e, (*v).robot.a[i_0].mocgendata.a[i_1].value6);
            {
              int i_2_0;
              for (i_2_0 = 0 ; i_2_0 < 20 ; i_2_0++) {
                labcomm_encode_byte(e, (*v).robot.a[i_0].mocgendata.a[i_1].string1.a[i_2_0]);
              }
            }
            {
              int i_2_0;
              for (i_2_0 = 0 ; i_2_0 < 20 ; i_2_0++) {
                labcomm_encode_byte(e, (*v).robot.a[i_0].mocgendata.a[i_1].string2.a[i_2_0]);
              }
            }
          }
        }
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_rtw2orca_ext2irb_net(
labcomm_encoder_t *e,
rtw2orca_ext2irb_net *v
)
{
labcomm_internal_encode(e, &labcomm_signature_rtw2orca_ext2irb_net, v);
}
void labcomm_encoder_register_rtw2orca_ext2irb_net(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_rtw2orca_ext2irb_net,
    (labcomm_encode_typecast_t)encode_ext2irb_net
  );
}
int labcomm_sizeof_rtw2orca_ext2irb_net(rtw2orca_ext2irb_net *v)
{
  int result = 4;
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < (*v).robot.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      result += 28 * (*v).robot.a[i_0].joint.n_0;
      result += 68 * (*v).robot.a[i_0].mocgendata.n_0;
    }
  }
  return result;
}
static void decode_force_torque_net(
  labcomm_decoder_t *d,
  void (*handle)(
    rtw2orca_force_torque_net *v,
    void *context
  ),
  void *context
)
{
  rtw2orca_force_torque_net v;
  v.n_0 = labcomm_decode_int(d);
  v.a = malloc(sizeof(v.a[0]) * v.n_0);
  {
    int i_0_0;
    for (i_0_0 = 0 ; i_0_0 < v.n_0 ; i_0_0++) {
      int i_0 = i_0_0;
      {
        int i_1_0;
        for (i_1_0 = 0 ; i_1_0 < 6 ; i_1_0++) {
          v.a[i_0].a[i_1_0] = labcomm_decode_float(d);
        }
      }
    }
  }
  handle(&v, context);
  {
    free(v.a);
  }
}
void labcomm_decoder_register_rtw2orca_force_torque_net(
  struct labcomm_decoder *d,
  void (*handler)(
    rtw2orca_force_torque_net *v,
    void *context
  ),
  void *context
)
{
  labcomm_internal_decoder_register(
    d,
    &labcomm_signature_rtw2orca_force_torque_net,
    (labcomm_decoder_typecast_t)decode_force_torque_net,
    (labcomm_handler_typecast_t)handler,
    context
  );
}
static void encode_force_torque_net(
  labcomm_encoder_t *e,
  rtw2orca_force_torque_net *v
)
{
  e->writer.write(&e->writer, labcomm_writer_start);
  labcomm_encode_type_index(e, &labcomm_signature_rtw2orca_force_torque_net);
  {
    labcomm_encode_int(e, (*v).n_0);
    {
      int i_0_0;
      for (i_0_0 = 0 ; i_0_0 < (*v).n_0 ; i_0_0++) {
        int i_0 = i_0_0;
        {
          int i_1_0;
          for (i_1_0 = 0 ; i_1_0 < 6 ; i_1_0++) {
            labcomm_encode_float(e, (*v).a[i_0].a[i_1_0]);
          }
        }
      }
    }
  }
  e->writer.write(&e->writer, labcomm_writer_end);
}
void labcomm_encode_rtw2orca_force_torque_net(
labcomm_encoder_t *e,
rtw2orca_force_torque_net *v
)
{
labcomm_internal_encode(e, &labcomm_signature_rtw2orca_force_torque_net, v);
}
void labcomm_encoder_register_rtw2orca_force_torque_net(
  struct labcomm_encoder *e
)
{
  labcomm_internal_encoder_register(
    e,
    &labcomm_signature_rtw2orca_force_torque_net,
    (labcomm_encode_typecast_t)encode_force_torque_net
  );
}
int labcomm_sizeof_rtw2orca_force_torque_net(rtw2orca_force_torque_net *v)
{
  int result = 4;
  result += 24 * (*v).n_0;
  return result;
}

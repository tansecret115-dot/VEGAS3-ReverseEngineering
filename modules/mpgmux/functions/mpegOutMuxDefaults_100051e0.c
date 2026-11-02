/* Module: mpgmux.dll
   Function: mpegOutMuxDefaults
   Address: 100051e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegOutMuxDefaults(undefined4 *param_1,undefined4 param_2)

{
                    /* 0x51e0  1  mpegOutMuxDefaults */
  param_1[5] = 1;
  param_1[9] = 0;
  param_1[0x13] = 1;
  switch(param_2) {
  case 0:
    param_1[0xb] = 0;
    *param_1 = 0;
    param_1[1] = 0xb4;
    param_1[2] = 0xb4;
    param_1[3] = 0xb4;
    param_1[4] = 0x800;
    param_1[6] = 4;
    param_1[7] = 4;
    param_1[8] = 0x2e;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 1;
    param_1[10] = 0;
    param_1[0x14] = 0;
    break;
  case 1:
    param_1[0xb] = 1;
    *param_1 = 400;
    param_1[1] = 0x158;
    param_1[2] = 0x158;
    param_1[3] = 0x158;
    param_1[4] = 0x914;
    param_1[6] = 4;
    param_1[7] = 4;
    param_1[8] = 0x2e;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0xdc8;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    break;
  case 2:
    param_1[0xb] = 2;
    *param_1 = 0;
    param_1[1] = 0xb4;
    param_1[2] = 0xb4;
    param_1[3] = 0xb4;
    param_1[4] = 0x800;
    param_1[6] = 4;
    param_1[7] = 4;
    param_1[8] = 0xe0;
    param_1[9] = 0;
    param_1[0xc] = 3;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 1;
    param_1[10] = 0;
    param_1[0x13] = 1;
    param_1[0x14] = 0;
    break;
  case 3:
    param_1[0xb] = 3;
    *param_1 = 0;
    param_1[1] = 0xb4;
    param_1[2] = 0xb4;
    param_1[3] = 0xb4;
    param_1[4] = 0x914;
    param_1[5] = 1;
    param_1[6] = 4;
    param_1[7] = 4;
    param_1[8] = 0xe6;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xc] = 3;
    param_1[0xd] = 0;
    param_1[0xf] = 0x1b3c;
    param_1[0xe] = 1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 1;
    param_1[0x13] = 1;
    param_1[0x14] = 1;
    break;
  case 4:
    param_1[0xb] = 4;
    *param_1 = 0;
    param_1[1] = 0xb4;
    param_1[2] = 0xb4;
    param_1[3] = 0xb4;
    param_1[4] = 0x800;
    param_1[5] = 1;
    param_1[6] = 4;
    param_1[7] = 4;
    param_1[8] = 0xe8;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xc] = 3;
    param_1[0xd] = 0;
    param_1[0xf] = 0x6270;
    param_1[0xe] = 1;
    param_1[0x10] = 1;
    param_1[0x11] = 2;
    param_1[0x12] = 1;
    param_1[0x13] = 1;
    goto LAB_100053f7;
  default:
    param_1[0xb] = 6;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
LAB_100053f7:
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    return;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 1;
  param_1[0x19] = 1;
  param_1[0x1a] = 1;
  return;
}



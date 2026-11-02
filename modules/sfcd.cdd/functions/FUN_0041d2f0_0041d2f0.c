/* Module: sfcd.cdd
   Function: FUN_0041d2f0
   Address: 0041d2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d2f0(int param_1,byte *param_2,uint param_3)

{
  if (param_2 == (byte *)0x0) {
    return 0x80004003;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = 1;
  if ((param_3 & 8) != 0) {
    *param_2 = 0x81;
  }
  if ((param_3 & 1) != 0) {
    *param_2 = *param_2 | 0x10;
  }
  if ((param_3 & 2) != 0) {
    *param_2 = *param_2 | 0x20;
  }
  if ((param_3 & 4) != 0) {
    *param_2 = *param_2 | 0x40;
    if (*(char *)(param_1 + 0x290) == '\x03') {
      param_2[3] = 0x21;
      param_2[4] = 0;
      return 0;
    }
    param_2[3] = 0x10;
    param_2[4] = 0;
    return 0;
  }
  param_2[3] = 0;
  param_2[4] = 0;
  return 0;
}



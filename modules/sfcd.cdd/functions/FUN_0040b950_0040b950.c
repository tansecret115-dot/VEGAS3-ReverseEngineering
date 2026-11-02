/* Module: sfcd.cdd
   Function: FUN_0040b950
   Address: 0040b950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b950(byte *param_1,uint param_2)

{
  if (param_1 == (byte *)0x0) {
    return 0x80004003;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 1;
  if ((param_2 & 8) != 0) {
    *param_1 = 0x81;
  }
  if ((param_2 & 1) != 0) {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 2) != 0) {
    *param_1 = *param_1 | 0x20;
  }
  if ((param_2 & 4) != 0) {
    param_1[3] = 2;
    param_1[4] = 3;
    *param_1 = *param_1 | 0x40;
    return 0;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return 0;
}



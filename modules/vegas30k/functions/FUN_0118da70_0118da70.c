/* Module: vegas30k.dll
   Function: FUN_0118da70
   Address: 0118da70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0118da70(undefined4 *param_1,int *param_2)

{
  *param_1 = &PTR_FUN_011ea804;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[3] = param_1[3] & 0xffffffef;
  param_1[0x14] = 0;
  param_1[8] = 0;
  param_1[0x32] = 10000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 4;
  param_1[0x30] = 4;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[9] = 0;
  param_1[0x33] = 0;
  param_1[0x29] = 0x405e0000;
  param_1[0x26] = 500000;
  param_1[0x2a] = 0xfb;
  param_1[0x2b] = 0xf2;
  param_1[0x2e] = 1;
  return param_1;
}



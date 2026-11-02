/* Module: vegas30.exe
   Function: FUN_00572ed0
   Address: 00572ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00572ed0(undefined4 *param_1)

{
  FUN_004d5510();
  param_1[0xa9] = 0;
  param_1[0xb8] = 1;
  param_1[0xbe] = 0;
  param_1[0xc5] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xbd] = &PTR_LAB_0061b878;
  param_1[8] = 0;
  param_1[0x10] = param_1 + 0xbd;
  param_1[0x49] = param_1[0x49] | 0x1a0;
  *param_1 = &PTR_LAB_0061b7e8;
  param_1[0xd] = param_1;
  param_1[0x50] = 0x10000;
  param_1[0xe] = param_1 + 0x48;
  param_1[0xf] = param_1 + 0x7a;
  param_1[0xc5] = 0x30000;
  return param_1;
}



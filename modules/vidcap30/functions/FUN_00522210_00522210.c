/* Module: vidcap30.exe
   Function: FUN_00522210
   Address: 00522210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00522210(undefined4 *param_1,undefined4 param_2)

{
  param_1[0xd] = &PTR_LAB_0059bd78;
  param_1[0xf] = param_1;
  param_1[0xe] = 0;
  param_1[0x10] = &PTR_LAB_0059bd3c;
  param_1[0x12] = param_1;
  param_1[0x11] = 0;
  param_1[0x13] = &PTR_LAB_0059bd18;
  param_1[0x15] = param_1;
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_0059bcfc;
  param_1[0x1a] = param_1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_005220f0(param_1);
  FUN_00522720(param_1);
  param_1[2] = 0;
  param_1[0x25] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_LAB_0059bcf0;
  param_1[5] = 1;
  return param_1;
}



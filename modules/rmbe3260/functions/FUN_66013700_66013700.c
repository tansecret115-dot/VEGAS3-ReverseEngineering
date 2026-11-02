/* Module: rmbe3260.dll
   Function: FUN_66013700
   Address: 66013700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66013700(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  FUN_66013140(param_1 + 4);
  param_1[0xe] = &PTR_LAB_66064e78;
  param_1[0xf] = &PTR_LAB_66064e58;
  param_1[0x10] = 1;
  param_1[0x11] = 1;
  param_1[0x14] = 1;
  param_1[4] = &PTR_LAB_66064e28;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x4e4f4e45;
  *param_1 = &PTR_FUN_66064e00;
  param_1[0xe] = &PTR_LAB_66064df0;
  param_1[0xf] = &PTR_LAB_66064dd0;
  return param_1;
}



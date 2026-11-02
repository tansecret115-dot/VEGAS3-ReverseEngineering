/* Module: rmbe3260.dll
   Function: FUN_660133a0
   Address: 660133a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_660133a0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  FUN_66013140(param_1 + 4);
  param_1[0xe] = &PTR_LAB_66064da8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_66064d78;
  param_1[0xe] = &PTR_LAB_66064d50;
  param_1[4] = &PTR_LAB_66064d20;
  return param_1;
}



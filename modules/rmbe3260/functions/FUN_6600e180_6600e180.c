/* Module: rmbe3260.dll
   Function: FUN_6600e180
   Address: 6600e180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6600e180(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66064850;
  param_1[5] = &PTR_LAB_660647e8;
  FUN_6605b650(param_1 + 0x12);
  *param_1 = &PTR_FUN_660647c0;
  param_1[4] = &PTR_LAB_660647a8;
  param_1[5] = &PTR_LAB_66064740;
  param_1[6] = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  thunk_FUN_6605b610(param_1 + 0x12);
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 1;
  param_1[0x17] = 2;
  return param_1;
}



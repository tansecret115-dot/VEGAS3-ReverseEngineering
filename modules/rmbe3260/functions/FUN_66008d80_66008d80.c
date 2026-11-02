/* Module: rmbe3260.dll
   Function: FUN_66008d80
   Address: 66008d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66008d80(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66063e18;
  param_1[5] = &PTR_LAB_66063e08;
  FUN_660516d0(param_1 + 6);
  param_1[0xc] = 0;
  FUN_6605b650(param_1 + 0xd);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 1;
  *param_1 = &PTR_FUN_66063de0;
  param_1[4] = &PTR_LAB_66063dc8;
  param_1[5] = &PTR_LAB_66063db8;
  return param_1;
}



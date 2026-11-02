/* Module: rmbe3260.dll
   Function: FUN_6602a9f0
   Address: 6602a9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6602a9f0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66067818;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 5000;
  param_1[9] = 15000;
  FUN_6602a6b0(param_1 + 0xb);
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_660677f0;
  param_1[4] = &PTR_LAB_660677a8;
  return param_1;
}



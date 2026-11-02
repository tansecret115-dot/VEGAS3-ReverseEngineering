/* Module: rmto3260.dll
   Function: FUN_662effb0
   Address: 662effb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_662effb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_66306468;
  param_1[1] = &PTR_LAB_66307c28;
  FUN_662ef8e0(param_1 + 2);
  param_1[2] = &PTR_FUN_66307c20;
  FUN_662efb60(param_1 + 6);
  param_1[6] = &PTR_FUN_66307c1c;
  FUN_662efb60(param_1 + 10);
  param_1[10] = &PTR_FUN_66307c1c;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_66307be0;
  param_1[1] = &PTR_LAB_66307bc0;
  return param_1;
}



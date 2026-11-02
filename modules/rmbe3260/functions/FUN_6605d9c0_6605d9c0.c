/* Module: rmbe3260.dll
   Function: FUN_6605d9c0
   Address: 6605d9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6605d9c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_66066da0;
  param_1[1] = &PTR_LAB_66068d58;
  FUN_6605d2f0(param_1 + 2);
  param_1[2] = &PTR_FUN_66068d50;
  FUN_6605d570(param_1 + 6);
  param_1[6] = &PTR_FUN_66068d4c;
  FUN_6605d570(param_1 + 10);
  param_1[10] = &PTR_FUN_66068d4c;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_66068d10;
  param_1[1] = &PTR_LAB_66068cf0;
  return param_1;
}



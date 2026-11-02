/* Module: rmbe3260.dll
   Function: FUN_66060e60
   Address: 66060e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66060e60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_66068f48;
  param_1[1] = &PTR_LAB_66068f30;
  param_1[2] = 0;
  FUN_6605b650(param_1 + 3);
  FUN_6605b650(param_1 + 6);
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_66068f10;
  param_1[1] = &PTR_LAB_66068ef8;
  return param_1;
}



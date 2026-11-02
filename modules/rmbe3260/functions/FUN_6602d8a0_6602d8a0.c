/* Module: rmbe3260.dll
   Function: FUN_6602d8a0
   Address: 6602d8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6602d8a0(undefined4 *param_1)

{
  FUN_6602d840(param_1);
  FUN_6605b650(param_1 + 8);
  *param_1 = &PTR_FUN_66067974;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



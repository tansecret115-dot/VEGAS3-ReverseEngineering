/* Module: rmbe3260.dll
   Function: FUN_66013140
   Address: 66013140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66013140(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_66064d00;
  FUN_6605b650(param_1 + 3);
  FUN_6605b650(param_1 + 7);
  *param_1 = &PTR_LAB_66064cd0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  return param_1;
}



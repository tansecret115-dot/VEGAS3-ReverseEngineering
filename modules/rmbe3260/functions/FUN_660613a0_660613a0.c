/* Module: rmbe3260.dll
   Function: FUN_660613a0
   Address: 660613a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_660613a0(undefined4 *param_1)

{
  FUN_660347a0(param_1 + 2);
  *param_1 = &PTR_FUN_66068f80;
  param_1[1] = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  return param_1;
}



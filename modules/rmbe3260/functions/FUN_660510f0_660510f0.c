/* Module: rmbe3260.dll
   Function: FUN_660510f0
   Address: 660510f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660510f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_660688c0;
  if (-1 < (int)param_1[2]) {
    _close(param_1[2]);
  }
  FUN_6604fc60(param_1);
  return;
}



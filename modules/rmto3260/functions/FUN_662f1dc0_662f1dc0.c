/* Module: rmto3260.dll
   Function: FUN_662f1dc0
   Address: 662f1dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f1dc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66307dc0;
  if (-1 < (int)param_1[2]) {
    _close(param_1[2]);
  }
  FUN_662f09a0(param_1);
  return;
}



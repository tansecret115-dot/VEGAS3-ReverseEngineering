/* Module: rmbe3260.dll
   Function: FUN_6603d880
   Address: 6603d880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6603d880(undefined4 *param_1)

{
  FUN_6605c3e0(param_1);
  FUN_6605c3e0(param_1 + 5);
  param_1[10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  return param_1;
}



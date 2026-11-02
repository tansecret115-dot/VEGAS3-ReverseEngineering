/* Module: pngu3266.dll
   Function: FUN_60622d00
   Address: 60622d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_60622d00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6062d4e0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return param_1;
}



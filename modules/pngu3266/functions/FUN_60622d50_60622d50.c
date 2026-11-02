/* Module: pngu3266.dll
   Function: FUN_60622d50
   Address: 60622d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60622d50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6062d4e0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  FUN_60622890(param_1);
  return;
}



/* Module: sfxpfx1.dll
   Function: FUN_5c9519e0
   Address: 5c9519e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c9519e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5c98c5c0;
  FUN_5c951da0((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



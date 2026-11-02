/* Module: sfxpfx1.dll
   Function: FUN_5c9497b0
   Address: 5c9497b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c9497b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5c98bd80;
  FUN_5c94a300((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



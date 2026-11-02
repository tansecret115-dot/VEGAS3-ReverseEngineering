/* Module: sfxpfx2.dll
   Function: FUN_5c899010
   Address: 5c899010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c899010(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5c8dcd90;
  FUN_5c899620((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



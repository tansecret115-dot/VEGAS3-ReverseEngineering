/* Module: sfxpfx2.dll
   Function: FUN_5c8950e0
   Address: 5c8950e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8950e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5c8dc7e0;
  FUN_5c895770((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



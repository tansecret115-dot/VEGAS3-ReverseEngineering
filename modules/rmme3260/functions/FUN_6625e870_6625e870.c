/* Module: rmme3260.dll
   Function: FUN_6625e870
   Address: 6625e870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625e870(undefined4 *param_1)

{
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



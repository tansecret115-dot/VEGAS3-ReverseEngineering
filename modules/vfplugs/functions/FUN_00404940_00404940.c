/* Module: vfplugs.dll
   Function: FUN_00404940
   Address: 00404940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00404940(int param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe4));
  FUN_00414110(param_1);
  return;
}



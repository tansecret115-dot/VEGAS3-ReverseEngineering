/* Module: sfppack1.dll
   Function: FUN_5cdd6930
   Address: 5cdd6930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdd6930(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5ce14df0;
  FUN_5cdd7090((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



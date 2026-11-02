/* Module: sfppack2.dll
   Function: FUN_5cce7360
   Address: 5cce7360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cce7360(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cd52960;
  FUN_5cce76a0((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



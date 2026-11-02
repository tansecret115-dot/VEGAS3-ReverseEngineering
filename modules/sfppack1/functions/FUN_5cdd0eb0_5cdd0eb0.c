/* Module: sfppack1.dll
   Function: FUN_5cdd0eb0
   Address: 5cdd0eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdd0eb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5ce14808;
  FUN_5cdd1a80((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



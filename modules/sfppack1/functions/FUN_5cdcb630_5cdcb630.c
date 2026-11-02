/* Module: sfppack1.dll
   Function: FUN_5cdcb630
   Address: 5cdcb630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdcb630(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5ce141a0;
  FUN_5cdcbd20((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



/* Module: sfppack2.dll
   Function: FUN_5ccf26b0
   Address: 5ccf26b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ccf26b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cd536b8;
  FUN_5ccf41f0((int)param_1);
  FUN_5ccf2ad0(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



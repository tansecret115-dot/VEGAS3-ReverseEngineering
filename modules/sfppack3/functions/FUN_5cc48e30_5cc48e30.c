/* Module: sfppack3.dll
   Function: FUN_5cc48e30
   Address: 5cc48e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc48e30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cc892b0;
  FUN_5cc494a0((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



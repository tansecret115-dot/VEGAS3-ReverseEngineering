/* Module: sfppack3.dll
   Function: FUN_5cc34880
   Address: 5cc34880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc34880(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cc87c00;
  FUN_5cc34eb0((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



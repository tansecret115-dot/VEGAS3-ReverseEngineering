/* Module: sfppack3.dll
   Function: FUN_5cc44d60
   Address: 5cc44d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc44d60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cc88dc4;
  FUN_5cc45280((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



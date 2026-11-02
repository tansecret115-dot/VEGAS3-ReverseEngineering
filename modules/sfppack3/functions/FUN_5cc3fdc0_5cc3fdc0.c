/* Module: sfppack3.dll
   Function: FUN_5cc3fdc0
   Address: 5cc3fdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc3fdc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cc88940;
  FUN_5cc400b0((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



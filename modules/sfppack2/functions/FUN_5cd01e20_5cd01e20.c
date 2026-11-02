/* Module: sfppack2.dll
   Function: FUN_5cd01e20
   Address: 5cd01e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cd01e20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cd5436c;
  FUN_5cd023b0((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



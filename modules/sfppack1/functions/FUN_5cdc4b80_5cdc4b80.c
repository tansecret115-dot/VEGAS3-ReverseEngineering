/* Module: sfppack1.dll
   Function: FUN_5cdc4b80
   Address: 5cdc4b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdc4b80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5ce13b30;
  FUN_5cdc4f60((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



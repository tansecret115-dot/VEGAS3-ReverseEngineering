/* Module: sfppack1.dll
   Function: FUN_5ce00ae5
   Address: 5ce00ae5
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ce00ae5(int param_1)

{
  FUN_5ce00f90(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_5ce00a33((undefined4 *)(param_1 + 8));
  FUN_5ce00a33((undefined4 *)(param_1 + 4));
  return;
}



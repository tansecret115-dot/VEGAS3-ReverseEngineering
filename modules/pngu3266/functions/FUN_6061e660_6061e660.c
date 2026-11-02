/* Module: pngu3266.dll
   Function: FUN_6061e660
   Address: 6061e660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061e660(int param_1)

{
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    FUN_6061edb0(*(int **)(param_1 + 0x4c));
  }
  if (*(UINT_PTR **)(param_1 + 0x54) != (UINT_PTR *)0x0) {
    FUN_6061ea00(*(UINT_PTR **)(param_1 + 0x54));
    FUN_6061eb20(*(int *)(param_1 + 0x54));
  }
  return;
}



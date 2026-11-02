/* Module: encn3260.dll
   Function: FUN_66497100
   Address: 66497100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66497100(int param_1)

{
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    FUN_6649db30(*(int **)(param_1 + 0x4c));
  }
  if (*(UINT_PTR **)(param_1 + 0x54) != (UINT_PTR *)0x0) {
    FUN_6649d790(*(UINT_PTR **)(param_1 + 0x54));
    FUN_6649d8b0(*(int *)(param_1 + 0x54));
  }
  return;
}



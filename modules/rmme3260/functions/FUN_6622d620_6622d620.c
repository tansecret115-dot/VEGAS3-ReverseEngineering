/* Module: rmme3260.dll
   Function: FUN_6622d620
   Address: 6622d620
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6622d620(int param_1)

{
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    FUN_662338f0(*(int **)(param_1 + 0x4c));
  }
  if (*(UINT_PTR **)(param_1 + 0x54) != (UINT_PTR *)0x0) {
    FUN_662337a0(*(UINT_PTR **)(param_1 + 0x54));
    FUN_662338c0(*(int *)(param_1 + 0x54));
  }
  return;
}



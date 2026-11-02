/* Module: mp3plug.dll
   Function: FUN_5f6daa20
   Address: 5f6daa20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6daa20(int param_1)

{
  if (param_1 != 0) {
    if (*(int **)(param_1 + 0x110) != (int *)0x0) {
      FUN_5f6e5e30(*(int **)(param_1 + 0x110));
    }
    if (*(int **)(param_1 + 0x114) != (int *)0x0) {
      FUN_5f6e5e30(*(int **)(param_1 + 0x114));
    }
    if (*(int **)(param_1 + 0x118) != (int *)0x0) {
      FUN_5f6e5e30(*(int **)(param_1 + 0x118));
    }
    FUN_5f6d97a0(param_1);
  }
  return;
}



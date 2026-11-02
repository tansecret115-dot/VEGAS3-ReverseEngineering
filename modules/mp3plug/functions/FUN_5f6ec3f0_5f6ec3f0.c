/* Module: mp3plug.dll
   Function: FUN_5f6ec3f0
   Address: 5f6ec3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ec3f0(int param_1)

{
  if (param_1 != 0) {
    FUN_5f702ae0(*(int *)(param_1 + 4));
    FUN_5f702ae0(*(int *)(param_1 + 8));
    FUN_5f704c10(*(int **)(param_1 + 0xc));
    FUN_5f704c10(*(int **)(param_1 + 0x10));
    FUN_5f704eb0(*(int *)(param_1 + 0x1e8));
    FUN_5f704eb0(*(int *)(param_1 + 0x1ec));
    FUN_5f6d97a0(param_1);
  }
  return;
}



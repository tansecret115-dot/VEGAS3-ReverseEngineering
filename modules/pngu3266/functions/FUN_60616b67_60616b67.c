/* Module: pngu3266.dll
   Function: FUN_60616b67
   Address: 60616b67
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60616b67(int param_1)

{
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    (**(code **)(**(int **)(param_1 + 0x28) + 0x184))();
    if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x2c))) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x168))();
    }
  }
  return;
}



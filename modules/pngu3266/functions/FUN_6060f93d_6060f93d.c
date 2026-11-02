/* Module: pngu3266.dll
   Function: FUN_6060f93d
   Address: 6060f93d
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6060f93d(int param_1)

{
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    (**(code **)(**(int **)(param_1 + 0x28) + 0x150))();
    if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x2c))) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x138))();
    }
  }
  return;
}



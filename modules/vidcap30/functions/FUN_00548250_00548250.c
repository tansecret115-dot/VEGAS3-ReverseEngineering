/* Module: vidcap30.exe
   Function: FUN_00548250
   Address: 00548250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00548250(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return;
}



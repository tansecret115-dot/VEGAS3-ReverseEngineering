/* Module: vidcap30.exe
   Function: FUN_00548230
   Address: 00548230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00548230(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}



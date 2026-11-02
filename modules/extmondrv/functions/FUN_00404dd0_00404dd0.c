/* Module: extmondrv.dll
   Function: FUN_00404dd0
   Address: 00404dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404dd0(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  (**(code **)(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8));
  return;
}



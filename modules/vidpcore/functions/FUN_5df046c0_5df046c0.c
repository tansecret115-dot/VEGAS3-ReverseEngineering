/* Module: vidpcore.dll
   Function: FUN_5df046c0
   Address: 5df046c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5df046c0(int param_1,uint param_2)

{
  param_2 = param_2 & ((int)param_2 < 1) - 1;
  *(uint *)(param_1 + 0x304) = param_2;
  if (**(int **)(param_1 + 0x308) < (int)param_2) {
    do {
      FUN_5df04340(param_1,0);
    } while (**(int **)(param_1 + 0x308) < *(int *)(param_1 + 0x304));
    return **(int **)(param_1 + 0x308);
  }
  return **(int **)(param_1 + 0x308);
}



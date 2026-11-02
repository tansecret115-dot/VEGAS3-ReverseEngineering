/* Module: sftrans1.dll
   Function: FUN_00529c10
   Address: 00529c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00529c10(int param_1,uint param_2)

{
  param_2 = param_2 & ((int)param_2 < 1) - 1;
  *(uint *)(param_1 + 0x304) = param_2;
  if (**(int **)(param_1 + 0x308) < (int)param_2) {
    do {
      FUN_00529890(param_1,0);
    } while (**(int **)(param_1 + 0x308) < *(int *)(param_1 + 0x304));
    return **(int **)(param_1 + 0x308);
  }
  return **(int **)(param_1 + 0x308);
}



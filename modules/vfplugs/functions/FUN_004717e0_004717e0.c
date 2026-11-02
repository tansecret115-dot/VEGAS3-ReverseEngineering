/* Module: vfplugs.dll
   Function: FUN_004717e0
   Address: 004717e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004717e0(int param_1,int param_2)

{
  int *piVar1;
  
  if (1000 < param_2) {
    param_2 = 1000;
  }
  piVar1 = *(int **)(param_1 + 0x308);
  *(int *)(param_1 + 0x300) = param_2;
  if (param_2 < *piVar1) {
    do {
      FUN_0044b090(piVar1,param_2,1,1);
      piVar1 = *(int **)(param_1 + 0x308);
      param_2 = *(int *)(param_1 + 0x300);
    } while (param_2 < *piVar1);
    return *piVar1;
  }
  return **(int **)(param_1 + 0x308);
}



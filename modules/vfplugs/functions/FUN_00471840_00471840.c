/* Module: vfplugs.dll
   Function: FUN_00471840
   Address: 00471840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00471840(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & ((int)param_2 < 1) - 1;
  *(uint *)(param_1 + 0x304) = uVar1;
  if (**(int **)(param_1 + 0x308) < (int)uVar1) {
    do {
      FUN_004714c0(param_1,(double *)0x0);
    } while (**(int **)(param_1 + 0x308) < *(int *)(param_1 + 0x304));
    return **(int **)(param_1 + 0x308);
  }
  return **(int **)(param_1 + 0x308);
}



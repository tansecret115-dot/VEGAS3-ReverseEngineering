/* Module: rmbe3260.dll
   Function: FUN_6602ab30
   Address: 6602ab30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6602ab30(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_c;
  int *local_8;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar1 = -0x7fffbffb;
  }
  else {
    FUN_660143a0(&local_c,param_2);
    iVar1 = FUN_66004760();
    if (iVar1 != 0) {
      FUN_66051690(&local_c);
    }
    iVar1 = FUN_6602a870((void *)(param_1 + 0x1c),local_c,local_8);
    if (-1 < iVar1) {
      *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x10) = local_c;
      *(int **)(*(int *)(param_1 + 0x44) + 0x14) = local_8;
      iVar1 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x10))
                        ((int *)(param_1 + 0x2c),local_c,local_8);
      return iVar1;
    }
  }
  return iVar1;
}



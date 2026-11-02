/* Module: rmbe3260.dll
   Function: FUN_6602af50
   Address: 6602af50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6602af50(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar1 = -0x7fffbffb;
  }
  else {
    iVar1 = FUN_6602a870((void *)(param_1 + 0x1c),param_2,param_3);
    if (-1 < iVar1) {
      *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x10) = param_2;
      *(int **)(*(int *)(param_1 + 0x44) + 0x14) = param_3;
      iVar1 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x10))
                        ((int *)(param_1 + 0x2c),param_2,param_3);
      return iVar1;
    }
  }
  return iVar1;
}



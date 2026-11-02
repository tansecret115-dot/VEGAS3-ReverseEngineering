/* Module: wavplug.dll
   Function: FUN_5f38fb80
   Address: 5f38fb80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f38fb80(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      puVar1 = FUN_5f38ff60(param_1);
      *(undefined **)(param_1 + 0x14) = puVar1;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      return -0x7ff8fff2;
    }
    iVar2 = FUN_5f38ff10(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = 0;
    if (-1 < iVar2) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    return iVar2;
  }
  if (((int)param_2 < 0) || (4 < param_2)) {
    return 1;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    puVar1 = FUN_5f38ff60(param_1);
    *(undefined **)(param_1 + 0x14) = puVar1;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return -0x7ff8fff2;
  }
  FUN_5f38ff10(param_1);
  *(uint *)(*(int *)(param_1 + 0x14) + 8) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}



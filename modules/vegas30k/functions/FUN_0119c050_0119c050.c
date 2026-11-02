/* Module: vegas30k.dll
   Function: FUN_0119c050
   Address: 0119c050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119c050(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x644) == 0) {
    if (*(int *)(param_1 + 0x620) == 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x20) & 0x400) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x640) != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x638) + 0x28))(*(int **)(param_1 + 0x638));
      if (iVar1 != 0) {
        return iVar1;
      }
      *(undefined4 *)(param_1 + 0x640) = 0;
    }
  }
  else {
    if (param_2 != 0) {
      if (*(int *)(param_1 + 0x640) == 0) {
        return 0;
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x638) + 0x28))(*(int **)(param_1 + 0x638));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x8a8) = 0;
        *(undefined4 *)(param_1 + 0x640) = 0;
        *(undefined4 *)(param_1 + 0x620) = 0;
        *(undefined4 *)(param_1 + 0x8ac) = 0;
        return 0;
      }
      return iVar1;
    }
    param_2 = *(uint *)(param_1 + 0x20) & 0x400;
  }
  if (param_2 != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x620) = 0;
  FUN_011af240();
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  *(undefined4 *)(param_1 + 0x8ac) = 0;
  return 0;
}



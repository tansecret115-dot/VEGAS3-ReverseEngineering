/* Module: vegas30k.dll
   Function: FUN_011be5c0
   Address: 011be5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011be5c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_01199ba0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  switch(param_2) {
  case 6:
  case 8:
    if (*(int *)(param_1 + 0x61c) != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x638) + 0x54))
                        (*(int **)(param_1 + 0x638),*param_3,param_3[1]);
      return iVar1;
    }
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x868) = *param_3;
    *(undefined4 *)(param_1 + 0x86c) = param_3[1];
    return iVar1;
  case 9:
    *(undefined4 *)(param_1 + 0x6c4) = *param_3;
    return iVar1;
  default:
    iVar1 = -0x7fffbfff;
    break;
  case 0x51:
    *(undefined4 *)(param_1 + 0x860) = *param_3;
    return 0;
  case 0x72:
    iVar1 = (**(code **)(**(int **)(param_1 + 0x638) + 0x60))
                      (*(int **)(param_1 + 0x638),0x43,param_3);
    return iVar1;
  case 0x73:
    iVar1 = (**(code **)(**(int **)(param_1 + 0x638) + 0x60))
                      (*(int **)(param_1 + 0x638),0x44,param_3);
    return iVar1;
  case 0x82:
    *(undefined4 *)(param_1 + 0x644) = *param_3;
    return iVar1;
  }
  return iVar1;
}



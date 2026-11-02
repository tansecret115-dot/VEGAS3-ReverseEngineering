/* Module: vegas30k.dll
   Function: FUN_011be4b0
   Address: 011be4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011be4b0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_01199a00(param_1,param_2,param_3);
  if (iVar1 != 0) {
    switch(param_2) {
    case 6:
      goto switchD_011be4e1_caseD_6;
    case 7:
      *param_3 = *(undefined4 *)(param_1 + 0x868);
      param_3[1] = *(undefined4 *)(param_1 + 0x86c);
      return iVar1;
    default:
      return -0x7fffbfff;
    case 9:
      *param_3 = *(undefined4 *)(param_1 + 0x6c4);
      return iVar1;
    case 0x51:
      *param_3 = *(undefined4 *)(param_1 + 0x860);
      return 0;
    }
  }
  return 0;
switchD_011be4e1_caseD_6:
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x638) + 0x58))(*(int **)(param_1 + 0x638),param_3);
    return iVar1;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x84))(*(int **)(param_1 + 0x2c),6,param_3);
  return iVar1;
}



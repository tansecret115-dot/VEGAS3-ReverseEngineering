/* Module: rmme3260.dll
   Function: FUN_66268f70
   Address: 66268f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66268f70(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -0x7ffbff78) {
    return 0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
  }
  switch(*(undefined4 *)(param_1 + 0x358)) {
  case 3:
    *(undefined4 *)(param_1 + 0x358) = 2;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10),8);
    if (param_2 != 0) {
      return param_2;
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x358) = 2;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10),8);
    if (param_2 != 0) {
      return param_2;
    }
    break;
  default:
    iVar1 = -0x7ffbfff7;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x358) = 0;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),param_2);
    if (param_2 != 0) {
      return param_2;
    }
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x358) = 0;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x18))(*(int **)(param_1 + 0x14),param_2);
    if (param_2 != 0) {
      return param_2;
    }
  }
  return iVar1;
}



/* Module: rmbe3260.dll
   Function: FUN_66015680
   Address: 66015680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66015680(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x48) + 0x5c))((int *)(param_1 + -0x48));
    return iVar1;
  }
  if (*(int *)(param_1 + -0x24) == 0) {
    iVar1 = -0x7ffbfda8;
  }
  else {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x48) + 0x60))(param_1 + -0x48);
    if (-1 < iVar1) {
      (**(code **)(**(int **)(param_1 + -0x40) + 0x2c))
                (*(int **)(param_1 + -0x40),*(undefined4 *)(param_1 + -0x3c));
      return iVar1;
    }
  }
  return iVar1;
}



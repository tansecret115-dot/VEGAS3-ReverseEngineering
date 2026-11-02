/* Module: aviplug.dll
   Function: FUN_5f945700
   Address: 5f945700
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f945700(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 1) || (param_2 == 0)) {
    iVar2 = -1;
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    iVar2 = *(int *)(param_2 + 8);
  }
  if ((((param_4 == 0) && (param_5 == 0)) && (iVar1 == param_6)) &&
     ((iVar2 == param_7 && (param_3 == 0)))) {
    (**(code **)(*(int *)(param_1 + 4) + 0x40))(param_1 + 4,*(undefined4 *)(param_1 + 0x138));
    iVar1 = (**(code **)(*(int *)(param_1 + -0x198) + 0x68))(param_1 + -0x198,param_2);
    if (iVar1 == -0x7ffb1fef) {
      return -0x7ffbbf9a;
    }
    if (iVar1 == -0x7ff8fff2) {
      return -0x7ffbbf99;
    }
  }
  else {
    iVar1 = -0x7ffbbf9b;
  }
  return iVar1;
}



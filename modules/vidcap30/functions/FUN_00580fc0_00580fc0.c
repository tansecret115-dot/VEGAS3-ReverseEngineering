/* Module: vidcap30.exe
   Function: FUN_00580fc0
   Address: 00580fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00580fc0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1[0x23] + 200) != 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x24] + 0x44))(param_2);
    return iVar1;
  }
  if ((*(int *)(param_1[0x23] + 0x9c) != ((int *)param_1[0x24])[0x26]) &&
     (param_2 = (int *)FUN_00580dd0(param_2), param_2 == (int *)0x0)) {
    return -0x7fff0001;
  }
  iVar1 = (**(code **)(*param_1 + 0x68))(param_2);
  if (iVar1 < 0) {
    if (*(int *)(param_1[0x23] + 0x9c) != *(int *)(param_1[0x24] + 0x98)) {
      (**(code **)(*param_2 + 8))(param_2);
      return iVar1;
    }
  }
  else {
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x24] + 0x44))(param_2);
    }
    else if (iVar1 == 1) {
      param_1[0x15] = 1;
      if (param_1[0x16] == 0) {
        FUN_0057ca60(0xb,0,0);
        param_1[0x16] = 1;
      }
      iVar1 = 0;
    }
    if (*(int *)(param_1[0x23] + 0x9c) != *(int *)(param_1[0x24] + 0x98)) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  return iVar1;
}



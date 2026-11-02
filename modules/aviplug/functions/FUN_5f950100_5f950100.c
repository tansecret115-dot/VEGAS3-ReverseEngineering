/* Module: aviplug.dll
   Function: FUN_5f950100
   Address: 5f950100
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f950100(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1[2] == 0) {
    return -0x7ffbfda1;
  }
  if (param_1[5] != 2) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*(int *)param_1[2] + 0x18))((int *)param_1[2],0,0);
      if (-1 < iVar1) {
        param_1[5] = 2;
      }
    }
  }
  return iVar1;
}



/* Module: rmbe3260.dll
   Function: FUN_660286b0
   Address: 660286b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660286b0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *local_8;
  
  piVar2 = param_1;
  if ((((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) ||
      (param_4 == (undefined4 *)0x0)) || (param_5 == (undefined4 *)0x0)) {
    return -0x7fffbffd;
  }
  if (param_1[9] != 0) {
    *param_2 = param_1[0x29];
    *param_3 = param_1[0x2a];
    *param_4 = param_1[0x2b];
    *param_5 = param_1[0x2c];
    return 0;
  }
  iVar3 = (**(code **)(*(int *)param_1[2] + 0x28))((int *)param_1[2]);
  if (((-1 < iVar3) && (piVar1 = (int *)piVar2[0x14], piVar1 != (int *)0x0)) && (piVar2[8] != 0)) {
    local_8 = (int *)0x0;
    (**(code **)(*piVar1 + 0x14))(piVar1,&local_8);
    if (local_8 == (int *)0x0) {
      iVar3 = -0x7ffbfff9;
    }
    param_1 = (int *)0x0;
    if (-1 < iVar3) {
      local_8 = (int *)0x0;
      iVar3 = (**(code **)(*(int *)piVar2[0x14] + 0xc))((int *)piVar2[0x14],&local_8);
      if (iVar3 == 0x40012) {
        iVar3 = -0x7ffbfff9;
      }
      if (-1 < iVar3) {
        iVar3 = (**(code **)*local_8)(local_8,&DAT_66065b08,&param_1);
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
      }
      if (-1 < iVar3) {
        local_8 = (int *)0x0;
        iVar3 = (**(code **)*param_1)(param_1,&DAT_66065b28,&local_8);
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*local_8 + 0x3c))(local_8,param_2,param_3,param_4,param_5);
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
        }
      }
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    return iVar3;
  }
  return -0x7ffbfff9;
}



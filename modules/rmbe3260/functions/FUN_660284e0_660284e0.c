/* Module: rmbe3260.dll
   Function: FUN_660284e0
   Address: 660284e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660284e0(int *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  piVar2 = param_1;
  if ((((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) ||
      (param_4 == (uint *)0x0)) || (param_5 == (uint *)0x0)) {
    return -0x7fffbffd;
  }
  if (param_1[-0x1a] != 0) {
    *param_2 = param_1[6];
    *param_3 = param_1[7];
    *param_4 = param_1[10];
    *param_5 = param_1[0xb];
    return 0;
  }
  iVar3 = (**(code **)(*(int *)param_1[-0x21] + 0x28))((int *)param_1[-0x21]);
  if (((-1 < iVar3) && (piVar1 = (int *)piVar2[-0xf], piVar1 != (int *)0x0)) && (piVar2[-0x1b] != 0)
     ) {
    local_8 = (int *)0x0;
    (**(code **)(*piVar1 + 0x14))(piVar1,&local_8);
    if (local_8 == (int *)0x0) {
      iVar3 = -0x7ffbfff9;
    }
    param_1 = (int *)0x0;
    if (-1 < iVar3) {
      local_8 = (int *)0x0;
      iVar3 = (**(code **)(*(int *)piVar2[-0xf] + 0xc))((int *)piVar2[-0xf],&local_8);
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
          local_c = 0;
          local_10 = 0;
          local_18 = 0;
          local_20 = 0;
          (**(code **)(*local_8 + 0x3c))(local_8,&local_c,&local_10,&local_18,&local_20);
          local_14 = 0;
          local_1c = 0;
          iVar3 = (**(code **)(*local_8 + 0x44))(local_8,&local_14,&local_1c);
          *param_2 = local_c;
          *param_3 = local_10;
          if (local_18 < local_14) {
            *param_4 = local_18;
          }
          else {
            *param_4 = local_14;
          }
          if (local_20 < local_1c) {
            *param_5 = local_20;
          }
          else {
            *param_5 = local_1c;
          }
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



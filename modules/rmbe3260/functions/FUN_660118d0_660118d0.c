/* Module: rmbe3260.dll
   Function: FUN_660118d0
   Address: 660118d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660118d0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  iVar2 = 0;
  if (((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) || (param_4 == (uint *)0x0)) {
    return -0x7fffbffd;
  }
  if (*(int *)(param_1 + -0x68) == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + -0x84) + 0x28))(*(int **)(param_1 + -0x84));
  }
  if ((iVar2 < 0) || (piVar1 = *(int **)(param_1 + -0x3c), piVar1 == (int *)0x0)) {
    return -0x7ffbfff9;
  }
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  uVar3 = 0;
  (**(code **)(*piVar1 + 0x14))(piVar1,&local_18);
  if (local_18 == 0) {
    return -0x7ffbfff9;
  }
  local_c = (int *)0x0;
  iVar2 = (**(code **)(**(int **)(param_1 + -0x3c) + 0xc))(*(int **)(param_1 + -0x3c),&local_c);
  if (-1 < iVar2) {
    do {
      if (iVar2 == 0x40012) break;
      local_8 = (int *)0x0;
      iVar2 = (**(code **)*local_c)(local_c,&DAT_66065b18,&local_8);
      if (-1 < iVar2) {
        (**(code **)(*local_8 + 0x10))(local_8,&local_1c);
        if (local_10 < local_1c) {
          local_10 = local_1c;
        }
        (**(code **)(*local_8 + 0x14))(local_8,&local_20);
        if (local_14 < local_20) {
          local_14 = local_20;
        }
        iVar2 = (**(code **)(*local_8 + 0xc))(local_8,&local_24);
        if (uVar3 < local_24) {
          uVar3 = local_24;
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + -0x3c) + 0x10))(*(int **)(param_1 + -0x3c),&local_c)
      ;
    } while (-1 < iVar2);
    if (-1 < iVar2) {
      *param_2 = local_10;
      *param_3 = local_14;
      *param_4 = uVar3;
      if (iVar2 == 0x40012) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



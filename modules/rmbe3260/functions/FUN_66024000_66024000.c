/* Module: rmbe3260.dll
   Function: FUN_66024000
   Address: 66024000
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66024000(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_3c = 0;
    local_40 = 0;
    local_c = (int *)0x0;
    local_8 = (int *)0x0;
    (**(code **)(*(int *)(param_2 + 0x10) + 0x10))((int *)(param_2 + 0x10),&local_54);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 0x14))
                      (*(int **)(param_1 + 0x30),local_54,local_50,&local_c);
    if ((-1 < iVar2) && (iVar2 = (**(code **)*local_c)(local_c,&DAT_66065918,&local_8), -1 < iVar2))
    {
      iVar2 = (**(code **)(*local_8 + 0xc))(local_8,&local_3c,&local_40);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
    uVar3 = 0;
    local_34 = 0;
    local_38 = 0;
    local_10 = 0;
    local_14 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_18 = 0;
    if ((-1 < iVar2) && (piVar1 = *(int **)(param_1 + 0x2c), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))(piVar1,&local_10,&local_14);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))(*(int **)(param_1 + 0x2c),&local_18);
      if (local_18 != 0) {
        local_28 = 0;
        local_2c = 0;
        local_30 = 0;
        local_24 = 0;
        iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))
                          (*(int **)(param_1 + 0x2c),&local_28,&local_2c,&local_30,&local_24);
        if ((((local_30 == 0) || (local_24 == 0)) || (local_10 < local_30 + local_28)) ||
           (local_14 < local_2c + local_24)) {
          local_18 = 0;
        }
        else {
          local_34 = local_28;
          local_38 = local_2c;
          local_10 = local_30;
          local_14 = local_24;
        }
      }
    }
    if (-1 < iVar2) {
      uVar3 = local_10 - local_10 % local_3c;
      local_44 = local_14 - local_14 % local_40;
      if (((local_18 == 0) || (uVar3 != local_10)) || (local_44 != local_14)) {
        local_4c = (local_10 - uVar3 >> 1) + local_34;
        local_48 = (local_14 - local_44 >> 1) + local_38;
      }
      else {
        local_4c = local_34;
        local_48 = local_38;
      }
    }
    local_1c = 0;
    local_20 = 0;
    if (-1 < iVar2) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x34))
                        (*(int **)(param_1 + 0x2c),&local_1c,&local_20);
      if ((local_1c == 0) || (local_20 == 0)) {
        local_1c = uVar3;
        local_20 = local_44;
      }
      local_1c = local_1c - local_1c % local_3c;
      local_20 = local_20 - local_20 % local_40;
      if ((-1 < iVar2) &&
         (iVar2 = (**(code **)(*(int *)(param_2 + 0x14) + 0x40))
                            (param_2 + 0x14,local_4c,local_48,uVar3,local_44), -1 < iVar2)) {
        iVar2 = (**(code **)(*(int *)(param_2 + 0x14) + 0x48))
                          ((int *)(param_2 + 0x14),local_1c,local_20);
      }
    }
    return iVar2;
  }
  return -0x7ffbfff9;
}



/* Module: erv23260.dll
   Function: FUN_6381d040
   Address: 6381d040
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6381d040(void *this,int *param_1,byte *param_2,undefined4 *param_3,byte *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  uint uVar5;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_24 = 0;
  local_14 = 0x11;
  local_2c = param_3;
  if (*(int *)((int)this + 0x460) != 5) {
    local_2c = param_5;
  }
  local_8 = 0;
  if (*(int *)((int)this + 0x338) == 0) {
    puVar7 = param_3;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  if ((*(int *)((int)this + 0x334) != 0) || (*(int *)((int)this + 0x338) != 0)) {
    param_5[1] = 0;
    *param_5 = 0;
    param_6[1] = 0;
    *param_6 = 0;
  }
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  do {
    if (*(int *)((int)this + 0x32c) == 0) {
      bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
      uVar4 = (uint)(CONCAT31(extraout_var,bVar3) == 0);
    }
    else {
      uVar4 = 1;
    }
    *(uint *)((int)this + 0x44c) = uVar4;
    if (uVar4 == 0) {
      local_10 = *(int *)(&DAT_6382f330 + *(int *)((int)this + 0x460) * 4);
      FUN_6381d000(this,param_1);
      goto LAB_6381d6cf;
    }
    iVar6 = (**(code **)((int)this + 0x470))(*(undefined4 *)((int)this + 0x460),&local_30,&local_c);
    if (iVar6 == 0) {
      local_8 = 1;
    }
    if (local_8 != 0) goto LAB_6381d6cf;
  } while (local_30 != 0);
  iVar6 = *(int *)((int)this + 0x460);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (iVar6 == 3) {
    iVar6 = (local_c >> 4 & 0xf) * 2;
    uVar5 = (uint)(byte)(&DAT_6382f2e9)[iVar6];
    uVar4 = (byte)(&DAT_6382f2e8)[iVar6] & 1;
    *(uint *)((int)this + 0x454) = local_c >> 8 & 3;
    bVar3 = (&DAT_6382f2e8)[iVar6];
    local_1c = (bVar3 & 8) >> 3;
    local_20 = bVar3 >> 2 & 1;
    local_18 = (bVar3 & 2) >> 1;
  }
  else if (iVar6 == 4) {
    uVar5 = (uint)(byte)(&DAT_6382f320)[local_c & 0xf];
    uVar4 = local_c >> 4 & 1;
    *(uint *)((int)this + 0x454) = local_c >> 6 & 3;
  }
  else if (iVar6 == 5) {
    local_20 = 0;
    local_18 = 1;
    iVar6 = (local_c >> 4 & 0xf) * 2;
    uVar5 = (uint)(byte)(&DAT_6382f309)[iVar6];
    uVar4 = (byte)(&DAT_6382f308)[iVar6] & 1;
    *(uint *)((int)this + 0x454) = local_c >> 8 & 3;
    local_1c = ((byte)(&DAT_6382f308)[iVar6] & 8) >> 3;
  }
  else {
    uVar5 = (uint)(byte)(&DAT_6382f2e0)[local_c >> 10 & 7];
    uVar4 = *(uint *)(&DAT_6382f348 + uVar5 * 4);
    *(uint *)((int)this + 0x454) = local_c >> 8 & 3;
  }
  if (*(int *)((int)this + 0x338) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(int *)(&DAT_6382f438 + uVar5 * 4);
  }
  local_10 = *(int *)(&DAT_6382f398 + uVar5 * 4);
  if ((*(int *)(&DAT_6382f3e8 + uVar5 * 4) != 0) && (local_28 == 0)) {
    *(undefined4 *)((int)this + 0x44c) = 0;
    FUN_6381d000(this,param_1);
    goto LAB_6381d6cf;
  }
  if ((*(int *)((int)this + 0x32c) == 0) || (local_10 == 0)) {
    if ((*(int *)((int)this + 0x304) != 0) &&
       ((local_10 == 0 &&
        (bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4)), CONCAT31(extraout_var_00,bVar3) != 0))))
    {
      bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
      local_24 = (-(uint)(CONCAT31(extraout_var_01,bVar3) != 0) & 0xffffffc0) + 0x80;
    }
    bVar8 = false;
    bVar2 = false;
    if (*(int *)((int)this + 0x334) != 0) {
      if (*(int *)((int)this + 0x460) == 2) {
        local_14 = 0x11;
        bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
        if (CONCAT31(extraout_var_02,bVar3) != 0) {
          bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
          if (CONCAT31(extraout_var_03,bVar3) == 0) {
            bVar8 = true;
          }
          else {
            bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
            if (CONCAT31(extraout_var_04,bVar3) == 0) {
              bVar2 = true;
              local_14 = 3;
            }
            else {
              bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
              if (CONCAT31(extraout_var_05,bVar3) == 0) {
                bVar8 = true;
                local_14 = 3;
                bVar2 = true;
              }
              else {
                bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
                bVar8 = CONCAT31(extraout_var_06,bVar3) != 0;
                local_14 = 0xb;
              }
            }
          }
        }
      }
      else {
        bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
        if (CONCAT31(extraout_var_07,bVar3) != 0) {
          bVar2 = true;
          bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
          bVar8 = CONCAT31(extraout_var_08,bVar3) != 0;
        }
      }
    }
    *(undefined4 *)((int)this + 0x450) = 0;
    if (bVar8) {
      uVar5 = FUN_637fd3d0(*(void **)((int)this + 0x2b4),6);
      *(uint *)((int)this + 0x450) = uVar5;
    }
    if (local_18 != 0) {
      *(undefined4 *)((int)this + 0x454) = 0;
      bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
      if (CONCAT31(extraout_var_09,bVar3) != 0) {
        bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
        if (CONCAT31(extraout_var_10,bVar3) == 0) {
          *(undefined4 *)((int)this + 0x454) = 1;
        }
        else {
          bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
          *(uint *)((int)this + 0x454) = 3 - (uint)(CONCAT31(extraout_var_11,bVar3) != 0);
        }
      }
    }
    if (local_28 == 0) {
      bVar8 = FUN_637fdd30(*(void **)((int)this + 0x2b4),&local_c);
      if (CONCAT31(extraout_var_12,bVar8) == 0) {
        local_8 = 1;
        goto LAB_6381d6cf;
      }
      if (((local_10 == 8) ||
          (((local_10 == 0xe && (*(int *)((int)this + 0x460) == 5)) || (local_10 == 0)))) ||
         ((*(int *)((int)this + 0x31c) != 0 && (*(int *)((int)this + 0x454) == 3)))) {
        *(uint *)((int)this + 0x458) = local_c >> 0xc & 0xf;
      }
      else {
        *(uint *)((int)this + 0x458) = local_c >> 8 & 0xf;
      }
    }
    if (uVar4 == 0) {
      *(undefined4 *)((int)this + 0x45c) = 0;
    }
    else if (*(int *)((int)this + 800) == 0) {
      uVar4 = FUN_637fd3d0(*(void **)((int)this + 0x2b4),2);
      sVar1 = *(short *)(&DAT_63833000 + uVar4 * 2);
      *(int *)((int)this + 0x45c) = (int)sVar1;
      iVar6 = *(int *)((int)this + 0x444) + (int)sVar1;
      *(int *)((int)this + 0x444) = iVar6;
      if (0x1f < iVar6) {
        *(undefined4 *)((int)this + 0x444) = 0x1f;
      }
      if (*(int *)((int)this + 0x444) < 1) {
        *(undefined4 *)((int)this + 0x444) = 1;
      }
      *(undefined4 *)((int)this + 0x440) = *(undefined4 *)((int)this + 0x444);
    }
    else {
      bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
      if (CONCAT31(extraout_var_13,bVar3) == 0) {
        *(undefined4 *)((int)this + 0x45c) = *(undefined4 *)((int)this + 0x444);
        uVar4 = FUN_637fd3d0(*(void **)((int)this + 0x2b4),5);
        *(uint *)((int)this + 0x444) = uVar4;
        *(uint *)((int)this + 0x45c) = uVar4 - *(int *)((int)this + 0x45c);
        *(undefined4 *)((int)this + 0x440) = *(undefined4 *)((int)this + 0x444);
      }
      else {
        bVar3 = FUN_637fd5c0(*(int *)((int)this + 0x2b4));
        iVar6 = *(int *)((int)this + 0x444) +
                *(int *)(&DAT_6382f488 +
                        (CONCAT31(extraout_var_14,bVar3) + *(int *)((int)this + 0x444) * 2) * 4);
        *(int *)((int)this + 0x45c) =
             *(int *)(&DAT_6382f488 +
                     (CONCAT31(extraout_var_14,bVar3) + *(int *)((int)this + 0x444) * 2) * 4);
        *(int *)((int)this + 0x444) = iVar6;
        *(int *)((int)this + 0x440) = iVar6;
      }
    }
    if (local_1c == 0) {
      if ((((*(int *)((int)this + 0x334) != 0) || (local_10 == 3)) || (local_10 == 5)) &&
         (iVar6 = (**(code **)((int)this + 0x478))(param_3,param_3 + 1), iVar6 == 0)) {
        local_8 = 1;
        goto LAB_6381d6cf;
      }
    }
    else {
      iVar6 = (**(code **)((int)this + 0x478))(local_2c,local_2c + 1);
      if (iVar6 == 0) {
        local_8 = 1;
        goto LAB_6381d6cf;
      }
    }
    if ((local_20 != 0) &&
       (iVar6 = (**(code **)((int)this + 0x478))(param_6,param_6 + 1), iVar6 == 0)) {
      local_8 = 1;
      goto LAB_6381d6cf;
    }
    if (((*(int *)((int)this + 0x300) != 0) || (*(int *)((int)this + 0x308) != 0)) &&
       (local_10 == 5)) {
      iVar6 = (**(code **)((int)this + 0x478))(param_3 + 2,param_3 + 3);
      if (iVar6 == 0) {
        local_8 = 1;
        goto LAB_6381d6cf;
      }
      iVar6 = (**(code **)((int)this + 0x478))(param_3 + 4,param_3 + 5);
      if (iVar6 == 0) {
        local_8 = 1;
        goto LAB_6381d6cf;
      }
      iVar6 = (**(code **)((int)this + 0x478))(param_3 + 6,param_3 + 7);
      if (iVar6 == 0) {
        local_8 = 1;
        goto LAB_6381d6cf;
      }
    }
    if ((!bVar2) || (iVar6 = (**(code **)((int)this + 0x478))(param_5,param_5 + 1), iVar6 != 0))
    goto LAB_6381d6cf;
  }
  local_8 = 1;
LAB_6381d6cf:
  if (*(int *)((int)this + 0x338) != 0) {
    *param_4 = (byte)local_24 | (byte)local_10;
    return local_8;
  }
  *param_2 = (byte)local_24 | (byte)local_10;
  if (*(int *)((int)this + 0x334) != 0) {
    *param_4 = (byte)local_14;
  }
  return local_8;
}



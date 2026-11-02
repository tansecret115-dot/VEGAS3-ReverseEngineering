/* Module: erv23260.dll
   Function: FUN_637f9810
   Address: 637f9810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_637f9810(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 local_110 [132];
  int local_8c;
  int local_88;
  int *local_84;
  int *local_80;
  int local_7c [2];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar8 = **(uint **)((int)this + 0x338);
  local_8 = 0;
  local_14 = 0;
  *param_2 = *(undefined4 *)((int)this + 0x310);
  local_c = 0xffffffff;
  local_10 = 0xffffffff;
  *param_3 = *(undefined4 *)((int)this + 0x314);
  *param_4 = *(undefined4 *)((int)this + 0x318);
  uVar3 = -(uint)(param_1 != 3) & uVar8;
  if (*(int *)((int)this + 0x34c) == 0) {
    switch(param_1) {
    case 0:
    case 1:
      local_c = **(uint **)((int)this + 0x33c);
      break;
    case 3:
      local_10 = **(uint **)((int)this + 0x33c);
      local_c = local_10;
      break;
    case 4:
    case 5:
      local_14 = 1;
      local_10 = **(uint **)((int)this + 0x33c);
      local_c = uVar8;
    }
  }
  else {
    local_10 = **(uint **)((int)this + 0x33c);
    local_c = local_10;
  }
  iVar4 = *(int *)((int)this + uVar3 * 4 + 0x31c);
  piVar5 = (int *)((int)this + uVar3 * 4 + 0x31c);
  if (iVar4 == 0) {
    iVar4 = FUN_637f7de0(this,*(int *)(*(int *)((int)this + 0x338) + 0xf0),
                         *(int *)(*(int *)((int)this + 0x338) + 0xf4),
                         *(int *)((int)this + uVar3 * 4 + 0x324),piVar5);
    if (iVar4 != 0) {
      return 1;
    }
    piVar6 = (int *)*piVar5;
    *(int **)((int)this + 0x32c) = piVar6;
    local_8 = 0;
  }
  else {
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar4 = *(int *)(iVar4 + 0x90);
      *piVar5 = iVar4;
      *(int *)((int)this + 0x32c) = iVar4;
    }
    else {
      *(int *)((int)this + 0x32c) = iVar4;
      iVar4 = *(int *)(*(int *)(*(int *)((int)this + 0x310) + 0x1c) + 8);
      if ((iVar4 == 0) || (*(int *)((int)this + 0x310) != iVar4)) {
        *(undefined4 *)((int)this + 0x35c) = 0;
      }
    }
    piVar6 = FUN_637f3230(*(int **)((int)this + 0x32c),*(int *)(*(int *)((int)this + 0x338) + 0xf0),
                          *(int *)(*(int *)((int)this + 0x338) + 0xf4),
                          *(undefined4 *)((int)this + 0xc),&local_8);
    if (local_8 != 0) {
      return 1;
    }
  }
  piVar1 = *(int **)((int)this + 0x32c);
  if (piVar1 != piVar6) {
    if (*(int **)((int)this + 0x24) == piVar1) {
      *(int **)((int)this + 0x24) = piVar6;
    }
    if (*(int **)((int)this + 0x34) == piVar1) {
      *(int **)((int)this + 0x34) = piVar6;
    }
    if ((int *)*piVar5 == piVar1) {
      *piVar5 = (int)piVar6;
    }
    FUN_637f97a0(*(int *)((int)this + 0x32c),(int)piVar6);
    FUN_637f1080(*(void **)((int)this + 0x32c));
    *(int **)((int)this + 0x32c) = piVar6;
  }
  uVar8 = local_c;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  if (*(int *)((int)this + 0x314) == 0) {
    *(undefined4 *)((int)this + 0x330) = *(undefined4 *)(*(int *)((int)this + 0x32c) + 0x8c);
  }
  else {
    iVar4 = FUN_637f9750(this,*(int *)(*(int *)((int)this + 0x314) + 4),local_c);
    *(int *)((int)this + 0x330) = iVar4;
  }
  if (*(int *)(*(int *)((int)this + 0x338) + 0x54) == 1) {
    iVar4 = *(int *)((int)*(void **)((int)this + 4) + 8);
    if ((iVar4 == 0x15) || (iVar4 == 0x16)) {
      piVar5 = *(int **)((int)this + 0x34);
    }
    else {
      piVar5 = *(int **)((int)this + 0x24);
    }
    piVar5 = FUN_637f5040(*(void **)((int)this + 4),piVar5,*(int **)((int)this + 0x34),
                          *(int *)((int)this + uVar8 * 0x144 + 0x13c),
                          *(int *)((int)this + uVar8 * 0x144 + 0x140),&local_8);
    if (local_8 != 0) {
      return 1;
    }
    puVar7 = (undefined4 *)(*(int *)((int)this + 0x338) + 0x58);
    puVar9 = (undefined4 *)(*(int *)((int)this + 0x338) + 0x128);
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)(*(int *)((int)this + 0x338) + 0x124) = 1;
    if ((param_1 == 5) && (*(int *)((int)this + local_10 * 0x144 + 0x170) == 1)) {
      iVar4 = *(int *)((int)this + 0x338);
      *(undefined4 *)(iVar4 + 0x13c) = *(undefined4 *)((int)this + local_10 * 0x144 + 0x188);
      *(undefined4 *)(iVar4 + 0x140) = *(undefined4 *)((int)this + local_10 * 0x144 + 0x18c);
      iVar4 = *(int *)((int)this + local_10 * 0x144 + 0x178);
      if (*(int *)((int)this + uVar8 * 0x144 + 0x13c) ==
          *(int *)((int)this + local_10 * 0x144 + 0x13c)) {
        *(int *)(*(int *)((int)this + 0x338) + 300) = iVar4;
        *(undefined4 *)(*(int *)((int)this + 0x338) + 0x130) =
             *(undefined4 *)((int)this + local_10 * 0x144 + 0x17c);
      }
      else {
        piVar6 = (int *)(*(int *)((int)this + 0x338) + 300);
        *piVar6 = *piVar6 + iVar4 * 2;
        piVar6 = (int *)(*(int *)((int)this + 0x338) + 0x130);
        *piVar6 = *piVar6 + *(int *)((int)this + local_10 * 0x144 + 0x17c) * 2;
      }
      iVar4 = *(int *)((int)this + local_10 * 0x144 + 0x180);
      if (*(int *)((int)this + uVar8 * 0x144 + 0x140) ==
          *(int *)((int)this + local_10 * 0x144 + 0x140)) {
        *(int *)(*(int *)((int)this + 0x338) + 0x134) = iVar4;
        *(undefined4 *)(*(int *)((int)this + 0x338) + 0x138) =
             *(undefined4 *)((int)this + local_10 * 0x144 + 0x184);
      }
      else {
        piVar6 = (int *)(*(int *)((int)this + 0x338) + 0x134);
        *piVar6 = *piVar6 + iVar4 * 2;
        *(int *)(*(int *)((int)this + 0x338) + 0x138) =
             *(int *)(*(int *)((int)this + 0x338) + 0x138) +
             *(int *)((int)this + local_10 * 0x144 + 0x184) * 2;
      }
    }
    piVar6 = *(int **)((int)this + 0x330);
    local_34 = *piVar6;
    local_30 = piVar6[1];
    local_2c = piVar6[2];
    local_28 = piVar6[7];
    local_24 = piVar6[3];
    local_20 = piVar6[5];
    local_1c = piVar6[4];
    local_18 = piVar6[6];
    local_54 = *piVar5;
    local_50 = piVar5[1];
    local_48 = piVar5[7];
    local_4c = piVar5[2];
    local_40 = piVar5[5];
    local_44 = piVar5[3];
    local_3c = piVar5[4];
    local_38 = piVar5[6];
    FUN_637ff670(&local_34,&local_54,(int *)(*(int *)((int)this + 0x338) + 300),
                 (int *)(*(int *)((int)this + 0x338) + 0x13c),
                 CONCAT31((int3)((uint)local_3c >> 8),
                          *(int *)((int)this + uVar8 * 0x144 + 0xc4) == 1),
                 2 < *(int *)((int)this + 0xc));
    piVar5[0x1f] = *(int *)(*(int *)((int)this + 0x330) + 0x7c);
    if (*(int *)(*(int *)((int)this + 0x330) + 0x78) != 0) {
      FUN_637f4460(piVar5);
    }
    *(int **)((int)this + 0x330) = piVar5;
    uVar8 = local_c;
  }
  iVar4 = *(int *)((int)this + uVar8 * 0x144 + 0x13c);
  if ((((*(int *)(*(int *)((int)this + 0x330) + 0xc) != iVar4) ||
       (*(int *)(*(int *)((int)this + 0x330) + 0x10) != *(int *)((int)this + uVar8 * 0x144 + 0x140))
       ) && (param_1 != 4)) && (param_1 != 5)) {
    iVar2 = *(int *)((int)*(void **)((int)this + 4) + 8);
    if ((iVar2 == 0x15) || (iVar2 == 0x16)) {
      piVar5 = *(int **)((int)this + 0x34);
    }
    else {
      piVar5 = *(int **)((int)this + 0x24);
    }
    piVar5 = FUN_637f5040(*(void **)((int)this + 4),piVar5,*(int **)((int)this + 0x34),iVar4,
                          *(int *)((int)this + uVar8 * 0x144 + 0x140),&local_8);
    if (local_8 != 0) {
      return 1;
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    piVar6 = *(int **)((int)this + 0x330);
    local_74 = *piVar6;
    local_70 = piVar6[1];
    local_6c = piVar6[2];
    local_68 = piVar6[7];
    local_64 = piVar6[3];
    local_60 = piVar6[5];
    local_5c = piVar6[4];
    local_58 = piVar6[6];
    local_34 = *piVar5;
    local_28 = piVar5[7];
    local_30 = piVar5[1];
    local_1c = piVar5[4];
    local_2c = piVar5[2];
    local_24 = piVar5[3];
    local_20 = piVar5[5];
    iVar4 = *(int *)((int)this + uVar8 * 0x144 + 0xc4);
    local_7c[0] = 3;
    local_18 = piVar5[6];
    FUN_637ff670(&local_74,&local_34,&local_44,local_7c,
                 CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == 1),2 < *(int *)((int)this + 0xc));
    piVar5[0x1f] = 0;
    if (*(int *)(*(int *)((int)this + 0x330) + 0x78) != 0) {
      FUN_637f4460(piVar5);
    }
    if (*(int *)((int)this + local_c * 4 + 0x31c) == *(int *)((int)this + 0x330)) {
      *(int **)((int)this + local_c * 4 + 0x31c) = piVar5;
    }
    local_84 = (int *)piVar5[0x23];
    if ((piVar5 == local_84) && (piVar5 == (int *)piVar5[0x24])) {
      local_84 = *(int **)((int)this + 0x330);
      local_80 = local_84;
    }
    else {
      local_80 = (int *)piVar5[0x24];
    }
    local_8c = piVar5[0x21];
    local_88 = piVar5[0x22];
    FUN_637f97a0(*(int *)((int)this + 0x330),(int)piVar5);
    *(undefined4 *)(*(int *)((int)this + 0x330) + 0x78) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x330) + 0x7c) = 0;
    *(int *)(*(int *)((int)this + 0x330) + 0x8c) = *(int *)((int)this + 0x330);
    *(int *)(*(int *)((int)this + 0x330) + 0x90) = *(int *)((int)this + 0x330);
    FUN_637f97a0((int)local_110,*(int *)((int)this + 0x330));
    FUN_637f5020(*(void **)((int)this + 4),(int)piVar5,*(undefined4 *)((int)this + 0x330));
    *(int **)((int)this + 0x330) = piVar5;
  }
  uVar8 = local_10;
  if ((*(int *)((int)this + 0x318) != 0) || (local_14 != 0)) {
    piVar5 = (int *)((int)this + local_10 * 4 + 0x31c);
    if ((*(int *)((int)this + local_10 * 4 + 0x31c) == 0) &&
       (local_8 = FUN_637f7de0(this,*(int *)(*(int *)((int)this + 0x338) + 0xf0),
                               *(int *)(*(int *)((int)this + 0x338) + 0xf4),
                               *(int *)((int)this + local_10 * 4 + 0x324),piVar5), local_8 != 0)) {
      return 1;
    }
    if (*(int *)((int)this + 0x318) == 0) {
      iVar4 = *piVar5;
      *(int *)((int)this + 0x334) = iVar4;
      iVar2 = *(int *)((int)this + uVar8 * 0x144 + 0x13c);
      if ((*(int *)(iVar4 + 0xc) != iVar2) ||
         (*(int *)(iVar4 + 0x10) != *(int *)((int)this + uVar8 * 0x144 + 0x140))) {
        iVar4 = *(int *)((int)*(void **)((int)this + 4) + 8);
        if ((iVar4 == 0x15) || (iVar4 == 0x16)) {
          piVar6 = *(int **)((int)this + 0x34);
        }
        else {
          piVar6 = *(int **)((int)this + 0x24);
        }
        piVar6 = FUN_637f5040(*(void **)((int)this + 4),piVar6,*(int **)((int)this + 0x34),iVar2,
                              *(int *)((int)this + uVar8 * 0x144 + 0x140),&local_8);
        if (local_8 != 0) {
          return 1;
        }
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        piVar1 = *(int **)((int)this + 0x334);
        local_34 = *piVar1;
        local_30 = piVar1[1];
        local_2c = piVar1[2];
        local_28 = piVar1[7];
        local_24 = piVar1[3];
        local_20 = piVar1[5];
        local_1c = piVar1[4];
        local_18 = piVar1[6];
        local_74 = *piVar6;
        local_68 = piVar6[7];
        local_70 = piVar6[1];
        local_5c = piVar6[4];
        local_6c = piVar6[2];
        local_64 = piVar6[3];
        local_60 = piVar6[5];
        iVar4 = *(int *)((int)this + uVar8 * 0x144 + 0xc4);
        local_7c[0] = 3;
        local_58 = piVar6[6];
        FUN_637ff670(&local_34,&local_74,&local_44,local_7c,
                     CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == 1),2 < *(int *)((int)this + 0xc));
        piVar6[0x1f] = 0;
        if (*(int *)(*(int *)((int)this + 0x334) + 0x78) != 0) {
          FUN_637f4460(piVar6);
        }
        if (*piVar5 == *(int *)((int)this + 0x334)) {
          *piVar5 = (int)piVar6;
        }
        local_84 = (int *)piVar6[0x23];
        if ((piVar6 == local_84) && (piVar6 == (int *)piVar6[0x24])) {
          local_84 = *(int **)((int)this + 0x334);
          local_80 = local_84;
        }
        else {
          local_80 = (int *)piVar6[0x24];
        }
        local_8c = piVar6[0x21];
        local_88 = piVar6[0x22];
        FUN_637f97a0(*(int *)((int)this + 0x334),(int)piVar6);
        *(undefined4 *)(*(int *)((int)this + 0x334) + 0x78) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x334) + 0x7c) = 0;
        *(int *)(*(int *)((int)this + 0x334) + 0x8c) = *(int *)((int)this + 0x334);
        *(int *)(*(int *)((int)this + 0x334) + 0x90) = *(int *)((int)this + 0x334);
        FUN_637f97a0((int)local_110,*(int *)((int)this + 0x334));
        FUN_637f5020(*(void **)((int)this + 4),(int)piVar6,*(undefined4 *)((int)this + 0x334));
        *(int **)((int)this + 0x334) = piVar6;
      }
    }
    else {
      iVar4 = FUN_637f9750(this,*(int *)(*(int *)((int)this + 0x318) + 4),uVar8);
      *(int *)((int)this + 0x334) = iVar4;
    }
  }
  *param_5 = *(undefined4 *)((int)this + 0x32c);
  *param_6 = *(undefined4 *)((int)this + 0x330);
  *param_7 = *(undefined4 *)((int)this + 0x334);
  return 1;
}



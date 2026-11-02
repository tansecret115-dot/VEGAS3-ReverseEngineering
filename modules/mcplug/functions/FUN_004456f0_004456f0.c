/* Module: mcplug.dll
   Function: FUN_004456f0
   Address: 004456f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004456f0(int *param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint local_1cc [3];
  code *local_1c0;
  int local_170;
  uint local_16c;
  int local_140;
  int local_13c;
  int local_138;
  uint local_110;
  uint local_10c;
  uint local_108 [4];
  code *local_f8;
  code *local_f4;
  code *local_e8;
  code *local_e4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_94;
  uint local_90;
  uint local_8c;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_4c [4];
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  undefined3 extraout_var_00;
  
  uVar2 = FUN_00423bb0(param_1[0xc]);
  local_3c = uVar2;
  uVar3 = FUN_00423bb0(*param_1);
  uVar1 = FUN_00423e40(uVar3,local_4c);
  local_8 = CONCAT31(extraout_var,uVar1);
  uVar1 = FUN_00423e40(uVar2,local_4c);
  iVar4 = CONCAT31(extraout_var_00,uVar1);
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) == 0) {
      return 0x80070057;
    }
    iVar5 = param_1[0x13] / 2;
    iVar6 = (param_1[0x11] + -0x4000) / 2;
    param_1[0x11] = iVar6;
    param_1[0x13] = iVar5;
    if (0x3fff < iVar5 - iVar6) {
      param_1[0xd] = param_1[0xd] + param_1[0xe];
    }
    param_1[0xe] = param_1[0xe] << 1;
  }
  else {
    param_1[0x11] = param_1[0x11] / 2;
    iVar5 = param_1[0x13] / 2;
    param_1[0x13] = iVar5;
    param_1[0xe] = param_1[0xe] << 1;
  }
  if (param_1[7] - param_1[5] < 0x8000) {
    param_1[0x19] = 0;
  }
  else {
    param_1[0x19] =
         (int)(((longlong)((iVar5 - param_1[0x11]) + -0x4000) * 0x4000) /
              (longlong)((param_1[7] - param_1[5]) + -0x4000));
  }
  local_44 = (int)((param_1[5] & 0xffffc000U) + (param_1[5] >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (int)((param_1[4] & 0xffffc000U) + (param_1[4] >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (param_1[6] - 1U | 0x3fff) + 1;
  local_18 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (param_1[7] - 1U | 0x3fff) + 1;
  local_20 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  local_38 = iVar5;
  FUN_00464510(uVar3,local_3c,param_1[0x1d],local_108,(uint *)0x0);
  local_78 = param_1[3];
  local_74 = param_1[0x1c];
  local_7c = param_1[0xf];
  local_94 = param_1[0xe];
  FUN_00464510(uVar3,uVar3,local_108[0],local_1cc,(uint *)0x0);
  local_140 = param_1[3];
  local_138 = param_1[0x1c];
  local_34 = local_108[0] >> 4 & 1;
  local_3c = param_1[2];
  iVar6 = ((int)(iVar5 * local_8 + ((int)(iVar5 * local_8) >> 0x1f & 7U)) >> 3) +
          local_3c * local_44 + param_1[1];
  uVar2 = param_1[0x18];
  local_24 = param_1[0x19];
  local_40 = (iVar5 + 1) * 0x4000 - param_1[4];
  local_1c = param_1[0x11];
  local_28 = param_1[6] & 0x80003fff;
  if ((int)local_28 < 0) {
    local_28 = (local_28 - 1 | 0xffffc000) + 1;
  }
  if (local_28 == 0) {
    local_28 = 0x4000;
  }
  local_14 = (local_44 + 1) * 0x4000 - param_1[5];
  local_48 = param_1[7] & 0x80003fff;
  if ((int)local_48 < 0) {
    local_48 = (local_48 - 1 | 0xffffc000) + 1;
  }
  if (local_48 == 0) {
    local_48 = 0x4000;
  }
  if (param_1[0x12] - param_1[0x10] < 0x4001) {
    local_f4 = local_e4;
  }
  local_a0 = 0;
  local_8c = ((int)local_1c < 1) - 1 & local_1c;
  iVar9 = (int)(local_8c + ((int)local_8c >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (param_1[0x13] - 1U | 0x3fff) + 1;
  if (((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe) + -1 == iVar9) {
    local_94 = 0;
  }
  local_a8 = 0;
  local_8c = local_8c & 0x80003fff;
  if ((int)local_8c < 0) {
    local_8c = (local_8c - 1 | 0xffffc000) + 1;
  }
  local_c = param_1[0x10];
  local_8 = iVar9 * param_1[0xe] + param_1[0xd];
  local_13c = local_140;
  local_a4 = iVar6;
  local_10 = iVar5;
  if (iVar5 < local_18) {
    do {
      if (local_10 == local_18 + -1) {
        local_90 = (param_1[0x12] - 1U | 0x3fff) - 0x3fff;
        uVar3 = ((int)(local_90 + ((int)local_90 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
        local_a8 = uVar3 & 7;
        local_ac = (uVar3 >> 3) + local_8;
        local_90 = local_90 & 0x80003fff;
        if ((int)local_90 < 0) {
          local_90 = (local_90 - 1 | 0xffffc000) + 1;
        }
        (*local_e4)(local_108);
      }
      else {
        local_a8 = ((int)(local_c + ((int)local_c >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
        local_ac = (local_a8 >> 3) + local_8;
        local_a8 = local_a8 & 7;
        local_90 = local_c & 0x80003fff;
        if ((int)local_90 < 0) {
          local_90 = (local_90 - 1 | 0xffffc000) + 1;
        }
        (*local_f4)(local_108);
      }
      local_170 = local_a4;
      local_16c = local_a8;
      (*local_1c0)(local_1cc);
      uVar3 = local_40;
      if (local_10 == iVar5) {
        local_2c = (int)local_40 >> 0x1f;
        lVar10 = __allmul(uVar2,(int)uVar2 >> 0x1f,local_40,local_2c);
        uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x4000,0);
        local_c = local_c + (int)uVar11;
        lVar10 = __allmul(local_14,(int)local_14 >> 0x1f,uVar3,local_2c);
        uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x4000,0);
        uVar3 = (uint)uVar11;
        iVar5 = local_38;
      }
      else if (local_10 == local_18 + -1) {
        uVar11 = __alldiv((uint)((longlong)(int)local_14 * (longlong)(int)local_28),
                          (uint)((ulonglong)((longlong)(int)local_14 * (longlong)(int)local_28) >>
                                0x20),0x4000,0);
        uVar3 = (uint)uVar11;
      }
      else {
        local_c = local_c + uVar2;
        uVar3 = local_14;
      }
      FUN_00445560((int)local_108,(int)local_1cc,uVar3,local_34);
      (*local_f8)();
      local_10 = local_10 + 1;
    } while (local_10 < local_18);
  }
  if (local_14 == 0x4000) {
    local_1c = local_1c + local_24;
  }
  else {
    uVar11 = __alldiv((uint)((longlong)(int)local_14 * (longlong)(int)local_24),
                      (uint)((ulonglong)((longlong)(int)local_14 * (longlong)(int)local_24) >> 0x20)
                      ,0x4000,0);
    local_1c = local_1c + (int)uVar11;
  }
  iVar6 = iVar6 + local_3c;
  local_c = local_44 + 1;
  local_8 = local_20 - 1;
  if ((int)local_c < (int)local_8) {
    local_14 = iVar6;
    uVar11 = __alldiv((uint)((longlong)(int)local_40 * (longlong)(int)uVar2),
                      (uint)((ulonglong)((longlong)(int)local_40 * (longlong)(int)uVar2) >> 0x20),
                      0x4000,0);
    local_10 = (int)uVar11;
    local_2c = local_18 - iVar5;
    local_10c = local_2c - 2;
    local_110 = (int)(local_10c + ((int)local_10c >> 0x1f & 3U)) >> 2;
    local_10c = local_10c & 0x80000003;
    if ((int)local_10c < 0) {
      local_10c = (local_10c - 1 | 0xfffffffc) + 1;
    }
    local_c = local_8 - local_c;
    do {
      local_8c = ((int)local_1c < 1) - 1 & local_1c;
      local_a0 = 0;
      iVar7 = (int)(local_8c + ((int)local_8c >> 0x1f & 0x3fffU)) >> 0xe;
      iVar5 = (param_1[0x13] - 1U | 0x3fff) + 1;
      if (((int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe) + -1 == iVar7) {
        local_94 = 0;
      }
      local_8c = local_8c & 0x80003fff;
      if ((int)local_8c < 0) {
        local_8c = (local_8c - 1 | 0xffffc000) + 1;
      }
      uVar3 = param_1[0x10];
      iVar5 = iVar7 * param_1[0xe] + param_1[0xd];
      uVar8 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
      local_a8 = uVar8 & 7;
      local_ac = (uVar8 >> 3) + iVar5;
      local_90 = uVar3 & 0x80003fff;
      if ((int)local_90 < 0) {
        local_90 = (local_90 - 1 | 0xffffc000) + 1;
      }
      local_a4 = iVar6;
      (*local_f4)(local_108);
      local_170 = local_a4;
      local_16c = local_a8;
      (*local_1c0)(local_1cc);
      FUN_00445560((int)local_108,(int)local_1cc,local_40,local_34);
      (*local_f8)();
      uVar3 = uVar3 + local_10;
      if (0 < (int)local_110) {
        local_8 = local_110;
        do {
          uVar3 = uVar3 + uVar2;
          uVar8 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_a8 = uVar8 & 7;
          local_ac = (uVar8 >> 3) + iVar5;
          local_90 = uVar3 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)(local_108);
          local_c0 = local_c8;
          uVar3 = uVar3 + uVar2;
          local_c4 = local_cc;
          uVar8 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_a8 = uVar8 & 7;
          local_ac = (uVar8 >> 3) + iVar5;
          local_90 = uVar3 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)(local_108);
          local_b8 = local_c8;
          uVar3 = uVar3 + uVar2;
          local_bc = local_cc;
          uVar8 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_a8 = uVar8 & 7;
          local_ac = (uVar8 >> 3) + iVar5;
          local_90 = uVar3 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)();
          uVar3 = uVar3 + uVar2;
          local_b4 = local_cc;
          local_90 = uVar3 + uVar2 * -4;
          local_b0 = local_c8;
          uVar8 = ((int)(local_90 + ((int)local_90 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_a8 = uVar8 & 7;
          local_ac = (uVar8 >> 3) + iVar5;
          local_90 = local_90 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)(local_108);
          (*local_e8)();
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      if (0 < (int)local_10c) {
        local_8 = local_10c;
        do {
          local_a8 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_ac = (local_a8 >> 3) + iVar5;
          local_a8 = local_a8 & 7;
          local_90 = uVar3 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)(local_108);
          (*local_f8)(local_108);
          uVar3 = uVar3 + uVar2;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      if (1 < local_2c) {
        local_90 = (param_1[0x12] - 1U | 0x3fff) - 0x3fff;
        uVar3 = ((int)(local_90 + ((int)local_90 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
        local_a8 = uVar3 & 7;
        local_ac = (uVar3 >> 3) + iVar5;
        local_90 = local_90 & 0x80003fff;
        if ((int)local_90 < 0) {
          local_90 = (local_90 - 1 | 0xffffc000) + 1;
        }
        (*local_e4)(local_108);
        local_170 = local_a4;
        local_16c = local_a8;
        (*local_1c0)(local_1cc);
        FUN_00445560((int)local_108,(int)local_1cc,local_28,local_34);
        (*local_f8)();
      }
      local_1c = local_1c + local_24;
      iVar6 = local_14 + local_3c;
      local_c = local_c + -1;
      local_14 = iVar6;
    } while (local_c != 0);
    local_c = 0;
    iVar5 = local_38;
  }
  if (1 < local_20 - local_44) {
    local_2c = (int)local_48 >> 0x1f;
    local_30 = local_48;
    local_14 = iVar6;
    lVar10 = __allmul(local_24,(int)local_24 >> 0x1f,local_48,local_2c);
    uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x4000,0);
    local_8c = local_1c + ((int)uVar11 - local_24);
    local_a0 = 0;
    local_8c = ((int)local_8c < 1) - 1 & local_8c;
    iVar9 = (int)(local_8c + ((int)local_8c >> 0x1f & 0x3fffU)) >> 0xe;
    iVar7 = (param_1[0x13] - 1U | 0x3fff) + 1;
    if (((int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe) + -1 == iVar9) {
      local_94 = 0;
    }
    local_8c = local_8c & 0x80003fff;
    if ((int)local_8c < 0) {
      local_8c = (local_8c - 1 | 0xffffc000) + 1;
    }
    local_20 = iVar9 * param_1[0xe] + param_1[0xd];
    uVar3 = param_1[0x10];
    local_a4 = iVar6;
    local_10 = iVar5;
    if (iVar5 < local_18) {
      do {
        if (local_10 == local_18 + -1) {
          local_90 = (param_1[0x12] - 1U | 0x3fff) - 0x3fff;
          uVar8 = ((int)(local_90 + ((int)local_90 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_a8 = uVar8 & 7;
          local_ac = (uVar8 >> 3) + local_20;
          local_90 = local_90 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_e4)(local_108);
        }
        else {
          local_a8 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_ac = (local_a8 >> 3) + local_20;
          local_a8 = local_a8 & 7;
          local_90 = uVar3 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)(local_108);
        }
        local_170 = local_a4;
        local_16c = local_a8;
        (*local_1c0)(local_1cc);
        if (local_10 == iVar5) {
          uVar11 = __alldiv((uint)((longlong)(int)local_28 * (longlong)(int)uVar2),
                            (uint)((ulonglong)((longlong)(int)local_28 * (longlong)(int)uVar2) >>
                                  0x20),0x4000,0);
          uVar3 = uVar3 + (int)uVar11;
          lVar10 = __allmul(local_40,(int)local_40 >> 0x1f,local_30,local_2c);
          uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x4000,0);
          uVar8 = (uint)uVar11;
        }
        else if (local_10 == local_18 + -1) {
          lVar10 = __allmul(local_28,(int)local_28 >> 0x1f,local_30,local_2c);
          uVar11 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x4000,0);
          uVar8 = (uint)uVar11;
        }
        else {
          uVar3 = uVar3 + uVar2;
          uVar8 = local_48;
        }
        FUN_00445560((int)local_108,(int)local_1cc,uVar8,local_34);
        (*local_f8)();
        local_10 = local_10 + 1;
      } while (local_10 < local_18);
    }
  }
  return 0;
}



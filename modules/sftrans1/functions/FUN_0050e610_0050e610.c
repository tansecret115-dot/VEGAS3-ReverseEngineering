/* Module: sftrans1.dll
   Function: FUN_0050e610
   Address: 0050e610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050e610(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 local_1cc [12];
  code *local_1c0;
  int local_170;
  uint local_16c;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
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
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_4c [4];
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar1 = FUN_004ddb90(param_1[0xc]);
  local_3c = uVar1;
  uVar2 = FUN_004ddb90(*param_1);
  local_8 = FUN_004dde20(uVar2,local_4c);
  iVar3 = FUN_004dde20(uVar1,local_4c);
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) == 0) {
      return 0x80070057;
    }
    iVar4 = (int)param_1[0x13] / 2;
    iVar10 = (param_1[0x11] + -0x4000) / 2;
    param_1[0x11] = iVar10;
    param_1[0x13] = iVar4;
    if (0x3fff < iVar4 - iVar10) {
      param_1[0xd] = param_1[0xd] + param_1[0xe];
    }
    param_1[0xe] = param_1[0xe] << 1;
  }
  else {
    param_1[0x11] = (int)param_1[0x11] / 2;
    iVar4 = (int)param_1[0x13] / 2;
    param_1[0x13] = iVar4;
    param_1[0xe] = param_1[0xe] << 1;
  }
  if ((int)(param_1[7] - param_1[5]) < 0x8000) {
    param_1[0x19] = 0;
  }
  else {
    param_1[0x19] =
         (int)(((longlong)((iVar4 - param_1[0x11]) + -0x4000) * 0x4000) /
              (longlong)((param_1[7] - param_1[5]) + -0x4000));
  }
  local_44 = (int)((param_1[5] & 0xffffc000) + ((int)param_1[5] >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (int)((param_1[4] & 0xffffc000) + ((int)param_1[4] >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (param_1[6] - 1 | 0x3fff) + 1;
  local_18 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (param_1[7] - 1 | 0x3fff) + 1;
  local_20 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
  local_38 = iVar10;
  FUN_00525bc0();
  local_78 = param_1[3];
  local_74 = param_1[0x1c];
  local_7c = param_1[0xf];
  local_94 = param_1[0xe];
  FUN_00525bc0();
  local_140 = param_1[3];
  local_138 = param_1[0x1c];
  local_34 = local_108[0] >> 4 & 1;
  local_3c = param_1[2];
  iVar9 = ((int)(iVar10 * local_8 + ((int)(iVar10 * local_8) >> 0x1f & 7U)) >> 3) +
          local_3c * local_44 + param_1[1];
  iVar4 = param_1[0x18];
  local_24 = param_1[0x19];
  local_40 = (iVar10 + 1) * 0x4000 - param_1[4];
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
  if ((int)(param_1[0x12] - param_1[0x10]) < 0x4001) {
    local_f4 = local_e4;
  }
  local_a0 = 0;
  local_8c = ((int)local_1c < 1) - 1 & local_1c;
  iVar8 = (int)(local_8c + ((int)local_8c >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (param_1[0x13] - 1 | 0x3fff) + 1;
  if (((int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe) + -1 == iVar8) {
    local_94 = 0;
  }
  local_a8 = 0;
  local_8c = local_8c & 0x80003fff;
  if ((int)local_8c < 0) {
    local_8c = (local_8c - 1 | 0xffffc000) + 1;
  }
  local_c = param_1[0x10];
  local_8 = iVar8 * param_1[0xe] + param_1[0xd];
  local_13c = local_140;
  local_a4 = iVar9;
  local_10 = iVar10;
  if (iVar10 < local_18) {
    do {
      if (local_10 == local_18 + -1) {
        local_90 = (param_1[0x12] - 1 | 0x3fff) - 0x3fff;
        uVar6 = ((int)(local_90 + ((int)local_90 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
        local_a8 = uVar6 & 7;
        local_ac = (uVar6 >> 3) + local_8;
        local_90 = local_90 & 0x80003fff;
        if ((int)local_90 < 0) {
          local_90 = (local_90 - 1 | 0xffffc000) + 1;
        }
        (*local_e4)(local_108);
      }
      else {
        local_a8 = ((int)(local_c + ((int)local_c >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
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
      iVar5 = local_40;
      if (local_10 == iVar10) {
        local_2c = local_40 >> 0x1f;
        uVar11 = __allmul(iVar4,iVar4 >> 0x1f,local_40,local_2c);
        iVar10 = __alldiv(uVar11,0x4000,0);
        local_c = local_c + iVar10;
        uVar11 = __allmul(local_14,local_14 >> 0x1f,iVar5,local_2c);
        iVar5 = __alldiv(uVar11,0x4000,0);
        iVar10 = local_38;
      }
      else if (local_10 == local_18 + -1) {
        iVar5 = __alldiv((longlong)local_14 * (longlong)(int)local_28,0x4000,0);
      }
      else {
        local_c = local_c + iVar4;
        iVar5 = local_14;
      }
      FUN_0050e480(local_108,local_1cc,iVar5,local_34);
      (*local_f8)();
      local_10 = local_10 + 1;
    } while (local_10 < local_18);
  }
  if (local_14 == 0x4000) {
    local_1c = local_1c + local_24;
  }
  else {
    iVar5 = __alldiv((longlong)local_14 * (longlong)local_24,0x4000,0);
    local_1c = local_1c + iVar5;
  }
  iVar9 = iVar9 + local_3c;
  local_c = local_44 + 1;
  local_8 = local_20 - 1;
  if ((int)local_c < (int)local_8) {
    local_14 = iVar9;
    local_10 = __alldiv((longlong)local_40 * (longlong)iVar4,0x4000,0);
    local_2c = local_18 - iVar10;
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
      iVar5 = (int)(local_8c + ((int)local_8c >> 0x1f & 0x3fffU)) >> 0xe;
      iVar10 = (param_1[0x13] - 1 | 0x3fff) + 1;
      if (((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) + -1 == iVar5) {
        local_94 = 0;
      }
      local_8c = local_8c & 0x80003fff;
      if ((int)local_8c < 0) {
        local_8c = (local_8c - 1 | 0xffffc000) + 1;
      }
      uVar6 = param_1[0x10];
      iVar10 = iVar5 * param_1[0xe] + param_1[0xd];
      uVar7 = ((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
      local_a8 = uVar7 & 7;
      local_ac = (uVar7 >> 3) + iVar10;
      local_90 = uVar6 & 0x80003fff;
      if ((int)local_90 < 0) {
        local_90 = (local_90 - 1 | 0xffffc000) + 1;
      }
      local_a4 = iVar9;
      (*local_f4)(local_108);
      local_170 = local_a4;
      local_16c = local_a8;
      (*local_1c0)(local_1cc);
      FUN_0050e480(local_108,local_1cc,local_40,local_34);
      (*local_f8)();
      uVar6 = uVar6 + local_10;
      if (0 < (int)local_110) {
        local_8 = local_110;
        do {
          uVar6 = uVar6 + iVar4;
          uVar7 = ((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
          local_a8 = uVar7 & 7;
          local_ac = (uVar7 >> 3) + iVar10;
          local_90 = uVar6 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)(local_108);
          local_c0 = local_c8;
          uVar6 = uVar6 + iVar4;
          local_c4 = local_cc;
          uVar7 = ((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
          local_a8 = uVar7 & 7;
          local_ac = (uVar7 >> 3) + iVar10;
          local_90 = uVar6 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)(local_108);
          local_b8 = local_c8;
          uVar6 = uVar6 + iVar4;
          local_bc = local_cc;
          uVar7 = ((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
          local_a8 = uVar7 & 7;
          local_ac = (uVar7 >> 3) + iVar10;
          local_90 = uVar6 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)();
          uVar6 = uVar6 + iVar4;
          local_b4 = local_cc;
          local_90 = uVar6 + iVar4 * -4;
          local_b0 = local_c8;
          uVar7 = ((int)(local_90 + ((int)local_90 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
          local_a8 = uVar7 & 7;
          local_ac = (uVar7 >> 3) + iVar10;
          local_90 = local_90 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)();
          (*local_e8)();
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      if (0 < (int)local_10c) {
        local_8 = local_10c;
        do {
          local_a8 = ((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
          local_ac = (local_a8 >> 3) + iVar10;
          local_a8 = local_a8 & 7;
          local_90 = uVar6 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)(local_108);
          (*local_f8)(local_108);
          uVar6 = uVar6 + iVar4;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      if (1 < local_2c) {
        local_90 = (param_1[0x12] - 1 | 0x3fff) - 0x3fff;
        uVar6 = ((int)(local_90 + ((int)local_90 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
        local_a8 = uVar6 & 7;
        local_ac = (uVar6 >> 3) + iVar10;
        local_90 = local_90 & 0x80003fff;
        if ((int)local_90 < 0) {
          local_90 = (local_90 - 1 | 0xffffc000) + 1;
        }
        (*local_e4)(local_108);
        local_170 = local_a4;
        local_16c = local_a8;
        (*local_1c0)(local_1cc);
        FUN_0050e480(local_108,local_1cc,local_28,local_34);
        (*local_f8)();
      }
      local_1c = local_1c + local_24;
      iVar9 = local_14 + local_3c;
      local_c = local_c + -1;
      local_14 = iVar9;
    } while (local_c != 0);
    local_c = 0;
    iVar10 = local_38;
  }
  if (1 < local_20 - local_44) {
    local_2c = (int)local_48 >> 0x1f;
    local_30 = local_48;
    local_14 = iVar9;
    uVar11 = __allmul(local_24,local_24 >> 0x1f,local_48,local_2c);
    iVar5 = __alldiv(uVar11,0x4000,0);
    local_8c = local_1c + (iVar5 - local_24);
    local_a0 = 0;
    local_8c = ((int)local_8c < 1) - 1 & local_8c;
    iVar8 = (int)(local_8c + ((int)local_8c >> 0x1f & 0x3fffU)) >> 0xe;
    iVar5 = (param_1[0x13] - 1 | 0x3fff) + 1;
    if (((int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe) + -1 == iVar8) {
      local_94 = 0;
    }
    local_8c = local_8c & 0x80003fff;
    if ((int)local_8c < 0) {
      local_8c = (local_8c - 1 | 0xffffc000) + 1;
    }
    local_20 = iVar8 * param_1[0xe] + param_1[0xd];
    uVar6 = param_1[0x10];
    local_a4 = iVar9;
    local_10 = iVar10;
    if (iVar10 < local_18) {
      do {
        if (local_10 == local_18 + -1) {
          local_90 = (param_1[0x12] - 1 | 0x3fff) - 0x3fff;
          uVar7 = ((int)(local_90 + ((int)local_90 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
          local_a8 = uVar7 & 7;
          local_ac = (uVar7 >> 3) + local_20;
          local_90 = local_90 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_e4)(local_108);
        }
        else {
          local_a8 = ((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x3fffU)) >> 0xe) * iVar3;
          local_ac = (local_a8 >> 3) + local_20;
          local_a8 = local_a8 & 7;
          local_90 = uVar6 & 0x80003fff;
          if ((int)local_90 < 0) {
            local_90 = (local_90 - 1 | 0xffffc000) + 1;
          }
          (*local_f4)(local_108);
        }
        local_170 = local_a4;
        local_16c = local_a8;
        (*local_1c0)(local_1cc);
        if (local_10 == iVar10) {
          iVar9 = __alldiv((longlong)(int)local_28 * (longlong)iVar4,0x4000,0);
          uVar6 = uVar6 + iVar9;
          uVar11 = __allmul(local_40,local_40 >> 0x1f,local_30,local_2c);
          uVar7 = __alldiv(uVar11,0x4000,0);
        }
        else if (local_10 == local_18 + -1) {
          uVar11 = __allmul(local_28,(int)local_28 >> 0x1f,local_30,local_2c);
          uVar7 = __alldiv(uVar11,0x4000,0);
        }
        else {
          uVar6 = uVar6 + iVar4;
          uVar7 = local_48;
        }
        FUN_0050e480(local_108,local_1cc,uVar7,local_34);
        (*local_f8)();
        local_10 = local_10 + 1;
      } while (local_10 < local_18);
    }
  }
  return 0;
}



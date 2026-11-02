/* Module: aviplug.dll
   Function: FUN_5f97d8b0
   Address: 5f97d8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f97d8b0(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_1ec [3];
  code *local_1e0;
  int local_190;
  uint local_18c;
  int local_160;
  int local_15c;
  int local_158;
  uint local_130 [4];
  code *local_120;
  code *local_11c;
  code *local_110;
  code *local_10c;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_bc;
  uint local_b8;
  uint local_b4;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  undefined3 extraout_var_00;
  
  piVar1 = param_1;
  uVar3 = FUN_5f979af0(param_1[0xc]);
  local_28 = uVar3;
  local_38 = FUN_5f979af0(*piVar1);
  uVar2 = FUN_5f979d80(local_38,(undefined1 *)&param_1);
  local_c = CONCAT31(extraout_var,uVar2);
  uVar2 = FUN_5f979d80(uVar3,(undefined1 *)&param_1);
  iVar4 = CONCAT31(extraout_var_00,uVar2);
  local_24 = (int)((piVar1[4] & 0xffffc000U) + (piVar1[4] >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (int)((piVar1[5] & 0xffffc000U) + (piVar1[5] >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (piVar1[6] - 1U | 0x3fff) + 1;
  local_20 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (piVar1[7] - 1U | 0x3fff) + 1;
  local_6c = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (piVar1[0x12] - 1U | 0x3fff) + 1;
  local_64 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (piVar1[0x13] - 1U | 0x3fff) + 1;
  local_40 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  local_48 = (uint)piVar1[0x1d] >> 0x1b & 1;
  FUN_5f9c2750(local_38,local_28,piVar1[0x1d],local_130,(uint *)0x0);
  local_a0 = piVar1[3];
  local_9c = piVar1[0x1c];
  local_a4 = piVar1[0xf];
  local_bc = piVar1[0xe];
  FUN_5f9c2750(local_38,local_38,local_130[0],local_1ec,(uint *)0x0);
  local_160 = piVar1[3];
  local_158 = piVar1[0x1c];
  local_50 = local_130[0] >> 4 & 1;
  local_60 = piVar1[2];
  local_34 = ((int)(local_24 * local_c + ((int)(local_24 * local_c) >> 0x1f & 7U)) >> 3) +
             local_60 * iVar7 + piVar1[1];
  iVar5 = ((int)(piVar1[4] + (piVar1[4] >> 0x1f & 0x3fffU)) >> 0xe) * local_c;
  local_c8 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
  iVar5 = ((int)(piVar1[0x10] + (piVar1[0x10] >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
  local_74 = piVar1[0x19];
  local_28 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
  local_10 = piVar1[0x18];
  local_14 = piVar1[0x11];
  local_30 = (local_24 + 1) * 0x4000 - piVar1[4];
  local_4c = piVar1[6] + local_20 * -0x4000 + 0x4000;
  local_1c = iVar7 + 1;
  local_3c = local_1c * 0x4000 - piVar1[5];
  local_38 = piVar1[7] + local_6c * -0x4000 + 0x4000;
  local_70 = local_20 - local_24;
  if (local_70 < 2) {
    local_30 = piVar1[6] - piVar1[4];
  }
  local_68 = local_6c - iVar7;
  if ((int)local_68 < 2) {
    local_3c = piVar1[7] - piVar1[5];
  }
  if (piVar1[0x12] - piVar1[0x10] < 0x4001) {
    local_11c = local_10c;
  }
  iVar5 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x3fffU)) >> 0xe;
  local_40 = local_40 + -1;
  if (local_40 == iVar5) {
    local_bc = 0;
  }
  local_b4 = local_14 & 0x80003fff;
  if ((int)local_b4 < 0) {
    local_b4 = (local_b4 - 1 | 0xffffc000) + 1;
  }
  local_5c = piVar1[0x10];
  local_2c = iVar5 * piVar1[0xe] + piVar1[0xd];
  local_8 = local_24;
  local_15c = local_160;
  local_54 = local_c8;
  if (local_24 < local_20) {
    local_c = local_64 + -1;
    local_cc = local_34;
    do {
      uVar3 = local_5c;
      iVar5 = (int)(local_5c + ((int)local_5c >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar5 < (int)local_c) {
        local_d0 = iVar5 * iVar4;
        local_d4 = (local_d0 >> 3) + local_2c;
        local_d0 = local_d0 & 7;
        local_b8 = local_5c & 0x80003fff;
        if ((int)local_b8 < 0) {
          local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
        }
        (*local_11c)(local_130);
      }
      else {
        local_b8 = (piVar1[0x12] - 1U | 0x3fff) - 0x3fff;
        uVar6 = ((int)(local_b8 + ((int)local_b8 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
        local_d0 = uVar6 & 7;
        local_d4 = (uVar6 >> 3) + local_2c;
        local_b8 = local_b8 & 0x80003fff;
        if ((int)local_b8 < 0) {
          local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
        }
        (*local_10c)(local_130);
      }
      local_190 = local_cc;
      local_18c = local_d0;
      (*local_1e0)(local_1ec);
      if (local_8 == local_24) {
        local_58 = (uint)((longlong)local_10 * (longlong)(int)local_30) >> 0xe |
                   (int)((ulonglong)((longlong)local_10 * (longlong)(int)local_30) >> 0x20) << 0x12;
        local_5c = uVar3 + local_58;
        local_44 = (uint)((longlong)(int)local_30 * (longlong)(int)local_3c) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_30 * (longlong)(int)local_3c) >> 0x20) <<
                   0x12;
        uVar3 = local_44;
      }
      else if (local_8 == local_20 + -1) {
        local_18 = (uint)((longlong)(int)local_4c * (longlong)(int)local_3c) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_4c * (longlong)(int)local_3c) >> 0x20) <<
                   0x12;
        uVar3 = local_18;
      }
      else {
        local_5c = uVar3 + local_10;
        uVar3 = local_3c;
      }
      FUN_5f97d720((int)local_130,(int)local_1ec,uVar3,local_50,local_48);
      (*local_120)(local_130);
      local_8 = local_8 + 1;
    } while (local_8 < local_20);
  }
  local_18 = (uint)((longlong)local_74 * (longlong)(int)local_3c) >> 0xe |
             (int)((ulonglong)((longlong)local_74 * (longlong)(int)local_3c) >> 0x20) << 0x12;
  local_14 = local_14 + local_18;
  local_cc = local_34 + local_60;
  local_44 = local_6c - 1;
  if ((int)local_1c < (int)local_44) {
    local_18 = local_70 - 2;
    local_58 = (int)(local_18 + ((int)local_18 >> 0x1f & 3U)) >> 2;
    local_c = local_18 & 0x80000003;
    if ((int)local_c < 0) {
      local_c = (local_c - 1 | 0xfffffffc) + 1;
    }
    local_2c = local_44 - local_1c;
    do {
      local_c8 = local_54;
      iVar5 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x3fffU)) >> 0xe;
      if (local_40 == iVar5) {
        local_bc = 0;
      }
      local_b4 = local_14 & 0x80003fff;
      if ((int)local_b4 < 0) {
        local_b4 = (local_b4 - 1 | 0xffffc000) + 1;
      }
      uVar3 = piVar1[0x10];
      local_8 = iVar5 * piVar1[0xe] + piVar1[0xd];
      local_d0 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
      local_d4 = (local_d0 >> 3) + local_8;
      local_d0 = local_d0 & 7;
      local_b8 = uVar3 & 0x80003fff;
      if ((int)local_b8 < 0) {
        local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
      }
      local_34 = local_cc;
      (*local_11c)(local_130);
      local_190 = local_cc;
      local_18c = local_d0;
      (*local_1e0)(local_1ec);
      FUN_5f97d720((int)local_130,(int)local_1ec,local_30,local_50,local_48);
      (*local_120)(local_130);
      local_18 = (uint)((longlong)local_10 * (longlong)(int)local_30) >> 0xe |
                 (int)((ulonglong)((longlong)local_10 * (longlong)(int)local_30) >> 0x20) << 0x12;
      uVar3 = uVar3 + local_18;
      if (0 < (int)local_58) {
        local_1c = local_58;
        do {
          uVar3 = uVar3 + local_10;
          local_d0 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_d4 = (local_d0 >> 3) + local_8;
          local_d0 = local_d0 & 7;
          local_b8 = uVar3 & 0x80003fff;
          if ((int)local_b8 < 0) {
            local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
          }
          (*local_11c)(local_130);
          local_ec = local_f4;
          uVar3 = uVar3 + local_10;
          local_e8 = local_f0;
          local_d0 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_d4 = (local_d0 >> 3) + local_8;
          local_d0 = local_d0 & 7;
          local_b8 = uVar3 & 0x80003fff;
          if ((int)local_b8 < 0) {
            local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
          }
          (*local_11c)(local_130);
          local_e0 = local_f0;
          uVar3 = uVar3 + local_10;
          local_e4 = local_f4;
          uVar6 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_d0 = uVar6 & 7;
          local_d4 = (uVar6 >> 3) + local_8;
          local_b8 = uVar3 & 0x80003fff;
          if ((int)local_b8 < 0) {
            local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
          }
          (*local_11c)(local_130);
          uVar3 = uVar3 + local_10;
          local_dc = local_f4;
          local_b8 = uVar3 + local_10 * -4;
          local_d8 = local_f0;
          uVar6 = ((int)(local_b8 + ((int)local_b8 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_d0 = uVar6 & 7;
          local_d4 = (uVar6 >> 3) + local_8;
          local_b8 = local_b8 & 0x80003fff;
          if ((int)local_b8 < 0) {
            local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
          }
          (*local_11c)(local_130);
          (*local_110)(local_130);
          local_1c = local_1c - 1;
        } while (local_1c != 0);
      }
      if (0 < (int)local_c) {
        local_1c = local_c;
        do {
          local_d0 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_d4 = (local_d0 >> 3) + local_8;
          local_d0 = local_d0 & 7;
          local_b8 = uVar3 & 0x80003fff;
          if ((int)local_b8 < 0) {
            local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
          }
          (*local_11c)(local_130);
          (*local_120)(local_130);
          uVar3 = uVar3 + local_10;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
      }
      if (1 < local_70) {
        iVar5 = (int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar5 < local_64 + -1) {
          uVar6 = iVar5 * iVar4;
          local_d0 = uVar6 & 7;
          local_d4 = (uVar6 >> 3) + local_8;
          local_b8 = uVar3 & 0x80003fff;
          if ((int)local_b8 < 0) {
            local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
          }
          (*local_11c)(local_130);
        }
        else {
          local_b8 = (piVar1[0x12] - 1U | 0x3fff) - 0x3fff;
          uVar3 = ((int)(local_b8 + ((int)local_b8 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_d0 = uVar3 & 7;
          local_d4 = (uVar3 >> 3) + local_8;
          local_b8 = local_b8 & 0x80003fff;
          if ((int)local_b8 < 0) {
            local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
          }
          (*local_10c)(local_130);
        }
        local_190 = local_cc;
        local_18c = local_d0;
        (*local_1e0)(local_1ec);
        FUN_5f97d720((int)local_130,(int)local_1ec,local_4c,local_50,local_48);
        (*local_120)(local_130);
      }
      local_14 = local_14 + local_74;
      local_cc = local_34 + local_60;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  if (1 < (int)local_68) {
    if (local_40 <= (int)(local_14 + ((int)local_14 >> 0x1f & 0x3fffU)) >> 0xe) {
      local_14 = (piVar1[0x13] - 1U | 0x3fff) - 0x3fff;
    }
    local_c8 = local_54;
    iVar5 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x3fffU)) >> 0xe;
    if (local_40 == iVar5) {
      local_bc = 0;
    }
    local_b4 = local_14 & 0x80003fff;
    if ((int)local_b4 < 0) {
      local_b4 = (local_b4 - 1 | 0xffffc000) + 1;
    }
    local_28 = iVar5 * piVar1[0xe] + piVar1[0xd];
    uVar3 = piVar1[0x10];
    local_8 = local_24;
    if (local_24 < local_20) {
      local_c = local_64 + -1;
      local_34 = local_cc;
      do {
        iVar5 = (int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar5 < (int)local_c) {
          local_d0 = iVar5 * iVar4;
          local_d4 = (local_d0 >> 3) + local_28;
          local_d0 = local_d0 & 7;
          local_b8 = uVar3 & 0x80003fff;
          if ((int)local_b8 < 0) {
            local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
          }
          (*local_11c)(local_130);
        }
        else {
          local_b8 = (piVar1[0x12] - 1U | 0x3fff) - 0x3fff;
          uVar6 = ((int)(local_b8 + ((int)local_b8 >> 0x1f & 0x3fffU)) >> 0xe) * iVar4;
          local_d0 = uVar6 & 7;
          local_d4 = (uVar6 >> 3) + local_28;
          local_b8 = local_b8 & 0x80003fff;
          if ((int)local_b8 < 0) {
            local_b8 = (local_b8 - 1 | 0xffffc000) + 1;
          }
          (*local_10c)(local_130);
        }
        local_190 = local_cc;
        local_18c = local_d0;
        (*local_1e0)(local_1ec);
        if (local_8 == local_24) {
          local_68 = (uint)((longlong)local_10 * (longlong)(int)local_4c) >> 0xe |
                     (int)((ulonglong)((longlong)local_10 * (longlong)(int)local_4c) >> 0x20) <<
                     0x12;
          uVar3 = uVar3 + local_68;
          local_18 = (uint)((longlong)(int)local_30 * (longlong)(int)local_38) >> 0xe |
                     (int)((ulonglong)((longlong)(int)local_30 * (longlong)(int)local_38) >> 0x20)
                     << 0x12;
          uVar6 = local_18;
        }
        else if (local_8 == local_20 + -1) {
          local_44 = (uint)((longlong)(int)local_4c * (longlong)(int)local_38) >> 0xe |
                     (int)((ulonglong)((longlong)(int)local_4c * (longlong)(int)local_38) >> 0x20)
                     << 0x12;
          uVar6 = local_44;
        }
        else {
          uVar3 = uVar3 + local_10;
          uVar6 = local_38;
        }
        FUN_5f97d720((int)local_130,(int)local_1ec,uVar6,local_50,local_48);
        (*local_120)(local_130);
        local_8 = local_8 + 1;
      } while (local_8 < local_20);
    }
  }
  return 0;
}



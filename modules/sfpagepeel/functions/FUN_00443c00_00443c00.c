/* Module: sfpagepeel.dll
   Function: FUN_00443c00
   Address: 00443c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00443c00(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *in_stack_00000018;
  int in_stack_00000028;
  int in_stack_00000030;
  int aiStack_10c [4];
  int aiStack_fc [4];
  int aiStack_ec [4];
  int aiStack_dc [4];
  byte local_cc;
  undefined3 uStack_cb;
  uint local_c8;
  uint local_c4;
  int *local_c0;
  uint local_bc;
  int *local_b8;
  int local_b4;
  uint local_b0;
  undefined1 local_ac;
  undefined3 uStack_ab;
  uint local_a8;
  byte local_a4;
  undefined3 uStack_a3;
  byte local_a0;
  undefined3 uStack_9f;
  int local_9c;
  byte local_98;
  undefined3 uStack_97;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  byte *local_3c;
  int local_38;
  uint *local_34;
  uint local_30;
  uint local_2c;
  uint local_28 [5];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_70 = *(uint *)(in_stack_00000028 + 0x68);
  local_54 = *(uint *)(in_stack_00000028 + 0x6c);
  iVar3 = *(int *)(in_stack_00000028 + 0x18);
  local_5c = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar2 = (iVar3 - 1U | 0x3fff) + 1;
  iVar8 = *(int *)(in_stack_00000028 + 0x1c);
  local_4c = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fffU)) >> 0xe;
  local_74 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar2 = (iVar8 - 1U | 0x3fff) + 1;
  local_40 = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fffU)) >> 0xe;
  local_7c = (local_74 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  local_94 = iVar8 + local_40 * -0x4000 + 0x4000;
  local_78 = (local_5c + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_9c = iVar3 + local_4c * -0x4000 + 0x4000;
  if (local_4c - local_5c < 2) {
    local_78 = iVar3 - *(int *)(in_stack_00000028 + 0x10);
  }
  if (local_40 - local_74 < 2) {
    local_7c = iVar8 - *(int *)(in_stack_00000028 + 0x14);
  }
  local_44 = local_74;
  local_50 = (int)*(uint *)(in_stack_00000028 + 0x6c) / 2 + 0x2000 +
             *(int *)(in_stack_00000028 + 0x44);
  if (local_74 < local_40) {
    local_b4 = (int)*(uint *)(in_stack_00000028 + 0x68) / 2;
    do {
      iVar3 = (int)(local_50 + ((int)local_50 >> 0x1f & 0x3fffU)) >> 0xe;
      local_30 = local_b4 + 0x2000 + *(int *)(in_stack_00000028 + 0x40);
      uVar4 = local_50 & 0x80003fff;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffc000) + 1;
      }
      local_b8 = (int *)(&DAT_0048e838 + ((int)uVar4 >> 2) * 0x10);
      iVar2 = in_stack_00000018[1];
      iVar8 = iVar3 + -2;
      if (iVar8 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar2 + -1;
        if (iVar8 <= iVar2 + -1) {
          iVar7 = iVar8;
        }
      }
      iVar8 = iVar3 + -1;
      if (iVar8 < 0) {
        local_88 = 0;
      }
      else {
        local_88 = iVar2 + -1;
        if (iVar8 <= iVar2 + -1) {
          local_88 = iVar8;
        }
      }
      if (iVar3 < 0) {
        local_84 = 0;
      }
      else {
        local_84 = iVar2 + -1;
        if (iVar3 <= iVar2 + -1) {
          local_84 = iVar3;
        }
      }
      iVar8 = iVar3 + 1;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (iVar2 + -1 < iVar8) {
        iVar8 = iVar2 + -1;
      }
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (iVar2 + -1 < iVar3) {
        iVar3 = iVar2 + -1;
      }
      local_84 = local_84 - iVar3;
      local_80 = iVar8 - iVar3;
      iVar2 = *(int *)(in_stack_00000028 + 0x38);
      local_88 = local_88 - iVar3;
      iVar5 = iVar2 * iVar3 + *(int *)(in_stack_00000028 + 0x34);
      local_90 = -100;
      local_58 = 0;
      local_6c = iVar2 * (iVar7 - iVar3) + iVar5;
      local_68 = iVar2 * local_88 + iVar5;
      local_60 = iVar2 * (iVar8 - iVar3) + iVar5;
      local_64 = iVar2 * local_84 + iVar5;
      if (local_44 == local_74) {
        local_38 = local_7c;
      }
      else if (local_44 == local_40 + -1) {
        local_38 = local_94;
      }
      else {
        local_38 = 0x4000;
      }
      local_10 = local_5c;
      if (local_5c < local_4c) {
        local_3c = (byte *)(local_44 * *(int *)(in_stack_00000028 + 8) +
                            *(int *)(in_stack_00000028 + 4) + 2 + local_5c * 4);
        do {
          iVar3 = (int)(local_30 + ((int)local_30 >> 0x1f & 0x3fffU)) >> 0xe;
          local_2c = iVar3 - local_90;
          uVar4 = local_30 & 0x80003fff;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xffffc000) + 1;
          }
          uVar9 = iVar3 - 2;
          iVar8 = *in_stack_00000018;
          local_c0 = (int *)(&DAT_0048e838 + ((int)uVar4 >> 2) * 0x10);
          if ((int)((iVar8 - iVar3) - 2U | uVar9) < 0) {
            if ((int)uVar9 < 0) {
              local_28[0] = 0;
            }
            else {
              local_28[0] = iVar8 - 1U;
              if ((int)uVar9 <= (int)(iVar8 - 1U)) {
                local_28[0] = uVar9;
              }
            }
            iVar2 = iVar3 + -1;
            if (iVar2 < 0) {
              local_28[1] = 0;
            }
            else {
              local_28[1] = iVar8 + -1;
              if (iVar2 <= iVar8 + -1) {
                local_28[1] = iVar2;
              }
            }
            if (iVar3 < 0) {
              local_28[2] = 0;
            }
            else {
              local_28[2] = iVar8 + -1;
              if (iVar3 <= iVar8 + -1) {
                local_28[2] = iVar3;
              }
            }
            iVar2 = iVar3 + 1;
            if (iVar2 < 0) {
              local_28[3] = 0;
            }
            else {
              local_28[3] = iVar8 + -1;
              if (iVar2 <= iVar8 + -1) {
                local_28[3] = iVar2;
              }
            }
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (iVar8 + -1 < iVar3) {
              iVar3 = iVar8 + -1;
            }
            local_28[0] = local_28[0] - iVar3;
            local_28[1] = local_28[1] - iVar3;
            local_28[2] = local_28[2] - iVar3;
            local_28[3] = local_28[3] - iVar3;
          }
          else {
            local_28[0] = 0xfffffffe;
            local_28[1] = -1;
            local_28[2] = 0;
            local_28[3] = 1;
          }
          local_90 = iVar3;
          if ((int)local_2c < 4) {
            iVar8 = 4 - local_2c;
            if (local_2c != 0) goto LAB_00444007;
          }
          else {
            local_2c = 4;
            local_58 = 0;
            iVar8 = 0;
LAB_00444007:
            local_28[0] = (local_28[0] + iVar3) * 4;
            local_28[1] = (local_28[1] + iVar3) * 4;
            local_28[2] = (local_28[2] + iVar3) * 4;
            local_28[3] = (local_28[3] + iVar3) * 4;
            if (0 < (int)local_2c) {
              local_8 = local_b8[2];
              iVar3 = local_b8[3];
              local_28[4] = local_b8[1];
              local_c = *local_b8;
              local_34 = local_28 + iVar8;
              local_14 = local_58;
              local_48 = local_2c;
              do {
                iVar2 = local_64;
                uVar4 = *local_34;
                uVar9 = local_14 & 3;
                iVar8 = (uint)*(byte *)(uVar4 + local_64) * local_8 +
                        *(byte *)(uVar4 + local_68) * local_28[4] +
                        (uint)*(byte *)(uVar4 + local_6c) * local_c + 0x2000 +
                        (uint)*(byte *)(uVar4 + local_60) * iVar3;
                aiStack_10c[uVar9] = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar7 = local_64;
                iVar8 = (uint)*(byte *)(uVar4 + 1 + local_6c) * local_c +
                        (uint)*(byte *)(uVar4 + 1 + iVar2) * local_8 +
                        (uint)*(byte *)(uVar4 + 1 + local_60) * iVar3 + 0x2000 +
                        *(byte *)(uVar4 + 1 + local_68) * local_28[4];
                aiStack_fc[uVar9] = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar8 = (uint)*(byte *)(uVar4 + 2 + local_6c) * local_c +
                        (uint)*(byte *)(uVar4 + 2 + iVar7) * local_8 +
                        (uint)*(byte *)(uVar4 + 2 + local_60) * iVar3 + 0x2000 +
                        *(byte *)(uVar4 + 2 + local_68) * local_28[4];
                aiStack_ec[uVar9] = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar8 = (uint)*(byte *)(uVar4 + 3 + local_6c) * local_c +
                        (uint)*(byte *)(uVar4 + 3 + local_64) * local_8 +
                        (uint)*(byte *)(uVar4 + 3 + local_60) * iVar3 + 0x2000 +
                        *(byte *)(uVar4 + 3 + local_68) * local_28[4];
                aiStack_dc[uVar9] = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
                local_34 = local_34 + 1;
                local_14 = local_14 + 1;
                local_48 = local_48 + -1;
              } while (local_48 != 0);
            }
          }
          local_8 = local_c0[3];
          local_58 = local_58 + local_2c;
          local_c = local_c0[2];
          local_28[4] = local_c0[1];
          local_14 = *local_c0;
          uVar4 = local_58 & 3;
          uVar11 = local_58 + 1 & 3;
          local_34 = (uint *)(uVar4 * 4);
          uVar10 = local_58 - 2 & 3;
          uVar9 = local_58 - 1 & 3;
          iVar3 = aiStack_10c[uVar4] * local_14 + aiStack_10c[uVar11] * local_28[4] +
                  aiStack_10c[uVar10] * local_c + 0x2000 + aiStack_10c[uVar9] * local_8;
          local_2c = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar3 = aiStack_fc[uVar4] * local_14 + aiStack_fc[uVar11] * local_28[4] +
                  aiStack_fc[uVar10] * local_c + 0x2000 + aiStack_fc[uVar9] * local_8;
          local_48 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar3 = aiStack_ec[uVar4] * local_14 + aiStack_ec[uVar11] * local_28[4] +
                  aiStack_ec[uVar10] * local_c + 0x2000 + aiStack_ec[uVar9] * local_8;
          uVar6 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar3 = aiStack_dc[uVar4] * local_14 + aiStack_dc[uVar11] * local_28[4] +
                  aiStack_dc[uVar10] * local_c + 0x2000 + aiStack_dc[uVar9] * local_8;
          uVar4 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
          if (((((local_10 == local_5c) || (local_10 == local_4c + -1)) || (local_44 == local_74))
              || (local_44 == local_40 + -1)) && (in_stack_00000030 == 0)) {
            if (local_10 == local_5c) {
              local_14 = local_78;
            }
            else if (local_10 == local_4c + -1) {
              local_14 = local_9c;
            }
            else {
              local_14 = 0x4000;
            }
            local_c8 = (uint)((longlong)(int)local_14 * (longlong)local_38) >> 0xe |
                       (int)((ulonglong)((longlong)(int)local_14 * (longlong)local_38) >> 0x20) <<
                       0x12;
            iVar3 = local_c8 * 0xff;
            uVar9 = (int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe;
            _local_ac = CONCAT31(uStack_ab,(char)uVar9);
            if ((int)local_2c < 0) {
              local_2c = 0;
            }
            else if (0xff < (int)local_2c) {
              local_2c = 0xff;
            }
            bVar1 = local_3c[-2];
            _local_98 = CONCAT31(uStack_97,bVar1);
            uVar9 = uVar9 & 0xff;
            iVar3 = ((local_2c & 0xff) - (uint)bVar1) * uVar9;
            local_3c[-2] = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + bVar1;
            if ((int)local_48 < 0) {
              local_48 = 0;
            }
            else if (0xff < (int)local_48) {
              local_48 = 0xff;
            }
            bVar1 = local_3c[-1];
            _local_a0 = CONCAT31(uStack_9f,bVar1);
            iVar3 = ((local_48 & 0xff) - (uint)bVar1) * uVar9;
            local_3c[-1] = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + bVar1;
            if ((int)uVar6 < 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = 0xff;
              if ((int)uVar6 < 0x100) {
                uVar10 = uVar6;
              }
            }
            bVar1 = *local_3c;
            _local_cc = CONCAT31(uStack_cb,bVar1);
            iVar3 = ((uVar10 & 0xff) - (uint)bVar1) * uVar9;
            *local_3c = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + bVar1;
            if ((int)uVar4 < 0) {
              uVar4 = 0;
            }
            else if (0xff < (int)uVar4) {
              uVar4 = 0xff;
            }
            bVar1 = local_3c[1];
            _local_a4 = CONCAT31(uStack_a3,bVar1);
            iVar3 = ((uVar4 & 0xff) - (uint)bVar1) * uVar9;
            uVar9 = (uint)(byte)((char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + bVar1);
          }
          else {
            if ((int)local_2c < 0) {
              local_2c = 0;
            }
            else if (0xff < (int)local_2c) {
              local_2c = 0xff;
            }
            local_3c[-2] = (byte)local_2c;
            if ((int)local_48 < 0) {
              local_48 = 0;
            }
            else if (0xff < (int)local_48) {
              local_48 = 0xff;
            }
            local_3c[-1] = (byte)local_48;
            if ((int)uVar6 < 0) {
              uVar6 = 0;
            }
            else if (0xff < (int)uVar6) {
              uVar6 = 0xff;
            }
            *local_3c = (byte)uVar6;
            if ((int)uVar4 < 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = 0xff;
              if ((int)uVar4 < 0x100) {
                uVar9 = uVar4;
              }
            }
          }
          local_3c[1] = (byte)uVar9;
          if (local_10 == local_5c) {
            local_c4 = (uint)((longlong)local_78 * (longlong)(int)local_70) >> 0xe |
                       (int)((ulonglong)((longlong)local_78 * (longlong)(int)local_70) >> 0x20) <<
                       0x12;
            local_bc = local_c4;
          }
          else {
            local_bc = local_70;
            if (local_10 == local_4c + -2) {
              local_bc = (uint)((longlong)local_9c * (longlong)(int)local_70) >> 0xe |
                         (int)((ulonglong)((longlong)local_9c * (longlong)(int)local_70) >> 0x20) <<
                         0x12;
            }
          }
          local_30 = local_30 + local_bc;
          local_10 = local_10 + 1;
          local_3c = local_3c + 4;
        } while (local_10 < local_4c);
      }
      if (local_44 == local_74) {
        local_a8 = (uint)((longlong)local_7c * (longlong)(int)local_54) >> 0xe |
                   (int)((ulonglong)((longlong)local_7c * (longlong)(int)local_54) >> 0x20) << 0x12;
        local_b0 = local_a8;
      }
      else {
        local_b0 = local_54;
        if (local_44 == local_40 + -2) {
          local_b0 = (uint)((longlong)local_94 * (longlong)(int)local_54) >> 0xe |
                     (int)((ulonglong)((longlong)local_94 * (longlong)(int)local_54) >> 0x20) <<
                     0x12;
        }
      }
      local_50 = local_50 + local_b0;
      local_44 = local_44 + 1;
    } while (local_44 < local_40);
  }
  return;
}



/* Module: aviplug.dll
   Function: FUN_5f9a58b0
   Address: 5f9a58b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9a58b0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  int *in_stack_00000018;
  int in_stack_00000028;
  int in_stack_00000030;
  float afStack_e0 [4];
  float afStack_d0 [4];
  float afStack_c0 [4];
  float afStack_b0 [4];
  int local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
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
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  float local_38;
  int local_34;
  uint local_30;
  uint local_2c [4];
  float *local_1c;
  float local_18;
  uint local_14;
  float local_10;
  float local_c;
  uint *local_8;
  
  local_48 = *(uint *)(in_stack_00000028 + 0x68);
  local_44 = *(uint *)(in_stack_00000028 + 0x6c);
  iVar5 = *(int *)(in_stack_00000028 + 0x18);
  local_8c = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (iVar5 - 1U | 0x3fff) + 1;
  iVar9 = *(int *)(in_stack_00000028 + 0x1c);
  local_4c = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
  local_60 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (iVar9 - 1U | 0x3fff) + 1;
  local_34 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
  local_74 = (local_60 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  local_88 = iVar9 + local_34 * -0x4000 + 0x4000;
  local_78 = (local_8c + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_84 = iVar5 + local_4c * -0x4000 + 0x4000;
  if (local_4c - local_8c < 2) {
    local_78 = iVar5 - *(int *)(in_stack_00000028 + 0x10);
  }
  if (local_34 - local_60 < 2) {
    local_74 = iVar9 - *(int *)(in_stack_00000028 + 0x14);
  }
  local_40 = local_60;
  local_3c = (int)*(uint *)(in_stack_00000028 + 0x6c) / 2 + 0x2000 +
             *(int *)(in_stack_00000028 + 0x44);
  if (local_60 < local_34) {
    local_a0 = (int)*(uint *)(in_stack_00000028 + 0x68) / 2;
    do {
      iVar5 = (int)(local_3c + ((int)local_3c >> 0x1f & 0x3fffU)) >> 0xe;
      local_30 = local_a0 + 0x2000 + *(int *)(in_stack_00000028 + 0x40);
      uVar6 = local_3c & 0x80003fff;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xffffc000) + 1;
      }
      iVar7 = (int)uVar6 >> 2;
      iVar4 = in_stack_00000018[1];
      iVar9 = iVar5 + -2;
      pfVar8 = (float *)(&DAT_5f9f5e54 + iVar7 * 4);
      if (iVar9 < 0) {
        local_5c = 0;
      }
      else {
        local_5c = iVar4 + -1;
        if (iVar9 <= iVar4 + -1) {
          local_5c = iVar9;
        }
      }
      iVar9 = iVar5 + -1;
      if (iVar9 < 0) {
        local_58 = 0;
      }
      else {
        local_58 = iVar4 + -1;
        if (iVar9 <= iVar4 + -1) {
          local_58 = iVar9;
        }
      }
      if (iVar5 < 0) {
        local_54 = 0;
      }
      else {
        local_54 = iVar4 + -1;
        if (iVar5 <= iVar4 + -1) {
          local_54 = iVar5;
        }
      }
      iVar9 = iVar5 + 1;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (iVar4 + -1 < iVar9) {
        iVar9 = iVar4 + -1;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (iVar4 + -1 < iVar5) {
        iVar5 = iVar4 + -1;
      }
      local_58 = local_58 - iVar5;
      local_50 = iVar9 - iVar5;
      local_54 = local_54 - iVar5;
      iVar4 = *(int *)(in_stack_00000028 + 0x38);
      local_80 = -100;
      iVar10 = iVar4 * iVar5 + *(int *)(in_stack_00000028 + 0x34);
      local_6c = iVar4 * local_58 + iVar10;
      local_64 = iVar4 * (iVar9 - iVar5) + iVar10;
      local_14 = 0;
      local_70 = iVar4 * (local_5c - iVar5) + iVar10;
      local_68 = iVar4 * local_54 + iVar10;
      if (local_40 == local_60) {
        local_38 = (float)local_74 * _DAT_5f9e790c;
      }
      else if (local_40 == local_34 + -1) {
        local_38 = (float)local_88 * _DAT_5f9e790c;
      }
      else {
        local_38 = 1.0;
      }
      local_7c = local_8c;
      if (local_8c < local_4c) {
        local_1c = (float *)(local_8c * 0x10 + 8 +
                            local_40 * *(int *)(in_stack_00000028 + 8) +
                            *(int *)(in_stack_00000028 + 4));
        do {
          iVar5 = local_70;
          local_c = (float)((int)(local_30 + ((int)local_30 >> 0x1f & 0x3fffU)) >> 0xe);
          local_10 = (float)((int)local_c - local_80);
          uVar6 = local_30 & 0x80003fff;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xffffc000) + 1;
          }
          uVar12 = (int)local_c - 2;
          iVar4 = (int)uVar6 >> 2;
          iVar9 = *in_stack_00000018;
          pfVar13 = (float *)(&DAT_5f9f5e54 + iVar4 * 4);
          if ((int)((iVar9 - (int)local_c) - 2U | uVar12) < 0) {
            if ((int)uVar12 < 0) {
              local_2c[0] = 0;
            }
            else {
              local_2c[0] = iVar9 - 1U;
              if ((int)uVar12 <= (int)(iVar9 - 1U)) {
                local_2c[0] = uVar12;
              }
            }
            iVar10 = (int)local_c + -1;
            if (iVar10 < 0) {
              local_2c[1] = 0;
            }
            else {
              local_2c[1] = iVar9 + -1;
              if (iVar10 <= iVar9 + -1) {
                local_2c[1] = iVar10;
              }
            }
            if ((int)local_c < 0) {
              local_2c[2] = 0;
            }
            else {
              local_2c[2] = iVar9 + -1;
              if ((int)local_c <= iVar9 + -1) {
                local_2c[2] = (uint)local_c;
              }
            }
            iVar10 = (int)local_c + 1;
            if (iVar10 < 0) {
              local_2c[3] = 0;
            }
            else {
              local_2c[3] = iVar9 + -1;
              if (iVar10 <= iVar9 + -1) {
                local_2c[3] = iVar10;
              }
            }
            if ((int)local_c < 0) {
              local_c = (float)0;
            }
            else if (iVar9 + -1 < (int)local_c) {
              local_c = (float)(iVar9 + -1);
            }
            local_2c[0] = local_2c[0] - (int)local_c;
            local_2c[1] = local_2c[1] - (int)local_c;
            local_2c[2] = local_2c[2] - (int)local_c;
            local_2c[3] = local_2c[3] - (int)local_c;
          }
          else {
            local_2c[0] = 0xfffffffe;
            local_2c[1] = -1;
            local_2c[2] = 0;
            local_2c[3] = 1;
          }
          local_80 = (int)local_c;
          if ((int)local_10 < 4) {
            local_8 = (uint *)(4 - (int)local_10);
            if (local_10 != 0.0) goto LAB_5f9a5cb4;
          }
          else {
            local_10 = 5.60519e-45;
            local_14 = 0;
            local_8 = (uint *)0x0;
LAB_5f9a5cb4:
            local_2c[0] = (local_2c[0] + (int)local_c) * 0x10;
            local_2c[1] = (local_2c[1] + (int)local_c) * 0x10;
            local_2c[2] = (local_2c[2] + (int)local_c) * 0x10;
            local_2c[3] = (local_2c[3] + (int)local_c) * 0x10;
          }
          if (0 < (int)local_10) {
            local_8 = local_2c + (int)local_8;
            uVar6 = local_14;
            local_18 = (float)local_14;
            local_c = local_10;
            do {
              iVar9 = local_64;
              uVar12 = *local_8;
              uVar11 = uVar6 & 3;
              afStack_e0[uVar11] =
                   *(float *)(uVar12 + local_64) * (float)(&DAT_5f9f5e60)[iVar7 * 4] +
                   *(float *)(uVar12 + local_68) * (float)(&DAT_5f9f5e5c)[iVar7 * 4] +
                   (float)(&DAT_5f9f5e58)[iVar7 * 4] * *(float *)(uVar12 + local_6c) +
                   *pfVar8 * *(float *)(uVar12 + iVar5);
              iVar10 = local_64;
              afStack_d0[uVar11] =
                   *(float *)(uVar12 + 4 + local_68) * (float)(&DAT_5f9f5e5c)[iVar7 * 4] +
                   *(float *)(uVar12 + 4 + local_6c) * (float)(&DAT_5f9f5e58)[iVar7 * 4] +
                   *(float *)(uVar12 + 4 + iVar9) * (float)(&DAT_5f9f5e60)[iVar7 * 4] +
                   *(float *)(uVar12 + 4 + iVar5) * *pfVar8;
              iVar9 = local_64;
              afStack_c0[uVar11] =
                   *(float *)(uVar12 + 8 + local_68) * (float)(&DAT_5f9f5e5c)[iVar7 * 4] +
                   *(float *)(uVar12 + 8 + local_6c) * (float)(&DAT_5f9f5e58)[iVar7 * 4] +
                   *(float *)(uVar12 + 8 + iVar10) * (float)(&DAT_5f9f5e60)[iVar7 * 4] +
                   *(float *)(uVar12 + 8 + iVar5) * *pfVar8;
              local_8 = local_8 + 1;
              uVar6 = (int)local_18 + 1;
              iVar10 = (int)local_c + -1;
              local_18 = (float)uVar6;
              local_c = (float)iVar10;
              afStack_b0[uVar11] =
                   *(float *)(uVar12 + 0xc + local_68) * (float)(&DAT_5f9f5e5c)[iVar7 * 4] +
                   *(float *)(uVar12 + 0xc + local_6c) * (float)(&DAT_5f9f5e58)[iVar7 * 4] +
                   *(float *)(uVar12 + 0xc + iVar9) * (float)(&DAT_5f9f5e60)[iVar7 * 4] +
                   *(float *)(uVar12 + 0xc + iVar5) * *pfVar8;
            } while (iVar10 != 0);
          }
          local_14 = local_14 + (int)local_10;
          uVar11 = local_14 & 3;
          uVar14 = local_14 + 1 & 3;
          uVar12 = local_14 - 2 & 3;
          uVar6 = local_14 - 1 & 3;
          local_c = afStack_e0[uVar6] * (float)(&DAT_5f9f5e60)[iVar4 * 4] +
                    afStack_e0[uVar12] * (float)(&DAT_5f9f5e5c)[iVar4 * 4] +
                    afStack_e0[uVar14] * (float)(&DAT_5f9f5e58)[iVar4 * 4] +
                    afStack_e0[uVar11] * *pfVar13;
          local_18 = afStack_d0[uVar6] * (float)(&DAT_5f9f5e60)[iVar4 * 4] +
                     afStack_d0[uVar12] * (float)(&DAT_5f9f5e5c)[iVar4 * 4] +
                     afStack_d0[uVar14] * (float)(&DAT_5f9f5e58)[iVar4 * 4] +
                     afStack_d0[uVar11] * *pfVar13;
          local_10 = afStack_c0[uVar6] * (float)(&DAT_5f9f5e60)[iVar4 * 4] +
                     afStack_c0[uVar12] * (float)(&DAT_5f9f5e5c)[iVar4 * 4] +
                     afStack_c0[uVar14] * (float)(&DAT_5f9f5e58)[iVar4 * 4] +
                     afStack_c0[uVar11] * *pfVar13;
          fVar1 = afStack_b0[uVar6] * (float)(&DAT_5f9f5e60)[iVar4 * 4] +
                  afStack_b0[uVar12] * (float)(&DAT_5f9f5e5c)[iVar4 * 4] +
                  afStack_b0[uVar14] * (float)(&DAT_5f9f5e58)[iVar4 * 4] +
                  afStack_b0[uVar11] * *pfVar13;
          if (((((local_7c == local_8c) || (local_7c == local_4c + -1)) || (local_40 == local_60))
              || (local_40 == local_34 + -1)) && (in_stack_00000030 == 0)) {
            if (local_7c == local_8c) {
              fVar2 = (float)local_78 * _DAT_5f9e790c;
            }
            else {
              fVar2 = _DAT_5f9e7904;
              if (local_7c == local_4c + -1) {
                fVar2 = (float)local_84 * _DAT_5f9e790c;
              }
            }
            fVar2 = fVar2 * local_38;
            fVar3 = _DAT_5f9e7908;
            if ((_DAT_5f9e7908 <= local_c) && (fVar3 = local_c, _DAT_5f9e7904 < local_c)) {
              fVar3 = _DAT_5f9e7904;
            }
            local_1c[-2] = fVar2 * (fVar3 - local_1c[-2]) + local_1c[-2];
            fVar3 = _DAT_5f9e7908;
            if ((_DAT_5f9e7908 <= local_18) && (fVar3 = local_18, _DAT_5f9e7904 < local_18)) {
              fVar3 = _DAT_5f9e7904;
            }
            local_1c[-1] = fVar2 * (fVar3 - local_1c[-1]) + local_1c[-1];
            fVar3 = _DAT_5f9e7908;
            if ((_DAT_5f9e7908 <= local_10) && (fVar3 = local_10, _DAT_5f9e7904 < local_10)) {
              fVar3 = _DAT_5f9e7904;
            }
            *local_1c = fVar2 * (fVar3 - *local_1c) + *local_1c;
            fVar3 = _DAT_5f9e7908;
            if ((_DAT_5f9e7908 <= fVar1) && (fVar3 = fVar1, _DAT_5f9e7904 < fVar1)) {
              fVar3 = _DAT_5f9e7904;
            }
            local_1c[1] = fVar2 * (fVar3 - local_1c[1]) + local_1c[1];
          }
          else {
            fVar2 = _DAT_5f9e7908;
            if ((_DAT_5f9e7908 <= local_c) && (fVar2 = local_c, _DAT_5f9e7904 < local_c)) {
              fVar2 = _DAT_5f9e7904;
            }
            local_1c[-2] = fVar2;
            fVar2 = _DAT_5f9e7908;
            if ((_DAT_5f9e7908 <= local_18) && (fVar2 = local_18, _DAT_5f9e7904 < local_18)) {
              fVar2 = _DAT_5f9e7904;
            }
            local_1c[-1] = fVar2;
            fVar2 = _DAT_5f9e7908;
            if ((_DAT_5f9e7908 <= local_10) && (fVar2 = local_10, _DAT_5f9e7904 < local_10)) {
              fVar2 = _DAT_5f9e7904;
            }
            *local_1c = fVar2;
            fVar2 = _DAT_5f9e7908;
            if ((_DAT_5f9e7908 <= fVar1) && (fVar2 = fVar1, _DAT_5f9e7904 < fVar1)) {
              fVar2 = _DAT_5f9e7904;
            }
            local_1c[1] = fVar2;
          }
          if (local_7c == local_8c) {
            local_90 = (uint)((longlong)local_78 * (longlong)(int)local_48) >> 0xe |
                       (int)((ulonglong)((longlong)local_78 * (longlong)(int)local_48) >> 0x20) <<
                       0x12;
            local_94 = local_90;
          }
          else {
            local_94 = local_48;
            if (local_7c == local_4c + -2) {
              local_94 = (uint)((longlong)local_84 * (longlong)(int)local_48) >> 0xe |
                         (int)((ulonglong)((longlong)local_84 * (longlong)(int)local_48) >> 0x20) <<
                         0x12;
            }
          }
          local_30 = local_30 + local_94;
          local_7c = local_7c + 1;
          local_1c = local_1c + 4;
        } while (local_7c < local_4c);
      }
      if (local_40 == local_60) {
        local_9c = (uint)((longlong)local_74 * (longlong)(int)local_44) >> 0xe |
                   (int)((ulonglong)((longlong)local_74 * (longlong)(int)local_44) >> 0x20) << 0x12;
        local_98 = local_9c;
      }
      else {
        local_98 = local_44;
        if (local_40 == local_34 + -2) {
          local_98 = (uint)((longlong)local_88 * (longlong)(int)local_44) >> 0xe |
                     (int)((ulonglong)((longlong)local_88 * (longlong)(int)local_44) >> 0x20) <<
                     0x12;
        }
      }
      local_3c = local_3c + local_98;
      local_40 = local_40 + 1;
    } while (local_40 < local_34);
  }
  return;
}



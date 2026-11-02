/* Module: sftrans1.dll
   Function: FUN_00512180
   Address: 00512180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00512180(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int *in_stack_00000018;
  int in_stack_00000028;
  int in_stack_00000030;
  uint local_15c;
  uint local_134;
  uint local_104;
  uint local_fc;
  int local_ac [7];
  int local_90;
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
  int local_54 [4];
  byte *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  byte bStack_11;
  int local_c;
  int local_8;
  
  iVar3 = *(int *)(in_stack_00000028 + 0x68);
  local_68 = *(int *)(in_stack_00000028 + 0x6c);
  uVar16 = *(uint *)(in_stack_00000028 + 0x10);
  local_58 = iVar3;
  iVar4 = *(int *)(in_stack_00000028 + 0x18);
  iVar19 = (int)((uVar16 & 0xffffc000) + ((int)uVar16 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar4 - 1U | 0x3fff) + 1;
  iVar9 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  local_40 = iVar9;
  iVar8 = *(int *)(in_stack_00000028 + 0x1c);
  local_1c = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (iVar8 - 1U | 0x3fff) + 1;
  local_6c = (iVar19 + 1) * 0x4000 - uVar16;
  local_2c = (local_1c + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
  if (iVar10 - local_1c < 2) {
    local_2c = iVar8 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (iVar9 - iVar19 < 2) {
    local_6c = iVar4 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_20 = *(uint *)(in_stack_00000028 + 0x44);
  if (local_1c < iVar10) {
    do {
      local_34 = *(int *)(in_stack_00000028 + 0x40) + 0x2000 + iVar3 / 2;
      local_28 = local_6c;
      lVar7 = (longlong)local_2c * (longlong)*(int *)(in_stack_00000028 + 0x6c);
      local_3c = (uint)lVar7 >> 0xe | (int)((ulonglong)lVar7 >> 0x20) << 0x12;
      iVar20 = (int)((local_20 & 0xffffc000) + ((int)local_20 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar11 = ((local_3c - 1) + local_20 | 0x3fff) + 1;
      local_5c = iVar20;
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
      local_30 = (iVar20 + 1) * 0x4000 - local_20;
      local_38 = local_3c + iVar11 * -0x4000 + 0x4000 + local_20;
      if (iVar11 - iVar20 < 2) {
        local_30 = local_3c;
      }
      local_24 = iVar19;
      local_44 = (byte *)(*(int *)(in_stack_00000028 + 8) * local_1c +
                          *(int *)(in_stack_00000028 + 4) + iVar19 * 4);
      if (iVar19 < local_40) {
        do {
          lVar7 = (longlong)local_28;
          lVar6 = (longlong)local_58;
          iVar12 = (int)(local_34 + ((int)local_34 >> 0x1f & 0x3fffU)) >> 0xe;
          uVar16 = local_34 & 0x80003fff;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xffffc000) + 1;
          }
          iVar17 = (int)uVar16 >> 2;
          iVar5 = *in_stack_00000018;
          iVar14 = iVar12 + -2;
          piVar18 = &DAT_0060c6d0 + iVar17 * 4;
          if (iVar14 < 0) {
            local_54[0] = 0;
          }
          else {
            local_54[0] = iVar5 + -1;
            if (iVar14 <= iVar5 + -1) {
              local_54[0] = iVar14;
            }
          }
          iVar14 = iVar12 + -1;
          if (iVar14 < 0) {
            local_54[1] = 0;
          }
          else {
            local_54[1] = iVar5 + -1;
            if (iVar14 <= iVar5 + -1) {
              local_54[1] = iVar14;
            }
          }
          if (iVar12 < 0) {
            local_54[2] = 0;
          }
          else {
            local_54[2] = iVar5 + -1;
            if (iVar12 <= iVar5 + -1) {
              local_54[2] = iVar12;
            }
          }
          iVar14 = iVar12 + 1;
          if (iVar14 < 0) {
            iVar14 = 0;
          }
          else if (iVar5 + -1 < iVar14) {
            iVar14 = iVar5 + -1;
          }
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          else if (iVar5 + -1 < iVar12) {
            iVar12 = iVar5 + -1;
          }
          local_54[0] = local_54[0] - iVar12;
          local_54[1] = local_54[1] - iVar12;
          local_54[2] = local_54[2] - iVar12;
          local_54[3] = iVar14 - iVar12;
          piVar13 = local_ac;
          for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
          local_64 = *(int *)(in_stack_00000028 + 0x38);
          local_8 = *(int *)(in_stack_00000028 + 0x34);
          local_c = *(int *)(in_stack_00000028 + 0x38) * local_5c;
          piVar13 = local_ac + 1;
          local_18 = local_54;
          local_60 = 4;
          do {
            iVar14 = local_8 + (*local_18 + iVar12) * 4;
            pbVar15 = (byte *)(iVar14 + local_c);
            bVar1 = pbVar15[1];
            piVar13[-1] = piVar13[-1] + *(byte *)(iVar14 + local_c) * local_30;
            bVar2 = pbVar15[2];
            *piVar13 = *piVar13 + bVar1 * local_30;
            bVar1 = pbVar15[3];
            piVar13[1] = piVar13[1] + bVar2 * local_30;
            piVar13[2] = piVar13[2] + bVar1 * local_30;
            if (local_5c + 1 < iVar11 + -1) {
              iVar14 = (iVar11 + -1) - (local_5c + 1);
              do {
                pbVar15 = pbVar15 + local_64;
                piVar13[-1] = piVar13[-1] + (uint)*pbVar15 * 0x4000;
                *piVar13 = *piVar13 + (uint)pbVar15[1] * 0x4000;
                piVar13[1] = piVar13[1] + (uint)pbVar15[2] * 0x4000;
                piVar13[2] = piVar13[2] + (uint)pbVar15[3] * 0x4000;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
            if (1 < iVar11 - iVar20) {
              pbVar15 = pbVar15 + local_64;
              bVar1 = pbVar15[1];
              piVar13[-1] = piVar13[-1] + (uint)*pbVar15 * local_38;
              bVar2 = pbVar15[2];
              *piVar13 = *piVar13 + (uint)bVar1 * local_38;
              bVar1 = pbVar15[3];
              piVar13[1] = piVar13[1] + (uint)bVar2 * local_38;
              piVar13[2] = piVar13[2] + (uint)bVar1 * local_38;
            }
            piVar13 = piVar13 + 4;
            local_60 = local_60 + -1;
            local_18 = local_18 + 1;
          } while (local_60 != 0);
          if (((local_28 == 0x4000) && (local_2c == 0x4000)) || (in_stack_00000030 != 0)) {
            iVar12 = (int)(((uint)((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] * (longlong)local_7c)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] *
                                           (longlong)local_7c) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] * (longlong)local_8c)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] *
                                           (longlong)local_8c) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] *
                                  (longlong)local_ac[4]) >> 0xe |
                           (int)((ulonglong)
                                 ((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] * (longlong)local_ac[4]
                                 ) >> 0x20) << 0x12) + 0x2000 +
                          ((uint)((longlong)*piVar18 * (longlong)local_ac[0]) >> 0xe |
                          (int)((ulonglong)((longlong)*piVar18 * (longlong)local_ac[0]) >> 0x20) <<
                          0x12)) / local_68;
            if (iVar12 < 0) {
              iVar12 = 0;
            }
            else if (0xff < iVar12) {
              iVar12 = 0xff;
            }
            *local_44 = (byte)iVar12;
            iVar12 = (int)(((uint)((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] * (longlong)local_78)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] *
                                           (longlong)local_78) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] * (longlong)local_88)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] *
                                           (longlong)local_88) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] *
                                  (longlong)local_ac[5]) >> 0xe |
                           (int)((ulonglong)
                                 ((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] * (longlong)local_ac[5]
                                 ) >> 0x20) << 0x12) + 0x2000 +
                          ((uint)((longlong)*piVar18 * (longlong)local_ac[1]) >> 0xe |
                          (int)((ulonglong)((longlong)*piVar18 * (longlong)local_ac[1]) >> 0x20) <<
                          0x12)) / local_68;
            if (iVar12 < 0) {
              iVar12 = 0;
            }
            else if (0xff < iVar12) {
              iVar12 = 0xff;
            }
            local_44[1] = (byte)iVar12;
            iVar12 = (int)(((uint)((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] * (longlong)local_74)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] *
                                           (longlong)local_74) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] * (longlong)local_84)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] *
                                           (longlong)local_84) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] *
                                  (longlong)local_ac[6]) >> 0xe |
                           (int)((ulonglong)
                                 ((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] * (longlong)local_ac[6]
                                 ) >> 0x20) << 0x12) + 0x2000 +
                          ((uint)((longlong)*piVar18 * (longlong)local_ac[2]) >> 0xe |
                          (int)((ulonglong)((longlong)*piVar18 * (longlong)local_ac[2]) >> 0x20) <<
                          0x12)) / local_68;
            if (iVar12 < 0) {
              iVar12 = 0;
            }
            else if (0xff < iVar12) {
              iVar12 = 0xff;
            }
            local_44[2] = (byte)iVar12;
            iVar12 = (int)(((uint)((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] * (longlong)local_70)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] *
                                           (longlong)local_70) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] * (longlong)local_80)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] *
                                           (longlong)local_80) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] * (longlong)local_90)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] *
                                           (longlong)local_90) >> 0x20) << 0x12) + 0x2000 +
                          ((uint)((longlong)*piVar18 * (longlong)local_ac[3]) >> 0xe |
                          (int)((ulonglong)((longlong)*piVar18 * (longlong)local_ac[3]) >> 0x20) <<
                          0x12)) / local_68;
            if (iVar12 < 0) {
              local_44[3] = 0;
            }
            else {
              if (0xff < iVar12) {
                iVar12 = 0xff;
              }
              local_44[3] = (byte)iVar12;
            }
          }
          else if (0 < (int)local_3c) {
            iVar12 = ((uint)((longlong)local_28 * (longlong)local_2c) >> 0xe |
                     (int)((ulonglong)((longlong)local_28 * (longlong)local_2c) >> 0x20) << 0x12) *
                     0xff;
            iVar14 = (int)(((uint)((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] * (longlong)local_7c)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] *
                                           (longlong)local_7c) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] * (longlong)local_8c)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] *
                                           (longlong)local_8c) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] *
                                  (longlong)local_ac[4]) >> 0xe |
                           (int)((ulonglong)
                                 ((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] * (longlong)local_ac[4]
                                 ) >> 0x20) << 0x12) + 0x2000 +
                          ((uint)((longlong)*piVar18 * (longlong)local_ac[0]) >> 0xe |
                          (int)((ulonglong)((longlong)*piVar18 * (longlong)local_ac[0]) >> 0x20) <<
                          0x12)) / (int)local_3c;
            if (iVar14 < 0) {
              local_14 = 0;
            }
            else {
              local_14 = 0xff;
              if (iVar14 < 0x100) {
                local_14 = (char)iVar14;
              }
            }
            iVar14 = (int)(((uint)((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] * (longlong)local_78)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] *
                                           (longlong)local_78) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] * (longlong)local_88)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] *
                                           (longlong)local_88) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] *
                                  (longlong)local_ac[5]) >> 0xe |
                           (int)((ulonglong)
                                 ((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] * (longlong)local_ac[5]
                                 ) >> 0x20) << 0x12) + 0x2000 +
                          ((uint)((longlong)*piVar18 * (longlong)local_ac[1]) >> 0xe |
                          (int)((ulonglong)((longlong)*piVar18 * (longlong)local_ac[1]) >> 0x20) <<
                          0x12)) / (int)local_3c;
            if (iVar14 < 0) {
              uStack_13 = 0;
            }
            else {
              uStack_13 = 0xff;
              if (iVar14 < 0x100) {
                uStack_13 = (char)iVar14;
              }
            }
            iVar14 = (int)(((uint)((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] * (longlong)local_74)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] *
                                           (longlong)local_74) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] * (longlong)local_84)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] *
                                           (longlong)local_84) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] *
                                  (longlong)local_ac[6]) >> 0xe |
                           (int)((ulonglong)
                                 ((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] * (longlong)local_ac[6]
                                 ) >> 0x20) << 0x12) + 0x2000 +
                          ((uint)((longlong)*piVar18 * (longlong)local_ac[2]) >> 0xe |
                          (int)((ulonglong)((longlong)*piVar18 * (longlong)local_ac[2]) >> 0x20) <<
                          0x12)) / (int)local_3c;
            if (iVar14 < 0) {
              uStack_12 = 0;
            }
            else {
              uStack_12 = 0xff;
              if (iVar14 < 0x100) {
                uStack_12 = (char)iVar14;
              }
            }
            iVar14 = (int)(((uint)((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] * (longlong)local_70)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6dc)[iVar17 * 4] *
                                           (longlong)local_70) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] * (longlong)local_80)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d8)[iVar17 * 4] *
                                           (longlong)local_80) >> 0x20) << 0x12) +
                           ((uint)((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] * (longlong)local_90)
                            >> 0xe | (int)((ulonglong)
                                           ((longlong)(int)(&DAT_0060c6d4)[iVar17 * 4] *
                                           (longlong)local_90) >> 0x20) << 0x12) + 0x2000 +
                          ((uint)((longlong)*piVar18 * (longlong)local_ac[3]) >> 0xe |
                          (int)((ulonglong)((longlong)*piVar18 * (longlong)local_ac[3]) >> 0x20) <<
                          0x12)) / (int)local_3c;
            if (iVar14 < 0) {
              bStack_11 = 0;
            }
            else {
              bStack_11 = 0xff;
              if (iVar14 < 0x100) {
                bStack_11 = (byte)iVar14;
              }
            }
            uVar16 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
            local_fc = (uint)*local_44;
            iVar12 = ((CONCAT12(uStack_12,CONCAT11(uStack_13,local_14)) & 0xff) - local_fc) * uVar16
            ;
            local_134 = (uint)local_44[1];
            *local_44 = (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8) + *local_44;
            iVar12 = ((CONCAT12(bStack_11,CONCAT11(uStack_12,uStack_13)) & 0xff) - local_134) *
                     uVar16;
            local_104 = (uint)local_44[2];
            local_44[1] = (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8) + local_44[1];
            iVar12 = ((CONCAT11(bStack_11,uStack_12) & 0xff) - local_104) * uVar16;
            local_15c = (uint)local_44[3];
            local_44[2] = (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8) + local_44[2];
            iVar12 = (bStack_11 - local_15c) * uVar16;
            local_44[3] = (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8) + local_44[3];
          }
          local_44 = local_44 + 4;
          if (local_24 == local_40 + -2) {
            local_34 = local_34 +
                       ((uint)((longlong)local_28 * (longlong)local_58) >> 0xe |
                       (int)((ulonglong)((longlong)local_28 * (longlong)local_58) >> 0x20) << 0x12);
            local_28 = iVar4 + iVar9 * -0x4000 + 0x4000;
          }
          else {
            local_34 = local_34 +
                       ((uint)(lVar7 * lVar6) >> 0xe |
                       (int)((ulonglong)(lVar7 * lVar6) >> 0x20) << 0x12);
            local_28 = 0x4000;
          }
          local_24 = local_24 + 1;
        } while (local_24 < local_40);
      }
      if (local_1c == iVar10 + -2) {
        local_20 = local_20 +
                   ((uint)((longlong)local_2c * (longlong)local_68) >> 0xe |
                   (int)((ulonglong)((longlong)local_2c * (longlong)local_68) >> 0x20) << 0x12);
        local_2c = iVar8 + iVar10 * -0x4000 + 0x4000;
      }
      else {
        local_2c = 0x4000;
        local_20 = local_20 + local_3c;
      }
      local_1c = local_1c + 1;
    } while (local_1c < iVar10);
  }
  return;
}



/* Module: aviplug.dll
   Function: FUN_5f9b1930
   Address: 5f9b1930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9b1930(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  int in_stack_00000028;
  int in_stack_00000030;
  int local_110 [5];
  uint local_fc;
  uint local_e4;
  uint local_c0;
  uint local_a8;
  int local_a4 [7];
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  byte *local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_c = *(int *)(in_stack_00000028 + 0x68);
  local_48 = *(int *)(in_stack_00000028 + 100);
  iVar3 = *(int *)(in_stack_00000028 + 0x18);
  iVar15 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (iVar3 - 1U | 0x3fff) + 1;
  iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  local_44 = iVar7;
  iVar6 = *(int *)(in_stack_00000028 + 0x1c);
  local_24 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar6 - 1U | 0x3fff) + 1;
  iVar12 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  local_7c = iVar12;
  iVar8 = (*(int *)(in_stack_00000028 + 0x4c) - 1U | 0x3fff) + 1;
  iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  local_40 = iVar8;
  local_50 = (iVar15 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_28 = (local_24 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  if (iVar12 - local_24 < 2) {
    local_28 = iVar6 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (iVar7 - iVar15 < 2) {
    local_50 = iVar3 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_20 = *(uint *)(in_stack_00000028 + 0x44);
  local_18 = local_28;
  if (local_24 < iVar12) {
    do {
      pbVar13 = (byte *)(*(int *)(in_stack_00000028 + 8) * local_24 +
                         *(int *)(in_stack_00000028 + 4) + iVar15 * 4);
      local_3c = *(uint *)(in_stack_00000028 + 0x40);
      local_64 = pbVar13;
      local_14 = local_50;
      if (iVar8 + -1 <= (int)(local_20 + ((int)local_20 >> 0x1f & 0x3fffU)) >> 0xe) {
        local_20 = (*(int *)(in_stack_00000028 + 0x4c) - 1U | 0x3fff) - 0x3fff;
      }
      local_8 = local_20 & 0x80003fff;
      if ((int)local_8 < 0) {
        local_8 = (local_8 - 1 | 0xffffc000) + 1;
      }
      local_2c = iVar15;
      if (iVar15 < local_44) {
        do {
          local_30 = (uint)((longlong)local_14 * (longlong)local_c) >> 0xe |
                     (int)((ulonglong)((longlong)local_14 * (longlong)local_c) >> 0x20) << 0x12;
          local_1c = local_30;
          iVar16 = (int)((local_3c & 0xffffc000) + ((int)local_3c >> 0x1f & 0x3fffU)) >> 0xe;
          iVar9 = ((local_30 - 1) + local_3c | 0x3fff) + 1;
          iVar9 = (int)((iVar9 >> 0x1f & 0x3fffU) + iVar9) >> 0xe;
          local_38 = (iVar16 + 1) * 0x4000 - local_3c;
          local_28 = local_30 + iVar9 * -0x4000 + 0x4000 + local_3c;
          if (iVar9 - iVar16 < 2) {
            local_38 = local_30;
          }
          piVar10 = local_a4;
          local_64 = pbVar13;
          for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
            *piVar10 = 0;
            piVar10 = piVar10 + 1;
          }
          local_74 = iVar9 + -1;
          local_10 = local_110;
          piVar10 = local_a4 + 1;
          local_84 = 2;
          do {
            iVar4 = *local_10;
            bVar1 = *(byte *)(iVar4 + 1 + iVar16 * 4);
            piVar10[-1] = piVar10[-1] + *(byte *)(iVar4 + iVar16 * 4) * local_38;
            bVar2 = *(byte *)(iVar4 + 2 + iVar16 * 4);
            *piVar10 = *piVar10 + bVar1 * local_38;
            bVar1 = *(byte *)(iVar4 + 3 + iVar16 * 4);
            piVar10[1] = piVar10[1] + bVar2 * local_38;
            iVar11 = iVar16 + 1;
            piVar10[2] = piVar10[2] + bVar1 * local_38;
            local_34 = iVar11;
            if (iVar11 < local_74) {
              iVar14 = local_74 - iVar11;
              local_34 = iVar11 + iVar14;
              pbVar18 = (byte *)(iVar4 + iVar11 * 4);
              do {
                piVar10[-1] = piVar10[-1] + (uint)*pbVar18 * 0x4000;
                *piVar10 = *piVar10 + (uint)pbVar18[1] * 0x4000;
                piVar10[1] = piVar10[1] + (uint)pbVar18[2] * 0x4000;
                piVar10[2] = piVar10[2] + (uint)pbVar18[3] * 0x4000;
                iVar14 = iVar14 + -1;
                pbVar13 = local_64;
                pbVar18 = pbVar18 + 4;
              } while (iVar14 != 0);
            }
            if (1 < iVar9 - iVar16) {
              piVar10[-1] = piVar10[-1] + (uint)*(byte *)(iVar4 + local_34 * 4) * local_28;
              *piVar10 = *piVar10 + (uint)*(byte *)(iVar4 + 1 + local_34 * 4) * local_28;
              piVar10[1] = piVar10[1] + (uint)*(byte *)(iVar4 + 2 + local_34 * 4) * local_28;
              piVar10[2] = piVar10[2] + (uint)*(byte *)(iVar4 + 3 + local_34 * 4) * local_28;
            }
            piVar10 = piVar10 + 4;
            local_84 = local_84 + -1;
            local_10 = local_10 + 1;
          } while (local_84 != 0);
          if (((local_14 == 0x4000) && (local_18 == 0x4000)) || (in_stack_00000030 != 0)) {
            lVar5 = (longlong)(int)local_8 * (longlong)local_a4[4] +
                    (longlong)(int)(0x4000 - local_8) * (longlong)local_a4[0];
            lVar5 = (longlong)
                    (ulonglong)((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) * 0x40000) /
                    (longlong)local_c;
            local_68 = (int)lVar5;
            local_68._0_1_ = (byte)lVar5;
            *pbVar13 = (byte)local_68;
            lVar5 = (longlong)(int)local_8 * (longlong)local_a4[5] +
                    (longlong)(int)(0x4000 - local_8) * (longlong)local_a4[1];
            lVar5 = (longlong)
                    (ulonglong)((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) * 0x40000) /
                    (longlong)local_c;
            local_78 = (int)lVar5;
            local_78._0_1_ = (byte)lVar5;
            pbVar13[1] = (byte)local_78;
            lVar5 = (longlong)(int)local_8 * (longlong)local_a4[6] +
                    (longlong)(int)(0x4000 - local_8) * (longlong)local_a4[2];
            lVar5 = (longlong)
                    (ulonglong)((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) * 0x40000) /
                    (longlong)local_c;
            local_4c = (int)lVar5;
            local_4c._0_1_ = (byte)lVar5;
            pbVar13[2] = (byte)local_4c;
            lVar5 = (longlong)(int)local_8 * (longlong)local_88 +
                    (longlong)(int)(0x4000 - local_8) * (longlong)local_a4[3];
            lVar5 = (longlong)
                    (ulonglong)((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) * 0x40000) /
                    (longlong)local_c;
            local_5c = (int)lVar5;
            local_5c._0_1_ = (byte)lVar5;
LAB_5f9b1ff4:
            pbVar13[3] = (byte)local_5c;
          }
          else if (0 < (int)local_30) {
            local_58 = (uint)((longlong)local_14 * (longlong)local_18) >> 0xe |
                       (int)((ulonglong)((longlong)local_14 * (longlong)local_18) >> 0x20) << 0x12;
            iVar9 = local_58 * 0xff;
            lVar5 = (longlong)(int)local_8 * (longlong)local_a4[4] +
                    (longlong)(int)(0x4000 - local_8) * (longlong)local_a4[0];
            local_54 = (uint)((longlong)
                              (ulonglong)
                              ((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) * 0x40000) /
                             (longlong)(int)local_1c);
            local_a8 = (uint)*pbVar13;
            uVar17 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
            iVar9 = ((local_54 & 0xff) - local_a8) * uVar17;
            *pbVar13 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + *pbVar13;
            lVar5 = (longlong)(int)local_8 * (longlong)local_a4[5] +
                    (longlong)(int)(0x4000 - local_8) * (longlong)local_a4[1];
            local_70 = (uint)((longlong)
                              (ulonglong)
                              ((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) * 0x40000) /
                             (longlong)(int)local_1c);
            local_e4 = (uint)pbVar13[1];
            iVar9 = ((local_70 & 0xff) - local_e4) * uVar17;
            pbVar13[1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar13[1];
            lVar5 = (longlong)(int)local_8 * (longlong)local_a4[6] +
                    (longlong)(int)(0x4000 - local_8) * (longlong)local_a4[2];
            local_60 = (uint)((longlong)
                              (ulonglong)
                              ((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) * 0x40000) /
                             (longlong)(int)local_1c);
            local_c0 = (uint)pbVar13[2];
            iVar9 = ((local_60 & 0xff) - local_c0) * uVar17;
            pbVar13[2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar13[2];
            lVar5 = (longlong)(int)local_8 * (longlong)local_88 +
                    (longlong)(int)(0x4000 - local_8) * (longlong)local_a4[3];
            local_80 = (uint)((longlong)
                              (ulonglong)
                              ((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) * 0x40000) /
                             (longlong)(int)local_1c);
            local_fc = (uint)pbVar13[3];
            iVar9 = ((local_80 & 0xff) - local_fc) * uVar17;
            local_5c._0_1_ = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar13[3];
            goto LAB_5f9b1ff4;
          }
          pbVar13 = pbVar13 + 4;
          local_64 = pbVar13;
          if (local_2c == local_44 + -2) {
            local_6c = (uint)((longlong)local_14 * (longlong)local_c) >> 0xe |
                       (int)((ulonglong)((longlong)local_14 * (longlong)local_c) >> 0x20) << 0x12;
            local_3c = local_3c + local_6c;
            local_14 = iVar3 + iVar7 * -0x4000 + 0x4000;
          }
          else {
            local_14 = 0x4000;
            local_3c = local_30 + local_3c;
          }
          local_2c = local_2c + 1;
        } while (local_2c < local_44);
      }
      if (local_24 == local_7c + -2) {
        local_40 = (uint)((longlong)local_18 * (longlong)local_48) >> 0xe |
                   (int)((ulonglong)((longlong)local_18 * (longlong)local_48) >> 0x20) << 0x12;
        local_20 = local_20 + local_40;
        local_18 = iVar6 + iVar12 * -0x4000 + 0x4000;
      }
      else {
        local_18 = 0x4000;
        local_20 = local_20 + local_48;
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_7c);
  }
  return;
}



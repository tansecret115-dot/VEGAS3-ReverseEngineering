/* Module: mcplugrw.dll
   Function: FUN_0045bd60
   Address: 0045bd60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045bd60(void)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  int in_stack_00000018;
  int in_stack_00000028;
  int in_stack_00000030;
  uint local_184 [4];
  uint local_174;
  int local_170;
  uint local_16c;
  int local_168;
  uint local_15c;
  int local_158;
  uint local_154;
  int local_150;
  uint local_14c;
  int local_148;
  uint local_144;
  int local_140;
  uint local_134;
  int local_130;
  uint local_12c;
  int local_128;
  uint local_124;
  int local_120;
  uint local_11c;
  int local_118;
  uint local_10c;
  int local_108;
  uint local_104;
  int local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  int local_f0;
  int local_e4;
  uint local_e0;
  int local_dc;
  byte local_d8;
  undefined3 uStack_d7;
  int local_d4;
  byte local_d0;
  undefined3 uStack_cf;
  int local_cc;
  byte local_c8;
  undefined3 uStack_c7;
  uint local_c4;
  byte local_c0;
  undefined3 uStack_bf;
  int local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  byte *local_7c [3];
  int local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  byte *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte **local_1c;
  byte *local_18;
  int local_14;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  byte bStack_d;
  byte *local_8;
  
  local_84 = *(uint *)(in_stack_00000028 + 0x68);
  local_80 = *(int *)(in_stack_00000028 + 0x6c);
  iVar13 = *(int *)(in_stack_00000028 + 0x18);
  local_ac = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (iVar13 - 1U | 0x3fff) + 1;
  local_38 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = *(int *)(in_stack_00000028 + 0x1c);
  local_28 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar4 - 1U | 0x3fff) + 1;
  local_a4 = (local_ac + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_bc = iVar13 + local_38 * -0x4000 + 0x4000;
  local_14 = (local_28 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  local_d4 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  local_e4 = iVar4 + local_d4 * -0x4000 + 0x4000;
  if (local_d4 - local_28 < 2) {
    local_14 = iVar4 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (local_38 - local_ac < 2) {
    local_a4 = iVar13 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_30 = *(int *)(in_stack_00000028 + 0x6c) / 2 + 0x2000 + *(int *)(in_stack_00000028 + 0x44);
  local_24 = local_14;
  if (local_28 < local_d4) {
    do {
      local_2c = *(uint *)(in_stack_00000028 + 0x40);
      local_20 = local_a4;
      local_40 = (byte *)((int)(local_30 + ((int)local_30 >> 0x1f & 0x3fffU)) >> 0xe);
      uVar12 = local_30 & 0x80003fff;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xffffc000) + 1;
      }
      local_18 = (byte *)(*(int *)(in_stack_00000028 + 8) * local_28 + local_ac * 4 +
                         *(int *)(in_stack_00000028 + 4));
      iVar13 = (int)uVar12 >> 2;
      local_8 = *(byte **)(in_stack_00000018 + 4);
      pbVar9 = local_40 + -2;
      puVar14 = &DAT_004bee08 + iVar13 * 4;
      if ((int)pbVar9 < 0) {
        local_7c[0] = (byte *)0x0;
      }
      else {
        local_7c[0] = local_8 + -1;
        if ((int)pbVar9 <= (int)(local_8 + -1)) {
          local_7c[0] = pbVar9;
        }
      }
      pbVar9 = local_40 + -1;
      if ((int)pbVar9 < 0) {
        local_7c[1] = (byte *)0x0;
      }
      else {
        local_7c[1] = local_8 + -1;
        if ((int)pbVar9 <= (int)(local_8 + -1)) {
          local_7c[1] = pbVar9;
        }
      }
      if ((int)local_40 < 0) {
        local_7c[2] = (byte *)0x0;
      }
      else {
        local_7c[2] = local_8 + -1;
        if ((int)local_40 <= (int)(local_8 + -1)) {
          local_7c[2] = local_40;
        }
      }
      pbVar9 = local_40 + 1;
      if ((int)pbVar9 < 0) {
        pbVar9 = (byte *)0x0;
      }
      else if ((int)(local_8 + -1) < (int)pbVar9) {
        pbVar9 = local_8 + -1;
      }
      if ((int)local_40 < 0) {
        local_40 = (byte *)0x0;
      }
      else if ((int)(local_8 + -1) < (int)local_40) {
        local_40 = local_8 + -1;
      }
      local_70 = (int)pbVar9 - (int)local_40;
      local_7c[0] = local_7c[0] + -(int)local_40;
      local_7c[1] = (byte *)((int)local_7c[1] - (int)local_40);
      local_7c[2] = (byte *)((int)local_7c[2] - (int)local_40);
      local_44 = local_ac;
      if (local_ac < local_38) {
        do {
          local_34 = (uint)((longlong)local_20 * (longlong)(int)local_84) >> 0xe |
                     (int)((ulonglong)((longlong)local_20 * (longlong)(int)local_84) >> 0x20) <<
                     0x12;
          iVar5 = (int)((local_2c & 0xffffc000) + ((int)local_2c >> 0x1f & 0x3fffU)) >> 0xe;
          iVar4 = ((local_34 - 1) + local_2c | 0x3fff) + 1;
          local_9c = iVar5;
          iVar4 = (int)((iVar4 >> 0x1f & 0x3fffU) + iVar4) >> 0xe;
          local_98 = (iVar5 + 1) * 0x4000 - local_2c;
          local_14 = local_34 + iVar4 * -0x4000 + 0x4000 + local_2c;
          local_3c = iVar4 - iVar5;
          if (iVar4 - iVar5 < 2) {
            local_98 = local_34;
          }
          puVar11 = local_184;
          for (iVar10 = 0x28; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          local_a0 = iVar4 + -1;
          local_b0 = 4;
          local_dc = *(int *)(in_stack_00000028 + 0x38);
          local_cc = iVar5 * 4 + 1;
          local_b4 = *(int *)(in_stack_00000028 + 0x34);
          local_90 = iVar5 * 4 + 3;
          local_94 = iVar5 * 4 + 2;
          puVar11 = local_184 + 2;
          local_1c = local_7c;
          do {
            uVar8 = local_98;
            iVar10 = (int)(local_40 + (int)*local_1c) * local_dc + local_b4;
            uVar6 = *(byte *)(iVar10 + local_9c * 4) * local_98;
            puVar1 = puVar11 + -2;
            uVar12 = *puVar1;
            *puVar1 = *puVar1 + uVar6;
            iVar4 = local_cc;
            puVar11[-1] = puVar11[-1] + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar12,uVar6);
            uVar7 = *(byte *)(iVar4 + iVar10) * uVar8;
            uVar12 = *puVar11;
            *puVar11 = *puVar11 + uVar7;
            uVar6 = local_94;
            puVar11[1] = puVar11[1] + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar12,uVar7);
            uVar6 = *(byte *)(uVar6 + iVar10) * uVar8;
            puVar1 = puVar11 + 2;
            uVar12 = *puVar1;
            *puVar1 = *puVar1 + uVar6;
            iVar5 = local_90;
            puVar11[3] = puVar11[3] + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar12,uVar6);
            iVar4 = local_9c;
            uVar8 = *(byte *)(iVar5 + iVar10) * uVar8;
            uVar12 = puVar11[4];
            puVar11[4] = uVar12 + uVar8;
            puVar11[5] = puVar11[5] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar12,uVar8);
            iVar4 = iVar4 + 1;
            if (iVar4 < local_a0) {
              local_8 = (byte *)(iVar10 + 2 + iVar4 * 4);
              local_a8 = local_a0 - iVar4;
              iVar4 = iVar4 + (local_a0 - iVar4);
              do {
                bVar2 = local_8[-2];
                puVar1 = puVar11 + -2;
                uVar12 = *puVar1;
                *puVar1 = *puVar1 + (uint)bVar2 * 0x4000;
                pbVar9 = local_8;
                puVar11[-1] = puVar11[-1] + (uint)CARRY4(uVar12,(uint)bVar2 * 0x4000);
                bVar2 = pbVar9[-1];
                uVar12 = *puVar11;
                *puVar11 = *puVar11 + (uint)bVar2 * 0x4000;
                pbVar9 = local_8;
                puVar11[1] = puVar11[1] + (uint)CARRY4(uVar12,(uint)bVar2 * 0x4000);
                bVar2 = *pbVar9;
                puVar1 = puVar11 + 2;
                uVar12 = *puVar1;
                *puVar1 = *puVar1 + (uint)bVar2 * 0x4000;
                pbVar9 = local_8;
                puVar11[3] = puVar11[3] + (uint)CARRY4(uVar12,(uint)bVar2 * 0x4000);
                bVar2 = pbVar9[1];
                puVar1 = puVar11 + 4;
                uVar12 = *puVar1;
                *puVar1 = *puVar1 + (uint)bVar2 * 0x4000;
                puVar11[5] = puVar11[5] + (uint)CARRY4(uVar12,(uint)bVar2 * 0x4000);
                local_a8 = local_a8 + -1;
                local_8 = local_8 + 4;
              } while (local_a8 != 0);
            }
            if (1 < local_3c) {
              uVar8 = (uint)*(byte *)(iVar10 + iVar4 * 4) * local_14;
              puVar1 = puVar11 + -2;
              uVar12 = *puVar1;
              *puVar1 = *puVar1 + uVar8;
              puVar11[-1] = puVar11[-1] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar12,uVar8);
              uVar8 = (uint)*(byte *)(iVar10 + 1 + iVar4 * 4) * local_14;
              uVar12 = *puVar11;
              *puVar11 = *puVar11 + uVar8;
              puVar11[1] = puVar11[1] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar12,uVar8);
              uVar8 = (uint)*(byte *)(iVar10 + 2 + iVar4 * 4) * local_14;
              puVar1 = puVar11 + 2;
              uVar12 = *puVar1;
              *puVar1 = *puVar1 + uVar8;
              puVar11[3] = puVar11[3] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar12,uVar8);
              uVar12 = puVar11[4];
              uVar8 = (uint)*(byte *)(iVar10 + 3 + iVar4 * 4) * local_14;
              puVar11[4] = uVar12 + uVar8;
              puVar11[5] = puVar11[5] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar12,uVar8);
            }
            puVar11 = puVar11 + 10;
            local_b0 = local_b0 + -1;
            local_1c = local_1c + 1;
          } while (local_b0 != 0);
          if (((local_20 == 0x4000) && (local_24 == 0x4000)) || (in_stack_00000030 != 0)) {
            local_50 = (int)local_84 >> 0x1f;
            local_54 = local_84;
            lVar15 = __allmul(*puVar14,(int)*puVar14 >> 0x1f,local_184[0],local_184[1]);
            lVar15 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),0x4000,0);
            lVar16 = __allmul((&DAT_004bee10)[iVar13 * 4],(int)(&DAT_004bee10)[iVar13 * 4] >> 0x1f,
                              local_134,local_130);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul((&DAT_004bee0c)[iVar13 * 4],(int)(&DAT_004bee0c)[iVar13 * 4] >> 0x1f,
                              local_15c,local_158);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul((&DAT_004bee14)[iVar13 * 4],(int)(&DAT_004bee14)[iVar13 * 4] >> 0x1f,
                              local_10c,local_108);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar15 = lVar15 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar19 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),local_54,local_50);
            iVar4 = (int)uVar19;
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            else if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            *local_18 = (byte)iVar4;
            lVar15 = __allmul((&DAT_004bee10)[iVar13 * 4],(int)(&DAT_004bee10)[iVar13 * 4] >> 0x1f,
                              local_12c,local_128);
            lVar15 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),0x4000,0);
            lVar16 = __allmul((&DAT_004bee0c)[iVar13 * 4],(int)(&DAT_004bee0c)[iVar13 * 4] >> 0x1f,
                              local_154,local_150);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(*puVar14,(int)*puVar14 >> 0x1f,local_184[2],local_184[3]);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul((&DAT_004bee14)[iVar13 * 4],(int)(&DAT_004bee14)[iVar13 * 4] >> 0x1f,
                              local_104,local_100);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar15 = lVar15 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar19 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),local_54,local_50);
            iVar4 = (int)uVar19;
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            else if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            local_18[1] = (byte)iVar4;
            lVar15 = __allmul((&DAT_004bee10)[iVar13 * 4],(int)(&DAT_004bee10)[iVar13 * 4] >> 0x1f,
                              local_124,local_120);
            lVar15 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),0x4000,0);
            lVar16 = __allmul((&DAT_004bee0c)[iVar13 * 4],(int)(&DAT_004bee0c)[iVar13 * 4] >> 0x1f,
                              local_14c,local_148);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(*puVar14,(int)*puVar14 >> 0x1f,local_174,local_170);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul((&DAT_004bee14)[iVar13 * 4],(int)(&DAT_004bee14)[iVar13 * 4] >> 0x1f,
                              local_fc,local_f8);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar15 = lVar15 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar19 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),local_54,local_50);
            iVar4 = (int)uVar19;
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            else if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            local_18[2] = (byte)iVar4;
            lVar15 = __allmul((&DAT_004bee10)[iVar13 * 4],(int)(&DAT_004bee10)[iVar13 * 4] >> 0x1f,
                              local_11c,local_118);
            lVar15 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),0x4000,0);
            lVar16 = __allmul((&DAT_004bee0c)[iVar13 * 4],(int)(&DAT_004bee0c)[iVar13 * 4] >> 0x1f,
                              local_144,local_140);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(*puVar14,(int)*puVar14 >> 0x1f,local_16c,local_168);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul((&DAT_004bee14)[iVar13 * 4],(int)(&DAT_004bee14)[iVar13 * 4] >> 0x1f,
                              local_f4,local_f0);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar15 = lVar15 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar19 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),local_54,local_50);
            iVar4 = (int)uVar19;
            if (iVar4 < 0) {
              local_18[3] = 0;
            }
            else {
              if (0xff < iVar4) {
                iVar4 = 0xff;
              }
              local_18[3] = (byte)iVar4;
            }
          }
          else if (0 < (int)local_34) {
            local_b8 = (uint)((longlong)local_20 * (longlong)local_24) >> 0xe |
                       (int)((ulonglong)((longlong)local_20 * (longlong)local_24) >> 0x20) << 0x12;
            local_94 = (int)(local_b8 * 0xff + ((int)(local_b8 * 0xff) >> 0x1f & 0x3fffU)) >> 0xe;
            local_5c = (&DAT_004bee14)[iVar13 * 4];
            local_58 = (int)local_5c >> 0x1f;
            local_4c = (&DAT_004bee10)[iVar13 * 4];
            local_48 = (int)local_4c >> 0x1f;
            uVar12 = (&DAT_004bee0c)[iVar13 * 4];
            local_6c = *puVar14;
            local_68 = (int)local_6c >> 0x1f;
            local_60 = (int)local_34 >> 0x1f;
            local_64 = local_34;
            local_8c = uVar12;
            local_88 = (int)uVar12 >> 0x1f;
            lVar15 = __allmul(local_184[0],local_184[1],local_6c,local_68);
            lVar15 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),0x4000,0);
            lVar16 = __allmul(local_15c,local_158,uVar12,(int)uVar12 >> 0x1f);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(local_134,local_130,local_4c,local_48);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul(local_10c,local_108,local_5c,local_58);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar15 = lVar16 + lVar15 + lVar17 + lVar18 + 0x2000;
            uVar19 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),local_64,local_60);
            if ((int)uVar19 < 0) {
              local_10 = 0;
            }
            else {
              local_10 = 0xff;
              if ((int)uVar19 < 0x100) {
                local_10 = (undefined1)uVar19;
              }
            }
            lVar15 = __allmul(local_184[2],local_184[3],local_6c,local_68);
            lVar15 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),0x4000,0);
            lVar16 = __allmul(local_154,local_150,local_8c,local_88);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(local_12c,local_128,local_4c,local_48);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul(local_104,local_100,local_5c,local_58);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar15 = lVar15 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar19 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),local_64,local_60);
            if ((int)uVar19 < 0) {
              uStack_f = 0;
            }
            else {
              uStack_f = 0xff;
              if ((int)uVar19 < 0x100) {
                uStack_f = (undefined1)uVar19;
              }
            }
            lVar15 = __allmul(local_174,local_170,local_6c,local_68);
            lVar15 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),0x4000,0);
            lVar16 = __allmul(local_14c,local_148,local_8c,local_88);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(local_124,local_120,local_4c,local_48);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul(local_fc,local_f8,local_5c,local_58);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar15 = lVar15 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar19 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),local_64,local_60);
            if ((int)uVar19 < 0) {
              uStack_e = 0;
            }
            else {
              uStack_e = 0xff;
              if ((int)uVar19 < 0x100) {
                uStack_e = (undefined1)uVar19;
              }
            }
            lVar15 = __allmul(local_16c,local_168,local_6c,local_68);
            lVar15 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),0x4000,0);
            lVar16 = __allmul(local_144,local_140,local_8c,local_88);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(local_11c,local_118,local_4c,local_48);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul(local_f4,local_f0,local_5c,local_58);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar15 = lVar15 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar19 = __alldiv((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),local_64,local_60);
            if ((int)uVar19 < 0) {
              bStack_d = 0;
            }
            else {
              bStack_d = 0xff;
              if ((int)uVar19 < 0x100) {
                bStack_d = (byte)uVar19;
              }
            }
            bVar2 = *local_18;
            local_94 = local_94 & 0xff;
            _local_c0 = CONCAT31(uStack_bf,bVar2);
            iVar4 = ((CONCAT12(uStack_e,CONCAT11(uStack_f,local_10)) & 0xff) - (uint)bVar2) *
                    local_94;
            bVar3 = local_18[1];
            _local_c8 = CONCAT31(uStack_c7,bVar3);
            *local_18 = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + bVar2;
            iVar4 = ((CONCAT12(bStack_d,CONCAT11(uStack_e,uStack_f)) & 0xff) - (uint)bVar3) *
                    local_94;
            bVar2 = local_18[2];
            _local_d0 = CONCAT31(uStack_cf,bVar2);
            local_18[1] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + bVar3;
            iVar4 = ((CONCAT11(bStack_d,uStack_e) & 0xff) - (uint)bVar2) * local_94;
            bVar3 = local_18[3];
            _local_d8 = CONCAT31(uStack_d7,bVar3);
            local_18[2] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + bVar2;
            iVar4 = ((uint)bStack_d - (uint)bVar3) * local_94;
            local_18[3] = (char)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + bVar3;
          }
          local_18 = local_18 + 4;
          if (local_44 == local_38 + -2) {
            local_e0 = (uint)((longlong)local_20 * (longlong)(int)local_84) >> 0xe |
                       (int)((ulonglong)((longlong)local_20 * (longlong)(int)local_84) >> 0x20) <<
                       0x12;
            local_2c = local_2c + local_e0;
            local_20 = local_bc;
          }
          else {
            local_20 = 0x4000;
            local_2c = local_34 + local_2c;
          }
          local_44 = local_44 + 1;
        } while (local_44 < local_38);
      }
      if (local_28 == local_d4 + -2) {
        local_c4 = (uint)((longlong)local_24 * (longlong)local_80) >> 0xe |
                   (int)((ulonglong)((longlong)local_24 * (longlong)local_80) >> 0x20) << 0x12;
        local_30 = local_30 + local_c4;
        local_24 = local_e4;
      }
      else {
        local_24 = 0x4000;
        local_30 = local_30 + local_80;
      }
      local_28 = local_28 + 1;
    } while (local_28 < local_d4);
  }
  return;
}



/* Module: sfs4rw.dll
   Function: FUN_00459b10
   Address: 00459b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00459b10(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int *in_stack_00000018;
  int in_stack_00000028;
  int in_stack_00000030;
  uint local_180 [4];
  uint local_170;
  int local_16c;
  uint local_168;
  int local_164;
  uint local_158;
  int local_154;
  uint local_150;
  int local_14c;
  uint local_148;
  int local_144;
  uint local_140;
  int local_13c;
  uint local_130;
  int local_12c;
  uint local_128;
  int local_124;
  uint local_120;
  int local_11c;
  uint local_118;
  int local_114;
  uint local_108;
  int local_104;
  uint local_100;
  int local_fc;
  uint local_f8;
  int local_f4;
  uint local_f0;
  int local_ec;
  int local_e0;
  uint local_dc;
  int local_d8;
  byte local_d4;
  undefined3 uStack_d3;
  int local_d0;
  byte local_cc;
  undefined3 uStack_cb;
  int local_c8;
  byte local_c4;
  undefined3 uStack_c3;
  uint local_c0;
  byte local_bc;
  undefined3 uStack_bb;
  uint local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  int local_80 [4];
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  byte bStack_9;
  
  local_8c = *(uint *)(in_stack_00000028 + 0x6c);
  uVar11 = *(uint *)(in_stack_00000028 + 0x10);
  local_6c = *(int *)(in_stack_00000028 + 0x68);
  iVar7 = *(int *)(in_stack_00000028 + 0x18);
  local_ac = (int)((uVar11 & 0xffffc000) + ((int)uVar11 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar7 - 1U | 0x3fff) + 1;
  local_38 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = *(int *)(in_stack_00000028 + 0x1c);
  local_18 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (iVar5 - 1U | 0x3fff) + 1;
  local_9c = (local_ac + 1) * 0x4000 - uVar11;
  local_d8 = iVar7 + local_38 * -0x4000 + 0x4000;
  local_1c = (local_18 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  local_d0 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  local_e0 = iVar5 + local_d0 * -0x4000 + 0x4000;
  if (local_d0 - local_18 < 2) {
    local_1c = iVar5 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (local_38 - local_ac < 2) {
    local_9c = iVar7 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_14 = *(uint *)(in_stack_00000028 + 0x44);
  if (local_18 < local_d0) {
    local_c8 = *(int *)(in_stack_00000028 + 0x68) / 2;
    do {
      local_28 = *(int *)(in_stack_00000028 + 0x40) + 0x2000 + local_c8;
      local_2c = local_9c;
      lVar14 = (longlong)local_1c * (longlong)*(int *)(in_stack_00000028 + 0x6c);
      local_30 = (uint)lVar14 >> 0xe | (int)((ulonglong)lVar14 >> 0x20) << 0x12;
      local_94 = (int)((local_14 & 0xffffc000) + ((int)local_14 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar7 = ((local_30 - 1) + local_14 | 0x3fff) + 1;
      iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
      local_88 = (local_94 + 1) * 0x4000 - local_14;
      local_34 = local_30 + iVar7 * -0x4000 + 0x4000 + local_14;
      local_b0 = iVar7 - local_94;
      if (iVar7 - local_94 < 2) {
        local_88 = local_30;
      }
      local_24 = local_ac;
      local_10 = (byte *)(*(int *)(in_stack_00000028 + 8) * local_18 +
                          *(int *)(in_stack_00000028 + 4) + local_ac * 4);
      if (local_ac < local_38) {
        local_84 = iVar7 + -1;
        do {
          local_b8 = (uint)((longlong)local_2c * (longlong)local_6c) >> 0xe |
                     (int)((ulonglong)((longlong)local_2c * (longlong)local_6c) >> 0x20) << 0x12;
          local_60 = (int)(local_28 + ((int)local_28 >> 0x1f & 0x3fffU)) >> 0xe;
          uVar11 = local_28 & 0x80003fff;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffc000) + 1;
          }
          iVar6 = (int)uVar11 >> 2;
          iVar5 = *in_stack_00000018;
          iVar7 = local_60 + -2;
          puVar12 = &DAT_004bee08 + iVar6 * 4;
          if (iVar7 < 0) {
            local_80[0] = 0;
          }
          else {
            local_80[0] = iVar5 + -1;
            if (iVar7 <= iVar5 + -1) {
              local_80[0] = iVar7;
            }
          }
          iVar7 = local_60 + -1;
          if (iVar7 < 0) {
            local_80[1] = 0;
          }
          else {
            local_80[1] = iVar5 + -1;
            if (iVar7 <= iVar5 + -1) {
              local_80[1] = iVar7;
            }
          }
          if (local_60 < 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar5 + -1;
            if (local_60 <= iVar5 + -1) {
              iVar7 = local_60;
            }
          }
          iVar10 = local_60 + 1;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (iVar5 + -1 < iVar10) {
            iVar10 = iVar5 + -1;
          }
          if (local_60 < 0) {
            iVar5 = 0;
LAB_00459dbd:
            local_60 = iVar5;
          }
          else {
            iVar5 = iVar5 + -1;
            if (iVar5 < local_60) goto LAB_00459dbd;
          }
          local_80[2] = iVar7 - local_60;
          local_80[0] = local_80[0] - local_60;
          iVar10 = iVar10 - local_60;
          local_80[1] = local_80[1] - local_60;
          puVar9 = local_180;
          for (iVar7 = 0x28; uVar11 = local_88, iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          local_90 = *(int *)(in_stack_00000028 + 0x38);
          local_80[3] = iVar10;
          local_70 = *(int *)(in_stack_00000028 + 0x38) * local_94;
          local_5c = *(int *)(in_stack_00000028 + 0x34);
          puVar9 = local_180 + 2;
          local_20 = local_80;
          local_a0 = 4;
          do {
            pbVar13 = (byte *)(local_5c + (local_60 + *local_20) * 4 + local_70);
            uVar8 = *pbVar13 * uVar11;
            puVar1 = puVar9 + -2;
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + uVar8;
            puVar9[-1] = puVar9[-1] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar2,uVar8);
            uVar8 = pbVar13[1] * uVar11;
            uVar2 = *puVar9;
            *puVar9 = *puVar9 + uVar8;
            puVar9[1] = puVar9[1] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar2,uVar8);
            uVar8 = pbVar13[2] * uVar11;
            puVar1 = puVar9 + 2;
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + uVar8;
            puVar9[3] = puVar9[3] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar2,uVar8);
            uVar8 = pbVar13[3] * uVar11;
            puVar1 = puVar9 + 4;
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + uVar8;
            iVar7 = local_94;
            puVar9[5] = puVar9[5] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar2,uVar8);
            if (iVar7 + 1 < local_84) {
              local_98 = local_84 - (iVar7 + 1);
              do {
                pbVar13 = pbVar13 + local_90;
                bVar3 = *pbVar13;
                puVar1 = puVar9 + -2;
                uVar2 = *puVar1;
                *puVar1 = *puVar1 + (uint)bVar3 * 0x4000;
                puVar9[-1] = puVar9[-1] + (uint)CARRY4(uVar2,(uint)bVar3 * 0x4000);
                bVar3 = pbVar13[1];
                uVar2 = *puVar9;
                *puVar9 = *puVar9 + (uint)bVar3 * 0x4000;
                puVar9[1] = puVar9[1] + (uint)CARRY4(uVar2,(uint)bVar3 * 0x4000);
                bVar3 = pbVar13[2];
                puVar1 = puVar9 + 2;
                uVar2 = *puVar1;
                *puVar1 = *puVar1 + (uint)bVar3 * 0x4000;
                puVar9[3] = puVar9[3] + (uint)CARRY4(uVar2,(uint)bVar3 * 0x4000);
                bVar3 = pbVar13[3];
                puVar1 = puVar9 + 4;
                uVar2 = *puVar1;
                *puVar1 = *puVar1 + (uint)bVar3 * 0x4000;
                puVar9[5] = puVar9[5] + (uint)CARRY4(uVar2,(uint)bVar3 * 0x4000);
                local_98 = local_98 + -1;
              } while (local_98 != 0);
            }
            if (1 < local_b0) {
              pbVar13 = pbVar13 + local_90;
              uVar8 = (uint)*pbVar13 * local_34;
              puVar1 = puVar9 + -2;
              uVar2 = *puVar1;
              *puVar1 = *puVar1 + uVar8;
              puVar9[-1] = puVar9[-1] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar2,uVar8);
              uVar8 = (uint)pbVar13[1] * local_34;
              uVar2 = *puVar9;
              *puVar9 = *puVar9 + uVar8;
              puVar9[1] = puVar9[1] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar2,uVar8);
              uVar8 = (uint)pbVar13[2] * local_34;
              puVar1 = puVar9 + 2;
              uVar2 = *puVar1;
              *puVar1 = *puVar1 + uVar8;
              puVar9[3] = puVar9[3] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar2,uVar8);
              uVar2 = puVar9[4];
              uVar8 = (uint)pbVar13[3] * local_34;
              puVar9[4] = uVar2 + uVar8;
              puVar9[5] = puVar9[5] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar2,uVar8);
            }
            puVar9 = puVar9 + 10;
            local_a0 = local_a0 + -1;
            local_20 = local_20 + 1;
          } while (local_a0 != 0);
          if (((local_2c == 0x4000) && (local_1c == 0x4000)) || (in_stack_00000030 != 0)) {
            local_3c = (int)local_8c >> 0x1f;
            local_40 = local_8c;
            lVar14 = __allmul((&DAT_004bee14)[iVar6 * 4],(int)(&DAT_004bee14)[iVar6 * 4] >> 0x1f,
                              local_108,local_104);
            lVar14 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),0x4000,0);
            lVar16 = __allmul((&DAT_004bee10)[iVar6 * 4],(int)(&DAT_004bee10)[iVar6 * 4] >> 0x1f,
                              local_130,local_12c);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(*puVar12,(int)*puVar12 >> 0x1f,local_180[0],local_180[1]);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul((&DAT_004bee0c)[iVar6 * 4],(int)(&DAT_004bee0c)[iVar6 * 4] >> 0x1f,
                              local_158,local_154);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar14 = lVar14 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar15 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_40,local_3c);
            iVar7 = (int)uVar15;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0xff < iVar7) {
              iVar7 = 0xff;
            }
            *local_10 = (byte)iVar7;
            lVar14 = __allmul((&DAT_004bee14)[iVar6 * 4],(int)(&DAT_004bee14)[iVar6 * 4] >> 0x1f,
                              local_100,local_fc);
            lVar14 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),0x4000,0);
            lVar16 = __allmul(*puVar12,(int)*puVar12 >> 0x1f,local_180[2],local_180[3]);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul((&DAT_004bee10)[iVar6 * 4],(int)(&DAT_004bee10)[iVar6 * 4] >> 0x1f,
                              local_128,local_124);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul((&DAT_004bee0c)[iVar6 * 4],(int)(&DAT_004bee0c)[iVar6 * 4] >> 0x1f,
                              local_150,local_14c);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar14 = lVar14 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar15 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_40,local_3c);
            iVar7 = (int)uVar15;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0xff < iVar7) {
              iVar7 = 0xff;
            }
            local_10[1] = (byte)iVar7;
            lVar14 = __allmul((&DAT_004bee14)[iVar6 * 4],(int)(&DAT_004bee14)[iVar6 * 4] >> 0x1f,
                              local_f8,local_f4);
            lVar14 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),0x4000,0);
            lVar16 = __allmul(*puVar12,(int)*puVar12 >> 0x1f,local_170,local_16c);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul((&DAT_004bee10)[iVar6 * 4],(int)(&DAT_004bee10)[iVar6 * 4] >> 0x1f,
                              local_120,local_11c);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul((&DAT_004bee0c)[iVar6 * 4],(int)(&DAT_004bee0c)[iVar6 * 4] >> 0x1f,
                              local_148,local_144);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar14 = lVar14 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar15 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_40,local_3c);
            iVar7 = (int)uVar15;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0xff < iVar7) {
              iVar7 = 0xff;
            }
            local_10[2] = (byte)iVar7;
            lVar14 = __allmul((&DAT_004bee14)[iVar6 * 4],(int)(&DAT_004bee14)[iVar6 * 4] >> 0x1f,
                              local_f0,local_ec);
            lVar14 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),0x4000,0);
            lVar16 = __allmul(*puVar12,(int)*puVar12 >> 0x1f,local_168,local_164);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul((&DAT_004bee10)[iVar6 * 4],(int)(&DAT_004bee10)[iVar6 * 4] >> 0x1f,
                              local_118,local_114);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul((&DAT_004bee0c)[iVar6 * 4],(int)(&DAT_004bee0c)[iVar6 * 4] >> 0x1f,
                              local_140,local_13c);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar14 = lVar14 + lVar16 + lVar17 + lVar18 + 0x2000;
            uVar15 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_40,local_3c);
            iVar7 = (int)uVar15;
            if (iVar7 < 0) {
              local_10[3] = 0;
            }
            else {
              if (0xff < iVar7) {
                iVar7 = 0xff;
              }
              local_10[3] = (byte)iVar7;
            }
          }
          else if (0 < (int)local_30) {
            local_b4 = (uint)((longlong)local_2c * (longlong)local_1c) >> 0xe |
                       (int)((ulonglong)((longlong)local_2c * (longlong)local_1c) >> 0x20) << 0x12;
            local_5c = (int)(local_b4 * 0xff + ((int)(local_b4 * 0xff) >> 0x1f & 0x3fffU)) >> 0xe;
            uVar11 = (&DAT_004bee14)[iVar6 * 4];
            local_a4 = (int)uVar11 >> 0x1f;
            local_50 = (&DAT_004bee10)[iVar6 * 4];
            local_4c = (int)local_50 >> 0x1f;
            uVar2 = (&DAT_004bee0c)[iVar6 * 4];
            local_54 = (int)uVar2 >> 0x1f;
            local_68 = *puVar12;
            local_64 = (int)local_68 >> 0x1f;
            local_44 = (int)local_30 >> 0x1f;
            local_48 = local_30;
            local_58 = uVar2;
            lVar14 = __allmul(local_180[0],local_180[1],local_68,local_64);
            uVar15 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),0x4000,0);
            local_70 = (int)uVar15;
            lVar14 = __allmul(local_158,local_154,uVar2,local_54);
            lVar16 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),0x4000,0);
            lVar14 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),local_70);
            lVar17 = __allmul(local_130,local_12c,local_50,local_4c);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul(local_108,local_104,uVar11,local_a4);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar14 = lVar16 + lVar14 + lVar17 + lVar18 + 0x2000;
            uVar15 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_48,local_44);
            if ((int)uVar15 < 0) {
              local_c = 0;
            }
            else {
              local_c = 0xff;
              if ((int)uVar15 < 0x100) {
                local_c = (undefined1)uVar15;
              }
            }
            lVar14 = __allmul(local_180[2],local_180[3],local_68,local_64);
            lVar14 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),0x4000,0);
            lVar16 = __allmul(local_150,local_14c,local_58,local_54);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(local_128,local_124,local_50,local_4c);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul(local_100,local_fc,uVar11,local_a4);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar14 = lVar16 + lVar14 + lVar17 + lVar18 + 0x2000;
            uVar15 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_48,local_44);
            if ((int)uVar15 < 0) {
              uStack_b = 0;
            }
            else {
              uStack_b = 0xff;
              if ((int)uVar15 < 0x100) {
                uStack_b = (undefined1)uVar15;
              }
            }
            lVar14 = __allmul(local_170,local_16c,local_68,local_64);
            lVar14 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),0x4000,0);
            lVar16 = __allmul(local_148,local_144,local_58,local_54);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(local_120,local_11c,local_50,local_4c);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul(local_f8,local_f4,uVar11,local_a4);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar14 = lVar16 + lVar14 + lVar17 + lVar18 + 0x2000;
            uVar15 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_48,local_44);
            if ((int)uVar15 < 0) {
              uStack_a = 0;
            }
            else {
              uStack_a = 0xff;
              if ((int)uVar15 < 0x100) {
                uStack_a = (undefined1)uVar15;
              }
            }
            lVar14 = __allmul(local_168,local_164,local_68,local_64);
            lVar14 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),0x4000,0);
            lVar16 = __allmul(local_140,local_13c,local_58,local_54);
            lVar16 = __alldiv((uint)lVar16,(uint)((ulonglong)lVar16 >> 0x20),0x4000,0);
            lVar17 = __allmul(local_118,local_114,local_50,local_4c);
            lVar17 = __alldiv((uint)lVar17,(uint)((ulonglong)lVar17 >> 0x20),0x4000,0);
            lVar18 = __allmul(local_f0,local_ec,uVar11,local_a4);
            lVar18 = __alldiv((uint)lVar18,(uint)((ulonglong)lVar18 >> 0x20),0x4000,0);
            lVar14 = lVar16 + lVar14 + lVar17 + lVar18 + 0x2000;
            uVar15 = __alldiv((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_48,local_44);
            if ((int)uVar15 < 0) {
              bStack_9 = 0;
            }
            else {
              bStack_9 = 0xff;
              if ((int)uVar15 < 0x100) {
                bStack_9 = (byte)uVar15;
              }
            }
            bVar3 = *local_10;
            local_5c = local_5c & 0xff;
            _local_bc = CONCAT31(uStack_bb,bVar3);
            iVar7 = ((CONCAT12(uStack_a,CONCAT11(uStack_b,local_c)) & 0xff) - (uint)bVar3) *
                    local_5c;
            bVar4 = local_10[1];
            _local_c4 = CONCAT31(uStack_c3,bVar4);
            *local_10 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar3;
            iVar7 = ((CONCAT12(bStack_9,CONCAT11(uStack_a,uStack_b)) & 0xff) - (uint)bVar4) *
                    local_5c;
            bVar3 = local_10[2];
            _local_cc = CONCAT31(uStack_cb,bVar3);
            local_10[1] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar4;
            iVar7 = ((CONCAT11(bStack_9,uStack_a) & 0xff) - (uint)bVar3) * local_5c;
            bVar4 = local_10[3];
            _local_d4 = CONCAT31(uStack_d3,bVar4);
            local_10[2] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar3;
            iVar7 = ((uint)bStack_9 - (uint)bVar4) * local_5c;
            local_10[3] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar4;
          }
          local_10 = local_10 + 4;
          if (local_24 == local_38 + -2) {
            local_dc = (uint)((longlong)local_2c * (longlong)local_6c) >> 0xe |
                       (int)((ulonglong)((longlong)local_2c * (longlong)local_6c) >> 0x20) << 0x12;
            local_28 = local_28 + local_dc;
            local_2c = local_d8;
          }
          else {
            local_2c = 0x4000;
            local_28 = local_28 + local_b8;
          }
          local_24 = local_24 + 1;
        } while (local_24 < local_38);
      }
      if (local_18 == local_d0 + -2) {
        local_c0 = (uint)((longlong)local_1c * (longlong)(int)local_8c) >> 0xe |
                   (int)((ulonglong)((longlong)local_1c * (longlong)(int)local_8c) >> 0x20) << 0x12;
        local_14 = local_14 + local_c0;
        local_1c = local_e0;
      }
      else {
        local_1c = 0x4000;
        local_14 = local_14 + local_30;
      }
      local_18 = local_18 + 1;
    } while (local_18 < local_d0);
  }
  return;
}



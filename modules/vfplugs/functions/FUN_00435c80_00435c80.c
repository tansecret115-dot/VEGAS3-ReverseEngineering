/* Module: vfplugs.dll
   Function: FUN_00435c80
   Address: 00435c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00435c80(int param_1,RECT *param_2,int param_3,undefined4 *param_4,int param_5,RECT *param_6
                ,int param_7,undefined4 *param_8,int param_9)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  byte *pbVar20;
  uint uVar21;
  float *pfVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  byte *pbVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  undefined8 uVar37;
  longlong lVar38;
  longlong lVar39;
  uint local_16c;
  int local_168;
  int local_164;
  longlong local_160;
  int local_158;
  longlong local_154;
  longlong local_14c;
  longlong local_144;
  uint local_13c;
  undefined8 local_138;
  double local_130;
  uint local_124;
  int local_120;
  int local_11c;
  uint local_118;
  int local_114;
  int local_110;
  uint local_10c;
  double local_108;
  double local_100;
  int local_f4;
  uint local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  double local_c0;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  double local_98;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  double local_48;
  double local_40;
  double local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  double local_10;
  
  iVar13 = FUN_00430f00(&local_50,&local_54,&local_158,param_5,param_6,param_7,param_8,param_9);
  if ((-1 < iVar13) &&
     (iVar13 = FUN_00430f00(&local_110,&local_64,&local_cc,param_1,param_2,param_3,param_4,param_9),
     iVar16 = local_64, -1 < iVar13)) {
    if ((local_110 <= local_50) && (local_64 <= local_54)) {
      uVar14 = ftol();
      local_f0 = uVar14;
      uVar15 = ftol();
      local_58 = 0;
      local_c0 = _DAT_00487590 / ((double)(int)uVar15 * (double)(int)local_f0 * _DAT_0048ca40);
      if (0 < iVar16) {
        iVar13 = -1 - uVar15;
        local_118 = 0;
        local_10c = uVar15;
        local_13c = uVar14;
        local_8c = uVar15;
        local_4c = iVar13;
        do {
          if (param_9 == 4) {
            local_11c = 0;
            if (0 < local_110) {
              local_124 = 0;
              local_88 = iVar13 + local_10c | 0x3fff;
              local_d8 = (int)(local_88 + 1 + ((int)(local_88 + 1) >> 0x1f & 0x3fffU)) >> 0xe;
              local_84 = local_10c & 0xffffc000;
              local_f4 = (int)(local_84 + ((int)local_10c >> 0x1f & 0x3fffU)) >> 0xe;
              local_80 = -1 - local_13c;
              do {
                local_7c = 0;
                local_78 = 0;
                iVar13 = (local_80 + local_13c | 0x3fff) + 1;
                local_6c = 0;
                local_68 = 0;
                local_60 = 0;
                local_5c = 0;
                local_138 = (double)(CONCAT44(local_138._4_4_,local_13c) & 0xffffffffffffc000);
                local_74 = 0;
                local_70 = 0;
                iVar16 = (int)((local_13c & 0xffffc000) + ((int)local_13c >> 0x1f & 0x3fffU)) >> 0xe
                ;
                local_108 = (double)CONCAT44(local_108._4_4_,iVar16);
                iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
                if (local_d8 < local_f4) {
                  iVar23 = local_d8 * param_7 + local_158;
                  local_164 = local_f4 - local_d8;
                  do {
                    if (iVar13 < iVar16) {
                      pbVar20 = (byte *)(iVar23 + 2 + iVar13 * 4);
                      iVar29 = iVar16 - iVar13;
                      do {
                        bVar36 = CARRY4(local_7c,(uint)pbVar20[-2]);
                        local_7c = local_7c + pbVar20[-2];
                        local_78 = local_78 + (uint)bVar36;
                        bVar36 = CARRY4(local_6c,(uint)pbVar20[-1]);
                        local_6c = local_6c + pbVar20[-1];
                        local_68 = local_68 + (uint)bVar36;
                        bVar36 = CARRY4(local_60,(uint)*pbVar20);
                        local_60 = local_60 + *pbVar20;
                        local_5c = local_5c + (uint)bVar36;
                        bVar36 = CARRY4(local_74,(uint)pbVar20[1]);
                        local_74 = local_74 + pbVar20[1];
                        local_70 = local_70 + (uint)bVar36;
                        pbVar20 = pbVar20 + 4;
                        iVar29 = iVar29 + -1;
                      } while (iVar29 != 0);
                    }
                    iVar23 = iVar23 + param_7;
                    local_164 = local_164 + -1;
                  } while (local_164 != 0);
                }
                local_114 = (int)((local_118 & 0xffffc000) + ((int)local_118 >> 0x1f & 0x3fffU)) >>
                            0xe;
                iVar13 = (local_10c - 1 | 0x3fff) + 1;
                local_ec = (int)((local_124 & 0xffffc000) + ((int)local_124 >> 0x1f & 0x3fffU)) >>
                           0xe;
                iVar16 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar13 = (local_13c - 1 | 0x3fff) + 1;
                local_120 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
                uVar24 = local_10c - local_84;
                uVar26 = (local_88 - local_118) + 1;
                uVar21 = local_124 - 1 | 0x3fff;
                uVar14 = local_13c - (int)local_138;
                uVar15 = (uVar21 - local_124) + 1;
                local_130 = (double)CONCAT44(local_130._4_4_,uVar15);
                local_154 = 0;
                local_144 = 0;
                local_14c = 0;
                local_160 = 0;
                if (uVar26 != 0) {
                  if (uVar15 != 0) {
                    uVar37 = __alldiv((uint)((longlong)(int)uVar15 * (longlong)(int)uVar26),
                                      (uint)((ulonglong)
                                             ((longlong)(int)uVar15 * (longlong)(int)uVar26) >> 0x20
                                            ),0x4000,0);
                    local_b0 = (uint)uVar37;
                    pbVar20 = (byte *)(local_158 + local_114 * param_7 + local_ec * 4);
                    local_ac = (int)local_b0 >> 0x1f;
                    local_154 = __allmul((uint)*pbVar20,0,local_b0,local_ac);
                    local_144 = __allmul((uint)pbVar20[1],0,local_b0,local_ac);
                    local_14c = __allmul((uint)pbVar20[2],0,local_b0,local_ac);
                    local_160 = __allmul((uint)pbVar20[3],0,local_b0,local_ac);
                    uVar15 = local_130._0_4_;
                  }
                  if (uVar14 != 0) {
                    uVar37 = __alldiv((uint)((longlong)(int)uVar14 * (longlong)(int)uVar26),
                                      (uint)((ulonglong)
                                             ((longlong)(int)uVar14 * (longlong)(int)uVar26) >> 0x20
                                            ),0x4000,0);
                    local_a0 = (uint)uVar37;
                    pbVar20 = (byte *)(local_158 + local_114 * param_7 + -4 + local_120 * 4);
                    local_9c = (int)local_a0 >> 0x1f;
                    lVar38 = __allmul((uint)*pbVar20,0,local_a0,local_9c);
                    local_154 = lVar38 + local_154;
                    lVar38 = __allmul((uint)pbVar20[1],0,local_a0,local_9c);
                    local_144 = lVar38 + local_144;
                    lVar38 = __allmul((uint)pbVar20[2],0,local_a0,local_9c);
                    local_14c = lVar38 + local_14c;
                    lVar38 = __allmul((uint)pbVar20[3],0,local_a0,local_9c);
                    local_160 = lVar38 + local_160;
                    uVar15 = local_130._0_4_;
                  }
                }
                if (uVar24 != 0) {
                  if (uVar15 != 0) {
                    uVar37 = __alldiv((uint)((longlong)(int)uVar15 * (longlong)(int)uVar24),
                                      (uint)((ulonglong)
                                             ((longlong)(int)uVar15 * (longlong)(int)uVar24) >> 0x20
                                            ),0x4000,0);
                    local_b8 = (uint)uVar37;
                    pbVar20 = (byte *)(local_158 + (iVar16 + -1) * param_7 + local_ec * 4);
                    local_b4 = (int)local_b8 >> 0x1f;
                    lVar38 = __allmul((uint)*pbVar20,0,local_b8,local_b4);
                    local_154 = lVar38 + local_154;
                    lVar38 = __allmul((uint)pbVar20[1],0,local_b8,local_b4);
                    local_144 = lVar38 + local_144;
                    lVar38 = __allmul((uint)pbVar20[2],0,local_b8,local_b4);
                    local_14c = lVar38 + local_14c;
                    lVar38 = __allmul((uint)pbVar20[3],0,local_b8,local_b4);
                    local_160 = lVar38 + local_160;
                    uVar15 = local_130._0_4_;
                  }
                  if (uVar14 != 0) {
                    uVar37 = __alldiv((uint)((longlong)(int)uVar14 * (longlong)(int)uVar24),
                                      (uint)((ulonglong)
                                             ((longlong)(int)uVar14 * (longlong)(int)uVar24) >> 0x20
                                            ),0x4000,0);
                    local_a8 = (uint)uVar37;
                    pbVar20 = (byte *)(local_158 + (iVar16 + -1) * param_7 + -4 + local_120 * 4);
                    local_a4 = (int)local_a8 >> 0x1f;
                    lVar38 = __allmul((uint)*pbVar20,0,local_a8,local_a4);
                    local_154 = lVar38 + local_154;
                    lVar38 = __allmul((uint)pbVar20[1],0,local_a8,local_a4);
                    local_144 = lVar38 + local_144;
                    lVar38 = __allmul((uint)pbVar20[2],0,local_a8,local_a4);
                    local_14c = lVar38 + local_14c;
                    lVar38 = __allmul((uint)pbVar20[3],0,local_a8,local_a4);
                    local_160 = lVar38 + local_160;
                    uVar15 = local_130._0_4_;
                  }
                }
                iVar13 = uVar21 + 1;
                local_168 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
                pbVar20 = (byte *)(local_158 + local_114 * param_7 + local_168 * 4);
                if (local_168 < local_108._0_4_) {
                  local_e4 = (int)uVar24 >> 0x1f;
                  local_d0 = (int)uVar26 >> 0x1f;
                  pbVar33 = pbVar20 + ((iVar16 - local_114) + -1) * param_7 + 2;
                  local_168 = local_108._0_4_ - local_168;
                  local_e8 = uVar24;
                  local_d4 = uVar26;
                  do {
                    lVar38 = __allmul((uint)pbVar33[-2],0,local_e8,local_e4);
                    lVar39 = __allmul((uint)*pbVar20,0,local_d4,local_d0);
                    local_154 = lVar39 + lVar38 + local_154;
                    lVar38 = __allmul((uint)pbVar33[-1],0,local_e8,local_e4);
                    lVar39 = __allmul((uint)pbVar20[1],0,local_d4,local_d0);
                    local_144 = lVar39 + lVar38 + local_144;
                    lVar38 = __allmul((uint)pbVar20[2],0,local_d4,local_d0);
                    lVar39 = __allmul((uint)*pbVar33,0,local_e8,local_e4);
                    local_14c = lVar39 + lVar38 + local_14c;
                    lVar38 = __allmul((uint)pbVar33[1],0,local_e8,local_e4);
                    lVar39 = __allmul((uint)pbVar20[3],0,local_d4,local_d0);
                    local_160 = lVar39 + lVar38 + local_160;
                    pbVar20 = pbVar20 + 4;
                    pbVar33 = pbVar33 + 4;
                    local_168 = local_168 + -1;
                  } while (local_168 != 0);
                  uVar15 = local_130._0_4_;
                }
                pbVar20 = (byte *)(local_d8 * param_7 + local_ec * 4 + local_158);
                if (local_d8 < local_f4) {
                  local_c4 = (int)uVar14 >> 0x1f;
                  local_dc = (int)uVar15 >> 0x1f;
                  iVar13 = (local_120 * 4 - (int)pbVar20) + local_d8 * param_7 + -4 + local_158;
                  local_168 = local_f4 - local_d8;
                  local_e0 = uVar15;
                  local_c8 = uVar14;
                  do {
                    lVar38 = __allmul((uint)pbVar20[iVar13],0,local_c8,local_c4);
                    lVar39 = __allmul((uint)*pbVar20,0,local_e0,local_dc);
                    local_154 = lVar39 + lVar38 + local_154;
                    lVar38 = __allmul((uint)pbVar20[iVar13 + 1],0,local_c8,local_c4);
                    lVar39 = __allmul((uint)pbVar20[1],0,local_e0,local_dc);
                    local_144 = lVar39 + lVar38 + local_144;
                    lVar38 = __allmul((uint)pbVar20[iVar13 + 2],0,local_c8,local_c4);
                    lVar39 = __allmul((uint)pbVar20[2],0,local_e0,local_dc);
                    local_14c = lVar39 + lVar38 + local_14c;
                    lVar38 = __allmul((uint)pbVar20[iVar13 + 3],0,local_c8,local_c4);
                    lVar39 = __allmul((uint)pbVar20[3],0,local_e0,local_dc);
                    local_160 = lVar39 + lVar38 + local_160;
                    pbVar20 = pbVar20 + param_7;
                    local_168 = local_168 + -1;
                  } while (local_168 != 0);
                }
                puVar1 = (undefined1 *)(local_cc + local_11c * 4);
                local_18 = __alldiv((uint)local_154,(uint)((ulonglong)local_154 >> 0x20),0x4000,0);
                local_18 = local_18 + CONCAT44(local_78,local_7c);
                uVar12 = ftol();
                *puVar1 = uVar12;
                local_30 = __alldiv((uint)local_144,(uint)((ulonglong)local_144 >> 0x20),0x4000,0);
                local_30 = local_30 + CONCAT44(local_68,local_6c);
                uVar12 = ftol();
                puVar1[1] = uVar12;
                local_28 = __alldiv((uint)local_14c,(uint)((ulonglong)local_14c >> 0x20),0x4000,0);
                local_28 = local_28 + CONCAT44(local_5c,local_60);
                uVar12 = ftol();
                puVar1[2] = uVar12;
                local_20 = __alldiv((uint)local_160,(uint)((ulonglong)local_160 >> 0x20),0x4000,0);
                local_20 = local_20 + CONCAT44(local_70,local_74);
                uVar12 = ftol();
                puVar1[3] = uVar12;
                local_11c = local_11c + 1;
                local_124 = local_124 + local_f0;
                local_13c = local_13c + local_f0;
                uVar15 = local_8c;
                iVar13 = local_4c;
              } while (local_11c < local_110);
            }
          }
          else {
            local_124 = 0;
            if (0 < local_110) {
              local_164 = 0;
              uVar14 = iVar13 + local_10c | 0x3fff;
              local_13c = 0;
              iVar13 = uVar14 + 1;
              iVar23 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
              iVar16 = (int)((local_10c & 0xffffc000) + ((int)local_10c >> 0x1f & 0x3fffU)) >> 0xe;
              local_16c = local_f0;
              do {
                iVar13 = ((-1 - local_f0) + local_16c | 0x3fff) + 1;
                local_130 = _DAT_00487598;
                local_100 = _DAT_00487598;
                local_98 = _DAT_00487598;
                iVar29 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar13 = (int)((local_16c & 0xffffc000) + ((int)local_16c >> 0x1f & 0x3fffU)) >> 0xe
                ;
                dVar10 = _DAT_00487598;
                if (iVar23 < iVar16) {
                  iVar17 = iVar23 * param_7 + local_158;
                  iVar30 = iVar16 - iVar23;
                  do {
                    if (iVar29 < iVar13) {
                      iVar34 = iVar13 - iVar29;
                      pfVar22 = (float *)(iVar29 * 0x10 + 8 + iVar17);
                      do {
                        dVar10 = (double)pfVar22[-2] + dVar10;
                        local_130 = (double)pfVar22[-1] + local_130;
                        local_100 = (double)*pfVar22 + local_100;
                        iVar34 = iVar34 + -1;
                        local_98 = local_98 + (double)pfVar22[1];
                        pfVar22 = pfVar22 + 4;
                      } while (iVar34 != 0);
                    }
                    iVar17 = iVar17 + param_7;
                    iVar30 = iVar30 + -1;
                  } while (iVar30 != 0);
                }
                iVar31 = (int)((local_118 & 0xffffc000) + ((int)local_118 >> 0x1f & 0x3fffU)) >> 0xe
                ;
                iVar29 = (local_10c - 1 | 0x3fff) + 1;
                iVar32 = iVar31 * param_7;
                iVar35 = (int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar27 = (int)((local_13c & 0xffffc000) + ((int)local_13c >> 0x1f & 0x3fffU)) >> 0xe
                ;
                iVar29 = (local_16c - 1 | 0x3fff) + 1;
                iVar30 = (int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe;
                local_10 = (double)(int)((uVar14 - local_118) + 1) * _DAT_0048ca38;
                uVar15 = local_13c - 1 | 0x3fff;
                local_38 = (double)(int)(local_10c - (local_10c & 0xffffc000)) * _DAT_0048ca38;
                iVar34 = iVar27 * 0x10;
                pfVar18 = (float *)(iVar34 + iVar32 + local_158);
                local_40 = (double)(int)((uVar15 - local_13c) + 1) * _DAT_0048ca38;
                local_48 = (double)(int)(local_16c - (local_16c & 0xffffc000)) * _DAT_0048ca38;
                dVar11 = local_40 * local_10;
                iVar25 = iVar30 * 0x10;
                iVar29 = iVar25 + iVar32;
                dVar3 = local_48 * local_10;
                iVar17 = iVar29 + -0x10 + local_158;
                iVar28 = (iVar35 + -1) * param_7;
                pfVar19 = (float *)(iVar28 + iVar34 + local_158);
                dVar2 = local_40 * local_38;
                local_108 = (double)*pfVar19 * dVar2 +
                            (double)*(float *)(iVar29 + -0x10 + local_158) * dVar3 +
                            (double)*pfVar18 * dVar11 + dVar10;
                pfVar22 = (float *)(iVar28 + iVar25 + -0x10 + local_158);
                local_138 = local_48 * local_38;
                fVar4 = *pfVar22 * (float)local_138 + (float)local_108;
                fVar8 = pfVar22[1] * (float)local_138 +
                        (float)((double)pfVar19[1] * dVar2 +
                               (double)*(float *)(iVar17 + 4) * dVar3 +
                               (double)(pfVar18[1] * (float)dVar11 + (float)local_130));
                fVar7 = pfVar22[2] * (float)local_138 +
                        (float)((double)pfVar19[2] * dVar2 +
                               (double)*(float *)(iVar17 + 8) * dVar3 +
                               (double)(pfVar18[2] * (float)dVar11 + (float)local_100));
                iVar29 = uVar15 + 1;
                fVar6 = pfVar22[3] * (float)local_138 +
                        (float)((double)pfVar19[3] * dVar2 +
                               (double)*(float *)(iVar17 + 0xc) * dVar3 +
                               (double)pfVar18[3] * dVar11 + local_98);
                iVar29 = (int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe;
                pfVar22 = (float *)(iVar29 * 0x10 + iVar32 + local_158);
                if (iVar29 < iVar13) {
                  fVar9 = (float)local_10;
                  fVar5 = (float)local_38;
                  iVar13 = iVar13 - iVar29;
                  pfVar18 = (float *)(((iVar35 - iVar31) + -1) * param_7 + 8 + (int)pfVar22);
                  do {
                    iVar13 = iVar13 + -1;
                    fVar4 = pfVar18[-2] * fVar5 + *pfVar22 * fVar9 + fVar4;
                    fVar8 = pfVar18[-1] * fVar5 + pfVar22[1] * fVar9 + fVar8;
                    fVar7 = *pfVar18 * fVar5 + pfVar22[2] * fVar9 + fVar7;
                    fVar6 = pfVar18[1] * fVar5 + pfVar22[3] * fVar9 + fVar6;
                    pfVar22 = pfVar22 + 4;
                    pfVar18 = pfVar18 + 4;
                  } while (iVar13 != 0);
                }
                pfVar22 = (float *)(iVar27 * 0x10 + iVar23 * param_7 + local_158);
                if (iVar23 < iVar16) {
                  fVar5 = (float)local_40;
                  fVar9 = (float)local_48;
                  iVar13 = (iVar30 * 0x10 - (int)pfVar22) + iVar23 * param_7 + -0x10 + local_158;
                  iVar29 = iVar16 - iVar23;
                  do {
                    fVar4 = *(float *)(iVar13 + (int)pfVar22) * fVar9 + *pfVar22 * fVar5 + fVar4;
                    fVar8 = *(float *)(iVar13 + 4 + (int)pfVar22) * fVar9 +
                            pfVar22[1] * fVar5 + fVar8;
                    fVar7 = *(float *)(iVar13 + 8 + (int)pfVar22) * fVar9 +
                            pfVar22[2] * fVar5 + fVar7;
                    pfVar18 = pfVar22 + 3;
                    pfVar19 = (float *)(iVar13 + 0xc + (int)pfVar22);
                    pfVar22 = (float *)((int)pfVar22 + param_7);
                    iVar29 = iVar29 + -1;
                    fVar6 = *pfVar19 * fVar9 + *pfVar18 * fVar5 + fVar6;
                  } while (iVar29 != 0);
                }
                local_98 = (double)fVar6;
                local_100 = (double)fVar7;
                local_130 = (double)fVar8;
                *(float *)(local_cc + local_164) = fVar4 * (float)local_c0;
                iVar13 = local_cc + local_164;
                local_164 = local_164 + 0x10;
                *(float *)(iVar13 + 4) = fVar8 * (float)local_c0;
                *(float *)(iVar13 + 8) = fVar7 * (float)local_c0;
                *(float *)(iVar13 + 0xc) = fVar6 * (float)local_c0;
                local_13c = local_13c + local_f0;
                local_124 = local_124 + 1;
                local_16c = local_16c + local_f0;
                uVar15 = local_8c;
                iVar13 = local_4c;
              } while ((int)local_124 < local_110);
            }
          }
          local_cc = local_cc + param_3;
          local_118 = local_118 + uVar15;
          local_58 = local_58 + 1;
          local_10c = local_10c + uVar15;
          local_13c = local_f0;
        } while (local_58 < local_64);
      }
      return 0;
    }
    iVar13 = -0x7ff8ffa9;
  }
  return iVar13;
}



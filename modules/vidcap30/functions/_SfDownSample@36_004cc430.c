/* Module: vidcap30.exe
   Function: _SfDownSample@36
   Address: 004cc430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDownSample_36(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9
                    )

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  byte *pbVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 *puVar30;
  int iVar31;
  int iVar32;
  bool bVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  uint local_16c;
  int local_168;
  int local_164;
  int local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined8 local_144;
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
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  double local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
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
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  double local_10;
  
                    /* 0xcc430  359  _SfDownSample@36 */
  iVar12 = _SfDibPrepareSet_32(&local_50,&local_54,&local_158,param_5,param_6,param_7,param_8,
                               param_9);
  if ((-1 < iVar12) &&
     (iVar12 = _SfDibPrepareSet_32(&local_110,&local_64,&local_cc,param_1,param_2,param_3,param_4,
                                   param_9), iVar15 = local_64, -1 < iVar12)) {
    if ((local_110 <= local_50) && (local_64 <= local_54)) {
      uVar13 = ftol();
      local_f0 = uVar13;
      uVar14 = ftol();
      local_58 = 0;
      local_c0 = _DAT_00587ad0 / ((double)(int)uVar14 * (double)(int)local_f0 * _DAT_0059a250);
      if (0 < iVar15) {
        iVar12 = -1 - uVar14;
        local_118 = 0;
        local_10c = uVar14;
        local_13c = uVar13;
        local_8c = uVar14;
        local_4c = iVar12;
        do {
          if (param_9 == 4) {
            local_11c = 0;
            if (0 < local_110) {
              local_124 = 0;
              local_88 = iVar12 + local_10c | 0x3fff;
              local_d8 = (int)(local_88 + 1 + ((int)(local_88 + 1) >> 0x1f & 0x3fffU)) >> 0xe;
              local_84 = local_10c & 0xffffc000;
              local_f4 = (int)(local_84 + ((int)local_10c >> 0x1f & 0x3fffU)) >> 0xe;
              local_80 = -1 - local_13c;
              do {
                local_7c = 0;
                local_78 = 0;
                iVar12 = (local_80 + local_13c | 0x3fff) + 1;
                local_6c = 0;
                local_68 = 0;
                local_60 = 0;
                local_5c = 0;
                local_138 = (double)(CONCAT44(local_138._4_4_,local_13c) & 0xffffffffffffc000);
                local_74 = 0;
                local_70 = 0;
                iVar15 = (int)((local_13c & 0xffffc000) + ((int)local_13c >> 0x1f & 0x3fffU)) >> 0xe
                ;
                local_108 = (double)CONCAT44(local_108._4_4_,iVar15);
                iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
                if (local_d8 < local_f4) {
                  iVar20 = local_d8 * param_7 + local_158;
                  local_164 = local_f4 - local_d8;
                  do {
                    if (iVar12 < iVar15) {
                      pbVar18 = (byte *)(iVar20 + 2 + iVar12 * 4);
                      iVar24 = iVar15 - iVar12;
                      do {
                        bVar33 = CARRY4(local_7c,(uint)pbVar18[-2]);
                        local_7c = local_7c + pbVar18[-2];
                        local_78 = local_78 + (uint)bVar33;
                        bVar33 = CARRY4(local_6c,(uint)pbVar18[-1]);
                        local_6c = local_6c + pbVar18[-1];
                        local_68 = local_68 + (uint)bVar33;
                        bVar33 = CARRY4(local_60,(uint)*pbVar18);
                        local_60 = local_60 + *pbVar18;
                        local_5c = local_5c + (uint)bVar33;
                        bVar33 = CARRY4(local_74,(uint)pbVar18[1]);
                        local_74 = local_74 + pbVar18[1];
                        local_70 = local_70 + (uint)bVar33;
                        pbVar18 = pbVar18 + 4;
                        iVar24 = iVar24 + -1;
                      } while (iVar24 != 0);
                    }
                    iVar20 = iVar20 + param_7;
                    local_164 = local_164 + -1;
                  } while (local_164 != 0);
                }
                local_114 = (int)((local_118 & 0xffffc000) + ((int)local_118 >> 0x1f & 0x3fffU)) >>
                            0xe;
                iVar12 = (local_10c - 1 | 0x3fff) + 1;
                local_ec = (int)((local_124 & 0xffffc000) + ((int)local_124 >> 0x1f & 0x3fffU)) >>
                           0xe;
                iVar29 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar12 = (local_13c - 1 | 0x3fff) + 1;
                local_120 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar20 = local_10c - local_84;
                iVar24 = (local_88 - local_118) + 1;
                uVar14 = local_124 - 1 | 0x3fff;
                iVar15 = local_13c - (int)local_138;
                iVar12 = (uVar14 - local_124) + 1;
                local_130 = (double)CONCAT44(local_130._4_4_,iVar12);
                local_154._0_4_ = 0;
                local_154._4_4_ = 0;
                local_154 = 0;
                local_144._0_4_ = 0;
                local_144._4_4_ = 0;
                local_144 = 0;
                local_14c._0_4_ = 0;
                local_14c._4_4_ = 0;
                local_14c = 0;
                lVar34 = 0;
                if (iVar24 != 0) {
                  if (iVar12 != 0) {
                    local_b0 = __alldiv((longlong)iVar12 * (longlong)iVar24,0x4000,0);
                    puVar25 = (undefined1 *)(local_158 + local_114 * param_7 + local_ec * 4);
                    local_ac = local_b0 >> 0x1f;
                    local_154 = __allmul(*puVar25,0,local_b0,local_ac);
                    local_144 = __allmul(puVar25[1],0,local_b0,local_ac);
                    local_14c = __allmul(puVar25[2],0,local_b0,local_ac);
                    lVar34 = __allmul(puVar25[3],0,local_b0,local_ac);
                    iVar12 = local_130._0_4_;
                  }
                  if (iVar15 != 0) {
                    local_a0 = __alldiv((longlong)iVar15 * (longlong)iVar24,0x4000,0);
                    puVar25 = (undefined1 *)(local_158 + local_114 * param_7 + -4 + local_120 * 4);
                    local_9c = local_a0 >> 0x1f;
                    lVar35 = __allmul(*puVar25,0,local_a0,local_9c);
                    local_154 = lVar35 + local_154;
                    lVar35 = __allmul(puVar25[1],0,local_a0,local_9c);
                    local_144 = lVar35 + local_144;
                    lVar35 = __allmul(puVar25[2],0,local_a0,local_9c);
                    local_14c = lVar35 + local_14c;
                    lVar35 = __allmul(puVar25[3],0,local_a0,local_9c);
                    lVar34 = lVar35 + lVar34;
                    iVar12 = local_130._0_4_;
                  }
                }
                if (iVar20 != 0) {
                  if (iVar12 != 0) {
                    local_b8 = __alldiv((longlong)iVar12 * (longlong)iVar20,0x4000,0);
                    puVar25 = (undefined1 *)(local_158 + (iVar29 + -1) * param_7 + local_ec * 4);
                    local_b4 = local_b8 >> 0x1f;
                    lVar35 = __allmul(*puVar25,0,local_b8,local_b4);
                    local_154 = lVar35 + local_154;
                    lVar35 = __allmul(puVar25[1],0,local_b8,local_b4);
                    local_144 = lVar35 + local_144;
                    lVar35 = __allmul(puVar25[2],0,local_b8,local_b4);
                    local_14c = lVar35 + local_14c;
                    lVar35 = __allmul(puVar25[3],0,local_b8,local_b4);
                    lVar34 = lVar35 + lVar34;
                    iVar12 = local_130._0_4_;
                  }
                  if (iVar15 != 0) {
                    local_a8 = __alldiv((longlong)iVar15 * (longlong)iVar20,0x4000,0);
                    puVar25 = (undefined1 *)
                              (local_158 + (iVar29 + -1) * param_7 + -4 + local_120 * 4);
                    local_a4 = local_a8 >> 0x1f;
                    lVar35 = __allmul(*puVar25,0,local_a8,local_a4);
                    local_154 = local_154 + lVar35;
                    lVar35 = __allmul(puVar25[1],0,local_a8,local_a4);
                    local_144 = local_144 + lVar35;
                    lVar35 = __allmul(puVar25[2],0,local_a8,local_a4);
                    local_14c = local_14c + lVar35;
                    lVar35 = __allmul(puVar25[3],0,local_a8,local_a4);
                    lVar34 = lVar34 + lVar35;
                    iVar12 = local_130._0_4_;
                  }
                }
                iVar26 = uVar14 + 1;
                local_168 = (int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe;
                puVar25 = (undefined1 *)(local_158 + local_114 * param_7 + local_168 * 4);
                if (local_168 < local_108._0_4_) {
                  local_e4 = iVar20 >> 0x1f;
                  local_d0 = iVar24 >> 0x1f;
                  puVar30 = puVar25 + ((iVar29 - local_114) + -1) * param_7 + 2;
                  local_168 = local_108._0_4_ - local_168;
                  local_e8 = iVar20;
                  local_d4 = iVar24;
                  lVar35 = lVar34;
                  do {
                    lVar34 = __allmul(puVar30[-2],0,local_e8,local_e4);
                    lVar36 = __allmul(*puVar25,0,local_d4,local_d0);
                    local_154 = lVar34 + lVar36 + local_154;
                    lVar34 = __allmul(puVar30[-1],0,local_e8,local_e4);
                    lVar36 = __allmul(puVar25[1],0,local_d4,local_d0);
                    local_144 = lVar34 + lVar36 + local_144;
                    lVar34 = __allmul(puVar25[2],0,local_d4,local_d0);
                    lVar36 = __allmul(*puVar30,0,local_e8,local_e4);
                    local_14c = lVar34 + lVar36 + local_14c;
                    lVar36 = __allmul(puVar30[1],0,local_e8,local_e4);
                    lVar37 = __allmul(puVar25[3],0,local_d4,local_d0);
                    lVar34 = lVar36 + lVar37 + lVar35;
                    puVar25 = puVar25 + 4;
                    puVar30 = puVar30 + 4;
                    local_168 = local_168 + -1;
                    lVar35 = lVar35 + lVar36 + lVar37;
                  } while (local_168 != 0);
                  iVar12 = local_130._0_4_;
                }
                puVar25 = (undefined1 *)(local_d8 * param_7 + local_ec * 4 + local_158);
                if (local_d8 < local_f4) {
                  local_c4 = iVar15 >> 0x1f;
                  local_dc = iVar12 >> 0x1f;
                  iVar20 = (local_120 * 4 - (int)puVar25) + local_d8 * param_7 + -4 + local_158;
                  local_168 = local_f4 - local_d8;
                  local_e0 = iVar12;
                  local_c8 = iVar15;
                  lVar35 = lVar34;
                  do {
                    lVar34 = __allmul(puVar25[iVar20],0,local_c8,local_c4);
                    lVar36 = __allmul(*puVar25,0,local_e0,local_dc);
                    local_154 = lVar34 + lVar36 + local_154;
                    lVar34 = __allmul(puVar25[iVar20 + 1],0,local_c8,local_c4);
                    lVar36 = __allmul(puVar25[1],0,local_e0,local_dc);
                    local_144 = lVar34 + lVar36 + local_144;
                    lVar34 = __allmul(puVar25[iVar20 + 2],0,local_c8,local_c4);
                    lVar36 = __allmul(puVar25[2],0,local_e0,local_dc);
                    local_14c = lVar34 + lVar36 + local_14c;
                    lVar36 = __allmul(puVar25[iVar20 + 3],0,local_c8,local_c4);
                    lVar37 = __allmul(puVar25[3],0,local_e0,local_dc);
                    lVar34 = lVar36 + lVar37 + lVar35;
                    puVar25 = puVar25 + param_7;
                    local_168 = local_168 + -1;
                    lVar35 = lVar35 + lVar36 + lVar37;
                  } while (local_168 != 0);
                }
                puVar25 = (undefined1 *)(local_cc + local_11c * 4);
                lVar35 = __alldiv(local_154,0x4000,0);
                local_18 = lVar35 + CONCAT44(local_78,local_7c);
                uVar11 = ftol();
                *puVar25 = uVar11;
                lVar35 = __alldiv(local_144,0x4000,0);
                local_30 = lVar35 + CONCAT44(local_68,local_6c);
                uVar11 = ftol();
                puVar25[1] = uVar11;
                lVar35 = __alldiv(local_14c,0x4000,0);
                local_28 = lVar35 + CONCAT44(local_5c,local_60);
                uVar11 = ftol();
                puVar25[2] = uVar11;
                lVar34 = __alldiv(lVar34,0x4000,0);
                local_20 = lVar34 + CONCAT44(local_70,local_74);
                uVar11 = ftol();
                puVar25[3] = uVar11;
                local_11c = local_11c + 1;
                local_124 = local_124 + local_f0;
                local_13c = local_13c + local_f0;
                uVar14 = local_8c;
                iVar12 = local_4c;
              } while (local_11c < local_110);
            }
          }
          else {
            local_124 = 0;
            if (0 < local_110) {
              local_164 = 0;
              uVar13 = iVar12 + local_10c | 0x3fff;
              local_13c = 0;
              iVar12 = uVar13 + 1;
              iVar20 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
              iVar15 = (int)((local_10c & 0xffffc000) + ((int)local_10c >> 0x1f & 0x3fffU)) >> 0xe;
              local_16c = local_f0;
              do {
                iVar12 = ((-1 - local_f0) + local_16c | 0x3fff) + 1;
                local_130 = _DAT_00589f10;
                local_100 = _DAT_00589f10;
                local_98 = _DAT_00589f10;
                iVar24 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar12 = (int)((local_16c & 0xffffc000) + ((int)local_16c >> 0x1f & 0x3fffU)) >> 0xe
                ;
                dVar9 = _DAT_00589f10;
                if (iVar20 < iVar15) {
                  iVar29 = iVar20 * param_7 + local_158;
                  iVar26 = iVar15 - iVar20;
                  do {
                    if (iVar24 < iVar12) {
                      iVar31 = iVar12 - iVar24;
                      pfVar19 = (float *)(iVar24 * 0x10 + 8 + iVar29);
                      do {
                        dVar9 = (double)pfVar19[-2] + dVar9;
                        local_130 = (double)pfVar19[-1] + local_130;
                        local_100 = (double)*pfVar19 + local_100;
                        iVar31 = iVar31 + -1;
                        local_98 = local_98 + (double)pfVar19[1];
                        pfVar19 = pfVar19 + 4;
                      } while (iVar31 != 0);
                    }
                    iVar29 = iVar29 + param_7;
                    iVar26 = iVar26 + -1;
                  } while (iVar26 != 0);
                }
                iVar27 = (int)((local_118 & 0xffffc000) + ((int)local_118 >> 0x1f & 0x3fffU)) >> 0xe
                ;
                iVar24 = (local_10c - 1 | 0x3fff) + 1;
                iVar28 = iVar27 * param_7;
                iVar32 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar22 = (int)((local_13c & 0xffffc000) + ((int)local_13c >> 0x1f & 0x3fffU)) >> 0xe
                ;
                iVar24 = (local_16c - 1 | 0x3fff) + 1;
                iVar26 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
                local_10 = (double)(int)((uVar13 - local_118) + 1) * _DAT_0059a248;
                uVar14 = local_13c - 1 | 0x3fff;
                local_38 = (double)(int)(local_10c - (local_10c & 0xffffc000)) * _DAT_0059a248;
                iVar31 = iVar22 * 0x10;
                pfVar16 = (float *)(iVar31 + iVar28 + local_158);
                local_40 = (double)(int)((uVar14 - local_13c) + 1) * _DAT_0059a248;
                local_48 = (double)(int)(local_16c - (local_16c & 0xffffc000)) * _DAT_0059a248;
                dVar10 = local_40 * local_10;
                iVar21 = iVar26 * 0x10;
                iVar24 = iVar21 + iVar28;
                dVar2 = local_48 * local_10;
                iVar29 = iVar24 + -0x10 + local_158;
                iVar23 = (iVar32 + -1) * param_7;
                pfVar17 = (float *)(iVar23 + iVar31 + local_158);
                dVar1 = local_40 * local_38;
                local_108 = (double)*pfVar17 * dVar1 +
                            (double)*(float *)(iVar24 + -0x10 + local_158) * dVar2 +
                            (double)*pfVar16 * dVar10 + dVar9;
                pfVar19 = (float *)(iVar23 + iVar21 + -0x10 + local_158);
                local_138 = local_48 * local_38;
                fVar3 = *pfVar19 * (float)local_138 + (float)local_108;
                fVar7 = pfVar19[1] * (float)local_138 +
                        (float)((double)pfVar17[1] * dVar1 +
                               (double)*(float *)(iVar29 + 4) * dVar2 +
                               (double)(pfVar16[1] * (float)dVar10 + (float)local_130));
                fVar6 = pfVar19[2] * (float)local_138 +
                        (float)((double)pfVar17[2] * dVar1 +
                               (double)*(float *)(iVar29 + 8) * dVar2 +
                               (double)(pfVar16[2] * (float)dVar10 + (float)local_100));
                iVar24 = uVar14 + 1;
                fVar5 = pfVar19[3] * (float)local_138 +
                        (float)((double)pfVar17[3] * dVar1 +
                               (double)*(float *)(iVar29 + 0xc) * dVar2 +
                               (double)pfVar16[3] * dVar10 + local_98);
                iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
                pfVar19 = (float *)(iVar24 * 0x10 + iVar28 + local_158);
                if (iVar24 < iVar12) {
                  fVar8 = (float)local_10;
                  fVar4 = (float)local_38;
                  iVar12 = iVar12 - iVar24;
                  pfVar16 = (float *)(((iVar32 - iVar27) + -1) * param_7 + 8 + (int)pfVar19);
                  do {
                    iVar12 = iVar12 + -1;
                    fVar3 = pfVar16[-2] * fVar4 + *pfVar19 * fVar8 + fVar3;
                    fVar7 = pfVar16[-1] * fVar4 + pfVar19[1] * fVar8 + fVar7;
                    fVar6 = *pfVar16 * fVar4 + pfVar19[2] * fVar8 + fVar6;
                    fVar5 = pfVar16[1] * fVar4 + pfVar19[3] * fVar8 + fVar5;
                    pfVar19 = pfVar19 + 4;
                    pfVar16 = pfVar16 + 4;
                  } while (iVar12 != 0);
                }
                pfVar19 = (float *)(iVar22 * 0x10 + iVar20 * param_7 + local_158);
                if (iVar20 < iVar15) {
                  fVar4 = (float)local_40;
                  fVar8 = (float)local_48;
                  iVar12 = (iVar26 * 0x10 - (int)pfVar19) + iVar20 * param_7 + -0x10 + local_158;
                  iVar24 = iVar15 - iVar20;
                  do {
                    fVar3 = *(float *)(iVar12 + (int)pfVar19) * fVar8 + *pfVar19 * fVar4 + fVar3;
                    fVar7 = *(float *)(iVar12 + 4 + (int)pfVar19) * fVar8 +
                            pfVar19[1] * fVar4 + fVar7;
                    fVar6 = *(float *)(iVar12 + 8 + (int)pfVar19) * fVar8 +
                            pfVar19[2] * fVar4 + fVar6;
                    pfVar16 = pfVar19 + 3;
                    pfVar17 = (float *)(iVar12 + 0xc + (int)pfVar19);
                    pfVar19 = (float *)((int)pfVar19 + param_7);
                    iVar24 = iVar24 + -1;
                    fVar5 = *pfVar17 * fVar8 + *pfVar16 * fVar4 + fVar5;
                  } while (iVar24 != 0);
                }
                local_98 = (double)fVar5;
                local_100 = (double)fVar6;
                local_130 = (double)fVar7;
                *(float *)(local_cc + local_164) = fVar3 * (float)local_c0;
                iVar12 = local_cc + local_164;
                local_164 = local_164 + 0x10;
                *(float *)(iVar12 + 4) = fVar7 * (float)local_c0;
                *(float *)(iVar12 + 8) = fVar6 * (float)local_c0;
                *(float *)(iVar12 + 0xc) = fVar5 * (float)local_c0;
                local_13c = local_13c + local_f0;
                local_124 = local_124 + 1;
                local_16c = local_16c + local_f0;
                uVar14 = local_8c;
                iVar12 = local_4c;
              } while ((int)local_124 < local_110);
            }
          }
          local_cc = local_cc + param_3;
          local_118 = local_118 + uVar14;
          local_58 = local_58 + 1;
          local_10c = local_10c + uVar14;
          local_13c = local_f0;
        } while (local_58 < local_64);
      }
      return 0;
    }
    iVar12 = -0x7ff8ffa9;
  }
  return iVar12;
}



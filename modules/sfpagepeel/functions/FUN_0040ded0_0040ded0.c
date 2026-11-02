/* Module: sfpagepeel.dll
   Function: FUN_0040ded0
   Address: 0040ded0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0040ded0(int *param_1,byte *param_2,int *param_3,int param_4,int param_5,int *param_6,
            int *param_7,int param_8,int param_9,int param_10,double param_11,int param_12,
            undefined4 param_13,undefined4 param_14)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  LPVOID pMem;
  char cVar4;
  byte *pbVar5;
  HGLOBAL pvVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  int local_198;
  uint local_190;
  uint local_18c;
  int local_188;
  byte bStack_184;
  char cStack_183;
  char cStack_182;
  char cStack_181;
  char cStack_180;
  char cStack_17f;
  char cStack_17e;
  byte bStack_17d;
  uint local_178;
  uint uStack_174;
  byte bStack_16d;
  int local_16c;
  LPVOID local_168;
  undefined1 *local_164;
  uint local_160;
  byte *local_15c;
  undefined1 *local_158;
  int local_154;
  undefined8 local_150;
  uint local_144;
  uint local_140;
  undefined1 *local_13c;
  undefined8 local_138;
  int local_12c;
  double local_128;
  double dStack_120;
  undefined8 uStack_118;
  byte *pbStack_10c;
  byte *pbStack_108;
  byte *pbStack_104;
  byte *pbStack_100;
  byte bStack_fc;
  undefined3 uStack_fb;
  double local_f8;
  double local_f0;
  byte bStack_e8;
  undefined3 uStack_e7;
  byte bStack_e4;
  undefined3 uStack_e3;
  byte bStack_e0;
  undefined3 uStack_df;
  byte bStack_dc;
  undefined3 uStack_db;
  byte bStack_d8;
  undefined3 uStack_d7;
  byte bStack_d4;
  undefined3 uStack_d3;
  double dStack_d0;
  undefined8 local_c8;
  double dStack_c0;
  byte bStack_b4;
  undefined3 uStack_b3;
  double local_b0;
  double local_a8;
  byte bStack_9c;
  undefined3 uStack_9b;
  double local_98;
  byte abStack_90 [4];
  byte bStack_8c;
  undefined3 uStack_8b;
  byte bStack_88;
  undefined3 uStack_87;
  byte bStack_84;
  undefined3 uStack_83;
  byte bStack_80;
  undefined3 uStack_7f;
  byte bStack_7c;
  undefined3 uStack_7b;
  byte bStack_78;
  undefined3 uStack_77;
  byte bStack_74;
  undefined3 uStack_73;
  double local_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double dStack_18;
  double dStack_10;
  
  uVar12 = param_3[2] - *param_3;
  local_12c = param_3[3] - param_3[1];
  pbVar13 = param_2;
  iVar7 = param_9;
  local_18c = local_12c;
  if (0 < local_12c) {
    do {
      if (0 < (int)uVar12) {
        pbVar5 = pbVar13;
        local_178 = uVar12;
        do {
          *(undefined4 *)pbVar5 = *(undefined4 *)(pbVar5 + (iVar7 - (int)pbVar13));
          pbVar5 = pbVar5 + 4;
          local_178 = local_178 - 1;
        } while (local_178 != 0);
      }
      local_18c = local_18c + -1;
      pbVar13 = pbVar13 + param_4 * 4;
      iVar7 = iVar7 + param_10 * 4;
    } while (local_18c != 0);
  }
  local_160 = param_6[2] - *param_6;
  local_158 = (undefined1 *)param_6[1];
  local_144 = param_6[3] - (int)local_158;
  if ((double)CONCAT44(param_14,param_13) <= _DAT_00470c20) {
    param_13 = 0;
    param_14 = 0x3ff00000;
  }
  local_48 = _DAT_0046fdc0 / (double)CONCAT44(param_14,param_13);
  local_168 = (LPVOID)((int)local_144 / 2);
  local_a8 = (double)((int)local_160 / 2);
  local_b0 = (double)(int)local_168;
  local_50 = (local_a8 + _DAT_00470c18) - (double)*param_6;
  local_20 = (local_b0 + _DAT_00470c18) - (double)(int)local_158;
  fVar15 = (float10)fcos((float10)param_11);
  local_28 = (double)fVar15;
  fVar16 = (float10)fsin((float10)param_11);
  local_70 = (double)fVar16;
  fVar17 = (float10)fcos(-(float10)param_11);
  local_150 = (double)fVar17;
  local_60 = (double)fVar17;
  fVar17 = (float10)fsin(-(float10)param_11);
  local_128 = (double)fVar17;
  local_68 = (double)fVar17;
  local_38 = (double)-fVar16;
  local_40 = (double)fVar15;
  local_30 = -local_128;
  local_140 = uVar12;
  local_98 = local_150;
  pvVar6 = GlobalAlloc(0x40,uVar12 * 3 + 6);
  local_168 = GlobalLock(pvVar6);
  if (local_168 == (LPVOID)0x0) {
    return 0x80004005;
  }
  local_154 = param_1[4];
  local_16c = 0;
  local_15c = param_2;
  puVar9 = (undefined1 *)((int)local_168 + 1);
  puVar10 = (undefined1 *)((int)local_168 + uVar12 * 2 + 5);
  puVar11 = (undefined1 *)((int)local_168 + uVar12 + 3);
  if (-1 < local_12c) {
    do {
      local_164 = puVar9;
      local_158 = puVar11;
      local_13c = puVar9;
      if (local_16c < local_12c) {
        local_188 = 0;
        dVar3 = ((double)(param_7[1] + local_16c) - local_b0) * (double)CONCAT44(param_14,param_13);
        local_13c = puVar10;
        if (0 < (int)uVar12) {
          local_128 = dVar3 * local_70;
          local_c8 = dVar3 * local_40;
          pbVar13 = local_15c;
          do {
            iVar7 = *param_7;
            local_190 = 0;
            puVar10[local_188] = 0x7f;
            dVar3 = (double)(local_188 + iVar7) - local_a8;
            local_138 = dVar3 * local_28 + local_128;
            local_150 = dVar3 * local_38 + local_c8;
            if (0 < local_154) {
              do {
                iVar7 = (**(code **)(*param_1 + 4))
                                  ((undefined4)local_138,local_138._4_4_,(undefined4)local_150,
                                   local_150._4_4_,&local_f0,&local_f8,local_190);
                if (iVar7 != 0) {
                  dStack_c0 = (local_f0 * local_30 + local_f8 * local_98) * local_48 + local_20;
                  dStack_d0 = local_f0 * local_60 + local_f8 * local_68 + local_50;
                  iVar7 = ftol();
                  uVar12 = iVar7 + 0xc4653600;
                  iVar8 = ftol();
                  uStack_174 = iVar8 + 0xc4653600;
                  if (param_12 == 0) {
                    if ((uVar12 < local_144) && (uStack_174 < local_160)) {
                      pbVar5 = (byte *)(param_5 + (uVar12 * param_8 + uStack_174) * 4);
                      puVar10[local_188] = (char)local_190;
LAB_0040e3f1:
                      bVar1 = *(byte *)(param_1 + 5);
                      _bStack_88 = CONCAT31(uStack_87,bVar1);
                      if (bVar1 != 0) {
                        bVar2 = pbVar5[2];
                        _bStack_fc = CONCAT31(uStack_fb,bVar2);
                        uVar12 = (uint)bVar1;
                        iVar7 = ((uint)*(byte *)(param_1 + 6) - (uint)bVar2) * uVar12;
                        cStack_182 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar2;
                        bVar1 = pbVar5[1];
                        _bStack_d8 = CONCAT31(uStack_d7,bVar1);
                        iVar7 = ((uint)*(byte *)((int)param_1 + 0x17) - (uint)bVar1) * uVar12;
                        cStack_183 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar1;
                        bVar1 = *pbVar5;
                        _bStack_e4 = CONCAT31(uStack_e3,bVar1);
                        bVar2 = pbVar5[3];
                        _bStack_9c = CONCAT31(uStack_9b,bVar2);
                        iVar7 = ((uint)*(byte *)((int)param_1 + 0x16) - (uint)bVar1) * uVar12;
                        bStack_184 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar1;
                        iVar7 = (0xff - (uint)bVar2) * uVar12;
                        pbVar5 = &bStack_184;
                        cStack_181 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar2;
                      }
                      bVar1 = pbVar13[2];
                      _bStack_dc = CONCAT31(uStack_db,bVar1);
                      _bStack_78 = CONCAT31(uStack_77,*(byte *)((int)param_1 + 0x15));
                      uVar12 = (uint)*(byte *)((int)param_1 + 0x15);
                      iVar7 = ((uint)pbVar5[2] - (uint)bVar1) * uVar12;
                      pbVar13[2] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar1;
                      bVar1 = pbVar13[1];
                      _bStack_d4 = CONCAT31(uStack_d3,bVar1);
                      iVar7 = ((uint)pbVar5[1] - (uint)bVar1) * uVar12;
                      pbVar13[1] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar1;
                      bVar1 = *pbVar13;
                      _bStack_e0 = CONCAT31(uStack_df,bVar1);
                      iVar7 = ((uint)*pbVar5 - (uint)bVar1) * uVar12;
                      *pbVar13 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar1;
                      bVar1 = pbVar13[3];
                      _bStack_e8 = CONCAT31(uStack_e7,bVar1);
                      iVar7 = ((uint)pbVar5[3] - (uint)bVar1) * uVar12;
                      pbVar13[3] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar1;
                    }
                  }
                  else {
                    uStack_118 = (double)CONCAT44(uStack_118._4_4_,iVar7 + -999999999);
                    if ((((-1 < iVar7 + -999999999) && ((int)uVar12 < (int)local_144)) &&
                        (local_178 = iVar8 + 0xc4653601, -1 < (int)local_178)) &&
                       ((int)uStack_174 < (int)local_160)) {
                      iVar7 = ftol();
                      iVar8 = ftol();
                      pbVar5 = (byte *)(param_5 + (uVar12 * param_8 + uStack_174) * 4);
                      cVar4 = (char)local_190;
                      pbStack_10c = pbVar5;
                      pbStack_104 = pbVar5 + param_8 * 4;
                      if ((int)uStack_174 < 0) {
                        cVar4 = (char)local_190 + -0x80;
                        pbStack_10c = pbVar13;
                        pbStack_104 = pbVar13;
                      }
                      pbStack_108 = pbVar5 + 4;
                      pbStack_100 = pbVar5 + param_8 * 4 + 4;
                      if ((int)local_160 <= (int)local_178) {
                        cVar4 = (char)local_190 + -0x80;
                        pbStack_108 = pbVar13;
                        pbStack_100 = pbVar13;
                      }
                      if ((int)uVar12 < 0) {
                        cVar4 = (char)local_190 + -0x80;
                        pbStack_10c = pbVar13;
                        pbStack_108 = pbVar13;
                      }
                      if ((int)local_144 <= (int)uStack_118) {
                        cVar4 = (char)local_190 + -0x80;
                        pbStack_104 = pbVar13;
                        pbStack_100 = pbVar13;
                      }
                      puVar10[local_188] = cVar4;
                      FUN_0040dd60(abStack_90,&pbStack_10c,0x100 - iVar8,0x100 - iVar7);
                      pbVar5 = abStack_90;
                      goto LAB_0040e3f1;
                    }
                  }
                }
                local_190 = local_190 + 1;
                uVar12 = local_140;
              } while ((int)local_190 < local_154);
            }
            local_188 = local_188 + 1;
            pbVar13 = pbVar13 + 4;
          } while (local_188 < (int)uVar12);
        }
      }
      if ((param_12 != 0) && (0 < local_16c)) {
        if ((local_16c == 1) && (0 < (int)uVar12)) {
          puVar9 = local_158;
          uVar14 = uVar12;
          do {
            *puVar9 = puVar9[(int)local_164 - (int)local_158];
            puVar9 = puVar9 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        local_164[-1] = *local_164;
        local_164[uVar12] = local_164[uVar12 - 1];
        local_188 = 0;
        if (0 < (int)uVar12) {
          do {
            bVar1 = local_164[local_188];
            if ((0x7f < bVar1) ||
               (bStack_16d = local_13c[local_188 + 1],
               (byte)(local_13c[local_188] & bStack_16d & local_164[local_188 + 1] & bVar1) !=
               (byte)(local_13c[local_188] | bStack_16d | local_164[local_188 + 1] | bVar1))) {
              pbVar13 = local_15c + (local_188 - param_4) * 4;
              dStack_c0 = (double)CONCAT44(dStack_c0._4_4_,pbVar13);
              local_150 = (double)local_16c;
              local_138 = (double)local_16c - _DAT_0046fdc0;
              dStack_d0 = (double)CONCAT44(dStack_d0._4_4_,
                                           *(undefined4 *)
                                            (param_9 + ((local_16c + -1) * param_10 + local_188) * 4
                                            ));
              local_18c = 0;
              uStack_174 = 0;
              local_190 = 0;
              local_178 = 0;
              if (local_138 <= local_150) {
                dStack_58 = (double)local_188;
                uStack_118 = (double)CONCAT44(uStack_118._4_4_,local_188 + 1);
                local_128 = (double)(local_188 + 1);
                do {
                  dStack_120 = dStack_58;
                  dVar3 = (((double)param_7[1] + local_138) - local_b0) *
                          (double)CONCAT44(param_14,param_13);
                  if (dStack_58 <= local_128) {
                    dStack_18 = dVar3 * local_70;
                    dStack_10 = dVar3 * local_40;
                    do {
                      cStack_180 = SUB81(dStack_d0,0);
                      cStack_17f = (char)((ulonglong)dStack_d0 >> 8);
                      cStack_17e = (char)((ulonglong)dStack_d0 >> 0x10);
                      bStack_17d = (byte)((ulonglong)dStack_d0 >> 0x18);
                      local_198 = 0;
                      dVar3 = ((double)*param_7 + dStack_120) - local_a8;
                      local_c8 = dVar3 * local_28 + dStack_18;
                      uStack_118 = dVar3 * local_38 + dStack_10;
                      uVar12 = dStack_d0._0_4_;
                      if (0 < local_154) {
                        do {
                          iVar7 = (**(code **)(*param_1 + 4))
                                            ((undefined4)local_c8,local_c8._4_4_,(int)uStack_118,
                                             uStack_118._4_4_,&local_f0,&local_f8,local_198);
                          if (iVar7 != 0) {
                            iVar7 = ftol();
                            if (iVar7 + 0xc4653600U < local_144) {
                              iVar8 = ftol();
                              if (iVar8 + 0xc4653600U < local_160) {
                                bVar1 = *(byte *)(param_1 + 5);
                                pbVar13 = (byte *)(param_5 +
                                                  ((iVar7 + 0xc4653600U) * param_8 +
                                                  iVar8 + 0xc4653600U) * 4);
                                _bStack_b4 = CONCAT31(uStack_b3,bVar1);
                                if (bVar1 != 0) {
                                  bVar2 = pbVar13[2];
                                  _bStack_8c = CONCAT31(uStack_8b,bVar2);
                                  uVar12 = (uint)bVar1;
                                  iVar7 = ((uint)*(byte *)(param_1 + 6) - (uint)bVar2) * uVar12;
                                  bVar1 = pbVar13[1];
                                  _bStack_74 = CONCAT31(uStack_73,bVar1);
                                  cStack_182 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar2;
                                  iVar7 = ((uint)*(byte *)((int)param_1 + 0x17) - (uint)bVar1) *
                                          uVar12;
                                  bVar2 = *pbVar13;
                                  _bStack_80 = CONCAT31(uStack_7f,bVar2);
                                  cStack_183 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar1;
                                  bVar1 = pbVar13[3];
                                  iVar7 = ((uint)*(byte *)((int)param_1 + 0x16) - (uint)bVar2) *
                                          uVar12;
                                  _bStack_84 = CONCAT31(uStack_83,bVar1);
                                  bStack_184 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar2;
                                  iVar7 = (0xff - (uint)bVar1) * uVar12;
                                  pbVar13 = &bStack_184;
                                  cStack_181 = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + bVar1;
                                }
                                _bStack_7c = CONCAT31(uStack_7b,*(byte *)((int)param_1 + 0x15));
                                uVar12 = (uint)*(byte *)((int)param_1 + 0x15);
                                iVar7 = ((uint)pbVar13[2] - (CONCAT11(bStack_17d,cStack_17e) & 0xff)
                                        ) * uVar12;
                                cStack_17e = cStack_17e +
                                             (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8);
                                iVar7 = ((uint)pbVar13[1] -
                                        (CONCAT12(bStack_17d,CONCAT11(cStack_17e,cStack_17f)) & 0xff
                                        )) * uVar12;
                                cStack_17f = cStack_17f +
                                             (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8);
                                iVar7 = ((uint)*pbVar13 -
                                        (CONCAT12(cStack_17e,CONCAT11(cStack_17f,cStack_180)) & 0xff
                                        )) * uVar12;
                                cStack_180 = cStack_180 +
                                             (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8);
                                iVar7 = ((uint)pbVar13[3] - (uint)bStack_17d) * uVar12;
                                bStack_17d = bStack_17d +
                                             (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8);
                                uVar12 = CONCAT13(bStack_17d,
                                                  CONCAT12(cStack_17e,
                                                           CONCAT11(cStack_17f,cStack_180)));
                              }
                            }
                          }
                          local_198 = local_198 + 1;
                        } while (local_198 < local_154);
                      }
                      dStack_120 = dStack_120 + _DAT_00470c08;
                      uStack_174 = uStack_174 +
                                   (CONCAT12(bStack_17d,CONCAT11(cStack_17e,cStack_17f)) & 0xff);
                      local_18c = local_18c + (CONCAT11(bStack_17d,cStack_17e) & 0xff);
                      local_178 = local_178 + bStack_17d;
                      local_190 = local_190 + (uVar12 & 0xff);
                    } while (dStack_120 <= local_128);
                    pbVar13 = dStack_c0._0_4_;
                  }
                  local_138 = local_138 + _DAT_00470c08;
                } while (local_138 <= local_150);
              }
              pbVar13[2] = (byte)(local_18c >> 4);
              pbVar13[1] = (byte)(uStack_174 >> 4);
              *pbVar13 = (byte)(local_190 >> 4);
              pbVar13[3] = (byte)(local_178 >> 4);
            }
            local_188 = local_188 + 1;
            uVar12 = local_140;
          } while (local_188 < (int)local_140);
        }
      }
      local_16c = local_16c + 1;
      local_15c = local_15c + param_4 * 4;
      puVar9 = local_13c;
      puVar10 = local_158;
      puVar11 = local_164;
    } while (local_16c <= local_12c);
  }
  pMem = local_168;
  pvVar6 = GlobalHandle(local_168);
  GlobalUnlock(pvVar6);
  pvVar6 = GlobalHandle(pMem);
  GlobalFree(pvVar6);
  return 0;
}



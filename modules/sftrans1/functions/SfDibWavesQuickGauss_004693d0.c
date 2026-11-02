/* Module: sftrans1.dll
   Function: SfDibWavesQuickGauss
   Address: 004693d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibWavesQuickGauss(void *,struct tagRECT *,long,struct tagRECT *,void *,struct
   tagRECT *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct
   tWAVESPROP &,double) */

long SfDibWavesQuickGauss
               (void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
               tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
               long param_11,tagRECT *param_12,long param_13,tWAVESPROP *param_14,double param_15)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  double *pdVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  undefined4 local_248;
  undefined4 uStack_244;
  int *local_240;
  int *local_23c;
  int local_238;
  uint local_234;
  uint uStack_230;
  uint local_228;
  int local_220;
  uint local_21c;
  int local_218;
  uint local_214;
  double local_210;
  int iStack_208;
  int *local_204;
  uint uStack_200;
  int iStack_1fc;
  double local_1f8;
  int local_1ec;
  double local_1e8;
  int iStack_1dc;
  uint uStack_1d8;
  byte bStack_1d4;
  undefined3 uStack_1d3;
  byte bStack_1d0;
  undefined3 uStack_1cf;
  byte bStack_1cc;
  undefined3 uStack_1cb;
  byte bStack_1c8;
  undefined3 uStack_1c7;
  byte bStack_1c4;
  undefined3 uStack_1c3;
  byte bStack_1c0;
  undefined3 uStack_1bf;
  undefined1 local_1bc [4];
  double local_1b8;
  undefined1 local_1ac [4];
  undefined8 uStack_1a8;
  int local_19c;
  undefined1 local_198 [32];
  undefined4 local_178 [2];
  double local_170 [45];
  
                    /* 0x693d0  29
                       ?SfDibWavesQuickGauss@@YGJPAXPAUtagRECT@@J101J101J1JAAUtWAVESPROP@@N@Z */
  FUN_004cdc70(local_198,local_1bc,local_1ac,&local_218,&local_220,param_1,param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_13);
  iVar9 = FUN_004cdc70(local_198,local_1bc,local_1ac,&local_214,&local_220,param_1,param_2,param_3,
                       param_4,param_9,param_10,param_11,param_12,param_13);
  if (iVar9 < 0) {
    return iVar9;
  }
  if (_DAT_00555910 <= param_15) {
    if (_DAT_00555908 < param_15) {
      param_15 = 1.0;
    }
  }
  else {
    param_15 = 0.0;
  }
  iVar16 = param_2->right - param_2->left;
  local_21c = param_2->bottom - param_2->top;
  uStack_1a8 = (double)CONCAT44(param_6->top << 0xe,(undefined4)uStack_1a8);
  iVar9 = param_6->bottom - param_6->top;
  local_19c = param_6->bottom << 0xe;
  local_1ec = *(int *)(param_14 + 0x14);
  local_1e8 = (double)(*(float *)(param_14 + 0x10) * _DAT_00561090);
  if (_DAT_00555910 == local_1e8) {
    local_1ec = 0;
  }
  else if (local_1ec != 0) {
    local_1f8 = 0.0;
    goto LAB_0046952d;
  }
  local_1f8 = (double)(*(float *)(param_14 + 0xc) * (float)iVar9);
LAB_0046952d:
  puVar10 = local_178;
  iVar13 = 8;
  do {
    puVar10[-4] = 0;
    puVar10[-2] = 0;
    *puVar10 = 0;
    puVar10[2] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0;
    puVar10[-3] = 0;
    puVar10[-1] = 0x3ff00000;
    puVar10[1] = 0;
    puVar10[3] = 0;
    puVar10[5] = 0;
    puVar10[7] = 0;
    puVar10 = puVar10 + 0xc;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  fVar1 = *(float *)param_14;
  local_234 = 0;
  fVar2 = *(float *)(param_14 + 8);
  fVar3 = *(float *)(param_14 + 4);
  pdVar11 = local_170;
  dVar4 = _DAT_00555908;
  do {
    iVar13 = local_234 + 1;
    pdVar11[-3] = ((double)fVar1 * (double)_DAT_005610d8 + _DAT_005610d0) * (double)iVar9 * dVar4;
    *pdVar11 = (double)(int)(local_234 + 3) * _DAT_005610c0;
    *(undefined4 *)(pdVar11 + -2) = 0;
    *(undefined4 *)((int)pdVar11 + -0xc) = 0x3ff00000;
    pdVar11[-1] = (_DAT_00555908 - dVar4) * ((double)fVar2 * _DAT_005610c8 + _DAT_0055e6d0) *
                  _DAT_005610b8 + _DAT_00555908;
    pdVar11[1] = (double)(int)local_234 * ((double)fVar3 * _DAT_005610c8 + _DAT_0055e6d0) +
                 _DAT_0055f628;
    pdVar11[2] = (double)(int)local_234 * _DAT_005610c0;
    dVar4 = ((double)fVar3 * _DAT_00557838 + _DAT_0055f628) * dVar4;
    pdVar11 = pdVar11 + 6;
    local_234 = iVar13;
  } while (iVar13 < 8);
  local_23c = calloc(1,iVar16 * 4);
  if (local_23c != (int *)0x0) {
    local_234 = 0;
    local_240 = (int *)0x0;
    local_238 = 0;
    local_204 = local_23c;
    if (0 < iVar16) {
      local_210 = param_15 * _DAT_005610b0 + _DAT_005610a8;
      local_1b8 = (_DAT_00555908 - param_15) * _DAT_005610b0 + _DAT_005610a8;
      do {
        iVar13 = 0;
        pdVar11 = local_170;
        iVar9 = 8;
        dVar4 = (double)local_238 * _DAT_00560f48;
        do {
          fsin(((float10)param_15 * (float10)pdVar11[-1] + (float10)*pdVar11) *
               (float10)_DAT_00560f48);
          _CIpow();
          fsin((float10)pdVar11[2] * (float10)_DAT_00560f48 +
               (float10)(dVar4 / (double)iVar16) * (float10)pdVar11[1]);
          iVar12 = ftol();
          iVar13 = iVar13 + iVar12;
          pdVar11 = pdVar11 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if ((int)local_234 <= iVar13) {
          local_234 = iVar13;
        }
        if (iVar13 <= (int)local_240) {
          local_240 = (int *)iVar13;
        }
        local_238 = local_238 + 1;
        *local_23c = iVar13;
        local_23c = local_23c + 1;
      } while (local_238 < iVar16);
    }
    iVar9 = 8;
    do {
      ftol();
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    ftol();
    iStack_1dc = ftol();
    iStack_1fc = local_220;
    iStack_208 = local_218;
    uStack_200 = local_214;
    if (0 < (int)local_21c) {
      local_240 = (int *)0x0;
      local_234 = local_21c;
      do {
        local_238 = 0;
        if (0 < iVar16) {
          local_23c = local_204 + -1;
          puVar19 = (undefined1 *)(local_220 + 2);
          do {
            iVar13 = local_23c[1] + (int)local_240;
            bVar5 = ftol();
            iVar9 = iVar13;
            if (local_238 < iVar16 + -1) {
              iVar9 = local_23c[2] + (int)local_240;
            }
            iVar12 = iVar13;
            if (0 < local_238) {
              iVar12 = (int)local_240 + *local_23c;
            }
            if ((iVar13 + 0x4000 <= iVar9) && (bVar6 = ftol(), bVar6 <= bVar5)) {
              bVar5 = ftol();
            }
            if ((iVar13 + 0x4000 <= iVar12) && (bVar6 = ftol(), bVar6 <= bVar5)) {
              bVar5 = ftol();
            }
            local_23c = local_23c + 1;
            uVar7 = (undefined1)((uint)bVar5 * 0xff >> 8);
            puVar19[-2] = uVar7;
            puVar19[-1] = uVar7;
            *puVar19 = uVar7;
            puVar19[1] = 0xff;
            local_238 = local_238 + 1;
            puVar19 = puVar19 + 4;
          } while (local_238 < iVar16);
        }
        local_218 = local_218 + param_7;
        local_214 = local_214 + param_11;
        local_220 = local_220 + param_3;
        local_240 = (int *)((int)local_240 + 0x4000);
        local_234 = local_234 - 1;
      } while (local_234 != 0);
    }
    uVar14 = local_21c;
    local_214 = uStack_200;
    local_220 = iStack_1fc;
    local_218 = iStack_208;
    dVar4 = local_1f8;
    if (local_1ec != 0) {
      dVar4 = local_1e8;
    }
    if (_DAT_00555910 < dVar4) {
      uStack_244 = (undefined4)((ulonglong)dVar4 >> 0x20);
      local_248 = SUB84(dVar4,0);
      FUN_004da570(param_1,param_2,param_3,param_4,param_1,param_2,param_3,param_4,local_248,
                   uStack_244,local_248,uStack_244,2,param_13);
    }
    if (0 < (int)uVar14) {
      local_23c = (int *)0x0;
      local_228 = local_21c;
      do {
        local_238 = 0;
        if (0 < iVar16) {
          pbVar18 = (byte *)(local_220 + 2);
          local_240 = local_204 + -1;
          pbVar20 = (byte *)(local_214 + 1);
          pbVar17 = (byte *)(local_218 + 2);
          do {
            iVar9 = local_240[1] + (int)local_23c;
            if (local_1ec == 0) {
              bVar5 = *pbVar18;
              local_1b8 = (double)CONCAT71(local_1b8._1_7_,bVar5);
              if (bVar5 != 0) {
                if (bVar5 != 0xff) {
                  bVar5 = pbVar17[-2];
                  _bStack_1cc = CONCAT31(uStack_1cb,bVar5);
                  uVar14 = local_1b8._0_4_ & 0xff;
                  iVar9 = ((uint)pbVar20[-1] - (uint)bVar5) * uVar14;
                  pbVar18[-2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar5;
                  bVar5 = pbVar17[-1];
                  _bStack_1c4 = CONCAT31(uStack_1c3,bVar5);
                  iVar9 = ((uint)*pbVar20 - (uint)bVar5) * uVar14;
                  pbVar18[-1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar5;
                  bVar5 = *pbVar17;
                  _bStack_1d4 = CONCAT31(uStack_1d3,bVar5);
                  iVar9 = ((uint)pbVar20[1] - (uint)bVar5) * uVar14;
                  *pbVar18 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar5;
                  local_248._3_1_ = pbVar17[1];
                  _bStack_1c0 = CONCAT31(uStack_1bf,local_248._3_1_);
                  iVar9 = ((uint)pbVar20[2] - (uint)local_248._3_1_) * uVar14;
                  cVar8 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8);
                  goto LAB_0046a039;
                }
                pbVar18[-2] = pbVar20[-1];
                pbVar18[-1] = *pbVar20;
                *pbVar18 = pbVar20[1];
                local_248._3_1_ = pbVar20[2];
                goto LAB_0046a03b;
              }
              pbVar18[-2] = pbVar17[-2];
              pbVar18[-1] = pbVar17[-1];
              *pbVar18 = *pbVar17;
              pbVar18[1] = pbVar17[1];
            }
            else {
              local_1f8 = (double)CONCAT71(local_1f8._1_7_,pbVar18[-1]);
              if (iStack_1dc == iVar9 || iStack_1dc - iVar9 < 0) {
                local_234 = (uint)pbVar20[1];
                uStack_230 = (uint)*pbVar20;
                local_21c = CONCAT31(local_21c._1_3_,pbVar20[-1]);
              }
              else {
                iVar13 = iVar9;
                if (local_238 < iVar16 + -1) {
                  iVar13 = local_240[2] + (int)local_23c;
                }
                if (0 < local_238) {
                  iVar9 = (int)local_23c + *local_240;
                }
                iVar9 = (iVar13 - iVar9) / 2;
                uStack_1a8 = (double)iVar9;
                fVar21 = ((float10)*pbVar18 - (float10)_DAT_005610f0) * (float10)local_1e8 *
                         (float10)_DAT_005610e8;
                if (fVar21 <= (float10)_DAT_00555910) {
                  fVar21 = (float10)_DAT_00555910;
                }
                fVar21 = (float10)_DAT_00555908 - fVar21;
                fVar22 = fVar21;
                if ((float10)local_1e8 <= fVar21) {
                  fVar22 = (float10)local_1e8;
                }
                fVar22 = (float10)_DAT_00555908 - fVar22 / (float10)local_1e8;
                fVar22 = (float10)fcos(((float10)_DAT_0055d660 -
                                       (SQRT((float10)_DAT_00555908 - fVar22 * fVar22) *
                                        (float10)_DAT_00557d70 - (float10)_DAT_0055d660)) *
                                       (float10)_DAT_0055d680);
                fVar23 = (float10)fpatan((float10)iVar9,(float10)_DAT_0055f610);
                fVar23 = (float10)fcos(((fVar23 * (float10)_DAT_00560ef8 + (float10)_DAT_0055d660) -
                                       (float10)_DAT_0055d660) * (float10)_DAT_0055d680);
                fVar22 = (fVar23 + (float10)_DAT_00555908) * (fVar22 + (float10)_DAT_00555908) *
                         (float10)_DAT_00557838 - (float10)_DAT_00555908;
                local_210 = (double)(((float10)_DAT_00555908 - fVar21 / (float10)local_1e8) *
                                    ABS(fVar22));
                if (fVar22 < (float10)_DAT_00555910) {
                  uStack_200 = CONCAT31(uStack_200._1_3_,pbVar20[-1]);
                  uVar14 = ftol();
                  uVar14 = uVar14 & 0xff;
                  local_21c = CONCAT31(local_21c._1_3_,
                                       (char)uStack_200 - (char)((uStack_200 & 0xff) * uVar14 >> 8))
                  ;
                  bVar5 = *pbVar20;
                  iStack_208 = CONCAT31(iStack_208._1_3_,bVar5);
                  uStack_230 = (uint)(byte)(bVar5 - (char)(bVar5 * uVar14 >> 8));
                  bVar5 = pbVar20[1];
                  iStack_1fc = CONCAT31(iStack_1fc._1_3_,bVar5);
                  local_234 = (uint)(byte)(bVar5 - (char)(bVar5 * uVar14 >> 8));
                }
                else {
                  uStack_1d8 = CONCAT31(uStack_1d8._1_3_,pbVar20[-1]);
                  uVar14 = ftol();
                  uVar14 = uVar14 & 0xff;
                  iVar9 = (0xff - (uStack_1d8 & 0xff)) * uVar14;
                  local_21c = CONCAT31(local_21c._1_3_,
                                       (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) +
                                       (char)uStack_1d8);
                  bVar5 = *pbVar20;
                  _bStack_1d0 = CONCAT31(uStack_1cf,bVar5);
                  iVar9 = (0xff - (uint)bVar5) * uVar14;
                  uStack_230 = (uint)(byte)((char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar5);
                  bVar5 = pbVar20[1];
                  _bStack_1c8 = CONCAT31(uStack_1c7,bVar5);
                  iVar9 = (0xff - (uint)bVar5) * uVar14;
                  local_234 = (uint)(byte)((char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + bVar5);
                }
              }
              uVar14 = *(uint *)(pbVar17 + -2);
              uVar15 = local_1f8._0_4_ & 0xff;
              iVar9 = ((local_21c & 0xff) - (uVar14 & 0xff)) * uVar15;
              local_248._0_1_ = (char)uVar14;
              pbVar18[-2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + (char)local_248;
              iVar9 = (uStack_230 - (uVar14 >> 8 & 0xff)) * uVar15;
              local_248._1_1_ = (char)(uVar14 >> 8);
              pbVar18[-1] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + local_248._1_1_;
              iVar9 = (local_234 - (uVar14 >> 0x10 & 0xff)) * uVar15;
              local_248._2_1_ = (char)(uVar14 >> 0x10);
              *pbVar18 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + local_248._2_1_;
              iVar9 = ((uint)pbVar20[2] - (uVar14 >> 0x18)) * uVar15;
              local_248._3_1_ = (byte)(uVar14 >> 0x18);
              cVar8 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8);
LAB_0046a039:
              local_248._3_1_ = cVar8 + local_248._3_1_;
LAB_0046a03b:
              pbVar18[1] = local_248._3_1_;
            }
            local_240 = local_240 + 1;
            local_238 = local_238 + 1;
            pbVar17 = pbVar17 + 4;
            pbVar20 = pbVar20 + 4;
            pbVar18 = pbVar18 + 4;
          } while (local_238 < iVar16);
        }
        local_220 = local_220 + param_3;
        local_218 = local_218 + param_7;
        local_214 = local_214 + param_11;
        local_23c = (int *)((int)local_23c + 0x4000);
        local_228 = local_228 - 1;
      } while (local_228 != 0);
    }
    free(local_204);
  }
  return 0;
}



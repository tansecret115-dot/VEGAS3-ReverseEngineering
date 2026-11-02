/* Module: sftrans1.dll
   Function: SfDibWavesQuick
   Address: 00468780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibWavesQuick(void *,struct tagRECT *,long,struct tagRECT *,void *,struct
   tagRECT *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct
   tWAVESPROP &,double) */

long SfDibWavesQuick(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
                    tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
                    long param_11,tagRECT *param_12,long param_13,tWAVESPROP *param_14,
                    double param_15)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  double dVar5;
  uint3 uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  int iVar10;
  undefined4 *puVar11;
  double *pdVar12;
  int *_Memory;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  char cVar19;
  char cVar20;
  byte *pbVar21;
  char *pcVar22;
  float10 fVar23;
  float10 fVar24;
  uint local_26c;
  undefined1 local_268 [2];
  undefined4 uStack_266;
  int *local_260;
  int iStack_25c;
  byte *pbStack_258;
  int *piStack_254;
  int local_23c;
  int iStack_234;
  int local_230;
  int local_228;
  int iStack_224;
  undefined8 local_220;
  uint uStack_214;
  int local_210;
  int local_20c;
  int local_208;
  int iStack_204;
  byte bStack_200;
  undefined3 uStack_1ff;
  byte bStack_1fc;
  undefined3 uStack_1fb;
  byte bStack_1f8;
  undefined3 uStack_1f7;
  byte bStack_1f4;
  undefined3 uStack_1f3;
  double local_1f0;
  byte bStack_1e8;
  undefined3 uStack_1e7;
  int iStack_1e4;
  byte bStack_1e0;
  undefined3 uStack_1df;
  byte bStack_1dc;
  undefined3 uStack_1db;
  double local_1d8;
  byte bStack_1cc;
  undefined3 uStack_1cb;
  double local_1c8;
  byte bStack_1bc;
  undefined3 uStack_1bb;
  double local_1b8;
  int local_1b0;
  int iStack_1ac;
  undefined1 local_1a8 [4];
  undefined1 local_1a4 [4];
  byte bStack_1a0;
  undefined3 uStack_19f;
  byte bStack_19c;
  undefined3 uStack_19b;
  undefined1 local_198 [32];
  undefined4 local_178 [2];
  double local_170 [45];
  
                    /* 0x68780  28
                       ?SfDibWavesQuick@@YGJPAXPAUtagRECT@@J101J101J1JAAUtWAVESPROP@@N@Z */
  FUN_004cdc70(local_198,local_1a8,local_1a4,&local_20c,&local_228,param_1,param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_13);
  lVar9 = FUN_004cdc70(local_198,local_1a8,local_1a4,&local_208,&local_228,param_1,param_2,param_3,
                       param_4,param_9,param_10,param_11,param_12,param_13);
  if (-1 < lVar9) {
    if (_DAT_00555910 <= param_15) {
      if (_DAT_00555908 < param_15) {
        param_15 = 1.0;
      }
    }
    else {
      param_15 = 0.0;
    }
    iVar18 = param_2->right - param_2->left;
    local_210 = param_2->bottom - param_2->top;
    iVar10 = param_6->bottom - param_6->top;
    local_1b0 = *(int *)(param_14 + 0x14);
    if (local_1b0 == 0) {
      local_1f0 = (double)(*(float *)(param_14 + 0xc) * (float)iVar10 + (float)_DAT_00555908);
    }
    else {
      local_1f0 = 1.0;
    }
    puVar11 = local_178;
    iVar14 = 8;
    do {
      puVar11[-4] = 0;
      puVar11[-2] = 0;
      *puVar11 = 0;
      puVar11[2] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0;
      puVar11[-3] = 0;
      puVar11[-1] = 0x3ff00000;
      puVar11[1] = 0;
      puVar11[3] = 0;
      puVar11[5] = 0;
      puVar11[7] = 0;
      puVar11 = puVar11 + 0xc;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    fVar1 = *(float *)param_14;
    local_23c = 0;
    fVar2 = *(float *)(param_14 + 8);
    fVar3 = *(float *)(param_14 + 4);
    pdVar12 = local_170;
    dVar5 = _DAT_00555908;
    do {
      iVar14 = local_23c + 1;
      pdVar12[-3] = ((double)fVar1 * (double)_DAT_005610d8 + _DAT_005610d0) * (double)iVar10 * dVar5
      ;
      *pdVar12 = (double)(local_23c + 3) * _DAT_005610c0;
      *(undefined4 *)(pdVar12 + -2) = 0;
      *(undefined4 *)((int)pdVar12 + -0xc) = 0x3ff00000;
      pdVar12[-1] = (_DAT_00555908 - dVar5) * ((double)fVar2 * _DAT_005610c8 + _DAT_0055e6d0) *
                    _DAT_005610b8 + _DAT_00555908;
      pdVar12[1] = (double)local_23c * ((double)fVar3 * _DAT_005610c8 + _DAT_0055e6d0) +
                   _DAT_0055f628;
      pdVar12[2] = (double)local_23c * _DAT_005610c0;
      dVar5 = ((double)fVar3 * _DAT_00557838 + _DAT_0055f628) * dVar5;
      pdVar12 = pdVar12 + 6;
      local_23c = iVar14;
    } while (iVar14 < 8);
    _Memory = calloc(1,iVar18 * 4);
    if (_Memory != (int *)0x0) {
      local_230 = 0;
      local_220 = (double)((ulonglong)local_220._4_4_ << 0x20);
      local_26c = 0;
      if (0 < iVar18) {
        local_1b8 = param_15 * _DAT_005610b0 + _DAT_005610a8;
        local_1c8 = (_DAT_00555908 - param_15) * _DAT_005610b0 + _DAT_005610a8;
        local_260 = _Memory;
        do {
          iVar14 = 0;
          pdVar12 = local_170;
          iVar10 = 8;
          local_1d8 = ((double)(int)local_26c * _DAT_00560f48) / (double)iVar18;
          do {
            fsin(((float10)param_15 * (float10)pdVar12[-1] + (float10)*pdVar12) *
                 (float10)_DAT_00560f48);
            _CIpow();
            fsin((float10)pdVar12[2] * (float10)_DAT_00560f48 +
                 (float10)local_1d8 * (float10)pdVar12[1]);
            iVar13 = ftol();
            iVar14 = iVar14 + iVar13;
            pdVar12 = pdVar12 + 6;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          if (local_230 <= iVar14) {
            local_230 = iVar14;
          }
          if (iVar14 <= (int)local_220) {
            local_220 = (double)CONCAT44(local_220._4_4_,iVar14);
          }
          local_26c = local_26c + 1;
          *local_260 = iVar14;
          local_260 = local_260 + 1;
        } while ((int)local_26c < iVar18);
      }
      iVar10 = 8;
      do {
        ftol();
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      ftol();
      iStack_1ac = ftol();
      iStack_204 = ftol();
      iStack_1e4 = local_228;
      local_230 = 0;
      if (0 < local_210) {
        iStack_25c = 0;
        do {
          iStack_234 = 0;
          if (0 < iVar18) {
            pcVar22 = (char *)(local_228 + 2);
            pbStack_258 = (byte *)(local_20c + 1);
            piStack_254 = _Memory + -1;
            pbVar21 = (byte *)(local_208 + 1);
            do {
              iVar13 = piStack_254[1] + iStack_25c;
              local_220 = (double)CONCAT44(local_220._4_4_,iStack_1ac - iVar13);
              bVar7 = ftol();
              iVar14 = iVar18 + -1;
              iVar10 = iVar13;
              if (iStack_234 < iVar14) {
                iVar10 = piStack_254[2] + iStack_25c;
              }
              iStack_224 = iVar13;
              if (0 < iStack_234) {
                iStack_224 = iStack_25c + *piStack_254;
              }
              if ((iVar13 + 0x4000 <= iVar10) && (bVar8 = ftol(), bVar8 <= bVar7)) {
                bVar7 = ftol();
              }
              if ((iVar13 + 0x4000 <= iStack_224) && (bVar8 = ftol(), bVar8 <= bVar7)) {
                bVar7 = ftol();
              }
              if (local_1b0 == 0) {
                uVar15 = (uint)bVar7;
                bVar7 = pbStack_258[-1];
                _bStack_1f4 = CONCAT31(uStack_1f3,bVar7);
                iVar10 = ((uint)pbVar21[-1] - (uint)bVar7) * uVar15;
                pcVar22[-2] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar7;
                bVar7 = *pbStack_258;
                _bStack_1fc = CONCAT31(uStack_1fb,bVar7);
                iVar10 = ((uint)*pbVar21 - (uint)bVar7) * uVar15;
                pcVar22[-1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar7;
                bVar7 = pbStack_258[1];
                _bStack_200 = CONCAT31(uStack_1ff,bVar7);
                iVar10 = ((uint)pbVar21[1] - (uint)bVar7) * uVar15;
                *pcVar22 = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar7;
                bVar7 = pbStack_258[2];
                _bStack_1f8 = CONCAT31(uStack_1f7,bVar7);
                iVar10 = ((uint)pbVar21[2] - (uint)bVar7) * uVar15;
                pcVar22[1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar7;
              }
              else {
                if ((int)local_220 < 1) {
                  local_26c = (uint)pbVar21[1];
                  local_260 = (int *)(uint)*pbVar21;
                  uStack_214 = CONCAT31(uStack_214._1_3_,pbVar21[-1]);
                }
                else {
                  iVar10 = iVar13;
                  if (iStack_234 < iVar14) {
                    iVar10 = piStack_254[2] + iStack_25c;
                  }
                  if (0 < iStack_234) {
                    iVar13 = iStack_25c + *piStack_254;
                  }
                  fVar23 = (float10)(int)local_220 * (float10)_DAT_00561088;
                  fVar24 = (float10)fpatan((float10)((iVar10 - iVar13) / 2),(float10)_DAT_0055f610);
                  local_220 = (double)fVar24;
                  fVar24 = (float10)fsin(fVar24 + (float10)_DAT_005610e0);
                  if ((float10)_DAT_00555910 < ABS(fVar24)) {
                    fVar23 = ABS(fVar24) * fVar23;
                  }
                  if (fVar23 <= (float10)iStack_204) {
                    if ((float10)iStack_204 <= fVar23) {
                      fVar23 = (float10)iStack_204;
                    }
                    bVar8 = pbVar21[-1];
                    fVar24 = (float10)_DAT_00555908 - fVar23 / (float10)iStack_204;
                    fVar24 = (float10)fcos(((float10)_DAT_0055d660 -
                                           (SQRT((float10)_DAT_00555908 - fVar24 * fVar24) *
                                            (float10)_DAT_00557d70 - (float10)_DAT_0055d660)) *
                                           (float10)_DAT_0055d680);
                    fVar23 = (float10)fcos((((float10)local_220 * (float10)_DAT_00560ef8 +
                                            (float10)_DAT_0055d660) - (float10)_DAT_0055d660) *
                                           (float10)_DAT_0055d680);
                    if ((fVar23 + (float10)_DAT_00555908) * (fVar24 + (float10)_DAT_00555908) *
                        (float10)_DAT_00557838 - (float10)_DAT_00555908 < (float10)_DAT_00555910) {
                      _bStack_1e8 = CONCAT31(uStack_1e7,bVar8);
                      uStack_214 = CONCAT31(uStack_214._1_3_,bVar8 - (char)((uint)bVar8 * 0xff >> 8)
                                           );
                      bVar8 = *pbVar21;
                      _bStack_1bc = CONCAT31(uStack_1bb,bVar8);
                      local_260 = (int *)(uint)(byte)(bVar8 - (char)((uint)bVar8 * 0xff >> 8));
                      bVar8 = pbVar21[1];
                      _bStack_19c = CONCAT31(uStack_19b,bVar8);
                      local_26c = (uint)(byte)(bVar8 - (char)((uint)bVar8 * 0xff >> 8));
                    }
                    else {
                      _bStack_1dc = CONCAT31(uStack_1db,bVar8);
                      iVar10 = (0xff - (uint)bVar8) * 0xff;
                      bVar4 = *pbVar21;
                      _bStack_1a0 = CONCAT31(uStack_19f,bVar4);
                      uStack_214 = CONCAT31(uStack_214._1_3_,
                                            (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar8);
                      iVar10 = (0xff - (uint)bVar4) * 0xff;
                      bVar8 = pbVar21[1];
                      _bStack_1cc = CONCAT31(uStack_1cb,bVar8);
                      local_260 = (int *)(uint)(byte)((char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8)
                                                     + bVar4);
                      iVar10 = (0xff - (uint)bVar8) * 0xff;
                      local_26c = (uint)(byte)((char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) +
                                              bVar8);
                    }
                  }
                  else {
                    local_26c = (uint)pbVar21[1];
                    local_260 = (int *)(uint)*pbVar21;
                    uStack_214 = CONCAT31(uStack_214._1_3_,pbVar21[-1]);
                  }
                }
                uVar15 = *(uint *)(pbStack_258 + -1);
                iVar10 = 0;
                if (iStack_204 < 1) {
                  iVar10 = iStack_204;
                }
                iVar13 = iStack_234 - iVar10;
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                else if (iVar14 < iVar13) {
                  iVar13 = iVar14;
                }
                iVar10 = local_230 - iVar10;
                if (iVar10 < 0) {
                  iVar10 = 0;
                }
                else if (local_210 + -1 < iVar10) {
                  iVar10 = local_210 + -1;
                }
                bVar8 = -*(char *)(iStack_1e4 + iVar10 * param_3 + 2 + iVar13 * 4) - 1;
                _bStack_1e0 = CONCAT31(uStack_1df,bVar8);
                local_1d8 = (double)CONCAT71(local_1d8._1_7_,pbStack_258[-1]);
                uVar16 = (uint)(bVar8 >> 2);
                cVar19 = pbStack_258[-1] - (char)((local_1d8._0_4_ & 0xff) * uVar16 >> 8);
                local_1c8 = (double)CONCAT71(local_1c8._1_7_,*pbStack_258);
                cVar20 = *pbStack_258 - (char)((local_1c8._0_4_ & 0xff) * uVar16 >> 8);
                local_1b8 = (double)CONCAT71(local_1b8._1_7_,pbStack_258[1]);
                uVar17 = (uint)bVar7;
                bVar7 = pbStack_258[1] - (char)((local_1b8._0_4_ & 0xff) * uVar16 >> 8);
                _local_268 = CONCAT12(bVar7,CONCAT11(cVar20,cVar19));
                uVar6 = _local_268;
                _local_268 = (uint)_local_268;
                iVar10 = ((uStack_214 & 0xff) - (_local_268 & 0xff)) * uVar17;
                stack0xfffffd99 = (uint)(ushort)(uVar6 >> 8);
                pcVar22[-2] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + cVar19;
                iVar10 = ((int)local_260 - (stack0xfffffd99 & 0xff)) * uVar17;
                uStack_266 = (uint)bVar7;
                pcVar22[-1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + cVar20;
                iVar10 = (local_26c - uStack_266) * uVar17;
                *pcVar22 = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar7;
                iVar10 = ((uint)pbVar21[2] - (uVar15 >> 0x18)) * uVar17;
                uStack_266._1_1_ = (char)(uVar15 >> 0x18);
                pcVar22[1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + uStack_266._1_1_;
              }
              iStack_234 = iStack_234 + 1;
              piStack_254 = piStack_254 + 1;
              pbStack_258 = pbStack_258 + 4;
              pbVar21 = pbVar21 + 4;
              pcVar22 = pcVar22 + 4;
            } while (iStack_234 < iVar18);
          }
          local_20c = local_20c + param_7;
          local_228 = local_228 + param_3;
          local_208 = local_208 + param_11;
          local_230 = local_230 + 1;
          iStack_25c = iStack_25c + 0x4000;
        } while (local_230 < local_210);
      }
      free(_Memory);
    }
    lVar9 = 0;
  }
  return lVar9;
}



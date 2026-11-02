/* Module: sftrans1.dll
   Function: SfDibWaves
   Address: 004678e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibWaves(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct tWAVESPROP
   &,double) */

long SfDibWaves(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
               tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
               long param_11,tagRECT *param_12,long param_13,tWAVESPROP *param_14,double param_15)

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
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  char cVar19;
  char cVar20;
  int iVar21;
  byte *pbVar22;
  int iVar23;
  byte *pbVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  int *piStack_268;
  int local_264;
  int local_25c;
  int iStack_258;
  int *piStack_254;
  byte *pbStack_250;
  int iStack_24c;
  uint local_244;
  undefined1 local_240 [2];
  undefined4 uStack_23e;
  uint uStack_228;
  int local_224;
  int *local_220;
  int iStack_21c;
  int local_218;
  int iStack_214;
  int iStack_210;
  int *local_20c;
  int local_208;
  int local_204;
  int local_200;
  int iStack_1fc;
  byte bStack_1f8;
  undefined3 uStack_1f7;
  int iStack_1f4;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  byte bStack_1d4;
  undefined3 uStack_1d3;
  double local_1d0;
  byte bStack_1c4;
  undefined3 uStack_1c3;
  double local_1c0;
  byte bStack_1b8;
  undefined3 uStack_1b7;
  undefined1 local_1b4 [4];
  int iStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  byte bStack_1a4;
  undefined3 uStack_1a3;
  byte bStack_1a0;
  undefined3 uStack_19f;
  undefined1 local_19c [4];
  undefined1 local_198 [32];
  undefined4 local_178 [2];
  double local_170 [45];
  
                    /* 0x678e0  27  ?SfDibWaves@@YGJPAXPAUtagRECT@@J101J101J1JAAUtWAVESPROP@@N@Z */
  FUN_004cdc70(local_198,local_1b4,local_19c,&local_204,&local_224,param_1,param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_13);
  lVar9 = FUN_004cdc70(local_198,local_1b4,local_19c,&local_208,&local_224,param_1,param_2,param_3,
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
    local_218 = param_2->bottom - param_2->top;
    iVar10 = param_6->bottom - param_6->top;
    local_200 = *(int *)(param_14 + 0x14);
    if (local_200 == 0) {
      local_1e0 = (double)(*(float *)(param_14 + 0xc) * (float)iVar10 + (float)_DAT_00555908);
    }
    else {
      local_1e0 = 1.0;
    }
    puVar11 = local_178;
    iVar15 = 8;
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
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    fVar1 = *(float *)param_14;
    local_25c = 0;
    fVar2 = *(float *)(param_14 + 8);
    fVar3 = *(float *)(param_14 + 4);
    pdVar12 = local_170;
    dVar5 = _DAT_00555908;
    do {
      iVar15 = local_25c + 1;
      pdVar12[-3] = ((double)fVar1 * (double)_DAT_005610d8 + _DAT_005610d0) * (double)iVar10 * dVar5
      ;
      *pdVar12 = (double)(local_25c + 3) * _DAT_005610c0;
      *(undefined4 *)(pdVar12 + -2) = 0;
      *(undefined4 *)((int)pdVar12 + -0xc) = 0x3ff00000;
      pdVar12[-1] = (_DAT_00555908 - dVar5) * ((double)fVar2 * _DAT_005610c8 + _DAT_0055e6d0) *
                    _DAT_005610b8 + _DAT_00555908;
      pdVar12[1] = (double)local_25c * ((double)fVar3 * _DAT_005610c8 + _DAT_0055e6d0) +
                   _DAT_0055f628;
      pdVar12[2] = (double)local_25c * _DAT_005610c0;
      dVar5 = ((double)fVar3 * _DAT_00557838 + _DAT_0055f628) * dVar5;
      pdVar12 = pdVar12 + 6;
      local_25c = iVar15;
    } while (iVar15 < 8);
    local_20c = calloc(1,iVar18 * 4);
    if (local_20c != (int *)0x0) {
      local_25c = 0;
      local_244 = 0;
      local_264 = 0;
      if (0 < iVar18) {
        local_1f0 = param_15 * _DAT_005610b0 + _DAT_005610a8;
        local_1c0 = (_DAT_00555908 - param_15) * _DAT_005610b0 + _DAT_005610a8;
        local_220 = local_20c;
        do {
          iVar15 = 0;
          pdVar12 = local_170;
          iVar10 = 8;
          local_1d0 = ((double)local_264 * _DAT_00560f48) / (double)iVar18;
          do {
            fsin(((float10)param_15 * (float10)pdVar12[-1] + (float10)*pdVar12) *
                 (float10)_DAT_00560f48);
            _CIpow();
            fsin((float10)pdVar12[2] * (float10)_DAT_00560f48 +
                 (float10)local_1d0 * (float10)pdVar12[1]);
            iVar13 = ftol();
            iVar15 = iVar15 + iVar13;
            pdVar12 = pdVar12 + 6;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          if (local_25c <= iVar15) {
            local_25c = iVar15;
          }
          if (iVar15 <= (int)local_244) {
            local_244 = iVar15;
          }
          local_264 = local_264 + 1;
          *local_220 = iVar15;
          local_220 = local_220 + 1;
        } while (local_264 < iVar18);
      }
      iVar10 = 8;
      do {
        ftol();
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      ftol();
      iStack_1fc = ftol();
      iVar10 = ftol();
      iStack_21c = iVar10;
      if (iVar10 == 0) {
        local_200 = 0;
      }
      else if (local_200 != 0) {
        FUN_004cd320(local_224,param_2,param_3,param_4,param_13,0,0x3ff00000,0,0x3ff00000,0,
                     0x3ff00000,0,0x3ff00000);
        local_1f0 = (double)iStack_21c;
        iStack_258 = 0;
        if (0 < iVar18) {
          piStack_268 = local_20c;
          do {
            if (iStack_258 < iVar18 + -1) {
              uVar14 = *piStack_268 - piStack_268[1];
              uVar16 = (int)uVar14 >> 0x1f;
              iVar15 = (uVar14 ^ uVar16) - uVar16;
              pbStack_250 = (byte *)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe) + 1);
              local_244 = piStack_268[1] - *piStack_268;
            }
            else {
              local_244 = 0;
              pbStack_250 = (byte *)0x1;
            }
            iStack_24c = 0;
            if (0 < (int)pbStack_250) {
              uStack_228 = 0;
              iVar15 = -iVar10;
              iStack_214 = iVar15;
              do {
                iVar13 = iVar15;
                if (iVar15 <= iVar10) {
                  do {
                    if (iVar15 <= iVar10) {
                      iVar23 = iVar15 + iStack_258;
                      iVar21 = iVar23 * 4;
                      local_264 = iVar15;
                      do {
                        iVar10 = ((int)uStack_228 / (int)pbStack_250 - *piStack_268) + iStack_1fc;
                        iVar10 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) + iVar13;
                        iStack_210 = iVar10;
                        if ((((-1 < iVar23) && (iVar23 < iVar18)) && (-1 < iVar10)) &&
                           (iVar10 < local_218)) {
                          bVar7 = ftol();
                          iVar10 = iVar10 * param_3 + local_224;
                          if (bVar7 < *(byte *)(iVar21 + 2 + iVar10)) {
                            *(byte *)(iVar21 + 2 + iVar10) = bVar7;
                          }
                        }
                        local_264 = local_264 + 1;
                        iVar21 = iVar21 + 4;
                        iVar23 = iVar23 + 1;
                        iVar15 = iStack_214;
                        iVar10 = iStack_21c;
                      } while (local_264 <= iStack_21c);
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 <= iVar10);
                }
                iStack_24c = iStack_24c + 1;
                uStack_228 = uStack_228 + local_244;
              } while (iStack_24c < (int)pbStack_250);
            }
            iStack_258 = iStack_258 + 1;
            piStack_268 = piStack_268 + 1;
          } while (iStack_258 < iVar18);
        }
      }
      iStack_1b0 = local_224;
      local_25c = 0;
      if (0 < local_218) {
        piStack_268 = (int *)0x0;
        do {
          iStack_24c = 0;
          if (0 < iVar18) {
            pbStack_250 = (byte *)(local_204 + 2);
            pbVar22 = (byte *)(local_224 + 2);
            piStack_254 = local_20c + -1;
            pbVar24 = (byte *)(local_208 + 2);
            do {
              iVar15 = piStack_254[1] + (int)piStack_268;
              dStack_1e8 = (double)CONCAT44(dStack_1e8._4_4_,iStack_1fc - iVar15);
              bVar7 = ftol();
              iStack_1f4 = iVar18 + -1;
              iVar10 = iVar15;
              if (iStack_24c < iStack_1f4) {
                iVar10 = piStack_254[2] + (int)piStack_268;
              }
              iVar13 = iVar15;
              if (0 < iStack_24c) {
                iVar13 = (int)piStack_268 + *piStack_254;
              }
              if ((iVar15 + 0x4000 <= iVar10) && (bVar8 = ftol(), bVar8 <= bVar7)) {
                bVar7 = ftol();
              }
              if ((iVar15 + 0x4000 <= iVar13) && (bVar8 = ftol(), bVar8 <= bVar7)) {
                bVar7 = ftol();
              }
              if ((local_200 == 0) || (*pbVar22 == 0xff)) {
                uVar14 = (uint)bVar7;
                bVar7 = pbStack_250[-2];
                _bStack_1f8 = CONCAT31(uStack_1f7,bVar7);
                iVar10 = ((uint)pbVar24[-2] - (uint)bVar7) * uVar14;
                pbVar22[-2] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar7;
                bVar7 = pbStack_250[-1];
                iStack_214 = CONCAT31(iStack_214._1_3_,bVar7);
                iVar10 = ((uint)pbVar24[-1] - (uint)bVar7) * uVar14;
                pbVar22[-1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar7;
                bVar7 = *pbStack_250;
                iStack_210 = CONCAT31(iStack_210._1_3_,bVar7);
                iVar10 = ((uint)*pbVar24 - (uint)bVar7) * uVar14;
                *pbVar22 = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar7;
                iVar10 = ((uint)pbVar24[1] - (uint)pbStack_250[1]) * uVar14;
                pbVar22[1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + pbStack_250[1];
              }
              else {
                if (dStack_1e8._0_4_ < 1) {
                  local_244 = (uint)*pbVar24;
                  local_220 = (int *)CONCAT31(local_220._1_3_,pbVar24[-1]);
                  uStack_228 = (uint)pbVar24[-2];
                }
                else {
                  iVar10 = iVar15;
                  if (iStack_24c < iStack_1f4) {
                    iVar10 = piStack_254[2] + (int)piStack_268;
                  }
                  if (0 < iStack_24c) {
                    iVar15 = (int)piStack_268 + *piStack_254;
                  }
                  fVar25 = (float10)iStack_21c;
                  dStack_1e8 = (double)iStack_21c;
                  fVar26 = (float10)*pbVar22 * fVar25 * (float10)_DAT_0055f608;
                  fVar27 = fVar25;
                  if (fVar26 < fVar25) {
                    fVar27 = (float10)(double)fVar26;
                  }
                  bVar8 = pbVar24[-2];
                  fVar27 = (float10)_DAT_00555908 - fVar27 / fVar25;
                  fVar27 = (float10)fcos(((float10)_DAT_0055d660 -
                                         (SQRT((float10)_DAT_00555908 - fVar27 * fVar27) *
                                          (float10)_DAT_00557d70 - (float10)_DAT_0055d660)) *
                                         (float10)_DAT_0055d680);
                  fVar25 = (float10)fpatan((float10)((iVar10 - iVar15) / 2),(float10)_DAT_0055f610);
                  fVar25 = (float10)fcos(((fVar25 * (float10)_DAT_00560ef8 + (float10)_DAT_0055d660)
                                         - (float10)_DAT_0055d660) * (float10)_DAT_0055d680);
                  if ((fVar25 + (float10)_DAT_00555908) * (fVar27 + (float10)_DAT_00555908) *
                      (float10)_DAT_00557838 - (float10)_DAT_00555908 < (float10)_DAT_00555910) {
                    uStack_1a8 = CONCAT31(uStack_1a8._1_3_,bVar8);
                    uVar14 = ftol();
                    uVar14 = uVar14 & 0xff;
                    uStack_228 = (uint)(byte)(bVar8 - (char)((uStack_1a8 & 0xff) * uVar14 >> 8));
                    bVar8 = pbVar24[-1];
                    _bStack_1b8 = CONCAT31(uStack_1b7,bVar8);
                    local_220 = (int *)CONCAT31(local_220._1_3_,bVar8 - (char)(bVar8 * uVar14 >> 8))
                    ;
                    bVar8 = *pbVar24;
                    _bStack_1d4 = CONCAT31(uStack_1d3,bVar8);
                    local_244 = (uint)(byte)(bVar8 - (char)(bVar8 * uVar14 >> 8));
                  }
                  else {
                    uStack_1ac = CONCAT31(uStack_1ac._1_3_,bVar8);
                    uVar14 = ftol();
                    uVar14 = uVar14 & 0xff;
                    iVar10 = (0xff - (uStack_1ac & 0xff)) * uVar14;
                    bVar4 = pbVar24[-1];
                    _bStack_1a4 = CONCAT31(uStack_1a3,bVar4);
                    uStack_228 = (uint)(byte)((char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar8
                                             );
                    iVar10 = (0xff - (uint)bVar4) * uVar14;
                    bVar8 = *pbVar24;
                    _bStack_1c4 = CONCAT31(uStack_1c3,bVar8);
                    local_220 = (int *)CONCAT31(local_220._1_3_,
                                                (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) +
                                                bVar4);
                    iVar10 = (0xff - (uint)bVar8) * uVar14;
                    local_244 = (uint)(byte)((char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar8)
                    ;
                  }
                }
                uVar14 = *(uint *)(pbStack_250 + -2);
                iVar10 = 0;
                if (iStack_21c < 1) {
                  iVar10 = iStack_21c;
                }
                iVar15 = iStack_24c - iVar10;
                if (iVar15 < 0) {
                  iVar15 = 0;
                }
                else if (iStack_1f4 < iVar15) {
                  iVar15 = iStack_1f4;
                }
                iVar10 = local_25c - iVar10;
                if (iVar10 < 0) {
                  iVar10 = 0;
                }
                else if (local_218 + -1 < iVar10) {
                  iVar10 = local_218 + -1;
                }
                bVar8 = -*(char *)(iStack_1b0 + iVar10 * param_3 + 2 + iVar15 * 4) - 1;
                _bStack_1a0 = CONCAT31(uStack_19f,bVar8);
                local_1d0 = (double)CONCAT71(local_1d0._1_7_,pbStack_250[-2]);
                uVar16 = (uint)(bVar8 >> 2);
                cVar19 = pbStack_250[-2] - (char)((local_1d0._0_4_ & 0xff) * uVar16 >> 8);
                local_1c0 = (double)CONCAT71(local_1c0._1_7_,pbStack_250[-1]);
                cVar20 = pbStack_250[-1] - (char)((local_1c0._0_4_ & 0xff) * uVar16 >> 8);
                local_1f0 = (double)CONCAT71(local_1f0._1_7_,*pbStack_250);
                uVar17 = (uint)bVar7;
                bVar7 = *pbStack_250 - (char)((local_1f0._0_4_ & 0xff) * uVar16 >> 8);
                _local_240 = CONCAT12(bVar7,CONCAT11(cVar20,cVar19));
                uVar6 = _local_240;
                _local_240 = (uint)_local_240;
                iVar10 = (uStack_228 - (_local_240 & 0xff)) * uVar17;
                stack0xfffffdc1 = (uint)(ushort)(uVar6 >> 8);
                pbVar22[-2] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + cVar19;
                iVar10 = (((uint)local_220 & 0xff) - (stack0xfffffdc1 & 0xff)) * uVar17;
                uStack_23e = (uint)bVar7;
                pbVar22[-1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + cVar20;
                iVar10 = (local_244 - uStack_23e) * uVar17;
                *pbVar22 = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + bVar7;
                iVar10 = ((uint)pbVar24[1] - (uVar14 >> 0x18)) * uVar17;
                uStack_23e._1_1_ = (char)(uVar14 >> 0x18);
                pbVar22[1] = (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8) + uStack_23e._1_1_;
              }
              iStack_24c = iStack_24c + 1;
              piStack_254 = piStack_254 + 1;
              pbStack_250 = pbStack_250 + 4;
              pbVar24 = pbVar24 + 4;
              pbVar22 = pbVar22 + 4;
            } while (iStack_24c < iVar18);
          }
          local_224 = local_224 + param_3;
          local_208 = local_208 + param_11;
          local_204 = local_204 + param_7;
          local_25c = local_25c + 1;
          piStack_268 = (int *)((int)piStack_268 + 0x4000);
        } while (local_25c < local_218);
      }
      free(local_20c);
    }
    lVar9 = 0;
  }
  return lVar9;
}



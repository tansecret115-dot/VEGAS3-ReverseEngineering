/* Module: vegas30.exe
   Function: FUN_005b2370
   Address: 005b2370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b2370(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                int param_6,int param_7,int *param_8,undefined4 param_9,undefined4 param_10,
                int param_11,int *param_12,int param_13,undefined4 param_14,int param_15,
                int param_16)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint3 uVar5;
  LONG LVar6;
  LONG LVar7;
  int iVar8;
  HGLOBAL pvVar9;
  LPVOID pvVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  float *pfVar22;
  float10 fVar23;
  double dVar24;
  double dVar25;
  int local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  LPVOID local_58;
  float local_54;
  int local_50;
  float local_4c;
  LPVOID local_48;
  tagRECT local_44;
  uint local_34;
  byte local_30;
  byte bStack_2f;
  byte bStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar8 = param_16;
  iVar12 = param_15;
  iVar11 = param_7;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_4c = 0.0;
  local_54 = 0.0;
  local_34 = 0;
  local_5c = 0;
  local_64 = 0;
  local_58 = (LPVOID)0x0;
  local_48 = (LPVOID)0x0;
  if ((param_15 == 0) || (param_16 == 0)) {
    return -0x7ff8ffa9;
  }
  uVar3 = *(undefined4 *)(param_16 + 0x50);
  uVar4 = *(undefined4 *)(param_16 + 0x54);
  local_30 = (byte)uVar3;
  bStack_2f = (byte)((uint)uVar3 >> 8);
  bStack_2e = (byte)((uint)uVar3 >> 0x10);
  uStack_2d = (undefined1)((uint)uVar3 >> 0x18);
  uStack_2c = (undefined1)uVar4;
  uStack_2b = (undefined1)((uint)uVar4 >> 8);
  uStack_2a = (undefined1)((uint)uVar4 >> 0x10);
  uStack_29 = (undefined1)((uint)uVar4 >> 0x18);
  FUN_005a6120(param_16,param_16,
               -(double)CONCAT17(uStack_29,
                                 CONCAT16(uStack_2a,
                                          CONCAT15(uStack_2b,*(undefined5 *)(param_16 + 0x50)))),0);
  fVar23 = (float10)FUN_005a5f80(iVar8);
  local_44.left = (LONG)(float)fVar23;
  fVar23 = (float10)FUN_005a5ff0(iVar8);
  if ((float10)(float)local_44.left <= fVar23) {
    local_44.left = (LONG)(float)fVar23;
  }
  FUN_005a6120(iVar8,iVar8,CONCAT13(uStack_2d,CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30))),
               CONCAT13(uStack_29,CONCAT12(uStack_2a,CONCAT11(uStack_2b,uStack_2c))),0);
  if (*(int *)(iVar12 + 0x80) == 0) {
    if (_DAT_00610f20 == *(float *)(iVar12 + 0x6c)) {
      return 0;
    }
    if (param_13 == 4) {
      bStack_2e = ftol();
      bStack_2f = ftol();
      local_30 = ftol();
      uStack_2d = ftol();
    }
    else {
      uVar3 = *(undefined4 *)(iVar12 + 0x60);
      local_30 = (byte)uVar3;
      bStack_2f = (byte)((uint)uVar3 >> 8);
      bStack_2e = (byte)((uint)uVar3 >> 0x10);
      uStack_2d = (undefined1)((uint)uVar3 >> 0x18);
      uVar3 = *(undefined4 *)(iVar12 + 100);
      uStack_2c = (undefined1)uVar3;
      uStack_2b = (undefined1)((uint)uVar3 >> 8);
      uStack_2a = (undefined1)((uint)uVar3 >> 0x10);
      uStack_29 = (undefined1)((uint)uVar3 >> 0x18);
      local_28 = *(float *)(iVar12 + 0x68);
      local_24 = *(float *)(iVar12 + 0x6c);
    }
    local_54 = *(float *)(iVar12 + 0x74);
    local_4c = (float)local_44.left * *(float *)(iVar12 + 0x70);
    uVar20 = *(uint *)(iVar12 + 0x7c);
    uVar13 = uVar20;
  }
  else {
    if (*(int *)(iVar12 + 0x80) != 1) goto LAB_005b2599;
    if (_DAT_00610f20 == *(float *)(iVar12 + 0x38)) {
      return 0;
    }
    if (param_13 == 4) {
      bStack_2e = ftol();
      bStack_2f = ftol();
      local_30 = ftol();
      uStack_2d = ftol();
    }
    else {
      uVar3 = *(undefined4 *)(iVar12 + 0x2c);
      local_30 = (byte)uVar3;
      bStack_2f = (byte)((uint)uVar3 >> 8);
      bStack_2e = (byte)((uint)uVar3 >> 0x10);
      uStack_2d = (undefined1)((uint)uVar3 >> 0x18);
      uVar3 = *(undefined4 *)(iVar12 + 0x30);
      uStack_2c = (undefined1)uVar3;
      uStack_2b = (undefined1)((uint)uVar3 >> 8);
      uStack_2a = (undefined1)((uint)uVar3 >> 0x10);
      uStack_29 = (undefined1)((uint)uVar3 >> 0x18);
      local_28 = *(float *)(iVar12 + 0x34);
      local_24 = *(float *)(iVar12 + 0x38);
    }
    local_54 = *(float *)(iVar12 + 0x40);
    local_4c = (float)local_44.left * *(float *)(iVar12 + 0x3c);
    uVar20 = *(uint *)(iVar12 + 0x7c);
    uVar13 = *(uint *)(iVar12 + 0x48);
  }
  local_5c = uVar13 >> 1 & 1;
  local_34 = uVar20 & 1;
  local_64 = uVar20 >> 2 & 1;
LAB_005b2599:
  if ((param_5 != 0) &&
     (iVar8 = _SfDibPrepareTransform_56
                        (&local_20,&param_15,&param_16,&local_68,&local_60,param_1,param_2,param_3,
                         param_4,param_5,param_6,param_7,param_8,param_13), iVar8 < 0)) {
    return -0x7fffbffb;
  }
  iVar8 = _SfDibPrepareTransform_56
                    (&local_10,&param_15,&param_16,&local_50,&local_60,param_1,param_2,param_3,
                     param_4,param_9,param_10,param_11,param_12,param_13);
  if (iVar8 < 0) {
    return -0x7fffbffb;
  }
  if ((param_15 != 0) && (param_16 != 0)) {
    if (_DAT_00610f20 < local_4c) {
      local_44._0_8_ = (BADTYPE)local_4c;
      iVar8 = ftol();
      LVar7 = local_44.top;
      LVar6 = local_44.left;
      if ((param_5 != 0) && (local_64 == 0)) {
        local_44.bottom = local_14;
        local_44.right = local_18;
        if ((local_18 - local_20 < param_8[2] - *param_8) ||
           (local_14 - local_1c < param_8[3] - param_8[1])) {
          InflateRect(&local_44,iVar8,iVar8);
        }
        _SfDibGaussianChannelBlur_56
                  (param_5,param_6,param_7,&local_44,param_5,param_6,param_7,&local_44,local_44.left
                   ,local_44.top,local_44.left,local_44.top,3,param_13);
      }
      local_44.bottom = local_4;
      local_44.top = local_c;
      local_44.left = local_10;
      local_44.right = local_8;
      if ((local_8 - local_10 < param_12[2] - *param_12) ||
         (local_4 - local_c < param_12[3] - param_12[1])) {
        InflateRect(&local_44,iVar8,iVar8);
      }
      iVar8 = _SfDibGaussianChannelBlur_56
                        (param_9,param_10,param_11,&local_44,param_9,param_10,param_11,&local_44,
                         LVar6,LVar7,LVar6,LVar7,3,param_13);
      if (iVar8 < 0) {
        return iVar8;
      }
    }
    if (_DAT_00610f20 < local_54) {
      if (param_13 == 4) {
        pvVar9 = GlobalAlloc(0x40,0x100);
        pvVar10 = GlobalLock(pvVar9);
        local_58 = pvVar10;
      }
      else {
        pvVar9 = GlobalAlloc(0x40,0x20000);
        pvVar10 = GlobalLock(pvVar9);
        local_48 = pvVar10;
      }
      if (local_34 == 0) {
        dVar25 = (double)((float)_DAT_006106d0 - local_54 * (float)_DAT_006128f0);
        dVar24 = 0.0;
      }
      else {
        dVar25 = 1.0;
        dVar24 = (double)(local_54 * (float)_DAT_006128f0);
      }
      FUN_005b3970(pvVar10,param_13,dVar24,dVar25,0,0,0,0x3ff00000,0,0x3ff00000);
    }
    uVar17 = param_11 >> 0x1f;
    uVar13 = param_3 >> 0x1f;
    uVar20 = param_7 >> 0x1f;
    if (*(int *)(iVar12 + 0x80) == 0) {
      if (param_13 == 4) {
        iVar11 = (int)(param_3 + (uVar13 & 3)) >> 2;
        iVar12 = param_7 + (uVar20 & 3);
        iVar8 = (int)(param_11 + (uVar17 & 3)) >> 2;
        param_3 = local_60;
        param_8 = (int *)local_50;
        param_5 = local_68;
        if ((local_68 == 0) || (local_64 != 0)) {
          param_7 = 0;
          if (local_58 == (LPVOID)0x0) {
            if (0 < param_16) {
              uVar5 = CONCAT12(uStack_2d,CONCAT11(bStack_2e,bStack_2f));
              do {
                param_13 = 0;
                if (0 < param_15) {
                  pbVar15 = (byte *)(param_3 + 1);
                  do {
                    uVar20 = ((uint)pbVar15[((int)param_8 - param_3) + 2] *
                             (CONCAT12(uStack_2b,CONCAT11(uStack_2c,uStack_2d)) & 0xff)) / 0xff;
                    if (uVar20 < 0xff) {
                      if (uVar20 != 0) {
                        uVar13 = (pbVar15[1] * uVar20) / 0xff;
                        param_9._0_1_ = (char)uVar13;
                        pbVar15[1] = ((char)(((CONCAT12(uStack_2c,CONCAT11(uStack_2d,bStack_2e)) &
                                              0xff) * uVar13) / 0xff) - (char)param_9) + pbVar15[1];
                        uVar13 = (*pbVar15 * uVar20) / 0xff;
                        param_9._0_1_ = (char)uVar13;
                        *pbVar15 = ((char)(((uVar5 & 0xff) * uVar13) / 0xff) - (char)param_9) +
                                   *pbVar15;
                        uVar13 = (pbVar15[-1] * uVar20) / 0xff;
                        param_9._0_1_ = (char)uVar13;
                        pbVar15[-1] = ((char)(((CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)) &
                                               0xff) * uVar13) / 0xff) - (char)param_9) +
                                      pbVar15[-1];
                      }
                    }
                    else {
                      pbVar15[1] = (byte)(((uint)pbVar15[1] *
                                          (CONCAT12(uStack_2c,CONCAT11(uStack_2d,bStack_2e)) & 0xff)
                                          ) / 0xff);
                      *pbVar15 = (byte)(((uint)*pbVar15 * (uVar5 & 0xff)) / 0xff);
                      pbVar15[-1] = (byte)(((CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)) & 0xff
                                            ) * (uint)pbVar15[-1]) / 0xff);
                    }
                    uVar13 = (uint)pbVar15[2];
                    if (pbVar15[2] <= uVar20) {
                      uVar13 = uVar20;
                    }
                    pbVar15[2] = (byte)uVar13;
                    param_13 = param_13 + 1;
                    pbVar15 = pbVar15 + 4;
                  } while (param_13 < param_15);
                }
                param_3 = param_3 + iVar11 * 4;
                param_8 = (int *)((int)param_8 + iVar8 * 4);
                param_7 = param_7 + 1;
              } while (param_7 < param_16);
            }
          }
          else if (0 < param_16) {
            uVar5 = CONCAT12(uStack_2d,CONCAT11(bStack_2e,bStack_2f));
            do {
              param_13 = 0;
              if (0 < param_15) {
                pbVar15 = (byte *)(param_3 + 1);
                do {
                  uVar20 = ((uint)*(byte *)((uint)pbVar15[((int)param_8 - param_3) + 2] +
                                           (int)local_58) *
                           (CONCAT12(uStack_2b,CONCAT11(uStack_2c,uStack_2d)) & 0xff)) / 0xff;
                  if (uVar20 < 0xff) {
                    if (uVar20 != 0) {
                      uVar13 = (pbVar15[1] * uVar20) / 0xff;
                      param_9._0_1_ = (char)uVar13;
                      pbVar15[1] = ((char)(((CONCAT12(uStack_2c,CONCAT11(uStack_2d,bStack_2e)) &
                                            0xff) * uVar13) / 0xff) - (char)param_9) + pbVar15[1];
                      uVar13 = (*pbVar15 * uVar20) / 0xff;
                      param_9._0_1_ = (char)uVar13;
                      *pbVar15 = ((char)(((uVar5 & 0xff) * uVar13) / 0xff) - (char)param_9) +
                                 *pbVar15;
                      uVar13 = (pbVar15[-1] * uVar20) / 0xff;
                      param_9._0_1_ = (char)uVar13;
                      pbVar15[-1] = ((char)(((CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)) &
                                             0xff) * uVar13) / 0xff) - (char)param_9) + pbVar15[-1];
                    }
                  }
                  else {
                    pbVar15[1] = (byte)(((uint)pbVar15[1] *
                                        (CONCAT12(uStack_2c,CONCAT11(uStack_2d,bStack_2e)) & 0xff))
                                       / 0xff);
                    *pbVar15 = (byte)(((uint)*pbVar15 * (uVar5 & 0xff)) / 0xff);
                    pbVar15[-1] = (byte)(((uint)pbVar15[-1] *
                                         (CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)) & 0xff))
                                        / 0xff);
                  }
                  uVar13 = (uint)pbVar15[2];
                  if (pbVar15[2] <= uVar20) {
                    uVar13 = uVar20;
                  }
                  pbVar15[2] = (byte)uVar13;
                  param_13 = param_13 + 1;
                  pbVar15 = pbVar15 + 4;
                } while (param_13 < param_15);
              }
              param_3 = param_3 + iVar11 * 4;
              param_8 = (int *)((int)param_8 + iVar8 * 4);
              param_7 = param_7 + 1;
            } while (param_7 < param_16);
          }
        }
        else {
          param_7 = 0;
          if (0 < param_16) {
            do {
              param_13 = 0;
              if (0 < param_15) {
                pbVar15 = (byte *)(param_3 + 1);
                pbVar19 = (byte *)(param_5 + 3);
                do {
                  if (local_58 == (LPVOID)0x0) {
                    bVar2 = pbVar19[(int)param_8 - param_5];
                  }
                  else {
                    bVar2 = *(byte *)((uint)pbVar19[(int)param_8 - param_5] + (int)local_58);
                  }
                  if (local_5c == 0) {
                    uVar20 = 0xff - *pbVar19;
                  }
                  else {
                    uVar20 = (uint)*pbVar19;
                  }
                  uVar20 = (int)((CONCAT12(uStack_2b,CONCAT11(uStack_2c,uStack_2d)) & 0xff) *
                                ((int)(uVar20 * bVar2) / 0xff)) / 0xff;
                  if ((int)uVar20 < 0xff) {
                    if (0 < (int)uVar20) {
                      iVar14 = (int)(pbVar15[1] * uVar20) / 0xff;
                      iVar21 = (CONCAT12(uStack_2c,CONCAT11(uStack_2d,bStack_2e)) & 0xff) * iVar14;
                      param_9._0_1_ = (char)iVar14;
                      pbVar15[1] = ((((char)(iVar21 / 0xff) + (char)(iVar21 >> 0x1f)) -
                                    (char)((longlong)iVar21 * 0x80808081 >> 0x3f)) - (char)param_9)
                                   + pbVar15[1];
                      iVar14 = (int)(*pbVar15 * uVar20) / 0xff;
                      iVar21 = (CONCAT12(uStack_2d,CONCAT11(bStack_2e,bStack_2f)) & 0xff) * iVar14;
                      param_9._0_1_ = (char)iVar14;
                      *pbVar15 = ((((char)(iVar21 / 0xff) + (char)(iVar21 >> 0x1f)) -
                                  (char)((longlong)iVar21 * 0x80808081 >> 0x3f)) - (char)param_9) +
                                 *pbVar15;
                      iVar14 = (int)(pbVar15[-1] * uVar20) / 0xff;
                      iVar21 = (CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)) & 0xff) * iVar14;
                      param_9._0_1_ = (char)iVar14;
                      pbVar15[-1] = ((((char)(iVar21 / 0xff) + (char)(iVar21 >> 0x1f)) -
                                     (char)((longlong)iVar21 * 0x80808081 >> 0x3f)) - (char)param_9)
                                    + pbVar15[-1];
                    }
                  }
                  else {
                    pbVar15[1] = (byte)(((uint)pbVar15[1] *
                                        (CONCAT12(uStack_2c,CONCAT11(uStack_2d,bStack_2e)) & 0xff))
                                       / 0xff);
                    *pbVar15 = (byte)(((uint)*pbVar15 *
                                      (CONCAT12(uStack_2d,CONCAT11(bStack_2e,bStack_2f)) & 0xff)) /
                                     0xff);
                    pbVar15[-1] = (byte)(((uint)pbVar15[-1] *
                                         (CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)) & 0xff))
                                        / 0xff);
                  }
                  uVar13 = (uint)pbVar19[param_3 - param_5];
                  if ((int)(uint)pbVar19[param_3 - param_5] <= (int)uVar20) {
                    uVar13 = uVar20;
                  }
                  pbVar19[param_3 - param_5] = (byte)uVar13;
                  param_13 = param_13 + 1;
                  pbVar19 = pbVar19 + 4;
                  pbVar15 = pbVar15 + 4;
                } while (param_13 < param_15);
              }
              param_3 = param_3 + iVar11 * 4;
              param_5 = param_5 + (iVar12 >> 2) * 4;
              param_8 = (int *)((int)param_8 + iVar8 * 4);
              param_7 = param_7 + 1;
            } while (param_7 < param_16);
          }
        }
      }
      else if (param_13 == 0x10) {
        iVar14 = param_3 + (uVar13 & 0xf);
        param_7 = 0;
        param_13 = local_60;
        param_3 = local_68;
        param_8 = (int *)local_50;
        iVar12 = param_16;
        iVar8 = param_15;
        if (0 < param_16) {
          do {
            param_6 = 0;
            if (0 < iVar8) {
              pfVar18 = (float *)(param_13 + 4);
              pfVar22 = (float *)(param_3 + 0xc);
              iVar21 = param_13 - param_3;
              do {
                pvVar10 = local_48;
                if (local_48 == (LPVOID)0x0) {
                  fVar1 = *(float *)(((int)param_8 - param_3) + (int)pfVar22);
                }
                else {
                  iVar12 = ftol();
                  fVar1 = (float)*(ushort *)((int)pvVar10 + iVar12 * -2) * _DAT_00629ffc;
                }
                if ((local_68 != 0) && (local_64 == 0)) {
                  if (local_5c == 0) {
                    fVar1 = (_DAT_00619ab0 - *pfVar22) * fVar1;
                  }
                  else {
                    fVar1 = fVar1 * *pfVar22;
                  }
                }
                fVar1 = fVar1 * local_24;
                if (_DAT_00619ab0 == fVar1) {
                  pfVar18[1] = local_28 * pfVar18[1];
                  *pfVar18 = (float)CONCAT13(uStack_29,
                                             CONCAT12(uStack_2a,CONCAT11(uStack_2b,uStack_2c))) *
                             *pfVar18;
                  pfVar18[-1] = (float)CONCAT13(uStack_2d,
                                                CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30))) *
                                pfVar18[-1];
                }
                else if (_DAT_00610f20 != fVar1) {
                  pfVar18[1] = fVar1 * (local_28 * pfVar18[1] - pfVar18[1]) + pfVar18[1];
                  *pfVar18 = fVar1 * ((float)CONCAT13(uStack_29,
                                                      CONCAT12(uStack_2a,
                                                               CONCAT11(uStack_2b,uStack_2c))) *
                                      *pfVar18 - *pfVar18) + *pfVar18;
                  pfVar18[-1] = fVar1 * ((float)CONCAT13(uStack_2d,
                                                         CONCAT12(bStack_2e,
                                                                  CONCAT11(bStack_2f,local_30))) *
                                         pfVar18[-1] - pfVar18[-1]) + pfVar18[-1];
                }
                if (fVar1 < *(float *)((int)pfVar22 + iVar21)) {
                  fVar1 = *(float *)((int)pfVar22 + iVar21);
                }
                pfVar18 = pfVar18 + 4;
                *(float *)((int)pfVar22 + iVar21) = fVar1;
                param_6 = param_6 + 1;
                pfVar22 = pfVar22 + 4;
                iVar12 = param_16;
                iVar8 = param_15;
              } while (param_6 < param_15);
            }
            param_13 = param_13 + (iVar14 >> 4) * 0x10;
            param_3 = param_3 + ((int)(iVar11 + (uVar20 & 0xf)) >> 4) * 0x10;
            param_8 = (int *)((int)param_8 + ((int)(param_11 + (uVar17 & 0xf)) >> 4) * 0x10);
            param_7 = param_7 + 1;
          } while (param_7 < iVar12);
        }
      }
    }
    else if (*(int *)(iVar12 + 0x80) == 1) {
      if (param_13 == 4) {
        iVar12 = param_3 + (uVar13 & 3);
        param_7 = 0;
        param_3 = local_60;
        param_8 = (int *)local_68;
        param_5 = local_50;
        if (0 < param_16) {
          do {
            param_13 = 0;
            if (0 < param_15) {
              pbVar15 = (byte *)(param_3 + 1);
              pbVar19 = (byte *)((int)param_8 + 3);
              do {
                if (local_58 == (LPVOID)0x0) {
                  bVar2 = pbVar19[param_5 - (int)param_8];
                }
                else {
                  bVar2 = *(byte *)((uint)pbVar19[param_5 - (int)param_8] + (int)local_58);
                }
                uVar13 = (uint)bVar2;
                if ((local_68 != 0) && (local_64 == 0)) {
                  if (local_5c == 0) {
                    uVar16 = 0xff - *pbVar19;
                  }
                  else {
                    uVar16 = (uint)*pbVar19;
                  }
                  uVar13 = (int)(uVar16 * uVar13) / 0xff;
                }
                uVar13 = (int)((CONCAT12(uStack_2b,CONCAT11(uStack_2c,uStack_2d)) & 0xff) * uVar13)
                         / 0xff;
                if ((int)uVar13 < 0xff) {
                  if (0 < (int)uVar13) {
                    iVar8 = ((CONCAT12(uStack_2c,CONCAT11(uStack_2d,bStack_2e)) & 0xff) -
                            (uint)pbVar15[1]) * uVar13;
                    pbVar15[1] = (((char)(iVar8 / 0xff) + (char)(iVar8 >> 0x1f)) -
                                 (char)((longlong)iVar8 * 0x80808081 >> 0x3f)) + pbVar15[1];
                    iVar8 = ((CONCAT12(uStack_2d,CONCAT11(bStack_2e,bStack_2f)) & 0xff) -
                            (uint)*pbVar15) * uVar13;
                    *pbVar15 = (((char)(iVar8 / 0xff) + (char)(iVar8 >> 0x1f)) -
                               (char)((longlong)iVar8 * 0x80808081 >> 0x3f)) + *pbVar15;
                    pbVar15[-1] = (char)((int)(((CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)) &
                                                0xff) - (uint)pbVar15[-1]) * uVar13) / 0xff) +
                                  pbVar15[-1];
                  }
                }
                else {
                  pbVar15[1] = bStack_2e;
                  *pbVar15 = bStack_2f;
                  pbVar15[-1] = local_30;
                }
                uVar16 = (uint)pbVar19[param_3 - (int)param_8];
                if ((int)(uint)pbVar19[param_3 - (int)param_8] <= (int)uVar13) {
                  uVar16 = uVar13;
                }
                pbVar19[param_3 - (int)param_8] = (byte)uVar16;
                param_13 = param_13 + 1;
                pbVar19 = pbVar19 + 4;
                pbVar15 = pbVar15 + 4;
              } while (param_13 < param_15);
            }
            param_3 = param_3 + (iVar12 >> 2) * 4;
            param_8 = (int *)((int)param_8 + ((int)(iVar11 + (uVar20 & 3)) >> 2) * 4);
            param_5 = param_5 + ((int)(param_11 + (uVar17 & 3)) >> 2) * 4;
            param_7 = param_7 + 1;
          } while (param_7 < param_16);
        }
      }
      else if (param_13 == 0x10) {
        iVar14 = param_3 + (uVar13 & 0xf);
        param_7 = 0;
        param_13 = local_60;
        param_3 = local_68;
        param_8 = (int *)local_50;
        iVar12 = param_16;
        iVar8 = param_15;
        if (0 < param_16) {
          do {
            param_6 = 0;
            if (0 < iVar8) {
              pfVar18 = (float *)(param_13 + 4);
              pfVar22 = (float *)(param_3 + 0xc);
              iVar21 = param_13 - param_3;
              do {
                pvVar10 = local_48;
                if (local_48 == (LPVOID)0x0) {
                  fVar1 = *(float *)(((int)param_8 - param_3) + (int)pfVar22);
                }
                else {
                  iVar12 = ftol();
                  fVar1 = (float)*(ushort *)((int)pvVar10 + iVar12 * -2) * _DAT_00629ffc;
                }
                if ((local_68 != 0) && (local_64 == 0)) {
                  if (local_5c == 0) {
                    fVar1 = (_DAT_00619ab0 - *pfVar22) * fVar1;
                  }
                  else {
                    fVar1 = fVar1 * *pfVar22;
                  }
                }
                fVar1 = fVar1 * local_24;
                if (_DAT_00619ab0 == fVar1) {
                  pfVar18[1] = local_28;
                  *pfVar18 = (float)CONCAT13(uStack_29,
                                             CONCAT12(uStack_2a,CONCAT11(uStack_2b,uStack_2c)));
                  pfVar18[-1] = (float)CONCAT13(uStack_2d,
                                                CONCAT12(bStack_2e,CONCAT11(bStack_2f,local_30)));
                }
                else if (_DAT_00610f20 != fVar1) {
                  pfVar18[1] = fVar1 * (local_28 - pfVar18[1]) + pfVar18[1];
                  *pfVar18 = fVar1 * ((float)CONCAT13(uStack_29,
                                                      CONCAT12(uStack_2a,
                                                               CONCAT11(uStack_2b,uStack_2c))) -
                                     *pfVar18) + *pfVar18;
                  pfVar18[-1] = fVar1 * ((float)CONCAT13(uStack_2d,
                                                         CONCAT12(bStack_2e,
                                                                  CONCAT11(bStack_2f,local_30))) -
                                        pfVar18[-1]) + pfVar18[-1];
                }
                if (fVar1 < *(float *)((int)pfVar22 + iVar21)) {
                  fVar1 = *(float *)((int)pfVar22 + iVar21);
                }
                pfVar18 = pfVar18 + 4;
                *(float *)((int)pfVar22 + iVar21) = fVar1;
                param_6 = param_6 + 1;
                pfVar22 = pfVar22 + 4;
                iVar12 = param_16;
                iVar8 = param_15;
              } while (param_6 < param_15);
            }
            param_13 = param_13 + (iVar14 >> 4) * 0x10;
            param_3 = param_3 + ((int)(iVar11 + (uVar20 & 0xf)) >> 4) * 0x10;
            param_8 = (int *)((int)param_8 + ((int)(param_11 + (uVar17 & 0xf)) >> 4) * 0x10);
            param_7 = param_7 + 1;
          } while (param_7 < iVar12);
        }
      }
    }
    pvVar10 = local_58;
    iVar8 = 0;
    if (local_58 != (LPCVOID)0x0) {
      pvVar9 = GlobalHandle(local_58);
      GlobalUnlock(pvVar9);
      pvVar9 = GlobalHandle(pvVar10);
      GlobalFree(pvVar9);
    }
    pvVar10 = local_48;
    if (local_48 != (LPCVOID)0x0) {
      pvVar9 = GlobalHandle(local_48);
      GlobalUnlock(pvVar9);
      pvVar9 = GlobalHandle(pvVar10);
      GlobalFree(pvVar9);
    }
  }
  return iVar8;
}



/* Module: vidpcore.dll
   Function: FUN_5de8f390
   Address: 5de8f390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de8f390(int *param_1,float param_2,float param_3)

{
  double _X;
  double _X_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  HGLOBAL pvVar16;
  LPVOID pvVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  int local_c8;
  int local_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_38;
  double local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  double local_20;
  undefined4 local_18;
  undefined4 local_10;
  
  _X = (double)(param_2 + (float)_DAT_5df1eec0);
  _X_00 = (double)(param_3 + (float)_DAT_5df1eec0);
  ceil(_X);
  ceil(_X_00);
  iVar14 = ftol();
  *param_1 = iVar14 + 2;
  iVar15 = ftol();
  iVar14 = (iVar14 + 2) * 4;
  param_1[2] = iVar14;
  param_1[1] = iVar15 + 2;
  pvVar16 = GlobalAlloc(0x40,iVar14 * (iVar15 + 2));
  pvVar17 = GlobalLock(pvVar16);
  param_1[3] = (int)pvVar17;
  pvVar16 = GlobalAlloc(0x40,param_1[2] * param_1[1]);
  pvVar17 = GlobalLock(pvVar16);
  param_1[4] = (int)pvVar17;
  local_c8 = 0;
  if (0 < param_1[1]) {
    do {
      iVar14 = *param_1;
      local_c4 = 0;
      if (0 < iVar14) {
        dVar5 = (double)local_c8 - _DAT_5df1eec0;
        dVar6 = (double)local_c8 + _DAT_5df1eec0;
        do {
          local_50[0] = 0;
          dVar1 = (double)local_c4 - _DAT_5df1eec0;
          local_50[1] = 0xbff00000;
          puVar20 = local_50;
          puVar21 = &local_48;
          for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
            *(undefined4 *)puVar21 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar21 = (undefined8 *)((int)puVar21 + 4);
          }
          dVar2 = (double)local_c4 + _DAT_5df1eec0;
          bVar12 = false;
          local_18 = 0;
          bVar11 = false;
          local_10 = 0;
          if ((local_c4 == 0) && (local_c8 == 0)) {
            *(undefined4 *)param_1[3] = 0x3f800000;
          }
          else {
            dVar3 = _X * _X;
            dVar4 = _X_00 * _X_00;
            dVar8 = -(((dVar2 * dVar2) / dVar3 - _DAT_5df18830) * dVar4);
            dVar7 = _DAT_5df1fa70;
            if (_DAT_5df18838 <= dVar8) {
              dVar7 = SQRT(dVar8);
            }
            if (dVar7 < dVar6) {
              dVar7 = dVar1;
              if (dVar1 < _DAT_5df18838) {
                dVar7 = 0.0;
              }
              bVar13 = false;
              dVar9 = dVar5;
              if (dVar5 < _DAT_5df18838) {
                dVar9 = _DAT_5df18838;
              }
              dVar10 = -(((dVar7 * dVar7) / dVar3 - _DAT_5df18830) * dVar4);
              dVar7 = _DAT_5df1fa70;
              if (_DAT_5df18838 <= dVar10) {
                dVar7 = SQRT(dVar10);
              }
              if (dVar9 < dVar7) {
                dVar7 = _DAT_5df1fa70;
                if ((_DAT_5df18838 <= dVar8) && (_DAT_5df18838 <= dVar2)) {
                  dVar7 = SQRT(dVar8);
                }
                if (((dVar5 <= dVar7) && (dVar7 <= dVar6)) && (_DAT_5df18838 < dVar7)) {
                  bVar13 = true;
                }
                dVar7 = -(((dVar5 * dVar5) / dVar4 - _DAT_5df18830) * dVar3);
                dVar8 = _DAT_5df1fa70;
                if ((_DAT_5df18838 <= dVar7) && (_DAT_5df18838 <= dVar5)) {
                  dVar8 = SQRT(dVar7);
                }
                if (((dVar1 <= dVar8) && (dVar8 <= dVar2)) && (_DAT_5df18838 < dVar8)) {
                  local_48 = dVar8;
                  bVar11 = true;
                }
                dVar7 = -(((dVar6 * dVar6) / dVar4 - _DAT_5df18830) * dVar3);
                dVar8 = _DAT_5df1fa70;
                if ((_DAT_5df18838 <= dVar7) && (_DAT_5df18838 <= dVar6)) {
                  dVar8 = SQRT(dVar7);
                }
                if (((dVar1 <= dVar8) && (dVar8 <= dVar2)) && (_DAT_5df18838 < dVar8)) {
                  local_38 = dVar8;
                  bVar12 = true;
                }
                uStack_b4 = (undefined4)((ulonglong)dVar2 >> 0x20);
                local_b8 = SUB84(dVar2,0);
                if (local_c4 == 0) {
                  fVar22 = (float10)_DAT_5df18838;
                  if (dVar5 < _X_00) {
                    local_88 = 0;
                    uStack_84 = 0;
                    local_58 = local_b8;
                    uStack_54 = uStack_b4;
                    if (bVar11) {
                      local_58 = (undefined4)local_48;
                      uStack_54 = local_48._4_4_;
                    }
                    if (bVar12) {
                      local_88 = (undefined4)local_38;
                      uStack_84 = local_38._4_4_;
                    }
                    fVar22 = (float10)_DAT_5df18838;
                    fVar23 = (float10)(double)CONCAT44(uStack_54,local_58) -
                             (float10)(double)CONCAT44(uStack_84,local_88);
                    local_28 = local_88;
                    uStack_24 = uStack_84;
                    fVar24 = fVar23 * (float10)_DAT_5df23590;
                    fVar25 = (float10)(double)CONCAT44(uStack_84,local_88);
                    iVar15 = 0x14;
                    do {
                      fVar25 = fVar24 + fVar25;
                      dVar1 = (double)-(((fVar25 * fVar25) / (float10)dVar3 - (float10)_DAT_5df18830
                                        ) * (float10)dVar4);
                      if ((_DAT_5df18838 <= dVar1) && ((float10)_DAT_5df18838 <= fVar25)) {
                        fVar22 = SQRT((float10)dVar1) * fVar24 + fVar22;
                      }
                      iVar15 = iVar15 + -1;
                    } while (iVar15 != 0);
                    fVar22 = (fVar22 - fVar23 * (float10)dVar5) +
                             (float10)(double)CONCAT44(uStack_84,local_88);
                    fVar22 = fVar22 + fVar22;
                  }
                  iVar14 = iVar14 * local_c8;
                }
                else {
                  if (local_c8 == 0) {
                    fVar22 = (float10)_DAT_5df18838;
                    if (dVar1 < _X) {
                      dVar7 = _X;
                      if (bVar13) {
                        dVar7 = dVar2;
                      }
                      local_30 = dVar1;
                      if (bVar12) {
                        local_30 = local_38;
                      }
                      fVar22 = (float10)_DAT_5df18838;
                      iVar14 = 0x14;
                      fVar23 = ((float10)dVar7 - (float10)local_30) * (float10)_DAT_5df23590;
                      fVar24 = (float10)local_30;
                      do {
                        fVar24 = fVar23 + fVar24;
                        dVar2 = (double)-(((fVar24 * fVar24) / (float10)dVar3 -
                                          (float10)_DAT_5df18830) * (float10)dVar4);
                        if ((_DAT_5df18838 <= dVar2) && ((float10)_DAT_5df18838 <= fVar24)) {
                          fVar22 = SQRT((float10)dVar2) * fVar23 + fVar22;
                        }
                        iVar14 = iVar14 + -1;
                      } while (iVar14 != 0);
                      fVar22 = fVar22 + ((float10)local_30 - (float10)dVar1) *
                                        (float10)_DAT_5df1eec0;
                      fVar22 = fVar22 + fVar22;
                    }
                    *(float *)(param_1[3] + local_c4 * 4) = (float)fVar22;
                    goto LAB_5de8fae8;
                  }
                  local_68 = local_b8;
                  uStack_64 = uStack_b4;
                  if (bVar11) {
                    local_68 = (undefined4)local_48;
                    uStack_64 = local_48._4_4_;
                  }
                  local_20 = dVar1;
                  if (bVar12) {
                    local_20 = local_38;
                  }
                  fVar22 = (float10)_DAT_5df18838;
                  fVar23 = (float10)(double)CONCAT44(uStack_64,local_68) - (float10)local_20;
                  fVar24 = fVar23 * (float10)_DAT_5df23590;
                  fVar25 = (float10)local_20;
                  iVar15 = 0x14;
                  do {
                    fVar25 = fVar24 + fVar25;
                    dVar2 = (double)-(((fVar25 * fVar25) / (float10)dVar3 - (float10)_DAT_5df18830)
                                     * (float10)dVar4);
                    if ((_DAT_5df18838 <= dVar2) && ((float10)_DAT_5df18838 <= fVar25)) {
                      fVar22 = SQRT((float10)dVar2) * fVar24 + fVar22;
                    }
                    iVar15 = iVar15 + -1;
                  } while (iVar15 != 0);
                  iVar14 = iVar14 * local_c8 + local_c4;
                  fVar22 = (fVar22 - fVar23 * (float10)dVar5) + ((float10)local_20 - (float10)dVar1)
                  ;
                }
                *(float *)(param_1[3] + iVar14 * 4) = (float)fVar22;
              }
              else {
                *(undefined4 *)(param_1[3] + (iVar14 * local_c8 + local_c4) * 4) = 0;
              }
            }
            else {
              *(undefined4 *)(param_1[3] + (iVar14 * local_c8 + local_c4) * 4) = 0x3f800000;
            }
          }
LAB_5de8fae8:
          iVar14 = *param_1;
          local_c4 = local_c4 + 1;
        } while (local_c4 < iVar14);
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 < param_1[1]);
  }
  iVar14 = *param_1 + -1;
  iVar15 = 0;
  if (0 < param_1[1]) {
    do {
      iVar19 = 0;
      if (0 < iVar14) {
        do {
          iVar18 = *param_1 * iVar15 + iVar19;
          iVar19 = iVar19 + 1;
          *(float *)(param_1[4] + iVar18 * 4) =
               *(float *)(param_1[3] + iVar18 * 4) - *(float *)(param_1[3] + 4 + iVar18 * 4);
        } while (iVar19 < iVar14);
      }
      iVar19 = *param_1 * iVar15 + iVar14;
      iVar15 = iVar15 + 1;
      *(undefined4 *)(param_1[4] + iVar19 * 4) = *(undefined4 *)(param_1[3] + iVar19 * 4);
    } while (iVar15 < param_1[1]);
  }
  return 1;
}



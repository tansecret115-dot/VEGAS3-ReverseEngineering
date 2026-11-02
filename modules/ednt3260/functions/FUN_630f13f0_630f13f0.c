/* Module: ednt3260.dll
   Function: FUN_630f13f0
   Address: 630f13f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_630f13f0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined2 uVar4;
  short sVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  double *pdVar11;
  short *psVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  double *pdVar16;
  short sVar17;
  int iVar18;
  short sVar19;
  int *piVar20;
  double *pdVar21;
  float10 fVar22;
  float10 fVar23;
  short local_58 [6];
  double local_4c;
  double local_44;
  short *local_3c;
  double *local_38;
  double *local_34;
  double *local_30;
  double *local_2c;
  short *local_28;
  double *local_24;
  int *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  double *local_8;
  
  local_3c = (short *)0x0;
  local_20 = (int *)(param_1 + 0x90f2);
  psVar9 = (short *)(param_1 + 0x6450);
  do {
    piVar20 = local_20;
    for (iVar14 = 9; iVar14 != 0; iVar14 = iVar14 + -1) {
      *piVar20 = 0;
      piVar20 = piVar20 + 1;
    }
    psVar9[0x16bd] = 0;
    if (psVar9[-0x2a] != 0) {
      sVar19 = 0;
      iVar14 = psVar9[6] + -1;
      if (*psVar9 <= iVar14) {
        psVar12 = (short *)(param_1 + 0x90f2 + ((int)local_3c + iVar14) * 2);
        do {
          sVar19 = sVar19 + 1;
          if (psVar12[-0x1639] == 0) {
            *psVar12 = sVar19;
            psVar9[0x16bd] = psVar9[0x16bd] + 1;
            sVar19 = 0;
          }
          iVar14 = iVar14 + -1;
          psVar12 = psVar12 + -1;
        } while (*psVar9 <= iVar14);
      }
    }
    local_3c = (short *)((int)local_3c + 0x12);
    psVar9 = psVar9 + 1;
    local_20 = local_20 + 9;
  } while ((int)local_3c < 0x6c);
  psVar12 = (short *)(param_1 + 0x6408);
  iVar14 = 0x32ac;
  psVar9 = local_58;
  local_3c = psVar12;
  do {
    iVar8 = 0;
    local_3c = psVar12;
    *psVar9 = 0;
    if (0 < *(short *)(param_1 + 0x6344)) {
      do {
        if (*psVar12 == 0) {
          *(undefined2 *)(param_1 + (iVar14 + iVar8) * 2) = 0;
        }
        else {
          *psVar9 = *psVar9 + 1;
          *(undefined2 *)(param_1 + (iVar14 + iVar8) * 2) = 1;
        }
        iVar8 = iVar8 + 1;
        psVar12 = psVar12 + 1;
      } while (iVar8 < *(short *)(param_1 + 0x6344));
    }
    iVar14 = iVar14 + 5;
    psVar12 = local_3c + 5;
    psVar9 = psVar9 + 1;
    local_3c = psVar12;
  } while (iVar14 < 0x32ca);
  local_3c = (short *)0x0;
  do {
    sVar19 = 0;
    pdVar21 = (double *)0x0;
    *(undefined4 *)(param_1 + 0x90e4) = 0;
    iVar14 = 0x19;
    *(undefined4 *)(param_1 + 0x90e8) = 0;
    psVar9 = (short *)(param_1 + 0x644e);
    *(undefined4 *)(param_1 + 0x90ec) = 0;
    *(undefined2 *)(param_1 + 0x90f0) = 0;
    do {
      sVar19 = sVar19 + 1;
      if (((psVar9[-0x24] == 0) || (*(short *)(param_1 + 0x6558 + (*psVar9 + iVar14) * 2) != 0)) ||
         (iVar14 == 0)) {
        psVar9[0x1650] = sVar19;
        *(short *)(param_1 + 0x90f0) = *(short *)(param_1 + 0x90f0) + 1;
        sVar19 = 0;
      }
      psVar9 = psVar9 + -1;
      iVar14 = iVar14 + -5;
    } while (-1 < iVar14);
    do {
      pdVar16 = (double *)(int)*(short *)(param_1 + 0x90e4 + (int)pdVar21 * 2);
      local_38 = pdVar16;
      dVar1 = *(double *)(&DAT_631017b0 + (int)pdVar16 * 8);
      if ((*(short *)(param_1 + 0x63fc + (int)pdVar21 * 2) != 0) &&
         (local_8 = (double *)0x0, 0 < *(short *)(param_1 + 0x6344))) {
        local_28 = (short *)((int)pdVar21 * 5);
        local_30 = (double *)((int)pdVar21 * 0x5a);
        local_2c = (double *)(param_1 + 0x6408 + (int)pdVar21 * 10);
        do {
          if (*(short *)local_2c != 0) {
            iVar14 = (int)*(short *)(param_1 + 0x6450 + (int)pdVar21 * 2);
            local_c = 0;
            if (iVar14 < *(short *)(param_1 + 0x645c + (int)pdVar21 * 2)) {
              iVar8 = (int)pdVar16 + (int)pdVar21;
              local_20 = (undefined4 *)((int)pdVar21 * 0x12);
              local_14 = (double)CONCAT44(iVar8,(undefined4)local_14);
              do {
                local_34 = (double *)
                           (int)*(short *)(param_1 + 0x90f2 + ((int)pdVar21 * 0x12 + iVar14) * 2);
                local_44 = *(double *)(&DAT_631017b0 + (int)local_34 * 8);
                dVar3 = _DAT_630fe028;
                if ((int)pdVar21 < iVar8) {
                  iVar10 = (int)local_34 + iVar14;
                  local_1c = (double)CONCAT44(iVar10,(undefined4)local_1c);
                  iVar18 = iVar8 - (int)pdVar21;
                  local_24 = (double *)(param_1 + 0x6f24 + ((int)local_30 + iVar14) * 8);
                  do {
                    dVar6 = _DAT_630fe028;
                    if (iVar14 < iVar10) {
                      iVar15 = iVar10 - iVar14;
                      pdVar11 = local_24;
                      do {
                        dVar2 = *pdVar11;
                        pdVar11 = pdVar11 + 1;
                        iVar15 = iVar15 + -1;
                        dVar6 = dVar6 - dVar2 * *(double *)(&DAT_631017b0 + (int)local_34 * 8);
                      } while (iVar15 != 0);
                    }
                    iVar18 = iVar18 + -1;
                    local_24 = local_24 + 0x5a;
                    dVar3 = dVar3 - dVar6 * dVar1;
                  } while (iVar18 != 0);
                }
                iVar14 = iVar14 + (int)local_34;
                iVar10 = local_c + (int)local_28 * 0x12;
                local_c = local_c + 1;
                *(double *)(param_1 + 0x8004 + iVar10 * 8) = dVar3;
              } while (iVar14 < *(short *)(param_1 + 0x645c + (int)pdVar21 * 2));
            }
          }
          local_8 = (double *)((int)local_8 + 1);
          local_28 = (short *)((int)local_28 + 1);
          local_30 = (double *)((int)local_30 + 0x12);
          local_2c = (double *)((int)local_2c + 2);
        } while ((int)local_8 < (int)*(short *)(param_1 + 0x6344));
      }
      pdVar21 = (double *)((int)pdVar21 + (int)pdVar16);
    } while ((int)pdVar21 < 6);
    iVar14 = 0;
    do {
      uVar4 = *(undefined2 *)(param_1 + 0x90e4 + iVar14 * 2);
      pdVar16 = (double *)CONCAT22((short)((uint)pdVar16 >> 0x10),uVar4);
      local_1c._0_6_ = CONCAT24(uVar4,(undefined4)local_1c);
      if ((*(short *)(param_1 + 0x63fc + iVar14 * 2) != 0) &&
         (local_c = 0, 0 < *(short *)(param_1 + 0x91ca + iVar14 * 2))) {
        pdVar16 = (double *)(iVar14 * 0x90);
        pdVar11 = (double *)((int)pdVar16 + param_1 + 0x9bfe);
        do {
          *(undefined4 *)(pdVar11 + -0x145) = 0;
          *(undefined4 *)((int)pdVar11 + -0xa24) = 0;
          *(undefined4 *)pdVar11 = 0;
          *(undefined4 *)((int)pdVar11 + 4) = 0;
          local_8 = (double *)0x0;
          if (0 < *(short *)(param_1 + 0x6344)) {
            local_30 = (double *)(param_1 + 0x6408 + iVar14 * 10);
            local_38 = (double *)(param_1 + 0x8004 + (local_c + iVar14 * 0x5a) * 8);
            do {
              if (*(short *)local_30 != 0) {
                if (pdVar11[-0x145] < *local_38) {
                  dVar1 = *local_38;
                }
                else {
                  dVar1 = pdVar11[-0x145];
                }
                pdVar11[-0x145] = dVar1;
                local_44 = *local_38;
                dVar1 = local_44;
                if (_DAT_630fe028 < local_44) {
                  uVar7 = local_44._0_4_;
                  local_44 = dVar1;
                  fVar22 = FUN_630f9810(uVar7,(int)((ulonglong)local_44 >> 0x20));
                  *pdVar11 = (double)((float10)*pdVar11 -
                                     fVar22 * (float10)*(double *)
                                                        (&DAT_631017b0 + local_58[iVar14] * 8));
                }
              }
              local_8 = (double *)((int)local_8 + 1);
              local_30 = (double *)((int)local_30 + 2);
              local_38 = local_38 + 0x12;
              pdVar16 = (double *)(int)*(short *)(param_1 + 0x6344);
            } while ((int)local_8 < (int)pdVar16);
          }
          local_c = local_c + 1;
          pdVar21 = pdVar11 + 1;
          *pdVar11 = *pdVar11 * *pdVar11;
          pdVar11 = pdVar21;
        } while (local_c < *(short *)(param_1 + 0x91ca + iVar14 * 2));
      }
      iVar14 = iVar14 + local_1c._4_2_;
    } while (iVar14 < 6);
    iVar14 = 0;
    do {
      dVar1 = local_1c;
      sVar19 = *(short *)(param_1 + 0x90e4 + iVar14 * 2);
      local_1c._0_6_ = CONCAT24(sVar19,(undefined4)local_1c);
      if (*(short *)(param_1 + 0x63fc + iVar14 * 2) != 0) {
        sVar5 = *(short *)(param_1 + 0x6444 + iVar14 * 2);
        dVar3 = *(double *)(&DAT_631017b0 + local_58[iVar14] * 8);
        local_34 = (double *)CONCAT22((short)((uint)pdVar16 >> 0x10),sVar5);
        iVar8 = sVar19 + iVar14;
        local_14 = (double)CONCAT44(iVar8,(undefined4)local_14);
        if (iVar14 < iVar8) {
          local_2c = (double *)(iVar14 * 5);
          local_38 = (double *)(iVar8 - iVar14);
          local_30 = (double *)(iVar14 * 0xfd);
          do {
            iVar10 = (int)*(short *)(param_1 + 0x6468 + iVar14 * 2);
            if (iVar10 < *(short *)(param_1 + 0x6474 + iVar14 * 2)) {
              pdVar21 = (double *)
                        (param_1 + 0x30992 + (((int)local_2c + (int)sVar5) * 0x100 + iVar10) * 8);
              pdVar16 = (double *)(param_1 + 0x2da22 + ((int)local_30 + iVar10) * 8);
              do {
                iVar10 = iVar10 + 1;
                pdVar16[-0x241b] = -(pdVar21[-0x241b] * dVar3);
                *pdVar16 = -(*pdVar21 * dVar3);
                pdVar21 = pdVar21 + 1;
                pdVar16 = pdVar16 + 1;
              } while (iVar10 < *(short *)(param_1 + 0x6474 + iVar14 * 2));
            }
            local_38 = (double *)((int)local_38 + -1);
            local_30 = (double *)((int)local_30 + 0xfd);
            local_2c = (double *)((int)local_2c + 5);
          } while (local_38 != (double *)0x0);
        }
        pdVar21 = (double *)(sVar5 + 1);
        local_8 = pdVar21;
        if ((int)pdVar21 < (int)*(short *)(param_1 + 0x6344)) {
          iVar10 = (int)pdVar21 + iVar14 * 5;
          local_34 = (double *)(iVar10 * 0x100);
          local_28 = (short *)(param_1 + 0x6408 + iVar10 * 2);
          do {
            if ((*local_28 != 0) && (iVar14 < iVar8)) {
              local_30 = (double *)(iVar14 * 0xfd);
              local_38 = (double *)(iVar8 - iVar14);
              local_2c = local_34;
              do {
                iVar10 = (int)*(short *)(param_1 + 0x6468 + iVar14 * 2);
                if (iVar10 < *(short *)(param_1 + 0x6474 + iVar14 * 2)) {
                  pdVar16 = (double *)(param_1 + 0x2da22 + ((int)local_30 + iVar10) * 8);
                  pdVar11 = (double *)(param_1 + 0x30992 + ((int)local_2c + iVar10) * 8);
                  do {
                    iVar10 = iVar10 + 1;
                    pdVar16[-0x241b] = pdVar16[-0x241b] - pdVar11[-0x241b] * dVar3;
                    *pdVar16 = *pdVar16 - *pdVar11 * dVar3;
                    pdVar16 = pdVar16 + 1;
                    pdVar11 = pdVar11 + 1;
                  } while (iVar10 < *(short *)(param_1 + 0x6474 + iVar14 * 2));
                }
                local_38 = (double *)((int)local_38 + -1);
                local_30 = (double *)((int)local_30 + 0xfd);
                local_2c = local_2c + 0xa0;
              } while (local_38 != (double *)0x0);
            }
            pdVar21 = (double *)((int)pdVar21 + 1);
            local_34 = local_34 + 0x20;
            local_28 = local_28 + 1;
            local_8 = pdVar21;
          } while ((int)pdVar21 < (int)*(short *)(param_1 + 0x6344));
        }
      }
      pdVar16 = (double *)(int)sVar19;
      iVar14 = iVar14 + (int)pdVar16;
    } while (iVar14 < 6);
    local_28 = (short *)(param_1 + 0x2da22);
    local_1c = (double)((ulonglong)dVar1 & 0xffffffff);
    local_20 = (undefined4 *)0x0;
    local_24 = (double *)(param_1 + 0x3fb5a);
    psVar9 = (short *)(param_1 + 0x6468);
    do {
      pdVar16 = local_24;
      if (psVar9[-0x36] != 0) {
        iVar14 = (int)*psVar9;
        if (iVar14 < psVar9[6]) {
          pdVar21 = (double *)(local_28 + iVar14 * 4);
          pdVar11 = (double *)(param_1 + 0x5af6 + iVar14 * 8);
          do {
            dVar1 = *pdVar21;
            iVar14 = iVar14 + 1;
            local_44 = pdVar21[-0x241b];
            pdVar21 = pdVar21 + 1;
            *pdVar11 = dVar1 * dVar1 + local_44 * local_44;
            pdVar11 = pdVar11 + 1;
          } while (iVar14 < psVar9[6]);
        }
        sVar19 = *psVar9;
        FUN_630f8ab0((double *)(param_1 + 0x5af6 + sVar19 * 8),
                     (short *)(*(int *)local_24 + sVar19 * 2),psVar9[6] - sVar19,0x30);
        iVar14 = (int)*psVar9;
        if (iVar14 < psVar9[6]) {
          do {
            psVar12 = (short *)(*(int *)pdVar16 + iVar14 * 2);
            *psVar12 = *psVar12 >> 1;
            iVar14 = iVar14 + 1;
          } while (iVar14 < psVar9[6]);
        }
        local_2c = (double *)(int)psVar9[-0xc];
        pdVar21 = pdVar16;
        if ((int)local_2c < (int)psVar9[-6]) {
          local_30 = (double *)(param_1 + 0x5af6 + *psVar9 * 8);
          pdVar21 = (double *)(param_1 + 0x9896 + ((int)local_20 + (int)local_2c) * 8);
          local_38 = (double *)(param_1 + 0x1b94a + (local_1c._4_4_ + *psVar9) * 8);
          do {
            fVar22 = FUN_630f2820(local_30,0xc,0.08333333333333333);
            pdVar21[0xeb] = (double)fVar22;
            *(undefined4 *)pdVar21 = 0;
            *(undefined4 *)((int)pdVar21 + 4) = 0;
            iVar14 = 0xc;
            do {
              dVar1 = *local_38;
              if (*local_38 < _DAT_630fe028) {
                dVar1 = -dVar1;
              }
              if (*pdVar21 < dVar1) {
                dVar1 = *local_38;
                if (*local_38 < _DAT_630fe028) {
                  dVar1 = -dVar1;
                }
              }
              else {
                dVar1 = *pdVar21;
              }
              *pdVar21 = dVar1;
              local_38 = local_38 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            local_2c = (double *)((int)local_2c + 1);
            local_30 = local_30 + 0xc;
            pdVar21 = pdVar21 + 1;
          } while ((int)local_2c < (int)psVar9[-6]);
        }
      }
      local_24 = (double *)((int)local_24 + 4);
      local_20 = (int *)((int)local_20 + 0x12);
      psVar9 = psVar9 + 1;
      local_28 = local_28 + 0x3f4;
      local_1c = (double)CONCAT44(local_1c._4_4_ + 0xfd,(undefined4)local_1c);
    } while ((int)local_20 < 0x6c);
    iVar14 = 0;
    do {
      local_38 = (double *)(int)*(short *)(param_1 + 0x90e4 + iVar14 * 2);
      dVar1 = *(double *)(&DAT_631017b0 + (int)local_38 * 8);
      if ((*(short *)(param_1 + 0x63fc + iVar14 * 2) != 0) &&
         (pdVar21 = (double *)(int)*(short *)(param_1 + 0x6450 + iVar14 * 2),
         (int)pdVar21 < (int)*(short *)(param_1 + 0x645c + iVar14 * 2))) {
        iVar8 = (int)local_38 + iVar14;
        local_14 = (double)CONCAT44(iVar8,(undefined4)local_14);
        local_20 = (undefined4 *)(iVar14 * 0x12);
        local_28 = (short *)(param_1 + 0x9896 + iVar14 * 0x90);
        do {
          iVar10 = iVar14 * 0x12 + (int)pdVar21;
          local_34 = (double *)(int)*(short *)(param_1 + 0x90f2 + iVar10 * 2);
          local_44 = *(double *)(&DAT_631017b0 + (int)local_34 * 8);
          *(undefined4 *)(param_1 + 0x9bf6) = 0;
          *(undefined4 *)(param_1 + 0x9bfa) = 0;
          dVar3 = _DAT_630fe028;
          if (iVar14 < iVar8) {
            local_30 = (double *)(param_1 + 0x9896 + iVar10 * 8);
            iVar10 = (int)local_34 + (int)pdVar21;
            local_2c = (double *)(iVar8 - iVar14);
            local_1c = (double)CONCAT44(iVar10,(undefined4)local_1c);
            do {
              dVar6 = _DAT_630fe028;
              if ((int)pdVar21 < iVar10) {
                iVar18 = iVar10 - (int)pdVar21;
                pdVar16 = local_30;
                do {
                  dVar6 = dVar6 - pdVar16[0xeb] * local_44;
                  if (*(double *)(param_1 + 0x9bf6) < *pdVar16) {
                    dVar2 = *pdVar16;
                  }
                  else {
                    dVar2 = *(double *)(param_1 + 0x9bf6);
                  }
                  pdVar16 = pdVar16 + 1;
                  iVar18 = iVar18 + -1;
                  *(double *)(param_1 + 0x9bf6) = dVar2;
                } while (iVar18 != 0);
              }
              local_2c = (double *)((int)local_2c + -1);
              local_30 = local_30 + 0x12;
              dVar3 = dVar3 - dVar6 * dVar1;
            } while (local_2c != (double *)0x0);
          }
          pdVar21 = (double *)((int)pdVar21 + (int)local_34);
          *(double *)(local_28 + 0x3ac) = dVar3;
          *(undefined4 *)local_28 = *(undefined4 *)(param_1 + 0x9bf6);
          *(undefined4 *)(local_28 + 2) = *(undefined4 *)(param_1 + 0x9bfa);
          local_28 = local_28 + 4;
        } while ((int)pdVar21 < (int)*(short *)(param_1 + 0x645c + iVar14 * 2));
      }
      iVar14 = iVar14 + (int)local_38;
    } while (iVar14 < 6);
    iVar14 = 0;
    do {
      local_1c._0_6_ = CONCAT24(*(undefined2 *)(param_1 + 0x90e4 + iVar14 * 2),(undefined4)local_1c)
      ;
      if ((*(short *)(param_1 + 0x63fc + iVar14 * 2) != 0) &&
         (local_c = 0, 0 < *(short *)(param_1 + 0x91ca + iVar14 * 2))) {
        pdVar21 = (double *)(iVar14 * 0x90 + 0x9bfe + param_1);
        do {
          if (pdVar21[0x7e] <= *pdVar21 * _DAT_630fe030) {
            dVar1 = pdVar21[0x7e] * _DAT_630fe038;
          }
          else {
            dVar1 = *pdVar21;
          }
          if (pdVar21[-0x145] == _DAT_630fe028) {
            *(undefined4 *)(pdVar21 + -0xd9) = 0;
            *(undefined4 *)((int)pdVar21 + -0x6c4) = 0x3ff00000;
          }
          else if (dVar1 == _DAT_630fe028) {
            FUN_630f92d0();
            local_38 = (double *)(int)local_58[iVar14];
            pdVar21[-0xd9] = (double)(int)local_38;
            if (_DAT_630fe040 < pdVar21[-0x6d] * (double)(int)local_38) {
LAB_630f1e4c:
              pdVar21[-0xd9] = _DAT_630fe048 / pdVar21[-0x6d];
            }
          }
          else {
            dVar1 = pdVar21[-0x145] / dVar1;
            fVar22 = FUN_630f9810(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
            local_38 = (double *)(int)local_58[iVar14];
            local_44 = (double)fVar22;
            fVar23 = (float10)(int)local_38;
            pdVar21[-0xd9] = (double)fVar22;
            if (fVar22 < fVar23) {
              fVar23 = (float10)(double)fVar22;
            }
            pdVar21[-0xd9] = (double)fVar23;
            if ((float10)_DAT_630fe040 < (float10)pdVar21[-0x6d] * fVar23) {
              FUN_630f92d0();
              goto LAB_630f1e4c;
            }
          }
          pdVar21 = pdVar21 + 1;
          local_c = local_c + 1;
        } while (local_c < *(short *)(param_1 + 0x91ca + iVar14 * 2));
      }
      iVar14 = iVar14 + local_1c._4_2_;
    } while (iVar14 < 6);
    iVar14 = 0;
    do {
      sVar19 = *(short *)(param_1 + 0x90e4 + iVar14 * 2);
      pdVar21 = (double *)CONCAT22((short)((uint)pdVar21 >> 0x10),sVar19);
      local_1c = (double)CONCAT44(pdVar21,(undefined4)local_1c);
      if (*(short *)(param_1 + 0x63fc + iVar14 * 2) != 0) {
        local_34 = (double *)(int)*(short *)(param_1 + 0x6450 + iVar14 * 2);
        local_30 = (double *)(int)*(short *)(param_1 + 0x6468 + iVar14 * 2);
        if ((int)local_34 < (int)*(short *)(param_1 + 0x645c + iVar14 * 2)) {
          iVar8 = sVar19 + iVar14;
          local_20 = (undefined4 *)(iVar14 * 0x12);
          local_14 = (double)CONCAT44(iVar8,(undefined4)local_14);
          pdVar16 = (double *)(param_1 + 0x9536 + iVar14 * 0x90);
          do {
            iVar10 = iVar14 * 0x12 + (int)local_34;
            sVar5 = *(short *)(param_1 + 0x90f2 + iVar10 * 2);
            local_28 = (short *)CONCAT22((short)((uint)iVar10 >> 0x10),sVar5);
            local_24 = (double *)((int)local_28 * 0xc);
            sVar17 = (short)local_24;
            if (iVar14 < iVar8) {
              local_2c = (double *)((int)sVar17 + (int)local_30);
              iVar10 = iVar8 - iVar14;
              local_38 = (double *)(param_1 + 0x2da22 + (int)local_30 * 8 + iVar14 * 0x7e8);
              do {
                if ((int)local_30 < (int)local_2c) {
                  iVar18 = (int)local_2c - (int)local_30;
                  pdVar11 = local_38;
                  do {
                    iVar18 = iVar18 + -1;
                    pdVar11[-0x241b] = *pdVar16 * pdVar11[-0x241b];
                    *pdVar11 = *pdVar16 * *pdVar11;
                    pdVar11 = pdVar11 + 1;
                  } while (iVar18 != 0);
                }
                local_38 = local_38 + 0xfd;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            pdVar16 = pdVar16 + 1;
            local_34 = (double *)((int)local_34 + (int)sVar5);
            local_30 = (double *)((int)local_30 + (int)sVar17);
          } while ((int)local_34 < (int)*(short *)(param_1 + 0x645c + iVar14 * 2));
        }
      }
      iVar14 = iVar14 + sVar19;
    } while (iVar14 < 6);
    iVar14 = 0;
    do {
      local_1c._0_6_ = CONCAT24(*(undefined2 *)(param_1 + 0x90e4 + iVar14 * 2),(undefined4)local_1c)
      ;
      if ((*(short *)(param_1 + 0x63fc + iVar14 * 2) != 0) &&
         (local_8 = (double *)0x0, 0 < *(short *)(param_1 + 0x6344))) {
        local_30 = (double *)(iVar14 * 0x2d0 + 0x8004 + param_1);
        local_34 = (double *)(param_1 + 0x6408 + iVar14 * 10);
        do {
          if ((*(short *)local_34 != 0) &&
             (local_c = 0, 0 < *(short *)(param_1 + 0x91ca + iVar14 * 2))) {
            local_38 = (double *)(iVar14 * 0x90 + 0x91d6 + param_1);
            pdVar21 = local_30;
            do {
              fVar22 = FUN_630f9810(*(undefined4 *)pdVar21,*(undefined4 *)((int)pdVar21 + 4));
              local_44 = (double)(fVar22 * (float10)_DAT_630fe050);
              fVar22 = FUN_630f9810(*(undefined4 *)local_38,*(undefined4 *)((int)local_38 + 4));
              if (local_44 == _DAT_630fe028) {
                *(undefined4 *)pdVar21 = 0;
                *(undefined4 *)((int)pdVar21 + 4) = 0;
              }
              else if ((float10)local_44 < fVar22) {
                *pdVar21 = (double)((float10)local_44 / fVar22);
              }
              else {
                FUN_630f92d0();
                *(undefined4 *)pdVar21 = 0;
                *(undefined4 *)((int)pdVar21 + 4) = 0x3fc00000;
              }
              local_c = local_c + 1;
              local_38 = (double *)((int)local_38 + 8);
              pdVar21 = pdVar21 + 1;
            } while (local_c < *(short *)(param_1 + 0x91ca + iVar14 * 2));
          }
          local_30 = local_30 + 0x12;
          local_8 = (double *)((int)local_8 + 1);
          local_34 = (double *)((int)local_34 + 2);
        } while ((int)local_8 < (int)*(short *)(param_1 + 0x6344));
      }
      iVar14 = iVar14 + local_1c._4_2_;
    } while (iVar14 < 6);
    if (local_3c == (short *)0x0) {
      local_38 = (double *)(param_1 + 0x6558);
      psVar9 = (short *)(param_1 + 0x91ca);
      pdVar21 = (double *)(param_1 + 0x7d34);
      local_24 = (double *)0x6;
      do {
        local_2c = pdVar21;
        if (psVar9[-0x16ed] == 0) {
          local_20 = (undefined4 *)0x0;
          local_8 = (double *)0x0;
          if (0 < *(short *)(param_1 + 0x6344)) {
            local_34 = (double *)((int)local_38 + -0x15a);
            local_28 = psVar9;
            do {
              local_30 = pdVar21;
              if (((*(short *)((int)local_34 + 10) != 0) && (*(short *)local_34 != 0)) &&
                 (iVar14 = 0, 0 < *psVar9)) {
                do {
                  local_14 = pdVar21[0x5a] * _DAT_630fe058;
                  local_1c = *pdVar21 * _DAT_630fe058;
                  dVar1 = local_14;
                  if (local_14 <= _DAT_630fe028) {
                    local_4c = 0.0;
                  }
                  else {
                    uVar7 = (undefined4)local_14;
                    local_14 = dVar1;
                    fVar22 = FUN_630f9810(uVar7,(int)((ulonglong)local_14 >> 0x20));
                    local_4c = (double)fVar22;
                  }
                  if (local_1c <= _DAT_630fe028) {
                    fVar22 = (float10)_DAT_630fe028;
                  }
                  else {
                    fVar22 = FUN_630f9810((undefined4)local_1c,(int)((ulonglong)local_1c >> 0x20));
                  }
                  if ((local_1c + local_1c < local_4c * local_14) ||
                     ((float10)local_14 < fVar22 * (float10)local_1c * (float10)_DAT_630fe068)) {
                    local_20 = (undefined4 *)0x1;
                  }
                  iVar14 = iVar14 + 1;
                  pdVar21 = pdVar21 + 1;
                  psVar9 = local_28;
                } while (iVar14 < *local_28);
              }
              local_8 = (double *)((int)local_8 + 1);
              local_34 = (double *)((int)local_34 + 2);
              pdVar21 = local_30 + 0x12;
              local_30 = pdVar21;
            } while ((int)local_8 < (int)*(short *)(param_1 + 0x6344));
          }
        }
        else {
          local_20 = (undefined4 *)0x1;
        }
        iVar14 = 0;
        pdVar21 = local_38;
        if (0 < *(short *)(param_1 + 0x6344)) {
          do {
            iVar14 = iVar14 + 1;
            *(ushort *)pdVar21 =
                 -(ushort)(*(ushort *)((int)pdVar21 + -0x150) != 0) & (ushort)local_20;
            pdVar21 = (double *)((int)pdVar21 + 2);
          } while (iVar14 < *(short *)(param_1 + 0x6344));
        }
        pdVar21 = local_2c + 0x5a;
        psVar9 = psVar9 + 1;
        local_38 = (double *)((int)local_38 + 10);
        local_24 = (double *)((int)local_24 + -1);
        local_2c = pdVar21;
        local_28 = psVar9;
      } while (local_24 != (double *)0x0);
    }
    local_3c = (short *)((int)local_3c + 1);
    if (1 < (int)local_3c) {
      local_20 = (int *)(param_1 + 0x2da0a);
      psVar9 = (short *)(param_1 + 0x91ca);
      local_38 = (double *)(param_1 + 0x6f24);
      psVar12 = (short *)(param_1 + 0x6408);
      local_34 = (double *)0x0;
      do {
        if (psVar9[-0x16e7] != 0) {
          iVar14 = 0;
          pdVar21 = local_38;
          local_3c = psVar12;
          if (0 < *(short *)(param_1 + 0x6344)) {
            do {
              if ((*local_3c != 0) && (iVar8 = 0, puVar13 = (undefined4 *)pdVar21, 0 < *psVar9)) {
                do {
                  iVar8 = iVar8 + 1;
                  *puVar13 = puVar13[0x438];
                  puVar13[1] = puVar13[0x439];
                  puVar13 = puVar13 + 2;
                } while (iVar8 < *psVar9);
              }
              iVar14 = iVar14 + 1;
              pdVar21 = (double *)((int)pdVar21 + 0x90);
              local_3c = local_3c + 1;
            } while (iVar14 < *(short *)(param_1 + 0x6344));
          }
          iVar14 = (int)psVar9[-0x16b1];
          if (iVar14 < psVar9[-0x16ab]) {
            puVar13 = (undefined4 *)(param_1 + 0x2da22 + ((int)local_34 + iVar14) * 8);
            do {
              iVar8 = iVar14 * 8;
              iVar10 = local_20[-0x4836];
              iVar14 = iVar14 + 1;
              *(undefined4 *)(iVar8 + iVar10) = puVar13[-0x4836];
              ((undefined4 *)(iVar8 + iVar10))[1] = puVar13[-0x4835];
              iVar10 = *local_20;
              *(undefined4 *)(iVar10 + iVar8) = *puVar13;
              *(undefined4 *)(iVar10 + 4 + iVar8) = puVar13[1];
              puVar13 = puVar13 + 2;
            } while (iVar14 < psVar9[-0x16ab]);
          }
        }
        local_20 = local_20 + 1;
        local_34 = (double *)((int)local_34 + 0xfd);
        psVar12 = psVar12 + 5;
        local_38 = (double *)((int)local_38 + 0x2d0);
        psVar9 = psVar9 + 1;
      } while ((int)local_34 < 0x5ee);
      return;
    }
  } while( true );
}



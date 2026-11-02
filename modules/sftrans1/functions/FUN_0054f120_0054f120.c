/* Module: sftrans1.dll
   Function: FUN_0054f120
   Address: 0054f120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0054f120(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            double param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  double dVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  double *pdVar11;
  undefined4 *puVar12;
  int iVar13;
  float10 fVar14;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined8 local_f0;
  double *local_e4;
  double *local_e0;
  double local_d8;
  int *local_cc;
  int local_b4;
  uint local_ac;
  double local_a8;
  double local_a0;
  double local_98;
  uint local_50;
  double local_48 [4];
  double local_28 [4];
  
  uVar3 = *(undefined4 *)(param_1 + 0x14c);
  if ((-1 < param_8) && (param_8 < *(int *)(param_1 + 0x148))) {
    *(int *)(param_1 + 0x14c) = param_8;
  }
  piVar4 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  iVar5 = *piVar4;
  if (iVar5 < 2) {
    *(undefined4 *)(param_1 + 0x14c) = uVar3;
    return 0;
  }
  puVar12 = (undefined4 *)piVar4[2];
  iVar13 = 0;
  local_b4 = 2;
  pdVar11 = (double *)*puVar12;
  local_e0 = (double *)puVar12[1];
  local_f0 = (double)CONCAT44(param_5,param_4);
  pdVar8 = local_e0;
  local_e4 = pdVar11;
  if (0 < param_7) {
LAB_0054f1b8:
    do {
      pdVar9 = pdVar8;
      *(undefined4 *)(param_3 + iVar13 * 4) = 1;
      if (param_9 != 0) {
        *(undefined4 *)(param_9 + iVar13 * 8) = 0;
        *(undefined4 *)(param_9 + 4 + iVar13 * 8) = 0;
      }
      if (local_f0 < *pdVar11) {
        *(undefined4 *)(param_3 + iVar13 * 4) = 1;
      }
      else {
        if (*pdVar11 == local_f0) {
          dVar2 = pdVar11[1];
        }
        else if (*pdVar9 <= local_f0) {
          if (*pdVar9 != local_f0) {
            if (iVar5 <= local_b4) {
              if (iVar13 < param_7) {
                puVar12 = (undefined4 *)(param_3 + iVar13 * 4);
                for (param_7 = param_7 - iVar13; param_7 != 0; param_7 = param_7 + -1) {
                  *puVar12 = 1;
                  puVar12 = puVar12 + 1;
                }
              }
              break;
            }
            local_b4 = local_b4 + 1;
            local_e0 = *(double **)
                        (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8
                                          ) + 8) + -4 + local_b4 * 4);
            pdVar8 = local_e0;
            pdVar11 = pdVar9;
            local_e4 = pdVar9;
            goto LAB_0054f1b8;
          }
          dVar2 = pdVar9[1];
        }
        else {
          if (*(int *)(param_1 + 0x1cc) == 0) {
            if (*(char *)((int)pdVar11 + 0x61) == '\0') {
              if (*(char *)((int)pdVar9 + 0x39) != '\0') {
                dVar2 = pdVar9[6];
                goto joined_r0x0054f2b0;
              }
            }
            else {
              if (((*(char *)((int)pdVar9 + 0x39) == '\0') ||
                  (_DAT_00555908 <= pdVar9[6] * pdVar11[0xb])) ||
                 (dVar2 = (*pdVar9 + *pdVar11) * _DAT_00557838, local_f0 < dVar2)) {
                dVar2 = pdVar11[0xb];
              }
              else {
                if (local_f0 <= dVar2) {
                  *(double *)(param_2 + iVar13 * 8) = (pdVar9[1] + pdVar11[1]) * _DAT_00557838;
                  *(undefined4 *)(param_3 + iVar13 * 4) = 0;
                  goto LAB_0054f2ba;
                }
                dVar2 = pdVar11[6];
              }
joined_r0x0054f2b0:
              uVar7 = 3;
              if (_DAT_00555910 <= dVar2) {
                uVar7 = 2;
              }
              *(undefined4 *)(param_3 + iVar13 * 4) = uVar7;
            }
LAB_0054f2ba:
            if (*(int *)(param_1 + 0xe8) != 0) {
              iVar6 = *(int *)(param_3 + iVar13 * 4);
              if (iVar6 == 3) {
                *(undefined4 *)(param_2 + iVar13 * 8) = *(undefined4 *)(param_1 + 0xd8);
                uVar7 = *(undefined4 *)(param_1 + 0xdc);
              }
              else {
                if (iVar6 != 2) goto LAB_0054f30e;
                *(undefined4 *)(param_2 + iVar13 * 8) = *(undefined4 *)(param_1 + 0xe0);
                uVar7 = *(undefined4 *)(param_1 + 0xe4);
              }
              *(undefined4 *)(param_2 + 4 + iVar13 * 8) = uVar7;
              *(undefined4 *)(param_3 + iVar13 * 4) = 0;
            }
LAB_0054f30e:
            if (*(int *)(param_3 + iVar13 * 4) != 1) goto LAB_0054f6c9;
            local_28[0] = pdVar11[1];
            local_28[1] = pdVar11[1] + pdVar11[0xb];
            local_28[2] = pdVar9[1] + pdVar9[6];
            local_28[3] = pdVar9[1];
            local_50 = ftol();
            local_50 = local_50 >> 1;
            if (local_50 < 3) {
              local_50 = 3;
            }
            local_ac = 0;
            uVar1 = local_ac;
LAB_0054f3ab:
            local_ac = uVar1;
            pdVar8 = pdVar9;
            if (local_ac < local_50) {
              uVar1 = local_ac + 1;
              uVar10 = 3;
              local_d8 = 0.0;
              local_a8 = 0.0;
              local_a0 = 0.0;
              local_98 = 0.0;
              local_cc = &DAT_00577204;
              pdVar11 = local_28;
              do {
                iVar6 = *local_cc;
                _CIpow();
                fVar14 = (float10)_CIpow();
                fVar14 = fVar14 * extraout_ST1 * (float10)iVar6;
                local_d8 = (double)(fVar14 * (float10)pdVar11[-4] + (float10)local_d8);
                local_a8 = (double)(fVar14 * (float10)*pdVar11 + (float10)local_a8);
                _CIpow();
                fVar14 = (float10)_CIpow();
                uVar10 = uVar10 - 1;
                fVar14 = fVar14 * extraout_ST1_00 * (float10)iVar6;
                local_cc = local_cc + 1;
                local_a0 = (double)(fVar14 * (float10)pdVar11[-4] + (float10)local_a0);
                local_98 = (double)(fVar14 * (float10)*pdVar11 + (float10)local_98);
                pdVar11 = pdVar11 + 1;
              } while (uVar10 < 0x80000000);
              pdVar9 = local_e0;
              pdVar11 = local_e4;
              if (local_d8 <= local_f0) {
                puVar12 = (undefined4 *)(param_3 + iVar13 * 4);
                pdVar8 = (double *)(param_2 + iVar13 * 8);
                do {
                  if (local_a0 < local_f0) break;
                  *pdVar8 = (local_f0 - local_d8) * ((local_98 - local_a8) / (local_a0 - local_d8))
                            + local_a8;
                  if (param_9 != 0) {
                    *(double *)((param_9 - param_2) + (int)pdVar8) =
                         (double)(int)local_ac / (double)local_50;
                  }
                  if (*(int *)(param_1 + 0xe8) != 0) {
                    if (*(double *)(param_1 + 0xd8) <= *pdVar8) {
                      if (*pdVar8 <= *(double *)(param_1 + 0xe0)) goto LAB_0054f5f7;
                      *(undefined4 *)pdVar8 = *(undefined4 *)(param_1 + 0xe0);
                      uVar7 = *(undefined4 *)(param_1 + 0xe4);
                    }
                    else {
                      *(undefined4 *)pdVar8 = *(undefined4 *)(param_1 + 0xd8);
                      uVar7 = *(undefined4 *)(param_1 + 0xdc);
                    }
                    *(undefined4 *)((int)pdVar8 + 4) = uVar7;
                  }
LAB_0054f5f7:
                  local_f0 = local_f0 + param_6;
                  *puVar12 = 0;
                  iVar13 = iVar13 + 1;
                  pdVar8 = pdVar8 + 1;
                  puVar12 = puVar12 + 1;
                  if (param_7 <= iVar13) {
                    *(undefined4 *)(param_1 + 0x14c) = uVar3;
                    return 1;
                  }
                } while (local_d8 <= local_f0);
              }
              goto LAB_0054f3ab;
            }
            goto LAB_0054f1b8;
          }
          dVar2 = (local_f0 - *pdVar11) * ((pdVar9[1] - pdVar11[1]) / (*pdVar9 - *pdVar11)) +
                  pdVar11[1];
        }
        *(double *)(param_2 + iVar13 * 8) = dVar2;
        *(undefined4 *)(param_3 + iVar13 * 4) = 0;
      }
LAB_0054f6c9:
      local_f0 = local_f0 + param_6;
      iVar13 = iVar13 + 1;
      pdVar8 = pdVar9;
    } while (iVar13 < param_7);
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar3;
  return 1;
}



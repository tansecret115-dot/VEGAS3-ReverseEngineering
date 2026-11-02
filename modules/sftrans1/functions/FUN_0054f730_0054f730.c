/* Module: sftrans1.dll
   Function: FUN_0054f730
   Address: 0054f730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0054f730(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  double dVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  double *pdVar11;
  undefined4 *puVar12;
  int iVar13;
  float10 fVar14;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  double *local_e4;
  double local_e0;
  double *local_d0;
  int *local_cc;
  uint local_c8;
  int local_bc;
  double local_a8;
  double local_a0;
  double local_98;
  uint local_50;
  double local_48 [4];
  double local_28 [4];
  
  uVar3 = *(undefined4 *)(param_1 + 0x14c);
  if ((-1 < param_6) && (param_6 < *(int *)(param_1 + 0x148))) {
    *(int *)(param_1 + 0x14c) = param_6;
  }
  piVar4 = *(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  iVar5 = *piVar4;
  if (iVar5 < 2) {
    *(undefined4 *)(param_1 + 0x14c) = uVar3;
    return 0;
  }
  puVar12 = (undefined4 *)piVar4[2];
  iVar13 = 0;
  local_bc = 2;
  pdVar11 = (double *)*puVar12;
  local_e4 = (double *)puVar12[1];
  pdVar7 = local_e4;
  local_d0 = pdVar11;
  if (0 < param_5) {
LAB_0054f7b2:
    do {
      pdVar8 = pdVar7;
      *(undefined4 *)(param_4 + iVar13 * 4) = 1;
      if (param_7 != 0) {
        *(undefined4 *)(param_7 + iVar13 * 8) = 0;
        *(undefined4 *)(param_7 + 4 + iVar13 * 8) = 0;
      }
      if (*(double *)(param_2 + iVar13 * 8) < *pdVar11) {
        *(undefined4 *)(param_4 + iVar13 * 4) = 1;
      }
      else {
        if (*pdVar11 == *(double *)(param_2 + iVar13 * 8)) {
          dVar2 = pdVar11[1];
LAB_0054fcb8:
          *(double *)(param_3 + iVar13 * 8) = dVar2;
        }
        else {
          if (*pdVar8 <= *(double *)(param_2 + iVar13 * 8)) {
            if (*pdVar8 == *(double *)(param_2 + iVar13 * 8)) {
              dVar2 = pdVar8[1];
              goto LAB_0054fcb8;
            }
            if (iVar5 <= local_bc) {
              if (iVar13 < param_5) {
                puVar12 = (undefined4 *)(param_4 + iVar13 * 4);
                for (param_5 = param_5 - iVar13; param_5 != 0; param_5 = param_5 + -1) {
                  *puVar12 = 1;
                  puVar12 = puVar12 + 1;
                }
              }
              break;
            }
            local_bc = local_bc + 1;
            local_e4 = *(double **)
                        (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8
                                          ) + 8) + -4 + local_bc * 4);
            pdVar7 = local_e4;
            pdVar11 = pdVar8;
            local_d0 = pdVar8;
            goto LAB_0054f7b2;
          }
          if (*(int *)(param_1 + 0x1cc) == 0) {
            if (*(char *)((int)pdVar11 + 0x61) == '\0') {
              if (*(char *)((int)pdVar8 + 0x39) != '\0') {
                dVar2 = pdVar8[6];
                goto joined_r0x0054f8a5;
              }
            }
            else {
              if (((*(char *)((int)pdVar8 + 0x39) == '\0') ||
                  (_DAT_00555908 <= pdVar8[6] * pdVar11[0xb])) ||
                 (dVar2 = (*pdVar8 + *pdVar11) * _DAT_00557838,
                 *(double *)(param_2 + iVar13 * 8) < dVar2)) {
                dVar2 = pdVar11[0xb];
              }
              else {
                if (*(double *)(param_2 + iVar13 * 8) <= dVar2) {
                  *(double *)(param_3 + iVar13 * 8) = (pdVar8[1] + pdVar11[1]) * _DAT_00557838;
                  *(undefined4 *)(param_4 + iVar13 * 4) = 0;
                  goto LAB_0054f8af;
                }
                dVar2 = pdVar11[6];
              }
joined_r0x0054f8a5:
              uVar6 = 3;
              if (_DAT_00555910 <= dVar2) {
                uVar6 = 2;
              }
              *(undefined4 *)(param_4 + iVar13 * 4) = uVar6;
            }
LAB_0054f8af:
            if (*(int *)(param_1 + 0xe8) != 0) {
              iVar10 = *(int *)(param_4 + iVar13 * 4);
              if (iVar10 == 3) {
                *(undefined4 *)(param_3 + iVar13 * 8) = *(undefined4 *)(param_1 + 0xd8);
                uVar6 = *(undefined4 *)(param_1 + 0xdc);
              }
              else {
                if (iVar10 != 2) goto LAB_0054f90b;
                *(undefined4 *)(param_3 + iVar13 * 8) = *(undefined4 *)(param_1 + 0xe0);
                uVar6 = *(undefined4 *)(param_1 + 0xe4);
              }
              *(undefined4 *)(param_3 + 4 + iVar13 * 8) = uVar6;
              *(undefined4 *)(param_4 + iVar13 * 4) = 0;
            }
LAB_0054f90b:
            if (*(int *)(param_4 + iVar13 * 4) != 1) goto LAB_0054fcc5;
            local_28[0] = pdVar11[1];
            local_28[1] = pdVar11[1] + pdVar11[0xb];
            local_28[2] = pdVar8[1] + pdVar8[6];
            local_28[3] = pdVar8[1];
            local_50 = ftol();
            local_50 = local_50 >> 1;
            if (local_50 < 3) {
              local_50 = 3;
            }
            local_c8 = 0;
            uVar1 = local_c8;
LAB_0054f9a8:
            local_c8 = uVar1;
            pdVar7 = pdVar8;
            if (local_c8 < local_50) {
              uVar1 = local_c8 + 1;
              uVar9 = 3;
              local_e0 = 0.0;
              local_a8 = 0.0;
              local_a0 = 0.0;
              local_98 = 0.0;
              local_cc = &DAT_00577204;
              pdVar11 = local_28;
              do {
                iVar10 = *local_cc;
                _CIpow();
                fVar14 = (float10)_CIpow();
                fVar14 = fVar14 * extraout_ST1 * (float10)iVar10;
                local_e0 = (double)(fVar14 * (float10)pdVar11[-4] + (float10)local_e0);
                local_a8 = (double)(fVar14 * (float10)*pdVar11 + (float10)local_a8);
                _CIpow();
                fVar14 = (float10)_CIpow();
                uVar9 = uVar9 - 1;
                fVar14 = fVar14 * extraout_ST1_00 * (float10)iVar10;
                local_cc = local_cc + 1;
                local_a0 = (double)(fVar14 * (float10)pdVar11[-4] + (float10)local_a0);
                local_98 = (double)(fVar14 * (float10)*pdVar11 + (float10)local_98);
                pdVar11 = pdVar11 + 1;
              } while (uVar9 < 0x80000000);
              pdVar8 = local_e4;
              pdVar11 = local_d0;
              if (local_e0 <= *(double *)(param_2 + iVar13 * 8)) {
                puVar12 = (undefined4 *)(param_4 + iVar13 * 4);
                pdVar7 = (double *)(param_3 + iVar13 * 8);
                iVar10 = param_2 - param_3;
                do {
                  if (local_a0 < *(double *)(iVar10 + (int)pdVar7)) break;
                  *pdVar7 = (*(double *)(iVar10 + (int)pdVar7) - local_e0) *
                            ((local_98 - local_a8) / (local_a0 - local_e0)) + local_a8;
                  if (param_7 != 0) {
                    *(double *)((param_7 - param_3) + (int)pdVar7) =
                         (double)(int)local_c8 / (double)local_50;
                  }
                  if (*(int *)(param_1 + 0xe8) != 0) {
                    if (*(double *)(param_1 + 0xd8) <= *pdVar7) {
                      if (*pdVar7 <= *(double *)(param_1 + 0xe0)) goto LAB_0054fbf7;
                      *(undefined4 *)pdVar7 = *(undefined4 *)(param_1 + 0xe0);
                      uVar6 = *(undefined4 *)(param_1 + 0xe4);
                    }
                    else {
                      *(undefined4 *)pdVar7 = *(undefined4 *)(param_1 + 0xd8);
                      uVar6 = *(undefined4 *)(param_1 + 0xdc);
                    }
                    *(undefined4 *)((int)pdVar7 + 4) = uVar6;
                  }
LAB_0054fbf7:
                  *puVar12 = 0;
                  iVar13 = iVar13 + 1;
                  puVar12 = puVar12 + 1;
                  pdVar7 = pdVar7 + 1;
                  if (param_5 <= iVar13) {
                    *(undefined4 *)(param_1 + 0x14c) = uVar3;
                    return 1;
                  }
                } while (local_e0 <= *(double *)(iVar10 + (int)pdVar7));
              }
              goto LAB_0054f9a8;
            }
            goto LAB_0054f7b2;
          }
          *(double *)(param_3 + iVar13 * 8) =
               (*(double *)(param_2 + iVar13 * 8) - *pdVar11) *
               ((pdVar8[1] - pdVar11[1]) / (*pdVar8 - *pdVar11)) + pdVar11[1];
        }
        *(undefined4 *)(param_4 + iVar13 * 4) = 0;
      }
LAB_0054fcc5:
      iVar13 = iVar13 + 1;
      pdVar7 = pdVar8;
    } while (iVar13 < param_5);
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar3;
  return 1;
}



/* Module: aviplug.dll
   Function: FUN_5f9974e0
   Address: 5f9974e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f9974e0(float *param_1,int param_2,float *param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  double *pdVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  float10 extraout_ST0;
  float10 fVar17;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  double *local_13c;
  int local_138;
  float *local_134;
  float *local_12c;
  float *local_128;
  uint local_120;
  double local_108 [32];
  
  uVar5 = *(uint *)(param_5 + 4);
  if (_DAT_5f9d7c98 <= *(double *)(param_5 + 0x28)) {
    local_138 = 0;
    if ((param_6 != 0) && ((*(int *)(param_5 + 0x1d30) == 0 || (param_3 == param_1)))) {
      FUN_5f9d2b20(param_3,(int)param_3,param_4,uVar5,param_5 + 0x130);
    }
    iVar12 = 0;
    if (0 < (int)uVar5) {
      local_13c = local_108;
      pfVar8 = param_3 + (param_4 + -1) * uVar5;
      local_134 = (float *)uVar5;
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        *local_13c = (double)fVar1;
        local_13c = local_13c + 1;
        local_134 = (float *)((int)local_134 - 1);
      } while (local_134 != (float *)0x0);
    }
    if (*(double *)(param_5 + 0x20) < _DAT_5f9d78f0) {
      dVar3 = *(double *)(param_5 + 0x20) + _DAT_5f9d7c98;
      if (0 < (int)uVar5) {
        local_13c = (double *)(param_5 + 0x30);
        pfVar8 = param_1;
        local_134 = (float *)uVar5;
        do {
          dVar2 = *local_13c;
          local_13c = local_13c + 1;
          local_134 = (float *)((int)local_134 - 1);
          *pfVar8 = (*(float *)((int)param_3 + (-4 - (int)param_1) + (int)(pfVar8 + 1)) -
                    (float)dVar2) * (float)dVar3 + (float)dVar2;
          pfVar8 = pfVar8 + 1;
        } while (local_134 != (float *)0x0);
      }
      iVar12 = 1;
      local_138 = 1;
      *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x28) + *(double *)(param_5 + 0x20);
    }
    if (uVar5 == 1) {
      pfVar8 = param_1 + iVar12;
      if (iVar12 < param_2) {
        local_13c = (double *)(param_2 - iVar12);
        local_138 = iVar12 + (int)local_13c;
        do {
          iVar12 = ftol();
          fVar1 = (float)*(double *)(param_5 + 0x20) - (float)iVar12;
          if (fVar1 == (float)_DAT_5f9d78f0) {
            *pfVar8 = param_3[iVar12];
          }
          else {
            *pfVar8 = (param_3[iVar12 + 1] - param_3[iVar12]) * fVar1 + param_3[iVar12];
          }
          pfVar8 = pfVar8 + 1;
          local_13c = (double *)((int)local_13c + -1);
          *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x28) + *(double *)(param_5 + 0x20);
        } while (local_13c != (double *)0x0);
      }
    }
    else if (uVar5 == 2) {
      pfVar8 = param_1 + local_138 * 2;
      if (local_138 < param_2) {
        local_13c = (double *)(param_2 - local_138);
        local_138 = local_138 + (int)local_13c;
        do {
          iVar12 = ftol();
          fVar1 = (float)*(double *)(param_5 + 0x20) - (float)iVar12;
          if (fVar1 == (float)_DAT_5f9d78f0) {
            *pfVar8 = param_3[iVar12 * 2];
            pfVar8[1] = param_3[iVar12 * 2 + 1];
          }
          else {
            *pfVar8 = (param_3[iVar12 * 2 + 2] - param_3[iVar12 * 2]) * fVar1 + param_3[iVar12 * 2];
            pfVar8[1] = (param_3[iVar12 * 2 + 3] - param_3[iVar12 * 2 + 1]) * fVar1 +
                        param_3[iVar12 * 2 + 1];
          }
          pfVar8 = pfVar8 + 2;
          local_13c = (double *)((int)local_13c + -1);
          *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x28) + *(double *)(param_5 + 0x20);
        } while (local_13c != (double *)0x0);
      }
    }
    else {
      local_13c = (double *)0x0;
      if (0 < (int)uVar5) {
        local_128 = param_3;
        do {
          local_12c = param_1 + iVar12 * uVar5 + (int)local_13c;
          if (iVar12 < param_2) {
            iVar14 = param_2 - iVar12;
            local_138 = iVar12 + iVar14;
            do {
              iVar12 = ftol();
              fVar1 = (float)*(double *)(param_5 + 0x20) - (float)iVar12;
              pfVar8 = local_128 + iVar12 * uVar5;
              if (fVar1 == (float)_DAT_5f9d78f0) {
                *local_12c = *pfVar8;
              }
              else {
                *local_12c = (pfVar8[uVar5] - *pfVar8) * fVar1 + *pfVar8;
              }
              local_12c = local_12c + uVar5;
              iVar14 = iVar14 + -1;
              *(double *)(param_5 + 0x20) =
                   *(double *)(param_5 + 0x28) + *(double *)(param_5 + 0x20);
            } while (iVar14 != 0);
          }
          local_13c = (double *)((int)local_13c + 1);
          local_128 = local_128 + 1;
          iVar12 = local_138;
        } while ((int)local_13c < (int)uVar5);
      }
    }
    if (0 < (int)uVar5) {
      pdVar13 = local_108;
      puVar16 = (undefined4 *)(param_5 + 0x30);
      for (iVar12 = (uVar5 & 0x1fffffff) << 1; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar16 = *(undefined4 *)pdVar13;
        pdVar13 = (double *)((int)pdVar13 + 4);
        puVar16 = puVar16 + 1;
      }
    }
    *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x20) - (double)param_4;
    return local_138;
  }
  iVar12 = 0;
  dVar3 = *(double *)(param_5 + 0x20);
  if (*(int *)(param_5 + 0x1d64) == 0) {
    iVar14 = param_4 + -1;
  }
  else {
    iVar14 = param_4 + -2;
  }
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  if (0 < (int)uVar5) {
    pdVar13 = local_108;
    pfVar8 = param_3 + iVar14 * uVar5;
    uVar15 = uVar5;
    do {
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      *pdVar13 = (double)fVar1;
      pdVar13 = pdVar13 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  for (; dVar3 < _DAT_5f9d78f0; dVar3 = dVar3 + *(double *)(param_5 + 0x28)) {
    iVar12 = iVar12 + 1;
  }
  iVar14 = param_2 + -1;
  dVar3 = *(double *)(param_5 + 0x28);
  dVar2 = *(double *)(param_5 + 0x20);
  dVar4 = *(double *)(param_5 + 0x28);
  if (uVar5 == 1) {
    pfVar8 = param_1 + param_2 + -1;
    if (iVar12 <= iVar14) {
      local_13c = (double *)((iVar14 - iVar12) + 1);
      do {
        iVar9 = ftol();
        if (extraout_ST0 - (float10)iVar9 == (float10)_DAT_5f9d78f0) {
          *pfVar8 = param_3[iVar9];
        }
        else {
          *pfVar8 = (float)(((float10)param_3[iVar9 + 1] - (float10)param_3[iVar9]) *
                            (extraout_ST0 - (float10)iVar9) + (float10)param_3[iVar9]);
        }
        pfVar8 = pfVar8 + -1;
        local_13c = (double *)((int)local_13c + -1);
      } while (local_13c != (double *)0x0);
    }
  }
  else if (uVar5 == 2) {
    pfVar8 = param_1 + param_2 * 2 + -2;
    if (iVar12 <= iVar14) {
      local_13c = (double *)((iVar14 - iVar12) + 1);
      do {
        iVar9 = ftol();
        fVar17 = extraout_ST0_00 - (float10)iVar9;
        if (fVar17 == (float10)_DAT_5f9d78f0) {
          *pfVar8 = param_3[iVar9 * 2];
          pfVar8[1] = param_3[iVar9 * 2 + 1];
        }
        else {
          *pfVar8 = (float)(((float10)param_3[iVar9 * 2 + 2] - (float10)param_3[iVar9 * 2]) * fVar17
                           + (float10)param_3[iVar9 * 2]);
          pfVar8[1] = (float)(((float10)param_3[iVar9 * 2 + 3] - (float10)param_3[iVar9 * 2 + 1]) *
                              fVar17 + (float10)param_3[iVar9 * 2 + 1]);
        }
        pfVar8 = pfVar8 + -2;
        local_13c = (double *)((int)local_13c + -1);
      } while (local_13c != (double *)0x0);
    }
  }
  else {
    if ((int)uVar5 < 1) goto LAB_5f997963;
    local_134 = param_3;
    local_13c = (double *)(param_1 + iVar14 * uVar5);
    local_120 = uVar5;
    do {
      local_12c = (float *)local_13c;
      if (iVar12 <= iVar14) {
        iVar9 = (iVar14 - iVar12) + 1;
        do {
          iVar11 = ftol();
          pfVar8 = local_134 + iVar11 * uVar5;
          if (extraout_ST0_01 - (float10)iVar11 == (float10)_DAT_5f9d78f0) {
            *local_12c = *pfVar8;
          }
          else {
            *local_12c = (float)(((float10)pfVar8[uVar5] - (float10)*pfVar8) *
                                 (extraout_ST0_01 - (float10)iVar11) + (float10)*pfVar8);
          }
          local_12c = local_12c + -uVar5;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      local_134 = local_134 + 1;
      local_13c = (double *)((int)local_13c + 4);
      local_120 = local_120 - 1;
    } while (local_120 != 0);
  }
  if (0 < (int)uVar5) {
    pdVar13 = (double *)(param_5 + 0x30);
    pfVar8 = param_1;
    local_13c = (double *)uVar5;
    do {
      dVar7 = *pdVar13;
      dVar6 = *pdVar13;
      fVar17 = (float10)*(double *)(param_5 + 0x20) + (float10)_DAT_5f9d7c98;
      fVar1 = *(float *)(((int)param_3 - (int)param_1) + (int)pfVar8);
      pfVar10 = pfVar8;
      local_120 = iVar12;
      if (0 < iVar12) {
        do {
          *pfVar10 = (float)((float10)(fVar1 - (float)dVar6) * fVar17 + (float10)dVar7);
          fVar17 = fVar17 + (float10)*(double *)(param_5 + 0x28);
          local_120 = local_120 + -1;
          pfVar10 = pfVar10 + uVar5;
        } while (local_120 != 0);
      }
      pdVar13 = pdVar13 + 1;
      pfVar8 = pfVar8 + 1;
      local_13c = (double *)((int)local_13c - 1);
    } while (local_13c != (double *)0x0);
  }
LAB_5f997963:
  *(double *)(param_5 + 0x20) = (double)iVar14 * dVar3 + dVar2 + dVar4;
  if (0 < (int)uVar5) {
    pdVar13 = local_108;
    puVar16 = (undefined4 *)(param_5 + 0x30);
    for (iVar12 = (uVar5 & 0x1fffffff) << 1; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar16 = *(undefined4 *)pdVar13;
      pdVar13 = (double *)((int)pdVar13 + 4);
      puVar16 = puVar16 + 1;
    }
  }
  if (param_6 != 0) {
    FUN_5f9d2b20(param_1,(int)param_1,param_2,uVar5,param_5 + 0x130);
  }
  if (*(int *)(param_5 + 0x1d64) != 0) {
    param_4 = param_4 + -1;
  }
  *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x20) - (double)param_4;
  return param_2;
}



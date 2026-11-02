/* Module: vidcap30.exe
   Function: FUN_004c2d50
   Address: 004c2d50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c2d50(double *param_1,int param_2,double *param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double *pdVar13;
  int iVar14;
  double *pdVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar19;
  float10 extraout_ST0_01;
  int local_134;
  double *local_130;
  double *local_128;
  uint local_124;
  double *local_120;
  undefined4 local_108 [65];
  
  uVar5 = *(uint *)(param_5 + 4);
  if (*(double *)(param_5 + 0x28) < _DAT_00587ad0) {
    dVar2 = *(double *)(param_5 + 0x20);
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
      pdVar15 = param_3 + iVar14 * uVar5;
      puVar17 = local_108;
      for (iVar10 = (uVar5 & 0x1fffffff) << 1; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar17 = *(undefined4 *)pdVar15;
        pdVar15 = (double *)((int)pdVar15 + 4);
        puVar17 = puVar17 + 1;
      }
    }
    iVar14 = 0;
    for (; dVar2 < _DAT_00589f10; dVar2 = dVar2 + *(double *)(param_5 + 0x28)) {
      iVar14 = iVar14 + 1;
    }
    iVar10 = param_2 + -1;
    dVar2 = *(double *)(param_5 + 0x28);
    dVar1 = *(double *)(param_5 + 0x20);
    dVar3 = *(double *)(param_5 + 0x28);
    if (uVar5 == 1) {
      pdVar15 = param_1 + param_2 + -1;
      if (iVar14 <= iVar10) {
        local_130 = (double *)((iVar10 - iVar14) + 1);
        do {
          iVar11 = ftol();
          if (extraout_ST0 - (float10)iVar11 == (float10)_DAT_00589f10) {
            *(undefined4 *)pdVar15 = *(undefined4 *)(param_3 + iVar11);
            *(undefined4 *)((int)pdVar15 + 4) = *(undefined4 *)((int)param_3 + iVar11 * 8 + 4);
          }
          else {
            *pdVar15 = (double)(((float10)param_3[iVar11 + 1] - (float10)param_3[iVar11]) *
                                (extraout_ST0 - (float10)iVar11) + (float10)param_3[iVar11]);
          }
          pdVar15 = pdVar15 + -1;
          local_130 = (double *)((int)local_130 + -1);
        } while (local_130 != (double *)0x0);
      }
    }
    else if (uVar5 == 2) {
      pdVar15 = param_1 + param_2 * 2 + -2;
      if (iVar14 <= iVar10) {
        iVar11 = (iVar10 - iVar14) + 1;
        do {
          iVar12 = ftol();
          pdVar9 = param_3 + iVar12 * 2;
          fVar19 = extraout_ST0_00 - (float10)iVar12;
          if (fVar19 == (float10)_DAT_00589f10) {
            *(undefined4 *)pdVar15 = *(undefined4 *)pdVar9;
            *(undefined4 *)((int)pdVar15 + 4) = *(undefined4 *)((int)pdVar9 + 4);
            *(undefined4 *)(pdVar15 + 1) = *(undefined4 *)(pdVar9 + 1);
            *(undefined4 *)((int)pdVar15 + 0xc) = *(undefined4 *)((int)pdVar9 + 0xc);
          }
          else {
            *pdVar15 = (double)(((float10)pdVar9[2] - (float10)*pdVar9) * fVar19 + (float10)*pdVar9)
            ;
            pdVar15[1] = (double)(((float10)pdVar9[3] - (float10)pdVar9[1]) * fVar19 +
                                 (float10)pdVar9[1]);
          }
          pdVar15 = pdVar15 + -2;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    else if (0 < (int)uVar5) {
      local_120 = param_3;
      local_130 = param_1 + iVar10 * uVar5;
      local_124 = uVar5;
      do {
        if (iVar14 <= iVar10) {
          iVar11 = (iVar10 - iVar14) + 1;
          pdVar15 = local_130;
          do {
            iVar12 = ftol();
            pdVar9 = local_120 + iVar12 * uVar5;
            if (extraout_ST0_01 - (float10)iVar12 == (float10)_DAT_00589f10) {
              *(undefined4 *)pdVar15 = *(undefined4 *)pdVar9;
              *(undefined4 *)((int)pdVar15 + 4) = *(undefined4 *)((int)pdVar9 + 4);
            }
            else {
              *pdVar15 = (double)(((float10)pdVar9[uVar5] - (float10)*pdVar9) *
                                  (extraout_ST0_01 - (float10)iVar12) + (float10)*pdVar9);
            }
            pdVar15 = pdVar15 + -uVar5;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        local_120 = local_120 + 1;
        local_130 = local_130 + 1;
        local_124 = local_124 - 1;
      } while (local_124 != 0);
    }
    if (0 < (int)uVar5) {
      pdVar15 = (double *)(param_5 + 0x30);
      pdVar9 = param_1;
      local_124 = uVar5;
      do {
        dVar6 = *(double *)(param_5 + 0x20) + _DAT_00587ad0;
        dVar8 = *pdVar15;
        dVar7 = *pdVar15;
        dVar4 = *(double *)(((int)param_3 - (int)param_1) + (int)pdVar9);
        pdVar13 = pdVar9;
        iVar11 = iVar14;
        if (0 < iVar14) {
          do {
            *pdVar13 = (dVar4 - dVar7) * dVar6 + dVar8;
            iVar11 = iVar11 + -1;
            dVar6 = dVar6 + *(double *)(param_5 + 0x28);
            pdVar13 = pdVar13 + uVar5;
          } while (iVar11 != 0);
        }
        pdVar15 = pdVar15 + 1;
        pdVar9 = pdVar9 + 1;
        local_124 = local_124 - 1;
      } while (local_124 != 0);
    }
    *(double *)(param_5 + 0x20) = (double)iVar10 * dVar2 + dVar1 + dVar3;
    if (0 < (int)uVar5) {
      puVar17 = local_108;
      puVar18 = (undefined4 *)(param_5 + 0x30);
      for (iVar14 = (uVar5 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
    }
    if (param_6 != 0) {
      FUN_0053b7c0(param_1,param_1,param_2,uVar5,param_5 + 0x130);
    }
    if (*(int *)(param_5 + 0x1d64) != 0) {
      param_4 = param_4 + -1;
    }
    *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x20) - (double)param_4;
    return param_2;
  }
  local_134 = 0;
  if ((param_6 != 0) && ((*(int *)(param_5 + 0x1d30) == 0 || (param_3 == param_1)))) {
    FUN_0053b7c0(param_3,param_3,param_4,uVar5,param_5 + 0x130);
  }
  if (0 < (int)uVar5) {
    pdVar15 = param_3 + (param_4 + -1) * uVar5;
    puVar17 = local_108;
    for (iVar14 = (uVar5 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar17 = *(undefined4 *)pdVar15;
      pdVar15 = (double *)((int)pdVar15 + 4);
      puVar17 = puVar17 + 1;
    }
  }
  if (*(double *)(param_5 + 0x20) < _DAT_00589f10) {
    dVar2 = *(double *)(param_5 + 0x20) + _DAT_00587ad0;
    if (0 < (int)uVar5) {
      pdVar15 = (double *)(param_5 + 0x30);
      pdVar9 = param_1;
      uVar16 = uVar5;
      do {
        dVar1 = *pdVar15;
        pdVar15 = pdVar15 + 1;
        uVar16 = uVar16 - 1;
        *pdVar9 = (*(double *)(((int)param_3 - (int)param_1) + (int)pdVar9) - dVar1) * dVar2 + dVar1
        ;
        pdVar9 = pdVar9 + 1;
      } while (uVar16 != 0);
    }
    local_134 = 1;
    *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x28) + *(double *)(param_5 + 0x20);
  }
  if (uVar5 == 1) {
    param_1 = param_1 + local_134;
    if (local_134 < param_2) {
      local_130 = (double *)(param_2 - local_134);
      local_134 = local_134 + (int)local_130;
      do {
        iVar14 = ftol();
        dVar2 = *(double *)(param_5 + 0x20) - (double)iVar14;
        if (dVar2 == _DAT_00589f10) {
          *(undefined4 *)param_1 = *(undefined4 *)(param_3 + iVar14);
          *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_3 + iVar14 * 8 + 4);
        }
        else {
          *param_1 = (param_3[iVar14 + 1] - param_3[iVar14]) * dVar2 + param_3[iVar14];
        }
        param_1 = param_1 + 1;
        local_130 = (double *)((int)local_130 + -1);
        *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x28) + *(double *)(param_5 + 0x20);
      } while (local_130 != (double *)0x0);
    }
  }
  else if (uVar5 == 2) {
    param_1 = param_1 + local_134 * 2;
    if (local_134 < param_2) {
      local_130 = (double *)(param_2 - local_134);
      local_134 = local_134 + (int)local_130;
      do {
        iVar14 = ftol();
        pdVar15 = param_3 + iVar14 * 2;
        dVar2 = *(double *)(param_5 + 0x20) - (double)iVar14;
        if (dVar2 == _DAT_00589f10) {
          *(undefined4 *)param_1 = *(undefined4 *)pdVar15;
          *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)pdVar15 + 4);
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(pdVar15 + 1);
          *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)((int)pdVar15 + 0xc);
        }
        else {
          *param_1 = (pdVar15[2] - *pdVar15) * dVar2 + *pdVar15;
          param_1[1] = (pdVar15[3] - pdVar15[1]) * dVar2 + pdVar15[1];
        }
        param_1 = param_1 + 2;
        local_130 = (double *)((int)local_130 + -1);
        *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x28) + *(double *)(param_5 + 0x20);
      } while (local_130 != (double *)0x0);
    }
  }
  else {
    local_130 = (double *)0x0;
    if (0 < (int)uVar5) {
      local_128 = param_3;
      do {
        pdVar15 = param_1 + local_134 * uVar5 + (int)local_130;
        if (local_134 < param_2) {
          iVar14 = param_2 - local_134;
          local_134 = local_134 + iVar14;
          do {
            iVar10 = ftol();
            dVar2 = *(double *)(param_5 + 0x20) - (double)iVar10;
            pdVar9 = local_128 + iVar10 * uVar5;
            if (dVar2 == _DAT_00589f10) {
              *(undefined4 *)pdVar15 = *(undefined4 *)pdVar9;
              *(undefined4 *)((int)pdVar15 + 4) = *(undefined4 *)((int)pdVar9 + 4);
            }
            else {
              *pdVar15 = (pdVar9[uVar5] - *pdVar9) * dVar2 + *pdVar9;
            }
            pdVar15 = pdVar15 + uVar5;
            iVar14 = iVar14 + -1;
            *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x28) + *(double *)(param_5 + 0x20);
          } while (iVar14 != 0);
        }
        local_130 = (double *)((int)local_130 + 1);
        local_128 = local_128 + 1;
      } while ((int)local_130 < (int)uVar5);
    }
  }
  if (0 < (int)uVar5) {
    puVar17 = local_108;
    puVar18 = (undefined4 *)(param_5 + 0x30);
    for (iVar14 = (uVar5 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar18 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  *(double *)(param_5 + 0x20) = *(double *)(param_5 + 0x20) - (double)param_4;
  return local_134;
}



/* Module: sfppack2.dll
   Function: FUN_5ccdf2a0
   Address: 5ccdf2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ccdf2a0(double *param_1,int param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  uint uVar12;
  int iVar13;
  double *pdVar14;
  float10 fVar15;
  
  fVar15 = (float10)_CIpow();
  dVar1 = (double)fVar15;
  fVar15 = (float10)_CIpow();
  dVar2 = (double)fVar15;
  _CIpow();
  if (0 < param_2) {
    *param_1 = dVar2;
    pdVar11 = param_1;
    pdVar14 = param_1 + 1;
    for (uVar12 = param_2 * 8 - 8U >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pdVar14 = *(undefined4 *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + 4);
      pdVar14 = (double *)((int)pdVar14 + 4);
    }
  }
  iVar13 = param_2 + -1;
  iVar6 = ftol();
  if (param_2 <= iVar6) {
    iVar6 = iVar13;
  }
  iVar7 = ftol();
  if (param_2 <= iVar7) {
    iVar7 = iVar13;
  }
  iVar8 = ftol();
  iVar9 = ftol();
  iVar10 = ftol();
  if (param_2 <= iVar10) {
    iVar10 = iVar13;
  }
  switch(*param_3) {
  case 0:
    if (0 < iVar8) {
      *param_1 = dVar2 * dVar1;
      pdVar11 = param_1;
      pdVar14 = param_1 + 1;
      for (uVar12 = iVar8 * 8 - 8U >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pdVar14 = *(undefined4 *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + 4);
        pdVar14 = (double *)((int)pdVar14 + 4);
      }
    }
    iVar13 = iVar6 - iVar8;
    if ((0 < iVar13) && (dVar3 = _DAT_5cd51510 - dVar1, dVar4 = (double)iVar13, iVar8 < iVar6)) {
      pdVar11 = param_1 + iVar8;
      do {
        iVar13 = iVar13 + -1;
        *pdVar11 = dVar1 * dVar2;
        dVar1 = dVar1 + dVar3 / dVar4;
        pdVar11 = pdVar11 + 1;
      } while (iVar13 != 0);
      return;
    }
    break;
  case 1:
    if (iVar7 < iVar13) {
      pdVar11 = param_1 + iVar13;
      iVar13 = iVar13 - iVar7;
      do {
        *pdVar11 = dVar2 * dVar1;
        pdVar11 = pdVar11 + -1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    iVar13 = iVar7 - iVar6;
    if ((0 < iVar13) && (dVar3 = _DAT_5cd51510 - dVar1, dVar4 = (double)iVar13, iVar6 < iVar7)) {
      pdVar11 = param_1 + iVar7;
      do {
        iVar13 = iVar13 + -1;
        *pdVar11 = dVar1 * dVar2;
        dVar1 = dVar1 + dVar3 / dVar4;
        pdVar11 = pdVar11 + -1;
      } while (iVar13 != 0);
      return;
    }
    break;
  case 2:
    if (0 < iVar9) {
      *param_1 = dVar2 * dVar1;
      pdVar11 = param_1;
      pdVar14 = param_1 + 1;
      for (uVar12 = iVar9 * 8 - 8U >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pdVar14 = *(undefined4 *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + 4);
        pdVar14 = (double *)((int)pdVar14 + 4);
      }
    }
    iVar13 = iVar8 - iVar9;
    if ((0 < iVar13) && (dVar3 = _DAT_5cd51510 - dVar1, dVar4 = (double)iVar13, iVar9 < iVar8)) {
      pdVar11 = param_1 + iVar9;
      dVar5 = dVar1;
      do {
        iVar13 = iVar13 + -1;
        *pdVar11 = dVar5 * dVar2;
        dVar5 = dVar5 + dVar3 / dVar4;
        pdVar11 = pdVar11 + 1;
      } while (iVar13 != 0);
    }
    if (iVar10 < param_2) {
      pdVar11 = param_1 + iVar10;
      *pdVar11 = dVar2 * dVar1;
      pdVar14 = pdVar11 + 1;
      for (uVar12 = (param_2 - iVar10) * 8 - 8U >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pdVar14 = *(undefined4 *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + 4);
        pdVar14 = (double *)((int)pdVar14 + 4);
      }
    }
    iVar13 = iVar10 - iVar7;
    if ((0 < iVar13) && (dVar3 = _DAT_5cd51510 - dVar1, dVar4 = (double)iVar13, iVar7 < iVar10)) {
      pdVar11 = param_1 + iVar10;
      do {
        iVar13 = iVar13 + -1;
        *pdVar11 = dVar1 * dVar2;
        dVar1 = dVar1 + dVar3 / dVar4;
        pdVar11 = pdVar11 + -1;
      } while (iVar13 != 0);
      return;
    }
    break;
  case 3:
    if (iVar8 < iVar7) {
      pdVar11 = param_1 + iVar8;
      *pdVar11 = dVar2 * dVar1;
      pdVar14 = pdVar11 + 1;
      for (uVar12 = (iVar7 - iVar8) * 8 - 8U >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pdVar14 = *(undefined4 *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + 4);
        pdVar14 = (double *)((int)pdVar14 + 4);
      }
    }
    iVar13 = iVar10 - iVar7;
    if ((0 < iVar13) && (dVar3 = _DAT_5cd51510 - dVar1, dVar4 = (double)iVar13, iVar7 < iVar10)) {
      pdVar11 = param_1 + iVar7;
      dVar5 = dVar1;
      do {
        iVar13 = iVar13 + -1;
        *pdVar11 = dVar5 * dVar2;
        dVar5 = dVar5 + dVar3 / dVar4;
        pdVar11 = pdVar11 + 1;
      } while (iVar13 != 0);
    }
    iVar13 = iVar8 - iVar9;
    if ((0 < iVar13) && (dVar3 = _DAT_5cd51510 - dVar1, dVar4 = (double)iVar13, iVar9 < iVar8)) {
      pdVar11 = param_1 + iVar8;
      do {
        iVar13 = iVar13 + -1;
        *pdVar11 = dVar1 * dVar2;
        dVar1 = dVar1 + dVar3 / dVar4;
        pdVar11 = pdVar11 + -1;
      } while (iVar13 != 0);
    }
  }
  return;
}



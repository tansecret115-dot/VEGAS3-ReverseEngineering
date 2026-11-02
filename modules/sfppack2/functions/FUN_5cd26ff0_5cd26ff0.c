/* Module: sfppack2.dll
   Function: FUN_5cd26ff0
   Address: 5cd26ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_5cd26ff0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,double param_5)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  HGLOBAL pvVar6;
  double *pdVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  double *pdVar16;
  undefined4 *puVar17;
  float10 fVar18;
  ulonglong local_1d0;
  undefined4 local_1b0 [2];
  double adStack_1a8 [51];
  undefined4 local_10;
  undefined4 local_c;
  
  if (DAT_5cd70a88 == 0) {
    return (double *)0x1e;
  }
  DAT_5cd67f58 = param_2;
  iVar10 = *(int *)(param_1 + 0x374);
  if (iVar10 == 0) {
    DAT_5cd633c0 = 500;
  }
  else if (iVar10 == 1) {
    DAT_5cd633c0 = 1000;
  }
  else if (iVar10 == 2) {
    DAT_5cd633c0 = 2000;
  }
  uVar13 = 0;
  DAT_5cd67da0 = 1;
  DAT_5cd70a88 = 0;
  uVar9 = 0;
  pdVar7 = (double *)(param_1 + 0x10);
  do {
    if (*(char *)(pdVar7 + 4) != '\0') {
      if (*pdVar7 < param_5 * _DAT_5cd514e8) {
        DAT_5cd70a88 = DAT_5cd70a88 + 1;
      }
      if (uVar13 < uVar9) {
        uVar13 = uVar9;
      }
    }
    uVar9 = uVar9 + 1;
    pdVar7 = pdVar7 + 5;
  } while (uVar9 < 10);
  DAT_5cd67f54 = 0x1000;
  if (param_5 <= _DAT_5cd58e58) {
    DAT_5cd67f54 = 0x800;
  }
  pvVar6 = GlobalAlloc(0x42,DAT_5cd67f54 * 8);
  pdVar7 = GlobalLock(pvVar6);
  if (pdVar7 == (double *)0x0) {
    pdVar16 = (double *)0x8;
  }
  else {
    puVar14 = (undefined4 *)(&DAT_5cd58950 + *(int *)(param_1 + 0x370) * 0x1a8);
    puVar17 = local_1b0;
    for (iVar10 = 0x68; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar17 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar17 = puVar17 + 1;
    }
    DAT_5cd67db0 = 0;
    DAT_5cd67db4 = 0x3ff00000;
    local_10 = 0;
    local_c = 0x3fe00000;
    puVar14 = &DAT_5cd67db0;
    puVar15 = &DAT_5cd67db8;
    for (iVar10 = 100; iVar11 = 0, iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = (undefined8 *)((int)puVar15 + 4);
    }
    do {
      iVar10 = iVar11 + 8;
      *(double *)((int)adStack_1a8 + iVar11) = *(double *)((int)adStack_1a8 + iVar11) / param_5;
      iVar11 = iVar10;
    } while (iVar10 < 0x198);
    _DAT_5cd67f48 = 0;
    _DAT_5cd67f4c = 0x3ff00000;
    uVar9 = DAT_5cd70a88 * 5;
    uVar13 = uVar9 + 1;
    uVar12 = 2;
    if (*(double *)(param_1 + 0x28) < _DAT_5cd51520) {
      dVar1 = *(double *)(param_1 + 0x28);
      *(double *)(param_1 + 0x28) = dVar1 + dVar1;
    }
    if (*(double *)(param_1 + 0x50) < _DAT_5cd51520) {
      *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x50);
    }
    if (2 < uVar13) {
      pdVar16 = (double *)&DAT_5cd67dc0;
      do {
        fVar18 = (float10)FUN_5cd26f90();
        pdVar16[-1] = (double)((fVar18 + (float10)pdVar16[-2]) * (float10)_DAT_5cd514e8);
        fVar18 = (float10)FUN_5cd26f90();
        *pdVar16 = (double)fVar18;
        pdVar16[1] = (double)fVar18;
        pdVar16[2] = (double)fVar18;
        if (uVar12 < uVar9) {
          fVar18 = (float10)FUN_5cd26f90();
          fVar18 = (fVar18 + (float10)pdVar16[2]) * (float10)_DAT_5cd514e8;
        }
        pdVar16[3] = (double)fVar18;
        uVar12 = uVar12 + 5;
        pdVar16 = pdVar16 + 5;
      } while (uVar12 < uVar13);
    }
    DAT_5cd67db8._0_4_ = DAT_5cd67dc0;
    DAT_5cd67db8._4_4_ = DAT_5cd67dc4;
    DAT_5cd67db0 = DAT_5cd67dc0;
    DAT_5cd67db4 = DAT_5cd67dc4;
    DAT_5cd67da8._4_4_ = DAT_5cd67dc4;
    iVar10 = uVar12 - 2;
    DAT_5cd67da8._0_4_ = DAT_5cd67dc0;
    if (iVar10 < 0x35) {
      (&DAT_5cd67da8)[iVar10] = (&DAT_5cd67da8)[iVar10];
      puVar15 = &DAT_5cd67da8 + iVar10;
      puVar14 = &DAT_5cd67db0 + iVar10 * 2;
      for (iVar11 = (0x34U - iVar10 & 0x1fffffff) << 1; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar14 = *(undefined4 *)puVar15;
        puVar15 = (undefined8 *)((int)puVar15 + 4);
        puVar14 = puVar14 + 1;
      }
    }
    uVar13 = 0;
    local_1d0 = (ulonglong)DAT_5cd67f54;
    dVar1 = _DAT_5cd514e8 / (double)local_1d0;
    *(undefined4 *)(pdVar7 + (DAT_5cd67f54 - 1)) = 0;
    *(undefined4 *)((int)pdVar7 + DAT_5cd67f54 * 8 + -4) = 0;
    if (DAT_5cd67f54 != 1) {
      iVar10 = 0;
      pdVar16 = pdVar7;
      dVar4 = _DAT_5cd51520;
      do {
        if (*(double *)((int)&DAT_5cd67db0 + iVar10) == *(double *)((int)&DAT_5cd67db8 + iVar10)) {
          *(undefined4 *)pdVar16 = *(undefined4 *)((int)&DAT_5cd67db0 + iVar10);
          uVar8 = *(undefined4 *)((int)&DAT_5cd67db4 + iVar10);
LAB_5cd2735c:
          *(undefined4 *)((int)pdVar16 + 4) = uVar8;
        }
        else {
          dVar3 = (*(double *)((int)&DAT_5cd67db8 + iVar10) -
                  *(double *)((int)&DAT_5cd67db0 + iVar10)) /
                  (*(double *)((int)adStack_1a8 + iVar10 + 8) -
                  *(double *)((int)adStack_1a8 + iVar10));
          dVar5 = (dVar4 - *(double *)((int)adStack_1a8 + iVar10)) * dVar3 +
                  *(double *)((int)&DAT_5cd67db0 + iVar10);
          bVar2 = _DAT_5cd51520 <= dVar3;
          *pdVar16 = dVar5;
          if (bVar2) {
            if (*(double *)((int)&DAT_5cd67db8 + iVar10) < dVar5) goto LAB_5cd2734e;
          }
          else if (dVar5 < *(double *)((int)&DAT_5cd67db8 + iVar10)) {
LAB_5cd2734e:
            *(undefined4 *)pdVar16 = *(undefined4 *)((int)&DAT_5cd67db8 + iVar10);
            uVar8 = *(undefined4 *)((int)&DAT_5cd67db8 + iVar10 + 4);
            goto LAB_5cd2735c;
          }
        }
        dVar4 = dVar4 + dVar1;
        if (*(double *)((int)adStack_1a8 + iVar10 + 8) < dVar4) {
          iVar10 = iVar10 + 8;
        }
        uVar13 = uVar13 + 1;
        pdVar16 = pdVar16 + 1;
      } while (uVar13 < DAT_5cd67f54 - 1);
    }
    pdVar16 = FUN_5cd277c0(DAT_5cd67f54 * 2,(undefined4 *)pdVar7);
    if (pdVar16 == (double *)0x0) {
      *(undefined4 *)(*DAT_5cd67f58 + 8) = DAT_5cd633c0;
    }
  }
  if (pdVar7 != (double *)0x0) {
    pvVar6 = GlobalHandle(pdVar7);
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(pdVar7);
    GlobalFree(pvVar6);
  }
  return pdVar16;
}



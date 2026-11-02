/* Module: sftrans1.dll
   Function: FUN_00422e40
   Address: 00422e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00422e40(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  LPCVOID pMem;
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  HGLOBAL pvVar10;
  LPVOID pvVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  double *pdVar16;
  int *piVar17;
  int *piVar18;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  char local_87;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  char local_5f;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  char local_37;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  char local_f;
  
  dVar4 = (double)CONCAT44(param_5,param_4);
  iVar13 = *param_3;
  if (iVar13 < *param_2) {
    iVar13 = *param_2;
  }
  iVar14 = *param_1;
  iVar9 = 0;
  if (iVar14 != 0) {
    if (iVar14 < 0x11) {
      iVar9 = 0x10;
    }
    else {
      bVar12 = 0;
      for (; iVar14 != 0; iVar14 = iVar14 >> 1) {
        bVar12 = bVar12 + 1;
      }
      iVar9 = 1 << (bVar12 & 0x1f);
    }
  }
  if (iVar13 == 0) {
    iVar14 = 0;
  }
  else if (iVar13 < 0x11) {
    iVar14 = 0x10;
  }
  else {
    bVar12 = 0;
    iVar14 = iVar13;
    do {
      bVar12 = bVar12 + 1;
      iVar14 = iVar14 >> 1;
    } while (iVar14 != 0);
    iVar14 = 1 << (bVar12 & 0x1f);
  }
  if (iVar9 == iVar14) {
    *param_1 = iVar13;
  }
  else {
    if (0 < iVar9) {
      pMem = (LPCVOID)param_1[1];
      pvVar10 = GlobalHandle(pMem);
      GlobalUnlock(pvVar10);
      pvVar10 = GlobalHandle(pMem);
      GlobalFree(pvVar10);
      *param_1 = 0;
    }
    *param_1 = iVar13;
    if (0 < iVar14) {
      pvVar10 = GlobalAlloc(0x40,iVar14 * 0x68);
      pvVar11 = GlobalLock(pvVar10);
      if (pvVar11 == (LPVOID)0x0) {
        pvVar11 = (LPVOID)0x0;
      }
      else if (-1 < iVar14 + -1) {
        do {
          FUN_00422360();
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      param_1[1] = (int)pvVar11;
      if (pvVar11 == (LPVOID)0x0) {
        *param_1 = 0;
        return -0x7ff8fff2;
      }
    }
  }
  pdVar1 = (double *)param_2[1];
  pdVar2 = (double *)param_3[1];
  pdVar3 = (double *)param_1[1];
  pdVar15 = pdVar1 + 3;
  pdVar16 = &local_80;
  for (iVar13 = 10; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined4 *)pdVar16 = *(undefined4 *)pdVar15;
    pdVar15 = (double *)((int)pdVar15 + 4);
    pdVar16 = (double *)((int)pdVar16 + 4);
  }
  pdVar15 = pdVar2 + 3;
  pdVar16 = &local_30;
  for (iVar13 = 10; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined4 *)pdVar16 = *(undefined4 *)pdVar15;
    pdVar15 = (double *)((int)pdVar15 + 4);
    pdVar16 = (double *)((int)pdVar16 + 4);
  }
  pdVar15 = pdVar1 + 8;
  pdVar16 = &local_a8;
  for (iVar13 = 10; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined4 *)pdVar16 = *(undefined4 *)pdVar15;
    pdVar15 = (double *)((int)pdVar15 + 4);
    pdVar16 = (double *)((int)pdVar16 + 4);
  }
  pdVar15 = pdVar2 + 8;
  pdVar16 = &local_58;
  for (iVar13 = 10; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined4 *)pdVar16 = *(undefined4 *)pdVar15;
    pdVar15 = (double *)((int)pdVar15 + 4);
    pdVar16 = (double *)((int)pdVar16 + 4);
  }
  if (local_5f != '\0') {
    local_68 = local_70 * local_90;
  }
  if (local_f != '\0') {
    local_18 = local_20 * local_40;
  }
  if (local_87 != '\0') {
    local_90 = -(local_98 * local_68);
  }
  if (local_37 != '\0') {
    local_40 = -(local_48 * local_18);
  }
  dVar5 = (double)CONCAT44(param_5,param_4);
  dVar6 = _DAT_00555908 - dVar5;
  pdVar15 = pdVar1;
  pdVar16 = pdVar3;
  for (iVar13 = 0x1a; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined4 *)pdVar16 = *(undefined4 *)pdVar15;
    pdVar15 = (double *)((int)pdVar15 + 4);
    pdVar16 = (double *)((int)pdVar16 + 4);
  }
  *(undefined1 *)((int)pdVar3 + 0x61) = 0;
  *(undefined1 *)((int)pdVar3 + 0x39) = 0;
  *pdVar3 = dVar5 * *pdVar2 + dVar6 * *pdVar1;
  pdVar3[1] = dVar5 * pdVar2[1] + dVar6 * pdVar1[1];
  pdVar3[5] = local_20 * dVar5 + dVar6 * local_70;
  pdVar3[6] = local_18 * dVar5 + dVar6 * local_68;
  pdVar3[10] = local_48 * dVar5 + dVar6 * local_98;
  pdVar3[0xb] = local_40 * dVar5 + dVar6 * local_90;
  dVar7 = local_58 * dVar5 + dVar6 * local_a8;
  dVar8 = _DAT_00557828;
  if ((_DAT_00557828 <= dVar7) && (dVar8 = dVar7, _DAT_00555908 < dVar7)) {
    dVar8 = _DAT_00555908;
  }
  pdVar3[8] = dVar8;
  dVar7 = local_30 * dVar5 + dVar6 * local_80;
  dVar8 = _DAT_00557828;
  if ((_DAT_00557828 <= dVar7) && (dVar8 = dVar7, _DAT_00555908 < dVar7)) {
    dVar8 = _DAT_00555908;
  }
  pdVar3[3] = dVar8;
  pdVar3[9] = local_50 * dVar5 + dVar6 * local_a0;
  pdVar3[4] = local_28 * dVar5 + dVar6 * local_78;
  FUN_004232a0(param_1[1] + -0x68 + *param_1 * 0x68,param_2[1] + -0x68 + *param_2 * 0x68,
               param_3[1] + -0x68 + *param_3 * 0x68,param_4,param_5);
  piVar17 = param_2;
  piVar18 = param_3;
  if ((*param_3 < *param_2) ||
     (piVar17 = param_3, piVar18 = param_2, dVar4 = dVar6, *param_2 < *param_3)) {
    iVar13 = FUN_00423490(param_1,piVar17,piVar18,dVar4);
    if (iVar13 < 0) {
      return iVar13;
    }
  }
  else {
    iVar13 = 1;
    if (1 < *param_1 + -1) {
      iVar14 = 0x68;
      do {
        FUN_004232a0(iVar14 + param_1[1],iVar14 + param_2[1],iVar14 + param_3[1],param_4,param_5);
        iVar13 = iVar13 + 1;
        iVar14 = iVar14 + 0x68;
      } while (iVar13 < *param_1 + -1);
    }
  }
  iVar13 = 0;
  if (*param_1 != 1 && -1 < *param_1 + -1) {
    iVar14 = 0;
    do {
      iVar9 = param_1[1];
      dVar4 = *(double *)(iVar14 + 0x68 + iVar9) - *(double *)(iVar14 + iVar9);
      *(double *)(iVar14 + 0x40 + iVar9) = *(double *)(iVar14 + 0x50 + iVar9) / dVar4;
      if (*(double *)(iVar14 + 0x50 + iVar9) != _DAT_00555910) {
        *(double *)(iVar14 + 0x48 + iVar9) =
             *(double *)(iVar14 + 0x58 + iVar9) / *(double *)(iVar14 + 0x50 + iVar9);
      }
      *(double *)(iVar14 + 0x80 + iVar9) = -(*(double *)(iVar14 + 0x28 + iVar9) / dVar4);
      if (*(double *)(iVar14 + 0x90 + iVar9) != _DAT_00555910) {
        *(double *)(iVar14 + 0x88 + iVar9) =
             *(double *)(iVar14 + 0x98 + iVar9) / *(double *)(iVar14 + 0x90 + iVar9);
      }
      iVar13 = iVar13 + 1;
      iVar14 = iVar14 + 0x68;
    } while (iVar13 < *param_1 + -1);
  }
  return 0;
}



/* Module: sfppack1.dll
   Function: FUN_5cdd0ed0
   Address: 5cdd0ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdd0ed0(void *this,int *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  HGLOBAL pvVar10;
  LPVOID pvVar11;
  LPVOID pvVar12;
  int iVar13;
  undefined4 *puVar14;
  double *pdVar15;
  SIZE_T SVar16;
  undefined4 *puVar17;
  float10 fVar18;
  float10 fVar19;
  double *local_11c;
  ulonglong local_118;
  ulonglong local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8 [6];
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  double local_58 [10];
  
  local_f8 = 0x5c28f5c3;
  local_f4 = 0x3fedc28f;
  local_f0 = 0x8f5c28f6;
  local_ec = 0x3ff0f5c2;
  puVar14 = (undefined4 *)(&DAT_5ce21430 + param_1[3] * 0x58);
  pdVar15 = local_58;
  for (iVar13 = 0x14; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined4 *)pdVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    pdVar15 = (double *)((int)pdVar15 + 4);
  }
  puVar14 = (undefined4 *)(&DAT_5ce21ab0 + param_1[4] * 0x30);
  puVar17 = local_e8;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  iVar13 = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    fVar18 = FUN_5cdd18f0(*param_1,-800);
    *(double *)((int)this + 0x450) = (double)fVar18;
    fVar18 = FUN_5cdd18f0(param_1[1],-800);
    *(double *)((int)this + 0x448) = (double)fVar18;
    if (param_1[2] == -800) {
      *(undefined4 *)((int)this + 0x440) = 0;
      *(undefined4 *)((int)this + 0x444) = 0;
    }
    else {
      fVar18 = (float10)_CIpow();
      *(double *)((int)this + 0x440) = (double)(fVar18 * (float10)_DAT_5ce12e20);
    }
    uVar9 = ftol();
    *(undefined4 *)((int)this + 0x88) = uVar9;
    iVar13 = *(int *)(*(int *)((int)this + 0x68) + 4);
    iVar8 = ftol();
    iVar8 = iVar8 * iVar13;
    *(int *)((int)this + 0x80) = iVar8;
    *(int *)((int)this + 0x78) = iVar8;
    iVar13 = 0;
    if (0 < *(int *)((int)this + 0x88)) {
      local_11c = local_58;
      pdVar15 = (double *)((int)this + 0xd0);
      do {
        *pdVar15 = *local_11c * _DAT_5ce12e48;
        fVar18 = (float10)_CIpow();
        pdVar15[-2] = (double)fVar18;
        iVar8 = ftol();
        *pdVar15 = (double)iVar8;
        if (*(LPCVOID *)(pdVar15 + -4) != (LPCVOID)0x0) {
          pvVar10 = GlobalHandle(*(LPCVOID *)(pdVar15 + -4));
          GlobalUnlock(pvVar10);
          pvVar10 = GlobalHandle(*(LPCVOID *)(pdVar15 + -4));
          GlobalFree(pvVar10);
        }
        iVar8 = ftol();
        pvVar10 = GlobalAlloc(0x42,iVar8 << 3);
        pvVar11 = GlobalLock(pvVar10);
        *(LPVOID *)(pdVar15 + -4) = pvVar11;
        *(LPVOID *)((int)pdVar15 + -0x1c) = pvVar11;
        iVar8 = ftol();
        *(int *)(pdVar15 + -3) = *(int *)(pdVar15 + -4) + iVar8 * 8;
        *(undefined4 *)(pdVar15 + -1) = 0;
        *(undefined4 *)((int)pdVar15 + -4) = 0;
        iVar13 = iVar13 + 1;
        local_11c = local_11c + 1;
        pdVar15 = pdVar15 + 5;
      } while (iVar13 < *(int *)((int)this + 0x88));
    }
    if (*(short *)(*(int *)((int)this + 0x68) + 2) == 2) {
      iVar13 = 0;
      pdVar15 = (double *)((int)this + 0x260);
      do {
        *pdVar15 = *(double *)((int)local_58 + iVar13) * *(double *)((int)&local_f8 + iVar13) *
                   _DAT_5ce12e48;
        fVar18 = (float10)_CIpow();
        pdVar15[-2] = (double)fVar18;
        iVar8 = ftol();
        *pdVar15 = (double)iVar8;
        if (*(LPCVOID *)(pdVar15 + -4) != (LPCVOID)0x0) {
          pvVar10 = GlobalHandle(*(LPCVOID *)(pdVar15 + -4));
          GlobalUnlock(pvVar10);
          pvVar10 = GlobalHandle(*(LPCVOID *)(pdVar15 + -4));
          GlobalFree(pvVar10);
        }
        iVar8 = ftol();
        pvVar10 = GlobalAlloc(0x42,iVar8 << 3);
        pvVar11 = GlobalLock(pvVar10);
        *(LPVOID *)(pdVar15 + -4) = pvVar11;
        *(LPVOID *)((int)pdVar15 + -0x1c) = pvVar11;
        iVar8 = ftol();
        iVar13 = iVar13 + 8;
        *(int *)(pdVar15 + -3) = *(int *)(pdVar15 + -4) + iVar8 * 8;
        *(undefined4 *)(pdVar15 + -1) = 0;
        *(undefined4 *)((int)pdVar15 + -4) = 0;
        pdVar15 = pdVar15 + 5;
      } while (iVar13 < 0x10);
    }
    iVar13 = ftol();
    if (iVar13 < 1) {
      iVar13 = 1;
    }
    if (*(LPCVOID *)((int)this + 0x3d8) != (LPCVOID)0x0) {
      pvVar10 = GlobalHandle(*(LPCVOID *)((int)this + 0x3d8));
      GlobalUnlock(pvVar10);
      pvVar10 = GlobalHandle(*(LPCVOID *)((int)this + 0x3d8));
      GlobalFree(pvVar10);
    }
    SVar16 = iVar13 * 8;
    pvVar10 = GlobalAlloc(0x42,SVar16);
    pvVar11 = GlobalLock(pvVar10);
    *(LPVOID *)((int)this + 0x3d8) = pvVar11;
    *(LPVOID *)((int)this + 0x3d4) = pvVar11;
    *(LPVOID *)((int)this + 0x3d0) = (LPVOID)((int)pvVar11 + SVar16);
    if (*(short *)(*(int *)((int)this + 0x68) + 2) == 2) {
      if (*(LPCVOID *)((int)this + 0x3e4) != (LPCVOID)0x0) {
        pvVar10 = GlobalHandle(*(LPCVOID *)((int)this + 0x3e4));
        GlobalUnlock(pvVar10);
        pvVar10 = GlobalHandle(*(LPCVOID *)((int)this + 0x3e4));
        GlobalFree(pvVar10);
      }
      pvVar10 = GlobalAlloc(0x42,SVar16);
      pvVar11 = GlobalLock(pvVar10);
      *(LPVOID *)((int)this + 0x3e4) = pvVar11;
      *(LPVOID *)((int)this + 0x3e0) = pvVar11;
      *(LPVOID *)((int)this + 0x3dc) = (LPVOID)((int)pvVar11 + SVar16);
    }
    local_11c = (double *)ftol();
    iVar13 = ftol();
    iVar8 = ftol();
    *(double *)((int)this + 0x400) = (double)iStack_d0;
    *(double *)((int)this + 1000) = (double)iStack_d0;
    dVar4 = (double)iStack_cc;
    *(double *)((int)this + 0x408) = dVar4;
    *(double *)((int)this + 0x3f0) = dVar4;
    dVar5 = (double)iStack_c8;
    *(double *)((int)this + 0x410) = dVar5;
    *(double *)((int)this + 0x3f8) = dVar5;
    if (*(short *)(*(int *)((int)this + 0x68) + 2) == 2) {
      dVar6 = ((double)iStack_c4 + _DAT_5ce12e10) * _DAT_5ce137f8;
      *(double *)((int)this + 1000) = (_DAT_5ce12e70 - dVar6) * (double)iStack_d0;
      *(double *)((int)this + 0x400) = (double)iStack_d0 * dVar6;
      dVar6 = ((double)iStack_c0 + _DAT_5ce12e10) * _DAT_5ce137f8;
      *(double *)((int)this + 0x3f0) = (_DAT_5ce12e70 - dVar6) * dVar4;
      *(double *)((int)this + 0x408) = dVar4 * dVar6;
      dVar4 = ((double)iStack_bc + _DAT_5ce12e10) * _DAT_5ce137f8;
      *(double *)((int)this + 0x3f8) = (_DAT_5ce12e70 - dVar4) * dVar5;
      *(double *)((int)this + 0x410) = dVar5 * dVar4;
    }
    iVar7 = iVar13;
    if (iVar13 < (int)local_11c) {
      uVar9 = *(undefined4 *)((int)this + 0x3f0);
      *(undefined8 *)((int)this + 0x3f0) = *(undefined8 *)((int)this + 1000);
      uVar1 = *(undefined8 *)((int)this + 0x400);
      *(undefined4 *)((int)this + 1000) = uVar9;
      *(undefined4 *)((int)this + 0x400) = *(undefined4 *)((int)this + 0x408);
      *(undefined8 *)((int)this + 0x408) = uVar1;
      *(undefined4 *)((int)this + 0x3ec) = *(undefined4 *)((int)this + 0x3f4);
      *(undefined4 *)((int)this + 0x404) = *(undefined4 *)((int)this + 0x40c);
      iVar7 = (int)local_11c;
      local_11c = (double *)iVar13;
    }
    iVar13 = iVar8;
    if (iVar8 < iVar7) {
      uVar9 = *(undefined4 *)((int)this + 0x3f8);
      *(undefined8 *)((int)this + 0x3f8) = *(undefined8 *)((int)this + 0x3f0);
      uVar3 = *(undefined4 *)((int)this + 0x410);
      *(undefined4 *)((int)this + 0x3f0) = uVar9;
      *(undefined8 *)((int)this + 0x410) = *(undefined8 *)((int)this + 0x408);
      *(undefined4 *)((int)this + 0x408) = uVar3;
      *(undefined4 *)((int)this + 0x3f4) = *(undefined4 *)((int)this + 0x3fc);
      *(undefined4 *)((int)this + 0x40c) = *(undefined4 *)((int)this + 0x414);
      iVar13 = iVar7;
      iVar7 = iVar8;
    }
    if (*(LPCVOID *)((int)this + 0x418) != (LPCVOID)0x0) {
      pvVar10 = GlobalHandle(*(LPCVOID *)((int)this + 0x418));
      GlobalUnlock(pvVar10);
      pvVar10 = GlobalHandle(*(LPCVOID *)((int)this + 0x418));
      GlobalFree(pvVar10);
    }
    SVar16 = iVar13 * 8;
    pvVar10 = GlobalAlloc(0x42,SVar16);
    pvVar12 = GlobalLock(pvVar10);
    pvVar11 = (LPVOID)((int)pvVar12 + SVar16);
    *(LPVOID *)((int)this + 0x418) = pvVar12;
    *(LPVOID *)((int)this + 0x428) = pvVar11;
    *(LPVOID *)((int)this + 0x424) = pvVar12;
    *(LPVOID *)((int)this + 0x41c) = (LPVOID)((int)pvVar11 + (int)local_11c * -8);
    *(LPVOID *)((int)this + 0x420) = (LPVOID)((int)pvVar11 + iVar7 * -8);
    if (*(short *)(*(int *)((int)this + 0x68) + 2) == 2) {
      if (*(LPCVOID *)((int)this + 0x42c) != (LPCVOID)0x0) {
        pvVar10 = GlobalHandle(*(LPCVOID *)((int)this + 0x42c));
        GlobalUnlock(pvVar10);
        pvVar10 = GlobalHandle(*(LPCVOID *)((int)this + 0x42c));
        GlobalFree(pvVar10);
      }
      pvVar10 = GlobalAlloc(0x42,SVar16);
      pvVar12 = GlobalLock(pvVar10);
      pvVar11 = (LPVOID)((int)pvVar12 + SVar16);
      *(LPVOID *)((int)this + 0x42c) = pvVar12;
      *(LPVOID *)((int)this + 0x43c) = pvVar11;
      *(LPVOID *)((int)this + 0x438) = pvVar12;
      *(LPVOID *)((int)this + 0x430) = (LPVOID)((int)pvVar11 + (int)local_11c * -8);
      *(LPVOID *)((int)this + 0x434) = (LPVOID)((int)pvVar11 + iVar7 * -8);
    }
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa8) = 0;
    *(undefined4 *)((int)this + 0x94) = 0x3ff00000;
    *(undefined4 *)((int)this + 0x458) = 0;
    *(undefined4 *)((int)this + 0xac) = 0;
    if (param_1[9] != 0) {
      uVar2 = *(uint *)(*(int *)((int)this + 0x68) + 4);
      if ((uint)param_1[10] < uVar2) {
        local_108 = (ulonglong)uVar2;
        fVar19 = (float10)1.4426950408889634 *
                 (((float10)param_1[10] * (float10)_DAT_5ce14948) / (float10)local_108);
        fVar18 = ROUND(fVar19);
        fVar19 = (float10)f2xm1(fVar19 - fVar18);
        fVar18 = (float10)fscale((float10)1 + fVar19,fVar18);
        *(double *)((int)this + 0xa0) = (double)fVar18;
        *(double *)((int)this + 0x98) = (double)((float10)_DAT_5ce12e70 - fVar18);
        goto LAB_5cdd1877;
      }
    }
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0x3ff00000;
LAB_5cdd1877:
    if (param_1[7] != 0) {
      local_108 = (ulonglong)*(uint *)(*(int *)((int)this + 0x68) + 4);
      dVar4 = _DAT_5ce14930;
      if ((double)param_1[8] / (double)local_108 < _DAT_5ce14940) {
        dVar4 = _DAT_5ce14938;
      }
      FUN_5cdd0d70((undefined4 *)((int)this + 0x460),
                   ((double)param_1[8] / (double)local_108) * dVar4,0.1);
    }
    *(undefined4 *)((int)this + 0x6c) = 1;
    *(undefined4 *)((int)this + 0x4c) = 0;
    return 0;
  }
  fVar18 = FUN_5cdd18f0(*param_1,-800);
  *(double *)((int)this + 0x450) = (double)fVar18;
  fVar18 = FUN_5cdd18f0(param_1[1],-800);
  *(double *)((int)this + 0x448) = (double)fVar18;
  if (param_1[2] == -800) {
    *(undefined4 *)((int)this + 0x440) = 0;
    *(undefined4 *)((int)this + 0x444) = 0;
  }
  else {
    fVar18 = (float10)_CIpow();
    *(double *)((int)this + 0x440) = (double)(fVar18 * (float10)_DAT_5ce12e20);
  }
  if (param_1[9] != 0) {
    uVar2 = *(uint *)(*(int *)((int)this + 0x68) + 4);
    if ((uint)param_1[10] < uVar2) {
      local_118 = (ulonglong)uVar2;
      fVar19 = (float10)1.4426950408889634 *
               (((float10)param_1[10] * (float10)_DAT_5ce14948) / (float10)local_118);
      fVar18 = ROUND(fVar19);
      fVar19 = (float10)f2xm1(fVar19 - fVar18);
      fVar18 = (float10)fscale((float10)1 + fVar19,fVar18);
      *(double *)((int)this + 0xa0) = (double)fVar18;
      *(double *)((int)this + 0x98) = (double)((float10)_DAT_5ce12e70 - fVar18);
      goto LAB_5cdd1028;
    }
  }
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0x3ff00000;
LAB_5cdd1028:
  if (param_1[7] != 0) {
    local_118 = (ulonglong)*(uint *)(*(int *)((int)this + 0x68) + 4);
    dVar4 = _DAT_5ce14930;
    if ((double)param_1[8] / (double)local_118 < _DAT_5ce14940) {
      dVar4 = _DAT_5ce14938;
    }
    FUN_5cdd0d70((undefined4 *)((int)this + 0x460),((double)param_1[8] / (double)local_118) * dVar4,
                 0.1);
  }
  iVar8 = *(int *)((int)this + 0x68);
  iVar7 = ftol();
  iVar7 = *(int *)(iVar8 + 4) * iVar7;
  *(int *)((int)this + 0x80) = iVar7;
  *(int *)((int)this + 0x78) = iVar7;
  if (0 < *(int *)((int)this + 0x88)) {
    local_11c = local_58;
    pdVar15 = (double *)((int)this + 0xd0);
    do {
      *pdVar15 = *local_11c * _DAT_5ce12e48;
      fVar18 = (float10)_CIpow();
      pdVar15[-2] = (double)fVar18;
      iVar8 = ftol();
      iVar13 = iVar13 + 1;
      local_11c = local_11c + 1;
      *pdVar15 = (double)iVar8;
      pdVar15 = pdVar15 + 5;
    } while (iVar13 < *(int *)((int)this + 0x88));
  }
  if (*(short *)(*(int *)((int)this + 0x68) + 2) != 2) {
    return 0;
  }
  iVar13 = 0;
  pdVar15 = (double *)((int)this + 0x260);
  do {
    *pdVar15 = *(double *)((int)local_58 + iVar13) * *(double *)((int)&local_f8 + iVar13) *
               _DAT_5ce12e48;
    fVar18 = (float10)_CIpow();
    pdVar15[-2] = (double)fVar18;
    iVar8 = ftol();
    iVar13 = iVar13 + 8;
    *pdVar15 = (double)iVar8;
    pdVar15 = pdVar15 + 5;
  } while (iVar13 < 0x10);
  return 0;
}



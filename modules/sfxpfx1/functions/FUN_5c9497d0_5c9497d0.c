/* Module: sfxpfx1.dll
   Function: FUN_5c9497d0
   Address: 5c9497d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c9497d0(void *this,int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  HGLOBAL pvVar9;
  LPVOID pvVar10;
  LPVOID pvVar11;
  int iVar12;
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
  
  iVar13 = *(int *)(param_1 + 0x2c);
  local_f8 = 0x5c28f5c3;
  local_f4 = 0x3fedc28f;
  local_f0 = 0x8f5c28f6;
  puVar14 = (undefined4 *)(&DAT_5c996740 + *(int *)(param_1 + 0xc) * 0x58);
  pdVar15 = local_58;
  for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(undefined4 *)pdVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    pdVar15 = (double *)((int)pdVar15 + 4);
  }
  dVar4 = (double)iVar13 * _DAT_5c98b940 * _DAT_5c98bef8;
  local_ec = 0x3ff0f5c2;
  puVar14 = (undefined4 *)(&DAT_5c996dc0 + *(int *)(param_1 + 0x10) * 0x30);
  puVar17 = local_e8;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  iVar13 = 0;
  *(double *)((int)this + 0x440) = dVar4;
  *(double *)((int)this + 0x448) = _DAT_5c98b988 - dVar4;
  if (*(int *)((int)this + 0x50) != 0) {
    if (*(int *)(param_1 + 8) == -800) {
      *(undefined4 *)((int)this + 0x438) = 0;
      *(undefined4 *)((int)this + 0x43c) = 0;
    }
    else {
      fVar18 = (float10)_CIpow();
      *(double *)((int)this + 0x438) = (double)(fVar18 * (float10)_DAT_5c98b998);
    }
    uVar8 = ftol();
    *(undefined4 *)((int)this + 0x80) = uVar8;
    iVar12 = *(int *)(*(int *)((int)this + 0x6c) + 4);
    iVar7 = ftol();
    *(int *)((int)this + 0x78) = iVar7 * iVar12;
    if (0 < *(int *)((int)this + 0x80)) {
      local_11c = local_58;
      pdVar15 = (double *)((int)this + 200);
      do {
        *pdVar15 = *local_11c * _DAT_5c98b940;
        fVar18 = (float10)_CIpow();
        pdVar15[-2] = (double)fVar18;
        iVar12 = ftol();
        *pdVar15 = (double)iVar12;
        if (*(LPCVOID *)(pdVar15 + -4) != (LPCVOID)0x0) {
          pvVar9 = GlobalHandle(*(LPCVOID *)(pdVar15 + -4));
          GlobalUnlock(pvVar9);
          pvVar9 = GlobalHandle(*(LPCVOID *)(pdVar15 + -4));
          GlobalFree(pvVar9);
        }
        iVar12 = ftol();
        pvVar9 = GlobalAlloc(0x42,iVar12 << 3);
        pvVar10 = GlobalLock(pvVar9);
        *(LPVOID *)(pdVar15 + -4) = pvVar10;
        *(LPVOID *)((int)pdVar15 + -0x1c) = pvVar10;
        iVar12 = ftol();
        *(int *)(pdVar15 + -3) = *(int *)(pdVar15 + -4) + iVar12 * 8;
        *(undefined4 *)(pdVar15 + -1) = 0;
        *(undefined4 *)((int)pdVar15 + -4) = 0;
        iVar13 = iVar13 + 1;
        local_11c = local_11c + 1;
        pdVar15 = pdVar15 + 5;
      } while (iVar13 < *(int *)((int)this + 0x80));
    }
    if (*(short *)(*(int *)((int)this + 0x6c) + 2) == 2) {
      iVar13 = 0;
      pdVar15 = (double *)((int)this + 600);
      do {
        *pdVar15 = *(double *)((int)local_58 + iVar13) * *(double *)((int)&local_f8 + iVar13) *
                   _DAT_5c98b940;
        fVar18 = (float10)_CIpow();
        pdVar15[-2] = (double)fVar18;
        iVar12 = ftol();
        *pdVar15 = (double)iVar12;
        if (*(LPCVOID *)(pdVar15 + -4) != (LPCVOID)0x0) {
          pvVar9 = GlobalHandle(*(LPCVOID *)(pdVar15 + -4));
          GlobalUnlock(pvVar9);
          pvVar9 = GlobalHandle(*(LPCVOID *)(pdVar15 + -4));
          GlobalFree(pvVar9);
        }
        iVar12 = ftol();
        pvVar9 = GlobalAlloc(0x42,iVar12 << 3);
        pvVar10 = GlobalLock(pvVar9);
        *(LPVOID *)(pdVar15 + -4) = pvVar10;
        *(LPVOID *)((int)pdVar15 + -0x1c) = pvVar10;
        iVar12 = ftol();
        iVar13 = iVar13 + 8;
        *(int *)(pdVar15 + -3) = *(int *)(pdVar15 + -4) + iVar12 * 8;
        *(undefined4 *)(pdVar15 + -1) = 0;
        *(undefined4 *)((int)pdVar15 + -4) = 0;
        pdVar15 = pdVar15 + 5;
      } while (iVar13 < 0x10);
    }
    iVar13 = ftol();
    if (iVar13 < 1) {
      iVar13 = 1;
    }
    if (*(LPCVOID *)((int)this + 0x3d0) != (LPCVOID)0x0) {
      pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x3d0));
      GlobalUnlock(pvVar9);
      pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x3d0));
      GlobalFree(pvVar9);
    }
    SVar16 = iVar13 * 8;
    pvVar9 = GlobalAlloc(0x42,SVar16);
    pvVar10 = GlobalLock(pvVar9);
    *(LPVOID *)((int)this + 0x3d0) = pvVar10;
    *(LPVOID *)((int)this + 0x3cc) = pvVar10;
    *(LPVOID *)((int)this + 0x3c8) = (LPVOID)((int)pvVar10 + SVar16);
    if (*(short *)(*(int *)((int)this + 0x6c) + 2) == 2) {
      if (*(LPCVOID *)((int)this + 0x3dc) != (LPCVOID)0x0) {
        pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x3dc));
        GlobalUnlock(pvVar9);
        pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x3dc));
        GlobalFree(pvVar9);
      }
      pvVar9 = GlobalAlloc(0x42,SVar16);
      pvVar10 = GlobalLock(pvVar9);
      *(LPVOID *)((int)this + 0x3dc) = pvVar10;
      *(LPVOID *)((int)this + 0x3d8) = pvVar10;
      *(LPVOID *)((int)this + 0x3d4) = (LPVOID)((int)pvVar10 + SVar16);
    }
    local_11c = (double *)ftol();
    iVar13 = ftol();
    iVar12 = ftol();
    *(double *)((int)this + 0x3f8) = (double)iStack_d0;
    *(double *)((int)this + 0x3e0) = (double)iStack_d0;
    dVar4 = (double)iStack_cc;
    *(double *)((int)this + 0x400) = dVar4;
    *(double *)((int)this + 1000) = dVar4;
    dVar5 = (double)iStack_c8;
    *(double *)((int)this + 0x408) = dVar5;
    *(double *)((int)this + 0x3f0) = dVar5;
    if (*(short *)(*(int *)((int)this + 0x6c) + 2) == 2) {
      dVar6 = ((double)iStack_c4 + _DAT_5c98be98) * _DAT_5c98bee8;
      *(double *)((int)this + 0x3e0) = (_DAT_5c98b988 - dVar6) * (double)iStack_d0;
      *(double *)((int)this + 0x3f8) = (double)iStack_d0 * dVar6;
      dVar6 = ((double)iStack_c0 + _DAT_5c98be98) * _DAT_5c98bee8;
      *(double *)((int)this + 1000) = (_DAT_5c98b988 - dVar6) * dVar4;
      *(double *)((int)this + 0x400) = dVar4 * dVar6;
      dVar4 = ((double)iStack_bc + _DAT_5c98be98) * _DAT_5c98bee8;
      *(double *)((int)this + 0x3f0) = (_DAT_5c98b988 - dVar4) * dVar5;
      *(double *)((int)this + 0x408) = dVar5 * dVar4;
    }
    iVar7 = iVar13;
    if (iVar13 < (int)local_11c) {
      uVar1 = *(undefined8 *)((int)this + 0x3e0);
      *(undefined4 *)((int)this + 0x3e0) = *(undefined4 *)((int)this + 1000);
      *(undefined8 *)((int)this + 1000) = uVar1;
      uVar1 = *(undefined8 *)((int)this + 0x3f8);
      *(undefined4 *)((int)this + 0x3f8) = *(undefined4 *)((int)this + 0x400);
      *(undefined8 *)((int)this + 0x400) = uVar1;
      *(undefined4 *)((int)this + 0x3e4) = *(undefined4 *)((int)this + 0x3ec);
      *(undefined4 *)((int)this + 0x3fc) = *(undefined4 *)((int)this + 0x404);
      iVar7 = (int)local_11c;
      local_11c = (double *)iVar13;
    }
    iVar13 = iVar12;
    if (iVar12 < iVar7) {
      uVar8 = *(undefined4 *)((int)this + 0x3f0);
      *(undefined8 *)((int)this + 0x3f0) = *(undefined8 *)((int)this + 1000);
      uVar3 = *(undefined4 *)((int)this + 0x408);
      *(undefined4 *)((int)this + 1000) = uVar8;
      *(undefined8 *)((int)this + 0x408) = *(undefined8 *)((int)this + 0x400);
      *(undefined4 *)((int)this + 0x400) = uVar3;
      *(undefined4 *)((int)this + 0x3ec) = *(undefined4 *)((int)this + 0x3f4);
      *(undefined4 *)((int)this + 0x404) = *(undefined4 *)((int)this + 0x40c);
      iVar13 = iVar7;
      iVar7 = iVar12;
    }
    if (*(LPCVOID *)((int)this + 0x410) != (LPCVOID)0x0) {
      pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x410));
      GlobalUnlock(pvVar9);
      pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x410));
      GlobalFree(pvVar9);
    }
    SVar16 = iVar13 * 8;
    pvVar9 = GlobalAlloc(0x42,SVar16);
    pvVar11 = GlobalLock(pvVar9);
    pvVar10 = (LPVOID)((int)pvVar11 + SVar16);
    *(LPVOID *)((int)this + 0x410) = pvVar11;
    *(LPVOID *)((int)this + 0x420) = pvVar10;
    *(LPVOID *)((int)this + 0x41c) = pvVar11;
    *(LPVOID *)((int)this + 0x414) = (LPVOID)((int)pvVar10 + (int)local_11c * -8);
    *(LPVOID *)((int)this + 0x418) = (LPVOID)((int)pvVar10 + iVar7 * -8);
    if (*(short *)(*(int *)((int)this + 0x6c) + 2) == 2) {
      if (*(LPCVOID *)((int)this + 0x424) != (LPCVOID)0x0) {
        pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x424));
        GlobalUnlock(pvVar9);
        pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x424));
        GlobalFree(pvVar9);
      }
      pvVar9 = GlobalAlloc(0x42,SVar16);
      pvVar11 = GlobalLock(pvVar9);
      pvVar10 = (LPVOID)((int)pvVar11 + SVar16);
      *(LPVOID *)((int)this + 0x424) = pvVar11;
      *(LPVOID *)((int)this + 0x434) = pvVar10;
      *(LPVOID *)((int)this + 0x430) = pvVar11;
      *(LPVOID *)((int)this + 0x428) = (LPVOID)((int)pvVar10 + (int)local_11c * -8);
      *(LPVOID *)((int)this + 0x42c) = (LPVOID)((int)pvVar10 + iVar7 * -8);
    }
    *(undefined4 *)((int)this + 0x88) = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0x8c) = 0x3ff00000;
    *(undefined4 *)((int)this + 0x450) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      uVar2 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
      if (*(uint *)(param_1 + 0x28) < uVar2) {
        local_108 = (ulonglong)uVar2;
        fVar19 = (float10)1.4426950408889634 *
                 (((float10)(int)*(uint *)(param_1 + 0x28) * (float10)_DAT_5c98bee0) /
                 (float10)local_108);
        fVar18 = ROUND(fVar19);
        fVar19 = (float10)f2xm1(fVar19 - fVar18);
        fVar18 = (float10)fscale((float10)1 + fVar19,fVar18);
        *(double *)((int)this + 0x98) = (double)fVar18;
        *(double *)((int)this + 0x90) = (double)((float10)_DAT_5c98b988 - fVar18);
        goto LAB_5c94a13f;
      }
    }
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    *(undefined4 *)((int)this + 0x94) = 0x3ff00000;
LAB_5c94a13f:
    if (*(int *)(param_1 + 0x1c) != 0) {
      local_108 = (ulonglong)*(uint *)(*(int *)((int)this + 0x6c) + 4);
      dVar4 = (double)*(int *)(param_1 + 0x20) / (double)local_108;
      dVar5 = _DAT_5c98bec8;
      if (dVar4 < _DAT_5c98bed8) {
        dVar5 = _DAT_5c98bed0;
      }
      FUN_5c949670((undefined4 *)((int)this + 0x458),dVar4 * dVar5,0.1);
    }
    *(undefined4 *)((int)this + 0x70) = 1;
    *(undefined4 *)((int)this + 0x50) = 0;
    return 0;
  }
  if (*(int *)(param_1 + 8) == -800) {
    *(undefined4 *)((int)this + 0x438) = 0;
    *(undefined4 *)((int)this + 0x43c) = 0;
  }
  else {
    fVar18 = (float10)_CIpow();
    *(double *)((int)this + 0x438) = (double)(fVar18 * (float10)_DAT_5c98b998);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar2 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
    if (*(uint *)(param_1 + 0x28) < uVar2) {
      local_118 = (ulonglong)uVar2;
      fVar19 = (float10)1.4426950408889634 *
               (((float10)(int)*(uint *)(param_1 + 0x28) * (float10)_DAT_5c98bee0) /
               (float10)local_118);
      fVar18 = ROUND(fVar19);
      fVar19 = (float10)f2xm1(fVar19 - fVar18);
      fVar18 = (float10)fscale((float10)1 + fVar19,fVar18);
      *(double *)((int)this + 0x98) = (double)fVar18;
      *(double *)((int)this + 0x90) = (double)((float10)_DAT_5c98b988 - fVar18);
      goto LAB_5c949927;
    }
  }
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0x3ff00000;
LAB_5c949927:
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_118 = (ulonglong)*(uint *)(*(int *)((int)this + 0x6c) + 4);
    dVar4 = (double)*(int *)(param_1 + 0x20) / (double)local_118;
    dVar5 = _DAT_5c98bec8;
    if (dVar4 < _DAT_5c98bed8) {
      dVar5 = _DAT_5c98bed0;
    }
    FUN_5c949670((undefined4 *)((int)this + 0x458),dVar4 * dVar5,0.1);
  }
  iVar12 = *(int *)((int)this + 0x6c);
  iVar7 = ftol();
  *(int *)((int)this + 0x78) = *(int *)(iVar12 + 4) * iVar7;
  if (0 < *(int *)((int)this + 0x80)) {
    local_11c = local_58;
    pdVar15 = (double *)((int)this + 200);
    do {
      *pdVar15 = *local_11c * _DAT_5c98b940;
      fVar18 = (float10)_CIpow();
      pdVar15[-2] = (double)fVar18;
      iVar12 = ftol();
      iVar13 = iVar13 + 1;
      local_11c = local_11c + 1;
      *pdVar15 = (double)iVar12;
      pdVar15 = pdVar15 + 5;
    } while (iVar13 < *(int *)((int)this + 0x80));
  }
  if (*(short *)(*(int *)((int)this + 0x6c) + 2) != 2) {
    return 0;
  }
  iVar13 = 0;
  pdVar15 = (double *)((int)this + 600);
  do {
    *pdVar15 = *(double *)((int)local_58 + iVar13) * *(double *)((int)&local_f8 + iVar13) *
               _DAT_5c98b940;
    fVar18 = (float10)_CIpow();
    pdVar15[-2] = (double)fVar18;
    iVar12 = ftol();
    iVar13 = iVar13 + 8;
    *pdVar15 = (double)iVar12;
    pdVar15 = pdVar15 + 5;
  } while (iVar13 < 0x10);
  return 0;
}



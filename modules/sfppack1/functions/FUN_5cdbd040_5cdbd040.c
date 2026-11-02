/* Module: sfppack1.dll
   Function: FUN_5cdbd040
   Address: 5cdbd040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdbd040(void *this,int param_1)

{
  double dVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  int local_1c;
  
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)((int)this + 0x54) == 0) {
    uVar3 = ftol();
    *(uint *)((int)this + 0x90) = uVar3;
    dVar1 = (double)*(uint *)(*(int *)((int)this + 0x70) + 4) / (double)uVar3;
    *(double *)((int)this + 200) = dVar1;
    if (*(int *)(param_1 + 0xc) != 0) {
      if (dVar1 < _DAT_5ce12df8) {
        *(undefined4 *)((int)this + 200) = 0;
        *(undefined4 *)((int)this + 0xcc) = 0x3fe00000;
      }
      FUN_5cdbcab0(this,param_1);
    }
    uVar2 = _DAT_5ce12bf0;
    *(undefined4 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0xe0) = 0;
    *(undefined8 *)((int)this + 0xd0) = uVar2;
    *(undefined4 *)((int)this + 0xdc) = 0;
    uVar4 = ftol();
    dVar1 = _DAT_5ce137a0;
    *(undefined4 *)((int)this + 0xe8) = uVar4;
    if ((dVar1 < *(double *)((int)this + 200)) && (*(int *)((int)this + 0x8c) != 0)) {
      FUN_5cdc0520(this,_DAT_5ce12df8 / *(double *)((int)this + 200));
    }
    return 0;
  }
  iVar5 = FUN_5cdbc8c0(this,param_1);
  if (-1 < iVar5) {
    uVar4 = ftol();
    *(undefined4 *)((int)this + 0x90) = uVar4;
    iVar9 = *(int *)(param_1 + 8);
    *(int *)((int)this + 0x9c) = iVar9;
    if (iVar9 == 1) {
      *(undefined4 *)((int)this + 0xa0) = 2;
    }
    else if (iVar9 == 3) {
      *(undefined4 *)((int)this + 0xa0) = 0xf;
    }
    else {
      *(undefined4 *)((int)this + 0xa0) = 9;
    }
    *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa0) / 2;
    dVar1 = (double)*(uint *)((int)this + 0x90) * _DAT_5ce12df8;
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(double *)((int)this + 0xa8) = dVar1;
    if (*(LPCVOID *)((int)this + 0xb0) != (LPCVOID)0x0) {
      pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xb0));
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xb0));
      GlobalFree(pvVar6);
    }
    pvVar6 = GlobalAlloc(0x42,*(int *)((int)this + 0xa0) << 3);
    pvVar7 = GlobalLock(pvVar6);
    *(LPVOID *)((int)this + 0xb0) = pvVar7;
    if (pvVar7 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    if (1 < *(ushort *)(*(int *)((int)this + 0x70) + 2)) {
      if (*(LPCVOID *)((int)this + 0xb4) != (LPCVOID)0x0) {
        pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xb4));
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xb4));
        GlobalFree(pvVar6);
      }
      pvVar6 = GlobalAlloc(0x42,*(int *)((int)this + 0xa0) << 3);
      pvVar7 = GlobalLock(pvVar6);
      *(LPVOID *)((int)this + 0xb4) = pvVar7;
      if (pvVar7 == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
    }
    *(double *)((int)this + 0xc0) = _DAT_5ce137e8 / (double)(*(int *)((int)this + 0xa4) + 1);
    if (*(LPCVOID *)((int)this + 0xb8) != (LPCVOID)0x0) {
      pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xb8));
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xb8));
      GlobalFree(pvVar6);
    }
    pvVar6 = GlobalAlloc(0x42,0x7d18);
    puVar8 = GlobalLock(pvVar6);
    *(undefined4 **)((int)this + 0xb8) = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      return -0x7ff8fff2;
    }
    *puVar8 = 0;
    puVar8[1] = 0x3ff00000;
    if (*(int *)((int)this + 0xa0) == 2) {
      iVar9 = 8;
      local_1c = 1999;
      do {
        dVar1 = (double)local_1c;
        local_1c = local_1c + -1;
        iVar9 = iVar9 + 8;
        *(double *)(*(int *)((int)this + 0xb8) + -8 + iVar9) = dVar1 * _DAT_5ce137e0;
      } while (0 < local_1c);
      iVar9 = 16000;
      do {
        puVar8 = (undefined4 *)(iVar9 + *(int *)((int)this + 0xb8));
        iVar9 = iVar9 + 8;
        *puVar8 = 0;
        puVar8[1] = 0;
      } while (iVar9 < 32000);
    }
    else {
      iVar9 = 1;
      do {
        iVar10 = *(int *)((int)this + 0xa4) + 1;
        iVar11 = iVar10 * iVar9;
        iVar9 = iVar9 + 1;
        fVar12 = (float10)iVar11 * (float10)_DAT_5ce137d8 * (float10)_DAT_5ce137d0;
        fVar13 = fVar12 / (float10)iVar10 + (float10)_DAT_5ce137d0;
        fVar14 = (float10)fcos(fVar13);
        fVar15 = (float10)fcos(fVar13 + fVar13);
        fVar13 = (float10)fcos(fVar13 * (float10)_DAT_5ce137b0);
        fVar16 = (float10)fsin(fVar12);
        fVar12 = (fVar16 / fVar12) *
                 ((fVar15 * (float10)_DAT_5ce137b8 +
                  ((float10)_DAT_5ce137c0 - fVar14 * (float10)_DAT_5ce137c8)) -
                 fVar13 * (float10)_DAT_5ce137a8);
        *(double *)(*(int *)((int)this + 0xb8) + -8 + iVar9 * 8) = (double)fVar12;
      } while (iVar9 < 4000);
      *(double *)(*(int *)((int)this + 0xb8) + 32000) = (double)fVar12;
    }
    dVar1 = (double)*(uint *)(*(int *)((int)this + 0x70) + 4) / (double)*(uint *)((int)this + 0x90);
    *(double *)((int)this + 200) = dVar1;
    if (*(int *)(param_1 + 0xc) != 0) {
      if (dVar1 < _DAT_5ce12df8) {
        *(undefined4 *)((int)this + 200) = 0;
        *(undefined4 *)((int)this + 0xcc) = 0x3fe00000;
      }
      iVar5 = FUN_5cdbcab0(this,param_1);
    }
    if ((_DAT_5ce137a0 < *(double *)((int)this + 200)) && (*(int *)((int)this + 0x8c) != 0)) {
      FUN_5cdc0520(this,_DAT_5ce12df8 / *(double *)((int)this + 200));
    }
    *(undefined4 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(uint *)((int)this + 0x78) = (uint)(-1 < iVar5);
    *(undefined4 *)((int)this + 0x15c) = 1;
    *(undefined4 *)((int)this + 0x80) = 0;
    *(undefined4 *)((int)this + 0xe0) = 0;
    *(undefined4 *)((int)this + 0x194) = 0;
    *(undefined4 *)((int)this + 0x198) = 0;
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  return iVar5;
}



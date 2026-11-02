/* Module: sfppack1.dll
   Function: FUN_5cdcb650
   Address: 5cdcb650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdcb650(void *this,int *param_1)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  int iVar5;
  int *piVar6;
  double *pdVar7;
  int iVar8;
  HGLOBAL pvVar9;
  LPVOID pvVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;
  int local_18;
  int local_14;
  
  puVar12 = &DAT_5ce14120;
  pdVar7 = (double *)((int)this + 0x1b8);
  for (iVar11 = 0x10; dVar4 = _DAT_5ce12bf0, iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)pdVar7 = *(undefined4 *)puVar12;
    puVar12 = (undefined8 *)((int)puVar12 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  puVar12 = &DAT_5ce14160;
  puVar13 = (undefined4 *)((int)this + 0x1f8);
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = *(undefined4 *)puVar12;
    puVar12 = (undefined8 *)((int)puVar12 + 4);
    puVar13 = puVar13 + 1;
  }
  *(int *)((int)this + 0xd8) = param_1[0x18];
  *(double *)((int)this + 0x260) =
       _DAT_5ce14448 /
       ((double)*(uint *)(*(int *)((int)this + 200) + 4) * (_DAT_5ce12cb8 / (double)param_1[0x20]));
  uVar3 = *(uint *)(*(int *)((int)this + 200) + 4);
  dVar2 = (double)param_1[0x1f] * _DAT_5ce14440;
  iVar11 = 0;
  pdVar7 = (double *)((int)this + 0x1b8);
  do {
    iVar5 = iVar11 + 8;
    pdVar7[8] = (double)*(uint *)(*(int *)((int)this + 200) + 4) *
                *(double *)((int)&DAT_5ce14160 + iVar11) * _DAT_5ce12e48;
    *pdVar7 = (double)uVar3 * dVar2 * *(double *)((int)&DAT_5ce14120 + iVar11);
    iVar11 = iVar5;
    pdVar7 = pdVar7 + 1;
  } while (iVar5 < 0x40);
  if (*(short *)(*(int *)((int)this + 200) + 2) == 1) {
    iVar11 = 0;
    if (*(int *)((int)this + 0xd8) < 1) goto LAB_5cdcb7e6;
    piVar6 = param_1 + 8;
    pdVar7 = (double *)((int)this + 0x138);
    do {
      iVar5 = *piVar6;
      iVar11 = iVar11 + 1;
      piVar6 = piVar6 + 1;
      dVar2 = (double)iVar5 * _DAT_5ce12e20;
      *pdVar7 = dVar2;
      dVar4 = dVar2 + dVar4;
      pdVar7 = pdVar7 + 1;
    } while (iVar11 < *(int *)((int)this + 0xd8));
LAB_5cdcb7d9:
    if (dVar4 < _DAT_5ce12e70) goto LAB_5cdcb7e6;
  }
  else {
    iVar11 = 0;
    if (0 < *(int *)((int)this + 0xd8)) {
      pdVar7 = (double *)((int)this + 0x138);
      piVar6 = param_1 + 8;
      do {
        if (piVar6[8] < 1) {
          *pdVar7 = (double)*piVar6 * _DAT_5ce12e20;
          pdVar7[8] = ((double)piVar6[8] + _DAT_5ce12e10) * _DAT_5ce12e20 * (double)*piVar6 *
                      _DAT_5ce12e20;
        }
        else {
          pdVar7[8] = (double)*piVar6 * _DAT_5ce12e20;
          *pdVar7 = (_DAT_5ce12e10 - (double)piVar6[8]) * _DAT_5ce12e20 * (double)*piVar6 *
                    _DAT_5ce12e20;
        }
        pdVar1 = pdVar7 + 8;
        dVar2 = *pdVar7;
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 1;
        pdVar7 = pdVar7 + 1;
        dVar4 = *pdVar1 + dVar2 + dVar4;
      } while (iVar11 < *(int *)((int)this + 0xd8));
      goto LAB_5cdcb7d9;
    }
LAB_5cdcb7e6:
    dVar4 = _DAT_5ce12e70;
  }
  *(double *)((int)this + 0xe0) = (double)param_1[0x1b] / (dVar4 * _DAT_5ce12e10);
  fVar14 = FUN_5cdcba40(param_1[0x19],-800);
  *(double *)((int)this + 0xf8) = (double)fVar14;
  fVar14 = FUN_5cdcba40(param_1[0x1a],-800);
  *(double *)((int)this + 0xf0) = (double)fVar14;
  fVar14 = FUN_5cdcba40(param_1[0x1c],-800);
  *(double *)((int)this + 0xe8) = (double)fVar14;
  if (param_1[0x1d] != 0) {
    uVar3 = *(uint *)(*(int *)((int)this + 200) + 4);
    if (param_1[0x1e] <= (int)uVar3 / 2) {
      fVar15 = (float10)1.4426950408889634 *
               (((float10)param_1[0x1e] * (float10)_DAT_5ce14438) / (float10)uVar3);
      fVar14 = ROUND(fVar15);
      fVar15 = (float10)f2xm1(fVar15 - fVar14);
      fVar14 = (float10)fscale((float10)1 + fVar15,fVar14);
      *(double *)((int)this + 0x250) = (double)fVar14;
      *(double *)((int)this + 0x238) = (double)((float10)_DAT_5ce12e70 - fVar14);
      goto LAB_5cdcb8bf;
    }
  }
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0x3ff00000;
LAB_5cdcb8bf:
  iVar11 = ftol();
  local_18 = 0;
  local_14 = 0;
  if (0 < *(int *)((int)this + 0xd8)) {
    piVar6 = param_1;
    param_1 = (int *)((int)this + 0x110);
    do {
      iVar5 = *piVar6;
      iVar8 = ftol();
      iVar8 = iVar8 + iVar5 * iVar11;
      *param_1 = iVar8;
      if (local_18 < iVar8) {
        local_18 = iVar8;
      }
      local_14 = local_14 + 1;
      piVar6 = piVar6 + 1;
      param_1 = param_1 + 1;
    } while (local_14 < *(int *)((int)this + 0xd8));
  }
  iVar11 = ftol();
  if (*(LPCVOID *)((int)this + 0x100) != (LPCVOID)0x0) {
    if (*(int *)((int)this + 0x104) == iVar11) {
      return 0;
    }
    pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x100));
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(*(LPCVOID *)((int)this + 0x100));
    GlobalFree(pvVar9);
    *(undefined4 *)((int)this + 0x100) = 0;
  }
  *(int *)((int)this + 0x104) = iVar11;
  *(int *)((int)this + 0x108) = iVar11;
  *(int *)((int)this + 0x10c) = iVar11;
  pvVar9 = GlobalAlloc(0x42,iVar11 * 8);
  pvVar10 = GlobalLock(pvVar9);
  *(LPVOID *)((int)this + 0x100) = pvVar10;
  if (pvVar10 != (LPVOID)0x0) {
    *(undefined4 *)((int)this + 0x240) = 0;
    *(undefined4 *)((int)this + 0x278) = 0;
    *(undefined4 *)((int)this + 0x268) = 0;
    *(undefined4 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x280) = 0;
    *(int *)((int)this + 0x270) = iVar11 + -1;
    *(undefined4 *)((int)this + 600) = 0;
    *(undefined4 *)((int)this + 0x244) = 0;
    *(undefined4 *)((int)this + 0x27c) = 0;
    *(undefined4 *)((int)this + 0x26c) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(undefined4 *)((int)this + 0x284) = 0;
    return 0;
  }
  return 0x8007000e;
}



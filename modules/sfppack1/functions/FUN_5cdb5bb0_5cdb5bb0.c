/* Module: sfppack1.dll
   Function: FUN_5cdb5bb0
   Address: 5cdb5bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdb5bb0(void *this,double *param_1)

{
  float *pfVar1;
  double *pdVar2;
  short sVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  HGLOBAL pvVar7;
  LPVOID pvVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int local_8;
  uint local_4;
  
  iVar6 = *(int *)((int)this + 0x60);
  uVar10 = (uint)*(ushort *)(iVar6 + 2);
  if (*(int *)((int)this + 0x44) != 0) {
    piVar11 = (int *)(&DAT_5ce12e80 + *(int *)(param_1 + 1) * 0x28);
    piVar13 = (int *)((int)this + 0x80);
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar13 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar13 = piVar13 + 1;
    }
    *(uint *)((int)this + 0xa8) = (uint)(*(int *)(iVar6 + 4) * *(int *)((int)this + 0x80)) / 1000;
    sVar3 = (*(short **)((int)this + 0x60))[7];
    if ((sVar3 == 0x40) || ((**(short **)((int)this + 0x60) == 1 && (sVar3 == 0x20)))) {
      if (*(LPCVOID *)((int)this + 0xc4) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xc4));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xc4));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,uVar10 * *(int *)((int)this + 0xa8) * 8);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0xc4) = pvVar8;
      if (*(LPCVOID *)((int)this + 200) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 200));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 200));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,uVar10 * *(int *)((int)this + 0xa8) * 8);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 200) = pvVar8;
      if (*(LPCVOID *)((int)this + 0xcc) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xcc));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xcc));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,*(int *)((int)this + 0xa8) << 3);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0xcc) = pvVar8;
      iVar6 = 0;
      if (0 < *(int *)((int)this + 0xa8)) {
        do {
          iVar9 = *(int *)((int)this + 0xcc);
          iVar6 = iVar6 + 1;
          *(undefined4 *)(iVar9 + -8 + iVar6 * 8) = 0;
          *(undefined4 *)(iVar9 + -4 + iVar6 * 8) = 0x3ff00000;
        } while (iVar6 < *(int *)((int)this + 0xa8));
      }
      uVar10 = (uint)(*(int *)((int)this + 0x90) * *(int *)(*(int *)((int)this + 0x60) + 4)) / 1000;
      *(uint *)((int)this + 0xb4) = uVar10;
      if ((int)uVar10 < 0) {
        local_4 = 0;
      }
      else {
        local_4 = *(int *)((int)this + 0xa8) / 2 - 1;
        if ((int)uVar10 <= (int)local_4) {
          local_4 = uVar10;
        }
      }
      *(uint *)((int)this + 0xb4) = local_4;
      if (1 < (int)local_4) {
        local_8 = 0;
        if (0 < (int)local_4) {
          iVar6 = (*(int *)((int)this + 0xa8) / 2 + local_4) * 8;
          do {
            dVar5 = (double)local_8;
            pdVar2 = (double *)(*(int *)((int)this + 0xcc) + local_8 * 8);
            local_8 = local_8 + 1;
            *pdVar2 = (dVar5 / (double)(int)local_4) * *pdVar2;
            iVar9 = *(int *)((int)this + 0xcc);
            *(undefined4 *)(iVar6 + iVar9) = *(undefined4 *)(iVar9 + -8 + local_8 * 8);
            *(undefined4 *)(iVar6 + 4 + iVar9) = *(undefined4 *)(iVar9 + -4 + local_8 * 8);
            local_4 = *(uint *)((int)this + 0xb4);
            iVar6 = iVar6 + -8;
          } while (local_8 < (int)local_4);
        }
        iVar6 = *(int *)((int)this + 0xa8) / 2 + 1 + *(int *)((int)this + 0xb4);
        if (iVar6 < *(int *)((int)this + 0xa8)) {
          do {
            iVar9 = *(int *)((int)this + 0xcc);
            iVar6 = iVar6 + 1;
            *(undefined4 *)(iVar9 + -8 + iVar6 * 8) = 0;
            *(undefined4 *)(iVar9 + -4 + iVar6 * 8) = 0;
          } while (iVar6 < *(int *)((int)this + 0xa8));
        }
      }
    }
    else {
      if (*(LPCVOID *)((int)this + 0xb8) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xb8));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xb8));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,uVar10 * *(int *)((int)this + 0xa8) * 4);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0xb8) = pvVar8;
      if (*(LPCVOID *)((int)this + 0xbc) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xbc));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xbc));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,uVar10 * *(int *)((int)this + 0xa8) * 4);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0xbc) = pvVar8;
      if (*(LPCVOID *)((int)this + 0xc0) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xc0));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0xc0));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,*(int *)((int)this + 0xa8) << 2);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0xc0) = pvVar8;
      iVar6 = 0;
      if (0 < *(int *)((int)this + 0xa8)) {
        do {
          iVar6 = iVar6 + 1;
          *(undefined4 *)(*(int *)((int)this + 0xc0) + -4 + iVar6 * 4) = 0x3f800000;
        } while (iVar6 < *(int *)((int)this + 0xa8));
      }
      uVar10 = (uint)(*(int *)((int)this + 0x90) * *(int *)(*(int *)((int)this + 0x60) + 4)) / 1000;
      *(uint *)((int)this + 0xb4) = uVar10;
      if ((int)uVar10 < 0) {
        local_4 = 0;
      }
      else {
        local_4 = *(int *)((int)this + 0xa8) / 2 - 1;
        if ((int)uVar10 <= (int)local_4) {
          local_4 = uVar10;
        }
      }
      *(uint *)((int)this + 0xb4) = local_4;
      if (1 < (int)local_4) {
        local_8 = 0;
        if (0 < (int)local_4) {
          iVar6 = (*(int *)((int)this + 0xa8) / 2 + local_4) * 4;
          do {
            fVar4 = (float)local_8;
            pfVar1 = (float *)(*(int *)((int)this + 0xc0) + local_8 * 4);
            local_8 = local_8 + 1;
            *pfVar1 = (fVar4 / (float)(int)local_4) * *pfVar1;
            *(undefined4 *)(iVar6 + *(int *)((int)this + 0xc0)) =
                 *(undefined4 *)(*(int *)((int)this + 0xc0) + -4 + local_8 * 4);
            local_4 = *(uint *)((int)this + 0xb4);
            iVar6 = iVar6 + -4;
          } while (local_8 < (int)local_4);
        }
        iVar6 = *(int *)((int)this + 0xa8) / 2 + 1 + *(int *)((int)this + 0xb4);
        if (iVar6 < *(int *)((int)this + 0xa8)) {
          do {
            iVar6 = iVar6 + 1;
            *(undefined4 *)(*(int *)((int)this + 0xc0) + -4 + iVar6 * 4) = 0;
          } while (iVar6 < *(int *)((int)this + 0xa8));
        }
      }
    }
    iVar6 = *(int *)((int)this + 0xa8);
    iVar12 = iVar6 / 2;
    *(int *)((int)this + 0xf8) = iVar12;
    *(int *)((int)this + 0xac) = iVar12;
    *(double *)((int)this + 0x78) = *param_1 * _DAT_5ce12e18;
    iVar9 = ftol();
    *(int *)((int)this + 0xb0) = iVar9;
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    else if (iVar6 < iVar9) {
      iVar9 = iVar6;
    }
    *(int *)((int)this + 0xb0) = iVar9;
    iVar9 = *(int *)(*(int *)((int)this + 0x60) + 4);
    *(int *)((int)this + 0xd0) = *(int *)((int)this + 0x8c);
    uVar10 = (uint)(*(int *)((int)this + 0x88) * iVar9) / 1000;
    iVar12 = iVar12 - *(int *)((int)this + 0xb4);
    *(int *)((int)this + 0xd4) = iVar12;
    if ((int)uVar10 < iVar12) {
      *(uint *)((int)this + 0xd4) = uVar10;
    }
    uVar10 = *(uint *)(*(int *)((int)this + 0x60) + 4);
    if ((uVar10 < 32000) &&
       (uVar10 = (*(int *)((int)this + 0x8c) * uVar10) / 0xac44,
       *(uint *)((int)this + 0xd0) = uVar10, uVar10 == 0)) {
      *(undefined4 *)((int)this + 0xd0) = 1;
    }
    fVar4 = (float)*(int *)((int)this + 0x98) * _DAT_5ce13228;
    *(int *)((int)this + 0xfc) = iVar6 - *(int *)((int)this + 0xb0);
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xf4) = 0;
    *(undefined4 *)((int)this + 0x68) = 1;
    *(float *)((int)this + 0xd8) = fVar4;
    *(undefined4 *)((int)this + 0x44) = 0;
    return 0;
  }
  *(double *)((int)this + 0x78) = *param_1 * _DAT_5ce12e18;
  iVar6 = ftol();
  *(int *)((int)this + 0xb0) = iVar6;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  else if (*(int *)((int)this + 0xa8) < iVar6) {
    iVar6 = *(int *)((int)this + 0xa8);
  }
  *(int *)((int)this + 0xb0) = iVar6;
  *(int *)((int)this + 0xfc) = *(int *)((int)this + 0xa8) - iVar6;
  return 0;
}



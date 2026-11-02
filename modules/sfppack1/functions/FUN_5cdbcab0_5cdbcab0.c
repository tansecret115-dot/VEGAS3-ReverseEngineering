/* Module: sfppack1.dll
   Function: FUN_5cdbcab0
   Address: 5cdbcab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdbcab0(void *this,int param_1)

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
  uint local_4;
  
  iVar6 = *(int *)((int)this + 0x70);
  uVar10 = (uint)*(ushort *)(iVar6 + 2);
  if (*(int *)((int)this + 0x54) != 0) {
    piVar11 = (int *)(&DAT_5ce1fb28 + *(int *)(param_1 + 0x10) * 0x28);
    piVar13 = (int *)((int)this + 0x100);
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar13 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar13 = piVar13 + 1;
    }
    *(uint *)((int)this + 0x128) = (uint)(*(int *)(iVar6 + 4) * *(int *)((int)this + 0x100)) / 1000;
    sVar3 = (*(short **)((int)this + 0x70))[7];
    if ((sVar3 == 0x40) || ((**(short **)((int)this + 0x70) == 1 && (sVar3 == 0x20)))) {
      if (*(LPCVOID *)((int)this + 0x144) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x144));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x144));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,uVar10 * *(int *)((int)this + 0x128) * 8);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0x144) = pvVar8;
      if (*(LPCVOID *)((int)this + 0x148) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x148));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x148));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,uVar10 * *(int *)((int)this + 0x128) * 8);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0x148) = pvVar8;
      if (*(LPCVOID *)((int)this + 0x14c) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x14c));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x14c));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,*(int *)((int)this + 0x128) << 3);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0x14c) = pvVar8;
      iVar6 = 0;
      if (0 < *(int *)((int)this + 0x128)) {
        do {
          iVar9 = *(int *)((int)this + 0x14c);
          iVar6 = iVar6 + 1;
          *(undefined4 *)(iVar9 + -8 + iVar6 * 8) = 0;
          *(undefined4 *)(iVar9 + -4 + iVar6 * 8) = 0x3ff00000;
        } while (iVar6 < *(int *)((int)this + 0x128));
      }
      uVar10 = (uint)(*(int *)((int)this + 0x110) * *(int *)(*(int *)((int)this + 0x70) + 4)) / 1000
      ;
      *(uint *)((int)this + 0x134) = uVar10;
      if ((int)uVar10 < 0) {
        local_4 = 0;
      }
      else {
        local_4 = *(int *)((int)this + 0x128) / 2 - 1;
        if ((int)uVar10 <= (int)local_4) {
          local_4 = uVar10;
        }
      }
      *(uint *)((int)this + 0x134) = local_4;
      if (1 < (int)local_4) {
        param_1 = 0;
        if (0 < (int)local_4) {
          iVar6 = (*(int *)((int)this + 0x128) / 2 + local_4) * 8;
          do {
            dVar5 = (double)param_1;
            pdVar2 = (double *)(*(int *)((int)this + 0x14c) + param_1 * 8);
            param_1 = param_1 + 1;
            *pdVar2 = (dVar5 / (double)(int)local_4) * *pdVar2;
            iVar9 = *(int *)((int)this + 0x14c);
            *(undefined4 *)(iVar6 + iVar9) = *(undefined4 *)(iVar9 + -8 + param_1 * 8);
            *(undefined4 *)(iVar6 + 4 + iVar9) = *(undefined4 *)(iVar9 + -4 + param_1 * 8);
            local_4 = *(uint *)((int)this + 0x134);
            iVar6 = iVar6 + -8;
          } while (param_1 < (int)local_4);
        }
        iVar6 = *(int *)((int)this + 0x128) / 2 + 1 + *(int *)((int)this + 0x134);
        if (iVar6 < *(int *)((int)this + 0x128)) {
          do {
            iVar9 = *(int *)((int)this + 0x14c);
            iVar6 = iVar6 + 1;
            *(undefined4 *)(iVar9 + -8 + iVar6 * 8) = 0;
            *(undefined4 *)(iVar9 + -4 + iVar6 * 8) = 0;
          } while (iVar6 < *(int *)((int)this + 0x128));
        }
      }
    }
    else {
      if (*(LPCVOID *)((int)this + 0x138) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x138));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x138));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,uVar10 * *(int *)((int)this + 0x128) * 4);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0x138) = pvVar8;
      if (*(LPCVOID *)((int)this + 0x13c) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x13c));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x13c));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,uVar10 * *(int *)((int)this + 0x128) * 4);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0x13c) = pvVar8;
      if (*(LPCVOID *)((int)this + 0x140) != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x140));
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x140));
        GlobalFree(pvVar7);
      }
      pvVar7 = GlobalAlloc(0x42,*(int *)((int)this + 0x128) << 2);
      pvVar8 = GlobalLock(pvVar7);
      *(LPVOID *)((int)this + 0x140) = pvVar8;
      iVar6 = 0;
      if (0 < *(int *)((int)this + 0x128)) {
        do {
          iVar6 = iVar6 + 1;
          *(undefined4 *)(*(int *)((int)this + 0x140) + -4 + iVar6 * 4) = 0x3f800000;
        } while (iVar6 < *(int *)((int)this + 0x128));
      }
      uVar10 = (uint)(*(int *)((int)this + 0x110) * *(int *)(*(int *)((int)this + 0x70) + 4)) / 1000
      ;
      *(uint *)((int)this + 0x134) = uVar10;
      if ((int)uVar10 < 0) {
        local_4 = 0;
      }
      else {
        local_4 = *(int *)((int)this + 0x128) / 2 - 1;
        if ((int)uVar10 <= (int)local_4) {
          local_4 = uVar10;
        }
      }
      *(uint *)((int)this + 0x134) = local_4;
      if (1 < (int)local_4) {
        param_1 = 0;
        if (0 < (int)local_4) {
          iVar6 = (*(int *)((int)this + 0x128) / 2 + local_4) * 4;
          do {
            fVar4 = (float)param_1;
            pfVar1 = (float *)(*(int *)((int)this + 0x140) + param_1 * 4);
            param_1 = param_1 + 1;
            *pfVar1 = (fVar4 / (float)(int)local_4) * *pfVar1;
            *(undefined4 *)(iVar6 + *(int *)((int)this + 0x140)) =
                 *(undefined4 *)(*(int *)((int)this + 0x140) + -4 + param_1 * 4);
            local_4 = *(uint *)((int)this + 0x134);
            iVar6 = iVar6 + -4;
          } while (param_1 < (int)local_4);
        }
        iVar6 = *(int *)((int)this + 0x128) / 2 + 1 + *(int *)((int)this + 0x134);
        if (iVar6 < *(int *)((int)this + 0x128)) {
          do {
            iVar6 = iVar6 + 1;
            *(undefined4 *)(*(int *)((int)this + 0x140) + -4 + iVar6 * 4) = 0;
          } while (iVar6 < *(int *)((int)this + 0x128));
        }
      }
    }
    iVar6 = *(int *)((int)this + 0x128);
    *(undefined8 *)((int)this + 0xf8) = *(undefined8 *)((int)this + 200);
    iVar12 = iVar6 / 2;
    *(int *)((int)this + 0x178) = iVar12;
    *(int *)((int)this + 300) = iVar12;
    iVar9 = ftol();
    *(int *)((int)this + 0x130) = iVar9;
    if (iVar9 < 1) {
      param_1 = 1;
    }
    else {
      param_1 = iVar6;
      if (iVar9 <= iVar6) {
        param_1 = iVar9;
      }
    }
    *(int *)((int)this + 0x130) = param_1;
    iVar9 = *(int *)(*(int *)((int)this + 0x70) + 4);
    *(int *)((int)this + 0x150) = *(int *)((int)this + 0x10c);
    uVar10 = (uint)(*(int *)((int)this + 0x108) * iVar9) / 1000;
    iVar12 = iVar12 - *(int *)((int)this + 0x134);
    *(int *)((int)this + 0x154) = iVar12;
    if ((int)uVar10 < iVar12) {
      *(uint *)((int)this + 0x154) = uVar10;
    }
    uVar10 = *(uint *)(*(int *)((int)this + 0x70) + 4);
    if ((uVar10 < 32000) &&
       (uVar10 = (*(int *)((int)this + 0x10c) * uVar10) / 0xac44,
       *(uint *)((int)this + 0x150) = uVar10, uVar10 == 0)) {
      *(undefined4 *)((int)this + 0x150) = 1;
    }
    *(undefined4 *)((int)this + 0x78) = 1;
    fVar4 = (float)*(int *)((int)this + 0x118) * _DAT_5ce13228;
    *(int *)((int)this + 0x17c) = iVar6 - param_1;
    *(undefined4 *)((int)this + 0x164) = 0;
    *(undefined4 *)((int)this + 0x16c) = 0;
    *(undefined4 *)((int)this + 0x174) = 0;
    *(float *)((int)this + 0x158) = fVar4;
    return 0;
  }
  *(undefined8 *)((int)this + 0xf8) = *(undefined8 *)((int)this + 200);
  iVar6 = ftol();
  *(int *)((int)this + 0x130) = iVar6;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  else if (*(int *)((int)this + 0x128) < iVar6) {
    iVar6 = *(int *)((int)this + 0x128);
  }
  *(int *)((int)this + 0x130) = iVar6;
  *(int *)((int)this + 0x17c) = *(int *)((int)this + 0x128) - iVar6;
  return 0;
}



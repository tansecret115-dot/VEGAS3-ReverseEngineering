/* Module: sfppack2.dll
   Function: FUN_5ccfd040
   Address: 5ccfd040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5ccfd040(void *this,short *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short *psVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  DWORD DVar9;
  uint uVar10;
  uint uVar11;
  SIZE_T SVar12;
  undefined4 local_a0 [40];
  
  *(short **)((int)this + 0xd8) = param_1;
  *(undefined4 *)((int)this + 0xdc) = param_2;
  if (*param_1 == 1) {
    sVar3 = param_1[7];
    if (sVar3 == 8) {
      *(undefined1 **)((int)this + 0x164) = &LAB_5ccfda40;
      *(undefined1 **)((int)this + 0x160) = &LAB_5ccfe0c0;
    }
    else if (sVar3 == 0x10) {
      *(undefined1 **)((int)this + 0x164) = &LAB_5ccfdba0;
      *(undefined1 **)((int)this + 0x160) = &LAB_5ccfe290;
    }
    else {
      if (sVar3 != 0x20) {
        return 0x80004005;
      }
      *(undefined1 **)((int)this + 0x164) = &LAB_5ccfde10;
      *(undefined1 **)((int)this + 0x160) = &LAB_5ccfe5e0;
    }
  }
  else if (param_1[7] == 0x20) {
    *(undefined1 **)((int)this + 0x164) = &LAB_5ccfdd20;
    *(undefined1 **)((int)this + 0x160) = &LAB_5ccfe450;
  }
  else {
    if (param_1[7] != 0x40) {
      return 0x80004005;
    }
    *(undefined1 **)((int)this + 0x164) = &LAB_5ccfdfd0;
    *(undefined1 **)((int)this + 0x160) = &LAB_5ccfe780;
  }
  if (*(int *)((int)this + 0x130) == 0) {
    pvVar5 = GlobalAlloc(0x42,0x1ae8);
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0x130) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      return 0x8007000e;
    }
  }
  FUN_5ccfa4d0(this,local_a0);
  uVar7 = FUN_5ccfcfa0(this,(int)local_a0,0);
  psVar4 = *(short **)((int)this + 0xd8);
  uVar8 = ftol();
  *(undefined4 *)((int)this + 0x134) = uVar8;
  sVar3 = psVar4[7];
  if ((sVar3 == 0x40) || ((*psVar4 == 1 && (sVar3 == 0x20)))) {
    *(code **)((int)this + 0x168) = FUN_5ccff210;
    SVar12 = *(int *)((int)this + 0x134) << 3;
    if (*(LPCVOID *)((int)this + 0x108) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x108));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x108));
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,SVar12);
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0x108) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    if (*(short *)(*(int *)((int)this + 0xd8) + 2) == 2) {
      if (*(LPCVOID *)((int)this + 0x128) != (LPCVOID)0x0) {
        pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x128));
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x128));
        GlobalFree(pvVar5);
      }
      pvVar5 = GlobalAlloc(0x42,SVar12);
      pvVar6 = GlobalLock(pvVar5);
      *(LPVOID *)((int)this + 0x128) = pvVar6;
      if (pvVar6 == (LPVOID)0x0) {
        return 0x8007000e;
      }
    }
  }
  else {
    *(code **)((int)this + 0x168) = FUN_5ccff470;
    SVar12 = *(int *)((int)this + 0x134) << 2;
    if (*(LPCVOID *)((int)this + 0x108) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x108));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x108));
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,SVar12);
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0x108) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    if (*(short *)(*(int *)((int)this + 0xd8) + 2) == 2) {
      if (*(LPCVOID *)((int)this + 0x128) != (LPCVOID)0x0) {
        pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x128));
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x128));
        GlobalFree(pvVar5);
      }
      pvVar5 = GlobalAlloc(0x42,SVar12);
      pvVar6 = GlobalLock(pvVar5);
      *(LPVOID *)((int)this + 0x128) = pvVar6;
      if (pvVar6 == (LPVOID)0x0) {
        return 0x8007000e;
      }
    }
  }
  DVar9 = timeGetTime();
  srand(DVar9 >> 3);
  DVar9 = timeGetTime();
  *(DWORD *)((int)this + 0x170) = (DVar9 >> 3 & 1) * *(int *)(*(int *)((int)this + 0xd8) + 4);
  *(undefined4 *)((int)this + 0x174) = 0;
  if (*(LPCVOID *)((int)this + 0x178) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x178));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x178));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  if (DAT_5cd679f8 == 0) {
    uVar11 = *(uint *)(*(int *)((int)this + 0xd8) + 4) / 100;
    *(uint *)((int)this + 0x174) = uVar11;
    pvVar5 = GlobalAlloc(0x42,uVar11 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar11 = *(uint *)((int)this + 0x174);
    *(LPVOID *)((int)this + 0x178) = pvVar6;
    uVar10 = 0;
    if (uVar11 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x178) + uVar10 * 4) =
             (float)uVar10 / (float)(int)(uVar11 - 1);
        *(float *)(*(int *)((int)this + 0x178) + uVar10 * 4) =
             *(float *)(*(int *)((int)this + 0x178) + uVar10 * 4) - _DAT_5cd5172c;
        iVar1 = uVar10 * 4;
        iVar2 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(float *)(*(int *)((int)this + 0x178) + iVar2) =
             *(float *)(*(int *)((int)this + 0x178) + iVar1) * _DAT_5cd51728;
        uVar11 = *(uint *)((int)this + 0x174);
      } while (uVar10 < uVar11);
    }
  }
  *(undefined4 *)((int)this + 0xc4) = 0;
  return uVar7;
}



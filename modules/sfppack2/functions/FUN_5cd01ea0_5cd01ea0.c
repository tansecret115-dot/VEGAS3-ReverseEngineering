/* Module: sfppack2.dll
   Function: FUN_5cd01ea0
   Address: 5cd01ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cd01ea0(void *this,short *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  DWORD DVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  code *pcVar11;
  undefined4 local_c [3];
  
  *(short **)((int)this + 0x44) = param_1;
  *(undefined4 *)((int)this + 0x48) = param_2;
  if (*param_1 == 1) {
    sVar3 = param_1[7];
    if (sVar3 == 8) {
      *(undefined1 **)((int)this + 0x13c) = &LAB_5cd02540;
      *(undefined1 **)((int)this + 0x138) = &LAB_5cd02b90;
    }
    else if (sVar3 == 0x10) {
      *(undefined1 **)((int)this + 0x13c) = &LAB_5cd026a0;
      *(undefined1 **)((int)this + 0x138) = &LAB_5cd02d40;
    }
    else {
      if (sVar3 != 0x20) {
        return 0x80004005;
      }
      *(undefined1 **)((int)this + 0x13c) = &LAB_5cd02900;
      *(undefined1 **)((int)this + 0x138) = &LAB_5cd03070;
    }
  }
  else if (param_1[7] == 0x20) {
    *(undefined1 **)((int)this + 0x13c) = &LAB_5cd02820;
    *(undefined1 **)((int)this + 0x138) = &LAB_5cd02ef0;
  }
  else {
    if (param_1[7] != 0x40) {
      return 0x80004005;
    }
    *(undefined1 **)((int)this + 0x13c) = &LAB_5cd02ab0;
    *(undefined1 **)((int)this + 0x138) = &LAB_5cd03200;
  }
  uVar4 = ftol();
  *(undefined4 *)((int)this + 0x8c) = uVar4;
  uVar4 = ftol();
  *(undefined4 *)((int)this + 0xf0) = uVar4;
  uVar4 = ftol();
  *(undefined4 *)((int)this + 0x68) = uVar4;
  FUN_5cd004d0(this,local_c);
  param_1 = (short *)FUN_5cd01e40(this,(int)local_c,0);
  sVar3 = (*(short **)((int)this + 0x44))[7];
  if ((sVar3 == 0x40) || ((**(short **)((int)this + 0x44) == 1 && (sVar3 == 0x20)))) {
    *(undefined1 **)((int)this + 0x140) = &LAB_5cd03c50;
    if (*(LPCVOID *)((int)this + 0xf8) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0xf8));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0xf8));
      GlobalFree(pvVar5);
    }
    pcVar10 = GlobalAlloc_exref;
    pvVar5 = GlobalAlloc(0x42,*(int *)((int)this + 0xf0) << 3);
    pcVar11 = GlobalLock_exref;
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0xf8) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      param_1 = (short *)0x8007000e;
    }
    if (*(LPCVOID *)((int)this + 0x100) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x100));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x100));
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,*(int *)((int)this + 0xf0) << 3);
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0x100) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      param_1 = (short *)0x8007000e;
    }
    if (*(short *)(*(int *)((int)this + 0x44) + 2) != 2) goto LAB_5cd02292;
    if (*(LPCVOID *)((int)this + 0xfc) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0xfc));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0xfc));
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,*(int *)((int)this + 0xf0) << 3);
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0xfc) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      param_1 = (short *)0x8007000e;
    }
    if (*(LPCVOID *)((int)this + 0x104) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x104));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x104));
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,*(int *)((int)this + 0xf0) << 3);
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0x104) = pvVar6;
  }
  else {
    *(undefined1 **)((int)this + 0x140) = &LAB_5cd04070;
    if (*(LPCVOID *)((int)this + 0xf8) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0xf8));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0xf8));
      GlobalFree(pvVar5);
    }
    pcVar10 = GlobalAlloc_exref;
    pvVar5 = GlobalAlloc(0x42,*(int *)((int)this + 0xf0) << 2);
    pcVar11 = GlobalLock_exref;
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0xf8) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      param_1 = (short *)0x8007000e;
    }
    if (*(LPCVOID *)((int)this + 0x100) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x100));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x100));
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,*(int *)((int)this + 0xf0) << 2);
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0x100) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      param_1 = (short *)0x8007000e;
    }
    if (*(short *)(*(int *)((int)this + 0x44) + 2) != 2) goto LAB_5cd02292;
    if (*(LPCVOID *)((int)this + 0xfc) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0xfc));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0xfc));
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,*(int *)((int)this + 0xf0) << 2);
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0xfc) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      param_1 = (short *)0x8007000e;
    }
    if (*(LPCVOID *)((int)this + 0x104) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x104));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x104));
      GlobalFree(pvVar5);
    }
    pvVar5 = GlobalAlloc(0x42,*(int *)((int)this + 0xf0) << 2);
    pvVar6 = GlobalLock(pvVar5);
    *(LPVOID *)((int)this + 0x104) = pvVar6;
  }
  if (pvVar6 == (LPVOID)0x0) {
    param_1 = (short *)0x8007000e;
  }
LAB_5cd02292:
  DVar7 = timeGetTime();
  srand(DVar7 >> 3);
  DVar7 = timeGetTime();
  *(DWORD *)((int)this + 0x148) = (DVar7 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x44) + 4);
  *(undefined4 *)((int)this + 0x14c) = 0;
  if (*(LPCVOID *)((int)this + 0x150) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x150));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x150));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  if (DAT_5cd679f8 == 0) {
    uVar9 = *(uint *)(*(int *)((int)this + 0x44) + 4) / 100;
    *(uint *)((int)this + 0x14c) = uVar9;
    uVar4 = (*pcVar10)(0x42,uVar9 << 2);
    uVar4 = (*pcVar11)(uVar4);
    uVar9 = *(uint *)((int)this + 0x14c);
    *(undefined4 *)((int)this + 0x150) = uVar4;
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x150) + uVar8 * 4) = (float)uVar8 / (float)(int)(uVar9 - 1)
        ;
        *(float *)(*(int *)((int)this + 0x150) + uVar8 * 4) =
             *(float *)(*(int *)((int)this + 0x150) + uVar8 * 4) - _DAT_5cd5172c;
        iVar1 = uVar8 * 4;
        iVar2 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        *(float *)(*(int *)((int)this + 0x150) + iVar2) =
             *(float *)(*(int *)((int)this + 0x150) + iVar1) * _DAT_5cd51728;
        uVar9 = *(uint *)((int)this + 0x14c);
      } while (uVar8 < uVar9);
    }
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  return param_1;
}



/* Module: sfppack2.dll
   Function: FUN_5ccf2830
   Address: 5ccf2830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5ccf2830(void *this,short *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short *psVar4;
  undefined4 uVar5;
  DWORD DVar6;
  HGLOBAL pvVar7;
  LPVOID pvVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_d0 [52];
  
  *(short **)((int)this + 0x118) = param_1;
  *(undefined4 *)((int)this + 0x11c) = param_2;
  if (*param_1 == 1) {
    sVar3 = param_1[7];
    if (sVar3 == 8) {
      *(undefined1 **)((int)this + 0x48c) = &LAB_5ccf3210;
      *(undefined1 **)((int)this + 0x488) = &LAB_5ccf3390;
    }
    else if (sVar3 == 0x10) {
      *(undefined1 **)((int)this + 0x48c) = &LAB_5ccf34c0;
      *(undefined1 **)((int)this + 0x488) = &LAB_5ccf3660;
    }
    else {
      if (sVar3 != 0x20) {
        return 0x80004005;
      }
      *(undefined1 **)((int)this + 0x48c) = &LAB_5ccf3790;
      *(undefined1 **)((int)this + 0x488) = &LAB_5ccf3960;
    }
  }
  else if (param_1[7] == 0x20) {
    *(undefined1 **)((int)this + 0x48c) = &LAB_5ccf3a70;
    *(undefined1 **)((int)this + 0x488) = &LAB_5ccf3ba0;
  }
  else {
    if (param_1[7] != 0x40) {
      return 0x80004005;
    }
    *(undefined1 **)((int)this + 0x48c) = &LAB_5ccf3ca0;
    *(code **)((int)this + 0x488) = FUN_5ccf3dd0;
  }
  FUN_5ccea300(this,local_d0);
  uVar5 = FUN_5ccf26e0(this,(int)local_d0,0);
  psVar4 = *(short **)((int)this + 0x118);
  if ((psVar4[7] == 0x40) || ((*psVar4 == 1 && (psVar4[7] == 0x20)))) {
    if (psVar4[1] == 1) {
      *(code **)((int)this + 0x494) = FUN_5ccf6240;
    }
    else {
      *(code **)((int)this + 0x494) = FUN_5ccf6aa0;
    }
    *(undefined4 *)((int)this + 0x490) = 0;
  }
  else if (psVar4[1] == 1) {
    *(code **)((int)this + 0x494) = FUN_5ccf7f80;
    *(code **)((int)this + 0x490) = FUN_5ccf9080;
  }
  else {
    *(code **)((int)this + 0x494) = FUN_5ccf87b0;
    *(code **)((int)this + 0x490) = FUN_5ccf92d0;
  }
  DVar6 = timeGetTime();
  srand(DVar6 >> 3);
  DVar6 = timeGetTime();
  *(DWORD *)((int)this + 0x49c) = (DVar6 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x118) + 4);
  *(undefined4 *)((int)this + 0x4a0) = 0;
  if (*(LPCVOID *)((int)this + 0x4a4) != (LPCVOID)0x0) {
    pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x4a4));
    GlobalUnlock(pvVar7);
    pvVar7 = GlobalHandle(*(LPCVOID *)((int)this + 0x4a4));
    GlobalFree(pvVar7);
  }
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  if (DAT_5cd679f8 == 0) {
    uVar10 = *(uint *)(*(int *)((int)this + 0x118) + 4) / 100;
    *(uint *)((int)this + 0x4a0) = uVar10;
    pvVar7 = GlobalAlloc(0x42,uVar10 << 2);
    pvVar8 = GlobalLock(pvVar7);
    uVar10 = *(uint *)((int)this + 0x4a0);
    *(LPVOID *)((int)this + 0x4a4) = pvVar8;
    uVar9 = 0;
    if (uVar10 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x4a4) + uVar9 * 4) =
             (float)uVar9 / (float)(int)(uVar10 - 1);
        *(float *)(*(int *)((int)this + 0x4a4) + uVar9 * 4) =
             *(float *)(*(int *)((int)this + 0x4a4) + uVar9 * 4) - _DAT_5cd5172c;
        iVar1 = uVar9 * 4;
        iVar2 = uVar9 * 4;
        uVar9 = uVar9 + 1;
        *(float *)(*(int *)((int)this + 0x4a4) + iVar2) =
             *(float *)(*(int *)((int)this + 0x4a4) + iVar1) * _DAT_5cd51728;
        uVar10 = *(uint *)((int)this + 0x4a0);
      } while (uVar9 < uVar10);
    }
  }
  FUN_5ccf41a0((int)this);
  FUN_5ccea260(this,0x65);
  *(undefined4 *)((int)this + 0xf4) = 0;
  return uVar5;
}



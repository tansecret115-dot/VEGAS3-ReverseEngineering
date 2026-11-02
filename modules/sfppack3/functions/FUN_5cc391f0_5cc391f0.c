/* Module: sfppack3.dll
   Function: FUN_5cc391f0
   Address: 5cc391f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc391f0(void *this,short *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  DWORD DVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  uint uVar8;
  uint uVar9;
  int local_10 [4];
  
  *(short **)((int)this + 0x48) = param_1;
  *(undefined4 *)((int)this + 0x4c) = param_2;
  if (*param_1 == 1) {
    sVar3 = param_1[7];
    if (sVar3 == 8) {
      *(undefined1 **)((int)this + 0x88) = &LAB_5cc39540;
      *(undefined1 **)((int)this + 0x8c) = &LAB_5cc39570;
      *(undefined1 **)((int)this + 0x90) = &LAB_5cc395c0;
    }
    else if (sVar3 == 0x10) {
      *(undefined1 **)((int)this + 0x88) = &LAB_5cc395e0;
      *(undefined1 **)((int)this + 0x8c) = &LAB_5cc39600;
      *(undefined1 **)((int)this + 0x90) = &LAB_5cc39650;
    }
    else {
      if (sVar3 != 0x20) {
        return 0x80004005;
      }
      *(undefined1 **)((int)this + 0x88) = &LAB_5cc39670;
      *(undefined1 **)((int)this + 0x8c) = &LAB_5cc39690;
      *(undefined1 **)((int)this + 0x90) = &LAB_5cc39700;
    }
  }
  else if (param_1[7] == 0x20) {
    *(undefined1 **)((int)this + 0x88) = &LAB_5cc39720;
    *(undefined1 **)((int)this + 0x8c) = &LAB_5cc39730;
    *(undefined1 **)((int)this + 0x90) = &LAB_5cc39750;
  }
  else {
    if (param_1[7] != 0x40) {
      return 0x80004005;
    }
    *(undefined1 **)((int)this + 0x88) = &LAB_5cc39770;
    *(undefined1 **)((int)this + 0x8c) = &LAB_5cc39780;
    *(undefined1 **)((int)this + 0x90) = &LAB_5cc397a0;
  }
  FUN_5cc372d0(this,local_10);
  uVar4 = FUN_5cc39120(this,local_10,0);
  DVar5 = timeGetTime();
  srand(DVar5 >> 3);
  DVar5 = timeGetTime();
  *(DWORD *)((int)this + 0x98) = (DVar5 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x48) + 4);
  *(undefined4 *)((int)this + 0x9c) = 0;
  if (*(LPCVOID *)((int)this + 0xa0) != (LPCVOID)0x0) {
    pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xa0));
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xa0));
    GlobalFree(pvVar6);
  }
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  if (DAT_5cc982c0 == 0) {
    uVar9 = *(uint *)(*(int *)((int)this + 0x48) + 4) / 100;
    *(uint *)((int)this + 0x9c) = uVar9;
    pvVar6 = GlobalAlloc(0x42,uVar9 << 2);
    pvVar7 = GlobalLock(pvVar6);
    uVar9 = *(uint *)((int)this + 0x9c);
    *(LPVOID *)((int)this + 0xa0) = pvVar7;
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0xa0) + uVar8 * 4) = (float)uVar8 / (float)(int)(uVar9 - 1);
        *(float *)(*(int *)((int)this + 0xa0) + uVar8 * 4) =
             *(float *)(*(int *)((int)this + 0xa0) + uVar8 * 4) - _DAT_5cc87d44;
        iVar1 = uVar8 * 4;
        iVar2 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        *(float *)(*(int *)((int)this + 0xa0) + iVar2) =
             *(float *)(*(int *)((int)this + 0xa0) + iVar1) * _DAT_5cc87d40;
        uVar9 = *(uint *)((int)this + 0x9c);
      } while (uVar8 < uVar9);
    }
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  return uVar4;
}



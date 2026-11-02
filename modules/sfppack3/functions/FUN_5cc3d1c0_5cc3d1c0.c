/* Module: sfppack3.dll
   Function: FUN_5cc3d1c0
   Address: 5cc3d1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc3d1c0(void *this,short *param_1,undefined4 param_2)

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
  int local_114 [69];
  
  *(short **)((int)this + 0x14c) = param_1;
  *(undefined4 *)((int)this + 0x150) = param_2;
  if (*param_1 == 1) {
    sVar3 = param_1[7];
    if (sVar3 == 8) {
      *(undefined1 **)((int)this + 0x22e0) = &LAB_5cc3d4f0;
      *(code **)((int)this + 0x22e4) = FUN_5cc3d530;
    }
    else if (sVar3 == 0x10) {
      *(undefined1 **)((int)this + 0x22e0) = &LAB_5cc3d580;
      *(code **)((int)this + 0x22e4) = FUN_5cc3d5b0;
    }
    else {
      if (sVar3 != 0x20) {
        return 0x80004005;
      }
      *(undefined1 **)((int)this + 0x22e0) = &LAB_5cc3d610;
      *(code **)((int)this + 0x22e4) = FUN_5cc3d640;
    }
  }
  else if (param_1[7] == 0x20) {
    *(undefined1 **)((int)this + 0x22e0) = &LAB_5cc3d6a0;
    *(undefined1 **)((int)this + 0x22e4) = &LAB_5cc3d6d0;
  }
  else {
    if (param_1[7] != 0x40) {
      return 0x80004005;
    }
    *(undefined1 **)((int)this + 0x22e0) = &LAB_5cc3d700;
    *(undefined1 **)((int)this + 0x22e4) = &LAB_5cc3d730;
  }
  FUN_5cc3ae20(this,local_114);
  uVar4 = FUN_5cc3d060(this,local_114,0);
  DVar5 = timeGetTime();
  srand(DVar5 >> 3);
  DVar5 = timeGetTime();
  *(DWORD *)((int)this + 0x22ec) = (DVar5 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x14c) + 4);
  *(undefined4 *)((int)this + 0x22f0) = 0;
  if (*(LPCVOID *)((int)this + 0x22f4) != (LPCVOID)0x0) {
    pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0x22f4));
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0x22f4));
    GlobalFree(pvVar6);
  }
  *(undefined4 *)((int)this + 0x22f8) = 0;
  *(undefined4 *)((int)this + 0x22fc) = 0;
  *(undefined4 *)((int)this + 0x2300) = 0;
  if (DAT_5cc982c0 == 0) {
    uVar9 = *(uint *)(*(int *)((int)this + 0x14c) + 4) / 100;
    *(uint *)((int)this + 0x22f0) = uVar9;
    pvVar6 = GlobalAlloc(0x42,uVar9 << 2);
    pvVar7 = GlobalLock(pvVar6);
    uVar9 = *(uint *)((int)this + 0x22f0);
    *(LPVOID *)((int)this + 0x22f4) = pvVar7;
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x22f4) + uVar8 * 4) =
             (float)uVar8 / (float)(int)(uVar9 - 1);
        *(float *)(*(int *)((int)this + 0x22f4) + uVar8 * 4) =
             *(float *)(*(int *)((int)this + 0x22f4) + uVar8 * 4) - _DAT_5cc87d44;
        iVar1 = uVar8 * 4;
        iVar2 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        *(float *)(*(int *)((int)this + 0x22f4) + iVar2) =
             *(float *)(*(int *)((int)this + 0x22f4) + iVar1) * _DAT_5cc87d40;
        uVar9 = *(uint *)((int)this + 0x22f0);
      } while (uVar8 < uVar9);
    }
  }
  *(undefined4 *)((int)this + 0x138) = 0;
  return uVar4;
}



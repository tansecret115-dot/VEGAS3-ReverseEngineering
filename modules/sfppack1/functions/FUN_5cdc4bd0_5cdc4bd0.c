/* Module: sfppack1.dll
   Function: FUN_5cdc4bd0
   Address: 5cdc4bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdc4bd0(void *this,int *param_1,int param_2)

{
  double dVar1;
  uint uVar2;
  undefined4 uVar3;
  HGLOBAL pvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  float10 fVar8;
  ulonglong local_8;
  
  uVar2 = MulDiv(param_1[1],
                 (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2) *
                 *(int *)(*(int *)((int)this + 0x4c) + 4),1000);
  if (uVar2 < 2) {
    uVar2 = 2;
  }
  if (*param_1 == 0) {
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  else {
    uVar3 = ftol();
    *(undefined4 *)((int)this + 0x80) = uVar3;
  }
  local_8 = (ulonglong)*(uint *)((int)this + 0x80);
  dVar1 = (double)local_8;
  local_8 = (ulonglong)uVar2;
  if (_DAT_5ce13698 <= dVar1 / (double)local_8) {
    fVar8 = (float10)_CIpow();
    *(double *)((int)this + 0x70) = (double)fVar8;
  }
  else {
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  puVar5 = *(undefined4 **)((int)this + 0x78);
  if (puVar5 != (undefined4 *)0x0) {
    if (*(uint *)((int)this + 0x7c) == uVar2) {
      if (param_2 != 0) {
        return 0;
      }
      for (iVar6 = (uVar2 & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      return 0;
    }
    pvVar4 = GlobalHandle(puVar5);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x78));
    GlobalFree(pvVar4);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  *(uint *)((int)this + 0x7c) = uVar2;
  pvVar4 = GlobalAlloc(0x42,uVar2 << 3);
  puVar5 = GlobalLock(pvVar4);
  *(undefined4 **)((int)this + 0x78) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    for (iVar6 = (uVar2 & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    uVar2 = 0;
    puVar7 = (uint *)((int)this + 0x8c);
    do {
      puVar7[-1] = uVar2;
      uVar2 = uVar2 + 1;
      *puVar7 = (uint)(*(int *)((int)this + 0x80) + *(int *)((int)this + 0x7c)) /
                (uint)*(ushort *)(*(int *)((int)this + 0x4c) + 2);
      puVar7 = puVar7 + 2;
    } while (uVar2 < 2);
    if (_DAT_5ce12bf0 != *(double *)((int)this + 0x70)) {
      *(undefined4 *)((int)this + 0x58) = 0;
      *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x80);
      return 0;
    }
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x7c);
    return 0;
  }
  return 0x8007000e;
}



/* Module: sftrkfx1.dll
   Function: FUN_5cbb85c0
   Address: 5cbb85c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cbb85c0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  *(int *)((int)this + 0x44) = param_1;
  uVar8 = (uint)*(ushort *)(param_1 + 2);
  piVar2 = (int *)timeGetTime();
  puVar3 = FUN_5cbdf370(piVar2);
  *(undefined4 **)((int)this + 0xa0) = puVar3;
  *(undefined4 **)((int)this + 0xa4) = puVar3;
  if (*(LPCVOID *)((int)this + 0xa8) != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0xa8));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0xa8));
    GlobalFree(pvVar4);
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  if (*(int *)((int)this + 0xa8) == 0) {
    pvVar4 = GlobalAlloc(0x42,uVar8 << 4);
    pvVar5 = GlobalLock(pvVar4);
    *(LPVOID *)((int)this + 0xa8) = pvVar5;
    if (uVar8 != 0) {
      iVar6 = 0;
      do {
        iVar1 = *(int *)((int)this + 0xa8);
        *(undefined4 *)(iVar6 + 8 + iVar1) = 0;
        *(undefined4 *)(iVar6 + 0xc + iVar1) = 0;
        puVar3 = (undefined4 *)(iVar6 + *(int *)((int)this + 0xa8));
        uVar8 = uVar8 - 1;
        *puVar3 = 0;
        puVar3[1] = 0;
        iVar6 = iVar6 + 0x10;
      } while (uVar8 != 0);
    }
    if (*(int *)((int)this + 0xa8) == 0) {
      return 0x8007000e;
    }
  }
  uVar7 = FUN_5cbb8690(this);
  return uVar7;
}



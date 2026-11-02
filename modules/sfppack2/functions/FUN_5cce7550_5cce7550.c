/* Module: sfppack2.dll
   Function: FUN_5cce7550
   Address: 5cce7550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cce7550(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  int local_54 [21];
  
  *(undefined4 *)((int)this + 0x8c) = param_1;
  FUN_5cce29b0(this,local_54);
  uVar3 = FUN_5cce74e0(this,local_54,0);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)this + 0x694) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x8c) + 4);
  *(undefined4 *)((int)this + 0x698) = 0;
  if (*(LPCVOID *)((int)this + 0x69c) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x69c));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x69c));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x6a0) = 0;
  *(undefined4 *)((int)this + 0x6a4) = 0;
  *(undefined4 *)((int)this + 0x6a8) = 0;
  if (DAT_5cd679f8 == 0) {
    uVar8 = *(uint *)(*(int *)((int)this + 0x8c) + 4) / 100;
    *(uint *)((int)this + 0x698) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)this + 0x698);
    *(LPVOID *)((int)this + 0x69c) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x69c) + uVar7 * 4) = (float)uVar7 / (float)(int)(uVar8 - 1)
        ;
        *(float *)(*(int *)((int)this + 0x69c) + uVar7 * 4) =
             *(float *)(*(int *)((int)this + 0x69c) + uVar7 * 4) - _DAT_5cd5172c;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)this + 0x69c) + iVar2) =
             *(float *)(*(int *)((int)this + 0x69c) + iVar1) * _DAT_5cd51728;
        uVar8 = *(uint *)((int)this + 0x698);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  return uVar3;
}



/* Module: sfppack3.dll
   Function: FUN_5cc34d60
   Address: 5cc34d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc34d60(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_1c [7];
  
  *(undefined4 *)((int)this + 0x54) = param_1;
  FUN_5cc328c0(this,local_1c);
  uVar3 = FUN_5cc34ce0(this,local_1c,0);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)this + 0x3fc) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x54) + 4);
  *(undefined4 *)((int)this + 0x400) = 0;
  if (*(LPCVOID *)((int)this + 0x404) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x404));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x404));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  if (DAT_5cc982c0 == 0) {
    uVar8 = *(uint *)(*(int *)((int)this + 0x54) + 4) / 100;
    *(uint *)((int)this + 0x400) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)this + 0x400);
    *(LPVOID *)((int)this + 0x404) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x404) + uVar7 * 4) = (float)uVar7 / (float)(int)(uVar8 - 1)
        ;
        *(float *)(*(int *)((int)this + 0x404) + uVar7 * 4) =
             *(float *)(*(int *)((int)this + 0x404) + uVar7 * 4) - _DAT_5cc87d44;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)this + 0x404) + iVar2) =
             *(float *)(*(int *)((int)this + 0x404) + iVar1) * _DAT_5cc87d40;
        uVar8 = *(uint *)((int)this + 0x400);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  return uVar3;
}



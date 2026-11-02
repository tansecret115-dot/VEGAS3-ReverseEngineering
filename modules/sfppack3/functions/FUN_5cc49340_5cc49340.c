/* Module: sfppack3.dll
   Function: FUN_5cc49340
   Address: 5cc49340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc49340(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  int local_124 [73];
  
  *(undefined4 *)((int)this + 0x160) = param_1;
  FUN_5cc46870(this,local_124);
  uVar3 = FUN_5cc490f0(this,local_124,0);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)this + 0x21f4) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x160) + 4);
  *(undefined4 *)((int)this + 0x21f8) = 0;
  if (*(LPCVOID *)((int)this + 0x21fc) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x21fc));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x21fc));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x2200) = 0;
  *(undefined4 *)((int)this + 0x2204) = 0;
  *(undefined4 *)((int)this + 0x2208) = 0;
  if (DAT_5cc982c0 == 0) {
    uVar8 = *(uint *)(*(int *)((int)this + 0x160) + 4) / 100;
    *(uint *)((int)this + 0x21f8) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)this + 0x21f8);
    *(LPVOID *)((int)this + 0x21fc) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x21fc) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)this + 0x21fc) + uVar7 * 4) =
             *(float *)(*(int *)((int)this + 0x21fc) + uVar7 * 4) - _DAT_5cc87d44;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)this + 0x21fc) + iVar2) =
             *(float *)(*(int *)((int)this + 0x21fc) + iVar1) * _DAT_5cc87d40;
        uVar8 = *(uint *)((int)this + 0x21f8);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)this + 0x14c) = 0;
  return uVar3;
}



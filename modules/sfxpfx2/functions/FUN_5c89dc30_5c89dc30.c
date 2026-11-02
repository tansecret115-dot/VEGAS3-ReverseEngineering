/* Module: sfxpfx2.dll
   Function: FUN_5c89dc30
   Address: 5c89dc30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c89dc30(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  int local_c [3];
  
  if (param_1 != 0) {
    *(int *)((int)this + 0x44) = param_1;
  }
  FUN_5c89c000(this,local_c);
  iVar3 = FUN_5c89dab0(this,local_c,0);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)this + 0x2f0) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x44) + 4);
  *(undefined4 *)((int)this + 0x2f4) = 0;
  if (*(LPCVOID *)((int)this + 0x2f8) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x2f8));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x2f8));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  if (DAT_5c8e93b8 == 0) {
    uVar8 = *(uint *)(*(int *)((int)this + 0x44) + 4) / 100;
    *(uint *)((int)this + 0x2f4) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)this + 0x2f4);
    *(LPVOID *)((int)this + 0x2f8) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x2f8) + uVar7 * 4) = (float)uVar7 / (float)(int)(uVar8 - 1)
        ;
        *(float *)(*(int *)((int)this + 0x2f8) + uVar7 * 4) =
             *(float *)(*(int *)((int)this + 0x2f8) + uVar7 * 4) - _DAT_5c8dc93c;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)this + 0x2f8) + iVar2) =
             *(float *)(*(int *)((int)this + 0x2f8) + iVar1) * _DAT_5c8dc938;
        uVar8 = *(uint *)((int)this + 0x2f4);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  return iVar3;
}



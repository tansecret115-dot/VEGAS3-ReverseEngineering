/* Module: sfxpfx1.dll
   Function: FUN_5c945420
   Address: 5c945420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c945420(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_20 [8];
  
  *(undefined4 *)((int)this + 0x58) = param_1;
  FUN_5c943200(this,local_20);
  uVar3 = FUN_5c9453a0(this,local_20,0);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)this + 0x404) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x58) + 4);
  *(undefined4 *)((int)this + 0x408) = 0;
  if (*(LPCVOID *)((int)this + 0x40c) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x40c));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x40c));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  if (DAT_5c998760 == 0) {
    uVar8 = *(uint *)(*(int *)((int)this + 0x58) + 4) / 100;
    *(uint *)((int)this + 0x408) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)this + 0x408);
    *(LPVOID *)((int)this + 0x40c) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x40c) + uVar7 * 4) = (float)uVar7 / (float)(int)(uVar8 - 1)
        ;
        *(float *)(*(int *)((int)this + 0x40c) + uVar7 * 4) =
             *(float *)(*(int *)((int)this + 0x40c) + uVar7 * 4) - _DAT_5c98b9b4;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)this + 0x40c) + iVar2) =
             *(float *)(*(int *)((int)this + 0x40c) + iVar1) * _DAT_5c98b9b0;
        uVar8 = *(uint *)((int)this + 0x408);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  return uVar3;
}



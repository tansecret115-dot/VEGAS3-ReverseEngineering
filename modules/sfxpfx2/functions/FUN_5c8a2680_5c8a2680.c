/* Module: sfxpfx2.dll
   Function: FUN_5c8a2680
   Address: 5c8a2680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c8a2680(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  int local_30 [12];
  
  *(undefined4 *)((int)this + 0x68) = param_1;
  FUN_5c89fa10(this,local_30);
  uVar3 = FUN_5c8a2610(this,local_30,0);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)this + 0x51c) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x68) + 4);
  *(undefined4 *)((int)this + 0x520) = 0;
  if (*(LPCVOID *)((int)this + 0x524) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x524));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x524));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined4 *)((int)this + 0x52c) = 0;
  *(undefined4 *)((int)this + 0x530) = 0;
  if (DAT_5c8e93b8 == 0) {
    uVar8 = *(uint *)(*(int *)((int)this + 0x68) + 4) / 100;
    *(uint *)((int)this + 0x520) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)this + 0x520);
    *(LPVOID *)((int)this + 0x524) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x524) + uVar7 * 4) = (float)uVar7 / (float)(int)(uVar8 - 1)
        ;
        *(float *)(*(int *)((int)this + 0x524) + uVar7 * 4) =
             *(float *)(*(int *)((int)this + 0x524) + uVar7 * 4) - _DAT_5c8dc93c;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)this + 0x524) + iVar2) =
             *(float *)(*(int *)((int)this + 0x524) + iVar1) * _DAT_5c8dc938;
        uVar8 = *(uint *)((int)this + 0x520);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  return uVar3;
}



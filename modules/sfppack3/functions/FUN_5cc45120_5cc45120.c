/* Module: sfppack3.dll
   Function: FUN_5cc45120
   Address: 5cc45120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc45120(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  int local_228 [138];
  
  *(undefined4 *)((int)this + 0x260) = param_1;
  FUN_5cc41e20(this,local_228);
  uVar3 = FUN_5cc44f20(this,local_228,0);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)this + 0x384c) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x260) + 4);
  *(undefined4 *)((int)this + 0x3850) = 0;
  if (*(LPCVOID *)((int)this + 0x3854) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x3854));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x3854));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x3858) = 0;
  *(undefined4 *)((int)this + 0x385c) = 0;
  *(undefined4 *)((int)this + 0x3860) = 0;
  if (DAT_5cc982c0 == 0) {
    uVar8 = *(uint *)(*(int *)((int)this + 0x260) + 4) / 100;
    *(uint *)((int)this + 0x3850) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)this + 0x3850);
    *(LPVOID *)((int)this + 0x3854) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x3854) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)this + 0x3854) + uVar7 * 4) =
             *(float *)(*(int *)((int)this + 0x3854) + uVar7 * 4) - _DAT_5cc87d44;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)this + 0x3854) + iVar2) =
             *(float *)(*(int *)((int)this + 0x3854) + iVar1) * _DAT_5cc87d40;
        uVar8 = *(uint *)((int)this + 0x3850);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)this + 0x24c) = 0;
  return uVar3;
}



/* Module: sfxpfx1.dll
   Function: FUN_5c94a1c0
   Address: 5c94a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5c94a1c0(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_30 [12];
  
  *(undefined4 *)((int)param_1 + 0x50) = 1;
  FUN_5c9476d0(param_1,local_30);
  uVar3 = FUN_5c9497d0(param_1,(int)local_30);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x48c) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 0x6c) + 4);
  *(undefined4 *)((int)param_1 + 0x490) = 0;
  if (*(LPCVOID *)((int)param_1 + 0x494) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x494));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x494));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)param_1 + 0x498) = 0;
  *(undefined4 *)((int)param_1 + 0x49c) = 0;
  *(undefined4 *)((int)param_1 + 0x4a0) = 0;
  if (DAT_5c998760 == 0) {
    uVar8 = *(uint *)(*(int *)((int)param_1 + 0x6c) + 4) / 100;
    *(uint *)((int)param_1 + 0x490) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)param_1 + 0x490);
    *(LPVOID *)((int)param_1 + 0x494) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)param_1 + 0x494) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)param_1 + 0x494) + uVar7 * 4) =
             *(float *)(*(int *)((int)param_1 + 0x494) + uVar7 * 4) - _DAT_5c98b9b4;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)param_1 + 0x494) + iVar2) =
             *(float *)(*(int *)((int)param_1 + 0x494) + iVar1) * _DAT_5c98b9b0;
        uVar8 = *(uint *)((int)param_1 + 0x490);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  return uVar3;
}



/* Module: sfxpfx1.dll
   Function: FUN_5c951c60
   Address: 5c951c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5c951c60(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  int local_10 [4];
  
  FUN_5c94ff60(param_1,local_10);
  uVar3 = FUN_5c951a00(param_1,local_10);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)param_1 + 0xac) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 0x48) + 4);
  *(undefined4 *)((int)param_1 + 0xb0) = 0;
  if (*(LPCVOID *)((int)param_1 + 0xb4) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0xb4));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0xb4));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)param_1 + 0xb8) = 0;
  *(undefined4 *)((int)param_1 + 0xbc) = 0;
  *(undefined4 *)((int)param_1 + 0xc0) = 0;
  if (DAT_5c998760 == 0) {
    uVar8 = *(uint *)(*(int *)((int)param_1 + 0x48) + 4) / 100;
    *(uint *)((int)param_1 + 0xb0) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)param_1 + 0xb0);
    *(LPVOID *)((int)param_1 + 0xb4) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)param_1 + 0xb4) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)param_1 + 0xb4) + uVar7 * 4) =
             *(float *)(*(int *)((int)param_1 + 0xb4) + uVar7 * 4) - _DAT_5c98b9b4;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)param_1 + 0xb4) + iVar2) =
             *(float *)(*(int *)((int)param_1 + 0xb4) + iVar1) * _DAT_5c98b9b0;
        uVar8 = *(uint *)((int)param_1 + 0xb0);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  return uVar3;
}



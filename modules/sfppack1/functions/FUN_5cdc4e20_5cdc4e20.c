/* Module: sfppack1.dll
   Function: FUN_5cdc4e20
   Address: 5cdc4e20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cdc4e20(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  int local_14 [5];
  
  FUN_5cdc2fd0(param_1,local_14);
  uVar3 = FUN_5cdc4dc0(param_1,local_14,0);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x9c) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 0x4c) + 4);
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  if (*(LPCVOID *)((int)param_1 + 0xa4) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0xa4));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0xa4));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)((int)param_1 + 0xb0) = 0;
  if (DAT_5ce237e8 == 0) {
    uVar8 = *(uint *)(*(int *)((int)param_1 + 0x4c) + 4) / 100;
    *(uint *)((int)param_1 + 0xa0) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)param_1 + 0xa0);
    *(LPVOID *)((int)param_1 + 0xa4) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)param_1 + 0xa4) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)param_1 + 0xa4) + uVar7 * 4) =
             *(float *)(*(int *)((int)param_1 + 0xa4) + uVar7 * 4) - _DAT_5ce13230;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)param_1 + 0xa4) + iVar2) =
             *(float *)(*(int *)((int)param_1 + 0xa4) + iVar1) * _DAT_5ce1322c;
        uVar8 = *(uint *)((int)param_1 + 0xa0);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  return uVar3;
}



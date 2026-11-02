/* Module: sfppack1.dll
   Function: FUN_5cdd1930
   Address: 5cdd1930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cdd1930(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  int local_2c [11];
  
  *(undefined4 *)((int)param_1 + 0x4c) = 1;
  FUN_5cdce840(param_1,local_2c);
  uVar3 = FUN_5cdd0ed0(param_1,local_2c);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x494) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 0x68) + 4);
  *(undefined4 *)((int)param_1 + 0x498) = 0;
  if (*(LPCVOID *)((int)param_1 + 0x49c) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x49c));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x49c));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)param_1 + 0x4a0) = 0;
  *(undefined4 *)((int)param_1 + 0x4a4) = 0;
  *(undefined4 *)((int)param_1 + 0x4a8) = 0;
  if (DAT_5ce237e8 == 0) {
    uVar8 = *(uint *)(*(int *)((int)param_1 + 0x68) + 4) / 100;
    *(uint *)((int)param_1 + 0x498) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)param_1 + 0x498);
    *(LPVOID *)((int)param_1 + 0x49c) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)param_1 + 0x49c) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)param_1 + 0x49c) + uVar7 * 4) =
             *(float *)(*(int *)((int)param_1 + 0x49c) + uVar7 * 4) - _DAT_5ce13230;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)param_1 + 0x49c) + iVar2) =
             *(float *)(*(int *)((int)param_1 + 0x49c) + iVar1) * _DAT_5ce1322c;
        uVar8 = *(uint *)((int)param_1 + 0x498);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)((int)param_1 + 0x74) = 0;
  return uVar3;
}



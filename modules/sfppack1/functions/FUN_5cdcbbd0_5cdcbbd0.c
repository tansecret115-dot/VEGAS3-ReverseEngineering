/* Module: sfppack1.dll
   Function: FUN_5cdcbbd0
   Address: 5cdcbbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_5cdcbbd0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  int local_8c [35];
  
  FUN_5cdc69f0(param_1,local_8c);
  iVar3 = FUN_5cdcba70(param_1,local_8c);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x28c) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 200) + 4);
  *(undefined4 *)((int)param_1 + 0x290) = 0;
  if (*(LPCVOID *)((int)param_1 + 0x294) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x294));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x294));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)param_1 + 0x298) = 0;
  *(undefined4 *)((int)param_1 + 0x29c) = 0;
  *(undefined4 *)((int)param_1 + 0x2a0) = 0;
  if (DAT_5ce237e8 == 0) {
    uVar8 = *(uint *)(*(int *)((int)param_1 + 200) + 4) / 100;
    *(uint *)((int)param_1 + 0x290) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)param_1 + 0x290);
    *(LPVOID *)((int)param_1 + 0x294) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)param_1 + 0x294) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)param_1 + 0x294) + uVar7 * 4) =
             *(float *)(*(int *)((int)param_1 + 0x294) + uVar7 * 4) - _DAT_5ce13230;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)param_1 + 0x294) + iVar2) =
             *(float *)(*(int *)((int)param_1 + 0x294) + iVar1) * _DAT_5ce1322c;
        uVar8 = *(uint *)((int)param_1 + 0x290);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)param_1 + 0xb4) = 0;
  *(undefined4 *)((int)param_1 + 0xd4) = 0;
  return iVar3;
}



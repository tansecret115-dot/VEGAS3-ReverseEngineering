/* Module: sfppack1.dll
   Function: FUN_5cdb6230
   Address: 5cdb6230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cdb6230(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  double local_20 [4];
  
  *(undefined4 *)((int)param_1 + 0x44) = 1;
  FUN_5cdb3080(param_1,(undefined4 *)local_20);
  uVar3 = FUN_5cdb5bb0(param_1,local_20);
  *(undefined4 *)((int)param_1 + 0xdc) = 1;
  *(undefined4 *)((int)param_1 + 0x100) = 0;
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x114) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 0x60) + 4);
  *(undefined4 *)((int)param_1 + 0x118) = 0;
  if (*(LPCVOID *)((int)param_1 + 0x11c) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x11c));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x11c));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)param_1 + 0x120) = 0;
  *(undefined4 *)((int)param_1 + 0x124) = 0;
  *(undefined4 *)((int)param_1 + 0x128) = 0;
  if (DAT_5ce237e8 == 0) {
    uVar8 = *(uint *)(*(int *)((int)param_1 + 0x60) + 4) / 100;
    *(uint *)((int)param_1 + 0x118) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)param_1 + 0x118);
    *(LPVOID *)((int)param_1 + 0x11c) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)param_1 + 0x11c) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)param_1 + 0x11c) + uVar7 * 4) =
             *(float *)(*(int *)((int)param_1 + 0x11c) + uVar7 * 4) - _DAT_5ce13230;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)param_1 + 0x11c) + iVar2) =
             *(float *)(*(int *)((int)param_1 + 0x11c) + iVar1) * _DAT_5ce1322c;
        uVar8 = *(uint *)((int)param_1 + 0x118);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  return uVar3;
}



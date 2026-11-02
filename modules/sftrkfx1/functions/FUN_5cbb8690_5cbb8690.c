/* Module: sftrkfx1.dll
   Function: FUN_5cbb8690
   Address: 5cbb8690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cbb8690(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_c [3];
  
  FUN_5cbb7bf0(param_1,local_c);
  uVar3 = FUN_5cbb83b0(param_1,local_c,0);
  DVar4 = timeGetTime();
  srand(DVar4 >> 3);
  DVar4 = timeGetTime();
  *(DWORD *)((int)param_1 + 0xec) = (DVar4 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 0x44) + 4);
  *(undefined4 *)((int)param_1 + 0xf0) = 0;
  if (*(LPCVOID *)((int)param_1 + 0xf4) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0xf4));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0xf4));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)param_1 + 0xf8) = 0;
  *(undefined4 *)((int)param_1 + 0xfc) = 0;
  *(undefined4 *)((int)param_1 + 0x100) = 0;
  if (*(int *)((int)param_1 + 0xe8) != 0) {
    uVar8 = *(uint *)(*(int *)((int)param_1 + 0x44) + 4) / 100;
    *(uint *)((int)param_1 + 0xf0) = uVar8;
    pvVar5 = GlobalAlloc(0x42,uVar8 << 2);
    pvVar6 = GlobalLock(pvVar5);
    uVar8 = *(uint *)((int)param_1 + 0xf0);
    *(LPVOID *)((int)param_1 + 0xf4) = pvVar6;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        *(float *)(*(int *)((int)param_1 + 0xf4) + uVar7 * 4) =
             (float)uVar7 / (float)(int)(uVar8 - 1);
        *(float *)(*(int *)((int)param_1 + 0xf4) + uVar7 * 4) =
             *(float *)(*(int *)((int)param_1 + 0xf4) + uVar7 * 4) - _DAT_5cc04b74;
        iVar1 = uVar7 * 4;
        iVar2 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(float *)(*(int *)((int)param_1 + 0xf4) + iVar2) =
             *(float *)(*(int *)((int)param_1 + 0xf4) + iVar1) * _DAT_5cc04b70;
        uVar8 = *(uint *)((int)param_1 + 0xf0);
      } while (uVar7 < uVar8);
    }
  }
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  return uVar3;
}



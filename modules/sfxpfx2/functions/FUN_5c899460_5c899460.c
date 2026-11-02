/* Module: sfxpfx2.dll
   Function: FUN_5c899460
   Address: 5c899460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_5c899460(void *param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_20;
  undefined4 local_10 [4];
  
  local_20 = 0;
  puVar9 = (undefined4 *)((int)param_1 + 0x1c8);
  puVar10 = (undefined4 *)((int)param_1 + 0x1ac);
  while( true ) {
    if ((LPCVOID)*puVar10 != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle((LPCVOID)*puVar10);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle((LPCVOID)*puVar10);
      GlobalFree(pvVar3);
    }
    pvVar3 = GlobalAlloc(0x42,52000);
    pvVar4 = GlobalLock(pvVar3);
    *puVar10 = pvVar4;
    if (pvVar4 == (LPVOID)0x0) break;
    puVar10[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar10[0xd] = 0;
    local_20 = local_20 + 1;
    puVar9 = puVar9 + 2;
    puVar10 = puVar10 + 1;
    if (2 < local_20) {
      *(undefined4 *)((int)param_1 + 0x30) = 1;
      FUN_5c897530(param_1,local_10);
      iVar5 = FUN_5c899280(param_1,local_10);
      DVar6 = timeGetTime();
      srand(DVar6 >> 3);
      DVar6 = timeGetTime();
      *(DWORD *)((int)param_1 + 0x254) =
           (DVar6 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 0x4c) + 4);
      *(undefined4 *)((int)param_1 + 600) = 0;
      if (*(LPCVOID *)((int)param_1 + 0x25c) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x25c));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x25c));
        GlobalFree(pvVar3);
      }
      *(undefined4 *)((int)param_1 + 0x260) = 0;
      *(undefined4 *)((int)param_1 + 0x264) = 0;
      *(undefined4 *)((int)param_1 + 0x268) = 0;
      if (DAT_5c8e93b8 == 0) {
        uVar8 = *(uint *)(*(int *)((int)param_1 + 0x4c) + 4) / 100;
        *(uint *)((int)param_1 + 600) = uVar8;
        pvVar3 = GlobalAlloc(0x42,uVar8 << 2);
        pvVar4 = GlobalLock(pvVar3);
        uVar8 = *(uint *)((int)param_1 + 600);
        *(LPVOID *)((int)param_1 + 0x25c) = pvVar4;
        uVar7 = 0;
        if (uVar8 != 0) {
          do {
            *(float *)(*(int *)((int)param_1 + 0x25c) + uVar7 * 4) =
                 (float)uVar7 / (float)(int)(uVar8 - 1);
            *(float *)(*(int *)((int)param_1 + 0x25c) + uVar7 * 4) =
                 *(float *)(*(int *)((int)param_1 + 0x25c) + uVar7 * 4) - _DAT_5c8dc93c;
            iVar1 = uVar7 * 4;
            iVar2 = uVar7 * 4;
            uVar7 = uVar7 + 1;
            *(float *)(*(int *)((int)param_1 + 0x25c) + iVar2) =
                 *(float *)(*(int *)((int)param_1 + 0x25c) + iVar1) * _DAT_5c8dc938;
            uVar8 = *(uint *)((int)param_1 + 600);
          } while (uVar7 < uVar8);
        }
      }
      *(undefined4 *)((int)param_1 + 0x38) = 0;
      return iVar5;
    }
  }
  return -0x7ff8fff2;
}



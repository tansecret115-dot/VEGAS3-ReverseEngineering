/* Module: sfppack1.dll
   Function: FUN_5cdd6ed0
   Address: 5cdd6ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_5cdd6ed0(void *param_1)

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
  int local_40;
  int local_30 [12];
  
  local_40 = 0;
  puVar9 = (undefined4 *)((int)param_1 + 0x1d8);
  puVar10 = (undefined4 *)((int)param_1 + 0x1bc);
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
    local_40 = local_40 + 1;
    puVar9 = puVar9 + 2;
    puVar10 = puVar10 + 1;
    if (2 < local_40) {
      *(undefined4 *)((int)param_1 + 0x50) = 1;
      FUN_5cdd43d0(param_1,local_30);
      iVar5 = FUN_5cdd6c60(param_1,local_30);
      DVar6 = timeGetTime();
      srand(DVar6 >> 3);
      DVar6 = timeGetTime();
      *(DWORD *)((int)param_1 + 0x264) =
           (DVar6 >> 3 & 1) * *(int *)(*(int *)((int)param_1 + 0x6c) + 4);
      *(undefined4 *)((int)param_1 + 0x268) = 0;
      if (*(LPCVOID *)((int)param_1 + 0x26c) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x26c));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x26c));
        GlobalFree(pvVar3);
      }
      *(undefined4 *)((int)param_1 + 0x270) = 0;
      *(undefined4 *)((int)param_1 + 0x274) = 0;
      *(undefined4 *)((int)param_1 + 0x278) = 0;
      if (DAT_5ce237e8 == 0) {
        uVar8 = *(uint *)(*(int *)((int)param_1 + 0x6c) + 4) / 100;
        *(uint *)((int)param_1 + 0x268) = uVar8;
        pvVar3 = GlobalAlloc(0x42,uVar8 << 2);
        pvVar4 = GlobalLock(pvVar3);
        uVar8 = *(uint *)((int)param_1 + 0x268);
        *(LPVOID *)((int)param_1 + 0x26c) = pvVar4;
        uVar7 = 0;
        if (uVar8 != 0) {
          do {
            *(float *)(*(int *)((int)param_1 + 0x26c) + uVar7 * 4) =
                 (float)uVar7 / (float)(int)(uVar8 - 1);
            *(float *)(*(int *)((int)param_1 + 0x26c) + uVar7 * 4) =
                 *(float *)(*(int *)((int)param_1 + 0x26c) + uVar7 * 4) - _DAT_5ce13230;
            iVar1 = uVar7 * 4;
            iVar2 = uVar7 * 4;
            uVar7 = uVar7 + 1;
            *(float *)(*(int *)((int)param_1 + 0x26c) + iVar2) =
                 *(float *)(*(int *)((int)param_1 + 0x26c) + iVar1) * _DAT_5ce1322c;
            uVar8 = *(uint *)((int)param_1 + 0x268);
          } while (uVar7 < uVar8);
        }
      }
      *(undefined4 *)((int)param_1 + 0x58) = 0;
      return iVar5;
    }
  }
  return -0x7ff8fff2;
}



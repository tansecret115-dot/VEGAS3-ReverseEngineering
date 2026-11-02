/* Module: vegas30.exe
   Function: FUN_005890e0
   Address: 005890e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005890e0(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pMem;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_c;
  
  if ((*(SIZE_T *)(param_1 + 0x34) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    pvVar1 = GlobalAlloc(0x42,*(SIZE_T *)(param_1 + 0x34));
    pMem = GlobalLock(pvVar1);
    if (pMem != (LPVOID)0x0) {
      piVar3 = *(int **)(param_1 + 0x10);
      iVar6 = 0;
      local_c = 0;
      if (0 < piVar3[1]) {
        do {
          iVar2 = *(int *)(*piVar3 + iVar6 * 4);
          uVar5 = *(uint *)(iVar2 + 0x10);
          puVar7 = *(undefined4 **)(iVar2 + 4);
          puVar8 = (undefined4 *)(local_c + (int)pMem);
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          iVar2 = *(int *)(**(int **)(param_1 + 0x10) + iVar6 * 4);
          uVar5 = *(uint *)(iVar2 + 0x10);
          puVar7 = (undefined4 *)(local_c + *(int *)(param_1 + 0x30));
          puVar8 = *(undefined4 **)(iVar2 + 4);
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          iVar2 = (**(code **)(**(int **)(**(int **)(param_1 + 0x10) + iVar6 * 4) + 0x14))
                            (local_c + *(int *)(param_1 + 0x30),pMem);
          if (iVar2 == 0) {
            iVar2 = *(int *)(**(int **)(param_1 + 0x10) + iVar6 * 4);
            uVar5 = *(uint *)(iVar2 + 0x10);
            puVar7 = (undefined4 *)(local_c + (int)pMem);
            puVar8 = *(undefined4 **)(iVar2 + 4);
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
          }
          piVar3 = *(int **)(param_1 + 0x10);
          local_c = local_c + *(int *)(*(int *)(*piVar3 + iVar6 * 4) + 0x10);
          iVar6 = iVar6 + 1;
        } while (iVar6 < piVar3[1]);
      }
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
  }
  return;
}



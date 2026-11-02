/* Module: sftrans1.dll
   Function: FUN_005441b0
   Address: 005441b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005441b0(int param_1)

{
  undefined4 *puVar1;
  LPCVOID pMem;
  int *piVar2;
  HGLOBAL pvVar3;
  int local_4;
  
  if (*(void **)(param_1 + 0x8c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(void **)(param_1 + 0x94) != (void *)0x0) {
    free(*(void **)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  piVar2 = *(int **)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (piVar2 != (int *)0x0) {
    local_4 = 0;
    if (0 < *piVar2) {
      do {
        puVar1 = *(undefined4 **)(piVar2[2] + local_4 * 4);
        if ((LPCVOID)*puVar1 != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle((LPCVOID)*puVar1);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)*puVar1);
          GlobalFree(pvVar3);
        }
        pMem = (LPCVOID)puVar1[2];
        if (pMem != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pMem);
          GlobalFree(pvVar3);
          puVar1[2] = 0;
        }
        puVar1[3] = 0;
        piVar2 = *(int **)(param_1 + 0xa0);
        local_4 = local_4 + 1;
      } while (local_4 < *piVar2);
    }
    FUN_004dd670(*(undefined4 *)(param_1 + 0xa0));
  }
  return 0;
}



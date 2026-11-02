/* Module: sfpagepeel.dll
   Function: FUN_00401fd0
   Address: 00401fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401fd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *pMem;
  HGLOBAL pvVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_1 != (int *)0x0) {
    piVar5 = (int *)param_1[4];
    if (piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      while (iVar1 != 0) {
        piVar2 = (int *)piVar5[4];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        piVar5[4] = 0;
        (*(code *)piVar5[8])(0);
        if (*param_1 == 100) {
          piVar5 = piVar5 + 7;
        }
        else {
          piVar5 = piVar5 + 9;
        }
        iVar1 = *piVar5;
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
    pMem = (undefined4 *)param_1[0x20];
    while (pMem != (undefined4 *)0x0) {
      (*(code *)*pMem)(pMem[1]);
      puVar3 = (undefined4 *)pMem[2];
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      pMem = puVar3;
    }
    if ((param_1[6] != 0) && ((char)param_1[0x1b] != '\0')) {
      if (param_1[0x1e] != 0) {
        uVar6 = 0;
        do {
          HeapDestroy(*(HANDLE *)(param_1[0x1e] + uVar6 * 4));
          uVar6 = uVar6 + 1;
        } while (uVar6 <= (uint)param_1[0x1d]);
      }
      HeapDestroy((HANDLE)param_1[6]);
    }
    return 0;
  }
  return 0x80070057;
}



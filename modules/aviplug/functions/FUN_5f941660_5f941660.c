/* Module: aviplug.dll
   Function: FUN_5f941660
   Address: 5f941660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f941660(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *pMem;
  HGLOBAL pvVar4;
  int *pMem_00;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_5f942f30((int)param_1);
    if ((HANDLE)param_1[0x19c] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[0x19c]);
      param_1[0x19c] = 0;
    }
    FUN_5f98fd80((int)(param_1 + 8));
    FUN_5f98fd80((int)(param_1 + 0x11));
    if (param_1[0x18a] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x184));
      pMem_00 = (int *)param_1[0x182];
      if (param_1 + 0x182 != (int *)param_1[0x182]) {
        do {
          FUN_5f9402f0(*param_1,(LPVOID)pMem_00[2]);
          piVar2 = (int *)*pMem_00;
          pvVar4 = GlobalHandle(pMem_00);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(pMem_00);
          GlobalFree(pvVar4);
          pMem_00 = piVar2;
        } while (param_1 + 0x182 != piVar2);
      }
      puVar1 = param_1 + 0x182;
      param_1[0x183] = puVar1;
      *puVar1 = puVar1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x184));
    }
    if (param_1[0x195] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 399));
      puVar1 = param_1 + 0x18d;
      pMem = (undefined4 *)param_1[0x18d];
      while (puVar1 != pMem) {
        puVar3 = (undefined4 *)*pMem;
        pvVar4 = GlobalHandle(pMem);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pMem);
        GlobalFree(pvVar4);
        pMem = puVar3;
      }
      param_1[0x18e] = puVar1;
      *puVar1 = puVar1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 399));
    }
    if (param_1[1] != 0) {
      FUN_5f93e510((undefined4 *)*param_1);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    pvVar4 = GlobalHandle(param_1);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(param_1);
    GlobalFree(pvVar4);
  }
  return;
}



/* Module: aviplug.dll
   Function: FUN_5f9623f0
   Address: 5f9623f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9623f0(DWORD *param_1)

{
  int iVar1;
  undefined4 *pMem;
  HGLOBAL pvVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != (DWORD *)0x0) {
    if (*param_1 != 0) {
      FUN_5f93f330(*param_1);
      FUN_5f93e510((undefined4 *)*param_1);
      *param_1 = 0;
      if (((param_1[0x77] != 0) && (param_1[0x2d] == 0)) && (param_1[0x2f] != 0)) {
        FUN_5f962270((uint)param_1);
      }
    }
    if (((param_1[0x34] == 0) && (param_1[0x35] == 0)) && (param_1[0x2f] != 0)) {
      DeleteFileA((LPCSTR)(param_1 + 0x36));
    }
    if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
      FUN_5f940a40((undefined4 *)param_1[0x32]);
      param_1[0x32] = 0;
    }
    if ((int *)param_1[1] != (int *)0x0) {
      iVar1 = *(int *)param_1[1];
      if (0 < iVar1) {
        do {
          pMem = *(undefined4 **)(*(int *)(param_1[1] + 8) + iVar3 * 4);
          if (pMem != (undefined4 *)0x0) {
            FUN_5f961ad0(pMem);
            pvVar2 = GlobalHandle(pMem);
            GlobalUnlock(pvVar2);
            pvVar2 = GlobalHandle(pMem);
            GlobalFree(pvVar2);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
      FUN_5f9796e0((int *)param_1[1]);
      param_1[1] = 0;
    }
    FUN_5f9621f0((int)param_1);
    if ((LPCVOID)param_1[0x77] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x77]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x77]);
      GlobalFree(pvVar2);
      param_1[0x77] = 0;
    }
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
  }
  return;
}



/* Module: sfcdi.dll
   Function: FUN_5bf46aa0
   Address: 5bf46aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf46aa0(LPCVOID param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  
  pMem = param_1;
  if ((param_1 != (LPCVOID)0xffffffff) && (param_1 != (LPCVOID)0x0)) {
    if (*(HANDLE *)((int)param_1 + 4) != (HANDLE)0xffffffff) {
      CloseHandle(*(HANDLE *)((int)param_1 + 4));
    }
    puVar2 = (undefined4 *)((int)param_1 + 0x24);
    param_1 = (LPCVOID)0x4;
    do {
      if ((LPCVOID)*puVar2 != (LPCVOID)0x0) {
        pvVar1 = GlobalHandle((LPCVOID)*puVar2);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle((LPCVOID)*puVar2);
        GlobalFree(pvVar1);
      }
      if ((HANDLE)puVar2[-4] != (HANDLE)0x0) {
        CloseHandle((HANDLE)puVar2[-4]);
      }
      puVar2 = puVar2 + 1;
      param_1 = (LPCVOID)((int)param_1 + -1);
    } while (param_1 != (LPCVOID)0x0);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    return 0;
  }
  return 0x80070057;
}



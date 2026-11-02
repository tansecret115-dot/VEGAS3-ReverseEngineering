/* Module: vegas30k.dll
   Function: SfCdiCloseFileLookaside
   Address: 01084df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiCloseFileLookaside(void *) */

long SfCdiCloseFileLookaside(void *param_1)

{
  void *pMem;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  
                    /* 0x84df0  293  ?SfCdiCloseFileLookaside@@YGJPAX@Z */
  pMem = param_1;
  if ((param_1 != (void *)0xffffffff) && (param_1 != (void *)0x0)) {
    if (*(HANDLE *)((int)param_1 + 4) != (HANDLE)0xffffffff) {
      CloseHandle(*(HANDLE *)((int)param_1 + 4));
    }
    puVar2 = (undefined4 *)((int)param_1 + 0x24);
    param_1 = &DAT_00000004;
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
      param_1 = (void *)((int)param_1 + -1);
    } while (param_1 != (void *)0x0);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    return 0;
  }
  return -0x7ff8ffa9;
}



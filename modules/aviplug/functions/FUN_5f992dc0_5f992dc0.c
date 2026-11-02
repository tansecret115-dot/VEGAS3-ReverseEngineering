/* Module: aviplug.dll
   Function: FUN_5f992dc0
   Address: 5f992dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f992dc0(LPCVOID param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = 0;
  if (param_1 != (LPCVOID)0x0) {
    if (DAT_5f9f5c44 != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(DAT_5f9f5c44);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(DAT_5f9f5c44);
      GlobalFree(pvVar1);
      DAT_5f9f5c40 = 0;
      DAT_5f9f5c44 = (LPCVOID)0x0;
    }
    if (0 < *(int *)((int)param_1 + 4)) {
      do {
        if ((*(int *)((int)param_1 + 0x1d68) != 0) &&
           (pMem = *(LPCVOID *)(*(int *)((int)param_1 + 0x1d68) + iVar2 * 4), pMem != (LPCVOID)0x0))
        {
          pvVar1 = GlobalHandle(pMem);
          GlobalUnlock(pvVar1);
          pvVar1 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_1 + 0x1d68) + iVar2 * 4));
          GlobalFree(pvVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)param_1 + 4));
    }
    pcVar3 = GlobalFree_exref;
    if (*(LPCVOID *)((int)param_1 + 0x1d68) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1d68));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1d68));
      pcVar3 = GlobalFree_exref;
      GlobalFree(pvVar1);
      *(undefined4 *)((int)param_1 + 0x1d68) = 0;
    }
    if (*(int *)((int)param_1 + 0x1d88) != 0) {
      pvVar1 = GlobalHandle((LPCVOID)(*(int *)((int)param_1 + 0x1d88) + -4));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)(*(int *)((int)param_1 + 0x1d88) + -4));
      (*pcVar3)(pvVar1);
      *(undefined4 *)((int)param_1 + 0x1d88) = 0;
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    (*pcVar3)(pvVar1);
    return 0;
  }
  return 0;
}



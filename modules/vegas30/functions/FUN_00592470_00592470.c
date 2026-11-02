/* Module: vegas30.exe
   Function: FUN_00592470
   Address: 00592470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00592470(int *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  if (*param_1 != 0) {
    pMem = *(LPCVOID *)(*param_1 + 4);
    if (pMem != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(*param_1 + 4));
      GlobalFree(pvVar1);
    }
    if (*(LPCVOID *)(*param_1 + 0xc) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)(*param_1 + 0xc));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(*param_1 + 0xc));
      GlobalFree(pvVar1);
    }
    pvVar1 = GlobalHandle((LPCVOID)*param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)*param_1);
    GlobalFree(pvVar1);
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



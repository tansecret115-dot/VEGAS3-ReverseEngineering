/* Module: vidpcore.dll
   Function: FUN_5dede4f0
   Address: 5dede4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5dede4f0(LPCVOID param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x24));
  if (LVar1 == 0) {
    if (*(LPCVOID *)((int)param_1 + 0x1c) != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1c));
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1c));
      GlobalFree(pvVar2);
    }
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return 0;
  }
  return *(LONG *)((int)param_1 + 0x24);
}



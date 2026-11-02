/* Module: vegas30.exe
   Function: FUN_00440e50
   Address: 00440e50
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00440e50(LPCVOID param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 4));
  if (LVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_00440c10();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  return *(LONG *)((int)param_1 + 4);
}



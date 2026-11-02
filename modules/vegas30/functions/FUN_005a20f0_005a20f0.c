/* Module: vegas30.exe
   Function: FUN_005a20f0
   Address: 005a20f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_005a20f0(LPCVOID param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0xc));
  if (LVar1 == 0) {
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return 0;
  }
  return *(LONG *)((int)param_1 + 0xc);
}



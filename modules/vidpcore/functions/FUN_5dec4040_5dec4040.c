/* Module: vidpcore.dll
   Function: FUN_5dec4040
   Address: 5dec4040
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5dec4040(LPCVOID param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x90));
  if (LVar1 == 0) {
    if (*(int *)((int)param_1 + 0x30) != 0) {
      if (*(int *)((int)param_1 + 0x94) == 1) {
        FUN_5deca630(*(int *)((int)param_1 + 0x30),0);
      }
      *(undefined4 *)((int)param_1 + 0x30) = 0;
    }
    if (param_1 != (LPCVOID)0x0) {
      FUN_5dec3f90();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  return *(LONG *)((int)param_1 + 0x90);
}



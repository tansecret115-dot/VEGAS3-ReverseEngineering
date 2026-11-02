/* Module: sftrans1.dll
   Function: FUN_004db430
   Address: 004db430
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004db430(LPCVOID param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x90));
  if (LVar1 == 0) {
    if (*(int *)((int)param_1 + 0x30) != 0) {
      if (*(int *)((int)param_1 + 0x94) == 1) {
        FUN_004de520(*(int *)((int)param_1 + 0x30),0);
      }
      *(undefined4 *)((int)param_1 + 0x30) = 0;
    }
    if (param_1 != (LPCVOID)0x0) {
      FUN_004db380();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  return *(LONG *)((int)param_1 + 0x90);
}



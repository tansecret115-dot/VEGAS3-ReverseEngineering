/* Module: vegas30.exe
   Function: FUN_005809c0
   Address: 005809c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005809c0(LONG *param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  if (param_1 != (LONG *)PTR_DAT_00645cc0) {
    LVar1 = InterlockedDecrement(param_1);
    if (LVar1 < 1) {
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
  }
  return;
}



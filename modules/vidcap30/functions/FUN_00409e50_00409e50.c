/* Module: vidcap30.exe
   Function: FUN_00409e50
   Address: 00409e50
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00409e50(undefined4 *param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (LVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &PTR_LAB_00586cec;
      if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalFree(pvVar2);
      }
      param_1[2] = 0;
      param_1[3] = 0;
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  return param_1[1];
}



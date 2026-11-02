/* Module: sfcdi.dll
   Function: FUN_5bf20a30
   Address: 5bf20a30
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5bf20a30(undefined4 *param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (LVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_5bf207e0(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  return param_1[1];
}



/* Module: sfcdi.dll
   Function: FUN_5bf16700
   Address: 5bf16700
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5bf16700(undefined4 *param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (LVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_5bf16450(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  return param_1[1];
}



/* Module: vidcap30.exe
   Function: FUN_00409d90
   Address: 00409d90
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00409d90(undefined4 *param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (LVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &PTR_LAB_00586cd0;
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  return param_1[1];
}



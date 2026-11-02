/* Module: oggplug.dll
   Function: FUN_00401c80
   Address: 00401c80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00401c80(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  InterlockedDecrement(param_1 + 0xbe);
  iVar2 = param_1[0xbe];
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_00401c50(param_1);
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



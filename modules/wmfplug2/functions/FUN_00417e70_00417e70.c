/* Module: wmfplug2.dll
   Function: FUN_00417e70
   Address: 00417e70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00417e70(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[7] + -1;
  param_1[7] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_00417860(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



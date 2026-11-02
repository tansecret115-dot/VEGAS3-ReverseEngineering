/* Module: wmfplug2.dll
   Function: FUN_00410bd0
   Address: 00410bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410bd0(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[6] + -1;
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_0040b070(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



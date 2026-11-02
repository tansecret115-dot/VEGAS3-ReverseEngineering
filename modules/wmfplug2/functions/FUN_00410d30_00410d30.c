/* Module: wmfplug2.dll
   Function: FUN_00410d30
   Address: 00410d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410d30(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[0x88] + -1;
  param_1[0x88] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_0040cbc0(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



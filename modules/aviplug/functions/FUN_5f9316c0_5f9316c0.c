/* Module: aviplug.dll
   Function: FUN_5f9316c0
   Address: 5f9316c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9316c0(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_5f931630(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* Module: vegas30k.dll
   Function: FUN_011bd2d0
   Address: 011bd2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bd2d0(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &PTR_FUN_011eba30;
      param_1[4] = 0;
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



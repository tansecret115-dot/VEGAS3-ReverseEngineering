/* Module: mp3plug.dll
   Function: FUN_5f68ce20
   Address: 5f68ce20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f68ce20(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[0x5c9] + -1;
  param_1[0x5c9] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_5f68c990(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



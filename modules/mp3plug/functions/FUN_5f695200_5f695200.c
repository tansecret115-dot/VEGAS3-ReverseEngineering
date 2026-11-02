/* Module: mp3plug.dll
   Function: FUN_5f695200
   Address: 5f695200
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f695200(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[8] + -1;
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_5f694dc0(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



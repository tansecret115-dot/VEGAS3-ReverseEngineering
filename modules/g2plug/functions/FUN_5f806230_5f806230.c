/* Module: g2plug.dll
   Function: FUN_5f806230
   Address: 5f806230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f806230(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[0x44] + -1;
  param_1[0x44] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_5f804b70(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}



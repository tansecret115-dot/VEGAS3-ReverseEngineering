/* Module: aviplug.dll
   Function: FUN_5f94cd80
   Address: 5f94cd80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94cd80(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 == (LPCVOID)0x0) {
    return 1;
  }
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 0;
}



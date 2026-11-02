/* Module: vegas30k.dll
   Function: FUN_0104a090
   Address: 0104a090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0104a090(undefined4 param_1,LPCVOID param_2)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_2);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_2);
  GlobalFree(pvVar1);
  return;
}



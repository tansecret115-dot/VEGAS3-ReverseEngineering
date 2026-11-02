/* Module: vegas30k.dll
   Function: FUN_0101aa10
   Address: 0101aa10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0101aa10(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}



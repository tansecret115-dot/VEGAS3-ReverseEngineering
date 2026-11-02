/* Module: sfpublish.dll
   Function: FUN_0042b0b0
   Address: 0042b0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042b0b0(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_1);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_1);
  GlobalFree(pvVar1);
  return 1;
}



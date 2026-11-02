/* Module: sfcdi.dll
   Function: FUN_5bf0bd60
   Address: 5bf0bd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0bd60(undefined4 param_1,undefined4 param_2,LPCVOID param_3)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalHandle(param_3);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_3);
  GlobalFree(pvVar1);
  return 0;
}



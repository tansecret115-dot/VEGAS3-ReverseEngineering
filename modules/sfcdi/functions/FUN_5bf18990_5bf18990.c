/* Module: sfcdi.dll
   Function: FUN_5bf18990
   Address: 5bf18990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf18990(undefined4 *param_1,int param_2)

{
  HGLOBAL pvVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  do {
    if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)*param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)*param_1);
      GlobalFree(pvVar1);
      *param_1 = 0;
    }
    param_1 = param_1 + 10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return 0;
}



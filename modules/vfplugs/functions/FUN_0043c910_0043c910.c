/* Module: vfplugs.dll
   Function: FUN_0043c910
   Address: 0043c910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043c910(LPCVOID param_1,uint param_2)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    if ((param_2 & 0x80000000) == 0) {
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
      return 0;
    }
    pvVar1 = GlobalHandle(param_1);
    if (pvVar1 != (HGLOBAL)0x0) {
      GlobalUnlock(pvVar1);
      GlobalFree(pvVar1);
    }
  }
  return 0;
}



/* Module: vegas30k.dll
   Function: _SfDibFree@8
   Address: 0104c900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfDibFree_8(LPCVOID param_1,uint param_2)

{
  HGLOBAL pvVar1;
  
                    /* 0x4c900  853  _SfDibFree@8 */
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



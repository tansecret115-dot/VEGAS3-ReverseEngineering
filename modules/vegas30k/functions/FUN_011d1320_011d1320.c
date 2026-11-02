/* Module: vegas30k.dll
   Function: FUN_011d1320
   Address: 011d1320
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_011d1320(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_011cf1d0();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



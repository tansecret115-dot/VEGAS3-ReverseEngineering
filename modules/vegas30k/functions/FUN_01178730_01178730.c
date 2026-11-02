/* Module: vegas30k.dll
   Function: FUN_01178730
   Address: 01178730
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_01178730(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_01176940();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



/* Module: vegas30k.dll
   Function: FUN_011cb060
   Address: 011cb060
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_011cb060(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_011c7960();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



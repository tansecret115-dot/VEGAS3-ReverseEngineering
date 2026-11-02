/* Module: vegas30.exe
   Function: FUN_0057d990
   Address: 0057d990
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_0057d990(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_0057d700();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



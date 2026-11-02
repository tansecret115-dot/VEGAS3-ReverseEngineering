/* Module: vegas30k.dll
   Function: FUN_011b4610
   Address: 011b4610
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_011b4610(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_011b0f50();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



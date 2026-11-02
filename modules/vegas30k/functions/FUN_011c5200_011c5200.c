/* Module: vegas30k.dll
   Function: FUN_011c5200
   Address: 011c5200
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_011c5200(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_011c2f40();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



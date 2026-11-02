/* Module: sftrans1.dll
   Function: FUN_005445e0
   Address: 005445e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_005445e0(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00543370();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



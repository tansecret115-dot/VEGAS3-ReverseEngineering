/* Module: sftrans1.dll
   Function: FUN_00546b20
   Address: 00546b20
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_00546b20(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00546760();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



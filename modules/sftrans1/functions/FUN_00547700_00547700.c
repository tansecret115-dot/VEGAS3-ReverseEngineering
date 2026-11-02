/* Module: sftrans1.dll
   Function: FUN_00547700
   Address: 00547700
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_00547700(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00546fd0();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



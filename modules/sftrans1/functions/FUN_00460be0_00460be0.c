/* Module: sftrans1.dll
   Function: FUN_00460be0
   Address: 00460be0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_00460be0(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_0045fe30();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



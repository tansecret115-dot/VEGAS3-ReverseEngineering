/* Module: vegas30.exe
   Function: FUN_00582b40
   Address: 00582b40
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_00582b40(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00582940();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



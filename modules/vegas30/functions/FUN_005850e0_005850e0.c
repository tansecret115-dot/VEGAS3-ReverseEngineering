/* Module: vegas30.exe
   Function: FUN_005850e0
   Address: 005850e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_005850e0(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00584ef0();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



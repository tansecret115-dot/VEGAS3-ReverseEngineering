/* Module: vegas30.exe
   Function: FUN_00440760
   Address: 00440760
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_00440760(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_004403a0();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



/* Module: vidcap30.exe
   Function: FUN_00555210
   Address: 00555210
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_00555210(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00555030();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



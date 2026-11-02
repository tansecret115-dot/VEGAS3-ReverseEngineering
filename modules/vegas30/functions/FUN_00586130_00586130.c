/* Module: vegas30.exe
   Function: FUN_00586130
   Address: 00586130
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_00586130(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00585420();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



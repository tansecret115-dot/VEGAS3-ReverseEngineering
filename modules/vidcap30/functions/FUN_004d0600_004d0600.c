/* Module: vidcap30.exe
   Function: FUN_004d0600
   Address: 004d0600
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_004d0600(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_004cfba0();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



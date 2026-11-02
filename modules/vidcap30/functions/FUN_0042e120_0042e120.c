/* Module: vidcap30.exe
   Function: FUN_0042e120
   Address: 0042e120
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_0042e120(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  if ((param_2 & 2) != 0) {
    param_1 = (LPCVOID)((int)param_1 + -4);
  }
  if (((param_2 & 1) != 0) && (param_1 != (LPCVOID)0x0)) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
  }
  return param_1;
}



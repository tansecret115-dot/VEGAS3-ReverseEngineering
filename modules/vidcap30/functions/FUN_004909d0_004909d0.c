/* Module: vidcap30.exe
   Function: FUN_004909d0
   Address: 004909d0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_004909d0(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00487b10();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



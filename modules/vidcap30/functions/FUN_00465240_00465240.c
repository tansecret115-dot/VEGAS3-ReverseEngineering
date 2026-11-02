/* Module: vidcap30.exe
   Function: FUN_00465240
   Address: 00465240
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_00465240(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00464400();
  if (((param_2 & 1) != 0) && (param_1 != (LPCVOID)0x0)) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



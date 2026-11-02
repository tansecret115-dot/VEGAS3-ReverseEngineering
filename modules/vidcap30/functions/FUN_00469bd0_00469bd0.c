/* Module: vidcap30.exe
   Function: FUN_00469bd0
   Address: 00469bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_00469bd0(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_00469a10();
  if (((param_2 & 1) != 0) && (param_1 != (LPCVOID)0x0)) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



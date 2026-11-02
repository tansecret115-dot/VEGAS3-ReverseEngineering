/* Module: vidpcore.dll
   Function: FUN_5df09d20
   Address: 5df09d20
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_5df09d20(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_5df09490();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



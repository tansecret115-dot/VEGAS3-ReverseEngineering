/* Module: vegas30k.dll
   Function: FUN_0113f510
   Address: 0113f510
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_0113f510(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_0113eab0();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



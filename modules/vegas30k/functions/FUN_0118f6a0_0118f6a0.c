/* Module: vegas30k.dll
   Function: FUN_0118f6a0
   Address: 0118f6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_0118f6a0(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_0118e810();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



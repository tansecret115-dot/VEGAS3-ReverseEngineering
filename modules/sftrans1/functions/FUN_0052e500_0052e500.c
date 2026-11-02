/* Module: sftrans1.dll
   Function: FUN_0052e500
   Address: 0052e500
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_0052e500(LPCVOID param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  FUN_0052dc70();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}



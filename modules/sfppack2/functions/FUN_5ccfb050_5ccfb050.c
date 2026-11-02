/* Module: sfppack2.dll
   Function: FUN_5ccfb050
   Address: 5ccfb050
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_5ccfb050(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cd3d3f7((int)this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



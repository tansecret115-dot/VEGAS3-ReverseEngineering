/* Module: sfpaplug.dll
   Function: FUN_0040a240
   Address: 0040a240
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_0040a240(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00405f10(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



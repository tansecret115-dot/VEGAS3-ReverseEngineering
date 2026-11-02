/* Module: sctplug.dll
   Function: FUN_00407b60
   Address: 00407b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_00407b60(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00404560(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



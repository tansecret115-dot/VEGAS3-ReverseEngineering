/* Module: wavplug.dll
   Function: FUN_5f389860
   Address: 5f389860
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_5f389860(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f386cf0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



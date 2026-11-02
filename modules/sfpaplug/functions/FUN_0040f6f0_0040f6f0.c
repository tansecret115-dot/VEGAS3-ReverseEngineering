/* Module: sfpaplug.dll
   Function: FUN_0040f6f0
   Address: 0040f6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_0040f6f0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0040c620(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



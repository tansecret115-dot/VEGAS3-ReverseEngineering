/* Module: sfppack2.dll
   Function: FUN_5ccd4620
   Address: 5ccd4620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccd4620(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5ccd2100(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



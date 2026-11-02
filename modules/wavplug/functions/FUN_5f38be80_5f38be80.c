/* Module: wavplug.dll
   Function: FUN_5f38be80
   Address: 5f38be80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f38be80(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f38b1b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



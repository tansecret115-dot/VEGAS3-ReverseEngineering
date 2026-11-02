/* Module: aviplug.dll
   Function: FUN_5f959320
   Address: 5f959320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f959320(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f958890(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: aviplug.dll
   Function: FUN_5f9515f0
   Address: 5f9515f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f9515f0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f9509a0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: aviplug.dll
   Function: FUN_5f984a70
   Address: 5f984a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f984a70(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f9832f0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



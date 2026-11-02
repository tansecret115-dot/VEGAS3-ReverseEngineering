/* Module: wmfplug2.dll
   Function: FUN_004085a0
   Address: 004085a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004085a0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00405260(this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



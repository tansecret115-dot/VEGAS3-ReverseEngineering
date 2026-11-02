/* Module: wmfplug2.dll
   Function: FUN_0041ef10
   Address: 0041ef10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0041ef10(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0041e8e0(this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



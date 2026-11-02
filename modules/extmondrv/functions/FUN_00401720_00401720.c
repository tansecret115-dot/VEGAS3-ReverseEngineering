/* Module: extmondrv.dll
   Function: FUN_00401720
   Address: 00401720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00401720(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00401540(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



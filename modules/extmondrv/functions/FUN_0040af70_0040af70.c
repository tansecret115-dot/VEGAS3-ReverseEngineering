/* Module: extmondrv.dll
   Function: FUN_0040af70
   Address: 0040af70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040af70(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0040a5a0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



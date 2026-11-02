/* Module: extmondrv.dll
   Function: FUN_00405b30
   Address: 00405b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00405b30(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00404d60(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



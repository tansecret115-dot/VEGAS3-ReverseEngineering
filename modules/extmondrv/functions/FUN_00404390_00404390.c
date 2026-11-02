/* Module: extmondrv.dll
   Function: FUN_00404390
   Address: 00404390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00404390(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_004033c0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



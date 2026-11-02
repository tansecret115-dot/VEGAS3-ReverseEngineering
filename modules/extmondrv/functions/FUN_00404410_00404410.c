/* Module: extmondrv.dll
   Function: FUN_00404410
   Address: 00404410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00404410(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00403c40(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



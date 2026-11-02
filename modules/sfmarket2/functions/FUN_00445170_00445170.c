/* Module: sfmarket2.dll
   Function: FUN_00445170
   Address: 00445170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00445170(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00444f90(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



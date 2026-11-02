/* Module: extmondrv.dll
   Function: FUN_004042d0
   Address: 004042d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004042d0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_004019a0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



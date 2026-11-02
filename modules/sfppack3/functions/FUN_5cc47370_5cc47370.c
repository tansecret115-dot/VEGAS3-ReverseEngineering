/* Module: sfppack3.dll
   Function: FUN_5cc47370
   Address: 5cc47370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc47370(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cc46060(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



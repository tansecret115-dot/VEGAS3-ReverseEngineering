/* Module: sfmarket2.dll
   Function: FUN_0040f590
   Address: 0040f590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040f590(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0040ea00(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



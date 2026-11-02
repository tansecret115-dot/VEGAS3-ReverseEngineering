/* Module: sfmarket2.dll
   Function: FUN_00431770
   Address: 00431770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00431770(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0042f060(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



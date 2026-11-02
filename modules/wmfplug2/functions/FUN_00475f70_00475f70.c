/* Module: wmfplug2.dll
   Function: FUN_00475f70
   Address: 00475f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00475f70(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00475510(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: sfpaplug.dll
   Function: FUN_0043d530
   Address: 0043d530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0043d530(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0043cba0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



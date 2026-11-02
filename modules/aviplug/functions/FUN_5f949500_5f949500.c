/* Module: aviplug.dll
   Function: FUN_5f949500
   Address: 5f949500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f949500(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f944890(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: wavplug.dll
   Function: FUN_5f389a80
   Address: 5f389a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f389a80(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f388f80(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



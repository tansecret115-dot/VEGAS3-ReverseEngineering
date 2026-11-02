/* Module: wmfplug2.dll
   Function: FUN_00445c70
   Address: 00445c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00445c70(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0043cd70(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



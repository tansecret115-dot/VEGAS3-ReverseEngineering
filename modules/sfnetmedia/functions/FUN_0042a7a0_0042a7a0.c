/* Module: sfnetmedia.dll
   Function: FUN_0042a7a0
   Address: 0042a7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0042a7a0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00427aa0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



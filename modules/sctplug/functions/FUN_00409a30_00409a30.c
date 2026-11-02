/* Module: sctplug.dll
   Function: FUN_00409a30
   Address: 00409a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00409a30(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00408fe0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



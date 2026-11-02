/* Module: sfpaplug.dll
   Function: FUN_0040a450
   Address: 0040a450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040a450(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00409940(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: stl2plg.dll
   Function: FUN_00406d10
   Address: 00406d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00406d10(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00405d70(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



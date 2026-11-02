/* Module: stl2plg.dll
   Function: FUN_00406e30
   Address: 00406e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00406e30(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00405f20(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



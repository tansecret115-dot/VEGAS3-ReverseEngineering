/* Module: stl2plg.dll
   Function: FUN_00406df0
   Address: 00406df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00406df0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00405ef0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: stl2plg.dll
   Function: FUN_00402d40
   Address: 00402d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00402d40(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_004027d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



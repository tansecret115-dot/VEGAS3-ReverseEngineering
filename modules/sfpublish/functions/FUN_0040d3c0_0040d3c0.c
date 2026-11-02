/* Module: sfpublish.dll
   Function: FUN_0040d3c0
   Address: 0040d3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040d3c0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0040b6b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



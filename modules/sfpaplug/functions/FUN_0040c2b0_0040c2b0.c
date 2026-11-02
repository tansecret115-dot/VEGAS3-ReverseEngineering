/* Module: sfpaplug.dll
   Function: FUN_0040c2b0
   Address: 0040c2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040c2b0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0040b920(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



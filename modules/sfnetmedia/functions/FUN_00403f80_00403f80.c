/* Module: sfnetmedia.dll
   Function: FUN_00403f80
   Address: 00403f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00403f80(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0040b320(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



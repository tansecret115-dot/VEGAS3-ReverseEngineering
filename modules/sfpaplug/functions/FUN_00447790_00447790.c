/* Module: sfpaplug.dll
   Function: FUN_00447790
   Address: 00447790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00447790(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00446d30(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



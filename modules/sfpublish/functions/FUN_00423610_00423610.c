/* Module: sfpublish.dll
   Function: FUN_00423610
   Address: 00423610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00423610(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00420f00(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



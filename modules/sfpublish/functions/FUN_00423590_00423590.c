/* Module: sfpublish.dll
   Function: FUN_00423590
   Address: 00423590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00423590(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00420420(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



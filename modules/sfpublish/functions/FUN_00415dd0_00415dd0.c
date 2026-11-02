/* Module: sfpublish.dll
   Function: FUN_00415dd0
   Address: 00415dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00415dd0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_004159f0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



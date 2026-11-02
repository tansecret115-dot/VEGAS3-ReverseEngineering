/* Module: aviplug.dll
   Function: FUN_5f959240
   Address: 5f959240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f959240(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f955e70(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



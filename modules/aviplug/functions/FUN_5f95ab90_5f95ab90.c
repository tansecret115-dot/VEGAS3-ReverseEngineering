/* Module: aviplug.dll
   Function: FUN_5f95ab90
   Address: 5f95ab90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f95ab90(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f959c90(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



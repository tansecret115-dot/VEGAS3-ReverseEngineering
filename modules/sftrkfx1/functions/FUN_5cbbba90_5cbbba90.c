/* Module: sftrkfx1.dll
   Function: FUN_5cbbba90
   Address: 5cbbba90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cbbba90(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cbbab30(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: sftrkfx1.dll
   Function: FUN_5cba3440
   Address: 5cba3440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cba3440(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cba1b90(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



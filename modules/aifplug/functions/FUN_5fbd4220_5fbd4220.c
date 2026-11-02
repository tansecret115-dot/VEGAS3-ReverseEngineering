/* Module: aifplug.dll
   Function: FUN_5fbd4220
   Address: 5fbd4220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5fbd4220(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5fbd2c20(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: aifplug.dll
   Function: FUN_5fbd69c0
   Address: 5fbd69c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5fbd69c0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5fbd5970(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



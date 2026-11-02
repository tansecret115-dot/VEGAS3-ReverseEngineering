/* Module: aifplug.dll
   Function: FUN_5fbd40e0
   Address: 5fbd40e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_5fbd40e0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5fbd1a60(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



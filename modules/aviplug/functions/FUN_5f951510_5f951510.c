/* Module: aviplug.dll
   Function: FUN_5f951510
   Address: 5f951510
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_5f951510(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f94fc30(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: sfppack1.dll
   Function: FUN_5cdd5080
   Address: 5cdd5080
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdd5080(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cdd3bd0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



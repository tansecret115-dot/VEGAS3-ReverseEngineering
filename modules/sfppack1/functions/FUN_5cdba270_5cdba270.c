/* Module: sfppack1.dll
   Function: FUN_5cdba270
   Address: 5cdba270
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdba270(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cdfe577((int)this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



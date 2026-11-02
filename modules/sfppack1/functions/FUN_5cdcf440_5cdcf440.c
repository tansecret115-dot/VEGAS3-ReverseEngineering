/* Module: sfppack1.dll
   Function: FUN_5cdcf440
   Address: 5cdcf440
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdcf440(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cdcdee0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



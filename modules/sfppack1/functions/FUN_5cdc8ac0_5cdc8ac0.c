/* Module: sfppack1.dll
   Function: FUN_5cdc8ac0
   Address: 5cdc8ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdc8ac0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cdc6080(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: sfppack3.dll
   Function: FUN_5cc3b6c0
   Address: 5cc3b6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID __thiscall FUN_5cc3b6c0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cc73f07((int)this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



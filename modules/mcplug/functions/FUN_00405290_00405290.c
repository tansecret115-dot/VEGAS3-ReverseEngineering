/* Module: mcplug.dll
   Function: FUN_00405290
   Address: 00405290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00405290(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00404170(this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



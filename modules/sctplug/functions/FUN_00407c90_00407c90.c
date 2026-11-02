/* Module: sctplug.dll
   Function: FUN_00407c90
   Address: 00407c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00407c90(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00405670(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



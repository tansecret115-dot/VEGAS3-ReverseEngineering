/* Module: sfppack3.dll
   Function: FUN_5cc37a80
   Address: 5cc37a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc37a80(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cc366d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



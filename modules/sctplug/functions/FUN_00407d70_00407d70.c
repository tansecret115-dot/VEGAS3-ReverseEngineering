/* Module: sctplug.dll
   Function: FUN_00407d70
   Address: 00407d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00407d70(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00407130(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



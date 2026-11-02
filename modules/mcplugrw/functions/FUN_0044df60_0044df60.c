/* Module: mcplugrw.dll
   Function: FUN_0044df60
   Address: 0044df60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0044df60(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0044dd80(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



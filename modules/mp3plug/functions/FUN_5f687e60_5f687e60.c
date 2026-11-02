/* Module: mp3plug.dll
   Function: FUN_5f687e60
   Address: 5f687e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f687e60(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f686920(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



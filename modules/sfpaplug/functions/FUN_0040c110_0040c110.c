/* Module: sfpaplug.dll
   Function: FUN_0040c110
   Address: 0040c110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040c110(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0040ab20(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



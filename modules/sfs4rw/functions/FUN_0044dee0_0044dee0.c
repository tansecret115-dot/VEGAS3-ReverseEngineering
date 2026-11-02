/* Module: sfs4rw.dll
   Function: FUN_0044dee0
   Address: 0044dee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0044dee0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0044dd00(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: Setup.exe
   Function: FUN_0041d190
   Address: 0041d190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0041d190(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_0041cfb0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



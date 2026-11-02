/* Module: wavplug.dll
   Function: FUN_5f395f10
   Address: 5f395f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f395f10(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f395350(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



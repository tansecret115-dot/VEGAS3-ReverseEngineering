/* Module: wavplug.dll
   Function: FUN_5f38f170
   Address: 5f38f170
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_5f38f170(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5f38c4d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



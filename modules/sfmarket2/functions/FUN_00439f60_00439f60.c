/* Module: sfmarket2.dll
   Function: FUN_00439f60
   Address: 00439f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00439f60(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00431890(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



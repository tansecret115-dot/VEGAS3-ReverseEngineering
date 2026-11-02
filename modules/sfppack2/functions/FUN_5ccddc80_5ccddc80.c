/* Module: sfppack2.dll
   Function: FUN_5ccddc80
   Address: 5ccddc80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5ccddc80(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5ccdc640(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



/* Module: sfxpfx2.dll
   Function: FUN_5c897d00
   Address: 5c897d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c897d00(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5c896d30(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



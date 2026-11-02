/* Module: sfxpfx2.dll
   Function: FUN_5c893e10
   Address: 5c893e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c893e10(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5c892a40(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



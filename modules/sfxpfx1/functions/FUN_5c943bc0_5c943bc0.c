/* Module: sfxpfx1.dll
   Function: FUN_5c943bc0
   Address: 5c943bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5c943bc0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5c942a00(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



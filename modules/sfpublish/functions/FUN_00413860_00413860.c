/* Module: sfpublish.dll
   Function: FUN_00413860
   Address: 00413860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00413860(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_00413570(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



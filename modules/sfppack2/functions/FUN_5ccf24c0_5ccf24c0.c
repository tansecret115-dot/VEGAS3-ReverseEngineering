/* Module: sfppack2.dll
   Function: FUN_5ccf24c0
   Address: 5ccf24c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5ccf24c0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cd3f230();
  if ((param_1 & 1) == 0) {
    return (int)this + -4;
  }
  pvVar1 = GlobalHandle((LPCVOID)((int)this + -4));
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle((LPCVOID)((int)this + -4));
  GlobalFree(pvVar1);
  return (int)this + -4;
}



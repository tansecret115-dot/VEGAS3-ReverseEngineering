/* Module: sfppack1.dll
   Function: FUN_5cdc4a90
   Address: 5cdc4a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cdc4a90(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5ce003b0();
  if ((param_1 & 1) == 0) {
    return (int)this + -4;
  }
  pvVar1 = GlobalHandle((LPCVOID)((int)this + -4));
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle((LPCVOID)((int)this + -4));
  GlobalFree(pvVar1);
  return (int)this + -4;
}



/* Module: sfppack3.dll
   Function: FUN_5cc44c70
   Address: 5cc44c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cc44c70(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  FUN_5cc765d8();
  if ((param_1 & 1) == 0) {
    return (int)this + -4;
  }
  pvVar1 = GlobalHandle((LPCVOID)((int)this + -4));
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle((LPCVOID)((int)this + -4));
  GlobalFree(pvVar1);
  return (int)this + -4;
}



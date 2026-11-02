/* Module: sftrkfx1.dll
   Function: FUN_5cbf610f
   Address: 5cbf610f
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID __thiscall FUN_5cbf610f(void *this,uint param_1)

{
  LPVOID pvVar1;
  
  if (*(uint *)((int)this + 0x40) != param_1) {
    pvVar1 = CoTaskMemAlloc(param_1);
    if (pvVar1 != (LPVOID)0x0) {
      if (*(int *)((int)this + 0x40) != 0) {
        CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      }
      *(uint *)((int)this + 0x40) = param_1;
      *(LPVOID *)((int)this + 0x44) = pvVar1;
      return pvVar1;
    }
    if (*(uint *)((int)this + 0x40) < param_1) {
      return (LPVOID)0x0;
    }
  }
  return *(LPVOID *)((int)this + 0x44);
}



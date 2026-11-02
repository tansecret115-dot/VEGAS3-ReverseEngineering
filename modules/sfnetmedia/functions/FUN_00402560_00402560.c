/* Module: sfnetmedia.dll
   Function: FUN_00402560
   Address: 00402560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00402560(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  *(undefined ***)this = &PTR_FUN_00435588;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00435568;
  *(undefined4 *)((int)this + 8) = 1;
  InterlockedDecrement(&DAT_0044184c);
  FUN_004028f0((int)this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



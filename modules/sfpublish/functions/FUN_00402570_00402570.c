/* Module: sfpublish.dll
   Function: FUN_00402570
   Address: 00402570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00402570(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  *(undefined ***)this = &PTR_FUN_00435554;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00435520;
  *(undefined4 *)((int)this + 8) = 1;
  InterlockedDecrement(&DAT_0044176c);
  FUN_00402920((int)this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



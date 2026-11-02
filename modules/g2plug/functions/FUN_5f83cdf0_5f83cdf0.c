/* Module: g2plug.dll
   Function: FUN_5f83cdf0
   Address: 5f83cdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f83cdf0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  *(undefined ***)this = &PTR_FUN_5f8707a4;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f87077c;
  *(undefined ***)((int)this + 8) = &PTR_LAB_5f870744;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_5f87072c;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5f870714;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_5f8706f4;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_5f8706d8;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_5f8706c8;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_5f8706b4;
  FUN_5f834260((int)this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



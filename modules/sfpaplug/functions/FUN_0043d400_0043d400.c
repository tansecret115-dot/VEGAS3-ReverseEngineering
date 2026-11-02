/* Module: sfpaplug.dll
   Function: FUN_0043d400
   Address: 0043d400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0043d400(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  *(undefined ***)this = &PTR_FUN_00454a2c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00454a04;
  *(undefined ***)((int)this + 8) = &PTR_LAB_004549cc;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_004549b4;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_0045499c;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_0045497c;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_00454960;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00454950;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_0045493c;
  FUN_00434870((int)this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



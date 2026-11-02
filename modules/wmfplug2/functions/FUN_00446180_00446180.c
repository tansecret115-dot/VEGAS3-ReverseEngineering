/* Module: wmfplug2.dll
   Function: FUN_00446180
   Address: 00446180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00446180(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  *(undefined ***)this = &PTR_FUN_0048326c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00483244;
  *(undefined ***)((int)this + 8) = &PTR_LAB_0048320c;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_004831f4;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_004831dc;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_004831bc;
  *(undefined ***)((int)this + 0x18) = &PTR_LAB_004831a0;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00483190;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_0048317c;
  FUN_0043d5b0((int)this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



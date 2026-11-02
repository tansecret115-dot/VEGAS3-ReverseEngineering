/* Module: sfmarket2.dll
   Function: FUN_004025d0
   Address: 004025d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004025d0(void *this,byte param_1)

{
  HGLOBAL pvVar1;
  
  *(undefined ***)this = &PTR_FUN_0049561c;
  *(undefined ***)((int)this + 4) = &PTR_LAB_004955f4;
  *(undefined ***)((int)this + 8) = &PTR_LAB_004955e0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_00495588;
  *(undefined4 *)((int)this + 0x10) = 1;
  InterlockedDecrement(&DAT_004a9c1c);
  FUN_004029a0((int)this);
  if ((param_1 & 1) != 0) {
    pvVar1 = GlobalHandle(this);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(this);
    GlobalFree(pvVar1);
    return this;
  }
  return this;
}



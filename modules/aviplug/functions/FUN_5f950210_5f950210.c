/* Module: aviplug.dll
   Function: FUN_5f950210
   Address: 5f950210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f950210(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)this = &PTR_LAB_5f9d89b0;
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return this;
}



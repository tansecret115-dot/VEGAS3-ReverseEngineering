/* Module: aviplug.dll
   Function: FUN_5f934060
   Address: 5f934060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f934060(void *this,undefined4 param_1)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f9d7934;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined ***)this = &PTR_LAB_5f9d7910;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f9d78f8;
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return this;
}



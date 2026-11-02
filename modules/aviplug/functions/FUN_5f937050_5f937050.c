/* Module: aviplug.dll
   Function: FUN_5f937050
   Address: 5f937050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f937050(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f9d7c7c;
  *(undefined ***)((int)this + 8) = &PTR_LAB_5f9d7c6c;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x118) = 1;
  *(undefined4 *)((int)this + 0x14c) = 1;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 10;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = param_2;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined ***)this = &PTR_FUN_5f9d7bc4;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f9d7bb4;
  *(undefined ***)((int)this + 8) = &PTR_LAB_5f9d7ba4;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x160) = 0xffc0ffff;
  *(undefined4 *)((int)this + 0x164) = 0xfffcc83f;
  *(undefined4 *)((int)this + 0x168) = 0xc0c01fc0;
  *(undefined4 *)((int)this + 0x16c) = 0xffa0ff3f;
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return this;
}



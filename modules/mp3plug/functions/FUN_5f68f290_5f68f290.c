/* Module: mp3plug.dll
   Function: FUN_5f68f290
   Address: 5f68f290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f68f290(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f72cd6c;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_5f72cd18;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f72cd08;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 300) = param_2;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  return;
}



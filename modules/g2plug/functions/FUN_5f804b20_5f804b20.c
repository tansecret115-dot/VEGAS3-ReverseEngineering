/* Module: g2plug.dll
   Function: FUN_5f804b20
   Address: 5f804b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f804b20(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined ***)this = &PTR_LAB_5f86ac70;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x128) = param_2;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  return;
}



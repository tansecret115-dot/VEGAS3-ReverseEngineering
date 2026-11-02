/* Module: mcplug.dll
   Function: FUN_00407690
   Address: 00407690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00407690(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 300) = param_3;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined ***)this = &PTR_LAB_004769b8;
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



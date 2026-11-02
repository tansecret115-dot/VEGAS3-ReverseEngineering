/* Module: sfpaplug.dll
   Function: FUN_00401970
   Address: 00401970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00401970(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_0044e5b8;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_0044e570 + param_3 * 8);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_0044e574 + param_3 * 8);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 200000;
  *(undefined4 *)((int)this + 0x40) = 0x40;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined ***)this = &PTR_LAB_0044e578;
  return;
}



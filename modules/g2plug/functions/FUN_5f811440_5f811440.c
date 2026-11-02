/* Module: g2plug.dll
   Function: FUN_5f811440
   Address: 5f811440
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5f811440(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_5f86b678;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_5f86b4b0 + param_3 * 8);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_5f86b4b4 + param_3 * 8);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 200000;
  *(undefined4 *)((int)this + 0x44) = 0x40;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)this = &PTR_LAB_5f86b638;
  *(undefined4 *)((int)this + 4) = 1;
  return;
}



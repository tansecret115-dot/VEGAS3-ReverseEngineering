/* Module: qt4plug.dll
   Function: FUN_5f520070
   Address: 5f520070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5f520070(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_5f596dcc;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_5f596b88 + param_3 * 8);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_5f596b8c + param_3 * 8);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 200000;
  *(undefined4 *)((int)this + 0x44) = 0x40;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined ***)this = &PTR_LAB_5f596d74;
  return;
}



/* Module: aviplug.dll
   Function: FUN_5f95b2c0
   Address: 5f95b2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5f95b2c0(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_5f9d93e4;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_5f9d9220 + param_3 * 8);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_5f9d9224 + param_3 * 8);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0x38) = param_5;
  *(undefined4 *)((int)this + 0x44) = 200000;
  *(undefined4 *)((int)this + 0x48) = 0x40;
  *(undefined ***)this = &PTR_LAB_5f9d938c;
  *(int *)((int)this + 0x98) = (int)this + 0x68;
  return;
}



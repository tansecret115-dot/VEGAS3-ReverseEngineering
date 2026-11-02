/* Module: oggplug.dll
   Function: FUN_00406460
   Address: 00406460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00406460(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_004479b0;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_00447968 + param_3 * 8);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_0044796c + param_3 * 8);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 200000;
  *(undefined4 *)((int)this + 0x40) = 0x40;
  *(undefined ***)this = &PTR_LAB_00447970;
  return;
}



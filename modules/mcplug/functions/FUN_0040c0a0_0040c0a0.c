/* Module: mcplug.dll
   Function: FUN_0040c0a0
   Address: 0040c0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_0040c0a0(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 0x50) = 200000;
  *(undefined4 *)((int)this + 0x54) = 0x40;
  *(int *)((int)this + 0x5c) = param_5;
  *(undefined ***)this = &PTR_LAB_00476d20;
  if (param_5 == 2) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_00476c88 + param_3 * 8);
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_00476c8c + param_3 * 8);
    return;
  }
  if (param_5 == 1) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_00476c68 + param_3 * 8);
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_00476c6c + param_3 * 8);
    return;
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(&DAT_00476c40 + param_3 * 8);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(&DAT_00476c44 + param_3 * 8);
  return;
}



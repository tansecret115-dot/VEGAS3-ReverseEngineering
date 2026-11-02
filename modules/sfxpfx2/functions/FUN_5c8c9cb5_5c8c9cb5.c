/* Module: sfxpfx2.dll
   Function: FUN_5c8c9cb5
   Address: 5c8c9cb5
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5c8c9cb5(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined ***)this = &PTR_FUN_5c8e2fd8;
  return;
}



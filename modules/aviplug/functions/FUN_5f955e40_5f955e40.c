/* Module: aviplug.dll
   Function: FUN_5f955e40
   Address: 5f955e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5f955e40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)this = &PTR_FUN_5f9d8d64;
  return;
}



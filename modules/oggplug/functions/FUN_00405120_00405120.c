/* Module: oggplug.dll
   Function: FUN_00405120
   Address: 00405120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00405120(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_004478e4;
  *(undefined4 *)((int)this + 0x118) = param_2;
  *(undefined ***)this = &PTR_LAB_00447890;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00447880;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x11c) = param_1;
  *(undefined4 *)((int)this + 0x110) = 0;
  return;
}



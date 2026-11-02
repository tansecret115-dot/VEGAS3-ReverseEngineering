/* Module: oggplug.dll
   Function: FUN_00402590
   Address: 00402590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00402590(void *this,undefined4 param_1)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_004475e0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined ***)this = &PTR_LAB_00447598;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00447588;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return;
}



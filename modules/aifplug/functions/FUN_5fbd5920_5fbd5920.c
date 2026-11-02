/* Module: aifplug.dll
   Function: FUN_5fbd5920
   Address: 5fbd5920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5fbd5920(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_5fbff754;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_5fbff6fc;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5fbff6ec;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x224) = param_2;
  *(undefined4 *)((int)this + 0x220) = 0;
  return;
}



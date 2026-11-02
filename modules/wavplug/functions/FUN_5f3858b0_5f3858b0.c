/* Module: wavplug.dll
   Function: FUN_5f3858b0
   Address: 5f3858b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f3858b0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f3ca958;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_5f3ca900;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f3ca8f0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x220) = param_2;
  *(undefined4 *)((int)this + 0x21c) = 0;
  return;
}



/* Module: sfpaplug.dll
   Function: FUN_0040b8d0
   Address: 0040b8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0040b8d0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_0044ea98;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_0044ea40;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_0044ea30;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x220) = param_2;
  *(undefined4 *)((int)this + 0x21c) = 0;
  return;
}



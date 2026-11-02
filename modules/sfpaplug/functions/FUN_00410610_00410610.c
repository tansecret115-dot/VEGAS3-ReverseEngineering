/* Module: sfpaplug.dll
   Function: FUN_00410610
   Address: 00410610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00410610(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined ***)this = &PTR_LAB_0044eef0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x21c) = param_2;
  *(undefined4 *)((int)this + 0x218) = 0;
  return;
}



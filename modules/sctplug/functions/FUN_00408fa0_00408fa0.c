/* Module: sctplug.dll
   Function: FUN_00408fa0
   Address: 00408fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00408fa0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined ***)this = &PTR_LAB_00432838;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x21c) = param_2;
  *(undefined4 *)((int)this + 0x218) = 0;
  return;
}



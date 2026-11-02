/* Module: wavplug.dll
   Function: FUN_5f390140
   Address: 5f390140
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f390140(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined ***)this = &PTR_LAB_5f3caef4;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x21c) = param_2;
  *(undefined4 *)((int)this + 0x218) = 0;
  return;
}



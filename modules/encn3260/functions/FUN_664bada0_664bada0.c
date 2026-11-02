/* Module: encn3260.dll
   Function: FUN_664bada0
   Address: 664bada0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664bada0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined ***)this = &PTR_FUN_664df4f0;
  return;
}



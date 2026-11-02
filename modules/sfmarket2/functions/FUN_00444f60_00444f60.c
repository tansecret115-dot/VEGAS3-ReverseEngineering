/* Module: sfmarket2.dll
   Function: FUN_00444f60
   Address: 00444f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00444f60(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_0049e798;
  FUN_00444fd0((int)this);
  *(undefined4 *)((int)this + 0x10) = param_1;
  FUN_00444fb0((int)this);
  return this;
}



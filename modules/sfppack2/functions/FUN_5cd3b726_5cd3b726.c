/* Module: sfppack2.dll
   Function: FUN_5cd3b726
   Address: 5cd3b726
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cd3b726(void *this,undefined4 param_1)

{
  FUN_5cd3f21c((undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_5cd5a260;
  return this;
}



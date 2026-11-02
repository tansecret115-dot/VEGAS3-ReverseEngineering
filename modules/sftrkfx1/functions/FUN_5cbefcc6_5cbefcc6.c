/* Module: sftrkfx1.dll
   Function: FUN_5cbefcc6
   Address: 5cbefcc6
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cbefcc6(void *this,undefined4 param_1)

{
  FUN_5cbf40e9((undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_5cc0a7c8;
  return this;
}



/* Module: sfppack3.dll
   Function: FUN_5cc72236
   Address: 5cc72236
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5cc72236(void *this,undefined4 param_1)

{
  FUN_5cc765c4((undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_5cc8e9c8;
  return this;
}



/* Module: sfs4rw.dll
   Function: FUN_0044dcd0
   Address: 0044dcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0044dcd0(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_0049dfdc;
  FUN_0044dd40((int)this);
  *(undefined4 *)((int)this + 0x10) = param_1;
  FUN_0044dd20((int)this);
  return this;
}



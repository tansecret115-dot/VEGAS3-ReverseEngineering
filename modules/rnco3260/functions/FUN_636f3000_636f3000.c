/* Module: rnco3260.dll
   Function: FUN_636f3000
   Address: 636f3000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_636f3000(void *this,undefined4 param_1)

{
  FUN_636f2bc0(this);
  *(undefined ***)this = &PTR_FUN_63765178;
  *(undefined4 *)((int)this + 8) = param_1;
  return this;
}



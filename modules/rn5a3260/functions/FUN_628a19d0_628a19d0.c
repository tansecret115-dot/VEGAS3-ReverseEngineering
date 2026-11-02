/* Module: rn5a3260.dll
   Function: FUN_628a19d0
   Address: 628a19d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_628a19d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_628a6a20;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



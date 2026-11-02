/* Module: rn5a3260.dll
   Function: FUN_628a4ea0
   Address: 628a4ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_628a4ea0(void *this,byte param_1)

{
  FUN_628a4ed0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



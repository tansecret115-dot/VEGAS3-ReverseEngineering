/* Module: rn5a3260.dll
   Function: FUN_628a4e20
   Address: 628a4e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_628a4e20(void *this,byte param_1)

{
  FUN_628a4e50(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



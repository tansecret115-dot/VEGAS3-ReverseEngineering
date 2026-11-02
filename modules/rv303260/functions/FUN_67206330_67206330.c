/* Module: rv303260.dll
   Function: FUN_67206330
   Address: 67206330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_67206330(void *this,byte param_1)

{
  FUN_67206360(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



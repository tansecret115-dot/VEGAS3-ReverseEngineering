/* Module: rv303260.dll
   Function: FUN_67208d00
   Address: 67208d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_67208d00(void *this,byte param_1)

{
  FUN_67208d30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



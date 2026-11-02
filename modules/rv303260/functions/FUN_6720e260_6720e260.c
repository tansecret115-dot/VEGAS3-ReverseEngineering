/* Module: rv303260.dll
   Function: FUN_6720e260
   Address: 6720e260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6720e260(void *this,byte param_1)

{
  FUN_6720e290(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_6602e3a0
   Address: 6602e3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6602e3a0(void *this,byte param_1)

{
  FUN_6602e3d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_66019e60
   Address: 66019e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66019e60(void *this,byte param_1)

{
  FUN_66019e90(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



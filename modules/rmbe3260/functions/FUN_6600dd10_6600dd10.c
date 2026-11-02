/* Module: rmbe3260.dll
   Function: FUN_6600dd10
   Address: 6600dd10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6600dd10(void *this,byte param_1)

{
  FUN_6600dd40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



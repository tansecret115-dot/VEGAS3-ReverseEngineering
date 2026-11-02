/* Module: rmbe3260.dll
   Function: FUN_66017100
   Address: 66017100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66017100(void *this,byte param_1)

{
  FUN_66017130(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



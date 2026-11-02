/* Module: rmbe3260.dll
   Function: FUN_66037fc0
   Address: 66037fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66037fc0(void *this,byte param_1)

{
  FUN_66037ff0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



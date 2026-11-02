/* Module: rmbe3260.dll
   Function: FUN_66013770
   Address: 66013770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66013770(void *this,byte param_1)

{
  FUN_660137a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



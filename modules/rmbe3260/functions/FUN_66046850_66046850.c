/* Module: rmbe3260.dll
   Function: FUN_66046850
   Address: 66046850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66046850(void *this,byte param_1)

{
  FUN_66046880(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



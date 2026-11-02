/* Module: rmbe3260.dll
   Function: FUN_66036ef0
   Address: 66036ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66036ef0(void *this,byte param_1)

{
  FUN_66036f20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



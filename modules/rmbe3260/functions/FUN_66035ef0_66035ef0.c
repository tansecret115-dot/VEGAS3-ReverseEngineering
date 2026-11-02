/* Module: rmbe3260.dll
   Function: FUN_66035ef0
   Address: 66035ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66035ef0(void *this,byte param_1)

{
  FUN_66035f20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



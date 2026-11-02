/* Module: rmbe3260.dll
   Function: FUN_66013b70
   Address: 66013b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66013b70(void *this,byte param_1)

{
  FUN_66013ba0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



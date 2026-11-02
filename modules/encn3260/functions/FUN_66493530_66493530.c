/* Module: encn3260.dll
   Function: FUN_66493530
   Address: 66493530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66493530(void *this,byte param_1)

{
  FUN_66493560(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



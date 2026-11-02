/* Module: encn3260.dll
   Function: FUN_664cbbf0
   Address: 664cbbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664cbbf0(void *this,byte param_1)

{
  FUN_664cbc20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



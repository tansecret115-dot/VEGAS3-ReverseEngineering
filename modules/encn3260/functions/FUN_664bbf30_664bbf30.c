/* Module: encn3260.dll
   Function: FUN_664bbf30
   Address: 664bbf30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664bbf30(void *this,byte param_1)

{
  FUN_664bbf20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



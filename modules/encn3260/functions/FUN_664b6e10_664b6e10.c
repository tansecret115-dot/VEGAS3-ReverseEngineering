/* Module: encn3260.dll
   Function: FUN_664b6e10
   Address: 664b6e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664b6e10(void *this,byte param_1)

{
  FUN_664b6e40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



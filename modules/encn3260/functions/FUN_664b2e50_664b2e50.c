/* Module: encn3260.dll
   Function: FUN_664b2e50
   Address: 664b2e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664b2e50(void *this,byte param_1)

{
  FUN_664b2e80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



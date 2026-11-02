/* Module: encn3260.dll
   Function: FUN_664b0f70
   Address: 664b0f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664b0f70(void *this,byte param_1)

{
  FUN_664b0fa0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



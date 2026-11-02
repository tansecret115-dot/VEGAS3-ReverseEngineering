/* Module: encn3260.dll
   Function: FUN_664d7aa0
   Address: 664d7aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d7aa0(void *this,byte param_1)

{
  FUN_664d7b10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: erv13260.dll
   Function: FUN_636027a0
   Address: 636027a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_636027a0(void *this,byte param_1)

{
  FUN_636027d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



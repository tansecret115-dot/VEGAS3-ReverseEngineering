/* Module: encn3260.dll
   Function: FUN_664d5460
   Address: 664d5460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d5460(void *this,byte param_1)

{
  FUN_664d5490(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



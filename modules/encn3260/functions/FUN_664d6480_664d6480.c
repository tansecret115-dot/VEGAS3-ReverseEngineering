/* Module: encn3260.dll
   Function: FUN_664d6480
   Address: 664d6480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664d6480(void *this,byte param_1)

{
  FUN_664d64b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



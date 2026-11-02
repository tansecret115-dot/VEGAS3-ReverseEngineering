/* Module: dnet3260.dll
   Function: FUN_63051170
   Address: 63051170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_63051170(void *this,byte param_1)

{
  FUN_63051780(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



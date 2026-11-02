/* Module: dnet3260.dll
   Function: FUN_63052700
   Address: 63052700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_63052700(void *this,byte param_1)

{
  FUN_63052730(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



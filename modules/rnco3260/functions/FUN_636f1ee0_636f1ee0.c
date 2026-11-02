/* Module: rnco3260.dll
   Function: FUN_636f1ee0
   Address: 636f1ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_636f1ee0(void *this,byte param_1)

{
  FUN_636f1f10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rnco3260.dll
   Function: FUN_636f2c90
   Address: 636f2c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_636f2c90(void *this,byte param_1)

{
  FUN_636f2cc0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



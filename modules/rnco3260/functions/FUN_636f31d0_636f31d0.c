/* Module: rnco3260.dll
   Function: FUN_636f31d0
   Address: 636f31d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_636f31d0(void *this,byte param_1)

{
  FUN_636f3200(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: sipr3260.dll
   Function: FUN_632a21d0
   Address: 632a21d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_632a21d0(void *this,byte param_1)

{
  FUN_632a2200(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



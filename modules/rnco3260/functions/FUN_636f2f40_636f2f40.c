/* Module: rnco3260.dll
   Function: FUN_636f2f40
   Address: 636f2f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_636f2f40(void *this,byte param_1)

{
  FUN_636f2f70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



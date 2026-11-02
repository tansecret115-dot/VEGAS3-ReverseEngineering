/* Module: sipr3260.dll
   Function: FUN_632a1090
   Address: 632a1090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_632a1090(void *this,byte param_1)

{
  FUN_632a1a10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



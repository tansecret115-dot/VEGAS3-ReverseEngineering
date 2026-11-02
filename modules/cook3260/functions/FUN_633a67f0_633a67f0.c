/* Module: cook3260.dll
   Function: FUN_633a67f0
   Address: 633a67f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_633a67f0(void *this,byte param_1)

{
  FUN_633a6820(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



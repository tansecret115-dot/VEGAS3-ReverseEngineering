/* Module: cook3260.dll
   Function: FUN_633a20b0
   Address: 633a20b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_633a20b0(void *this,byte param_1)

{
  FUN_633a20e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



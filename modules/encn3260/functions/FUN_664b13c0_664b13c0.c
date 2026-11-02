/* Module: encn3260.dll
   Function: FUN_664b13c0
   Address: 664b13c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664b13c0(void *this,byte param_1)

{
  FUN_664b13f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: encn3260.dll
   Function: FUN_664ae950
   Address: 664ae950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664ae950(void *this,byte param_1)

{
  FUN_664ae980(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



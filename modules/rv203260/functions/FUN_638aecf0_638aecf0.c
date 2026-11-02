/* Module: rv203260.dll
   Function: FUN_638aecf0
   Address: 638aecf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_638aecf0(void *this,byte param_1)

{
  FUN_638aed20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



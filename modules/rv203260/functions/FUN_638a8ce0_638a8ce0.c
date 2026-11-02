/* Module: rv203260.dll
   Function: FUN_638a8ce0
   Address: 638a8ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_638a8ce0(void *this,byte param_1)

{
  FUN_638a8d10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



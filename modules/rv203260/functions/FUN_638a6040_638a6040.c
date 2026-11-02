/* Module: rv203260.dll
   Function: FUN_638a6040
   Address: 638a6040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_638a6040(void *this,byte param_1)

{
  FUN_638a6070(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: basc3260.dll
   Function: FUN_627f3cf0
   Address: 627f3cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627f3cf0(void *this,byte param_1)

{
  FUN_627f3d20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



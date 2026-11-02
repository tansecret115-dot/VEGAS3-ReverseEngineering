/* Module: basc3260.dll
   Function: FUN_627f3d70
   Address: 627f3d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627f3d70(void *this,byte param_1)

{
  FUN_627f3da0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



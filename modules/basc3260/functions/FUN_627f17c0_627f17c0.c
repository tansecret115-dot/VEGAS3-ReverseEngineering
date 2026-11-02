/* Module: basc3260.dll
   Function: FUN_627f17c0
   Address: 627f17c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627f17c0(void *this,byte param_1)

{
  FUN_627f17f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



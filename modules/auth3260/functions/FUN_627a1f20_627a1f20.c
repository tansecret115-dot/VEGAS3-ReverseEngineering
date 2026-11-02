/* Module: auth3260.dll
   Function: FUN_627a1f20
   Address: 627a1f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627a1f20(void *this,byte param_1)

{
  FUN_627a1f50(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



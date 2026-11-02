/* Module: auth3260.dll
   Function: FUN_627a5140
   Address: 627a5140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627a5140(void *this,byte param_1)

{
  FUN_627a5170(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



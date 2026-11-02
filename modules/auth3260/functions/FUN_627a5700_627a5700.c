/* Module: auth3260.dll
   Function: FUN_627a5700
   Address: 627a5700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627a5700(void *this,byte param_1)

{
  FUN_627a5730(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: auth3260.dll
   Function: FUN_627a2e80
   Address: 627a2e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627a2e80(void *this,byte param_1)

{
  FUN_627a2eb0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



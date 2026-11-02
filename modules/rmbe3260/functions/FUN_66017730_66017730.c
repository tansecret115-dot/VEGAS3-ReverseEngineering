/* Module: rmbe3260.dll
   Function: FUN_66017730
   Address: 66017730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66017730(void *this,byte param_1)

{
  FUN_66017760(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



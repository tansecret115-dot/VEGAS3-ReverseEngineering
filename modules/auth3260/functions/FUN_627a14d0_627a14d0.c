/* Module: auth3260.dll
   Function: FUN_627a14d0
   Address: 627a14d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_627a14d0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_627a7970;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



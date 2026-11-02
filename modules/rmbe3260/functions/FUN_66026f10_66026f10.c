/* Module: rmbe3260.dll
   Function: FUN_66026f10
   Address: 66026f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66026f10(void *this,byte param_1)

{
  FUN_66026f40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



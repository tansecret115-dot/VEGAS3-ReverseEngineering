/* Module: rmbe3260.dll
   Function: FUN_6602aa40
   Address: 6602aa40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6602aa40(void *this,byte param_1)

{
  FUN_6602aa70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



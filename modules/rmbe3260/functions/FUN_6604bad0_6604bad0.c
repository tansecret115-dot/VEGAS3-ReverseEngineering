/* Module: rmbe3260.dll
   Function: FUN_6604bad0
   Address: 6604bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604bad0(void *this,byte param_1)

{
  FUN_6604bb00(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



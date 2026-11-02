/* Module: rmbe3260.dll
   Function: FUN_6604bd60
   Address: 6604bd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604bd60(void *this,byte param_1)

{
  FUN_6604bd90(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



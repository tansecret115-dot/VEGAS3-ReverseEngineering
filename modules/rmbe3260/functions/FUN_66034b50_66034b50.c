/* Module: rmbe3260.dll
   Function: FUN_66034b50
   Address: 66034b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66034b50(void *this,byte param_1)

{
  FUN_66034b80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



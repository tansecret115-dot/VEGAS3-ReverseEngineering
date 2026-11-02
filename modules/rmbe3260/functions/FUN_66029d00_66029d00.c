/* Module: rmbe3260.dll
   Function: FUN_66029d00
   Address: 66029d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66029d00(void *this,byte param_1)

{
  FUN_66029d30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



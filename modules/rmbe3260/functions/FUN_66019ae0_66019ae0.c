/* Module: rmbe3260.dll
   Function: FUN_66019ae0
   Address: 66019ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66019ae0(void *this,byte param_1)

{
  FUN_66019b10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



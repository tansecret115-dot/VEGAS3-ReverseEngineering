/* Module: rmbe3260.dll
   Function: FUN_6600a770
   Address: 6600a770
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNDialog * __thiscall FUN_6600a770(void *this,byte param_1)

{
  FUN_6600a7a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



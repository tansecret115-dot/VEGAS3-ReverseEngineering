/* Module: rmbe3260.dll
   Function: FUN_660041b0
   Address: 660041b0
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_660041b0(void *this,byte param_1)

{
  FUN_660041e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



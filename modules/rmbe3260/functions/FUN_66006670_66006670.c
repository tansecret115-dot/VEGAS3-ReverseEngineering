/* Module: rmbe3260.dll
   Function: FUN_66006670
   Address: 66006670
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66006670(void *this,byte param_1)

{
  FUN_660066a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



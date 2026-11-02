/* Module: rmbe3260.dll
   Function: FUN_66005ea0
   Address: 66005ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66005ea0(void *this,byte param_1)

{
  FUN_66005ed0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_66005080
   Address: 66005080
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66005080(void *this,byte param_1)

{
  FUN_660050b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



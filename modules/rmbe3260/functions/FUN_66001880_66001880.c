/* Module: rmbe3260.dll
   Function: FUN_66001880
   Address: 66001880
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66001880(void *this,byte param_1)

{
  FUN_660018b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_66008890
   Address: 66008890
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66008890(void *this,byte param_1)

{
  FUN_660088c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_66008060
   Address: 66008060
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66008060(void *this,byte param_1)

{
  FUN_66008090(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



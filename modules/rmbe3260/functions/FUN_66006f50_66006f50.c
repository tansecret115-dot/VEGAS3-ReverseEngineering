/* Module: rmbe3260.dll
   Function: FUN_66006f50
   Address: 66006f50
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66006f50(void *this,byte param_1)

{
  FUN_66006f80(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



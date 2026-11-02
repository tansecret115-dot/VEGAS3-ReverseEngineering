/* Module: rmbe3260.dll
   Function: FUN_66003c20
   Address: 66003c20
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNPropertyPage * __thiscall FUN_66003c20(void *this,byte param_1)

{
  FUN_66003c50(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmbe3260.dll
   Function: FUN_6605a850
   Address: 6605a850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6605a850(void *this,byte param_1)

{
  FUN_6605a880(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



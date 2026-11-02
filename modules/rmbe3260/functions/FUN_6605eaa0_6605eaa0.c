/* Module: rmbe3260.dll
   Function: FUN_6605eaa0
   Address: 6605eaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6605eaa0(void *this,byte param_1)

{
  FUN_6605ead0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



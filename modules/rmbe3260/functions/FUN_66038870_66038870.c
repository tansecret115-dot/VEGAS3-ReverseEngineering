/* Module: rmbe3260.dll
   Function: FUN_66038870
   Address: 66038870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66038870(void *this,byte param_1)

{
  FUN_660388a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



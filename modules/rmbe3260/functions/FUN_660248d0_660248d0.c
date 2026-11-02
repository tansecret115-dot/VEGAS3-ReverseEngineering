/* Module: rmbe3260.dll
   Function: FUN_660248d0
   Address: 660248d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_660248d0(void *this,byte param_1)

{
  FUN_66024900(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



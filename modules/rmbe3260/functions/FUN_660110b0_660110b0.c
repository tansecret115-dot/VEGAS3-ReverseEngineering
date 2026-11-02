/* Module: rmbe3260.dll
   Function: FUN_660110b0
   Address: 660110b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_660110b0(void *this,byte param_1)

{
  FUN_660110e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



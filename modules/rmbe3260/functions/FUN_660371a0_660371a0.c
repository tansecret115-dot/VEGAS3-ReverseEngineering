/* Module: rmbe3260.dll
   Function: FUN_660371a0
   Address: 660371a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_660371a0(void *this,byte param_1)

{
  FUN_660371d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



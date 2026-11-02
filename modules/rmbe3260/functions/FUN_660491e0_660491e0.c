/* Module: rmbe3260.dll
   Function: FUN_660491e0
   Address: 660491e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_660491e0(void *this,byte param_1)

{
  FUN_66049210(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



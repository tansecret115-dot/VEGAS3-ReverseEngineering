/* Module: rmbe3260.dll
   Function: FUN_66018df0
   Address: 66018df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66018df0(void *this,byte param_1)

{
  FUN_660196b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



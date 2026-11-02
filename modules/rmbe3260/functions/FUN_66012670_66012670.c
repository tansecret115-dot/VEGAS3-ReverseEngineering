/* Module: rmbe3260.dll
   Function: FUN_66012670
   Address: 66012670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66012670(void *this,byte param_1)

{
  FUN_660126a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



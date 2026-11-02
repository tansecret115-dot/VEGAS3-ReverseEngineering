/* Module: rmbe3260.dll
   Function: FUN_66016db0
   Address: 66016db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66016db0(void *this,byte param_1)

{
  FUN_66016de0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



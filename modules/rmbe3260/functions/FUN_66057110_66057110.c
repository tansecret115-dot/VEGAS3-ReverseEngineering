/* Module: rmbe3260.dll
   Function: FUN_66057110
   Address: 66057110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66057110(void *this,byte param_1)

{
  FUN_66057180(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



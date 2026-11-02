/* Module: rmbe3260.dll
   Function: FUN_66058470
   Address: 66058470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66058470(void *this,byte param_1)

{
  FUN_660584a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



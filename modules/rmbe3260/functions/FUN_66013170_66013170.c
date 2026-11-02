/* Module: rmbe3260.dll
   Function: FUN_66013170
   Address: 66013170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66013170(void *this,byte param_1)

{
  FUN_660131a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



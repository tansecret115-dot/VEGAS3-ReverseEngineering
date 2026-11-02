/* Module: rmbe3260.dll
   Function: FUN_66037830
   Address: 66037830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66037830(void *this,byte param_1)

{
  FUN_66037860(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



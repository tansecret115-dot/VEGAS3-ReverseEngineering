/* Module: pnrs3260.dll
   Function: FUN_606f1070
   Address: 606f1070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_606f1070(void *this,byte param_1)

{
  FUN_606f10a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



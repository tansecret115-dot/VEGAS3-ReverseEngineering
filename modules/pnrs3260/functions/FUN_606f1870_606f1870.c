/* Module: pnrs3260.dll
   Function: FUN_606f1870
   Address: 606f1870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_606f1870(void *this,byte param_1)

{
  FUN_606f18a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



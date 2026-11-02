/* Module: pnrs3260.dll
   Function: FUN_606f2190
   Address: 606f2190
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_606f2190(void *this,byte param_1)

{
  FUN_606f21c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



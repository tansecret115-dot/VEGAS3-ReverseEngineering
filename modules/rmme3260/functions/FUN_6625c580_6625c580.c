/* Module: rmme3260.dll
   Function: FUN_6625c580
   Address: 6625c580
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6625c580(void *this,byte param_1)

{
  FUN_6625c5b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



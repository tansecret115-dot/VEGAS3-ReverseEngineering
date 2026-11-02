/* Module: rmto3260.dll
   Function: FUN_662f9580
   Address: 662f9580
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_662f9580(void *this,byte param_1)

{
  FUN_662f95b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



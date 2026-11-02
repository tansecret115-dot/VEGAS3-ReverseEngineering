/* Module: rmto3260.dll
   Function: FUN_662ed710
   Address: 662ed710
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_662ed710(void *this,byte param_1)

{
  FUN_662ed740(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



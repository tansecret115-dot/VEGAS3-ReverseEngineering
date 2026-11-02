/* Module: encn3260.dll
   Function: FUN_664c8230
   Address: 664c8230
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664c8230(void *this,byte param_1)

{
  FUN_664c8260(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



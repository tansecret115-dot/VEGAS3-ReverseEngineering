/* Module: rmme3260.dll
   Function: FUN_66250a10
   Address: 66250a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66250a10(void *this,byte param_1)

{
  FUN_66250a40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



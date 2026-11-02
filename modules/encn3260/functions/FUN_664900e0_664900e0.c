/* Module: encn3260.dll
   Function: FUN_664900e0
   Address: 664900e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664900e0(void *this,byte param_1)

{
  FUN_66490110(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



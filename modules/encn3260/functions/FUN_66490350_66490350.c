/* Module: encn3260.dll
   Function: FUN_66490350
   Address: 66490350
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66490350(void *this,byte param_1)

{
  FUN_66490380(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



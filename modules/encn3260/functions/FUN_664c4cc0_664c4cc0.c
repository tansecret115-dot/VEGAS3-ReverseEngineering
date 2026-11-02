/* Module: encn3260.dll
   Function: FUN_664c4cc0
   Address: 664c4cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664c4cc0(void *this,byte param_1)

{
  FUN_664c4c20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



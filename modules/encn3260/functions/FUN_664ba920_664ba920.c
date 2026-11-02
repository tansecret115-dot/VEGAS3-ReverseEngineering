/* Module: encn3260.dll
   Function: FUN_664ba920
   Address: 664ba920
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_664ba920(void *this,byte param_1)

{
  FUN_664ba950(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



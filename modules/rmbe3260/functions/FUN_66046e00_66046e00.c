/* Module: rmbe3260.dll
   Function: FUN_66046e00
   Address: 66046e00
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66046e00(void *this,byte param_1)

{
  FUN_66046e30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



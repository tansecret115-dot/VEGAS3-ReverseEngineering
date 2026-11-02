/* Module: rmbe3260.dll
   Function: FUN_66022300
   Address: 66022300
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66022300(void *this,byte param_1)

{
  FUN_66022330(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



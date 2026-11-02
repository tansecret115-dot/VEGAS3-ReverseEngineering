/* Module: rmbe3260.dll
   Function: FUN_6605c400
   Address: 6605c400
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6605c400(void *this,byte param_1)

{
  FUN_6605c430(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



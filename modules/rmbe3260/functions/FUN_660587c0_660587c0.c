/* Module: rmbe3260.dll
   Function: FUN_660587c0
   Address: 660587c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_660587c0(void *this,byte param_1)

{
  FUN_660587f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



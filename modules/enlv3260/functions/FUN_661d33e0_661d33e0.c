/* Module: enlv3260.dll
   Function: FUN_661d33e0
   Address: 661d33e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_661d33e0(void *this,byte param_1)

{
  FUN_661d3410(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



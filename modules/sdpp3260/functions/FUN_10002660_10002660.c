/* Module: sdpp3260.dll
   Function: FUN_10002660
   Address: 10002660
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_10002660(void *this,byte param_1)

{
  FUN_10002690(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* Module: rmto3260.dll
   Function: FUN_662cc530
   Address: 662cc530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662cc530(void *this,byte param_1)

{
  FUN_662cc560(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



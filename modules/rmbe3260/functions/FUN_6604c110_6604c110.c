/* Module: rmbe3260.dll
   Function: FUN_6604c110
   Address: 6604c110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604c110(void *this,byte param_1)

{
  FUN_6604c140(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



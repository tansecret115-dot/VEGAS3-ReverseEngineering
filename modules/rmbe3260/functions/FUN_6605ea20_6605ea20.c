/* Module: rmbe3260.dll
   Function: FUN_6605ea20
   Address: 6605ea20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6605ea20(void *this,byte param_1)

{
  FUN_6605ea50(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


